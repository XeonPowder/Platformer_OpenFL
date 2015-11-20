package core.entity;

import openfl.geom.Point;
import openfl.display.Sprite;
import core.listeners.EntityListener in EL;
import core.movement.EntityMovementManager in EMM;

class Entity extends Sprite{

	public var visible:Bool;
	public var acceleration:Float;
	public var velocity:Point;
	public var canCollide:Bool;
	public var followCamera:Bool;
	public var hitboxW:Int;
	public var hitboxH:Int;
	public var graphic:BitmapData;
	private var listener:EL;
	private var movementMamanager:MM;

	public function new(x:Float = 0, y:Float = 0, graphic:BitmapData = null){
		super();
		register(this);
		listener = new EL();
		movementMamanager = new EMM();
		visible = true;
		acceleartion = 0.9;
		velocity = new Point(0, 0);
		collision = true;
		followCamera = false;
		this.x = x;
		this.y = y;

		hitboxW = hitboxH = 0;
		type = "";
		name = "";

	}

	public function setHitbox(x:Int, y:Int):Void{
		hitboxW = x;
		hitboxH = y;
	}
	public function register(e:Entity):Int{
		V.entitylist[entitylist.length] = e;
		return V.entitylist[length-1];
	}
	public function getListener():Void{
		return entityListener;
	}
}