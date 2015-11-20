package core.manager.animation;

import core.assests.Variables in V;

class AnimationManager extends Manager{

	private var manager:HashMap<Animation, String>;
	private var id:String;

	public function new():Void{
		manager = new HashMap<Animation, String>();
		id = registerManager();
	}
	private function registerNewAnimation(a:Animation, id:String = V.manager.generateNewID(4)):String{
		manager.set(a, id);
		return id;
	}
}