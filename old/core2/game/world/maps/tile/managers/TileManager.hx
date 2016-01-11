package core2.game.world.maps.tile.managers;

import core2.game.world.maps.tile.Tile in Tile;
import haxe.ds.ObjectMap in OMap;

class TileManager{
	private var list:OMap<Tile, Int>;
	private var tileManager:TileManager;
	public function new(){
		tileManager = this;
		list = new OMap<Tile, Int>();
	}
	public function getTileManager():TileManager{
		return tileManager;
	}
	public function getList():OMap<Tile, Int>{
		return list;
	}

}