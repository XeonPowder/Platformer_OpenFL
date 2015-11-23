package core2.game.entity.managers;

import core2.game.managers.Manager in M;
import openfl.display.Sprite in S;

class MovementManager extends M{
	private var sprite:S;

	public function new(s:S){
		sprite = s;
	}
	public moveBy(x:Int, y:Int){
		sprite.x += x;
		sprite.y += y;
	})
}