package core2.game.world.maps;

import openfl.display.Sprite in Sprite;
import core2.game.world.maps.tilesheet.MapTilesheet in MTS;
import core2.game.world.maps.tilesheet.managers.MapTilesheetManager in MTSM;
import core2.game.world.maps.tile.managers.TileBitmapDataManager in TBMDM;
import core2.game.display.BMD in BMD;
import openfl.display.BitmapData in OpenFLBMD;
import openfl.Assets in Assets;
import core2.game.world.maps.managers.MapManager in MM;
import core2.game.assets.UUID;
import core2.game.world.World in World;

class Map extends Sprite{

	private var mapName:String;
	private var mapTilesheetCanvas:Sprite;
	private var mapTilesheet:MTS;
	private var mapTilesheetManager:MTSM;
	private var tileBitmapDataManager:TBMDM;
	private var tileBMD:BMD;
	private var openFLBMDtileBMD:OpenFLBMD;
	private var aspectRatioX:Int;
	private var aspectRatioY:Int;
	private var mapManager:MM;
	//private var mmHash:Int;
	//private var mtsmHash:Int;
	//private var tbmdmHash:Int;
	private var world:World;
	private var wwidth:Int;
	private var wheight:Int;

	public function new(w:World, ww:Int, wh:Int, mm:MM, ax:Int, ay:Int, mn:String, registerMap:Bool = true){
		super();
		world = w;
		wwidth = ww;
		wheight = wh;
		mapName = mn;
		//mmHash = hashCode();
		//mtsmHash = hashCode();
		//tbmdmHash = hashCode();
		aspectRatioX = ax;
		aspectRatioY = ay;
		mapManager = mm;
		if(registerMap){
			//mm.getMapManager().set(mn, this);
		}
		var ar:String = ax+"x"+ay;
		tileBMD = new BMD(Assets.getBitmapData(new String("assets/maps/"+mn+"/"+ar+".png")), getWorld().getGame().getWidth(), getWorld().getGame().getHeight());
		openFLBMDtileBMD =  tileBMD.getData();
		//tileBitmapDataManager = new TBMDM();
		//tileBitmapDataManager.getList().set(ar, tileBMD);
		mapTilesheetCanvas = new Sprite();
		addChild(mapTilesheetCanvas);
		//mapTilesheetManager = new MTSM();
		mapTilesheet = new MTS(this, wwidth, wheight, tileBMD, mapName);
		mapTilesheet.drawTiles(mapTilesheetCanvas.graphics, mapTilesheet.getTileData());
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
	public function getWorld():World{
		return world;
	}
}