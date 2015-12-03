package core3;

class Entity {
	public var man			: Manager;
	public var type 		: String;
	
	public function new() {
		man = core3.Manager.ME;
		type = "none";
	}
	
	public function update() {

	}
}
