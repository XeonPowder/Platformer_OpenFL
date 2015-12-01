package core2.game.world.maps.tile.managers;

import core2.game.display.BMD in BMD;
import haxe.ds.StringMap in SMap;

class TileBitmapDataManager{
	
	private var list:SMap<BMD>;
	private var tileBitmapDataManager:TileBitmapDataManager;

	public function new(){
		list = new SMap<BMD>();
		tileBitmapDataManager = this;
	}
	public function getTileBitmapDataManager():TileBitmapDataManager{
		return tileBitmapDataManager;
	}
	public function getList():SMap<BMD>{
		return list;
	}

}