package core4.inventory;

class Inventory {
	private var inventory:Array<core4.item.Item>;
	private var inventoryStack:Array<Int>;
	private var inventoryNames:Array<String>;
	private var entity:core4.entity.Entity;
	public function new(?e:core4.entity.Entity = null, ?args:Array<Dynamic> = null){
		entity = e;
		inventory = new Array();
		inventoryStack = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
		inventoryNames = ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", ""];
		if(args != null && args.length > 0){
			for(x in 0 ... args.length){
				var index:Int = 0;
				if(x % 2 == 0 || x == 0){
					index = inventory.push(args[x]);
					inventoryNames[index-1] = args[x].getItemName();
					inventoryStack[index-1] = args[x+1];

				}
			}
		}
	}
	public function getInventory():Array<core4.item.Item>{
		if(inventory == null){
			inventory = new Array();
		}
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
	public function hasInventoryValuesChanged(cache:Array<core4.item.Item>):Bool{
		var changed = false;
		for(x in 0 ... inventory.length){
			if(cache[x] != inventory[x]){
				return !changed;
			}
		}
		return changed;
	}
	public function removeFromInventory(_item:core4.item.Item){
		var index:Int = 10;
		for(x in 0 ... inventory.length){
			if(inventory[x] == _item){
				index = x;
			}
		}
		if(changeEntityValues(index)){
			var modifiers:Array<Dynamic> = _item.getModifiers();
			if(modifiers != null){
				for(y in 0 ... modifiers.length){
					if(modifiers[y] == String){
						if(core4.Constants.compareString(modifiers[y],"ARMOR") == 0){
							entity.setArmor(entity.getArmor()-modifiers[y+1]);
						}else if(core4.Constants.compareString(modifiers[y], "ATTACKDAMAGE") == 0){
							entity.setAttackDamage(entity.getAttackDamage()-modifiers[y+1]);
						}else if(core4.Constants.compareString(modifiers[y], "ATTACKSPEEDPERCENTAGE") == 0){
							entity.setAttackSpeed(entity.getAttackSpeed()*modifiers[y+1]);
						}else if(core4.Constants.compareString(modifiers[y], "HEALTH") == 0){
							entity.setHealth(entity.getHealth()*(1 + (modifiers[y+1]/100)));
						}
					}
				}
			}
		}
		inventory.remove(_item);
	}
	public function addToInventory(_item:core4.item.Item):Void{
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
			if(getInventory()[index] != null){
				var modifiers:Array<Dynamic> = getInventory()[index].getModifiers();
				if(modifiers != null){
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
			
		}
	}
	public function inventoryContains(_item:core4.item.Item):Int{
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
	public function getItem(index:Int):core4.item.Item{
		if(inventory != null && inventory.length > 0 && inventory[index] != null){
			return inventory[index];
		}
		return null;
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