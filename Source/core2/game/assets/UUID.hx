package core2.game.assets;
/*
UUID class can be called to create a new random Unique ID.
Can be used to create ID's to go along side Animations, 
Entities, and many other Objects.
*/
class UUID{
	// List of the characters that we will use to create the UUID
	static var UID_CHARS =  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}";
	static var UID_NUM = "0123456789";
	/*
	random(?size:Int)
	@param:size = the length of the ID we want to generate.
	*/
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