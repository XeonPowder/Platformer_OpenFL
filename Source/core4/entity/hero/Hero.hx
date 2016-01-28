package core4.entity.hero;

class Hero extends Entity{
	private var herohealthbar 					:				openfl.display.Sprite;
	private var heroenergybar 					: 				openfl.display.Sprite;
	private var heroInit 						: 				Bool = true;

	public function new(?name:String = "HERO", ?type:String = "PLAYER", ?inventory:Bool = true, ?loot:Bool = true, ?shoot:Bool = true, ?move:Bool = true, ?god:Bool = false, ?use:Bool = true, ?hostility:Float = 0){
		super(core4.Constants._A_HERO_DOWN, true, name, type, inventory, loot, shoot, move, god, use, hostility, core4.Constants._A_HERO_UP, core4.Constants._A_HERO_DOWN, core4.Constants._A_HERO_LEFT, core4.Constants._A_HERO_RIGHT);
		attackSpeed = .75;
		if(core4.Constants.compareString(Main._main().getDifficulty(), "HARDCORE") == 0){

		}else{

			herohealthbar = new openfl.display.Sprite();
			herohealthbar.graphics.beginFill(0x00FF00,1);
			herohealthbar.graphics.drawRect(5, 30, getHealth(), 15);
			herohealthbar.graphics.endFill();



			heroenergybar = new openfl.display.Sprite();
			heroenergybar.graphics.beginFill(0x00FFFF,1);
			heroenergybar.graphics.drawRect(5, 50, getEnergy(), 15);
			heroenergybar.graphics.endFill();


		}
		trace("loading hero events");
		loadHeroEvents();
	}
	public override function update(){
		super.update();
		if(!heroInit){
			herohealthbar.graphics.clear();
			herohealthbar.graphics.beginFill(0x00FF00,1);
			herohealthbar.graphics.drawRect(5, 30, getHealth(), 15);
			herohealthbar.graphics.endFill();

			heroenergybar.graphics.clear();
			heroenergybar.graphics.beginFill(0x00FFFF,1);
			heroenergybar.graphics.drawRect(5, 50, getEnergy(), 15);
			heroenergybar.graphics.endFill();
		}else{
			Main._main()._engine()._stage().addChild(herohealthbar);
			Main._main()._engine()._stage().addChild(heroenergybar);
			heroInit = false;
		}

	}
	private function loadHeroEvents(){
		if(keyEventList == null){
			keyEventList = new Array();
			trace("hero event list created");
		}
		addKeyEvent(openfl.ui.Keyboard.UP, "MOVE_BY", [0, -10, 90]);
		addKeyEvent(openfl.ui.Keyboard.DOWN, "MOVE_BY", [0, 10, 270]);
		addKeyEvent(openfl.ui.Keyboard.LEFT, "MOVE_BY", [-10, 0, 0]);
		addKeyEvent(openfl.ui.Keyboard.RIGHT, "MOVE_BY", [10, 0, 180]);
		addKeyEvent(openfl.ui.Keyboard.E, "LOOT");
		addKeyEvent(openfl.ui.Keyboard.SPACE, "SHOOT");
		addKeyEvent(openfl.ui.Keyboard.I, "INVENTORY");
		if(Main._main()._debug()){
			addKeyEvent(openfl.ui.Keyboard.F, "DEBUG", ["ENERGY", 100]);
			addKeyEvent(openfl.ui.Keyboard.F, "DEBUG", ["HEALTH", 100]);
		}
		trace("hero event list filled");
	}
}