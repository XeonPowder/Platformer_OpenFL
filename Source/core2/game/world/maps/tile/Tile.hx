package core2.game.world.maps.tile;

import core2.game.world.maps.tile.managers.TileManager in TM;
import core2.game.assets.UUID;

class Tile {
	private var tileName:String;
	private var tileID:Int;
	private var tileManager:TM;
	private var id:Int;
	public function new(tm:TM, name:String, tileid:Int, registerTile:Bool = true){
		tileName = name;
		tileID = tileid;
		tileManager = tm;
		id = UUID.randomNum();
		if(registerTile){
			tm.getTileManager().getList().set(this, tileID);
		}else{
			Sys.println("Tile-ID: " +tileName+"-"+tileID+" was not added to the TileManager.");
		}
	}
	public function hashCode():Int{
		return id;
	}
	public function getTile():Tile{
		return this;
	}
	public function getTileID():Int{
		return tileID;
	}
	public function getTileName():String{
		return tileName;
	}
}