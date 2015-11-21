package core.manager.animation;

import core.game.Game in G;
import core.display.Animation in A;
import haxe.ds.HashMap in HM;

class AnimationManager{

	private var animationManager:HM<A, String>;
	private var animationID:String;

	public function new():Void{
		animationManager = new HM<A, String>();
		animationID = registerManager(animationManager);
	}
	public function registerNewAnimation(a:A):String{
		id = G.getVariables().manager.generateNewID(4);
		animationManager.set(a, id);
		return animationID;
	}
}