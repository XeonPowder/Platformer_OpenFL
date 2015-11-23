package core2.game.world.maps.layout;

import core2.game.world.maps.tile.Tile in Tile;
import core2.game.display.BMD in BMD;
import core2.game.world.maps.tile.managers.TileManager in TM;
import core2.game.world.maps.layout.managers.MapLayoutManager in MLM;
import core2.game.world.maps.Map in Map;
import core2.game.assets.UUID;

class MapLayout {

	private var layout:Array<Array<Int>>;
	private var nameArray:Array<String>;
	private var bitmapData:BMD;
	private var tileManager:TM;
	private var m:Map;
	private var tmHash:Int;
	public function new(map:Map, mapLayoutManager:MLM, bmd:BMD, mName:String, tileArray:Array<Tile>, registerMapLayout:Bool = true){
		m = map;
		tmHash = hashCode();
		bitmapData = bmd;
		layout = generateLayout(tileArray);
		if(registerMapLayout){
			mapLayoutManager.getMapLayoutManager().getList().set(this, m.getMapName()+"Layout");
		}else{
			Sys.println("Map: "+mName+"Layout was not added to the MapLayoutManager.");
		}
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function generateLayout(array:Array<Tile>):Array<Array<Int>>{
		var x:Int = 0;
		var y:Int = 0;
		var arX:Int = m.getAspectRatioX();
		var arY:Int = m.getAspectRatioY();
		var generatedLayout:Array<Array<Int>> = new Array<Array<Int>>();
		for(z in 0 ... array.length){
			generatedLayout[x][y] = array[z].getTileID();
			x++;
			y++;
			if(x > bitmapData.width/arX){
				x = 0;
			}
			if(y > bitmapData.height/arY){
				y = 0;
			}
		}
		return generatedLayout;
	}
	public function getLayout():Array<Array<Int>>{
		return layout;
	}
}