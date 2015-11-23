package core.movement;

import core.assests.Variables in V;
import core.entity.PlayerAnimations in PA;
import core.display.Animation in A;
import core.manager.animation.AnimationManager in AM;

class PlayerMovementManager{
	private var player:Player;
	private var airborn:Bool;
	private var timeAirborn:Int;
	private var pAnimationArray:PA;
	private var animation:A;

	public function new(p:Player){
		player = p;
		pAnimations = new PA(player);
		animation = pAnimations.getLeftJump();
	}
	public moveBy(x:Int, y:Int){
		player.x += x;
		player.y += y;
	}
	public function jump(currentFrame:Int){
		if(!isAirborn()){
			isAirborn() = !isAirborn();
			timeAirborn = animation.animate();
			moveBy(0, player.getJumpHeight());
		}else{
			if(timeAirborn < 10){
				moveBy(0, player.getJumpHeight());
				timeAirborn = animation.animate(timeAirborn);
			}else if(timeAirborn > 10){
				moveBy(0, player.getJumpHeight()*(-1));
				timeAirborn = animation.animate(timeAirborn);
			}else if(timeAirborn = 20){
				isAirborn() = !isAirborn();
			}
		}
	}
	public function duck(ab:Bool){
		if(!isAirborn()){
			var duck = animation.animate();
		}else{
			var 
		}
	}
	public function unduck(ab:Bool){

	}
	public function right(ab:Bool){

	}
	public function left(ab:Bool){

	}
	public function isAirborn():Bool{
		return airborn;
	}
	public function getTimeAirborn():Int{
		return timeAirborn;
	}
}