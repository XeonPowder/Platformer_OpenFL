package core2.game.world.maps.managers;

import haxe.ds.HashMap in HM;
import core2.game.world.maps.Map in Map;

class MapManager {
	private var manager:HM<Map, Int>;
	public function new(){
		manager = new HM<Map, Int>();
	}
	public function getManager():MapManager{
		return this;
	}
	public function getMapManager():HM<Map, Int>{
		return manager;
	}
}