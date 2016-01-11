package core2.game;

import core2.game.GameStage in GameStage;
import core2.game.GameWindow in GameWindow;
import core2.game.world.World in World;
import core2.game.managers.Manager in Manager;
import core2.game.engine.Engine in Engine;
import core2.game.assets.UUID;
import pgr.dconsole.DC in Console;

class Game {
	private var world:World;
	private var tileX:Int;
	private var tileY:Int;
	private var manager:Manager;
	private var engine:Engine;
	private var game:Game;
	private var gameWindowWidth:Int;
	private var gameWindowHeight:Int;
	public function new(stage:openfl.display.Stage, aRX:Int, aRY:Int, width:Int, height:Int, playerName:String){
		game = this;
		gameWindowWidth = Std.int(width);
		gameWindowHeight = Std.int(height);
		Console.init();
		Console.log("Buff Console");
		Console.registerObject(game, "game_console");
		Console.registerClass(Game, "game");
		//manager = new Manager();
		tileX = aRX;
		tileY = aRY;
		world = new World(game, gameWindowWidth, gameWindowHeight, new GameStage(stage, new GameWindow(game)), aRX, aRY);
		world.newPlayer(playerName);
		engine = world.getEngine();
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function getAspectRatioX():Int{
		return aspectRatioX;
	}
	public function getAspectRatioY():Int{
		return aspectRatioY;
	}
	public function getGame():Game{
		return game;
	}
	public function getWorld():World{
		return world;
	}
	public function getEngine():Engine{
		return engine;
	}
	public function getWidth():Int{
		return gameWindowWidth;
	}
	public function getHeight():Int{
		return gameWindowHeight;
	}
}