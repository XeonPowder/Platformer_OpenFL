package core.listeners;

import core.assests.Variables in V;
import openfl.display.Stage in GameStage;
import openfl.events.KeyboardEvent;
import openfl.events.Event;

class KeyboardListener{
	private function keyDown(e:KeyboardEvent):Void{
		V.keyStates[e.keyCode] = true;
	}
	private function keyUp(e:KeyboardEvent):Void{
		V.keyStates[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return V.keyStates[x];
	}
}