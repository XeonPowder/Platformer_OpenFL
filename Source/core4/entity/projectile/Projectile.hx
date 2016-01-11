package core4.entity.projectile;

class Projectile{
	private var isAirborn:Bool;
	private var direction:Int;
	private var pwidth:Float;
	private var pheight:Float;
	private var bitmap:openfl.display.Bitmap;
	private var parentEntity:core4.entity.Entity;
	private var dmg:Float;
	private var sprite:openfl.display.Sprite;
	private var name:String;
	private var type:String;
	private var projectileInit:Bool = true;
	private var rotationCounter:Int = 0;
	public function new(pEntity:core4.entity.Entity, d:Int, bmd:openfl.display.BitmapData, projectileName:String, projectileType:String, damage:Float){
		isAirborn = true;
		sprite = new openfl.display.Sprite();
		direction = d;
		bitmap = new openfl.display.Bitmap(bmd);
		sprite.addChild(bitmap);
		name = projectileName;
		type = projectileType;
		pwidth = bitmap.width;
		pheight = bitmap.height;
		parentEntity = pEntity;
		dmg = damage;
		trace("adding projectile to stage");
	}
	public function update(){
		if(!projectileInit && isAirborn){
			checkForCollision();
			if(direction == 90){
				sprite.y-=20;
			}else if(direction == 180){
				sprite.x+=20;
			}else if(direction == 270){
				sprite.y+=20;
			}else if(direction == 0){
				sprite.x-=20;
			}
			if(rotationCounter < 360){
				rotationCounter++;
				sprite.rotation+=rotationCounter;
			}else{
				rotationCounter = 0;
			}
			trace(sprite.x +", " + sprite.y);
		}else{
			sprite.x = parentEntity.getLocation().x;
			sprite.y = parentEntity.getLocation().y;
			Main._main()._engine()._stage().addChild(sprite);
			projectileInit = false;
		}
	}
	public function airborn():Bool{
		return isAirborn;
	}
	public function checkForCollision(){
		if((sprite.x <= 0) || (sprite.x >= (Main._main()._engine()._stage().stageWidth-pwidth))){
			trace("exceded x");
			isAirborn = false;
		}else if((sprite.y <= 0) || (sprite.y >= (Main._main()._engine()._stage().stageHeight-pheight))){
			trace("exceded y");
			isAirborn = false;
		}else{
			isAirborn = true;
			/*
			for(x in 0 ... core4.Constants._L_ENTITY.length){
				if(core4.Constants._L_ENTITY[x] != parentEntity && core4.Constants.d2p(core4.Constants._L_ENTITY[x].getSpriteOrigin(), getSpriteOrigin()) < Std.int(pwidth/2)){
					core4.Constants._L_ENTITY[x].setDamageRecieved(core4.Constants._L_ENTITY[x].getDamageRecieved()+dmg);
					isAirborn = false;
				}
			}*/
		}
		if(!isAirborn){
			Main._main()._engine()._stage().removeChild(sprite);
			parentEntity.getProjectileList().remove(this);
		}
	}
	public function getSpriteOrigin(?hasBitmap:Bool = true):openfl.geom.Point{
		if(hasBitmap && getBitmap() != null){
			return new openfl.geom.Point(sprite.x+Std.int(bitmap.bitmapData.width/2), sprite.y+Std.int(bitmap.bitmapData.height/2));
		}else{
			return new openfl.geom.Point(sprite.x, sprite.y);
		}
	}
	public function getBitmap():openfl.display.Bitmap{
		return bitmap;
	}
}