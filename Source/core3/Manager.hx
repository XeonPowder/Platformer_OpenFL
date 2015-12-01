package core3;

class Manager { //}
	public static var ME : Manager;
	
	public var map 						:		Map;
	public var mapTS 					: 		nme.display.Tilesheet;
	public var hero						: 		Entity;
	
	public var init 					: 		Bool;

	public var level					: 		Array<Array<Int>>;
	public var levelCollision			: 		Array<Array<Bool>>;
	public var tileIDList 				: 		Array<Int>;
	public var tilesheetData 			: 		Array<Float>;

	public function new(arX, arY, w, h, pName) {
		init = false;
		ME = this;
		nme.Lib.current.addEventListener( nme.events.Event.ENTER_FRAME, update );
		Key.init();

		// Background
		var bg = new nme.display.Sprite();
		nme.Lib.current.addChild(bg);
		bg.graphics.beginFill(0x2D2D2D, 1);
		bg.graphics.drawRect(0,0, bg.stage.stageWidth, bg.stage.stageHeight);


		//Map and Tilesheet
		var map:Map;
		var bmd:nme.display.BitmapData = nme.Assets.getBitmapData(new String("assets/maps/test/test_tilesheet.png"));
		var mapTS = new nme.display.Tilesheet(bmd);


		tileIDList = new Array();
		var z = 0;
		trace(Std.int(bmd.width/arX));
		trace(Std.int(bmd.height/arY));
		for(x in 0 ... Std.int(bmd.width/arX)){
			for(y in 0 ... Std.int(bmd.height/arY)){
				tileIDList[z] = mapTS.addTileRect(new nme.geom.Rectangle(x*arX, y*arY, arX, arY));
				z++;
			}
		}

		level = new Array();
		levelCollision = new Array();
		var collision:String = "";
		Sys.print("auto tileID generation? (y or n): ");
		var auto:String = Sys.stdin().readLine();
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
						Sys.print("tileID to assign map tile: ["+x+", "+y+"]? ");
						z = Std.parseInt(Sys.stdin().readLine());
						Sys.print("entity collision? (y or n): ");
						collision = Sys.stdin().readLine();
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
				tilesheetData = tilesheetData.concat([Const.GRID*cell, Const.GRID*row, level[row][cell]]);
			}
		}
		trace(level);
		// Text Field

		var tf = new nme.text.TextField();
		//nme.Lib.current.addChild(tf);
		tf.text = "Platformer "+Const.VERSION;
		tf.width = tf.stage.stageWidth;
		tf.textColor = 0xFFFFFF;
		tf.mouseEnabled = tf.selectable = false;
		
		
		// Adding the player entity
		hero = new core3.Entity();
		nme.Lib.current.addChild(hero.sprite);
		map = new Map(tilesheetData, mapTS);
		nme.Lib.current.addChild(map);
		init = true;
	}
	
	
	// Main loop (called onEnterFrame)
	function update(e:nme.events.Event):Void {
		if(init){
			map.draw();
		}
		var speed = 0.04;
		
		if( core3.Key.isDown(nme.ui.Keyboard.LEFT) )
			hero.dx -= speed;
			
		if( core3.Key.isDown(nme.ui.Keyboard.RIGHT) )
			hero.dx += speed;
			
		if( core3.Key.isDown(nme.ui.Keyboard.UP))
			hero.dy -= speed;

		if( core3.Key.isDown(nme.ui.Keyboard.DOWN))
			hero.dy += speed;	
		hero.update();
	}
	function getMap():nme.display.Sprite{
		return map;
	}
	function getMapTS():nme.display.Tilesheet{
		return mapTS;
	}
}