package core.movement;

import core.assests.Variables in V;
import core.manager.Manager in M;
import openfl.display.Sprite in S;

class MovementManager extends M{
	private var sprite:S;

	public function new(s:S){
		sprite = s;
	}
	public moveBy(x:Int, y:Int){
		sprite.x += x;
		sprite.y += y;
	}
	private function registerMovementManager(s:Sprite, id:)
}