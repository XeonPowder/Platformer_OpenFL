package core4.item;

class Item {
	private var itemName:String;
	private var me:Bool;
	private var id:Int;
	private var modifiers:Array<Dynamic>;
	private var itemType:String;
	private var sprite:openfl.display.Sprite;
	private var bitMap:openfl.display.Bitmap;
	private var inventorySlotID:Int;
	private var bmd:openfl.display.BitmapData;
	public function new(name:String, hasMultiplierEffect:Bool, type:String, bitmap:openfl.display.Bitmap, defaultSlotID:Int, ?args:Array<Dynamic>){
		itemName = name;
		bitMap = bitmap;
		bmd = bitmap.bitmapData;
		sprite = new openfl.display.Sprite();
		sprite.addChild(bitMap);
		me = hasMultiplierEffect;
		modifiers = args;
		id = core4.Constants.generate();
		itemType = type;
		inventorySlotID = defaultSlotID;
		trace(getItemID());
	}
	public function getItemName():String{
		return itemName;
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
	public function getBitmap():openfl.display.Bitmap{
		return bitMap;
	}
	public function getBMD():openfl.display.BitmapData{
		return bmd;
	}
	public function getInventorySlotID():Int{
		return inventorySlotID;
	}
	public function setLocation(p:openfl.geom.Point){
		sprite.x = p.x;
		sprite.y = p.y;
	}
	public function _addToStage():Void{
		core4.Constants._L_WORLD_ITEMS_ON_STAGE.push(this);
		Main._main()._engine()._stage().addChild(sprite);
	}
	public function _removeFromStage():Void{
		core4.Constants._L_WORLD_ITEMS_ON_STAGE.remove(this);
		Main._main()._engine()._stage().removeChild(sprite);
	}
	public function getSpriteOrigin(?hasBitmap:Bool = true):openfl.geom.Point{
		if(hasBitmap){
			return new openfl.geom.Point(sprite.x+Std.int(bitMap.bitmapData.width/2), sprite.y+Std.int(bitMap.bitmapData.height/2));
		}else{
			return new openfl.geom.Point(sprite.x, sprite.y);
		}
	}
	public function update():Void{

	}
}
