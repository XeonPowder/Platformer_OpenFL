package core3.entity;

class Inventory {
	private var inventory:Array<Int>;
	private var inventoryStack:Array<Int>;
	private var inventoryNames:Array<String>;
	private var man:core3.Manager;
	public function new(m:core3.Manager){
		man = m;
		inventory = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
		inventoryStack = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
		inventoryNames = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""];
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
	public function hasIventoryLengthChanged(cache:Int):Bool{
		return inventory.length == cache;
	}
	public function hasInvetoryValuesChanged(cache:Array<Int>):Bool{
		var changed = false;
		for(x in 0 ... inventory.length){
			if(cache[x] != inventory[x]){
				return !changed;
			}
		}
		return changed;
	}
	public function addToInventory(_id:Int):Int{
		var alreadyInInventoryCheck:Bool = true;
		var index:Int = -1;
		var x:Int = 0;
		while(x < inventory.length){
			if(alreadyInInventoryCheck){
				if(inventory[x] == _id){
					inventoryStack[x] += 1;
					index = x;
				}
				if(x == inventory.length-1){
					alreadyInInventoryCheck = false;
					x = 0;
				}
			}else{
				if(inventory[x] == 0){
					inventory[x] = _id;
					inventoryStack[x] += 1;
					inventoryNames[x] = man.getItemByID(_id).getItemName();
					index = x;
				}
				if(x == inventory.length-1){
					index = -1;
				}
			}
			x++;
		}
		return index;
	}
}