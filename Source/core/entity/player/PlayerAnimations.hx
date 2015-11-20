package core.data;

import core.manager.animation.PlayerAnimationManager;
import core.entities.Player in P;
import core.assests.Variables in V;
import core.display.Animation in AN;
import openfl.display.BitmapData;
import openfl.Assests in A;
import core.manager.animation.PlayerAnimationManager in PAM;
import core.manager.animation.AnimationList in AL;

class PlayerAnimations{
	
	private var player:P;
	private var playerAnimationManager:PAM;
	private var animationList:AM;
	private var animations:HashMap<A, String>;

	private var leftID:String;
	private var rightID:String;
	private var leftJumpID:String;
	private var RightJumpID:String;
	private var idleID:String;
	private var leftTouchdownID:String;
	private var RightTouchdownID:String;

	public function new(p:P){
		player = p;
		animationList = compileAnimations();
		playerAnimationManager = PAM.new(animationList);
	}
	private function compileAnimations():AL{
		var al:AL = new AL();
		
		leftID = al.registerNewAnimation(getLeft(), "left");
		rightID = al.registerNewAnimation(getRight(), "right");
		leftJumpID = al.registerNewAnimation(getLeftJump(), "left_jump");
		rightJumpID = al.registerNewAnimation(getRightJump(), "right_jump");
		idleID = al.registerNewAnimation(getIdle(), "idle");
		leftTouchdownID = al.registerNewAnimation(getLeftTouchdown(), "left_touchdown");
		rightTouchdownID = al.registerNewAnimation(getRightTouchdown(), "right_touchdown");
		
		return al;
	}
	private var movingLeft_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left.png"),
		A.getBitmapData("assests/player/movement/left/left.png")










														];

	private function getMovingLeftBMDArray():Array<BitmapData>{
		return movingLeft_BMD_Array;
	}
	private var movingLeftAnimation:A = new AN(player.getBitmap(), PA.getMovingLeftBMDArray(), "left");
	private var movingLeftAnimationFrames = movingLeftAnimation.getFrames();
	public function getLeft():A{
		return movingLeftAnimation;
	}

	private var movingLeft_Jumping_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left_jump.png"),
		A.getBitmapData("assests/player/movement/left/left_jump.png")










														];

	private function getMovingLeftJumpingBMDArray():Array<BitmapData>{
		return movingLeft_Jumping_BMD_Array;
	}
	private var movingLeftJumpingAnimation:A = new AN(player.getBitmap(), PA.getMovingLeftJumpingBMDArray(), "left_jump");
	private var movingLeftJumpingAnimationFrames = movingLeftJumpingAnimation.getFrames();
	private function getLeftJump():A{
		return moveingLeftJumpingAnimation;
	}

	private var movingRight_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right.png"),
		A.getBitmapData("assests/player/movement/right/right.png")










														];

	private function getMovingRightBMDArray():Array<BitmapData>{
		return movingRight_BMD_Array;
	}
	private var movingRightAnimation:A = new AN(player.getBitmap(), PA.getMovingRightBMDArray(), "right");
	private var movingRightAnimationFrames = movingRightAnimation.getFrames();
	public function getRight():A{
		return moveingRightAnimation;
	}

	private var movingRight_Jumping_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right_jump.png"),
		A.getBitmapData("assests/player/movement/right/right_jump.png")










														];

	private function getMovingRightJumpingBMDArray():Array<BitmapData>{
		return movingRight_Jumping_BMD_Array;
	}
	private var movingRightJumpingAnimation:A = new AN(player.getBitmap(), PA.getMovingRightJumpingBMDArray(), "right_jump");
	private var movingRightJumpingAnimationFrames = movingRightJumpingAnimation.getFrames();
	private function getRightJump():A{
		return moveingRightJumpingAnimation;
	}



	private var idle_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/idle/idle.png"),
		A.getBitmapData("assests/player/movement/idle/idle.png")










														];

	private function getIdleBMDArray():Array<BitmapData>{
		return idle_BMD_Array;
	}
	private var idleAnimation:A = new AN(player.getBitmap(), PA.getIdleBMDArray(), "idle");
	private var idleAnimationFrames = idleAnimation.getFrames();
	private function getIdle():A{
		return idleAnimation;
	}



	private var left_Touchdown_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left_touchdown.png"),
		A.getBitmapData("assests/player/movement/left/left_touchdown.png")










														];

	private function getLeftTouchdownBMDArray():Array<BitmapData>{
		return left_Touchdown_BMD_Array;
	}
	private var leftTouchdownAnimation:A = new AN(player.getBitmap(), PA.getLeftTouchdownBMDArray(), "left_touchdown");
	private var leftTouchdownAnimationFrames = leftTouchdownAnimation.getFrames();
	private function getLeftTouchdown():A{
		return leftTouchdownAnimation;
	}


	private var right_Touchdown_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right_touchdown.png"),
		A.getBitmapData("assests/player/movement/right/right_touchdown.png")










														];

	
	private function getRightTouchdownArray():Array<BitmapData>{
		return right_Touchdown_BMD_Array;
	}
	private var rightTouchdownAnimation:A = new AN(player.getBitmap(), PA.getRightTouchdownBMDArray(), "right_touchdown");
	private var rightTouchdownAnimationFrames = rightTouchdownAnimation.getFrames();
	private function getRightTouchdown():A{
		return rightTouchdownAnimation;
	}
}