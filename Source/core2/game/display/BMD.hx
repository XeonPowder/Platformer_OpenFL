package core2.game.display;

import openfl.display.BitmapData;
import core2.game.assets.UUID;
import openfl.Assets;

class BMD{
	private var id:Int;
	private var bmd_copy:BitmapData;
	private var width:Int;
	private var height:Int;
	public function new(bmd:BitmapData, w:Int, h:Int){
		bmd_copy = bmd;
		width = w;
		height = h;
		id = UUID.randomNum();
	}
	public function hashCode():Int{
		return id;
	}
	public function getBMD():BMD{
		return this;
	}
	public function getData():BitmapData{
		return bmd_copy;
	}
	public function getHeight():Int{
		return height;
	}
	public function getWidth():Int{
		return width;
	}
}