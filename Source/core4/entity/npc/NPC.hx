package core4.entity.npc;

class NPC extends Entity{
	private var aggro:Bool;
	private var aggroable:Bool;
	private var aggroRange:Int;
	private var aggroedEntity:core4.entity.Entity;
	public function new(?name:String = "<Unknown>", ?type:String = "NPC", ?loot:Bool = true, ?shoot:Bool = true, ?move:Bool = true, ?god:Bool = false, ?use:Bool = true, ?canAggro:Bool = true, ?aRange:Int = 100, ?bUP:openfl.display.Bitmap = null, ?bDOWN:openfl.display.Bitmap = null, ?bLEFT:openfl.display.Bitmap = null, ?bRIGHT:openfl.display.Bitmap = null){
		init = true;
		aggroable = canAggro;
		aggroRange = aRange;
		super(bLEFT, name, type, loot, shoot, false, god, use, bUP, bDOWN, bLEFT, bRIGHT);
	}
	public override function update(){
		if(!aggro){
			checkForAggression();
		}
		aiMove();
		super.update();
	}
	public function aiMove():Void{
		if(aggro){
			if(aggroedEntity.getSpriteOrigin().x < (getSpriteOrigin().x+Std.int(bitMap.width*1.5))){
				sprite.x -= movementSpeed;
			}
			if(aggroedEntity.getSpriteOrigin().x > (getSpriteOrigin().x+Std.int(bitMap.width*1.5))){
				sprite.x += movementSpeed;
			}
			if(aggroedEntity.getSpriteOrigin().y < (getSpriteOrigin().y+Std.int(bitMap.height*1.5))){
				sprite.y -= movementSpeed;
			}
			if(aggroedEntity.getSpriteOrigin().y > (getSpriteOrigin().y+Std.int(bitMap.height*1.5))){
				sprite.y += movementSpeed;
			}
		}else{
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
	}
	public function checkForAggression():Void{
		if(aggroable && core4.Constants.d2p(aggroedEntity.getSpriteOrigin(), getSpriteOrigin()) < 100){
			aggro = true;
		}
	}
}