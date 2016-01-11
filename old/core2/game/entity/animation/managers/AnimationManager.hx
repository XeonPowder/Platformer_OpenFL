package core2.game.entity.animation.managers;

import core2.game.entity.animation.Animation in A;
import haxe.ds.HashMap in HM;
import core2.game.assets.UUID;

class AnimationManager{

	private var list:HM<A, Int>;
	private var animationManager:AnimationManager;
	public function new():Void{
		list = new HM<A, Int>();
		animationManager = this;
	}
	public function getAnimationManager():AnimationManager{
		return animationManager;
	}
	public function getList():HM<A, Int>{
		return list;
	}
}