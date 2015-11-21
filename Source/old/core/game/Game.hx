package core.game;

import core.engine.Engine in GameEngine;
import core.entity.player.Player in Player;
import core.assests.Variables in V;
import core.manager.Manager in M;
import core.manager.animation.AnimationManager in AM;
import openfl.display.Window in OpenFL_Window;

class Game{
	private var variables:V;
	public function new(){
		variables = new V();
		variables.window = new OpenFL_Window();
		variables.window.resize(680, 480);
		variables.stage = variables.window.getStage();
		variables.engine = new Engine(60, true, variables.stage);
		variables._STATE = idle;
		variables.gameListener = new GameListener();
		variables.player = new Player(50, 50, 32, 32);
		variables.entityList[entityList.length] = variables.player;
		variables.manager = new M();
	}
	public function start():Void{
		variables._STATE = running;
		variables.engine.start();
	}
	public function stop(reason:String):Void{
		variables._STATE = stopped;
		variables.engine.stop();
		variables.stopReason = reason;
	}
	public function pause():Void{
		variables._STATE = pause;
		variables.engine.pause;
	}
	public function getVariables():V{
		return variables;
	}
}