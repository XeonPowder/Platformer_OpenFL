package core3.entity.hero;

class Hero extends Entity{

	public var hero 							:				openfl.display.Sprite;
	private var heroBMD 						: 				openfl.display.Bitmap;
	private var heroBMDright 					: 				openfl.display.Bitmap;
	private var heroBMDleft 					: 				openfl.display.Bitmap;
	private var heroBMDup 						: 				openfl.display.Bitmap;
	private var heroBMDdown 					: 				openfl.display.Bitmap;
	private var currentHeroBMD 					: 				openfl.display.Bitmap;
	public var heroProperties 					: 				core3.entity.EntityProperties;
	public var herohealthbar 					:				openfl.display.Sprite;
	public var heroInventory 					: 				core3.entity.Inventory;
	private var cachedInventory 				: 				Array<Int>;
	private var init 							: 				Bool;
	public var heroMultiplier 					:		 		core3.entity.hero.HeroMultiplier;
	public var heroOverlay 						: 				openfl.display.Sprite;
	public var heroenergybar 					: 				openfl.display.Sprite;
	public function new(){
		init = true;
		super();
		type = "player";
		hero = new openfl.display.Sprite();
		heroInventory = new core3.entity.Inventory(man);
		cachedInventory = heroInventory.getInventory();
		heroMultiplier = new HeroMultiplier(this, hero);
		heroProperties = new HeroProperties(this);
		heroBMDright = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right.png"));
		heroBMDleft = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left.png"));
		heroBMDup = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left_jump.png"));
		heroBMDdown = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right_jump.png"));
		currentHeroBMD = heroBMDright;
		hero.addChild(currentHeroBMD);

		heroOverlay = new openfl.display.Sprite();
		var heroOverlayBMD:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/overlay/game/gameoverlay.png"));
		heroOverlay.addChild(heroOverlayBMD);

		hero.x = Std.int(man.stage.stageWidth/2);
		hero.y = Std.int(man.stage.stageHeight/2);

		herohealthbar = new openfl.display.Sprite();
		herohealthbar.graphics.beginFill(0x00FF00,1);
		herohealthbar.graphics.drawRect(5, 30, heroProperties.getHealth(), 30);

		heroenergybar = new openfl.display.Sprite();
		heroenergybar.graphics.beginFill(0x00FFFF,1);
		heroenergybar.graphics.drawRect(5, 80, heroProperties.getEnergy(), 30);
	}
	public override function update(){
		if(!init){
			updateStats();
			if(heroProperties.getExperienceGained() > 0){
				heroProperties.setExperience(heroProperties.getExperience()+heroProperties.getExperienceGained());
				heroProperties.setExperienceGained(0);
			}
			if(heroProperties.getDamageRecieved() > 0){
				heroProperties.setHealth(heroProperties.getHealth() - heroProperties.getDamageRecieved());
				heroProperties.setDamageRecieved(0);
			}
			if(heroProperties.getHealth() <= 0){
				man.gameOver("player health reached 0.");
			}
			if( man.getKeyState(openfl.ui.Keyboard.LEFT)){
				heroProperties.setFacingDirection(270);
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDleft){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDleft;
					hero.addChild(currentHeroBMD);
				}
				hero.x -= Std.int(Const.GRIDX/3);
			}
			if( man.getKeyState(openfl.ui.Keyboard.RIGHT)){
				heroProperties.setFacingDirection(90);
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDright){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDright;
					hero.addChild(currentHeroBMD);
				}
				hero.x += Std.int(Const.GRIDX/3);
			}
				
			if( man.getKeyState(openfl.ui.Keyboard.UP)){
				heroProperties.setFacingDirection(0);
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDup){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDup;
					hero.addChild(currentHeroBMD);
				}
				hero.y -= Std.int(Const.GRIDY/3);
			}

			if( man.getKeyState(openfl.ui.Keyboard.DOWN)){
				heroProperties.setFacingDirection(180);
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDdown){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDdown;
					hero.addChild(currentHeroBMD);
				}
				hero.y += Std.int(Const.GRIDY/3);
			}
			if( man.getKeyState(openfl.ui.Keyboard.SPACE)){
				trace(heroProperties.getEnergy());
				if(heroProperties.getEnergy() > heroProperties.getRequiredEnergy(Const._SHOOTENERGY)){
					heroProperties.setEnergy(heroProperties.getEnergy() - heroProperties.getRequiredEnergy(Const._SHOOTENERGY));
					shoot(heroProperties.getFacingDirection());
				}
			}
		}else{
			man.stage.addChild(heroOverlay);
			man.stage.addChild(herohealthbar);
			man.stage.addChild(heroenergybar);
			man.stage.addChild(hero);
			init = false;
		}
	}
	public override function getMultiplier():core3.entity.hero.HeroMultiplier{
		return heroMultiplier;
	}
	public function shoot(direction:Int, ?a:Array<openfl.geom.Point> = null){
		var projectile:openfl.display.Sprite = new openfl.display.Sprite();
		var projectileBMD:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/fireball.png"));
		var heroLocationX = hero.x;
		var heroLocationY = hero.y;
		if(a == null){
			a = new Array();
		}
		if(direction == 90){
			projectile.rotation = direction;
			for(x in 0 ... Std.int(heroLocationX)){
				a[x] = new openfl.geom.Point(heroLocationX-x, heroLocationY);
			}
		}else if(direction == 270){
			projectile.rotation = direction;
			for(x in 0 ... Std.int(man.stage.stageWidth-heroLocationX)){
				a[x] = new openfl.geom.Point(heroLocationX+x, heroLocationY);
			}
		}else if(direction == 0){
			projectile.rotation = direction;
			for(y in 0 ... Std.int(heroLocationY)){
				a[y] = new openfl.geom.Point(heroLocationX, heroLocationY-y);
			}
		}else if(direction == 180){
			projectile.rotation = direction;
			for(y in 0 ... Std.int(man.stage.stageHeight-heroLocationY)){
				a[y] = new openfl.geom.Point(heroLocationX, heroLocationY+y);
			}
		}
		projectile.addChild(projectileBMD);
		man.stage.addChild(projectile);
		h_shoot(direction, projectile, a, 0);
	}
	public function h_shoot(direction:Int, projectile:openfl.display.Sprite, a:Array<openfl.geom.Point>, i:Int){
		if(i >= a.length){
			man.stage.removeChildAt(man.stage.getChildIndex(projectile));
			return;
		}else{
			if(direction == 90 || direction == 270){
				projectile.x = a[i].x;
			}else if(direction == 0 || direction == 180){
				projectile.y = a[i].y;
			}
			h_shoot(direction, projectile, a, i++);
		}
		return;
	}
	public function updateStats(){

	}
	public function updateMultipliers(){
		if(heroInventory.hasInvetoryValuesChanged(cachedInventory)){
			for(x in 0 ... heroInventory.getInventory().length){
				if(heroInventory.getInventory()[x] != cachedInventory[x]){
					var item:core3.Item = man.getItemByID(heroInventory.getInventory()[x]);
					if(item.hasMultiplierEffect()){
						var e:String = item.getMultiplierEffectType();
						var f:Float = heroMultiplier.getMultiplier(e);
					}
				}
			}
			cachedInventory = heroInventory.getInventory();
		}else{
			return;
		}
	}
}