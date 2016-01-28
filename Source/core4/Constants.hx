package core4;

class Constants {
	//Default
	public static var _GAME : Main;
	public static var _PICKUPDISTANCE:Int = 64;
		//Lists
	public static var _L_ENTITY:Array<core4.entity.Entity> = new Array();
	public static var _L_ITEM:Array<core4.item.Item> = new Array();
	public static var _L_WORLD_ITEMS_ON_STAGE:Array<core4.item.Item> = new Array();
	public static var _L_STATES:Array<core4.state.State> = new Array();
		//Game States
	public static var _STATE_0:core4.state.State = null;
	public static var _STATE_1:core4.state.State = null;
	public static var _STATE_2:core4.state.State = null;
	public static var _STATE_3:core4.state.State = null;
	public static var _STATE_4:core4.state.State = null;
	public static var _STATE_5:core4.state.State = null;
	public static var _STATE_LOADING:core4.state.State = null;
	public static var _STATE_GAMEOVER:core4.state.State = null;
		//MainMenu
	public static var _A_MAINMENU_TITLE:openfl.display.Bitmap = null;
	public static var _A_MAINMENU_STARTBUTTON:openfl.display.Bitmap = null;
	public static var _A_MAINMENU_EXITBUTTON:openfl.display.Bitmap = null;
		//Entity
			//NPC
	public static var _E_NPC_BOSS_BEAR:core4.entity.npc.NPC = null;
	public static var _E_NPC_NORMAL_WITCH1:core4.entity.npc.NPC = null;
	public static var _E_NPC_NORMAL_WITCH2:core4.entity.npc.NPC = null;
	public static var _E_NPC_NORMAL_WITCH3:core4.entity.npc.NPC = null;
			//Hero
	public static var _E_HERO:core4.entity.hero.Hero = null;
			//Hero Properties
	public static var _E_HERO_MOVEMENTSPEED:Float = 10;
	public static var _E_HERO_ACCELERATION:Float = .5;
	public static var _E_HERO_ATTACKDAMAGE:Float = 10;
	public static var _E_HERO_ATTACKSPEED:Float;
	public static var _E_HERO_DEFENSE:Float = 0;
	public static var _E_HERO_ENERGY:Float = 100;
	public static var _E_HERO_EXPERIENCEMAX:Float = 100;
	public static var _E_HERO_HEALTHMAX:Float = 100;

		//Map
	public static var _D_MAP:core4.map.Map = null;
		//World
	public static var _D_WORLD_SIZE:Int = 640;
		//Grid
	public static var _D_GRID_SIZE:Int = 64;
		//Game
	public static var _D_GAME_VERSION:String = "0.3.3";
		//UID
	public static var _D_UID_CHARS:String =  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}";
	public static var _D_UID_NUM:String = "0123456789";
	//Asset
		//String
	public static var _A_STRING_MOVEMENTSPEED:String = "MOVEMENTSPEED";
	public static var _A_STRING_ATTACKDAMAGE:String = "ATTACKDAMAGE";
	public static var _A_STRING_ATTACKSPEED:String  = "ATTACKSPEEDPERCENTAGE";
	public static var _A_STRING_DEFENSE:String = "DEFENSE";
	public static var _A_STRING_ENERGY:String = "ENERGY";
	public static var _A_STRING_EXPERIENCE:String = "EXPERIENCE";
	public static var _A_STRING_HEALTH:String = "HEALTH";
	public static var _A_STRING_PLAYERNAME:String = "NewPlayer";
		//BitmapData
			//Card
	public static var _A_C_BACK:openfl.display.Bitmap;
			//Map
	public static var _A_M1:openfl.display.BitmapData;
	public static var _A_M2:openfl.display.BitmapData;
	public static var _A_M3:openfl.display.BitmapData;
	public static var _A_M4:openfl.display.BitmapData;
	public static var _A_M5:openfl.display.BitmapData;
	public static var _A_M6:openfl.display.BitmapData;

			//Hero
	public static var _A_HERO_DOWN:openfl.display.Bitmap;
	public static var _A_HERO_UP:openfl.display.Bitmap;
	public static var _A_HERO_LEFT:openfl.display.Bitmap;
	public static var _A_HERO_RIGHT:openfl.display.Bitmap;
			//NPC
				//Boss
					//Bear
	public static var _A_NPC_BOSS_BEAR_DOWN:openfl.display.Bitmap;
	public static var _A_NPC_BOSS_BEAR_UP:openfl.display.Bitmap;
	public static var _A_NPC_BOSS_BEAR_LEFT:openfl.display.Bitmap;
	public static var _A_NPC_BOSS_BEAR_RIGHT:openfl.display.Bitmap;
				//Normal
					//Witch
	public static var _A_NPC_NORMAL_WITCH_DOWN:openfl.display.Bitmap;
	public static var _A_NPC_NORMAL_WITCH_UP:openfl.display.Bitmap;
	public static var _A_NPC_NORMAL_WITCH_LEFT:openfl.display.Bitmap;
	public static var _A_NPC_NORMAL_WITCH_RIGHT:openfl.display.Bitmap;
				//Elite
					//Witch
					/*
				//

					*/
			//Armor
				//Cloth
					//Item
	public static var _A_ARMOR_CLOTH_LEGS:openfl.display.Bitmap;
	public static var _A_ARMOR_CLOTH_BOOTS:openfl.display.Bitmap;
	public static var _A_ARMOR_CLOTH_CHEST:openfl.display.Bitmap;
	public static var _A_ARMOR_CLOTH_HANDS:openfl.display.Bitmap;
	public static var _A_ARMOR_CLOTH_HAT:openfl.display.Bitmap;
					//Card
	public static var _A_C_ARMOR_CLOTH_LEGS:openfl.display.Bitmap;
	public static var _A_C_ARMOR_CLOTH_BOOTS:openfl.display.Bitmap;
	public static var _A_C_ARMOR_CLOTH_CHEST:openfl.display.Bitmap;
	public static var _A_C_ARMOR_CLOTH_HANDS:openfl.display.Bitmap;
	public static var _A_C_ARMOR_CLOTH_HAT:openfl.display.Bitmap;
			//Boost
				//Item
	public static var _A_BOOST_HEALTH5_POSITIVE:openfl.display.Bitmap;
	public static var _A_BOOST_HEALTH5_NEGATIVE:openfl.display.Bitmap;
				//Card
	public static var _A_C_BOOST_HEALTH5_POSITIVE:openfl.display.Bitmap;
	public static var _A_C_BOOST_HEALTH5_NEGATIVE:openfl.display.Bitmap;
			//Weapon
				//Item
	public static var _A_WEAPON_GUN:openfl.display.Bitmap;
	public static var _A_WEAPON_BOW:openfl.display.Bitmap;
				//Card
	public static var _A_C_WEAPON_GUN:openfl.display.Bitmap;
	public static var _A_C_WEAPON_BOW:openfl.display.Bitmap;
			//Projectile
				//Item
	public static var _A_PROJECTILE_ARROW:openfl.display.Bitmap;
	public static var _A_PROJECTILE_BULLET:openfl.display.Bitmap;
				//Card
	public static var _A_C_PROJECTILE_ARROW:openfl.display.Bitmap;
	public static var _A_C_PROJECTILE_BULLET:openfl.display.Bitmap;
			//Treasure Chest
	public static var _A_CONTAINER_TREASURECHEST_SMALL:openfl.display.Bitmap;
	public static var _A_CONTAINER_TREASURECHEST_MEDIUM:openfl.display.Bitmap;
	public static var _A_CONTAINER_TREASURECHEST_LARGE:openfl.display.Bitmap;
	public static var _A_CONTAINER_TREASURECHEST_XL:openfl.display.Bitmap;
	public static var _A_CONTAINER_TREASURECHEST_BOSS:openfl.display.Bitmap;
			//Visual
	public static var _A_VISUAL_ERROR:openfl.display.Bitmap;
	public static var _A_VISUAL_RIP:openfl.display.Bitmap;
	public static var _A_VISUAL_WARNING:openfl.display.Bitmap;
	public static var _A_VISUAL_INSUFFICIENTENERGY:openfl.display.Bitmap;
	public static var _A_VISUAL_HEALTH25:openfl.display.Bitmap;
	public static var _A_VISUAL_HEALTH0:openfl.display.Bitmap;
	public static var _A_VISUAL_OUTOFAMMO:openfl.display.Bitmap;


	public static var _I_ARMOR_CLOTH_LEGS:Int;
	public static var _I_ARMOR_CLOTH_BOOTS:Int;
	public static var _I_ARMOR_CLOTH_CHEST:Int;
	public static var _I_ARMOR_CLOTH_HANDS:Int;
	public static var _I_ARMOR_CLOTH_HAT:Int;
	public static var _I_WEAPON_GUN:Int;
	public static var _I_WEAPON_BOW:Int;
	public static var _I_PROJECTILE_ARROW:Int;
	public static var _I_PROJECTILE_BULLET:Int;
	public static var _I_CARD:Int;

	public static var _INVENTORY_HERO:core4.inventory.Inventory;
	public static var _INVENTORY_BOSS_BEAR:core4.inventory.Inventory;
	public static var _INVENTORY_ELITE_WITCH:core4.inventory.Inventory;
	public static var _INVENTORY_BOSS_QUEEN:core4.inventory.Inventory;

	public static var _WEAPONSLOT:Int = 0;
	public static var _AMMOSLOT:Int = 1;
	public static var _HEADSLOT:Int = 2;
	public static var _CHESTSLOT:Int = 3;
	public static var _LEGSLOT:Int = 4;
	public static var _HANDSLOT:Int = 5;
	public static var _HATSLOT:Int = 6;
	public static var _BOOTSLOT:Int = 7;

		//Keyboard
	public static var _D_KEYBOARD_KEYCODES:Array<Bool> = new Array();
	public static var _D_KEYBOARD_TIMER:Int = 0;
	//Function
	//compareString: compare two strings to check if they are the same.
	public static function compareString(s0:String, s1:String):Int {
	    var cc0, cc1;
	    for (i in 0...cast Math.min(s0.length,s1.length)) {
	        cc0 = s0.charCodeAt(i);
	        cc1 = s1.charCodeAt(i);
	        if (cc0 != cc1) return cc0 - cc1;
	    }
	    return s0.length - s1.length;
	}
	//d2p: calculate the distance between two points
	public static function d2p(p1:openfl.geom.Point, p2:openfl.geom.Point):Int{
		return Std.int(Math.sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y)));
	}
	//randomChar: generate a random character id
	public static function randomChar(?size:Int = 32):String{
		// if the size passed as a paramater is not defined the default size will be 32 characters.
		if(size == null) size = 32;
		// define a variable to hold the amount of UID_CHARS.
		var nchars = _D_UID_CHARS.length;
		// StringBuf is a String Bufferer
		var uid = new StringBuf();
		// for loop to loop from 0 to the size of the ID we are generating, essentially choosing a random CHAR from UID_CHAR, and doing it repeatedly
		for (i in 0 ... size){
			uid.addChar(_D_UID_CHARS.charCodeAt(Std.random(nchars)));
		}
		// return the StringBufferer as a String.
		return uid.toString();
	}
	//generate:generate a random integer
	public static function generate(?size:Int = 8):Int{
		var nchars = _D_UID_NUM.length;
		var uid = new StringBuf();
		for (i in 0 ... size){
			uid.addChar(_D_UID_NUM.charCodeAt(Std.random(nchars)));
		}
		return Std.parseInt(uid.toString());
	}

	public static function onEnterFrame():Void {
		_D_KEYBOARD_TIMER++;
	}
	public static function mouseDown(e:openfl.events.MouseEvent){
		if(Main._main()._engine() != null){
			if(Main._main()._engine().dumpState() == "main menu"){
				if(e.target == Main._main()._engine().getMainMenuStartButton()){
					core4.Constants._D_MAP.change(core4.Constants._A_M2);
					Main._main()._engine().setCurrentState("level1");
				}else if(e.target == Main._main()._engine().getMainMenuExitButton()){
					Sys.exit(1);
				}
		  //}else if(){
			}else{
				Main._main()._engine()._stage().removeEventListener(openfl.events.MouseEvent.MOUSE_DOWN, mouseDown);
				Main._main()._engine()._stage().removeEventListener(openfl.events.MouseEvent.MOUSE_UP, mouseUp);
			}
		}
	}
	public static function mouseUp(e:openfl.events.MouseEvent){
	}
	public static function keyDown(e:openfl.events.KeyboardEvent){
		if(Main._main()._debug()){
			trace("Key Down : "+e.keyCode);
		}
		_D_KEYBOARD_KEYCODES[e.keyCode] = true;
	}
	public static function keyUp(e:openfl.events.KeyboardEvent){
		if(Main._main()._debug()){
			trace("Key Up : "+e.keyCode);
		}
		_D_KEYBOARD_KEYCODES[e.keyCode] = false;
	}
	public static function getKeyState(x:Int):Bool{
		return _D_KEYBOARD_KEYCODES[x];
	}
	public static function getKTime():Int{
		return _D_KEYBOARD_TIMER;
	}
	public static function getCachedInventory(entityName:String):core4.inventory.Inventory{
		if(compareString(entityName, "HERO") == 0){
			return _INVENTORY_HERO;
		}else if(compareString(entityName, "ELITE_WITCH") == 0){
			return _INVENTORY_ELITE_WITCH;
		}else if(compareString(entityName, "BOSS_QUEEN") == 0){
			return _INVENTORY_BOSS_QUEEN;
		}else if(compareString(entityName, "BOSS_BEAR") == 0){
			return _INVENTORY_BOSS_BEAR;
		}
		return null;
	}
	public static function getNotificationBitmap(notificationName:String):openfl.display.Bitmap{
		if(compareString(notificationName, "ERROR") == 0){
			return _A_VISUAL_ERROR;
		}else if(compareString(notificationName, "RIP") == 0){
			return _A_VISUAL_RIP;
		}else if(compareString(notificationName, "WARNING") == 0){
			return _A_VISUAL_WARNING;
		}else if(compareString(notificationName, "INSUFFICIENTENERGY") == 0){
			return _A_VISUAL_INSUFFICIENTENERGY;
		}else if(compareString(notificationName, "HEALTHLOW") == 0){
			return _A_VISUAL_HEALTH25;
		}else if(compareString(notificationName, "HEALTHDEPLETED") == 0){
			return _A_VISUAL_HEALTH0;
		}else if(compareString(notificationName, "OUTOFAMMO") == 0){
			return _A_VISUAL_OUTOFAMMO;
		}
		return null;
	}
	public static function updateAll(){
		if(!Main._main()._engine()._readyToUpdate()){
			core4.Constants._D_MAP.update();
			if(_L_WORLD_ITEMS_ON_STAGE.length > 0){
				for(x in 0 ... _L_WORLD_ITEMS_ON_STAGE.length){
					if(_L_WORLD_ITEMS_ON_STAGE[x] != null){
						_L_WORLD_ITEMS_ON_STAGE[x].update();
					}

				}
			}
			if(_L_ENTITY.length > 0){
				for(x in 0 ... _L_ENTITY.length){
					if(_L_ENTITY[x] != null){
						_L_ENTITY[x].update();
					}

				}
			}
		}
	}
	public static function checkPreloadedInventories():Void{
		trace(_INVENTORY_HERO);
		trace(_INVENTORY_BOSS_BEAR);
		trace(_INVENTORY_ELITE_WITCH);
		trace(_INVENTORY_BOSS_QUEEN);
	}
	public static function entityIsTouchingEdge(side:String, entity:core4.entity.Entity):Bool{
		if(entity != null){
			entity._updateHitbox();
			if((compareString(side, "RIGHT") == 0) && (320 - entity.getHitboxTR().x <= 10)){
				return true;
			}else if((compareString(side, "LEFT") == 0) && (entity.getHitboxTL().x <= 10)){
				return true;
			}else if((compareString(side, "TOP") == 0) && (entity.getHitboxTL().y <= 10)){
				return true;
			}else if((compareString(side, "BOTTOM") == 0) && (320 - entity.getHitboxBL().y <= 10)){
				return true;
			}
		}
		return false;
	}

}