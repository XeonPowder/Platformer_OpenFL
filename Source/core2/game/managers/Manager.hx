package core.manager;

import core.assests.UUID in UUID;
import haxe.ds.HashMap in HM;

class Manager{
	
	private var id:String;
	private var manager:HM<Manager, String>;

	public function new():Void{
		manager = new HM<Manager, String>();
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