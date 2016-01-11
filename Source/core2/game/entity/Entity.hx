package core2.game.entity;

import openfl.geom.Point in P;
import openfl.display.Sprite in S;
import openfl.display.BitmapData in BMD;
import core2.game.entity.listeners.EntityListener in EL;
import core2.game.entity.movement.managers.EntityMovementManager in EMM;
import core2.game.assets.UUID;

class Entity extends S{

	public var acceleration:Float;
	public var velocity:P;
	public var canCollide:Bool;
	public var followCamera:Bool;
	public var hitboxW:Int;
	public var hitboxH:Int;
	public var graphic:BMD;
	private var entityListener:EL;
	private var entyityMovementManager:EMM;
	private var type:String;
	private var emmHash:Int;

	public function new(x:Float = 0, y:Float = 0, graphic:BMD = null){
		super();
		entityListener = new EL();
		emmHash = hashCode();
		entyityMovementManager = new EMM(this);
		visible = true;
		acceleration = 0.9;
		velocity = new P(0, 0);
		canCollide = true;
		followCamera = false;
		this.x = x;
		this.y = y;

		hitboxW = hitboxH = 0;
		type = "";
		name = "";

	}
	public function hashCode():Int{
		return UUID.randomNum();
	}
	public function setHitbox(x:Int, y:Int):Void{
		hitboxW = x;
		hitboxH = y;
	}
	public function getListener():EL{
		return entityListener;
	}
	public function getEntyityMovementManager():EMM{
		return entyityMovementManager;
	}
}