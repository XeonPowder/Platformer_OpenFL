package core3.entity;

class Entity {
	public var man			: Manager;
	public var type 		: String;
	public var entityMiltiplier : core3.entity.EntityMultiplier;
	public var projectileList 					: 				Array<core3.entity.projectile.Projectile>;
	public var tsls 							: 				Float;
	private var sprite 							: 				openfl.display.Sprite;

	public function new(s:openfl.display.Sprite) {
		sprite = s;
		man = core3.Manager.ME;
		man.getEntityList().push(this);
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
	public function removeFromStage(){
		man.stage.removeChild(sprite);
	}
	public function getSpriteX():Float{
		return sprite.x;
	}
	public function getSpriteY():Float{
		return sprite.y;
	}
	public function setLocation(p:openfl.geom.Point){
		sprite.x = p.x;
		sprite.y = p.y;
	}
	public function getLocation():openfl.geom.Point{
		return new openfl.geom.Point(getSpriteX(), getSpriteY());
	}
}
