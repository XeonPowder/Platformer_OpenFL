package;

import core2.game.Game in Game;

class Main{
	private var game:Game;
	public static function main(){
		var pName:String = "NewPlayer";
		Sys.print("Enter Player's name: ");
		pName = Sys.stdin().readLine() ;
		var arX:Int = 16;
		var arY:Int = 9;
		var game = new Game(arX, arY, pName);
		trace("Name: " + pName);
	}
	public function getGame():Game{
		return game;
	}
}