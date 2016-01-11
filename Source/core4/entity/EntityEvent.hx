package core4.entity;

class EntityEvent {
	private var key:Int;
	private var type:String;
	private var args:Array<Dynamic>;
	private var entity:core4.entity.Entity;
	public function new(e:core4.entity.Entity, keyCode, eventType, ?arguments:Array<Dynamic> = null){
		entity = e;
		key = keyCode;
		type = eventType;
		args = arguments;
	}
	public function update(){
		if(core4.Constants.getKeyState(key)){
			if(core4.Constants.compareString(type, "MOVE_TO") == 0){
				entity._moveTo(args[0], args[1]);
				entity.setFacingDirection(args[2]);
				entity._redraw();
			}
			if(core4.Constants.compareString(type, "MOVE_BY") == 0){
				entity._moveBy(args[0], args[1]);
				entity.setFacingDirection(args[2]);
				entity._redraw();
			}
			if(core4.Constants.compareString(type, "LOOT") == 0){
				entity._loot();
			}
			if(core4.Constants.compareString(type, "SHOOT") == 0){
				if(entity._readyToShoot()){
					var weapon = entity.getInventory().getItem(core4.Constants._WEAPONSLOT);
					var ammo = entity.getInventory().getItem(core4.Constants._AMMOSLOT);
					entity._shoot(entity.getFacingDirection(), weapon.getBitmap().bitmapData, weapon.getItemName(), weapon.getItemType());
				}
			}
			if(core4.Constants.compareString(type, "USE_ITEM") == 0){
				entity._useItem(args[0]);
			}
			if(core4.Constants.compareString(type, "USE_WORLD_OBJECT") == 0){
				entity._useClosestObject();
			}
			if(core4.Constants.compareString(type, "INVENTORY") == 0){
				entity._toggleInventory();
			}
			if(core4.Constants.compareString(type, "DEBUG") == 0){
				if(core4.Constants.compareString(args[0], "ENERGY") == 0){
					entity.setEnergy(args[1]);
				}else if(core4.Constants.compareString(args[0], "HEALTH") == 0){
					entity.setHealth(args[1]);
				}
			}
		}
	}
	public function readArgs(){
		if(args != null && args.length > 0){
			for(x in 0 ... args.length){
				trace(x+". "+args[x]);
			}
		}
	}
}
