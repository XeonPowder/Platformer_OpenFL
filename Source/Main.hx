package;

class Main{
	private var engine : core4.engine.Engine = null;
	private var debug : Bool  = true;
	private var difficulty : String = "NORMAL";
	public function new(){
		// does not save all lines.
		//core4.ConsoleTrace.setRedirection();
		core4.Constants._GAME = this;
		newGame();
	}
	public static function _main(){
		return core4.Constants._GAME;
	}
	public function _engine():core4.engine.Engine{
		return engine;
	}
	public function _debug():Bool{
		return debug;
	}
	public function getDifficulty():String{
		return difficulty;
	}
	public function newGame(){
		engine = new core4.engine.Engine(openfl.Lib.current);
	}
}