package core2.game.world;

import core2.game.GameWindow in GameWindow;
import core2.game.GameStage in GameStage;
import core2.game.world.maps.Map in Map;
import core2.game.Game in G;
import core2.game.world.maps.managers.MapManager in MM;
import core2.game.entity.type.player.Player in P;
import core2.game.assets.UUID;
import openfl.events.Event in E;
import openfl.events.KeyboardEvent in KE;
class World{
	private var window:GameWindow;
	private var windowStage:GameStage;
	private var map:Map;
	private var mapManager:MM;
	private var game:G;
	private var player:P;
	public function new(g:G, s:GameStage, aspectratiox:Int, aspectratioy:Int){
		game = g;
		windowStage = s;
		window = windowStage.getGameWindow();
		mapManager = new MM();
		newMap("NewWorld", aspectratiox, aspectratioy);
		windowStage.addChild(map);
		windowStage.addEventListener(E.ENTER_FRAME, getGame().getEngine().tick);
		windowStage.addEventListener(KE.KEY_DOWN, getGame().getEngine().tick);
		windowStage.addEventListener(KE.KEY_UP, getGame().getEngine().tick);
		//newMap(mapList.getRandomMap());
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function getWorld():World{
		return this;
	}
	public function getGameWindow():GameWindow{
		return window;
	}
	public function getMap():Map{
		return map;
	}
	public function getMapManager(){
		return mapManager;
	}
	private function newMap(mapName:String, ax:Int, ay:Int):Void{
		map = new Map(mapManager, ax, ay, mapName);
	}
	public function getGame():G{
		return game;
	}
	public function getPlayer():P{
		return player;
	}
	public function newPlayer(name:String){
		player = new P(game, 0, 0, 64, 32, name);
	}
}