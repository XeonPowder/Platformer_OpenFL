package core2.game.world.maps.tilesheet.managers;

import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import haxe.ds.HashMap in HM;

class MapTilesheetManager{
	private var list:HM<MTS, String>;
	private var mapTilesheetManager:MapTilesheetManager;
	public function new(){
		list = new HM<MTS, String>();
		mapTilesheetManager = this;
	}
	public function getMapTilesheetManager():MapTilesheetManager{
		return mapTilesheetManager;
	}
	public function getList():HM<MTS, String>{
		return list;
	}

}