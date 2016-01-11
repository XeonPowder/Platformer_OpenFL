package core2.game.world.maps.tilesheet;


import sys.io.File in File;
import sys.FileSystem in FS;
import core2.game.display.BMD in BMD;
import openfl.display.Tilesheet in TS;
import core2.game.world.maps.tilesheet.managers.MapTilesheetManager in MTSM;
import core2.game.world.maps.Map in Map;
import core2.game.world.maps.tile.Tile in Tile;
import core2.game.world.maps.layout.MapLayout in ML;
import core2.game.world.maps.layout.managers.MapLayoutManager in MLM;
import core2.game.world.maps.tile.managers.TileManager in TM;
import openfl.geom.Rectangle in Rectangle;
import core2.game.assets.UUID;
import haxe.ds.IntMap in IMap;

class MapTilesheet extends TS{
	
	private var nameArray:Array<String>;
	private var tileArray:Array<Tile>;
	private var mapTilesheet:IMap<Int>;
	private var mapLayout:ML;
	private var mapTilesheetManager:MTSM;
	private var tileManager:TM;
	private var mapLayoutManager:MLM;
	private var m:Map;
	private var bitmapData:BMD;
	private var id:Int;
	private var nameArrayFromFile:Bool;
	private var tileDataArray:Array<Float>;
	private var width:Int;
	private var height:Int;

	public function new(map:Map, w:Int, h:Int, bmd:BMD, mapName:String, registerMapTilesheet:Bool = true){
		super(bmd.getData());
		m = map;
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		width = w;
		height = h;
		bitmapData = bmd;
		//tileManager = new TM();
		//mapLayoutManager = new MLM();
		id = UUID.randomNum();
		if(registerMapTilesheet){
			//m.getMapTilesheetManager().getList().set(mapName, this);
		}
		nameArray = new Array<String>();
		nameArray = generateNameArray("assets/maps/"+mapName+"/NameArray.txt");
		tileArray = new Array<Tile>();
		tileArray = generateTiles(nameArray, bitmapData, width, height);
		mapLayout = new ML(map, this, mapLayoutManager, bmd, mapName, width, height, tileArray);
		mapTilesheet = new IMap<Int>();
		mapTilesheet = mapLayout.getLayout();

		trace(mapTilesheet);
		tileDataArray = new Array<Float>();
		tileDataArray = generateTileDataArray(m, mapTilesheet, bitmapData, 0, 0, 0, width, height, arX, arY, new Array<Float>());
	}
	public function hashCode():Int{
		return id;
	}
	public function generateNameArray(fName:String):Array<String>{
		var array:Array<String> = new Array<String>();
		nameArrayFromFile = false;
		if(FS.exists(fName)){
			var fin = File.read(fName, false);
			var x:Int = 0;
			try{
				while(true){
					array[x] = fin.readLine();
					x++;
				}
			}catch(e:haxe.io.Eof){
			}
			nameArrayFromFile = true;
		}
		trace(array);
		return array;
	}
	public function generateTiles(a:Array<String>, bmd:BMD, w:Int, h:Int):Array<Tile>{
		bmd = Assets.getBitmapData(new String("assets/maps/"+mn+"/"+ar+".png")
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		var xTo:Int = Std.int(w/arX);//Std.int(bitmapData.getWidth()/arX);
		var yTo:Int = Std.int(h/arY);//Std.int(bitmapData.getHeight()/arY);
		var f_tileArray:Array<Tile> = new Array<Tile>();
		var z:Int = 0;
		for(x in 0 ... xTo){
			for(y in 0 ... yTo){
				var tileID:Int = addTileRect(new Rectangle(x*arX, y*arY, arX, arY));
				if(a[z] != null){
					var tileName:String = new String("x:"+x+" y:"+y);
					f_tileArray[z] = new Tile(tileName, tileID);
				}else{
					f_tileArray[z] = new Tile(a[z], tileID);
				}
				z++;
			}
		}
		trace(f_tileArray);
		return f_tileArray;
	}
	public function getMapLayout():ML{
		return mapLayout;
	}
	public function getMapTilesheet():MapTilesheet{
		return this;
	}
	public function getTileData():Array<Float>{
		return tileDataArray;
	}
	public function getTileArray():Array<Tile>{
		return tileArray;
	}
	private function generateTileDataArray(m:Map, mts:IMap<Int>, bmd:BMD, x:Int, y:Int, z:Int, w:Int, h:Int, arX:Int, arY:Int, a:Array<Float>):Array<Float>{
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
		
		if(x > Std.int(w/arX)){//bitmapData.getWidth()/arX){
			x = 0;
			y++;
		}
		if(y > Std.int(h/arY)){//bitmapData.getHeight()/arY){
			y = 0;
		}
		trace(mts);
		if(z < arY*arX){
			a.concat([x*arX, y*arY, mts.get(z)]);
			a = generateTileDataArray(m, mts, bmd, x+1, y, z+1, w, h, arX, arY, a);
		}
		trace(a);
		return a;
	}

}