package core.manager;

import core.assests.Variables in V;
import core.assests.UUID in UUID;

class Manager{
	
	private var id:String;
	private var manager:HashMap<Manager, String>;

	public function new():Void{
		manager = new HashMap<Manager, String>;
	}
	public function registerNewManager(m:Manager, id:String):String{
		manager.set(m, id);
	}
	public function getID():String{
		return id;
	}
	public function generateNewID(size:Int):Void{
		id = UUID.random(size);
	}
}