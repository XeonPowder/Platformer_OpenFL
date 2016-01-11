package core4;

class Item {
	private var itemName:String;
	private var me:Bool;
	private var meName:String;
	private var id:Int;
	private var modifiers:Array<Dynamic>;
	private var itemType:String;
	public function new(name:String, hasMultiplierEffect:Bool, type:String, ?args:Array<Dynamic>){
		itemName = name;
		me = hasMultiplierEffect;
		meName = multiplierEffectType;
		modifiers = args;
		multiplier = m;
		mutliplierIndex = -1;
		id = core4.Constants.generateID();
		itemType = type;
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
	public function getMultiplier():Float{
		return multiplier;
	}
	public function getItemID():Int{
		return id;
	}
	public function setItemID(_id:Int){
		id = _id;
	}
	public function getModifiers():Array<Dynamic>{
		return modifiers;
	}
	public function getItemType():String{
		return itemType; 
	}
}
