package core2.game.managers;

import core2.game.assets.UUID in UUID;
import haxe.ds.HashMap in HM;

class Manager{
	
	private var manager:Manager;

	public function new():Void{
		manager = this;
	}
	public function getManager():Manager{
		return manager;
	}
}