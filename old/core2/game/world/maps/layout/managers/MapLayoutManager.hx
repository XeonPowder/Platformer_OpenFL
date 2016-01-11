package core2.game.world.maps.layout.managers;

import core2.game.world.maps.layout.MapLayout in ML;
import haxe.ds.ObjectMap in OMap;
import core2.game.assets.UUID;

class MapLayoutManager{
	
	private var mapLayoutManager:MapLayoutManager;
	private var list:OMap<String, ML>;
	public function new(){
		list = new OMap<String, ML>();
		mapLayoutManager = this;
	}
	public function getMapLayoutManager():MapLayoutManager{
		return mapLayoutManager;
	}
	public function getList():OMap<String, ML>{
		return list;
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
}