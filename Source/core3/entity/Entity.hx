package core3.entity;

class Entity {
	public var man			: Manager;
	public var type 		: String;
	public var entityMiltiplier : core3.entity.EntityMultiplier;
	public var projectileList 					: 				Array<core3.entity.projectile.Projectile>;
	public var tsls 							: 				Float;
	public function new() {
		man = core3.Manager.ME;
		type = "none";
		entityMiltiplier = new core3.entity.EntityMultiplier(this);
		projectileList = new Array();
		tsls = 0;
	}
	
	public function update(){

	}
	public function getMultiplier():core3.entity.EntityMultiplier{
		return entityMiltiplier;
	}
	public function entityTouchingEntity(){
	}
}
