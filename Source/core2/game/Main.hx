package;

import core.game.Game in Platformer_Game;

class Main{
	public static function main(){
		var game = new Platformer_Game();
		V.game = game;
		Sys.print("Enter Player's name: ");
		V.name = Sys.stdin();
		trace("Name: " + V.name);
	}
}