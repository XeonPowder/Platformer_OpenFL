package core.listeners;

import core.assests.Variables in V;
import openfl.events.KeyboardEvent;
import openfl.events.Event;

class KeyboardListener {
	private var keyboardListenerKeyStates:Array<Bool>;
	public function new(){
		keyboardListenerKeyStates = new Array<Bool>();
		V.getGame().getVariables().setKeyStates(keyboardListenerKeyStates);
	}
	private function keyDown(e:KeyboardEvent):Void{
		var ks:Array<Bool> = V.getGame().getVariables().getKeyStates();
		ks[e.keyCode] = true;
	}
	private function keyUp(e:KeyboardEvent):Void{
		var ks:Array<Bool> = V.getGame().getVariables().getKeyStates();
		ks[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return V.getGame().getVariables().keyStates[x];
	}
}