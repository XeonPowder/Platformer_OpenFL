package core3.entity;

class Inventory {
	private var inventory:Array<Int>;
	private var inventoryStack:Array<Int>;
	private var inventoryNames:Array<String>;
	private var man:core3.Manager;
	public function new(m:core3.Manager){
		man = m;
		inventory = new Array();
		inventoryStack = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
		inventoryNames = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""];
	}
	public function getInventory():Array<Int>{
		return inventory;
	}
	public function getInventoryStack():Array<Int>{
		return inventoryStack;
	}
	public function getInventoryNames():Array<String>{
		return inventoryNames;
	}
	public function hasInventoryLengthChanged(cache:Int):Bool{
		return inventory.length == cache;
	}
	public function hasInventoryValuesChanged(cache:Array<Int>):Bool{
		var changed = false;
		for(x in 0 ... inventory.length){
			if(cache[x] != inventory[x]){
				return !changed;
			}
		}
		return changed;
	}
	public function removeFromInventory(_index:Int){

	}
	public function addToInventory(_item:core3.Item):Int{
		var alreadyInInventoryCheck:Bool = true;
		var index:Int = -1;
		var x:Int = 0;
		if(inventory.length == 0){
			index = inventory.push(_item.getItemID());
			inventoryStack[index-1] = 1;
			inventoryNames[index-1] = _item.getItemName();
			return index-1;
		}
		if(inventoryContains(_item) != -1){
			inventoryStack[inventoryContains(_item)] += 1;
			return inventoryContains(_item);
		}else{
			index = inventory.push(_item.getItemID());
			inventoryStack[index-1] = 1;
			inventoryNames[index-1] = _item.getItemName();
			return index-1;
		}
		return index;
	}
	public function inventoryContains(_item:core3.Item):Int{
		for(x in 0 ... inventory.length){
			if(inventory[x] == _item.getItemID()){
				return x;
			}
		}
		return -1;
	}
}