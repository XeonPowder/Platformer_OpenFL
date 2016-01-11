package;

class Main{
	private static var main : Main;
	private static var engine : core4.engine.Engine;
	private static var debug : Bool;
	public static function new(){
		main = this;
		debug = true;
		engine = new Engine(openfl.Lib.current);
	}
	public static function _main():Main{
		return main;
	}
	public static function _engine():core4.engine.Engine{
		return engine;
	}
	public static function _debug():Bool{
		return debug;
	}
}