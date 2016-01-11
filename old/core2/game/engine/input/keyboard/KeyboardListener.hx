package core2.game.engine.input.keyboard;

import openfl.events.KeyboardEvent;
import openfl.events.Event;

class KeyboardListener {
	private var keys:Array<Bool>;
	public function new(){
		keys = new Array<Bool>();
	}
	public function keyDown(e:KeyboardEvent):Void{
		keys[e.keyCode] = true;
	}
	public function keyUp(e:KeyboardEvent):Void{
		keys[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return keys[x];
	}
	public function getKeyboardListener():KeyboardListener{
		return this;
	}
}