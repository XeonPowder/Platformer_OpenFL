package core3.entity;

class EntityProperties {
	public var hp 			: 		Int;
	public var energy 		: 		Float;
	public var level 		: 		Int;
	public var entity 		: 		core3.Entity;
	public var sprite 		: 		openfl.display.Sprite;

	public function new(e:core3.Entity, s:openfl.display.Sprite){
		hp = 0;
		energy = 100;
		level = 1;
		entity = e;
	}
}