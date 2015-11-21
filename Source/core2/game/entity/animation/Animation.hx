
package core.display;

import core.entity.Entity;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import core.manager.animation.AnimationManager in AM;


class Animation{
	
	private var frames:Int;
	private var currentFrame:Int;
	private var endFrame:Int;
	private var bitmap:Bitmap;
	private var entity:Entity;
	private var newBitmapData:BitmapData;
	private var previousBitmapData:BitmapData;
	private var bitmapDataArray:Array<BitmapData>;
	private var name:String;
	private var id:String;

	public function new(b:Bitmap, bd:Array<BitmapData>, animationName:String){
		bitmap = b;
		bitmapDataArray = bd;
		frames = bitmapDataArray.length;
		name = animationName;
	}
	public function getName():String{
		return name;
	}
	public function getID():String{
		return id;
	}
	public function setID(s:String):Void{
		id = s;
	}
	public function getNumOfFrames():Int{
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