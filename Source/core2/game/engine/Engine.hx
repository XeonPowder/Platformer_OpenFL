/*package core.engine;

import openfl.utils.Timer in OpenFL_Timer;
import openfl.events.TimerEvent;
import openfl.events.KeyboardEvent;
import openfl.events.Event;
import openfl.display.Window in OpenFL_Window;

import core.game.Game in G;
import core.listeners.KeyboardListener in KL;
import core.entity.Entity in E;*/
/*
/*
Engine class handles all the computations that the game needs to make.


class Engine{
	//un-used
	// var timer:OpenFL_Timer;
	//private var sCount:Int;

	/*
		new(fps:Int, fullscreen:Bool, openFL_window:OpenFL_Window)
		@param fps:	integer with specified frames per second
		@param fullscreen: whether to run the game in fullscreen mode, true or false
		@param stage: the window that we will be filling with entities.

	
	public function new(fps:Int, fullscreen:Bool, openFL_window:OpenFL_Window){
		//create new keyboard listener and save it in Variables.hx
		G.getVariables().setKeyboardListener(new KL());
		//set the stage var in Variables.hx to the window we created and passed as paramater to the engine.
		G.getVariables().stage = openFL_window;
		//set the stage's framerate to the fps parameter, cast the integer to a float value.
		G.getVariables().stage.frameRate = fps(Float);
		//set the stage's width, basically the window's width
		G.getVariables().stage.stageWidth = 1920;
		//set the stage's height, basically the window's height;
		G.getVariables().stage.stageHeight = 1080;
		//set the fullscreen var to true or false based on what was passed in the engine paramater.
		G.getVariables().fullscreen = fullscreen;
		//add an event listener for the event of a new frame entering the game window, and call the function update().
		G.getVariables().stage.addEventListener(Event.ENTER_FRAME, update);
		//add an event listener for a key on the keyboard being pressed down.
		G.getVariables().stage.addEventListener(KeyboardEvent.KEY_DOWN, G.getVariables().getKeyboardListener().keyDown);
		//add an event listener for a key on the keyboard being released.
		G.getVariables().stage.addEventListener(KeyboardEvent.KEY_UP, G.getVariables().getKeyboardListener().keyUp);
	}
	//function called to start the engine. First Run settings and calls will be called here.
	public function start():Void{
		//un-used
		//startTimer(this.timer);
	}
	//function called to stop the engine.
	public function stop():Void{
		//un-used
		//stopTimer(this.timer);
	}
	//function called to pause the engine, while the process is in the background pause the engine.
	public function pause():Void{
		if(G.getVariables()._STATE == running){
			//un-used
			//sCount = timer.currentCount;
			//timer.stop();
		}else if(G.getVariables()._STATE == paused){
			//un-used
			//timer.reset();
			//timer.currentCount = sCount;
			//sCount = 0;
			//startTimer();
		}
	}
	
	private function update(e:Event):Void{
		if(G.getVariables().firstRun){
			G.getVariables().firstRun = !G.getVariables().firstRun;
			start();
			var x: Int = 0;
			while (x < entityList.length){
				G.getVariables().entitylist[x].getListener().update();
				x++;
			}
		}
	}
	//un-used
	/*
	private function newTimer(ms:Int):Void{
		this.timer = new OpenFl_Timer(ms);
	}
	
	private function startTimer(t:OpenFL_Timer):Void{
		if(t == null || t.currentCount = 0){
			newTimer(G.getVariables().timerMS);
		}else if(t.currentCount != 0){
			t.stop;
			t.reset;
		}
		t.start;
	}
	private function stopTimer(t:OpenFL_Timer):Void{
		t.stop;
		t.reset;
	}
	/
}*/
package core2.game.engine;

import core2.game.world.World;
import core2.game.engine.input.keyboard.KeyboardListener in KL;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import core2.game.assets.UUID;

class Engine{

	private var world:World;
	private var keyboardListener:KL;

	public function new(w:World){
		world = w;
		keyboardListener = new KL();
	}
	public function tick(e:Event):Void{
		if(e.type == "ENTER_FRAME"){
			world.getMap().update();
			world.getPlayer().getPlayerManager().update();
		}else if(e.type == "KEY_DOWN"){
			keyboardListener.keyDown(cast(e, KeyboardEvent));
		}else if(e.type == "KEY_UP"){
			keyboardListener.keyUp(cast(e, KeyboardEvent));
		}
	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function getKeyboardListener():KL{
		return keyboardListener;
	}
	public function getWorld():World{
		return world;
	}
}