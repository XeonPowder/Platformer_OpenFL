package core2.game.world.maps.layout;

import core2.game.world.maps.tile.Tile in Tile;
import core2.game.display.BMD in BMD;
import core2.game.world.maps.tile.managers.TileManager in TM;
import core2.game.world.maps.layout.managers.MapLayoutManager in MLM;
import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import core2.game.world.maps.Map in Map;
import core2.game.assets.UUID;
import haxe.ds.IntMap in IMap;

class MapLayout {
	private var layout:IMap<Int>;
	private var nameArray:Array<String>;
	private var bitmapData:BMD;
	private var tileManager:TM;
	private var m:Map;
	private var tmHash:Int;
	private var width:Int;
	private var height:Int;
	private var ta:Array<Tile>;
	private var mapTilesheet:MTS;
	public function new(map:Map, mts:MTS, mapLayoutManager:MLM, bmd:BMD, mName:String, w:Int, h:Int, tileArray:Array<Tile>, registerMapLayout:Bool = true){
		m = map;
		width = w;
		height = h;
		tmHash = hashCode();
		bitmapData = bmd;
		mapTilesheet = mts;
		ta = mapTilesheet.getTileArray();
		layout = new IMap<Int>();
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		layout = gLayout(ta, 0, 0, arX, arY);
		if(registerMapLayout){
			//mapLayoutManager.getMapLayoutManager().getList().set(m.getMapName()+"Layout", this);
		}else{
			Sys.println("Map: "+mName+"Layout was not added to the MapLayoutManager.");
		}
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}/*
	public function generateLayout(tArray:Array<Tile>, x:Int, y:Int, z:Int, arX:Int, arY:Int, a:Array<Array<Int>>, line:Array<Int>):Array<Array<Int>>{
		if(x > Std.int(getWidth()/arX)){//bitmapData.getWidth()/arX){
			x = 0;
			y++;
		}
		if(y > Std.int(getHeight()/arY)){//bitmapData.getHeight()/arY){
			y = 0;
		}
		if(z < arY*arX){
			var tID:Int = tArray[z].getTileID();
			if(x == 0 && y > 0){
				trace(line);
				a.push(line);
				line = new Array<Int>();
			}
			line[x] = tID;
			generateLayout(tArray, x+1, y, z+1, arX, arY, a, line);
		}
		return a;
	}*/
	public function gLayout(ta:Array<Tile>, w:Int, h:Int, arX:Int, arY:Int):IMap<Int>{
		var a:IMap<Int> = new IMap<Int>();
		var x:Int = 0;
		var y:Int = 0;
		var z:Int = 0;
		while(y < Std.int(getHeight()/arY)){
			if(z >= arY*arX){
				trace(a);
				return a;
			}
			while(x < Std.int(getWidth()/arX)){
				if(z >= arY*arX){
					trace(a);
					return a;
				}
				a.set((x+(y*x)), ta[z].getTileID());
				z++;
				x++;
			}
			if(x >= Std.int(getWidth()/arX)){
				x = 0;
			}
			y++;
			if(y >= Std.int(getHeight()/arY)){
				y = 0;
			}
		}
		trace(a);
		return a;
	}
	public function getLayout():IMap<Int>{
		return layout;
	}
	public function getWidth():Int{
		return width;
	}
	public function getHeight():Int{
		return height;
	}
	public function getTileArray():Array<Tile>{
		return ta;
	}
}