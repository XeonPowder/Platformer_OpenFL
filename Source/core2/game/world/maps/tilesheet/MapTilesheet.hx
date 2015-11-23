package core2.game.world.maps.tilesheet;

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

class MapTilesheet extends TS{
	
	private var nameArray:Array<String>;
	private var mapTilesheet:Array<Array<Int>>;
	private var mapLayout:ML;
	private var mapTilesheetManager:MTSM;
	private var tileManager:TM;
	private var mapLayoutManager:MLM;
	private var m:Map;
	private var bitmapData:BMD;
	private var id:Int;

	public function new(map:Map, bmd:BMD, mapName:String, registerMapTilesheet:Bool = true){
		super(bmd);
		m = map;
		bitmapData = bmd;
		tileManager = new TM();
		mapLayoutManager = new MLM();
		id = UUID.randomNum();
		if(registerMapTilesheet){
			m.getMapTilesheetManager().getList().set(this, mapName);
		}
		nameArray = generateNameArray(mapName+"NameArray.txt");
		mapLayout = new ML(map, mapLayoutManager, bmd, mapName, generateTiles(nameArray));
		mapTilesheet = mapLayout.getLayout();
	}
	public function hashCode():Int{
		return id;
	}
	public function generateNameArray(fName:String):Array<String>{
		var array:Array<String> = new Array<String>();
		var fin = sys.io.File.read(fName, false);
		var x:Int = 0;
		try{
			while(fin.readLine() != null){
				array[x] = fin.readLine();
				x++;
			}
		}catch(e:haxe.io.Eof){
			return null;
		}
		return array;
	}
	public function generateTiles(a:Array<String>):Array<Tile>{
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		var xTo:Int = Std.int(bitmapData.width/arX);
		var yTo:Int = Std.int(bitmapData.height/arY);
		var tileArray:Array<Tile> = new Array<Tile>();
		var z:Int = 0;
		for(x in 0 ... xTo){
			for(y in 0 ... yTo){
				var tileID:Int = addTileRect(new Rectangle(x*arX, y*arY, arX, arY));
				if(a[z] == null){
					var tileName:String = "";
					while(tileName == null){
						Sys.print("Enter Tilename: ");
						tileName = Sys.stdin().readLine();
					}
					tileArray[tileArray.length] = new Tile(tileManager, tileName, tileID);
				}else{
					tileArray[tileArray.length] = new Tile(tileManager, a[z], tileID);
				}
				z++;
			}
		}
		return tileArray;
	}
	public function getMapLayout():ML{
		return mapLayout;
	}
	public function getMapTilesheet():MapTilesheet{
		return this;
	}
	public function getTileData():Array<Float>{
		return generateTileDataArray();
	}
	private function generateTileDataArray():Array<Float>{
		var tileDataArray:Array<Float> = new Array<Float>();
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		var xTo:Int = Std.int(bitmapData.width/arX);
		var yTo:Int = Std.int(bitmapData.height/arY);
		for(x in 0 ... xTo){
			for(y in 0 ... yTo){
				tileDataArray = tileDataArray.concat([x*arX, y*arY, mapTilesheet[x][y]]);
			}
		}
		return tileDataArray;
	}
}