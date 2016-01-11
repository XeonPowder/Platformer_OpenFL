package core2.game.world.maps.managers;

import haxe.ds.StringMap in SMap;
import core2.game.world.maps.Map in Map;

class MapManager {
	private var list:SMap<Map>;
	private var manager:MapManager;
	public function new(){
		list = new SMap<Map>();
		manager = this;
	}
	public function getManager():MapManager{
		return manager;
	}
	public function getMapManager():SMap<Map>{
		return list;
	}
}