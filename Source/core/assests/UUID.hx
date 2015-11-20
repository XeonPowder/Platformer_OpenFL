package core.assests;

class UUID{
	
	static var UID_CHARS =  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}";
	
	public static function random(?size : Int) : String{
		if(size == null) size = 32;
		var nchars = UID_CHARS.length;
		var uid = new StringBuf();
		for (i in 0 ... size){
			uid.addChar(UID_CHARS.charCodeAt(Std.random(nchars)));
		}
		return uid.toString();
	}
}  