package core3.entity;

class EntityEvent {
	private var key:Int;
	private var type:String;
	private var args:Array<Dynamic>;
	private var entity:core4.entity.Entity;
	public function new(e:core4.entity.Entity, keycode, eventType, ?arguments:Array<Dynamic>){
		entity = e;
		key = keyCode;
		type = eventType;
		args = arguments;
	}
	public function update(){
		if(core4.Constants.getKeyState(key)){
			if(core4.Constants.compareString(type, "MOVE") == 0){
				if(entity._moveEnabled())
				entity._moveTo(args[0], args[1]);
			}else if(core4.Constants.compareString(type, "LOOT") == 0){
				if(entity._lootEnabled())
				entity._loot();
			}else if(core4.Constants.compareString(type, "SHOOT") == 0){
				if(entity._shootEnabled())
				entity._shoot(args[0], args[1], args[2], args[3]);
			}else if(core4.Constants.compareString(type, "USE_ITEM") == 0){
				if(entity._useEnabled())
				entity._useItem(args[0]);
			}else if(core4.Constants.compareString(type, "USE_WORLD_OBJECT") == 0){
				if(entity._useEnabled())
				entity._useClosestObject();
			}
		}
	}
}
