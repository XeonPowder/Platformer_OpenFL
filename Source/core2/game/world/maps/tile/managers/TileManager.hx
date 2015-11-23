package core2.game.world.maps.tile.managers;

import core2.game.world.maps.tile.Tile in Tile;
import haxe.ds.HashMap in HM;

class TileManager{
	private var list:HM<Tile, Int>;
	private var tileManager:TileManager;
	public function new(){
		tileManager = this;
		list = new HM<Tile, Int>();
	}
	public function getTileManager():TileManager{
		return tileManager;
	}
	public function getList():HM<Tile, Int>{
		return list;
	}

}