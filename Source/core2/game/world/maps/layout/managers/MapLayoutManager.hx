package core2.game.world.maps.layout.managers;

import core2.game.world.maps.layout.MapLayout in ML;
import haxe.ds.HashMap in HM;
import core2.game.assets.UUID;

class MapLayoutManager{
	
	private var mapLayoutManager:MapLayoutManager;
	private var list:HM<ML, String>;
	public function new(){
		list = new HM<ML, String>();
		mapLayoutManager = this;
	}
	public function getMapLayoutManager():MapLayoutManager{
		return mapLayoutManager;
	}
	public function getList():HM<ML, String>{
		return list;
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
}