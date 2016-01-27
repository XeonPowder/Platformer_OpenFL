package core4.entity.npc;

class NPC extends Entity{
	private var aggro:Bool;
	private var aggroable:Bool;
	private var aggroRange:Int;
	private var aggroedEntity:core4.entity.Entity = null;
	public function new(?name:String = "<Unknown>", ?type:String = "NPC", ?inventory:Bool = true, ?loot:Bool = true, ?shoot:Bool = true, ?move:Bool = true, ?god:Bool = false, ?use:Bool = true, ?canAggro:Bool = true, ?aRange:Int = 100, ?hostility:Float = 0, ?bUP:openfl.display.Bitmap = null, ?bDOWN:openfl.display.Bitmap = null, ?bLEFT:openfl.display.Bitmap = null, ?bRIGHT:openfl.display.Bitmap = null){
		super(bLEFT, name, type, inventory, loot, shoot, move, god, use, hostility, bUP, bDOWN, bLEFT, bRIGHT);
		aggroable = canAggro;
		aggroRange = aRange;
	}
	public override function update(){
		super.update();
		if(aggroedEntity != null){
			var stillExists:Bool = false;
			for(x in 0 ... core4.Constants._L_ENTITY.length){
				if(aggroedEntity == core4.Constants._L_ENTITY[x]){
					stillExists = true;
				}
			}
			if(!stillExists){
				aggroedEntity = null;
				aggro = false;
			}
		}
		if(!aggro){
			checkForAggression();
		}
		if(canMove){
			aiMove();
		}
		_redraw();
	}
	public function aiMove():Void{
		if(aggro && aggroedEntity != null){
			if(getDistanceBetween2Entities(aggroedEntity, this) > 50){
				if(aggroedEntity.getSpriteOrigin().x < getSpriteOrigin().x){
				sprite.x -= movementSpeed;
				}
				if(aggroedEntity.getSpriteOrigin().x > getSpriteOrigin().x){
					sprite.x += movementSpeed;
				}
				if(aggroedEntity.getSpriteOrigin().y < getSpriteOrigin().y){
					sprite.y -= movementSpeed;
				}
				if(aggroedEntity.getSpriteOrigin().y > getSpriteOrigin().y){
					sprite.y += movementSpeed;
				}
			}else{
				randomMove();
			}
			if(core4.Constants.compareString(core4.Constants._D_GAME_VERSION, "0.3.3") == 0 && core4.Constants.getKTime() - timeSinceLastShot() > (getAttackSpeed()*10)){
				//trace(entityName + " can shoot.");
				if(projectileList == null){
					projectileList = new Array();
				}
				var d:Int = 0;
				var shoot:Bool = false;
				if(getSpriteX() == aggroedEntity.getSpriteX()){
					if(getSpriteY() <= aggroedEntity.getSpriteY()){
						d = 270;
						shoot = true;
					}else{
						d = 90;
						shoot = true;
					}
				}else if(getSpriteY() == aggroedEntity.getSpriteY()){
					if(getSpriteX() <= aggroedEntity.getSpriteX()){
						d = 180;
						shoot = true;
					}else{
						d = 0;
						shoot = true;
					}
				}else{
					shoot = false;
				}
				if(shoot){
					trace(entityName + " has shot!");
					var p:core4.entity.projectile.Projectile = new core4.entity.projectile.Projectile(this, d, openfl.Assets.getBitmapData("assets/weapon/gun/gun.png"), "gun", "thrown", 5);
					setFacingDirection(d);
					projectileList.push(p);
					tsls = core4.Constants.getKTime();
				}
			}
		}else{
			randomMove();
		}
	}
	public function randomMove(){
		var r:Int = Std.int(Math.random() * 50);
		if(r % 5 == 0){
			sprite.x -= movementSpeed;
		}else if (r % 5 == 1){
			sprite.x += movementSpeed;
		}else if(r % 5 == 2){
			sprite.y -= movementSpeed;
		}else if(r % 5 == 3){
			sprite.y += movementSpeed;
		}
	}
	public function checkForAggression():Void{
		if(aggroable && aggro != true){
			aggroedEntity = getClosestEntity();
			if(checkHostility(aggroedEntity) && getDistanceBetween2Entities(aggroedEntity, this) < aggroRange){
				trace(aggroedEntity.entityName+", is in aggro range of "+this.entityName);
				aggro = true;
			}else{
				aggroedEntity = null;
			}
		}
	}
	public override function setDamageRecieved(_dRecieved:Float, ?attachedEntity:core4.entity.Entity):Float{
		if(aggroedEntity == null){
			aggroedEntity = attachedEntity;
			aggro = true;
		}
		damageTaken = _dRecieved;
		return damageTaken;
	}
}