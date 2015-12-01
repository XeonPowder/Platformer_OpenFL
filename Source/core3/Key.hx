package core3;

class Key {
	static var fl_initDone = false;
	static var kcodes = new Array<Null<Int>>();

	static var ktime = 0;

	public static function init() {
		if (fl_initDone) {
			nme.Lib.current.removeEventListener(nme.events.Event.ENTER_FRAME,onEnterFrame);
			nme.Lib.current.addEventListener(nme.events.Event.ENTER_FRAME,onEnterFrame);
			return;
		}
		fl_initDone = true;
		
		
		nme.Lib.current.addEventListener(nme.events.KeyboardEvent.KEY_DOWN,onKey.bind(true));
		nme.Lib.current.addEventListener(nme.events.KeyboardEvent.KEY_UP,onKey.bind(false));
		nme.Lib.current.addEventListener(nme.events.Event.DEACTIVATE,function(_) kcodes = new Array());
		nme.Lib.current.addEventListener(nme.events.Event.ENTER_FRAME,onEnterFrame);
	}
	
	static function onEnterFrame(_) {
		ktime++;
	}

	static function onKey( down, e : nme.events.KeyboardEvent ) {
		event(e.keyCode, down);
	}

	public static function event( code, down ) {
		kcodes[code] = down ? ktime : null;
		// release Ctrl when Alt pressed (AltGr generates Ctrl+Alt)
		if( code == 18 && !down )
			kcodes[17] = null;
	}


	public static function isDown(c) {
		return kcodes[c] != null;
	}

	public static function isToggled(c) {
		return kcodes[c] == ktime;
	}

}
