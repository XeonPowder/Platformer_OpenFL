package;

import core2.game.Game in Game;
import openfl.Lib in Lib;
class Main{
	private static var game:Game;
	public static function main(){
		var pName:String = "NewPlayer";
		Sys.print("Enter Player's name: ");
		pName = Sys.stdin().readLine();
		trace("Name: " + pName);
		var arX:Int = 16;
		var arY:Int = 9;

		Sys.print("Enter Tile Pixel Width: ");
		var wString:String = Sys.stdin().readLine();
		trace("Name: " + wString);
		var arX = Std.parseInt(wString);
		Sys.print("Enter Tile Pixel Height: ");
		var hString:String = Sys.stdin().readLine();
		trace("Name: " + hString);
		var arY:Int = Std.parseInt(hString);



		Sys.print("Enter Game Pixel Width: ");
		wString:String = Sys.stdin().readLine();
		trace("Name: " + wString);
		var w:Int = Std.parseInt(wString);
		Sys.print("Enter Game Pixel Height: ");
		hString:String = Sys.stdin().readLine();
		trace("Name: " + hString);
		var h:Int = Std.parseInt(hString);
		game = new Game(Lib.current.stage, arX, arY, w, h, pName);
	}
	public function getGame():Game{
		return game;
	}
}