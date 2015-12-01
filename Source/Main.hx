package;

import core3.Manager in Game;

class Main{
	public static function main(){
		//variables
		var pName:String = "NewPlayer";
		var wString:String = "";
		var hString:String = "";
		var arX:Int = 16;
		var arY:Int = 9;
		var w:Int = 0;
		var h:Int = 0;
		// print String
		Sys.print("Enter Player's name: ");
		// read input to String
		pName = Sys.stdin().readLine();
		//output the read input (debug)
		trace("Name: " + pName);
		

		// print String
		Sys.print("Enter Tile Pixel Width: ");
		// read input to String
		wString = Sys.stdin().readLine();
		//output the read input (debug)
		trace("Name: " + wString);
		//parse input from string to integer
		arX = Std.parseInt(wString);
		// print String		
		Sys.print("Enter Tile Pixel Height: ");
		// read input to String		
		hString = Sys.stdin().readLine();
		//output the read input (debug)		
		trace("Name: " + hString);
		//parse input from string to integer
		arY = Std.parseInt(hString);
		

		// print String
		Sys.print("Enter Game Pixel Width: ");
		// read input to String
		wString = Sys.stdin().readLine();
		//output the read input (debug)
		trace("Name: " + wString);
		//parse input from string to integer
		w = Std.parseInt(wString);
		// print String
		Sys.print("Enter Game Pixel Height: ");
		// read input to String
		hString = Sys.stdin().readLine();
		//output the read input (debug)
		trace("Name: " + hString);
		//parse input from string to integer
		h = Std.parseInt(hString);
		
		new Game(arX, arY, w, h, pName);
	}
}