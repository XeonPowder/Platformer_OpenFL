package core3;

class Key {
	static var kcodes:Array<Bool>;

	static var ktime = 0;

	public static function init() {
		kcodes = new Array();
	}
	
	public static function onEnterFrame():Void {
		ktime++;
	}
	public static function keyDown(e:openfl.events.KeyboardEvent){
		trace("keydown"+e.keyCode);
		kcodes[e.keyCode] = true;
	}
	public static function keyUp(e:openfl.events.KeyboardEvent){
		trace("keyUp"+e.keyCode);
		kcodes[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return kcodes[x];
	}
}
