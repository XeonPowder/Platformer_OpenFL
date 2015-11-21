package core.assests;

import core.game.Game in Game;
import core.engine.Engine in Engine;
import openfl.display.Window in OpenFL_Window;
import openfl.display.Stage in Stage;
import core.listeners.KeyboardListener in KL;
import core.entity.Entity in E;
import core.entity.player.Player in P;
import core.manager.Manager in M;
import core.assests.GameState in GS;
	
class Variables{
	public function new(){
	}
	//Game variable
	private var game:Game;
	//Engine variable
	private var engine:Engine;
	//OpenFL_Window variable
	private var window:OpenFL_Window;
	//OpenFL_Window.stage variable
	private var stage:Stage;
	//Keyboard Listener variable
	private var keyboardListener:KL;
	//Game Manager variable
	private var manager:M;
	//Player variable
	private var player:P;
	//Game State variable
	private var gameState:GS;
	
	//Array of key States
	private var keyStates:Array<Bool>;
	//Key Codes
	private var keyUP:Int = 38; 
	private var keyLEFT:Int = 37;
	private var keyRIGHT:Int = 39;
	private var keyDOWN:Int = 40;
	private var keyUSE:Int = 69;
	private var keySPACE:Int = 32;
	
	//List of entities loaded
	private var entityList:Array<E>;

	//check for game's first run
	private var firstRun:Bool;
	//Game Stop Reason
	private var stopReason:String;
	
	//Game Settings:
	//fps
	private var gameFPS:Int;
	//fullscreen boolean
	private var fullscreen:Bool;



	public function getGameState():GS{
		return gameState;
	}
	public function getManager():M{
		return manager;
	}
	public function getPlayer():P{
		return player;
	}
	public function getEntityList():Array<E>{
		return entityList;
	}
	public function getFirstRun():Bool{
		return firstRun;
	}
	public function getGame():Game{
		return game;
	}
	public function getEngine():Engine{
		return engine;
	}
	public function getWindow():OpenFL_Window{
		return window;
	}
	public function getStage():Stage{
		return stage;
	}
	public function getKeyboardListener():KL{
		return keyboardListener;
	}
	public function setKeyboardListener(kl:KL):Void{
		keyboardListener = kl;
	}
	public function getKeyStates():Array<Bool>{
		return keyStates;
	}
	public function setKeyStates(ks:Array<Bool>):Void{
		keyStates = ks; 
	}
	public function getFullscreen():Bool{
		return fullscreen;
	}
	public function getGameFPS():Int{
		return gameFPS;
	}
	public function setStopReason(s:String):Void{
		stopReason = s;
	}
	public function getStopReason():String{
		return stopReason;
	}
}