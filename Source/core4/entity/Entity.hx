package core3.entity;

class Entity {
	private var entityType 						: 				String;
	private var entityName 						: 				String;
	private var entityInventory 				: 				core4.inventory.Inventory;
	private var cachedInventory 				: 				Array<Item>;
	private var timeSinceLastShot 				: 				Float;
	private var sprite 							: 				openfl.display.Sprite;
	private var spriteOrigin 					: 				openfl.geom.Point;
	private var keyEventList 					: 				Array<core4.entity.EntityEvent>;
	private var projectileList 					: 				Array<core4.entity.projectile.Projectile>;
	private var init 							: 				Bool;

	private var canLoot 						: 				Bool;
	private var canShoot						: 				Bool;
	private var canMove 						: 				Bool;
	private var godmode 						: 				Bool;
	private var canUse 							: 				Bool;

	private var health 							: 				Float;
	private var energy 							: 				Float;
	
	private var experience 						: 				Float;
	private var defense 					 	: 				Float;
	private var movementspeed 					: 				Float;
	private var attackDamage 					: 				Float;
	private var attackSpeed 					: 				Float;
	private var level 							: 				Float;
	private var experienceGained 				: 				Float;
	private var damageTaken 					: 				Float;
	private var facing 							: 				Float;

	public function new(?bitmap:openfl.display.Bitmap = null, ?name:String = "<Unknown>", ?type:String = "<Unknown>", ?loot:Bool = true, ?shoot:Bool = true, ?move:Bool = true, ?god:Bool = true, ?use:Bool){
		init = true;

		sprite = new openfl.display.Sprite();
		if(bitmap != null){
			sprite.addChild(bitmap);
			spriteOrigin = getSpriteOrigin();
		}else{
			spriteOrigin = getSpriteOrigin(false);
		}
		
		entitytype = type;
		entityName = name;

		canLoot = loot;
		canShoot = shoot;
		canMove = move;
		godmode = god;
		canUse = use;
	}
	public function update(){
		if(!init){
			for(x in 0 ... keyEventList.length){
				keyEventList[x].update();
			}
			_updateStats();
			_updateProjectiles();
		}else{
			_add();
			if(_lootEnabled() || _hasInventory()){
				entityInventory = new Inventory();
				if(_hasInventory()){
					entityInventory = core4.Constants.getCachedInventory(entityName);
				}
			}
			if(_godmodeEnabled()){
				health = 99999;
				energy = 99999;
			}else{
				health = 10;
				energy = 100;
			}
			experience = 0;
			defense = 0;
			movementspeed = 0;
			attackDamage = 0;
			attackSpeed = 0;
			level = 1;
			experienceGained = 0;
			damageTaken = 0;
			facing = 0;
		}
	}
	public function _updateStats(){
		if(damageTaken != 0){
			health -= damageTaken;
			damageTaken = 0;
		}
		if(experieceGained != 0){
			experience += experienceGained;
			experienceGained = 0;
		}
		if(experience >= 100 * level){
			level += 1;
			experience = 0;
		}
	}
	public function _moveTo(_x:Int, _y:Int){
		sprite.x = _x;
		sprite.y = _y;
	}
	public function _shoot(d:Int, bm:Bitmap, projectileName:String, projectileType:String){
		if(hasAmmoEquipped() && hasWeaponEquipped()){
			projectileList.push(new core4.entity.projectile.Projectile(d, bm, projectileName, projectileType));
		}else if(hasAmmoEquipped() && hasWeaponEquipped()){
			_main()._engine().getNotificationManager().push(new core3.notification.Notification(""));
		}
	}
	public function _loot():Bool{
		collectItems();
	}
	public function hasAmmoEquipped(){
		if(core4.Constants.compareString(entityInventory.getInventory()[core4.Constants._AMMOSLOT].getItemType(), "AMMO") == 0){
			return true;
		}
		return false;
	}
	public function hasWeaponEquipped(){
		if(core4.Constants.compareString(entityInventory.getInventory()[core4.Constants._WEAPONSLOT].getItemType(), "WEAPON") == 0){
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
	public function _redraw(?newBitmap:Bitmap = null){
		if(newBitmap != null){
			sprite.remove
		}
	}
	public function _delete(){
		_main()._engine()._stage().removeChild(sprite);
		core4.Constants._L_ENTITY().remove(this);
	}
	public function _add(){
		_main()._engine()._stage().addChild(sprite);
		core4.Constants._L_ENTITY.push(this);
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
			return new openfl.geom.Point(sprite.x+Std.int(bitmap.bitmapData.width/2), sprite.y+Std.int(bitmap.bitmapData.height/2));
		}else{
			return new openfl.geom.Point(sprite.x, sprite.y);
		}
	}
	public function addKeyEvent(code:Int, eventType:String, whatToDo:String):Int{
		return keyEventList.push(new core4.entity.EntityEvent(code, eventType, whatToDo));
	}
	public function removeKeyEvent(ee:core3.entity.EntityEvent):Bool{
		return keyEventList.remove(ee);
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

	public function setExperience(_exp:Float):Float{
		experience = _exp;
		return experience;
	}
	public function setHealth(_hp:Float):Float{
		hp = _hp;
		return hp;
	}
	public function setDefense(_defense:Float):Float{
		defense = _defense;
		return defense;
	}
	public function setMovementSpeed(_speed:Float):Float{
		movementspeed = _speed;
		return movementspeed;
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
		return c_energy;
	}
	public function setLevel(_level:Int):Int{
		level = _level;
		return level;
	}
	
	public function setExperienceGained(_expG:Float):Float{
		experienceGained = _expG;
		return experienceGained;
	}
	
	public function setDamageRecieved(_dRecieved:Float, ?factorInMultiplier):Float{
		damageTaken = _dRecieved;
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
		return movementspeed;
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
	public function getDefense():Float{
		return defense;
	}
	public function getExperience():Float{
		return experience;
	}
	public function getHealth():Float{
		return hp;
	}
	public function getLevel():Int{
		return level;
	}
	public function getFacingDirection():Int{
		return facing;
	}
	
}
