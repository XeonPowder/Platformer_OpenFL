package core2.game.entity.type.player.animation.managers;

import haxe.ds.HashMap;
import core2.game.entity.animation.AnimationList in AL;
import core2.game.assets.UUID;

class PlayerAnimationManager{

	private var list:HashMap<AL, Int>;
	private var playerAnimationManager:PlayerAnimationManager;
	private var id:Int;
	public function new(){
		list = new HashMap<AL, Int>();
		playerAnimationManager = this;
		id = UUID.randomNum();
	}
	public function hashCode():Int{
		return id;
	}
	public function getPlayerAnimationManager():PlayerAnimationManager{
		return playerAnimationManager;
	}
	public function getList():HashMap<AL, Int>{
		return list;
	}
	public function getID():Int{
		return id;
	}
}