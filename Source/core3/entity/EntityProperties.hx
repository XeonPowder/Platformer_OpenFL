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

	public var c_hp 					: 		Float;
	public var c_attackDamage 			: 		Float;
	public var c_attackSpeed 			: 		Float;
	public var c_movementspeed 			: 		Float;
	public var c_energy 				: 		Float;
	public var c_defense 				:  		Float;
	public var c_experience 			: 		Float;
	public var c_level 					: 		Int;


	public var entity 				: 		core3.entity.Entity;

	public function new(e:core3.entity.Entity){
		base_level = c_level = 1;
		base_hp = c_hp = 50.0*base_level;
		base_energy = c_hp = 100.0;
		base_attackDamage = c_attackDamage = 1.0;
		base_attackSpeed = c_attackSpeed = 1.0;
		base_experience = c_experience = 0.0;
		base_movementspeed = c_movementspeed = Const.GRID/3;
		entity = e;
	}
	public function setExperience(_exp:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_experience = _exp*entity.getMultiplier().getMultiplier(Const._EXPERIENCE);
		}else{
			c_experience = _exp;
		}
		return c_experience;
	}
	public function setHealth(_hp:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_hp = _hp*entity.getMultiplier().getMultiplier(Const._HEALTH);
		}else{
			c_hp = _hp;
		}
		return c_hp;
	}
	public function setDefense(_defense:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_defense = _defense*entity.getMultiplier().getMultiplier(Const._DEFENSE);
		}else{
			c_defense = _defense;
		}
		return c_defense;
	}
	public function setMovementSpeed(_speed:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_movementspeed = _speed*entity.getMultiplier().getMultiplier(Const._EXPERIENCE);
		}else{
			c_movementspeed = _speed;
		}
		return c_movementspeed;
	}
	public function setAttackDamage(_attackDamage:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_attackDamage = _attackDamage*entity.getMultiplier().getMultiplier(Const._EXPERIENCE);
		}else{
			c_attackDamage = _attackDamage;
		}
		return c_attackDamage;
	}
	public function setAttackSpeed(_attackSpeed:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_attackSpeed = _attackSpeed*entity.getMultiplier().getMultiplier(Const._EXPERIENCE);
		}else{
			c_attackSpeed = _attackSpeed;
		}
		return c_attackSpeed;
	}
	
	public function setEnergy(_energy:Float, factorInMultiplier:Bool):Float{
		if(factorInMultiplier){
			c_energy = _energy*entity.getMultiplier().getMultiplier(Const._EXPERIENCE);
		}else{
			c_energy = _energy;
		}
		return c_energy;
	}
	public function setLevel(_level:Int):Int{
		c_level = _level;
		return c_level;
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
}