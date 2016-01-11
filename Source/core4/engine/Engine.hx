package core4.engine;

class Engine{
	private var engine : Engine;
	private var stage : openfl.display.Stage;
	private var root : openfl.display.MovieClip;
	private var notificationManager : core4.notification.NotificationManager;
	private var init : Bool = true;
	public function new(_root:openfl.display.MovieClip){
		engine = this;
		root = _root;
		stage = root.stage;
		notificationManager = new core4.notification.NotificationManager();
		loadAssets();
		if(Main._main()._debug()){
			core4.Constants.checkPreloadedInventories();
		}
		stage.addEventListener(openfl.events.Event.ENTER_FRAME, update);
		stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN,core4.Constants.keyDown);
		stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP,core4.Constants.keyUp);
	}
	public function _engine():Engine{
		return engine;
	}
	public function _stage():openfl.display.Stage{
		return stage;
	}
	public function update(e:openfl.events.Event){
		core4.Constants.onEnterFrame();
		if(!init){
			core4.Constants.updateAll();
		}else{
			trace("begin init");
			core4.Constants._D_MAP = new core4.map.Map(core4.Constants._A_M1);
			trace("map added");
			core4.Constants._E_HERO = new core4.entity.hero.Hero();
			trace("hero added");
			//core4.Constants._E_NPC_BOSS_BEAR = new core4.entity.npc.NPC("Bear", "boss", true, true, true, true, true, true, 200, core4.Constants._A_NPC_BOSS_BEAR_UP, core4.Constants._A_NPC_BOSS_BEAR_DOWN, core4.Constants._A_NPC_BOSS_BEAR_LEFT, core4.Constants._A_NPC_BOSS_BEAR_RIGHT);
			//fillMapWithItems();
			init = false;
		}
	}

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
	public function loadAssets():Void{
			trace("yes");
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
							/*


							*/
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

			core4.Constants._INVENTORY_HERO = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_GUN-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_BULLET-1], 50]);
			core4.Constants._INVENTORY_BOSS_BEAR = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);
			core4.Constants._INVENTORY_ELITE_WITCH = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);
			core4.Constants._INVENTORY_BOSS_QUEEN = new core4.inventory.Inventory(null, [core4.Constants._L_ITEM[core4.Constants._I_WEAPON_BOW-1], 1, core4.Constants._L_ITEM[core4.Constants._I_PROJECTILE_ARROW-1], 50]);

	}
}