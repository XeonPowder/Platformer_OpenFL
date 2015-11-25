package core2.game;

import core2.game.GameWindow in GW;
import core2.game.Game in G;
import openfl.display.Stage in Stage;

class GameStage extends Stage{
	private var gameWindow:GW;
	private var gameStage:GameStage;
	private var game:G;
	public function new(g:G, gw:GW){
		super(gw);
		game = g;
		gameWindow = gw;
		gameStage = this;
	}
	public function getGameStage():GameStage{
		return this;
	}
	public function getGameWindow():GW{
		return gameWindow;
	}

}