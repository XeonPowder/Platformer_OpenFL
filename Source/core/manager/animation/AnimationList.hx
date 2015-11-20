package core.manager.animation;
import core.display.Animation;
import core.assests.Variables in V;


class AnimationList{

	private var list:HashMap<Animation, String>;
	private var id:String;

	public function new(a:Animation, name:String):Void{
		list = new HashMap<Animation, String>();
	}
	public function generateAnimationListID(size:Int):String{
		return V.manager.generateNewID(size);
	}
	private function registerNewAnimation(a:Animation, name:String):String{
		list.set(a, name);
		return id;
	}
}