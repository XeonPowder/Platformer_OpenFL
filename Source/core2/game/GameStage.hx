package core2.game;

import core2.game.GameWindow in GW;
import core2.game.Game in G;


class GameStage{
	private var gameWindow:GW;
	private var gameStage:GameStage;
	private var stage:openfl.display.Stage;
	public function new(s:openfl.display.Stage, gw:GW){
		stage = s;
		gameStage = this;
	}
	public function getGameStage():GameStage{
		return this;
	}
	public function getGameWindow():GW{
		return gameWindow;
	}
	public function getStage():openfl.display.Stage{
		return stage;
	}

}