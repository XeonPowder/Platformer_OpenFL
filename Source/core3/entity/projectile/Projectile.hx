package core3.entity.projectile;

class Projectile extends openfl.display.Sprite {
	private var isAirborn:Bool;
	private var direction:Int;
	private var parentEntity:core3.entity.Entity;
	private var pwidth:Float;
	private var pheight:Float;
	private var bm:openfl.display.Bitmap;
	public function new(e:core3.entity.Entity, d:Int, bmdString:String){
		super();
		isAirborn = true;
		direction = d;
		parentEntity = e;
		bm = new openfl.display.Bitmap(openfl.Assets.getBitmapData(bmdString));
		pwidth = bm.width;
		pheight = bm.height;
		addChild(bm);
		parentEntity.man.stage.addChild(this);
	}
	public function update(){
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
				this.y-=Const.GRIDY/3;
			}else if(direction == 90){
				this.x+=Const.GRIDY/3;
			}else if(direction == 180){
				this.y+=Const.GRIDY/3;
			}else if(direction == 270){
				this.x-=Const.GRIDY/3;
			}
	}
	public function airborn():Bool{
		return isAirborn;
	}
}