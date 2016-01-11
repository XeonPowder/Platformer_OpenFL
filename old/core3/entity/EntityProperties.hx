package core3.entity;

class EntityProperties {
	public var base_hp 					: 		Float;
	public var base_attackDamage 		: 		Float;
	public var base_attackSpeed 		: 		Float;
	public var base_movementspeed 		: 		Float;
	public var base_energy 				: 		Float;
	public var base_defense 			: 		Float;
	public var base_experience 			: 		Float;
	public var base_level 				: 		Int;
	public var base_shootenergy 		: 		Float;

	public var max_hp 					: 		Float;
	public var max_attackDamage 		: 		Float;
	public var max_attackSpeed 			: 		Float;
	public var max_movementspeed 		: 		Float;
	public var max_energy 				: 		Float;
	public var max_defense 				:  		Float;
	public var max_experience 			: 		Float;
	public var max_level 				: 		Int;

	public var c_hp 					: 		Float;
	public var c_attackDamage 			: 		Float;
	public var c_attackSpeed 			: 		Float;
	public var c_movementspeed 			: 		Float;
	public var c_energy 				: 		Float;
	public var c_defense 				:  		Float;
	public var c_experience 			: 		Float;
	public var c_level 					: 		Int;
	public var c_shootenergy 			: 		Float;
	public var c_facing 				: 		Int;


	public var experienceGained:Float;
	public var damageTaken:Float;

	public var entity 				: 		core3.entity.Entity;

	public function new(e:core3.entity.Entity){
		base_level = c_level = 1;
		base_hp = c_hp = 50.0*base_level;
		base_energy = c_energy = 100.0;
		base_attackDamage = c_attackDamage = 1.0;
		base_attackSpeed = c_attackSpeed = 1.0;
		base_experience = c_experience = 0.0;
		base_movementspeed = c_movementspeed = ((Const.GRIDX/3 + Const.GRIDY/3)/2);
		base_shootenergy = c_shootenergy = 20;
		experienceGained = 0;
		damageTaken = 0;
		c_facing = 0;
		entity = e;
	}
	public function setExperience(_exp:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_experience = _exp*entity.getMultiplier().getTotalMultiplier(Const._EXPERIENCE);
		}else{
			c_experience = _exp;
		}
		return c_experience;
	}
	public function setHealth(_hp:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_hp = _hp*entity.getMultiplier().getTotalMultiplier(Const._HEALTH);
		}else{
			c_hp = _hp;
		}
		return c_hp;
	}
	public function setDefense(_defense:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_defense = _defense*entity.getMultiplier().getTotalMultiplier(Const._DEFENSE);
		}else{
			c_defense = _defense;
		}
		return c_defense;
	}
	public function setMovementSpeed(_speed:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_movementspeed = _speed*entity.getMultiplier().getTotalMultiplier(Const._EXPERIENCE);
		}else{
			c_movementspeed = _speed;
		}
		return c_movementspeed;
	}
	public function setAttackDamage(_attackDamage:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_attackDamage = _attackDamage*entity.getMultiplier().getTotalMultiplier(Const._ATTACKDAMAGE);
		}else{
			c_attackDamage = _attackDamage;
		}
		return c_attackDamage;
	}
	public function setAttackSpeed(_attackSpeed:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_attackSpeed = _attackSpeed*entity.getMultiplier().getTotalMultiplier(Const._ATTACKSPEED);
		}else{
			c_attackSpeed = _attackSpeed;
		}
		return c_attackSpeed;
	}
	
	public function setEnergy(_energy:Float, ?factorInMultiplier:Bool = true):Float{
		if(factorInMultiplier){
			c_energy = _energy*entity.getMultiplier().getTotalMultiplier(Const._ENERGY);
		}else{
			c_energy = _energy;
		}
		return c_energy;
	}

	public function getRequiredEnergy(a:String):Float{
		if(Const.compareString(a, Const._SHOOTENERGY) == 0){
			return c_shootenergy;
		}
		return -1;
	}
	public function setRequiredEnergy(_e:Float, a:String, ?factorInMultiplier:Bool = true):Float{
		if(Const.compareString(a, Const._SHOOTENERGY) == 0){
				if(factorInMultiplier){
					c_shootenergy = _e*entity.getMultiplier().getTotalMultiplier(Const._SHOOTENERGY);
				}else{
					c_shootenergy = _e;
				}
				return c_shootenergy;
		}
		return -1;
	}
	public function setLevel(_level:Int):Int{
		c_level = _level;
		return c_level;
	}
	public function getExperienceGained():Float{
		return experienceGained;
	}
	public function setExperienceGained(_expG:Float):Float{
		experienceGained = _expG;
		return experienceGained;
	}
	public function getDamageRecieved():Float{
		return damageTaken;
	}
	public function setDamageRecieved(_dRecieved:Float):Float{
		damageTaken = _dRecieved;
		return damageTaken;
	}
	public function getMovementSpeed():Float{
		return c_movementspeed;
	}
	public function getAttackDamage():Float{
		return c_attackDamage;
	}
	public function getAttackSpeed():Float{
		return c_attackSpeed;
	}
	public function getEnergy():Float{
		return c_energy;
	}
	public function getDefense():Float{
		return c_defense;
	}
	public function getExperience():Float{
		return c_experience;
	}
	public function getHealth():Float{
		return c_hp;
	}
	public function getLevel():Int{
		return c_level;
	}
	public function getFacingDirection():Int{
		return c_facing;
	}
	public function setFacingDirection(_i:Int):Int{
		c_facing = _i;
		return c_facing;
	}
	public function multiplyStat(s:String){
		if(Const.compareString(s, Const._MOVEMENTSPEED) == 0){
			setMovementSpeed(base_movementspeed); 
		}else if(Const.compareString(s, Const._ATTACKDAMAGE) == 0){
			setAttackDamage(base_attackDamage); 
		}else if(Const.compareString(s, Const._ATTACKSPEED) == 0){
			setAttackSpeed(base_attackDamage); 
		}else if(Const.compareString(s, Const._ENERGY) == 0){
			setEnergy(base_energy); 
		}else if(Const.compareString(s, Const._DEFENSE) == 0){
			setDefense(base_defense); 
		}else if(Const.compareString(s, Const._EXPERIENCE) == 0){
			setExperience(base_experience); 
		}else if(Const.compareString(s, Const._HEALTH) == 0){
			setHealth(base_hp);
		}
	}
}