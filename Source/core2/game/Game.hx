package core2.game;

import core2.game.GameStage in GameStage;
import core2.game.GameWindow in GameWindow;
import core2.game.world.World in World;
import core2.game.managers.Manager in Manager;
import core2.game.assets.AspectRatio in AspectRatio;
import core2.game.engine.Engine in Engine;
import core2.game.assets.UUID;

class Game {
	private var world:World;
	private var aspectRatio:AspectRatio;
	private var manager:Manager;
	private var engine:Engine;
	private var game:Game;

	public function new(aRX:Int, aRY:Int, playerName:String){
		game = this;
		manager = new Manager();
		aspectRatio.x = aRX;
		aspectRatio.y = aRY;
		world = new World(game, new GameStage(game, new GameWindow(game)), aRX, aRY);
		world.newPlayer(playerName);
		engine = new Engine(world);
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function getAspectRatioX():Int{
		return aspectRatio.x;
	}
	public function getAspectRatioY():Int{
		return aspectRatio.y;
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
}