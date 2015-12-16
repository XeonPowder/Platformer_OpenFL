package core4;

class Inventory {
	private var inventory:Array<Item>;
	private var inventoryStack:Array<Int>;
	private var inventoryNames:Array<String>;
	private var entity:core4.entity.Entity;
	public function new(?e:core4.entity.Entity = null, ?args:Array<Dynamic>){
		entity = e;
		inventory = new Array();
		inventoryStack = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
		inventoryNames = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""];
		for(x in 0 ... args.length){
			if(args[x] == core4.Item){
				if(args[x+1] == Int){
					for(y in 0 ... args[x+1]){
						addToInventory(args[x]);
					}
				}

			}
		}
	}
	public function getInventory():Array<Item>{
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
	public function hasInventoryValuesChanged(cache:Array<Item>):Bool{
		var changed = false;
		for(x in 0 ... inventory.length){
			if(cache[x] != inventory[x]){
				return !changed;
			}
		}
		return changed;
	}
	public function removeFromInventory(_item:core4.Item){
		var index:Int = inventory.remove(_item);
		if(changeEntityValues(index)){
			var modifiers:Array<Dynamic> = _item.getModifiers();
			for(y in 0 ... modifiers.length){
				if(modifiers[y] == String){
					if(core4.Constants.compareString(modifiers[y],"ARMOR") == 0){
						entity.setArmor(entity.getArmor()-modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "ATTACKDAMAGE") == 0){
						entity.setAttackDamage(entity.getAttackDamage()-modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "ATTACKSPEEDPERCENTAGE") == 0){
						entity.setAttackSpeed(entity.getAttackSpeed()*modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "HEALTH") == 0){
						entity.setHealth(entity.getHealth()-modifiers[y+1]);
						if(entity.getHealth() < 0){
							entity.setHealth(1);
						}
					}
				}
			}
		}
	}
	public function addToInventory(_item:core4.Item){
		var alreadyInInventoryCheck:Bool = true;
		var index:Int = -1;
		var x:Int = 0;
		if(inventory.length == 0){
			index = inventory.push(_item);
			inventoryStack[index-1] = 1;
			inventoryNames[index-1] = _item.getItemName();
		}
		if(inventoryContains(_item) != -1){
			inventoryStack[inventoryContains(_item)] += 1;
			index = inventoryContains(_item);
		}else{
			index = inventory.push(_item);
			inventoryStack[index-1] = 1;
			inventoryNames[index-1] = _item.getItemName();
		}
		if(changeEntityValues(index)){
			var modifiers:Array<Dynamic> = entityInventory.getInventory()[x].getModifiers();
			for(y in 0 ... modifiers.length){
				if(modifiers[y] == String){
					if(core4.Constants.compareString(modifiers[y],"ARMOR") == 0){
						entity.setArmor(entity.getArmor()+modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "ATTACKDAMAGE") == 0){
						entity.setAttackDamage(entity.getAttackDamage()+modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "ATTACKSPEEDPERCENTAGE") == 0){
						entity.setAttackSpeed(entity.getAttackSpeed()/modifiers[y+1]);
					}else if(core4.Constants.compareString(modifiers[y], "HEALTH") == 0){
						entity.setHealth(entity.getHealth()+modifiers[y+1]);
					}
				}
			}
		}
	}
	public function inventoryContains(_item:core4.Item):Int{
		for(x in 0 ... inventory.length){
			if(inventory[x] == _item){
				return x;
			}
		}
		return -1;
	}
	public function getLinkedEntity():core4.entity.Entity{
		return entity;
	}
	public function getItem(index:Int):core4.Item{
		return 
	}
	public function changeEntityValues(slot:Int):Bool{
		if(slot == core4.Constants._WEAPONSLOT || 
			slot == core4.Constants._AMMOSLOT || 
			slot == core4.Constants._HEADSLOT || 
			slot == core4.Constants._CHESTSLOT || 
			slot == core4.Constants._LEGSLOT || 
			slot == core4.Constants._HANDSLOT || 
			slot == core4.Constants._HATSLOT){
			return true;
		}
		return false;
	}
}