package core4;

class Constants {
	//Default
		//Lists
	public static var _L_ENTITY:Array<core4.entity.Entity> = new Array();
	public static var _L_ITEM:Array<core4.entity.Item>  = new Array();
	public static var _L_PROJECTILE:Array<core4.entity.Projectile>  = new Array();
		//Entity
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
	public static var _E_HERO_PICKUPDISTANCE:Int = 64;
		//Map
	public static var _D_MAP:core4.map.Map = null;
		//World
	public static var _D_WORLD_SIZE:Int = 640;
		//Grid
	public static var _D_GRID_SIZE:Int = 64;
		//Game
	public static var _D_GAME_VERSION:String = "0.3.3";
		//UID
	public static var _D_UID_CHARS =  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}";
	public static var _D_UID_NUM = "0123456789";
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
			//Map
	public static var _A_M1:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map1.png"));
	public static var _A_M2:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map2.png"));
	public static var _A_M3:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map3.png"));
	public static var _A_M4:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map4.png"));
	public static var _A_M5:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map5.png"));
	public static var _A_M6:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/map/map6.png"));
			//Entity
				//Hero
	public static var _A_ENTITY_HERO_DOWN:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/movement/down/down.png"));
	public static var _A_ENTITY_HERO_UP:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/movement/up/up.png"));
	public static var _A_ENTITY_HERO_LEFT:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/movement/left/left.png"));
	public static var _A_ENTITY_HERO_RIGHT:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/hero/movement/right/right.png"));
				//Card
					//Armor
						//Cloth
	public static var _A_ENTITY_CARD_ARMOR_CLOTH_LEGS:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/armor/cloth/legs.png"));
	public static var _A_ENTITY_CARD_ARMOR_CLOTH_BOOTS:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/armor/cloth/boots.png"));
	public static var _A_ENTITY_CARD_ARMOR_CLOTH_CHEST:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/armor/cloth/chest.png"));
	public static var _A_ENTITY_CARD_ARMOR_CLOTH_HANDS:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/armor/cloth/chest.png"));
	public static var _A_ENTITY_CARD_ARMOR_CLOTH_HAT:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/armor/cloth/hat.png"));
					//Weapon
	public static var _A_ENTITY_CARD_WEAPON_GUN:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/weapon/gun.png"));
	public static var _A_ENTITY_CARD_WEAPON_BOW:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/entity/card/weapon/bow.png"));
			//Projectile
	public static var _A_PROJECTILE_ARROW:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/arrow.png"));
	public static var _A_PROJECTILE_BULLET:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/projectile/bullet.png"));
			//Treasure Chest
	public static var _A_CONTAINER_TREASURECHEST_SMALL:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/small.png"));
	public static var _A_CONTAINER_TREASURECHEST_MEDIUM:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/medium.png"));
	public static var _A_CONTAINER_TREASURECHEST_LARGE:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/large.png"));
	public static var _A_CONTAINER_TREASURECHEST_XL:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/XL.png"));
	public static var _A_CONTAINER_TREASURECHEST_BOSS:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/container/treasurechest/boss.png"));
			//Visual
	public static var _A_VISUAL_ERROR:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/error.png"));
	public static var _A_VISUAL_RIP:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/rip.png"));
	public static var _A_VISUAL_WARNING:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/warning.png"));
	public static var _A_VISUAL_INSUFFICIENTENERGY:openfl.display.Bitmap =  new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/insufficientenergy.png"));
	public static var _A_VISUAL_HEALTH25:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/healthlow.png"));
	public static var _A_VISUAL_HEALTH0:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/healthdepleted.png"));
	public static var _A_VISUAL_OUTOFAMMO:openfl.display.Bitmap = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/visual/outofammo.png"));


	public static var _I_ARMOR_CLOTH_LEGS:Int = _L_ITEM.push(new core4.Item("Cloth Pants", true, "ARMOR_LEGS", "ARMOR", 3));
	public static var _I_ARMOR_CLOTH_BOOTS:Int = _L_ITEM.push(new core4.Item("Cloth Boots", true, "ARMOR_BOOTS","ARMOR", 2));
	public static var _I_ARMOR_CLOTH_CHEST:Int = _L_ITEM.push(new core4.Item("Cloth Shirt", true, "ARMOR_CHEST","ARMOR", 4));
	public static var _I_ARMOR_CLOTH_HANDS:Int = _L_ITEM.push(new core4.Item("Cloth Gloves", true, "ARMOR_HANDS","ARMOR", 2));
	public static var _I_ARMOR_CLOTH_HAT:Int = _L_ITEM.push(new core4.Item("Cloth Hat", true, "ARMOR_HAT","ARMOR", 1));
	public static var _I_WEAPON_GUN:Int = _L_ITEM.push(new core4.Item("Gun", true, "WEAPON", "ATTACKDAMAGE", 10, "ATTACKSPEEDPRECENTAGE", 100));
	public static var _I_WEAPON_BOW:Int = _L_ITEM.push(new core4.Item("Bow", true, "WEAPON", "ATTACKDAMAGE", 5, "ATTACKSPEEDPERCENTAGE", 50));
	public static var _I_PROJECTILE_ARROW:Int = _L_ITEM.push(new core4.Item("Arrow", true, "AMMO", "ATTACKDAMAGE", 3));
	public static var _I_PROJECTILE_BULLET:Int = _L_ITEM.push(new core4.Item("Bullet", true, "AMMO", "ATTACKDAMAGE", 2));

	public static var _INVENTORY_HERO = new core4.Inventory(_L_ITEM[0], 1, _L_ITEM[1], 1,_L_ITEM[2], 1,_L_ITEM[3], 1,_L_ITEM[4], 1,_L_ITEM[5], 1,_L_ITEM[7], 50);
	public static var _INVENTORY_WITCH = new core4.Inventory();
	public static var _INVENTORY_QUEEN = new core4.Inventory();

	public static var _WEAPONSLOT = 0;
	public static var _AMMOSLOT = 1;
	public static var _HEADSLOT = 2;
	public static var _CHESTSLOT = 3;
	public static var _LEGSLOT = 4;
	public static var _HANDSLOT = 5;
	public static var _HATSLOT = 6;

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
		var nchars = UID_CHARS.length;
		// StringBuf is a String Bufferer
		var uid = new StringBuf();
		// for loop to loop from 0 to the size of the ID we are generating, essentially choosing a random CHAR from UID_CHAR, and doing it repeatedly
		for (i in 0 ... size){
			uid.addChar(UID_CHARS.charCodeAt(Std.random(nchars)));
		}
		// return the StringBufferer as a String.
		return uid.toString();
	}
	//generate:generate a random integer
	public static function generate(?size:Int = 8):Int{
		var nchars = UID_NUM.length;
		var uid = new StringBuf();
		for (i in 0 ... size){
			uid.addChar(UID_NUM.charCodeAt(Std.random(nchars)));
		}
		return Std.parseInt(uid.toString());
	}

	public static function onEnterFrame():Void {
		_D_KEYBOARD_TIMER++;
	}
	public static function keyDown(e:openfl.events.KeyboardEvent){
		if(_main()._debug()){
			trace("Key Down : "+e.keyCode);
		}
		_D_KEYBOARD_KEYCODES[e.keyCode] = true;
	}
	public static function keyUp(e:openfl.events.KeyboardEvent){
		if(_main()._debug()){
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
	public static function getCachedInventory(entityName:String):core4.Inventory{
		if(compareString(entityName, "hero") == 0){
			return _INVENTORY_HERO;
		}else if(compareString(entityName, "witch") == 0){
			return _INVENTORY_WITCH;
		}else if(compareString(entityName, "queen") == 0){
			return _INVENTORY_QUEEN;
		}
	}
	public static function getNotificationBitmap(notificationName:String):openfl.display.Bitmap{
		if(compareString(notificationName, "error")){
			return _A_VISUAL_ERROR;
		}else if(compareString(notificationName, "rip")){
			return _A_VISUAL_RIP;
		}else if(compareString(notificationName, "warning")){
			return _A_VISUAL_WARNING;
		}else if(compareString(notificationName, "insufficientenergy")){
			return _A_VISUAL_INSUFFICIENTENERGY;
		}else if(compareString(notificationName, "healthlow")){
			return _A_VISUAL_HEALTH25;
		}else if(compareString(notificationName, "healthdepleted")){
			return _A_VISUAL_HEALTH0;
		}else if(compareString(notificationName, "outofammo")){
			return _A_VISUAL_OUTOFAMMO;
		}
		return null;
	}
}