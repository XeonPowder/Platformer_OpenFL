package core.listeners;

import core.assests.Variables in V;

class PlayerListener extends EntityListener{
	public function new(){

	}
	public function update(){
		checkKeyStates();
		checkDamageRecieved();
		checkExperienceRecieved();
		checkLevelUp();
				if(V.getKeyboardListener.getKeyState(37)){
					
				}else if(V.getKeyboardListener.getKeyState(39)){
					A.new(bitmap, PA.getMovingRightJumpingBMDArray(), this(Entity));
					V._DIRECTION = RIGHT;
					moveBy(2, -1);
				}else{
					if(V.getDirection() == DIRECTION.LEFT){
						graphic = Assests.getBitmapData("assests/player/movement/left/left_jump.png");
	        			moveBy(-2, -1);
					}else if(V.getDirection() == DIRECTION.RIGHT){
						graphic = Assests.getBitmapData("assests/player/movement/right/right_jump.png");
						moveBy(2, -1);
					}

				}
			}else{
				if(V.getKeyboardListener.getKeyState(37)){
					graphic = Assests.getBitmapData("assests/player/movement/left/left_fall.png");
					V._DIRECTION = LEFT;
					moveBy(-2, 1);
				}else if(V.getKeyboardListener.getKeyState(39)){
					graphic = Assests.getBitmapData("assests/player/movement/right/right_fall.png");
					V._DIRECTION = RIGHT;
					moveBy(2, 1);
				}else{
					if(V.getDirection() == DIRECTION.LEFT){
						graphic = Assests.getBitmapData("assests/player/movement/left/left_fall.png");
						moveBy(-2, 1);
					}else if(V.getDirection() == DIRECTION.RIGHT){
						graphic = Assests.getBitmapData("assests/player/movement/right/right_fall.png");
						moveBy(2, 1);
					}
				}
			}
		}else if(counter >= jumptime){
        	currentlyJumping = !currentlyJumping;
        	if(V.getKeyboardListener.getKeyState(37)){
				graphic = Assests.getBitmapData("assests/player/movement/left/left_touchdown.png");
			}else if(V.getKeyboardListener.getKeyState(39)){
				graphic = Assests.getBitmapData("assests/player/movement/right/right_touchdown.png");
			}else{
				if(V.getDirection() == DIRECTION.LEFT){
					graphic = Assests.getBitmapData("assests/player/movement/left/left_touchdown.png");
				}else if(V.getDirection() == DIRECTION.RIGHT){
					graphic = Assests.getBitmapData("assests/player/movement/right/right_touchdown.png");
				}
			}
			V._DIRECTION = NONE;
        	counter = 0;
        }
	    counter++;	
	}
	public function checkKeyStates(){
		var jump:Bool = V.getKeyboardListener.getKeyState(V.Key.UP);
		var duck:Bool = V.getKeyboardListener.getKeyState(V.Key.DOWN);
		var left:Bool = V.getKeyboardListener.getKeyState(V.Key.LEFT);
		var right:Bool = V.getKeyboardListener.getKeyState(V.Key.RIGHT);

		if(jump){
			if(!V.player.movementManager.isAirborn()){
				V.player.momvementManager.jump(0, 0);
			}
		}
		if(left){
			if(!V.player.movememntManager.isAirborn()){
				V.player.movementManager.left();
			}else{
				V.player.movementManager.aLeft();
			}
		}
		if(right){
			if(!V.player.movememntManager.isAirborn()){
				V.player.movementManager.right();
			}else{
				V.player.movementManager.aRight();
			}
		}
		if(duck){
			if(!V.player.movememntManager.isAirborn()){
				V.player.movementManager.duck();
			}else{
				V.player.movementManager.aDuck();
			}
		}else if(!duck){
			if(!V.player.movementManager.isAirborn() && V.player.movementManager.isDucked()){
				V.player.movementManager.unduck();
			}else if(V.player.movementManager.isAirborn()){
				V.player.movementManager.aUnduck();
			}
		}
	}
	public function checkDamageRecieved(){
		V.player.setHealth(V.player.getHealth() - V.player.getDamageGivenToPlayer());
		if(V.player.health <= 0){
			V.game.stop(V.ENDGAMEREASON.DEATH);
		}
	}
	public function checkExperienceGained(){
		V.player.getExperience() += V.player.getExperienceGained();
	}
	public function checkLevelUp(){
		if(V.player.getExperience() == V.player.getExperienceCap()){
			V.player.setExperience(0.0);
			V.player.levelUp();
			V.player.setLevel(V.player.getLevel() + 1);
		}
	}
}