package core2.game.world.maps.layout;

import core2.game.world.maps.tile.Tile in Tile;
import core2.game.display.BMD in BMD;
import core2.game.world.maps.tile.managers.TileManager in TM;
import core2.game.world.maps.layout.managers.MapLayoutManager in MLM;
import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import core2.game.world.maps.Map in Map;
import core2.game.assets.UUID;

class MapLayout {

	private var layout:Array<Array<Int>>;
	private var tlayout:Array<Array<Int>>;
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
		layout = new Array<Array<Int>>();
		tlayout = new Array<Array<Int>>();
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		layout = generateLayout(ta, 0, 0, 0, arX, arY, tlayout, new Array<Int>());
		if(registerMapLayout){
			mapLayoutManager.getMapLayoutManager().getList().set(this, m.getMapName()+"Layout");
		}else{
			Sys.println("Map: "+mName+"Layout was not added to the MapLayoutManager.");
		}
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
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
	}
	public function gLayout(){
		var a:Array<Array<Int>> = new Array<Array<Int>>;
		var x:Int = 0;
		var y:Int = 0;
		while(x < Std.int(getWidth()/arX) && z < arY*arX){
			a[x][y]
			if(x+1 >= Std.int(getWidth()/arX)){
				x = 0;
				y += 1;
			}
			z++;
		}
	}
	public function getLayout():Array<Array<Int>>{
		return layout;
	}
	public function getWidth():Int{
		return width;
	}
	public function getHeight():Int{
		return height;
	}
}