package core.manager.animation;
import core.display.Animation;
import core.assests.Variables in V;
import haxe.ds.HashMap in HM;

class AnimationList{

	private var list:HM<Animation, String>;
	private var id:String;

	public function new(a:Animation, name:String):Void{
		list = new HM<Animation, String>();
	}
	public function generateAnimationListID(size:Int):String{
		return V.manager.generateNewID(size);
	}
	private function registerNewAnimation(a:Animation, name:String):String{
		list.set(a, name);
		return id;
	}
}