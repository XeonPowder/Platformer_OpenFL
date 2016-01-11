package core3;

class Item {
	private var itemName:String;
	private var me:Bool;
	private var meName:String;
	private var id:Int;
	private var multiplier:Float;
	private var entity:core3.entity.Entity;
	private var mutliplierIndex:Int;
	public function new(e:core3.entity.Entity, name:String, hasMultiplierEffect:Bool, ?multiplierEffectType:String = "NONE", ?m:Float = 0){
		itemName = name;
		me = hasMultiplierEffect;
		meName = multiplierEffectType;
		multiplier = m;
		entity = e;
		e.man.addItemToDB(this);
		mutliplierIndex = -1;
		id = core3.Const.generateID();
		trace(getItemID());
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
	public function setItemID(_id:Int){
		id = _id;
	}
	public function getLinkedEntity():core3.entity.Entity{
		return entity;
	}
	public function getMultiplier():Float{
		return multiplier;
	}
	public function getMultiplierIndex():Int{
		return mutliplierIndex;
	}
	public function setMultiplierIndex(_index:Int){
		mutliplierIndex = _index;
	}
}
