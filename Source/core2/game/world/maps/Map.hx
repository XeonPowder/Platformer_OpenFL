package core2.game.world.maps;

import openfl.display.Sprite in Sprite;
import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import core2.game.world.maps.tilesheet.managers.MapTilesheetManager in MTSM;
import core2.game.world.maps.tile.managers.TileBitmapDataManager in TBMDM;
import core2.game.display.BMD in BMD;
import openfl.Assets in Assets;
import core2.game.world.maps.managers.MapManager in MM;
import core2.game.assets.UUID;

class Map extends Sprite{

	private var map:Array<Array<Int>>;
	private var mapName:String;
	private var mapTilesheetCanvas:Sprite;
	private var mapTilesheet:MTS;
	private var mapTilesheetManager:MTSM;
	private var tileBitmapDataManager:TBMDM;
	private var tileBMD:BMD;
	private var aspectRatioX:Int;
	private var aspectRatioY:Int;
	private var mapManager:MM;
	private var mmHash:Int;
	private var mtsmHash:Int;
	private var tbmdmHash:Int;

	public function new(mm:MM, ax:Int, ay:Int, mn:String, registerMap:Bool = true){
		super();
		mapName = mn;
		mmHash = hashCode();
		mtsmHash = hashCode();
		tbmdmHash = hashCode();
		aspectRatioX = ax;
		aspectRatioY = ay;
		mapManager = mm;
		if(registerMap){
			mm.getMapManager().set(this, mmHash);
		}
		var ar:String = ax+"x"+ay;
		tileBMD = new BMD(Assets.getBitmapData(new String(ar+".png")));
		tileBitmapDataManager = new TBMDM();
		tileBitmapDataManager.getList().set(tileBMD, ar);
		mapTilesheetCanvas = new Sprite();
		addChild(mapTilesheetCanvas);
		mapTilesheetManager = new MTSM();
		mapTilesheet = new MTS(this, tileBMD, mapName);
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function getMap():Map{
		return this;
	}
	public function getMapTilesheetCanvas():Sprite{
		return mapTilesheetCanvas;
	}
	public function getMapTilesheet():MTS{
		return mapTilesheet;
	}
	public function getMapTilesheetManager():MTSM{
		return mapTilesheetManager;
	}
	public function getTileBitmapDataManager():TBMDM{
		return tileBitmapDataManager;
	}
	public function update():Void{
		mapTilesheet.drawTiles(mapTilesheetCanvas.graphics, mapTilesheet.getTileData());
	}
	public function getAspectRatioY():Int{
		return aspectRatioY;
	}
	public function getAspectRatioX():Int{
		return aspectRatioX;
	}
	public function getMapName():String{
		return mapName;
	}
}