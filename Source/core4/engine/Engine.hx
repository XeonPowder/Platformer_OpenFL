package core4.engine;

class Engine{
	private var engine : Engine;
	private var stage : openfl.display.Stage;
	private var root : openfl.display.MovieClip;
	private var notificationManager : core4.notification.NotificationManager;
	private var init : Bool = true;
	private var currentState : String;
	private var level : Int;
	private var l1c : Bool;
	private var l2c : Bool;
	private var l3c : Bool;
	private var l4c : Bool;
	private var l5c : Bool;

	private var roomUnlocked : Bool;

	private var treasureChest : openfl.display.Sprite;
	private var card 		 : core4.item.Item;
	//level 1
	private var w1:core4.entity.npc.NPC;
	private var w2:core4.entity.npc.NPC;
	private var w3:core4.entity.npc.NPC;
	//level 2
	private var c1:core4.entity.npc.NPC;
	private var c2:core4.entity.npc.NPC;
	private var c3:core4.entity.npc.NPC;
	private var c4:core4.entity.npc.NPC;
	//level 3
	private var b1:core4.entity.npc.NPC;
	//level 4
	private var b2:core4.entity.npc.NPC;
	private var b3:core4.entity.npc.NPC;
	//level 5
	private var w4:core4.entity.npc.NPC;
	private var w5:core4.entity.npc.NPC;
	private var w6:core4.entity.npc.NPC;
	private var b4:core4.entity.npc.NPC;

	//Johan did this
	private var backgroundMusic:openfl.media.Sound;
	private var backgroundMusicTransformer:openfl.media.SoundTransform;
	private var soundChannel:openfl.media.SoundChannel;
	//Anthony did this
	private var title:openfl.display.Sprite;
	private var	start:openfl.display.Sprite;
	private var	exit:openfl.display.Sprite;

	public function new(_root:openfl.display.MovieClip, first:Bool){
		if(!first){
			stage.removeEventListener(openfl.events.Event.ENTER_FRAME, update);
		}
		init = true;
		engine = this;
		root = _root;
		stage = root.stage;
		notificationManager = new core4.notification.NotificationManager();
		loadAssets();
		//debug check if the preloaded inventories correctly loaded
		if(Main._main()._debug()){
			//core4.Constants.checkPreloadedInventories();
		}
		//add event listeners for updating the game, key down, key up, mouse down, and mouse up
		stage.addEventListener(openfl.events.Event.ENTER_FRAME, update);
	}
	public function _engine():Engine{
		return engine;
	}
	public function _stage():openfl.display.Stage{
		return stage;
	}
	public function update(e:openfl.events.Event){
		trace(currentState);
		core4.Constants.onEnterFrame();
		if(init){
			stage.removeEventListener(openfl.events.MouseEvent.MOUSE_DOWN, core4.Constants.mouseDown);
			stage.removeEventListener(openfl.events.MouseEvent.MOUSE_UP, core4.Constants.mouseUp);

			stage.addEventListener(openfl.events.MouseEvent.MOUSE_DOWN, core4.Constants.mouseDown);
			stage.addEventListener(openfl.events.MouseEvent.MOUSE_UP, core4.Constants.mouseUp);
			core4.Constants._D_MAP = new core4.map.Map(core4.Constants._A_M1);
			level = 0;
			currentState = "main menu";
			if(soundChannel != null){
				soundChannel.stop();
			}
			backgroundMusic = openfl.Assets.getMusic("sound/bensound-actionable.ogg");
			backgroundMusicTransformer = new openfl.media.SoundTransform(1, 0);
			soundChannel = backgroundMusic.play(0, 10000, backgroundMusicTransformer);
			l1c = false;
			l2c = false;
			l3c = false;
			l4c = false;
			l5c = false;
			init = false;
		}else{
			if(core4.Constants.compareString(currentState, "main menu") == 0){
				if(title == null && start == null && exit == null){
					title = new openfl.display.Sprite();
					start = new openfl.display.Sprite();
					exit = new openfl.display.Sprite();

					title.addChild(core4.Constants._A_MAINMENU_TITLE);
					start.addChild(core4.Constants._A_MAINMENU_STARTBUTTON);
					exit.addChild(core4.Constants._A_MAINMENU_EXITBUTTON);

					title.x = 20;
					title.y = 20;

					start.x = 110;
					start.y = 160;

					exit.x = 110;
					exit.y = 210;

					stage.addChild(title);
					stage.addChild(start);
					stage.addChild(exit);
				}
			}else if(core4.Constants.compareString(currentState, "level1") == 0){
				stage.removeEventListener(openfl.events.KeyboardEvent.KEY_DOWN,core4.Constants.keyDown);
				stage.removeEventListener(openfl.events.KeyboardEvent.KEY_UP,core4.Constants.keyUp);
				stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN,core4.Constants.keyDown);
				stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP,core4.Constants.keyUp);
				level = 1;
				if(l1c){
					roomUnlocked = true;
				}else{
					roomUnlocked = false;
				}
				if(title != null && start != null && exit != null){
					stage.removeChild(title);
					stage.removeChild(start);
					stage.removeChild(exit);
					title = null;
					start = null;
					exit = null;
				}
				if(!l1c && core4.Constants._E_HERO == null){
					core4.Constants._E_HERO = new core4.entity.hero.Hero();
					core4.Constants._E_HERO._moveTo(5, 160);

					w1 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					w2 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					w3 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));

					w1.setLocation(new openfl.geom.Point(250, 50));
					w2.setLocation(new openfl.geom.Point(250, 100));
					w3.setLocation(new openfl.geom.Point(250, 150));
				}
				if((w1 == null || w1.getHealth() <= 0) && (w2 == null || w2.getHealth() <= 0) && (w3 == null || w3.getHealth() <= 0)){
					roomUnlocked = true;
					w1 = null;
					w2 = null;
					w3 = null;
					l1c = true;
				}
			}else if(core4.Constants.compareString(currentState, "level2") == 0){
				level = 2;
				if(l2c){
					roomUnlocked = true;
				}else{
					roomUnlocked = false;
				}
				if(!l2c && c1 == null && c2 == null && c3 == null && c4 == null && !roomUnlocked){
					c1 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					c2 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					c3 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					c4 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					c1.setLocation(new openfl.geom.Point(200, 50));
					c2.setLocation(new openfl.geom.Point(200, 100));
					c3.setLocation(new openfl.geom.Point(200, 150));
					c4.setLocation(new openfl.geom.Point(200, 200));
				}
				if((c1 == null || c1.getHealth() <= 0) && (c2 == null || c2.getHealth() <= 0) && (c3 == null || c3.getHealth() <= 0) && (c4 == null || c4.getHealth() <= 0)){
					roomUnlocked = true;
					c1 = null;
					c2 = null;
					c3 = null;
					c4 = null;
					l2c = true;
				}
			}else if(core4.Constants.compareString(currentState, "level3") == 0){
				level = 3;
				if(l3c){
					roomUnlocked = true;
				}else{
					roomUnlocked = false;
				}
				if(!l3c && b1 == null && !roomUnlocked){
					b1 = new core4.entity.npc.NPC("Grizzly Bear", "Boss", false, false, true, true, false, true, 200, 1, 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")));
					b1.setHealth(500);
					b1.setAttackDamage(50);
					b1.setLocation(new openfl.geom.Point(200, 160));				
				}
				if(b1 == null || b1.getHealth()<= 0){
					roomUnlocked = true;
					b1 = null;
					l3c = true;
				}
			}else if(core4.Constants.compareString(currentState, "level4") == 0){
				level = 4;
				if(l4c){
					roomUnlocked = true;
				}else{
					roomUnlocked = false;
				}
				if(!l4c && b2 == null && b3 == null && !roomUnlocked){
					b2 = new core4.entity.npc.NPC("Grizzly Bear", "Boss", false, false, true, true, false, true, 200, 1, 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")));
					b3 = new core4.entity.npc.NPC("Grizzly Bear", "Boss", false, false, true, true, false, true, 200, 1, 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")));
					b2.setHealth(500);
					b2.setAttackDamage(75);
					b2.setLocation(new openfl.geom.Point(200, 100));
					b3.setHealth(500);
					b3.setAttackDamage(75);
					b3.setLocation(new openfl.geom.Point(200, 200));
				}
				if((b2 == null || b2.getHealth() <=0) && (b3 == null || b3.getHealth()<= 0)){
					roomUnlocked = true;
					b2 = null;
					b3 = null;
					l4c = true;
				}
			}else if(core4.Constants.compareString(currentState, "level5") == 0){
				level = 5;
				if(l5c){
					roomUnlocked = true;
				}else{
					roomUnlocked = false;
				}
				if(!l5c && w4 == null && w5 == null && w6 == null && b4 == null && !roomUnlocked){
					w4 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					w5 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
					    new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					w6 = new core4.entity.npc.NPC(true, "Witch", "Normal", false, false, true, true, false, true, 200, 1,
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png")),
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png")));
					b4 = new core4.entity.npc.NPC("Grizzly Bear", "Boss", false, false, true, true, false, true, 200, 1, 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearL.png")), 
						new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/BearR.png")));
					b4.setHealth(500);
					b4.setAttackDamage(100);
					b4.setLocation(new openfl.geom.Point(175, 160));
					w4.setLocation(new openfl.geom.Point(200, 130));
					w5.setLocation(new openfl.geom.Point(200, 160));
					w6.setLocation(new openfl.geom.Point(200, 190));
				}
				if((b4 == null || b4.getHealth() <= 0) 
					&& (w4 == null || w4.getHealth() <= 0) 
					&& (w5 == null || w5.getHealth() <= 0) 
					&& (w6 == null || w6.getHealth() <= 0)){
					roomUnlocked = true;

					b4 = null;
					w4 = null;
					w5 = null;
					w6 = null;
					l5c = true;
					if(treasureChest == null){
						treasureChest = new openfl.display.Sprite();
						treasureChest.addChild(new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/small.png")));
						treasureChest.x = 160;
						treasureChest.y = 160;
						stage.addChild(treasureChest);
					}
				}
				if(core4.Constants._E_HERO.getSpriteX() <= 170 
					&& core4.Constants._E_HERO.getSpriteX() >= 150 
					&& core4.Constants._E_HERO.getSpriteY() <= 170 
					&& core4.Constants._E_HERO.getSpriteY() >= 150 && treasureChest != null && card == null){
					card = new core4.item.Item("5 % Health", true, "CARD", core4.Constants._A_C_BOOST_HEALTH5_POSITIVE, 8, ["HEALTH", 5]);
					card._addToStage();
					card.setLocation(new openfl.geom.Point((160 - card.getBMD().width/2), (160 - card.getBMD().height/2)));
					treasureChest.removeChildren();
					stage.removeChild(treasureChest);
					treasureChest = null;
				}
			}else if(core4.Constants.compareString(currentState, "game over") == 0){
				Sys.exit(1);
			}else if(core4.Constants.compareString(currentState, "end game") == 0){
				Sys.exit(1);
			}
			if(core4.Constants._E_HERO != null && core4.Constants._E_HERO.getInventory() != null && core4.Constants._E_HERO.getInventory().getInventory() != null && core4.Constants.compareString(currentState, "main menu") != 0){
				for(x in 0 ... core4.Constants._E_HERO.getInventory().getInventory().length){
					if(core4.Constants._E_HERO.getInventory().getInventory()[x] == card){
						currentState = "end game";
					}
				}
			}
			if(core4.Constants._E_HERO != null && core4.Constants._E_HERO.getHealth() <= 0 && core4.Constants.compareString(currentState, "main menu") != 0){
				currentState = "game over";
			}
			if(roomUnlocked){
				var s:String = getNextLevel();
				if(core4.Constants.compareString(s, "right") == 0 || core4.Constants.compareString(s, "left") == 0){
					if(core4.Constants.compareString(currentState, "level1") == 0){
						core4.Constants._D_MAP.change(core4.Constants._A_M2);
					}else if(core4.Constants.compareString(currentState, "level2") == 0){
						core4.Constants._D_MAP.change(core4.Constants._A_M3);
					}else if(core4.Constants.compareString(currentState, "level3") == 0){
						core4.Constants._D_MAP.change(core4.Constants._A_M4);
					}else if(core4.Constants.compareString(currentState, "level4") == 0){
						core4.Constants._D_MAP.change(core4.Constants._A_M5);
					}else if(core4.Constants.compareString(currentState, "level5") == 0){
						core4.Constants._D_MAP.change(core4.Constants._A_M6);
					}
					if(core4.Constants.compareString(s, "right") == 0){
						core4.Constants._E_HERO._moveTo(64, Std.int(core4.Constants._E_HERO.getSpriteY()));
					}
					if(core4.Constants.compareString(s, "left") == 0){
						core4.Constants._E_HERO._moveTo(250, Std.int(core4.Constants._E_HERO.getSpriteY()));
					}
				}else if(core4.Constants.compareString(s, "false") == 0){
					trace("error false");
				}else if(core4.Constants.compareString(s, "hero null") == 0){
					trace("hero null in get next level");
				}
			}
		}
		core4.Constants.updateAll();
	}
	/*
	public function update(e:openfl.events.Event){
		core4.Constants.onEnterFrame();
		if(currentState != null){
			trace(currentState.getStateName());
		}
		if(!init){
			if(){
				
				
					
				}
				if(core4.Constants._E_HERO == null){
					core4.Constants._E_HERO = new core4.entity.hero.Hero();
					core4.Constants._E_HERO._moveTo(5, 160);
				}else
				if(currentState.enemiesAlive() == 0 && !roomUnlocked){
					unlockRoom();
				}
				if(roomUnlocked){
					var state = getNextLevel();
					if(state != null){
						state.load();
						currentState = state;
						core4.Constants._E_HERO._moveTo(10, Std.int(core4.Constants._E_HERO.getSpriteY()));
						roomUnlocked = !roomUnlocked;
					}

				}
			}else if(core4.Constants.compareString(currentState.getStateName(), "main menu") == 0){
				
			}
			if(core4.Constants._E_NPC_BOSS_BEAR == null && core4.Constants._E_NPC_NORMAL_WITCH1.getHealth() <= 0 && core4.Constants._E_NPC_NORMAL_WITCH2.getHealth() <= 0 && core4.Constants._E_NPC_NORMAL_WITCH3.getHealth() <= 0){
				core4.Constants._E_NPC_BOSS_BEAR = new core4.entity.npc.NPC("Grizzly Bear", "Boss", false, false, false, true, false, true, 200, 1, new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/up.png")), new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/down.png")), new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/left.png")), new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/right.png")));
				core4.Constants._E_NPC_BOSS_BEAR.setHealth(1000);
				core4.Constants._E_NPC_BOSS_BEAR._moveTo(300, 300);
			}
			core4.Constants.updateAll();
			//if(core4.Constants._E_NPC_BOSS_BEAR != null && core4.Constants._E_NPC_BOSS_BEAR.getHealth() > 0)trace("Boss Health: " + core4.Constants._E_NPC_BOSS_BEAR.getHealth());
		}else{
			if(currentState == null){
				core4.Constants._STATE_0.load();
				currentState = core4.Constants._STATE_0;
			}
			//Johan did this
			


			core4.Constants._D_MAP = new core4.map.Map(core4.Constants._A_M1);
			//
			//
			//fillMapWithItems();
			init = false;
		}
	} */
	public function getNotificationManager():core4.notification.NotificationManager{
		return notificationManager;
	}
	public function gameOver(s:String):Void{
		//
	}
	public function _readyToUpdate():Bool{
		return init;
	}
	public function fillMapWithItem():Void{
		//
	}
	public function getNextLevel():String{
		if(core4.Constants._E_HERO != null){
			var levelStateID = 0;
			if(core4.Constants.entityIsTouchingEdge("RIGHT", core4.Constants._E_HERO)){
				levelStateID = level + 1;
				if(levelStateID <= 5){
					currentState = "level"+levelStateID;
					return "right";
				}
			}else if(core4.Constants.entityIsTouchingEdge("LEFT", core4.Constants._E_HERO)){
				levelStateID = level - 1;
				if(levelStateID >= 1){
					currentState = "level"+levelStateID;
					return "left";
				}
			}else{
				return "unknown";
			}
		}else{
			return "hero null";
		}
		return "false";
	}
	public function loadAssets():Void{
			core4.Constants._A_C_BACK = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/card/back.png"));
				//Map
			core4.Constants._A_M1 = openfl.Assets.getBitmapData("assets/map/map1.png");
			core4.Constants._A_M2 = openfl.Assets.getBitmapData("assets/map/map2.png");
			core4.Constants._A_M3 = openfl.Assets.getBitmapData("assets/map/map3.png");
			core4.Constants._A_M4 = openfl.Assets.getBitmapData("assets/map/map4.png");
			core4.Constants._A_M5 = openfl.Assets.getBitmapData("assets/map/map5.png");
			core4.Constants._A_M6 = openfl.Assets.getBitmapData("assets/map/map6.png");
					//Hero
			core4.Constants._A_HERO_DOWN = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/down.png"));
			core4.Constants._A_HERO_UP = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/up.png"));
			core4.Constants._A_HERO_LEFT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/left.png"));
			core4.Constants._A_HERO_RIGHT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/right.png"));
					//NPC
						//Boss
							//Bear
			core4.Constants._A_NPC_BOSS_BEAR_DOWN = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/down.png"));
			core4.Constants._A_NPC_BOSS_BEAR_UP = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/up.png"));
			core4.Constants._A_NPC_BOSS_BEAR_LEFT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/left.png"));
			core4.Constants._A_NPC_BOSS_BEAR_RIGHT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/boss/bear/right.png"));
						//Normal
							//Witch
			core4.Constants._A_NPC_NORMAL_WITCH_DOWN = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/down.png"));
			core4.Constants._A_NPC_NORMAL_WITCH_UP = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/up.png"));
			core4.Constants._A_NPC_NORMAL_WITCH_LEFT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/left.png"));
			core4.Constants._A_NPC_NORMAL_WITCH_RIGHT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/npc/normal/witch/right.png"));
						//Elite
							//Witch
							/*


							*/
					//Armor
						//Cloth
							//Item
			core4.Constants._A_ARMOR_CLOTH_LEGS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/legs.png"));
			core4.Constants._A_ARMOR_CLOTH_BOOTS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/boots.png"));
			core4.Constants._A_ARMOR_CLOTH_CHEST = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/chest.png"));
			core4.Constants._A_ARMOR_CLOTH_HANDS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/hands.png"));
			core4.Constants._A_ARMOR_CLOTH_HAT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/hat.png"));
							//Card
			core4.Constants._A_C_ARMOR_CLOTH_LEGS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/card/legs.png"));
			core4.Constants._A_C_ARMOR_CLOTH_BOOTS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/card/boots.png"));
			core4.Constants._A_C_ARMOR_CLOTH_CHEST = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/card/chest.png"));
			core4.Constants._A_C_ARMOR_CLOTH_HANDS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/card/hands.png"));
			core4.Constants._A_C_ARMOR_CLOTH_HAT = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/armor/cloth/card/hat.png"));
					//Boost
						//Item
			core4.Constants._A_BOOST_HEALTH5_POSITIVE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/boost/healthbuff.png"));
			core4.Constants._A_BOOST_HEALTH5_NEGATIVE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/boost/healthdebuff.png"));
						//Card
			core4.Constants._A_C_BOOST_HEALTH5_POSITIVE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/boost/card/healthbuff.png"));
			core4.Constants._A_C_BOOST_HEALTH5_NEGATIVE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/boost/card/healthdebuff.png"));
					//Weapon
						//Item
			core4.Constants._A_WEAPON_GUN = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/weapon/gun/gun.png"));
			core4.Constants._A_WEAPON_BOW = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/weapon/bow/bow.png"));
						//Card
			core4.Constants._A_C_WEAPON_GUN = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/weapon/gun/card/gun.png"));
			core4.Constants._A_C_WEAPON_BOW = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/weapon/bow/card/bow.png"));
					//Projectile
						//Item
			core4.Constants._A_PROJECTILE_ARROW = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/arrow/arrow.png"));
			core4.Constants._A_PROJECTILE_BULLET = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/bullet/bullet.png"));
						//Card
			core4.Constants._A_C_PROJECTILE_ARROW = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/arrow/card/arrow.png"));
			core4.Constants._A_C_PROJECTILE_BULLET = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/bullet/card/bullet.png"));
					//Treasure Chest
			core4.Constants._A_CONTAINER_TREASURECHEST_SMALL = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/small.png"));
			core4.Constants._A_CONTAINER_TREASURECHEST_MEDIUM = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/medium.png"));
			core4.Constants._A_CONTAINER_TREASURECHEST_LARGE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/large.png"));
			core4.Constants._A_CONTAINER_TREASURECHEST_XL = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/XL.png"));
			core4.Constants._A_CONTAINER_TREASURECHEST_BOSS = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/boss.png"));
					//Visual
			core4.Constants._A_VISUAL_ERROR = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/error.png"));
			core4.Constants._A_VISUAL_RIP = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/rip.png"));
			core4.Constants._A_VISUAL_WARNING = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/warning.png"));
			core4.Constants._A_VISUAL_INSUFFICIENTENERGY =  new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/insufficientenergy.png"));
			core4.Constants._A_VISUAL_HEALTH25 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/healthlow.png"));
			core4.Constants._A_VISUAL_HEALTH0 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/healthdepleted.png"));
			core4.Constants._A_VISUAL_OUTOFAMMO = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/outofammo.png"));

			core4.Constants._I_ARMOR_CLOTH_LEGS = core4.Constants._L_ITEM.push(new core4.item.Item("Cloth Pants", true, "ARMOR_LEGS", core4.Constants._A_ARMOR_CLOTH_LEGS, core4.Constants._LEGSLOT, ["ARMOR", 3]));
			core4.Constants._I_ARMOR_CLOTH_BOOTS = core4.Constants._L_ITEM.push(new core4.item.Item("Cloth Boots", true, "ARMOR_BOOTS",core4.Constants._A_ARMOR_CLOTH_BOOTS, core4.Constants._BOOTSLOT, ["ARMOR", 2]));
			core4.Constants._I_ARMOR_CLOTH_CHEST = core4.Constants._L_ITEM.push(new core4.item.Item("Cloth Shirt", true, "ARMOR_CHEST", core4.Constants._A_ARMOR_CLOTH_CHEST, core4.Constants._CHESTSLOT, ["ARMOR", 4]));
			core4.Constants._I_ARMOR_CLOTH_HANDS = core4.Constants._L_ITEM.push(new core4.item.Item("Cloth Gloves", true, "ARMOR_HANDS", core4.Constants._A_ARMOR_CLOTH_HANDS, core4.Constants._HANDSLOT, ["ARMOR", 2]));
			core4.Constants._I_ARMOR_CLOTH_HAT = core4.Constants._L_ITEM.push(new core4.item.Item("Cloth Hat", true, "ARMOR_HAT", core4.Constants._A_ARMOR_CLOTH_HAT, core4.Constants._HEADSLOT, ["ARMOR", 1]));
			core4.Constants._I_WEAPON_GUN = core4.Constants._L_ITEM.push(new core4.item.Item("Gun", true, "WEAPON", core4.Constants._A_WEAPON_GUN, core4.Constants._WEAPONSLOT, ["ATTACKDAMAGE", 10, "ATTACKSPEEDPRECENTAGE", 100]));
			core4.Constants._I_WEAPON_BOW = core4.Constants._L_ITEM.push(new core4.item.Item("Bow", true, "WEAPON", core4.Constants._A_WEAPON_BOW, core4.Constants._WEAPONSLOT, ["ATTACKDAMAGE", 5, "ATTACKSPEEDPERCENTAGE", 50]));
			core4.Constants._I_PROJECTILE_ARROW = core4.Constants._L_ITEM.push(new core4.item.Item("Arrow", true, "AMMO", core4.Constants._A_PROJECTILE_ARROW, core4.Constants._AMMOSLOT, ["ATTACKDAMAGE", 3]));
			core4.Constants._I_PROJECTILE_BULLET = core4.Constants._L_ITEM.push(new core4.item.Item("Bullet", true, "AMMO", core4.Constants._A_PROJECTILE_BULLET, core4.Constants._AMMOSLOT, ["ATTACKDAMAGE", 2]));
			core4.Constants._I_CARD = core4.Constants._L_ITEM.push(new core4.item.Item("5 % Health", true, "CARD", core4.Constants._A_C_BOOST_HEALTH5_POSITIVE, 8, ["HEALTH", 5]));
			
			core4.Constants._INVENTORY_HERO = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_GUN-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_BULLET-1], 50]);
			core4.Constants._INVENTORY_BOSS_BEAR = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);
			core4.Constants._INVENTORY_ELITE_WITCH = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);
			core4.Constants._INVENTORY_BOSS_QUEEN = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);

			core4.Constants._A_MAINMENU_TITLE = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/mainmenu/text/title.png"));
			core4.Constants._A_MAINMENU_STARTBUTTON = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/mainmenu/button/start.png"));
			core4.Constants._A_MAINMENU_EXITBUTTON = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/mainmenu/button/exit.png"));

			core4.Constants._STATE_0 = new core4.state.State(0, false, [this, "main menu", "first state", new core4.map.Map(core4.Constants._A_M1)]);
			core4.Constants._STATE_1 = new core4.state.State(1, false, [this, "level 1", "first level", new core4.map.Map(core4.Constants._A_M2)]);				
			core4.Constants._STATE_2 = new core4.state.State(2, false, [this, "level 2", "second level", new core4.map.Map(core4.Constants._A_M3)]);
			core4.Constants._STATE_3 = new core4.state.State(3, false, [this, "level 3", "second level", new core4.map.Map(core4.Constants._A_M4)]);
			core4.Constants._STATE_4 = new core4.state.State(4, false, [this, "level 4", "second level", new core4.map.Map(core4.Constants._A_M5)]);
			core4.Constants._STATE_5 = new core4.state.State(5, false, [this, "level 5", "second level", new core4.map.Map(core4.Constants._A_M6)]);

			core4.Constants._STATE_LOADING = new core4.state.State(-1, false, [this, "loading screen", "use when loading lots of data"]);
			core4.Constants._STATE_GAMEOVER = new core4.state.State(-2, false, [this, "game over", "you lost, gg no re"]);
	}
	public function dumpState():String{
		return currentState;
	}
	public function setCurrentState(s:String){
		currentState = s;
	}
	public function unlockRoom(){
		roomUnlocked = true;
	}
	public function lockRoom(){
		roomUnlocked = false;
	}
	public function roomlockstate():Bool{
		return roomUnlocked;
	}
	public function getMainMenuStartButton():openfl.display.Sprite{
		return start;
	}
	public function getMainMenuExitButton():openfl.display.Sprite{
		return exit;
	}
}