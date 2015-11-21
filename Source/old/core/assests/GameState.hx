package core.assests;

class GameState{
	
	private var state:String;

	public function new(){
		state = new String("IDLE");
	}
	public function getState():String{
		return state;
	}
	public function setState(s:String):Void{
		state = s;
	}
}