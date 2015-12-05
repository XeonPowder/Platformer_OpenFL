package core3.entity;

class EntityMultiplier extends core3.Multiplier{
	
	public var entity:core3.entity.Entity;
	
	public function new(e:core3.entity.Entity){
		entity = e;
		super();
	}
	public function getMultiplier(s:String):Float{
		if(Const.compareString(s, Const._MOVEMENTSPEED) == 0){
			var movementspeed:Float = 1.0;
			for(x in 0 ... movementSpeedMultipliers.length){
				movementspeed*=movementSpeedMultipliers[x];
			}
			return movementspeed;
		}else if(Const.compareString(s, Const._ATTACKDAMAGE) == 0){
			var attackdamage:Float = 1.0;
			for(x in 0 ... attackDamageMultipliers.length){
				attackdamage*=attackDamageMultipliers[x];
			}
			return attackdamage;
		}else if(Const.compareString(s, Const._ATTACKSPEED) == 0){
			var attackspeed:Float = 1.0;
			for(x in 0 ... attackSpeedMultipliers.length){
				attackspeed*=attackSpeedMultipliers[x];
			}
			return attackspeed;
		}else if(Const.compareString(s, Const._ENERGY) == 0){
			var energy:Float = 1.0;
			for(x in 0 ... energyMultipliers.length){
				energy*=energyMultipliers[x];
			}
			return energy;
		}else if(Const.compareString(s, Const._DEFENSE) == 0){
			var defense:Float = 1.0;
			for(x in 0 ... defenseMultipliers.length){
				defense*=defenseMultipliers[x];
			}
			return defense;
		}else if(Const.compareString(s, Const._EXPERIENCE) == 0){
			var experience:Float = 1.0;
			for(x in 0 ... experienceMultipliers.length){
				experience*=experienceMultipliers[x];
			}
			return experience;
		}else if(Const.compareString(s, Const._HEALTH) == 0){
			var health:Float = 1.0;
			for(x in 0 ... healthMultipliers.length){
				health*=healthMultipliers[x];
			}
			return health;
		}
		return -2.0;
	}
	public function addMultiplier(s:String, f:Float, ?i:Int = -1):Int{
		if(Const.compareString(s, Const._MOVEMENTSPEED) == 0){
			if(i != -1){
				var aLength = movementSpeedMultipliers.length;
				movementSpeedMultipliers[aLength] = f;
				return aLength;
			}else{
				movementSpeedMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._ATTACKDAMAGE) == 0){
			if(i != -1){
				var aLength = attackDamageMultipliers.length;
				attackDamageMultipliers[aLength] = f;
				return aLength;
			}else{
				attackDamageMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._ATTACKSPEED) == 0){
			if(i != -1){
				var aLength = attackSpeedMultipliers.length;
				attackSpeedMultipliers[aLength] = f;
				return aLength;
			}else{
				attackSpeedMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._ENERGY) == 0){
			if(i != -1){
				var aLength = energyMultipliers.length;
				energyMultipliers[aLength] = f;
				return aLength;
			}else{
				energyMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._DEFENSE) == 0){
			if(i != -1){
				var aLength = defenseMultipliers.length;
				defenseMultipliers[aLength] = f;
				return aLength;
			}else{
				defenseMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._EXPERIENCE) == 0){
			if(i != -1){
				var aLength = experienceMultipliers.length;
				experienceMultipliers[aLength] = f;
				return aLength;
			}else{
				experienceMultipliers[i] = f;
				return i;
			}
		}else if(Const.compareString(s, Const._HEALTH) == 0){
			if(i != -1){
				var aLength = healthMultipliers.length;
				healthMultipliers[aLength] = f;
				return aLength;
			}else{
				healthMultipliers[i] = f;
				return i;
			}
		}else{
			return -2;
		}
	}
}