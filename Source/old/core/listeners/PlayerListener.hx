package core.listeners;

import core.game.Game in G;

class PlayerListener extends EntityListener{
	public function new(){

	}
	public function update(){
		checkKeyStates();
		checkDamageRecieved();
		checkExperienceRecieved();
		checkLevelUp();
				if(G.getVariables().getKeyboardListener.getKeyState(37)){
					
				}else if(G.getVariables().getKeyboardListener.getKeyState(39)){
					A.new(bitmap, PA.getMovingRightJumpingBMDArray(), this(Entity));
					G.getVariables()._DIRECTION = RIGHT;
					moveBy(2, -1);
				}else{
					if(G.getVariables().getDirection() == DIRECTION.LEFT){
						graphic = Assests.getBitmapData("assests/player/movement/left/left_jump.png");
	        			moveBy(-2, -1);
					}else if(G.getVariables().getDirection() == DIRECTION.RIGHT){
						graphic = Assests.getBitmapData("assests/player/movement/right/right_jump.png");
						moveBy(2, -1);
					}

				}
			}else{
				if(G.getVariables().getKeyboardListener.getKeyState(37)){
					graphic = Assests.getBitmapData("assests/player/movement/left/left_fall.png");
					G.getVariables()._DIRECTION = LEFT;
					moveBy(-2, 1);
				}else if(G.getVariables().getKeyboardListener.getKeyState(39)){
					graphic = Assests.getBitmapData("assests/player/movement/right/right_fall.png");
					G.getVariables()._DIRECTION = RIGHT;
					moveBy(2, 1);
				}else{
					if(G.getVariables().getDirection() == DIRECTION.LEFT){
						graphic = Assests.getBitmapData("assests/player/movement/left/left_fall.png");
						moveBy(-2, 1);
					}else if(G.getVariables().getDirection() == DIRECTION.RIGHT){
						graphic = Assests.getBitmapData("assests/player/movement/right/right_fall.png");
						moveBy(2, 1);
					}
				}
			}
		}else if(counter >= jumptime){
        	currentlyJumping = !currentlyJumping;
        	if(G.getVariables().getKeyboardListener.getKeyState(37)){
				graphic = Assests.getBitmapData("assests/player/movement/left/left_touchdown.png");
			}else if(G.getVariables().getKeyboardListener.getKeyState(39)){
				graphic = Assests.getBitmapData("assests/player/movement/right/right_touchdown.png");
			}else{
				if(G.getVariables().getDirection() == DIRECTION.LEFT){
					graphic = Assests.getBitmapData("assests/player/movement/left/left_touchdown.png");
				}else if(G.getVariables().getDirection() == DIRECTION.RIGHT){
					graphic = Assests.getBitmapData("assests/player/movement/right/right_touchdown.png");
				}
			}
			G.getVariables()._DIRECTION = NONE;
        	counter = 0;
        }
	    counter++;	
	}
	public function checkKeyStates(){
		var jump:Bool = G.getVariables().getKeyboardListener.getKeyState(G.getVariables().keyUP);
		var duck:Bool = G.getVariables().getKeyboardListener.getKeyState(G.getVariables().keyDOWN);
		var left:Bool = G.getVariables().getKeyboardListener.getKeyState(G.getVariables().keyLEFT);
		var right:Bool = G.getVariables().getKeyboardListener.getKeyState(G.getVariables().keyRIGHT);

		if(jump){
			if(!G.getVariables().player.movementManager.isAirborn()){
				G.getVariables().player.momvementManager.jump(0, 0);
			}
		}
		if(left){
			if(!G.getVariables().player.movememntManager.isAirborn()){
				G.getVariables().player.movementManager.left();
			}else{
				G.getVariables().player.movementManager.aLeft();
			}
		}
		if(right){
			if(!G.getVariables().player.movememntManager.isAirborn()){
				G.getVariables().player.movementManager.right();
			}else{
				G.getVariables().player.movementManager.aRight();
			}
		}
		if(duck){
			if(!G.getVariables().player.movememntManager.isAirborn()){
				G.getVariables().player.movementManager.duck();
			}else{
				G.getVariables().player.movementManager.aDuck();
			}
		}else if(!duck){
			if(!G.getVariables().player.movementManager.isAirborn() && G.getVariables().player.movementManager.isDucked()){
				G.getVariables().player.movementManager.unduck();
			}else if(G.getVariables().player.movementManager.isAirborn()){
				G.getVariables().player.movementManager.aUnduck();
			}
		}
	}
	public function checkDamageRecieved(){
		G.getVariables().player.setHealth(G.getVariables().player.getHealth() - G.getVariables().player.getDamageGivenToPlayer());
		if(G.getVariables().player.health <= 0){
			G.getVariables().game.stop(G.getVariables().ENDGAMEREASON.death);
		}
	}
	public function checkExperienceGained(){
		G.getVariables().player.getExperience() += G.getVariables().player.getExperienceGained();
	}
	public function checkLevelUp(){
		if(G.getVariables().player.getExperience() == G.getVariables().player.getExperienceCap()){
			G.getVariables().player.setExperience(0.0);
			G.getVariables().player.levelUp();
			G.getVariables().player.setLevel(G.getVariables().player.getLevel() + 1);
		}
	}
}