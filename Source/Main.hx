package;

import core3.Manager in Game;

class Main{
	public static function main(){
		var pName:String = "NewPlayer";
		var wString:String = "";
		var hString:String = "";
		var arX:Int = 16;
		var arY:Int = 9;
		var w:Int = 0;
		var h:Int = 0;
		Sys.print("Enter Player's name: ");
		pName = Sys.stdin().readLine();
		trace("Name: " + pName);
		


		Sys.print("Enter Tile Pixel Width: ");
		wString = Sys.stdin().readLine();
		trace("Name: " + wString);
		arX = Std.parseInt(wString);
		Sys.print("Enter Tile Pixel Height: ");
		hString = Sys.stdin().readLine();
		trace("Name: " + hString);
		arY = Std.parseInt(hString);



		Sys.print("Enter Game Pixel Width: ");
		wString = Sys.stdin().readLine();
		trace("Name: " + wString);
		w = Std.parseInt(wString);
		Sys.print("Enter Game Pixel Height: ");
		hString = Sys.stdin().readLine();
		trace("Name: " + hString);
		h = Std.parseInt(hString);
		new Game(arX, arY, w, h, pName);
	}
}