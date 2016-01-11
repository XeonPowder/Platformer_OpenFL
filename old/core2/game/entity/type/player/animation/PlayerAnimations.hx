package core2.game.entity.type.player.animation;

import core2.game.entity.type.player.Player in P;
import core2.game.entity.animation.Animation in AN;
import openfl.display.BitmapData;
import openfl.Assets in A;
import core2.game.entity.type.player.animation.managers.PlayerAnimationManager in PAM;
import core2.game.entity.animation.AnimationList in AL;
import haxe.ds.HashMap in HM;
import core2.game.assets.UUID;

class PlayerAnimations{
	
	private var player:P;
	private var playerAnimationManager:PAM;
	private var animationList:AL;
	
	private var pamHash:Int;
	private var leftID:Int;
	private var rightID:Int;
	private var leftJumpID:Int;
	private var rightJumpID:Int;
	private var idleID:Int;
	private var leftTouchdownID:Int;
	private var rightTouchdownID:Int;

	private var movingLeftAnimation:AN = null;
	private var movingLeftAnimationFrames:Int = 0;
	private var movingLeftJumpingAnimation:AN = null;
	private var movingLeftJumpingAnimationFrames:Int = 0;
	private var movingRightAnimation:AN = null;
	private var movingRightAnimationFrames:Int = 0;
	private var movingRightJumpingAnimation:AN = null;
	private var movingRightJumpingAnimationFrames:Int = 0;
	private var idleAnimation:AN = null;
	private var idleAnimationFrames:Int = 0;
	private var leftTouchdownAnimation:AN = null;
	private var leftTouchdownAnimationFrames:Int = 0;
	private var rightTouchdownAnimation:AN = null;
	private var rightTouchdownAnimationFrames:Int = 0;

	public function new(p:P){
		player = p;
		createAnimations();
		createAnimationFrames();
		generateHashCodes();
		animationList = compileAnimations();
		playerAnimationManager = new PAM();
		playerAnimationManager.getList().set(animationList, pamHash);
	}
	private function generateHashCodes():Void{
		leftID = movingLeftAnimation.getAnimation().hashCode();
		rightID = movingRightAnimation.getAnimation().hashCode();
		leftJumpID = movingLeftJumpingAnimation.getAnimation().hashCode();
		rightJumpID = movingRightJumpingAnimation.getAnimation().hashCode();
		idleID = idleAnimation.getAnimation().hashCode();
		leftTouchdownID = leftTouchdownAnimation.getAnimation().hashCode();
		rightTouchdownID = rightTouchdownAnimation.getAnimation().hashCode();
		pamHash = playerAnimationManager.getPlayerAnimationManager().hashCode();
	}
	private function compileAnimations():AL{
		var al:AL = new AL();
		al.getList().set(getLeft(), leftID);
		al.getList().set(getRight(), rightID);
		al.getList().set(getLeftJump(), leftJumpID);
		al.getList().set(getRightJump(), rightJumpID);
		al.getList().set(getIdle(), idleID);
		al.getList().set(getLeftTouchdown(), leftTouchdownID);
		al.getList().set(getRightTouchdown(), rightTouchdownID);
		return al;
	}
	private function createAnimations():Void{
		movingLeftAnimation = new AN(player.getBitmap(), getMovingLeftBMDArray(), "left");
		movingLeftJumpingAnimation = new AN(player.getBitmap(), getMovingLeftJumpingBMDArray(), "left_jump");
		movingRightAnimation = new AN(player.getBitmap(), getMovingRightBMDArray(), "right");
		movingRightJumpingAnimation = new AN(player.getBitmap(), getMovingRightJumpingBMDArray(), "right_jump");
		idleAnimation = new AN(player.getBitmap(), getIdleBMDArray(), "idle");
		leftTouchdownAnimation = new AN(player.getBitmap(), getLeftTouchdownBMDArray(), "left_touchdown");
		rightTouchdownAnimation = new AN(player.getBitmap(), getRightTouchdownBMDArray(), "right_touchdown");
		
	}
	private function createAnimationFrames():Void{
		movingLeftAnimationFrames = movingLeftAnimation.getFrames();
		movingLeftJumpingAnimationFrames = movingLeftJumpingAnimation.getFrames();
		movingRightAnimationFrames = movingRightAnimation.getFrames();
		movingRightJumpingAnimationFrames = movingRightJumpingAnimation.getFrames();
		idleAnimationFrames = idleAnimation.getFrames();
		leftTouchdownAnimationFrames = leftTouchdownAnimation.getFrames();
		rightTouchdownAnimationFrames = rightTouchdownAnimation.getFrames();
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	private var movingLeft_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left.png"),
		A.getBitmapData("assests/player/movement/left/left.png")










														];

	private function getMovingLeftBMDArray():Array<BitmapData>{
		return movingLeft_BMD_Array;
	}
	
	private function getLeft():AN{
		return movingLeftAnimation;
	}

	private var movingLeft_Jumping_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left_jump.png"),
		A.getBitmapData("assests/player/movement/left/left_jump.png")










														];

	private function getMovingLeftJumpingBMDArray():Array<BitmapData>{
		return movingLeft_Jumping_BMD_Array;
	}
	
	private function getLeftJump():AN{
		return movingLeftJumpingAnimation;
	}

	private var movingRight_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right.png"),
		A.getBitmapData("assests/player/movement/right/right.png")










														];

	private function getMovingRightBMDArray():Array<BitmapData>{
		return movingRight_BMD_Array;
	}
	
	private function getRight():AN{
		return movingRightAnimation;
	}

	private var movingRight_Jumping_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right_jump.png"),
		A.getBitmapData("assests/player/movement/right/right_jump.png")










														];

	private function getMovingRightJumpingBMDArray():Array<BitmapData>{
		return movingRight_Jumping_BMD_Array;
	}
	
	private function getRightJump():AN{
		return movingRightJumpingAnimation;
	}



	private var idle_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/idle/idle.png"),
		A.getBitmapData("assests/player/movement/idle/idle.png")










														];

	private function getIdleBMDArray():Array<BitmapData>{
		return idle_BMD_Array;
	}
	
	private function getIdle():AN{
		return idleAnimation;
	}



	private var left_Touchdown_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/left/left_touchdown.png"),
		A.getBitmapData("assests/player/movement/left/left_touchdown.png")










														];

	private function getLeftTouchdownBMDArray():Array<BitmapData>{
		return left_Touchdown_BMD_Array;
	}
	
	private function getLeftTouchdown():AN{
		return leftTouchdownAnimation;
	}


	private var right_Touchdown_BMD_Array:Array<BitmapData> = 
	[A.getBitmapData("assests/player/movement/right/right_touchdown.png"),
		A.getBitmapData("assests/player/movement/right/right_touchdown.png")










														];

	
	private function getRightTouchdownBMDArray():Array<BitmapData>{
		return right_Touchdown_BMD_Array;
	}
	
	private function getRightTouchdown():AN{
		return rightTouchdownAnimation;
	}
}