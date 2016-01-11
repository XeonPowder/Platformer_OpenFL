package core2.game.managers;

class Manager{
	
	private var manager:Manager;

	public function new():Void{
		manager = this;
	}
	public function getManager():Manager{
		return manager;
	}
}