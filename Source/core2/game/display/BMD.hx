package core2.game.display;

import core2.game.assets.UUID;
import openfl.Assets;

class BMD extends openfl.display.BitmapData{
	private var id:Int;
	private var bmd:BMD;
	public function new(openFLBMD:openfl.display.BitmapData){
		bmd = cast(openFLBMD, BMD);
		super(bmd.width, bmd.height);
		id = UUID.randomNum();
	}
	public function hashCode():Int{
		return id;
	}
	public function getBMD(){
		return this;
	}
}