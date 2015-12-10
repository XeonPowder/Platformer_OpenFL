package core3;

class Manager {
	public static var ME : Manager;

	static var fl_initDone = false;

	
	var kcodes:Array<Bool>;
	var ktime = 0;
	
	private var map 						:		Map;
	private var hero 					: 		core3.entity.hero.Hero;
	private var mapTS 					: 		openfl.display.Tilesheet;
	public var stage 					: 		openfl.display.Stage;

	public var level					: 		Array<Array<Int>>;
	public var levelCollision			: 		Array<Array<Bool>>;
	private var tileIDList 				: 		Array<Int>;
	private var tilesheetData 			: 		Array<Float>;
	private var itemDatabase 			: 		Array<core3.Item>;
	private var itemsOnFloor 			: 		Array<core3.Item>;
	private var notificationManager 	: 		core3.notification.NotificationManager;
	private var debug 					: 		Bool;
	private var entityList 				: 		Array<core3.entity.Entity>;
	// new manager instance
	// arX = tile pixel width
	// arY = tile pixel heigh
	// w = requested window width
	// h = requested window height
	// pName = player requested name
	public function new(arX, arY, w, h, pName, _d) {
		ME = this;
		kcodes = new Array();
		itemDatabase = new Array();
		itemsOnFloor = new Array();
		debug = _d;
		notificationManager = new core3.notification.NotificationManager(this);
		entityList = new Array();
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
		var bmd:openfl.display.BitmapData = openfl.Assets.getBitmapData(new String("assets/maps/NewWorld/16x9.png"));
		mapTS = new openfl.display.Tilesheet(bmd);


		tileIDList = new Array();
		var z = 0;
		//trace(Std.int(bmd.width/arX));
		//trace(Std.int(bmd.height/arY));
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
						if(_debug())trace(collision);
						if(Const.compareString(collision, "y") == 0){
							levelCollision[x][y] = true;
						}else if(Const.compareString(collision, "n") == 0){
							levelCollision[x][y] = false;
							
						}
						if(_debug())trace(levelCollision[x][y]);
					}
					level[x][y] = tileIDList[z];
					z++;
				}
			}
		}
		tilesheetData = new Array();
		for (row in 0...level.length) {
			for (cell in 0...level[row].length) {
				tilesheetData = tilesheetData.concat([arX*row, arY*cell, level[row][cell]]);
			}
		}
		//trace(level);
		

		// Creating the hero
		map = new Map(tilesheetData, mapTS, this);
		hero = new core3.entity.hero.Hero();
		new core3.entity.card.Card(Const._HEALTH, "Health x10", true, Const._HEALTH, hero.heroProperties.c_hp*.10, new openfl.geom.Point(100, 100));
		new core3.entity.card.Card(Const._HEALTH, "Health x10", true, Const._HEALTH, hero.heroProperties.c_hp*.10, new openfl.geom.Point(300, 300));

		

		// Text Field
		var tf = new openfl.text.TextField();
		stage.addChild(tf);
		tf.text = "Buffy "+Const.VERSION;
		tf.width = stage.stageWidth;
		tf.textColor = 0xFFFFFF;
		tf.mouseEnabled = tf.selectable = false;
	}
	
	
	// Main loop (called onEnterFrame)
	public function update(e:openfl.events.Event):Void {
		onEnterFrame();
		if(updateMap() == false){
			updateEntities();
			//hero.update();
			//card.update();
			updateNotifications();
		}
		
	}
	public function getMap():core3.Map{
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
	public function getKTime():Int{
		return ktime;
	}
	public function gameOver(s:String){

	}
	public function getItemDB():Array<core3.Item>{
		return itemDatabase;
	}
	public function getItemByID(_id:Int):core3.Item{
		for(x in 0 ... getItemDB().length){
			if(getItemDB()[x].getItemID() == _id){
				return getItemDB()[x];
			}
		}
		return null;
	}
	public function addItemToDB(item:core3.Item):Int{
		var alreadyInDB:Bool = true;
		var index:Int = -1;
		var x:Int = 0;
		while(x < getItemDB().length){
			if(alreadyInDB){
				if(getItemDB()[x] == item){
					if(_debug())trace("item already in DB: "+item.getItemName());
					index = x;
				}
				if(x == getItemDB().length-1){
					alreadyInDB = false;
					x = 0;
				}
			}else{
				getItemDB()[getItemDB().length] = item;
				index = getItemDB().length-1;
				return index;
			}
			x++;
		}
		return index;
	}
	public function getItemsOnFloor():Array<core3.Item>{
		return itemsOnFloor;
	}
	public function removeItemFromFloor(item:core3.Item){
		itemsOnFloor.remove(item);
	}
	public function addItemToFloor(item:core3.Item){
		itemsOnFloor.push(item);
	}
	public function getNotificationManager():core3.notification.NotificationManager{
		return notificationManager;
	}
	public function _debug():Bool{
		return debug;
	}
	public function updateMap():Bool{
		return map.update();
	}
	public function updateNotifications(){
		notificationManager.update();
	}
	public function updateEntities(){
		for(x in 0 ... entityList.length){
			entityList[x].update();
		}
	}
	public function getEntityList():Array<core3.entity.Entity>{
		return entityList;
	}
}