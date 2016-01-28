package core4.entity;

class Entity {
	private var entityType 						: 				String = "";
	private var entityName 						: 				String = "";
	private var entityInventory 				: 				core4.inventory.Inventory = null;
	private var cachedInventory 				: 				Array<core4.item.Item> = null;
	private var sprite 							: 				openfl.display.Sprite = null;
	private var spriteOrigin 					: 				openfl.geom.Point = null;
	private var keyEventList 					: 				Array<core4.entity.EntityEvent> = null;
	private var projectileList 					: 				Array<core4.entity.projectile.Projectile> = null;
	private var hitboxTL 						: 				openfl.geom.Point = null;
	private var hitboxTR 						: 				openfl.geom.Point = null;
	private var hitboxBL 						: 				openfl.geom.Point = null;
	private var hitboxBR 						: 				openfl.geom.Point = null;

	private var canLoot 						: 				Bool;
	private var canShoot						: 				Bool;
	private var canMove 						: 				Bool;
	private var godmode 						: 				Bool;
	private var canUse 							: 				Bool;
	private var hasInventory 					: 				Bool;
	private var init 							: 				Bool;
	private var inventoryState 					: 				Bool;
	private var spawn 							: 				Bool;

	private var health 							: 				Float = 100;
	private var energy 							: 				Float = 100;
	private var tsls 							: 				Float = 0;
	private var experience 						: 				Float = 0;
	private var armor 					 		: 				Float = 0;
	private var movementSpeed 					: 				Float = 3;
	private var attackDamage 					: 				Float = 25;
	private var attackSpeed 					: 				Float = .50;
	private var level 							: 				Int = 30;
	private var experienceGained 				: 				Float = 0;
	private var damageTaken 					: 				Float = 0;
	private var hostility 						: 				Float = 0;

	private var facing 							: 				Int = 0;
	private var cachedFacing 					: 				Int = 0;

	private var bitMap 							: 				openfl.display.Bitmap = null;
	private var left 							: 				openfl.display.Bitmap = null;
	private var right 							: 				openfl.display.Bitmap = null;
	private var up 								: 				openfl.display.Bitmap = null;
	private var down 							: 				openfl.display.Bitmap = null;

	public function new(?bitmap:openfl.display.Bitmap = null, ?spawn_:Bool = true, ?name:String = "<Unknown>", ?type:String = "<Unknown>", ?inventory:Bool = true, ?loot:Bool = true, ?shoot:Bool = true, ?move:Bool = true, ?god:Bool = true, ?use:Bool = true, ?_hostility:Float = 0, ?bUP:openfl.display.Bitmap = null, ?bDOWN:openfl.display.Bitmap = null, ?bLEFT:openfl.display.Bitmap = null, ?bRIGHT:openfl.display.Bitmap = null){
		init = true;
		trace("new entity "+name+", in creation");
		sprite = new openfl.display.Sprite();
		bitMap = bitmap;
		if(bitMap != null){
			trace("bitmap for "+name+ ", is okay!");
			sprite.addChild(bitMap);
			spriteOrigin = getSpriteOrigin();
		}else{
			trace("bitmap for "+name+", is null!");
			spriteOrigin = getSpriteOrigin(false);
		}

		entityType = type;
		entityName = name;
		hasInventory = inventory;
		canLoot = loot;
		canShoot = shoot;
		canMove = move;
		godmode = god;
		canUse = use;
		spawn = spawn_;
		left = bLEFT;
		right = bRIGHT;
		up = bUP;
		down = bDOWN;

		hostility = _hostility;

		core4.Constants._L_ENTITY.push(this);
	}
	public function update(){
		if(!init){
			//trace(keyEventList.length);
			if(keyEventList != null && keyEventList.length > 0){
				for(x in 0 ... keyEventList.length){
					//keyEventList[x].readArgs();
					keyEventList[x].update();
				}
			}
			_updateHitbox();
			//trace("updating stats");
			_updateStats();
			//trace("updating projectiles");
			if(_shootEnabled()){
				_updateProjectiles();
			}
		}else{
			if(spawn){
				_add();
			}
			if(_lootEnabled() || _hasInventory()){
				entityInventory = new core4.inventory.Inventory();
				if(_hasInventory()){
					entityInventory = core4.Constants.getCachedInventory(entityName);
				}
				inventoryState = false;
			}
			if(_shootEnabled()){
				projectileList = new Array();
			}
			if(_godmodeEnabled()){
				health = 99999;
				energy = 99999;
			}
			level = 1;
			init = false;
		}
	}
	public function getHitboxTR():openfl.geom.Point{
		return hitboxTR;
	}
	public function getHitboxBL():openfl.geom.Point{
		return hitboxBL;	
	}
	public function getHitboxTL():openfl.geom.Point{
		return hitboxTL;
	}
	public function getHitboxBR():openfl.geom.Point{
		return hitboxBR;
	}
	public function _updateHitbox(){
		hitboxTL = new openfl.geom.Point(getSpriteOrigin().x - (bitMap.width/2), getSpriteOrigin().y - (bitMap.height/2));
		hitboxTR = new openfl.geom.Point(getSpriteOrigin().x + (bitMap.width/2), getSpriteOrigin().y - (bitMap.height/2));
		hitboxBL = new openfl.geom.Point(getSpriteOrigin().x - (bitMap.width/2), getSpriteOrigin().y + (bitMap.height/2));
		hitboxBR = new openfl.geom.Point(getSpriteOrigin().x + (bitMap.width/2), getSpriteOrigin().y + (bitMap.height/2));
	}
	public function _updateStats(){
		if(damageTaken != 0){
			health -= damageTaken;
			damageTaken = 0;
		}
		if(experienceGained != 0){
			experience += experienceGained;
			experienceGained = 0;
		}
		if(experience >= 100 * level){
			level += 1;
			experience = 0;
		}
		if(health <= 0){
			_delete();
		}
	}
	public function _moveBy(_x:Int, _y:Int){
		if(canMove){
			if(sprite.x + _x < 320 - bitMap.width && sprite.x + _x > 0)
			sprite.x += _x;
			if(sprite.y + _y < 320 - bitMap.height && sprite.y + _y > 0)
			sprite.y += _y;
		}

	}
	public function _moveTo(_x:Int, _y:Int){
		if(canMove){
			sprite.x = _x;
			sprite.y = _y;
		}

	}
	public function _shoot(d:Int, bmd:openfl.display.BitmapData, projectileName:String, projectileType:String){
		if(core4.Constants.getKTime() - timeSinceLastShot() > (getAttackSpeed()*10)) {
			var p:core4.entity.projectile.Projectile = new core4.entity.projectile.Projectile(this, d, bmd, projectileName, projectileType, getAttackDamage());
			projectileList.push(p);
			tsls = core4.Constants.getKTime();
		}
			// not using this for playtest
			/*
			if(hasAmmoEquipped() && hasWeaponEquipped()){
				projectileList.push(new core4.entity.projectile.Projectile(d, bm, projectileName, projectileType));
			}else if(hasAmmoEquipped() && hasWeaponEquipped()){
				Main._main()._engine().getNotificationManager().push(new core4.notification.Notification(""));
			}
			*/
	}
	public function _updateProjectiles(){
		if(projectileList != null && projectileList.length > 0){
			for(x in 0 ... projectileList.length){
				if(projectileList[x] != null){
					projectileList[x].update();
				}
			}
		}
	}
	public function _loot():Void{
		if(canLoot){
			collectItems();
		}
	}

	public function _toggleInventory():Void{
		if(_hasInventory()){
			if(!getInventoryState()){
				if(Main._main()._debug() && entityInventory != null && entityInventory.getInventory() != null){
					trace("----------------------------------------------");
					var inventoryArray:Array<core4.item.Item> = entityInventory.getInventory();
					if(inventoryArray.length > 0){
						for(x in 0 ... entityInventory.getInventory().length){
							var item = entityInventory.getItem(x);
							if(item != null){
								trace("ID: " + item.getItemID() + ", Name: "+item.getItemName()+", Count: "+entityInventory.getInventoryStack()[x]);
							}else{
								trace("Item is null?!");
							}

						}
					}else{
						trace("Inventory Empty");
					}
					trace("----------------------------------------------");
				}
				if(entityInventory == null){
					trace("Inventory doesn't exist");
				}
				setInventoryState(!getInventoryState());
			}else{
				setInventoryState(!getInventoryState());
			}
		}
	}

	public function hasAmmoEquipped(){
		if(hasItemInSlot(core4.Constants._AMMOSLOT)){
			if(core4.Constants.compareString(entityInventory.getItem(core4.Constants._AMMOSLOT).getItemType(), "AMMO") == 0){
				return true;
			}else{
				trace("Item in Ammo slot is not ammo.");
			}
		}else{
			trace("No Ammo");
		}
		return false;
	}
	public function hasWeaponEquipped(){
		if(hasItemInSlot(core4.Constants._WEAPONSLOT)){
			if(core4.Constants.compareString(entityInventory.getItem(core4.Constants._WEAPONSLOT).getItemType(), "WEAPON") == 0){
				return true;
			}else{
				trace("Item in Weapon slot is not a weapon.");
			}
		}else{
			trace("No Weapon");
		}
		return false;
	}
	public function hasItemInSlot(index:Int):Bool{
		if(entityInventory != null && entityInventory.getInventory() != null && entityInventory.getInventory()[index] != null){
			return true;
		}
		return false;

	}
	public function _moveEnabled():Bool{
		return canMove;
	}
	public function _shootEnabled():Bool{
		return canShoot;
	}
	public function _godmodeEnabled():Bool{
		return godmode;
	}
	public function _lootEnabled():Bool{
		return canLoot;
	}
	public function _redraw(){
		if(cachedFacing != facing){
			sprite.removeChildren();
			sprite.addChild(getBitmapFromFacingDirection());
			cachedFacing = facing;
		}
	}
	public function _delete(){
		trace("removing "+ entityName + " from the stage");
		Main._main()._engine()._stage().removeChild(sprite);
		for(x in 0 ... projectileList.length){
			projectileList.pop();
		}
		
		core4.Constants._L_ENTITY.remove(this);
	}
	public function _add(){
		trace("adding "+ entityName + " to the stage");
		Main._main()._engine()._stage().addChild(sprite);
	}
	public function getSpriteX():Float{
		return sprite.x;
	}
	public function getSpriteY():Float{
		return sprite.y;
	}
	public function setLocation(p:openfl.geom.Point){
		sprite.x = p.x;
		sprite.y = p.y;
	}
	public function getLocation():openfl.geom.Point{
		return new openfl.geom.Point(getSpriteX(), getSpriteY());
	}
	public function getSpriteOrigin(?hasBitmap:Bool = true):openfl.geom.Point{
		if(hasBitmap){
			return new openfl.geom.Point(sprite.x+Std.int(bitMap.bitmapData.width/2), sprite.y+Std.int(bitMap.bitmapData.height/2));
		}else{
			return new openfl.geom.Point(sprite.x, sprite.y);
		}
	}
	public function addKeyEvent(code:Int, eventType:String, ?whatToDo:Array<Dynamic> = null):Int{
		var x:Int = keyEventList.push(new core4.entity.EntityEvent(this, code, eventType, whatToDo));
		trace(x);
		return x;
	}
	public function removeKeyEvent(ee:core4.entity.EntityEvent):Bool{
		return keyEventList.remove(ee);
	}

	public function getItemsInRange():Array<core4.item.Item>{
		var a:Array<core4.item.Item> = new Array();
		for(x in 0 ... core4.Constants._L_WORLD_ITEMS_ON_STAGE.length){
			var itemOnFloor:core4.item.Item = core4.Constants._L_WORLD_ITEMS_ON_STAGE[x];
			if(core4.Constants.d2p(itemOnFloor.getSpriteOrigin(), getSpriteOrigin()) < core4.Constants._PICKUPDISTANCE){
				a.push(itemOnFloor);
			}
		}
		if(Main._main()._debug())trace("Items in Range: "+a.length);
		return a;
	}
	public function collectItems(){
		var itemsInRange:Array<core4.item.Item> = getItemsInRange();
		if(itemsInRange.length > 0){
			for(x in 0 ... itemsInRange.length){
				collectItem(itemsInRange[x]);
			}
		}
	}
	public function collectItem(item:core4.item.Item){
		core4.Constants._L_WORLD_ITEMS_ON_STAGE.remove(item);
		item._removeFromStage();
		entityInventory.addToInventory(item);
	}

	public function setExperience(_exp:Float):Float{
		experience = _exp;
		return experience;
	}
	public function setHealth(_hp:Float):Float{
		health = _hp;
		return health;
	}
	public function setArmor(_armor:Float):Float{
		armor = _armor;
		return armor;
	}
	public function setMovementSpeed(_speed:Float):Float{
		movementSpeed = _speed;
		return movementSpeed;
	}
	public function setAttackDamage(_attackDamage:Float):Float{
		attackDamage = _attackDamage;
		return attackDamage;
	}
	public function setAttackSpeed(_attackSpeed:Float):Float{
		attackSpeed = _attackSpeed;
		return attackSpeed;
	}

	public function setEnergy(_energy:Float):Float{
		energy = _energy;
		return energy;
	}
	public function setLevel(_level:Int):Int{
		level = _level;
		return level;
	}

	public function setExperienceGained(_expG:Float):Float{
		experienceGained = _expG;
		return experienceGained;
	}

	public function setDamageRecieved(_dRecieved:Float, ?attachedEntity:core4.entity.Entity = null):Float{
		damageTaken = _dRecieved;
		if(attachedEntity != null)
		attachedEntity.setHealth(attachedEntity.getHealth() + 10);
		return damageTaken;
	}
	public function setFacingDirection(_i:Int):Int{
		facing = _i;
		return facing;
	}
	public function getExperienceGained():Float{
		return experienceGained;
	}
	public function getDamageRecieved():Float{
		return damageTaken;
	}
	public function getMovementSpeed():Float{
		return movementSpeed;
	}
	public function getAttackDamage():Float{
		return attackDamage;
	}
	public function getAttackSpeed():Float{
		return attackSpeed;
	}
	public function getEnergy():Float{
		return energy;
	}
	public function getArmor():Float{
		return armor;
	}
	public function getExperience():Float{
		return experience;
	}
	public function getHealth():Float{
		return health;
	}
	public function getLevel():Int{
		return level;
	}
	public function getFacingDirection():Int{
		return facing;
	}
	public function _useClosestObject():Int{
		//needs to be done.
		return 1;
	}
	public function _useItem(id:Int):Int{
		//needs to be done.
		return 1;
	}
	public function ammoFitsWeapon():Bool{
		//needs to be done.
		return true;
	}
	public function _readyToShoot():Bool{
		if(hasWeaponEquipped() && hasAmmoEquipped()){
			if(ammoFitsWeapon()){
				return true;
			}
		}
		return false;
	}
	public function getInventory():core4.inventory.Inventory{
		return entityInventory;
	}
	public function getInventoryState():Bool{
		return inventoryState;
	}
	public function setInventoryState(b:Bool):Void{
		inventoryState = b;
	}
	public function getBitmapFromFacingDirection():openfl.display.Bitmap{
		if(getFacingDirection() == 0){
			return left;
		}else if(getFacingDirection() == 90){
			return up;
		}else if(getFacingDirection() == 180){
			return right;
		}else if(getFacingDirection() == 270){
			return down;
		}
		return null;
	}
	public function getProjectileList():Array<core4.entity.projectile.Projectile>{
		return projectileList;
	}
	public function timeSinceLastShot():Float{
		return tsls;
	}
	public function _hasInventory():Bool{
		return hasInventory;
	}
	public function getClosestEntity():core4.entity.Entity{
		var entity:core4.entity.Entity = null;
		var distance:Float = Math.POSITIVE_INFINITY;
		for(x in 0 ... core4.Constants._L_ENTITY.length){
			if(core4.Constants._L_ENTITY[x] != this && distance > getDistanceBetween2Entities(this, core4.Constants._L_ENTITY[x])){
				entity = core4.Constants._L_ENTITY[x];
				distance = getDistanceBetween2Entities(this, core4.Constants._L_ENTITY[x]);
			}
		}
		return entity;
	}
	public function getDistanceBetween2Entities(a:core4.entity.Entity, b:core4.entity.Entity):Float{
		return core4.Constants.d2p(a.getSpriteOrigin(), b.getSpriteOrigin());
	}
	public function checkHostility(e:core4.entity.Entity):Bool{
		if(e.getHostility() != getHostility()){
			return true;
		}
		return false;
	}
	public function getHostility():Float{
		return hostility;
	}
}
