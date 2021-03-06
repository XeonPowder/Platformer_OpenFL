package core3.entity.hero;

class Hero extends Entity{

	private var hero 							:				openfl.display.Sprite;
	private var heroBMD 						: 				openfl.display.Bitmap;
	private var heroBMDright 					: 				openfl.display.Bitmap;
	private var heroBMDleft 					: 				openfl.display.Bitmap;
	private var heroBMDup 						: 				openfl.display.Bitmap;
	private var heroBMDdown 					: 				openfl.display.Bitmap;
	private var currentHeroBMD 					: 				openfl.display.Bitmap;
	private var heroProperties 					: 				core3.entity.EntityProperties;
	private var herohealthbar 					:				openfl.display.Sprite;
	private var heroInventory 					: 				core3.entity.Inventory;
	private var cachedInventory 				: 				Array<Int>;
	private var init 							: 				Bool;
	private var heroMultiplier 					:		 		core3.entity.hero.HeroMultiplier;
	private var heroOverlay 					: 				openfl.display.Sprite;
	private var heroenergybar 					: 				openfl.display.Sprite;
	private var cachedEnergy 					:				Float;
	private var cachedHealth 					: 				Float;
	
	public function new(){
		init = true;
		type = "player";
		hero = new openfl.display.Sprite();
		heroBMDright = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/entity/hero/movement/right/right.png"));
		heroBMDleft = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/entity/hero/movement/left/left.png"));
		heroBMDup = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/entity/hero/movement/up/up.png"));
		heroBMDdown = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/entity/hero/movement/down/down.png"));
		currentHeroBMD = heroBMDright;
		hero.addChild(currentHeroBMD);
		hero.x = Std.int(man.stage.stageWidth/2);
		hero.y = Std.int(man.stage.stageHeight/2);
		super(hero, currentHeroBMD.width, currentHeroBMD.height);

		heroInventory = new core3.entity.Inventory(man);
		cachedInventory = heroInventory.getInventory();
		heroMultiplier = new HeroMultiplier(this);
		heroProperties = new HeroProperties(this);

		cachedEnergy = heroProperties.getEnergy();
		cachedHealth = heroProperties.getHealth();
		

		heroOverlay = new openfl.display.Sprite();
		var heroOverlayBMD:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/overlay/game/gameoverlay.png"));
		heroOverlay.addChild(heroOverlayBMD);

		
		if(!man.hardcore()){
			herohealthbar = new openfl.display.Sprite();
			herohealthbar.graphics.beginFill(0x00FF00,1);
			herohealthbar.graphics.drawRect(5, 30, cachedHealth, 15);
			herohealthbar.graphics.endFill();
			heroenergybar = new openfl.display.Sprite();
			heroenergybar.graphics.beginFill(0x00FFFF,1);
			heroenergybar.graphics.drawRect(5, 50, cachedEnergy, 15);
			heroenergybar.graphics.endFill();
		}

	}
	public override function update(){
		if(init){

			man.stage.addChild(heroOverlay);
			if(!man.hardcore()){
				man.stage.addChild(herohealthbar);
				man.stage.addChild(heroenergybar);
			}
			man.stage.addChild(hero);
			init = false;
		}
		if(man._debug())checkForDevInput();
		checkForUserInput();
		updateInventory();
		updateStats();
		updateLocation();
		updateProjectiles();
		
		
	}
	public override function getMultiplier():core3.entity.hero.HeroMultiplier{
		return heroMultiplier;
	}
	public function checkForUserInput(){
		if( man.getKeyState(openfl.ui.Keyboard.E)){
			collectItems();
		}
		if( man.getKeyState(openfl.ui.Keyboard.I)){
			if(man._debug())trace("----------------------------------------------");
			for(x in 0 ... heroInventory.getInventory().length){
				if(man._debug())trace("ID: " + heroInventory.getInventory()[x] + ", Name: "+heroInventory.getInventoryNames()[x]+", Count: "+heroInventory.getInventoryStack()[x]);
			}
		}
		if( man.getKeyState(openfl.ui.Keyboard.G)){
			heroProperties.setDamageRecieved(1);
		}
		if( man.getKeyState(openfl.ui.Keyboard.R)){
			if(man._debug()){
				heroProperties.setHealth(heroProperties.base_hp);
			}
		}
	}
	public function checkForDevInput(){
		if( man.getKeyState(openfl.ui.Keyboard.F)){
			heroProperties.setEnergy(heroProperties.getEnergy()*2);
			if(man._debug())trace(heroProperties.getEnergy());
		}
	}
	public function updateStats(){
		if(heroProperties.getHealth() != cachedHealth){
			herohealthbar.graphics.clear();
			herohealthbar.graphics.beginFill(0x00FF00,1);
			herohealthbar.graphics.drawRect(5, 30, heroProperties.getHealth(), 15);
			herohealthbar.graphics.endFill();
			cachedHealth = heroProperties.getHealth();
		}
		if(heroProperties.getEnergy() != cachedEnergy){
			heroenergybar.graphics.clear();
			heroenergybar.graphics.beginFill(0x00FFFF,1);
			heroenergybar.graphics.drawRect(5, 50, heroProperties.getEnergy(), 15);
			heroenergybar.graphics.endFill();
			cachedEnergy = heroProperties.getEnergy();
		}
		if(heroProperties.getExperienceGained() > 0){
			heroProperties.setExperience(heroProperties.getExperience() + heroProperties.getExperienceGained(), false);
			heroProperties.setExperienceGained(0);
		}
		if(heroProperties.getDamageRecieved() > 0){
			heroProperties.setHealth(heroProperties.getHealth() - heroProperties.getDamageRecieved(), false);
			heroProperties.setDamageRecieved(0);
		}
		if(heroProperties.getHealth() <= 0 && !man.getNotificationManager().containsName(core3.Const._HEALTHDEPLETED)){
			newNotification(new core3.notification.Notification(man, core3.Const._RIP, core3.Const._HEALTHDEPLETED));
		}else if(heroProperties.getHealth() <= 20 && !man.getNotificationManager().containsName(core3.Const._HEALTHCRITICAL)){
			newNotification(new core3.notification.Notification(man, core3.Const._WARNING, core3.Const._HEALTHCRITICAL));
		}
	}
	public function updateLocation(){
		if( man.getKeyState(openfl.ui.Keyboard.LEFT) || man.getKeyState(openfl.ui.Keyboard.A)){
			heroProperties.setFacingDirection(270);
			if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDleft){
				hero.removeChild(currentHeroBMD);
				currentHeroBMD = heroBMDleft;
				hero.addChild(currentHeroBMD);
			}
			hero.x -= Std.int(Const.GRIDX/3);
		}
		if( man.getKeyState(openfl.ui.Keyboard.RIGHT)|| man.getKeyState(openfl.ui.Keyboard.D)){
			heroProperties.setFacingDirection(90);
			if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDright){
				hero.removeChild(currentHeroBMD);
				currentHeroBMD = heroBMDright;
				hero.addChild(currentHeroBMD);
			}
			hero.x += Std.int(Const.GRIDX/3);
		}
			
		if( man.getKeyState(openfl.ui.Keyboard.UP)|| man.getKeyState(openfl.ui.Keyboard.W)){
			heroProperties.setFacingDirection(0);
			if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDup){
				hero.removeChild(currentHeroBMD);
				currentHeroBMD = heroBMDup;
				hero.addChild(currentHeroBMD);
			}
			hero.y -= Std.int(Const.GRIDY/3);
		}

		if( man.getKeyState(openfl.ui.Keyboard.DOWN)|| man.getKeyState(openfl.ui.Keyboard.S)){
			heroProperties.setFacingDirection(180);
			if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDdown){
				hero.removeChild(currentHeroBMD);
				currentHeroBMD = heroBMDdown;
				hero.addChild(currentHeroBMD);
			}
			hero.y += Std.int(Const.GRIDY/3);
		}
	}
	public function updateProjectiles(){
		if( man.getKeyState(openfl.ui.Keyboard.SPACE) && ((man.getKTime() - timeSinceLastShot()) > heroProperties.getAttackSpeed()*60)){
			tsls = man.getKTime();
			if(heroProperties.getEnergy() > heroProperties.getRequiredEnergy(Const._SHOOTENERGY)){
				newProjectile(new core3.entity.projectile.Projectile(this, heroProperties.getFacingDirection(), "assets/projectile/fireball.png"));
				heroProperties.setEnergy(heroProperties.getEnergy() - heroProperties.getRequiredEnergy(Const._SHOOTENERGY), false);
			}else{
				newNotification(new core3.notification.Notification(man, core3.Const._ERROR, core3.Const._INSUFFICIENTENERGY));
			}
		}
		if( projectileAirborn() && projectileList.length > 0){
			for(x in 0 ... projectileList.length){
				projectileList[x].update();
			}
		}
	}
	public function updateInventory(){
		if(heroInventory.hasInventoryValuesChanged(cachedInventory)){
			for(x in 0 ... heroInventory.getInventory().length){
				if(heroInventory.getInventory()[x] != cachedInventory[x]){
					var item:core3.Item = man.getItemByID(heroInventory.getInventory()[x]);
					var cItem:core3.Item = man.getItemByID(cachedInventory[x]);
					if(item.hasMultiplierEffect()){
						item.setMultiplierIndex(heroMultiplier.addMultiplier(item.getMultiplierEffectType(), item.getMultiplier()));
						updateMultiplier(item.getMultiplierEffectType());
					}
					if(cItem.hasMultiplierEffect()){
						heroMultiplier.removeMultiplier(item.getMultiplierEffectType(), item.getMultiplier(), item.getMultiplierIndex());
						updateMultiplier(cItem.getMultiplierEffectType());
					}
				}
			}
		}
		cachedInventory = heroInventory.getInventory();
	}
	public function updateMultiplier(type:String){
		heroProperties.multiplyStat(type);
	}
	public function projectileAirborn():Bool{
		for(x in 0 ... projectileList.length){
			if(projectileList[x].airborn()){
				return true;
			}
		}		
		return false;
	}
	public function newProjectile(projectile:core3.entity.projectile.Projectile){
		projectileList.push(projectile);
		projectile.x = hero.x;
		projectile.y = hero.y;
	}
	public function timeSinceLastShot():Float{
		return tsls;
	}
	public function newNotification(n:core3.notification.Notification){
		man.getNotificationManager()._new(n);
	}
	public function getItemsInRange():Array<Item>{
		var a:Array<Item> = new Array();
		for(x in 0 ... man.getItemsOnFloor().length){
			var itemOnFloor:core3.Item = man.getItemsOnFloor()[x];
			if(core3.Const.distanceBetween(new openfl.geom.Point(itemOnFloor.getLinkedEntity().getSpriteOrigin()), new openfl.geom.Point(hero.getSpriteOrigin())) < core3.Const._PICKUPDISTANCE){
				a.push(itemOnFloor);
			}
		}
		if(man._debug())trace("Items in Range: "+a.length);
		return a;
	}
	public function collectItems(){
		var itemsInRange:Array<Item> = getItemsInRange();
		if(itemsInRange.length > 0){
			for(x in 0 ... itemsInRange.length){
				collectItem(itemsInRange[x]);
			}
		}
	}
	public function collectItem(item:core3.Item){
		if(heroInventory.addToInventory(item) == -1){
			if(man._debug())trace("Item: "+ item +" not added to inventory!");
		}
		man.removeItemFromFloor(item);
		item.getLinkedEntity().removeFromStage();
	}
}