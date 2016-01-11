package core2.game.entity.animation;

import core2.game.entity.Entity;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import core2.game.entity.animation.managers.AnimationManager in AM;
import core2.game.assets.UUID;

class Animation{
	private var animation:Animation;
	private var frames:Int;
	private var currentFrame:Int;
	private var endFrame:Int;
	private var bitmap:Bitmap;
	private var entity:Entity;
	private var newBitmapData:BitmapData;
	private var previousBitmapData:BitmapData;
	private var bitmapDataArray:Array<BitmapData>;
	private var name:String;
	private var id:Int;

	public function new(b:Bitmap, bd:Array<BitmapData>, animationName:String){
		animation = this;
		bitmap = b;
		bitmapDataArray = bd;
		frames = bitmapDataArray.length;
		name = animationName;
		id = UUID.randomNum();
	}
	public function getAnimation():Animation{
		return animation;
	}
	public function hashCode():Int{
		return id;
	}
	public function getName():String{
		return name;
	}
	public function getFrames():Int{
		return frames;
	}
	public function getBitmap():Bitmap{
		return bitmap;
	}
	public function getBitmapDataArray():Array<BitmapData>{
		return bitmapDataArray;
	}
	public function getBitmapData(frame:Int):BitmapData{
		var bmda = getBitmapDataArray();
		return bmda[frame];
	}
	private function changeBitmapData(b:Bitmap, bd:Array<BitmapData>, frame:Int):Void{
		bd[frame] = newBitmapData;
		previousBitmapData = b.bitmapData;
		b.bitmapData = newBitmapData;
	}
	
	private function animate(a:Animation, frame:Int):Int{
		changeBitmapData(a.getBitmap(), a.getBitmapDataArray(), frame);
		return frame+1;
	}
}