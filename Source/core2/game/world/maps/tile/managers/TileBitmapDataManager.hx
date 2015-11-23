package core2.game.world.maps.tile.managers;

import core2.game.display.BMD in BMD;
import haxe.ds.HashMap in HM;

class TileBitmapDataManager{
	
	private var list:HM<BMD, String>;
	private var tileBitmapDataManager:TileBitmapDataManager;

	public function new(){
		list = new HM<BMD, String>();
		tileBitmapDataManager = this;
	}
	public function getTileBitmapDataManager():TileBitmapDataManager{
		return tileBitmapDataManager;
	}
	public function getList():HM<BMD, String>{
		return list;
	}

}