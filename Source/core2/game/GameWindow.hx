package core2.game;

import core2.game.Game in G;

class GameWindow extends openfl.display.Window{
	private var game:G;
	private var gameWindow:GameWindow;
	public function new(g:Game){
		super();
		game = g;
		gameWindow = this;
	}
	public function getGameWindow():GameWindow{
		return gameWindow;
	}

}