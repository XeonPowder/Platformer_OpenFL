package core4.entity.projectile;

class Projectile extends Entity{
	private var isAirborn:Bool;
	private var direction:Int;
	private var pwidth:Float;
	private var pheight:Float;
	private var bitmap:openfl.display.Bitmap;
	public function new(d:Int, bm:Bitmap, projectileName:String, projectileType:String){
		super(bm, projectileName, projectileType, false, false, true, false);
		isAirborn = true;
		direction = d;
		bitmap = bm;
		pwidth = bitmap.width;
		pheight = bitmap.height;
		addChild(bitmap);
	}
	public override function update(){
			if((x <= (0+pwidth))|| (x >= (parentEntity.man.stage.stageWidth-pwidth))){
				parentEntity.man.stage.removeChild(this);
				parentEntity.projectileList.remove(this);
				isAirborn = false;
			}else if((y <= (0 + pheight)) || (y >= (parentEntity.man.stage.stageHeight - pheight))){
				parentEntity.man.stage.removeChild(this);
				parentEntity.projectileList.remove(this);
				isAirborn = false;
			}
			if(direction == 0){
				this.y-=Const.GRIDY/2;
			}else if(direction == 90){
				this.x+=Const.GRIDY/2;
			}else if(direction == 180){
				this.y+=Const.GRIDY/2;
			}else if(direction == 270){
				this.x-=Const.GRIDY/2;
			}
	}
	public function airborn():Bool{
		return isAirborn;
	}
}