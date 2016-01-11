package core3;

class Const {
	public static var _MOVEMENTSPEED:String = "MOVEMENTSPEED";
	public static var _ATTACKDAMAGE:String = "ATTACKDAMAGE";
	public static var _ATTACKSPEED:String  = "ATTACKSPEED";
	public static var _DEFENSE:String = "DEFENSE";
	public static var _ENERGY:String = "ENERGY";	
	public static var _EXPERIENCE:String = "EXPERIENCE";
	public static var _HEALTH:String = "HEALTH";
	public static var _SHOOTENERGY:String = "SHOOTENERGY";
	public static var _ERROR:String = "----- ERROR -----";
	public static var _RIP:String = "----- R.I.P. -----";
	public static var _WARNING:String = "**** WARNING ****";
	public static var _INSUFFICIENTENERGY:String = "Energy Level Low";
	public static var _HEALTHCRITICAL:String = "Health Level Critical";
	public static var _HEALTHDEPLETED:String = "Health Completed Depleted";
	public static var _OUTOFAMMO:String = "Out of Ammunition";
	public static var _PICKUPDISTANCE:Int = 100;
	public static var GRIDX:Int = 160;
	public static var GRIDY:Int = 135;
	public static var VERSION:String = "0.3.3";
	public static var UID_CHARS =  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}";
	public static var UID_NUM = "0123456789";

	public static function compareString(s0:String, s1:String):Int {
	    var cc0, cc1;
	    for (i in 0...cast Math.min(s0.length,s1.length)) {
	        cc0 = s0.charCodeAt(i);
	        cc1 = s1.charCodeAt(i);
	        if (cc0 != cc1) return cc0 - cc1;
	    }
	    return s0.length - s1.length;
	}
	public static function distanceBetween(p1:openfl.geom.Point, p2:openfl.geom.Point):Int{
		return Std.int(Math.sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)));
	}
	public static function generateID(?size:Int = 8):Int{
		return randomNum(size);
	}
	public static function randomChar(?size:Int = 32):String{
		// if the size passed as a paramater is not defined the default size will be 32 characters.
		if(size == null) size = 32;
		// define a variable to hold the amount of UID_CHARS.
		var nchars = UID_CHARS.length;
		// StringBuf is a String Bufferer
		var uid = new StringBuf();
		// for loop to loop from 0 to the size of the ID we are generating, essentially choosing a random CHAR from UID_CHAR, and doing it repeatedly
		for (i in 0 ... size){
			uid.addChar(UID_CHARS.charCodeAt(Std.random(nchars)));
		}
		// return the StringBufferer as a String.
		return uid.toString();
	}
	public static function randomNum(?size:Int = 32):Int{
		if(size == null) size = 32;
		var nchars = UID_NUM.length;
		var uid = new StringBuf();
		for (i in 0 ... size){
			uid.addChar(UID_NUM.charCodeAt(Std.random(nchars)));
		}
		return Std.parseInt(uid.toString());
	}
}
