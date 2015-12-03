package core3;

class Manager {
	public static var ME : Manager;

	static var fl_initDone = false;

	
	var kcodes:Array<Bool>;
	var ktime = 0;
	
	public var map 						:		Map;
	public var mapTS 					: 		openfl.display.Tilesheet;
	public var stage 					: 		openfl.display.Stage;
	public var hero						: 		core3.entity.Hero;

	public var level					: 		Array<Array<Int>>;
	public var levelCollision			: 		Array<Array<Bool>>;
	public var tileIDList 				: 		Array<Int>;
	public var tilesheetData 			: 		Array<Float>;


	// new manager instance
	// arX = tile pixel width
	// arY = tile pixel heigh
	// w = requested window width
	// h = requested window height
	// pName = player requested name
	public function new(arX, arY, w, h, pName) {
		ME = this;
		kcodes = new Array();
		pgr.dconsole.DC.init();
		pgr.dconsole.DC.log("Buffy Console");
		pgr.dconsole.DC.registerObject(this, "console");
		pgr.dconsole.DC.registerClass(Manager, "manager");
		stage = openfl.Lib.current.stage;
		stage.addEventListener(openfl.events.Event.ENTER_FRAME, update);
		stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN,keyDown);
		stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP,keyUp);
		// Background
		//var bg = new openfl.display.Sprite();
		//openfl.Lib.current.addChild(bg);
		//bg.graphics.beginFill(0x000000, 1);
		//bg.graphics.drawRect(0,0, stage.stageWidth, stage.stageHeight);


		//Map and Tilesheet
		var bmd:openfl.display.BitmapData = openfl.Assets.getBitmapData(new String("assets/maps/test/test_tilesheet.png"));
		mapTS = new openfl.display.Tilesheet(bmd);


		tileIDList = new Array();
		var z = 0;
		trace(Std.int(bmd.width/arX));
		trace(Std.int(bmd.height/arY));
		for(x in 0 ... Std.int(bmd.width/arX)){
			for(y in 0 ... Std.int(bmd.height/arY)){
				tileIDList[z] = mapTS.addTileRect(new openfl.geom.Rectangle(x*arX, y*arY, arX, arY));
				z++;
			}
		}

		level = new Array();
		levelCollision = new Array();
		var collision:String = "";
		//Sys.print("auto tileID generation? (y or n): ");
		//var auto:String = Sys.stdin().readLine();
		var auto:String = "y";
		var autoCounter = 0;
		for(x in 0... Std.int(bmd.width/arX)){
			level[x] = new Array();
			levelCollision[x] = new Array();
			for(y in 0... Std.int(bmd.height/arY)) {
				if(Const.compareString(auto, "y") == 0){
					levelCollision[x][y] = false;
					level[x][y] = tileIDList[autoCounter];
					autoCounter++;
				}else if(Const.compareString(auto, "n") == 0){
					collision = "";
					z = -1;
					while((z == -1 || z == Math.NaN) && collision == ""){
						//Sys.print("tileID to assign map tile: ["+x+", "+y+"]? ");
						//z = Std.parseInt(Sys.stdin().readLine());
						//Sys.print("entity collision? (y or n): ");
						//collision = Sys.stdin().readLine();
						trace(collision);
						if(Const.compareString(collision, "y") == 0){
							levelCollision[x][y] = true;
							trace(levelCollision[x][y]);
						}else if(Const.compareString(collision, "n") == 0){
							levelCollision[x][y] = false;
							trace(levelCollision[x][y]);
						}
					}
					level[x][y] = tileIDList[z];
					z++;
				}
			}
		}
		tilesheetData = new Array();
		for (row in 0...level.length) {
			for (cell in 0...level[row].length) {
				tilesheetData = tilesheetData.concat([Const.GRID*row, Const.GRID*cell, level[row][cell]]);
			}
		}
		trace(level);
		

		// Adding the player entity
		hero = new core3.entity.Hero();
		map = new Map(tilesheetData, mapTS);

		// Text Field
		var tf = new openfl.text.TextField();
		stage.addChild(tf);
		tf.text = "Platformer "+Const.VERSION;
		tf.width = openfl.Lib.current.stage.stageWidth;
		tf.textColor = 0x000000;
		tf.mouseEnabled = tf.selectable = false;
	}
	
	
	// Main loop (called onEnterFrame)
	public function update(e:openfl.events.Event):Void {
		//trace("key++");
		Key.onEnterFrame();
		//trace("hero update");
		hero.update();
		//trace("map update");
		map.update();
	}
	public function getMap():openfl.display.Sprite{
		return map;
	}
	public function getMapTS():openfl.display.Tilesheet{
		return mapTS;
	}
	public function onEnterFrame():Void {
		ktime++;
	}
	public function keyDown(e:openfl.events.KeyboardEvent){
		//trace("keydown"+e.keyCode);
		kcodes[e.keyCode] = true;
	}
	public function keyUp(e:openfl.events.KeyboardEvent){
		//trace("keyUp"+e.keyCode);
		kcodes[e.keyCode] = false;
	}
	public function getKeyState(x:Int):Bool{
		return kcodes[x];
	}
}