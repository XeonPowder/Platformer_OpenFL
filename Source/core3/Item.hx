package core3;

class Item {
	private var itemName:String;
	private var me:Bool;
	private var meName:String;
	private var id:Int = 0;
	private var multiplier:Float;
	private var entity:core3.entity.Entity;
	public function new(e:core3.entity.Entity, name:String, hasMultiplierEffect:Bool, ?multiplierEffectType:String = "NONE", ?m:Float = 0){
		itemName = name;
		me = hasMultiplierEffect;
		meName = multiplierEffectType;
		multiplier = m;
		entity = e;
		e.man.addItemToDB(this);
	}
	public function getItemName():String{
		return itemName;
	}
	public function hasMultiplierEffect():Bool{
		return me;
	}
	public function getMultiplierEffectType():String{
		return meName;
	}
	public function getItemID():Int{
		return id;
	}
	public function setItemID(_id:Int):Int{
		id = _id;
		return id;
	}
	public function getMultiplier():Float{
		return multiplier;
	}
}
