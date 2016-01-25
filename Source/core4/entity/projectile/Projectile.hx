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
	private var hitboxTL:openfl.geom.Point = null;
	private var hitboxTR:openfl.geom.Point = null;
	private var hitboxBL:openfl.geom.Point = null;
	private var hitboxBR:openfl.geom.Point = null;
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
			_updateHitbox();
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
			sprite.x = parentEntity.getSpriteOrigin().x;
			sprite.y = parentEntity.getSpriteOrigin().y;
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
			for(x in 0 ... core4.Constants._L_ENTITY.length){
				if(core4.Constants._L_ENTITY[x] != null && core4.Constants._L_ENTITY[x] != parentEntity && parentEntity.checkHostility(core4.Constants._L_ENTITY[x])){
					var e = core4.Constants._L_ENTITY[x];
					if((hitboxTL.x < e.getHitboxTR().x && hitboxTL.y > e.getHitboxTR().y && hitboxTL.x > e.getHitboxBL().x && hitboxTL.y < e.getHitboxBL().y) || 
						(hitboxTR.x < e.getHitboxTR().x && hitboxTR.y > e.getHitboxTR().y && hitboxTR.x > e.getHitboxBL().x && hitboxTR.y < e.getHitboxBL().y) ||
						(hitboxBL.x < e.getHitboxTR().x && hitboxBL.y > e.getHitboxTR().y && hitboxBL.x > e.getHitboxBL().x && hitboxBL.y < e.getHitboxBL().y) ||
						(hitboxBR.x < e.getHitboxTR().x && hitboxBR.y > e.getHitboxTR().y && hitboxBR.x > e.getHitboxBL().x && hitboxBR.y < e.getHitboxBL().y)) {

						isAirborn = false;
						core4.Constants._L_ENTITY[x].setDamageRecieved(core4.Constants._L_ENTITY[x].getDamageRecieved()+dmg, parentEntity);
					}
					
				}
			}
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
	public function _updateHitbox(){
		hitboxTL = new openfl.geom.Point(getSpriteOrigin().x - (pwidth/2), getSpriteOrigin().y - (pheight/2));
		hitboxTR = new openfl.geom.Point(getSpriteOrigin().x + (pwidth/2), getSpriteOrigin().y - (pheight/2));
		hitboxBL = new openfl.geom.Point(getSpriteOrigin().x - (pwidth/2), getSpriteOrigin().y + (pheight/2));
		hitboxBR = new openfl.geom.Point(getSpriteOrigin().x + (pwidth/2), getSpriteOrigin().y + (pheight/2));
	}
}