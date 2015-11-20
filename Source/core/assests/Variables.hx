import core.game.Game in Game;
import core.engine.Engine in Engine;
import core.display.Window in Window;
import openfl.display.Stage in Stage;
import core.listeners.GameListener in GL;
import core.listeners.KeyboardListener in KL;
import core.entity.Player in P;
import core.entity.Entity in E;
import core.manager.Manager in M;

 enum STATE{
		idle;
		pause;
		running;
		stopped;
	}
 enum DIRECTION{
		NONE;
		LEFT;
		RIGHT;
	}
 enum KEY{
		UP = 38;
		LEF T = 37;
		RIGHT = 39;
		DOWN = 40;
		USE = 69;
		SPACE = 32;
	}
 enum ENDGAMEREASON{
		DEATH;
		QUIT;
		CRASH;
	}
	
class Variables{

	
	private var manager:M;
	private var player:P;
	private var entityList:Array<Entity>;
	private var firstRun:Bool;
	private var _STATE:State;
	private var _DIRECTION:DIRECTION;
	private var game:Game;
	private var engine:Engine;
	private var window:Window;
	private var stage:Stage;
	private var gameListener:GL;
	private var keyboardListener:KL;
	private var keyStates:Array;

	private var gameFPS:Int;
	private var fullscreen:Bool;
	private var timerMS:Int;
	private var framePerMS:Int = timerMS/gameFPS;

	public function getManager():M{
		return manager;
	}
	public function getPlayer():P{
		return player;
	}
	public function getEntityList():Array<Entity>{
		return entityList;
	}
	public function getFirstRun():Bool{
		return firstRun;
	}
	public function getState():State{
		return _STATE;
	}
	public function getDirection():DIRECTION{
		return _DIRECTION;
	}
	public function getGame():Game{
		return game;
	}
	public function getEngine():Engine{
		return engine;
	}
	public function getWindow():Window{
		return window;
	}
	public function getStage():Stage{
		return stage;
	}
	public function getGameListener():GameListener{
		return gameListener;
	}
	public function getKeyboardListener():KeyboardListener{
		return keyboardListener;
	}
	public function getKeyStates():ArrayList<Bool>{
		return keyStates;
	}
	public function getGameFPS():Int;{
		return gameFPS;
	}
	public function getFullscreen():Bool;{
		return fullscren;
	}
	public function getTimerMS():Int;{
		return timerMS;
	}
	public function getFramePerMS():Int{
		return timerMS/gameFPS;
	}
}