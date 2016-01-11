package core2.game.entity.animation;

import core2.game.entity.animation.Animation;
import core2.game.assets.UUID;

import haxe.ds.HashMap in HM;

class AnimationList{

	private var list:HM<Animation, Int>;
	private var animationList:AnimationList;
	private var id:Int = 0;

	public function new():Void{
		list = new HM<Animation, Int>();
		animationList = this;
		id = UUID.randomNum();
	}
	public function getAnimationList():AnimationList{
		return animationList;
	}
	public function getList():HM<Animation, Int>{
		return list;
	}
	public function hashCode():Int{
		return id;
	}

}