package core.enigne;

import openfl.utils.Timer in OpenFL_Timer;
import openfl.events.TimerEvent;
import openfl.events.KeyboardEvent;
import openfl.events.Event;
import core.game.Game in TheGame;
import core.assests.Variables in V;
import core.KeyboardListener in KL;
import core.entity.Entity in E;

class Engine{
	private var timer:OpenFL_Timer;
	private var sCount:Int;

	public function new(fps:Int, fullscreen:Bool, stage:GameWindow){
		V.stage.frameRate = fps(Float);
		V.stage.stageWidth = 1920;
		V.stage.stageHeight = 1080;
		V.fullscreen = fullscreen;
		V.stage.addEventListener(Event.ENTER_FRAME, update);
		V.stage.addEventListener(KeyboardEvent.KEY_DOWN, KL.keyDown);
		V.stage.addEventListener(KeyboardEvent.KEY_UP, KL.keyUp);
	}
	public function start():Void{
		startTimer(this.timer);
	}
	public function stop():Void{
		stopTimer(this.timer);
	}
	public function pause():Void{
		if(TheGame._STATE == running){
			sCount = timer.currentCount;
			timer.stop();
		}else if(TheGame_STATE == paused){
			timer.reset();
			timer.currentCount = sCount;
			sCount = 0;
			startTimer();
		}
	}
	
	private function update(e:Event):Void{
		if(V.firstRun){
			V.firstRun = !V.firstRun;
			start();
			for(int x= 0; x < entityList.length; x++):Void{//correct
				V.entitylist[x].getListener().update();
			}
		}
	}
	private function newTimer(ms:Int):Void{
		this.timer = new OpenFl_Timer(ms);
	}
	private function startTimer(t:OpenFL_Timer):Void{
		if(t == null || t.currentCount = 0){
			newTimer(V.timerMS);
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
}