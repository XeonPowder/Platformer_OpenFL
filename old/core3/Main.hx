package;

import core3.Manager in Game;

class Main{
	public static function main(){
		//variables
		var pName:String = "NewPlayer";
		var wString:String = "1920";
		var hString:String = "1080";
		var arX:Int = 160;
		var arY:Int = 135;
		var w:Int = 1920;
		var h:Int = 1080;
		var debug = true;
		//print StringSys.print("player name?: ");
		//read input to StringpName = Sys.stdin().readLine();
		//output the read input (debug)trace("player name changed!: " + pName);
		

		//print String
		//Sys.print("Enter Tile Pixel Width: ");
		//read input to String
		//wString = Sys.stdin().readLine();
		//output the read input (debug)
		//trace("Name: " + wString);
		//parse input from string to integer
		//arX = Std.parseInt(wString);
		//print String		
		//Sys.print("Enter Tile Pixel Height: ");
		//read input to String		
		//hString = Sys.stdin().readLine();
		//output the read input (debug)		
		//trace("Name: " + hString);
		//parse input from string to integer
		//arY = Std.parseInt(hString);
		

		//print String
		//Sys.print("Enter Game Pixel Width: ");
		//read input to String
		//wString = Sys.stdin().readLine();
		//output the read input (debug)
		//trace("Name: " + wString);
		//parse input from string to integer
		//w = Std.parseInt(wString);
		//print String
		//Sys.print("Enter Game Pixel Height: ");
		//read input to String
		//hString = Sys.stdin().readLine();
		//output the read input (debug)
		//trace("Name: " + hString);
		//parse input from string to integer
		//h = Std.parseInt(hString);
		//create a new game instance Game = core3.Manager we assigned this import to Game
		new Game(arX, arY, w, h, pName, debug);
	}

}