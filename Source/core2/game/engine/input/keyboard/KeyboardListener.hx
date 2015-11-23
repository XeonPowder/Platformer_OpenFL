package core2.game.engine.input.keyboard;

import core2.game.engine.input.keyboard.KeyStates in KS;
import openfl.events.KeyboardEvent;
import openfl.events.Event;

class KeyboardListener {
	private var keyStates:KS;
	public function new(){
		keyStates.keys = new Array<Bool>();
	}
	public function keyDown(e:KeyboardEvent):Void{
		keyStates.keys[e.keyCode] = true;
	}
	public function keyUp(e:KeyboardEvent):Void{
		keyStates.keys[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return keyStates.keys[x];
	}
	public function getKeyboardListener():KeyboardListener{
		return this;
	}
}