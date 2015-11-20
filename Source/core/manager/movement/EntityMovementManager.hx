package core.movement;

import core.assests.Variables in V;

class EntityMovemmentManager{
	private var entity:Entity;

	public function new(e:Entity){
		entity = e;
	}
	public moveBy(x:Int, y:Int){
		entity.x += x;
		entity.y += y;
	}
}