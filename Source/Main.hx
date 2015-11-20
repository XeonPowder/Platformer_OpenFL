package;

import core.game.Game in Platformer_Game;
import core.assests.Variables in V;
import openfl.events.Event;
import openfl.Lib;

class Main{

	public static function main(){
		V.game = new Platformer_Game();
		Sys.print("Enter Player's name: ");
		V.name = Sys.stdin();
		trace("Name: " + V.name);
	}
}