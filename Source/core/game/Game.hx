package core.game;

import core.engine.Engine in GameEngine;
import core.entity.Player in Player;
import core.assests.Variables in V;
import core.manager.Manager in M;
import core.manager.animation.AnimationManager in AM;
import openfl.display.Window in OpenFL_Window;

class Game{
	public function new(){
		V.window = new OpenFL_Window();
		V.window.resize(680, 480);
		V.stage = V.window.getStage();
		V.engine = new Engine(60, true, V.stage);
		V._STATE = idle;
		V.gameListener = new GameListener();
		V.player = new Player(50, 50, 32, 32);
		V.entityList[entityList.length] = V.player;
		V.manager = new M();
	}
	public function start():Void{
		V._STATE = running;
		V.engine.start();
	}
	public function stop():Void{
		V._STATE = stopped;
		V.engine.stop();
	}
	public function pause():Void{
		V._STATE = pause;
		V.engine.pause;
	}
}