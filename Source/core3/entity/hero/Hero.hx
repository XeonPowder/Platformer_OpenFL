package core3.entity.hero;

class Hero extends Entity{

	public var hero 							:				openfl.display.Sprite;
	private var heroBMD 						: 				openfl.display.Bitmap;
	private var heroBMDright 					: 				openfl.display.Bitmap;
	private var heroBMDleft 					: 				openfl.display.Bitmap;
	private var heroBMDup 						: 				openfl.display.Bitmap;
	private var heroBMDdown 					: 				openfl.display.Bitmap;
	private var currentHeroBMD 					: 				openfl.display.Bitmap;
	public var heroProperties 					: 				core3.entity.EntityProperties;
	public var herohealthbar 					:				openfl.display.Sprite;
	private var init 							: 				Bool;
	public var heroMultiplier 					:		 		core3.entity.hero.HeroMultiplier;

	public function new(){
		init = true;
		super();
		type = "player";
		hero = new openfl.display.Sprite();
		heroMultiplier = new HeroMultiplier(this, hero);
		heroProperties = new HeroProperties(this);
		heroBMDright = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right.png"));
		heroBMDleft = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left.png"));
		heroBMDup = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left_jump.png"));
		heroBMDdown = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right_jump.png"));
		currentHeroBMD = heroBMDright;
		hero.addChild(currentHeroBMD);

		hero.x = Std.int(man.stage.stageWidth/2);
		hero.y = Std.int(man.stage.stageHeight/2);

		herohealthbar = new openfl.display.Sprite();
		herohealthbar.graphics.beginFill(0x00FF00,1);
		herohealthbar.graphics.drawRect(20, 5, 32, 5);

		man.stage.addChild(hero);
		man.stage.addChild(herohealthbar);

		init = false;
	}
	public override function update(){
		if(!init){
			if( man.getKeyState(openfl.ui.Keyboard.LEFT)){
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDleft){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDleft;
					hero.addChild(currentHeroBMD);
				}
				hero.x -= Std.int(Const.GRID/3);
			}
			if( man.getKeyState(openfl.ui.Keyboard.RIGHT)){
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDright){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDright;
					hero.addChild(currentHeroBMD);
				}
				hero.x += Std.int(Const.GRID/3);
			}
				
			if( man.getKeyState(openfl.ui.Keyboard.UP)){
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDup){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDup;
					hero.addChild(currentHeroBMD);
				}
				hero.y -= Std.int(Const.GRID/3);
			}

			if( man.getKeyState(openfl.ui.Keyboard.DOWN)){
				if(hero.getChildAt(hero.getChildIndex(currentHeroBMD)) != heroBMDdown){
					hero.removeChild(currentHeroBMD);
					currentHeroBMD = heroBMDdown;
					hero.addChild(currentHeroBMD);
				}
				hero.y += Std.int(Const.GRID/3);
			}
		}
	}
	public override function getMultiplier():core3.entity.hero.HeroMultiplier{
		return heroMultiplier;
	}
}