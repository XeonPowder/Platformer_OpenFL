package core2.game.world;

import core2.game.GameWindow in GameWindow;
import core2.game.GameStage in GameStage;
import core2.game.world.maps.Map in Map;
import core2.game.engine.Engine in Engine;
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
	private var width:Int;
	private var height:Int;
	private var engine:Engine;

	public function new(g:G, w:Int, h:Int, s:GameStage, aspectratiox:Int, aspectratioy:Int){
		game = g;
		engine = new Engine(this);
		width = w;
		height = h;
		windowStage = s;
		window = windowStage.getGameWindow();
		mapManager = new MM();
		map = new Map(this, width, height, mapManager, aspectratiox, aspectratioy, "NewWorld");
		windowStage.getStage().addChild(map);
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
	public function getGame():G{
		return game;
	}
	public function getPlayer():P{
		return player;
	}
	public function newPlayer(name:String):Void{
		player = new P(game, 0, 0, 64, 32, name);
	}
	public function getEngine():Engine{
		return engine;
	}
	public function getStage():GameStage{
		return windowStage;
	}
}