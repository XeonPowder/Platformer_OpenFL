package core.manager.animation;

import haxe.ds.HashMap;
import core.game.Game in G;
import core.display.Animation in A;

class PlayerAnimationManager{

	private var playerAnimationManager:HashMap<HashMap<A, String>, String>;
	private var playerAnimationManagerID:String;

	public function new(playeranimations:HashMap<A, String>){
		playerAnimationManager = new HashMap<HashMap<A, String>, String>();
		playerAnimationManagerID = registerAnimationManager();
	}
	public function registerNewPlayerAnimation(animation:A):String{
		var id:String = G.getVariables().manager.generateNewID(6);
		playerAnimationManager.set(animation, id);
		return id;
	}
	private function registerAnimationManager():String{
		G.getVariables().manager.registerNewManager(this, G.getVariables().manager.generateNewID(3));
		return playerAnimationManagerID;
	}
}