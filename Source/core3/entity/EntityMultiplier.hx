package core3.entity;

class EntityMultiplier extends core3.Multiplier{
	
	public var entity:core3.entity.Entity;
	
	public function new(e:core3.entity.Entity){
		entity = e;
		super();
	}
	public function getMultiplierArray(s:String):Array<Float>{
		if(Const.compareString(s, Const._MOVEMENTSPEED) == 0){
			return movementSpeedMultipliers;
		}else if(Const.compareString(s, Const._ATTACKDAMAGE) == 0){
			return attackDamageMultipliers;
		}else if(Const.compareString(s, Const._ATTACKSPEED) == 0){
			return attackSpeedMultipliers;
		}else if(Const.compareString(s, Const._ENERGY) == 0){
			return energyMultipliers;
		}else if(Const.compareString(s, Const._DEFENSE) == 0){
			return defenseMultipliers;
		}else if(Const.compareString(s, Const._EXPERIENCE) == 0){
			return experienceMultipliers;
		}else if(Const.compareString(s, Const._HEALTH) == 0){
			return healthMultipliers;
		}
		return null;
	}
	public function getTotalMultiplier(s:String):Float{
		var multiplier:Float = 1.0;
		if(getMultiplierArray(s) != null){
			if(getMultiplierArray(s).length == 0){
				return multiplier;
			}
			for(x in 0 ... getMultiplierArray(s).length){
				if(getMultiplierArray(s)[x] != 0){
					multiplier*=getMultiplierArray(s)[x];
				}
			}
			return multiplier;
		}
		return -2;
	}
	public function addMultiplier(s:String, f:Float, ?i:Int = -1):Int{
		var index = 0;
		if(getMultiplierArray(s) != null){
			if(i != -1){
				return getMultiplierArray(s).push(f);
			}else{
				getMultiplierArray(s)[i] = f;
				return i;
			}
		}
		return -2;
	}
	public function removeMultiplier(s:String, f:Float, ?i:Int = -1){
		var index = 0;
		if(getMultiplierArray(s) != null){
			if(i != -1){
				for(x in 0 ... getMultiplierArray(s).length){
					if(getMultiplierArray(s)[x] == f){
						getMultiplierArray(s)[x] = 0;
					}
				}
			}else{
				getMultiplierArray(s)[i] = 0;
			}
		}
		return -2;
	}
}