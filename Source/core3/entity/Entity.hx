package core3.entity;

class Entity {
	private var man								: 				Manager;
	private var type 							: 				String;
	private var entityMiltiplier 				: 				core3.entity.EntityMultiplier;
	private var entityProperties 				: 				core3.entity.EntityProperties;
	private var projectileList 					: 				Array<core3.entity.projectile.Projectile>;
	private var tsls 							: 				Float;
	private var sprite 							: 				openfl.display.Sprite;
	private var spriteOrigin 					: 				openfl.geom.Point;

	public function new(s:openfl.display.Sprite, sW:Int, sH:Int) {
		sprite = s;
		spriteOrigin = new openfl.geom.Point(s+Std.int(sW/2), sH+Std.int(sH/2));
		man = core3.Manager.ME;
		man.getEntityList().push(this);
		type = "none";
		entityMiltiplier = new core3.entity.EntityMultiplier(this);
		entityProperties = new core3.entity.EntityProperties(this);
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
	public function getSpriteOrigin():openfl.geom.Point{
		return spriteOrigin;
	}
}
