package core3;

class Const {
	public static var GRID:Int = 32;
	public static var VERSION:String = "1.0.0";
	public static function compareString(s0:String, s1:String):Int {
	    var cc0, cc1;
	    for (i in 0...cast Math.min(s0.length,s1.length)) {
	        cc0 = s0.charCodeAt(i);
	        cc1 = s1.charCodeAt(i);
	        if (cc0 != cc1) return cc0 - cc1;
	    }
	    return s0.length - s1.length;
	}
}
