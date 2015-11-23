package core2.game.entity.movement.managers;

import core2.game.entity.Entity in E;

class EntityMovementManager{
	private var entity:E;

	public function new(e:E):Void{
		entity = e;
	}
	public function moveBy(x:Int, y:Int):Void{
		entity.x += x;
		entity.y += y;
	}
}