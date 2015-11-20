package core.manager.animation;

import haxe.ds.HashMap;
import core.assests.Variables in V;
import core.display.Animation in A;

class PlayerAnimationManager extends AnimationManager{

	private var playerAnimationManager:HashMap<HashMap<A, String>, String>;
	private var id:String;

	public function new(playeranimations:HashMap<A, String>):PlayerAnimationManager{
		playerAnimationManager = new HashMap<HashMap<A, String>, String>();
		id = registerAnimationManager();
		return this;
	}
	public function registerNewPlayerAnimation(animation:A, id:String = V.manager.generateNewID(6)):String{
		playerAnimationManager.set(animation, id);
		return id;
	}
	private function registerAnimationManager(id:String = V.manager.generateNewID(3)):String{
		V.manager.registerNewManager(this, id);
		return id;
	}
}