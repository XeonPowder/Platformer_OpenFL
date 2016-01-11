package core3.entity.npc;

class NPC extends Entity{

	private var npc 							:				openfl.display.Sprite;
	private var npcBMD 							: 				openfl.display.Bitmap;
	private var npcBMDright 					: 				openfl.display.Bitmap;
	private var npcBMDleft 						: 				openfl.display.Bitmap;
	private var npcBMDup 						: 				openfl.display.Bitmap;
	private var npcBMDdown 						: 				openfl.display.Bitmap;
	private var currentNPCBMD 					: 				openfl.display.Bitmap;
	private var npcProperties 					: 				core3.entity.EntityProperties;
	private var npcMultiplier 					:		 		core3.entity.npc.NPCMultiplier;
	private var npcInventory 					: 				core3.entity.Inventory;
	private var cachedInventory 				: 				Array<Int>;
	private var init 							: 				Bool;
	private var cachedEnergy 					:				Float;
	private var cachedHealth 					: 				Float;
	private var aggro 							: 				Bool;
	private var usesProperties 					: 				Bool;
	private var hasInventory 					: 				Bool;

	public function new(?properties:Bool = true, ?inventory:Bool = true, ?multipliers:Bool = true){
		init = true;
		type = "npc";
		aggro = false;
		npc = new openfl.display.Sprite();
		npcBMDright = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/npc/witch/movement/right/right.png"));
		npcBMDleft = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/npc/witch/movement/left/left.png"));
		npcBMDup = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/npc/witch/movement/up/up.png"));
		npcBMDdown = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/npc/witch/movement/down/down.png"));
		currentNPCBMD = npcBMDright;
		npc.addChild(currentNPCBMD);
		npc.x = Std.int(man.stage.stageWidth/2);
		npc.y = Std.int(man.stage.stageHeight/2);
		super(npc, currentNPCBMD.width, currentNPCBMD.height);
		if(properties){
			npcProperties = new NPCProperties(this);
		}
		if(inventory){
			npcInventory = new core3.entity.Inventory(man);
			cachedInventory = npcInventory.getInventory();
		}
		if(multipliers){
			npcMultiplier = new NPCMultiplier(this);
		}

		cachedEnergy = npcProperties.getEnergy();
		cachedHealth = npcProperties.getHealth();

		if(!man.hardcore()){
			npchealthbar = new openfl.display.Sprite();
			npcenergybar = new openfl.display.Sprite();
		}
	}
	public override function update(){
		if(init){
			man.stage.addChild(npcOverlay);
			if(!man.hardcore()){
				man.stage.addChild(npchealthbar);
				man.stage.addChild(npcenergybar);
			}
			man.stage.addChild(npc);
			init = false;
		}
		updateStats();
		pickupItems();
		updateLocation();
		
	}
	public function updateStats(){
		if(npcProperties.getHealth() != cachedHealth){
			if(!man.hardcore()){
				npchealthbar.graphics.clear();
				npchealthbar.graphics.beginFill(0x00FF00,1);
				npchealthbar.graphics.drawRect(5, 30, npcProperties.getHealth(), 15);
				npchealthbar.graphics.endFill();
			}
			cachedHealth = npcProperties.getHealth();
		}
		if(npcProperties.getEnergy() != cachedEnergy){
			npcenergybar.graphics.clear();
			if(!man.hardcore()){
				npcenergybar.graphics.beginFill(0x00FFFF,1);
				npcenergybar.graphics.drawRect(5, 50, npcProperties.getEnergy(), 15);
				npcenergybar.graphics.endFill();
			}
			cachedEnergy = npcProperties.getEnergy();
		}
		if(npcProperties.getExperienceGained() > 0){
			npcProperties.setExperience(npcProperties.getExperience() + npcProperties.getExperienceGained());
			npcProperties.setExperienceGained(0);
		}
		if(npcProperties.getDamageRecieved() > 0){
			npcProperties.setHealth((npcProperties.getHealth() - npcProperties.getDamageRecieved()), false);
			npcProperties.setDamageRecieved(0);
		}
		if(npcProperties.getHealth() <= 0 && !man.getNotificationManager().containsName(core3.Const._HEALTHDEPLETED)){
			newNotification(new core3.notification.Notification(man, core3.Const._RIP, core3.Const._HEALTHDEPLETED));
		}else if(npcProperties.getHealth() <= 20 && !man.getNotificationManager().containsName(core3.Const._HEALTHCRITICAL)){
			newNotification(new core3.notification.Notification(man, core3.Const._WARNING, core3.Const._HEALTHCRITICAL));
		}
	}
	public function updateLocation(){
		if( man.getKeyState(openfl.ui.Keyboard.LEFT) || man.getKeyState(openfl.ui.Keyboard.A)){
			npcProperties.setFacingDirection(270);
			if(npc.getChildAt(npc.getChildIndex(currentNPCBMD)) != npcBMDleft){
				npc.removeChild(currentNPCBMD);
				currentNPCBMD = npcBMDleft;
				npc.addChild(currentNPCBMD);
			}
			npc.x -= Std.int(Const.GRIDX/3);
		}
		if( man.getKeyState(openfl.ui.Keyboard.RIGHT)|| man.getKeyState(openfl.ui.Keyboard.D)){
			npcProperties.setFacingDirection(90);
			if(npc.getChildAt(npc.getChildIndex(currentNPCBMD)) != npcBMDright){
				npc.removeChild(currentNPCBMD);
				currentNPCBMD = npcBMDright;
				npc.addChild(currentNPCBMD);
			}
			npc.x += Std.int(Const.GRIDX/3);
		}
			
		if( man.getKeyState(openfl.ui.Keyboard.UP)|| man.getKeyState(openfl.ui.Keyboard.W)){
			npcProperties.setFacingDirection(0);
			if(npc.getChildAt(npc.getChildIndex(currentNPCBMD)) != npcBMDup){
				npc.removeChild(currentNPCBMD);
				currentNPCBMD = npcBMDup;
				npc.addChild(currentNPCBMD);
			}
			npc.y -= Std.int(Const.GRIDY/3);
		}

		if( man.getKeyState(openfl.ui.Keyboard.DOWN)|| man.getKeyState(openfl.ui.Keyboard.S)){
			npcProperties.setFacingDirection(180);
			if(npc.getChildAt(npc.getChildIndex(currentNPCBMD)) != npcBMDdown){
				npc.removeChild(currentNPCBMD);
				currentNPCBMD = npcBMDdown;
				npc.addChild(currentNPCBMD);
			}
			npc.y += Std.int(Const.GRIDY/3);
		}
	}
	public function updateProjectiles(){
		if( man.getKeyState(openfl.ui.Keyboard.SPACE) && ((man.getKTime() - timeSinceLastShot()) > npcProperties.getAttackSpeed()*60)){
			tsls = man.getKTime();
			if(npcProperties.getEnergy() > npcProperties.getRequiredEnergy(Const._SHOOTENERGY)){
				newProjectile(new core3.entity.projectile.Projectile(this, npcProperties.getFacingDirection(), "assets/projectile/fireball.png"));
				npcProperties.setEnergy(npcProperties.getEnergy() - npcProperties.getRequiredEnergy(Const._SHOOTENERGY), false);
			}else{
			}
		}
		if( projectileAirborn() && projectileList.length > 0){
			for(x in 0 ... projectileList.length){
				projectileList[x].update();
			}
		}
	}
	public function updateInventory(){
		if(npcInventory.hasInventoryValuesChanged(cachedInventory)){
			for(x in 0 ... npcInventory.getInventory().length){
				if(npcInventory.getInventory()[x] != cachedInventory[x]){
					var item:core3.Item = man.getItemByID(npcInventory.getInventory()[x]);
					var cItem:core3.Item = man.getItemByID(cachedInventory[x]);
					if(item.hasMultiplierEffect()){
						item.setMultiplierIndex(npcMultiplier.addMultiplier(item.getMultiplierEffectType(), item.getMultiplier()));
						updateMultiplier(item.getMultiplierEffectType());
					}
					if(cItem.hasMultiplierEffect()){
						npcMultiplier.removeMultiplier(item.getMultiplierEffectType(), item.getMultiplier(), item.getMultiplierIndex());
						updateMultiplier(cItem.getMultiplierEffectType());
					}
				}
			}
		}
		cachedInventory = npcInventory.getInventory();
	}
	public function updateMultiplier(type:String){
		npcProperties.multiplyStat(type);
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
		projectile.x = npc.x;
		projectile.y = npc.y;
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
			if(core3.Const.distanceBetween(new openfl.geom.Point(itemOnFloor.getLinkedEntity().getSpriteX(), itemOnFloor.getLinkedEntity().getSpriteY()), new openfl.geom.Point(npc.x, npc.y)) < core3.Const._PICKUPDISTANCE){
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
		if(npcInventory.addToInventory(item) == -1){
			if(man._debug())trace("Item: "+ item +" not added to inventory!");
		}
		man.removeItemFromFloor(item);
		item.getLinkedEntity().removeFromStage();
	}
	public override function getMultiplier():core3.entity.npc.NPCMultiplier{
		return npcMultiplier;
	}
}