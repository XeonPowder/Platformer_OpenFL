package core2.game.world.maps.tilesheet.managers;

import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import haxe.ds.StringMap in SMap;

class MapTilesheetManager{
	private var list:SMap<MTS>;
	private var mapTilesheetManager:MapTilesheetManager;
	public function new(){
		list = new SMap<MTS>();
		mapTilesheetManager = this;
	}
	public function getMapTilesheetManager():MapTilesheetManager{
		return mapTilesheetManager;
	}
	public function getList():SMap<MTS>{
		return list;
	}

}