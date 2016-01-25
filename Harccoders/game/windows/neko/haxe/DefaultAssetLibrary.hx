package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Future;
import lime.app.Preloader;
import lime.app.Promise;
import lime.audio.AudioSource;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.text.Font;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if (js && html5)
import lime.net.URLLoader;
import lime.net.URLRequest;
#elseif flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.events.ProgressEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if (openfl && !flash)
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#end
		
		#if flash
		
		path.set ("assets/armor/cloth/boots.png", "assets/armor/cloth/boots.png");
		type.set ("assets/armor/cloth/boots.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/card/boots.png", "assets/armor/cloth/card/boots.png");
		type.set ("assets/armor/cloth/card/boots.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/card/chest.png", "assets/armor/cloth/card/chest.png");
		type.set ("assets/armor/cloth/card/chest.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/card/hands.png", "assets/armor/cloth/card/hands.png");
		type.set ("assets/armor/cloth/card/hands.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/card/hat.png", "assets/armor/cloth/card/hat.png");
		type.set ("assets/armor/cloth/card/hat.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/card/legs.png", "assets/armor/cloth/card/legs.png");
		type.set ("assets/armor/cloth/card/legs.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/chest.png", "assets/armor/cloth/chest.png");
		type.set ("assets/armor/cloth/chest.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/hands.png", "assets/armor/cloth/hands.png");
		type.set ("assets/armor/cloth/hands.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/hat.png", "assets/armor/cloth/hat.png");
		type.set ("assets/armor/cloth/hat.png", AssetType.IMAGE);
		path.set ("assets/armor/cloth/legs.png", "assets/armor/cloth/legs.png");
		type.set ("assets/armor/cloth/legs.png", AssetType.IMAGE);
		path.set ("assets/boost/card/healthbuff.png", "assets/boost/card/healthbuff.png");
		type.set ("assets/boost/card/healthbuff.png", AssetType.IMAGE);
		path.set ("assets/boost/card/healthdebuff.png", "assets/boost/card/healthdebuff.png");
		type.set ("assets/boost/card/healthdebuff.png", AssetType.IMAGE);
		path.set ("assets/boost/healthbuff.png", "assets/boost/healthbuff.png");
		type.set ("assets/boost/healthbuff.png", AssetType.IMAGE);
		path.set ("assets/boost/healthdebuff.png", "assets/boost/healthdebuff.png");
		type.set ("assets/boost/healthdebuff.png", AssetType.IMAGE);
		path.set ("assets/card/back.png", "assets/card/back.png");
		type.set ("assets/card/back.png", AssetType.IMAGE);
		path.set ("assets/card/healthboostcard.png", "assets/card/healthboostcard.png");
		type.set ("assets/card/healthboostcard.png", AssetType.IMAGE);
		path.set ("assets/card/overlayattackdamageboost.png", "assets/card/overlayattackdamageboost.png");
		type.set ("assets/card/overlayattackdamageboost.png", AssetType.IMAGE);
		path.set ("assets/card/overlayhealthboost.png", "assets/card/overlayhealthboost.png");
		type.set ("assets/card/overlayhealthboost.png", AssetType.IMAGE);
		path.set ("assets/card/overlaymovementspeedboost.png", "assets/card/overlaymovementspeedboost.png");
		type.set ("assets/card/overlaymovementspeedboost.png", AssetType.IMAGE);
		path.set ("assets/container/treasurechest/boss.png", "assets/container/treasurechest/boss.png");
		type.set ("assets/container/treasurechest/boss.png", AssetType.IMAGE);
		path.set ("assets/container/treasurechest/large.png", "assets/container/treasurechest/large.png");
		type.set ("assets/container/treasurechest/large.png", AssetType.IMAGE);
		path.set ("assets/container/treasurechest/medium.png", "assets/container/treasurechest/medium.png");
		type.set ("assets/container/treasurechest/medium.png", AssetType.IMAGE);
		path.set ("assets/container/treasurechest/small.png", "assets/container/treasurechest/small.png");
		type.set ("assets/container/treasurechest/small.png", AssetType.IMAGE);
		path.set ("assets/container/treasurechest/treasurechestsmall.psd", "assets/container/treasurechest/treasurechestsmall.psd");
		type.set ("assets/container/treasurechest/treasurechestsmall.psd", AssetType.BINARY);
		path.set ("assets/container/treasurechest/XL.png", "assets/container/treasurechest/XL.png");
		type.set ("assets/container/treasurechest/XL.png", AssetType.IMAGE);
		path.set ("assets/entity/hero/down.png", "assets/entity/hero/down.png");
		type.set ("assets/entity/hero/down.png", AssetType.IMAGE);
		path.set ("assets/entity/hero/left.png", "assets/entity/hero/left.png");
		type.set ("assets/entity/hero/left.png", AssetType.IMAGE);
		path.set ("assets/entity/hero/player.psd", "assets/entity/hero/player.psd");
		type.set ("assets/entity/hero/player.psd", AssetType.BINARY);
		path.set ("assets/entity/hero/player2.psd", "assets/entity/hero/player2.psd");
		type.set ("assets/entity/hero/player2.psd", AssetType.BINARY);
		path.set ("assets/entity/hero/right.png", "assets/entity/hero/right.png");
		type.set ("assets/entity/hero/right.png", AssetType.IMAGE);
		path.set ("assets/entity/hero/up.png", "assets/entity/hero/up.png");
		type.set ("assets/entity/hero/up.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/boss/bear/down.png", "assets/entity/npc/boss/bear/down.png");
		type.set ("assets/entity/npc/boss/bear/down.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/boss/bear/left.png", "assets/entity/npc/boss/bear/left.png");
		type.set ("assets/entity/npc/boss/bear/left.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/boss/bear/right.png", "assets/entity/npc/boss/bear/right.png");
		type.set ("assets/entity/npc/boss/bear/right.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/boss/bear/up.png", "assets/entity/npc/boss/bear/up.png");
		type.set ("assets/entity/npc/boss/bear/up.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/normal/witch/down.png", "assets/entity/npc/normal/witch/down.png");
		type.set ("assets/entity/npc/normal/witch/down.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/normal/witch/down.psd", "assets/entity/npc/normal/witch/down.psd");
		type.set ("assets/entity/npc/normal/witch/down.psd", AssetType.BINARY);
		path.set ("assets/entity/npc/normal/witch/left.png", "assets/entity/npc/normal/witch/left.png");
		type.set ("assets/entity/npc/normal/witch/left.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/normal/witch/left.psd", "assets/entity/npc/normal/witch/left.psd");
		type.set ("assets/entity/npc/normal/witch/left.psd", AssetType.BINARY);
		path.set ("assets/entity/npc/normal/witch/right.png", "assets/entity/npc/normal/witch/right.png");
		type.set ("assets/entity/npc/normal/witch/right.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/normal/witch/right.psd", "assets/entity/npc/normal/witch/right.psd");
		type.set ("assets/entity/npc/normal/witch/right.psd", AssetType.BINARY);
		path.set ("assets/entity/npc/normal/witch/up.png", "assets/entity/npc/normal/witch/up.png");
		type.set ("assets/entity/npc/normal/witch/up.png", AssetType.IMAGE);
		path.set ("assets/entity/npc/normal/witch/up.psd", "assets/entity/npc/normal/witch/up.psd");
		type.set ("assets/entity/npc/normal/witch/up.psd", AssetType.BINARY);
		path.set ("assets/map/map1.png", "assets/map/map1.png");
		type.set ("assets/map/map1.png", AssetType.IMAGE);
		path.set ("assets/map/map2.png", "assets/map/map2.png");
		type.set ("assets/map/map2.png", AssetType.IMAGE);
		path.set ("assets/map/map3.png", "assets/map/map3.png");
		type.set ("assets/map/map3.png", AssetType.IMAGE);
		path.set ("assets/map/map4.png", "assets/map/map4.png");
		type.set ("assets/map/map4.png", AssetType.IMAGE);
		path.set ("assets/map/map5.png", "assets/map/map5.png");
		type.set ("assets/map/map5.png", AssetType.IMAGE);
		path.set ("assets/map/map6.png", "assets/map/map6.png");
		type.set ("assets/map/map6.png", AssetType.IMAGE);
		path.set ("assets/map/NewWorld/16x9.png", "assets/map/NewWorld/16x9.png");
		type.set ("assets/map/NewWorld/16x9.png", AssetType.IMAGE);
		path.set ("assets/map/NewWorld/NameArray.txt", "assets/map/NewWorld/NameArray.txt");
		type.set ("assets/map/NewWorld/NameArray.txt", AssetType.TEXT);
		path.set ("assets/map/test/test_tilesheet.png", "assets/map/test/test_tilesheet.png");
		type.set ("assets/map/test/test_tilesheet.png", AssetType.IMAGE);
		path.set ("assets/map/test/test_tilesheet640x640.png", "assets/map/test/test_tilesheet640x640.png");
		type.set ("assets/map/test/test_tilesheet640x640.png", AssetType.IMAGE);
		path.set ("assets/overlay/game/gameoverlay.png", "assets/overlay/game/gameoverlay.png");
		type.set ("assets/overlay/game/gameoverlay.png", AssetType.IMAGE);
		path.set ("assets/overlay/maps/mapborderoverlay.png", "assets/overlay/maps/mapborderoverlay.png");
		type.set ("assets/overlay/maps/mapborderoverlay.png", AssetType.IMAGE);
		path.set ("assets/overlay/maps/newmapoverlay.png", "assets/overlay/maps/newmapoverlay.png");
		type.set ("assets/overlay/maps/newmapoverlay.png", AssetType.IMAGE);
		path.set ("assets/projectile/arrow/arrow.png", "assets/projectile/arrow/arrow.png");
		type.set ("assets/projectile/arrow/arrow.png", AssetType.IMAGE);
		path.set ("assets/projectile/arrow/card/arrow.png", "assets/projectile/arrow/card/arrow.png");
		type.set ("assets/projectile/arrow/card/arrow.png", AssetType.IMAGE);
		path.set ("assets/projectile/bullet/bullet.png", "assets/projectile/bullet/bullet.png");
		type.set ("assets/projectile/bullet/bullet.png", AssetType.IMAGE);
		path.set ("assets/projectile/bullet/card/bullet.png", "assets/projectile/bullet/card/bullet.png");
		type.set ("assets/projectile/bullet/card/bullet.png", AssetType.IMAGE);
		path.set ("assets/projectile/fireball.png", "assets/projectile/fireball.png");
		type.set ("assets/projectile/fireball.png", AssetType.IMAGE);
		path.set ("assets/psd/CardBackside.psd", "assets/psd/CardBackside.psd");
		type.set ("assets/psd/CardBackside.psd", AssetType.BINARY);
		path.set ("assets/psd/HealthCard-Negative.psd", "assets/psd/HealthCard-Negative.psd");
		type.set ("assets/psd/HealthCard-Negative.psd", AssetType.BINARY);
		path.set ("assets/psd/HealthCard-Positive.psd", "assets/psd/HealthCard-Positive.psd");
		type.set ("assets/psd/HealthCard-Positive.psd", AssetType.BINARY);
		path.set ("assets/visual/error.png", "assets/visual/error.png");
		type.set ("assets/visual/error.png", AssetType.IMAGE);
		path.set ("assets/visual/healthdepleted.png", "assets/visual/healthdepleted.png");
		type.set ("assets/visual/healthdepleted.png", AssetType.IMAGE);
		path.set ("assets/visual/healthlow.png", "assets/visual/healthlow.png");
		type.set ("assets/visual/healthlow.png", AssetType.IMAGE);
		path.set ("assets/visual/insufficientenergy.png", "assets/visual/insufficientenergy.png");
		type.set ("assets/visual/insufficientenergy.png", AssetType.IMAGE);
		path.set ("assets/visual/outofammo.png", "assets/visual/outofammo.png");
		type.set ("assets/visual/outofammo.png", AssetType.IMAGE);
		path.set ("assets/visual/rip.png", "assets/visual/rip.png");
		type.set ("assets/visual/rip.png", AssetType.IMAGE);
		path.set ("assets/visual/warning.png", "assets/visual/warning.png");
		type.set ("assets/visual/warning.png", AssetType.IMAGE);
		path.set ("assets/weapon/bow/bow.png", "assets/weapon/bow/bow.png");
		type.set ("assets/weapon/bow/bow.png", AssetType.IMAGE);
		path.set ("assets/weapon/bow/card/bow.png", "assets/weapon/bow/card/bow.png");
		type.set ("assets/weapon/bow/card/bow.png", AssetType.IMAGE);
		path.set ("assets/weapon/gun/card/gun.png", "assets/weapon/gun/card/gun.png");
		type.set ("assets/weapon/gun/card/gun.png", AssetType.IMAGE);
		path.set ("assets/weapon/gun/gun.png", "assets/weapon/gun/gun.png");
		type.set ("assets/weapon/gun/gun.png", AssetType.IMAGE);
		path.set ("assets/weapon/gun/gun.psd", "assets/weapon/gun/gun.psd");
		type.set ("assets/weapon/gun/gun.psd", AssetType.BINARY);
		path.set ("assets/weapon/sword/sword.png", "assets/weapon/sword/sword.png");
		type.set ("assets/weapon/sword/sword.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/armor/cloth/boots.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/card/boots.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/card/chest.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/card/hands.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/card/hat.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/card/legs.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/chest.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/hands.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/hat.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/armor/cloth/legs.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/boost/card/healthbuff.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/boost/card/healthdebuff.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/boost/healthbuff.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/boost/healthdebuff.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/card/back.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/card/healthboostcard.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/card/overlayattackdamageboost.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/card/overlayhealthboost.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/card/overlaymovementspeedboost.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/container/treasurechest/boss.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/container/treasurechest/large.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/container/treasurechest/medium.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/container/treasurechest/small.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/container/treasurechest/treasurechestsmall.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/container/treasurechest/XL.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/hero/down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/hero/left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/hero/player.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/entity/hero/player2.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/entity/hero/right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/hero/up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/boss/bear/down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/boss/bear/left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/boss/bear/right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/boss/bear/up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/normal/witch/down.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/normal/witch/down.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/entity/npc/normal/witch/left.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/normal/witch/left.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/entity/npc/normal/witch/right.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/normal/witch/right.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/entity/npc/normal/witch/up.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/entity/npc/normal/witch/up.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/map/map1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/map2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/map3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/map4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/map5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/map6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/NewWorld/16x9.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/NewWorld/NameArray.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/map/test/test_tilesheet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/map/test/test_tilesheet640x640.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/overlay/game/gameoverlay.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/overlay/maps/mapborderoverlay.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/overlay/maps/newmapoverlay.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/projectile/arrow/arrow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/projectile/arrow/card/arrow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/projectile/bullet/bullet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/projectile/bullet/card/bullet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/projectile/fireball.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/psd/CardBackside.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/psd/HealthCard-Negative.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/psd/HealthCard-Positive.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/visual/error.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/healthdepleted.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/healthlow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/insufficientenergy.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/outofammo.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/rip.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/visual/warning.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/weapon/bow/bow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/weapon/bow/card/bow.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/weapon/gun/card/gun.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/weapon/gun/gun.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/weapon/gun/gun.psd";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/weapon/sword/sword.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		var assetsPrefix = null;
		if (ApplicationMain.config != null && Reflect.hasField (ApplicationMain.config, "assetsPrefix")) {
			assetsPrefix = ApplicationMain.config.assetsPrefix;
		}
		if (assetsPrefix != null) {
			for (k in path.keys()) {
				path.set(k, assetsPrefix + path[k]);
			}
		}
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						onChange.dispatch ();
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if (requestedType == BINARY && (assetType == BINARY || assetType == TEXT || assetType == IMAGE)) {
				
				return true;
				
			} else if (requestedType == null || path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null || (assetType == BINARY && requestedType == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return AudioBuffer.fromBytes (cast (Type.createInstance (className.get (id), []), ByteArray));
		else return AudioBuffer.fromFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		switch (type.get (id)) {
			
			case TEXT, BINARY:
				
				return cast (Type.createInstance (className.get (id), []), ByteArray);
			
			case IMAGE:
				
				var bitmapData = cast (Type.createInstance (className.get (id), []), BitmapData);
				return bitmapData.getPixels (bitmapData.rect);
			
			default:
				
				return null;
			
		}
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if flash
		
		var src = Type.createInstance (className.get (id), []);
		
		var font = new Font (src.fontName);
		font.src = src;
		return font;
		
		#elseif html5
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Font);
			
		} else {
			
			return Font.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif html5
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			return cast (Type.createInstance (fontClass, []), Image);
			
		} else {
			
			return Image.fromFile (path.get (id));
			
		}
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif html5
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if html5
		
		var bytes:ByteArray = null;
		var loader = Preloader.loaders.get (path.get (id));
		
		if (loader == null) {
			
			return null;
			
		}
		
		var data = loader.data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		//if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		//}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String):Future<AudioBuffer> {
		
		var promise = new Promise<AudioBuffer> ();
		
		#if (flash)
		
		if (path.exists (id)) {
			
			var soundLoader = new Sound ();
			soundLoader.addEventListener (Event.COMPLETE, function (event) {
				
				var audioBuffer:AudioBuffer = new AudioBuffer();
				audioBuffer.src = event.currentTarget;
				promise.complete (audioBuffer);
				
			});
			soundLoader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			soundLoader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			soundLoader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getAudioBuffer (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<AudioBuffer> (function () return getAudioBuffer (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadBytes (id:String):Future<ByteArray> {
		
		var promise = new Promise<ByteArray> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				promise.complete (bytes);
				
			});
			loader.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.dataFormat = BINARY;
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, e) {
				
				promise.error (e);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getBytes (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<ByteArray> (function () return getBytes (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	public override function loadImage (id:String):Future<Image> {
		
		var promise = new Promise<Image> ();
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				promise.complete (Image.fromBitmapData (bitmapData));
				
			});
			loader.contentLoaderInfo.addEventListener (ProgressEvent.PROGRESS, function (event) {
				
				if (event.bytesTotal == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (event.bytesLoaded / event.bytesTotal);
					
				}
				
			});
			loader.contentLoaderInfo.addEventListener (IOErrorEvent.IO_ERROR, promise.error);
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#elseif html5
		
		if (path.exists (id)) {
			
			var image = new js.html.Image ();
			image.onload = function (_):Void {
				
				promise.complete (Image.fromImageElement (image));
				
			}
			image.onerror = promise.error;
			image.src = path.get (id);
			
		} else {
			
			promise.complete (getImage (id));
			
		}
		
		#else
		
		promise.completeWith (new Future<Image> (function () return getImage (id)));
		
		#end
		
		return promise.future;
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#elseif (mac && java)
			var bytes = ByteArray.readFile ("../Resources/manifest");
			#elseif (ios || tvos)
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								#if (ios || tvos)
								path.set (asset.id, "assets/" + asset.path);
								#else
								path.set (asset.id, asset.path);
								#end
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadText (id:String):Future<String> {
		
		var promise = new Promise<String> ();
		
		#if html5
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.onComplete.add (function (_):Void {
				
				promise.complete (loader.data);
				
			});
			loader.onProgress.add (function (_, loaded, total) {
				
				if (total == 0) {
					
					promise.progress (0);
					
				} else {
					
					promise.progress (loaded / total);
					
				}
				
			});
			loader.onIOError.add (function (_, msg) promise.error (msg));
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			promise.complete (getText (id));
			
		}
		
		#else
		
		promise.completeWith (loadBytes (id).then (function (bytes) {
			
			return new Future<String> (function () {
				
				if (bytes == null) {
					
					return null;
					
				} else {
					
					return bytes.readUTFBytes (bytes.length);
					
				}
				
			});
			
		}));
		
		#end
		
		return promise.future;
		
	}
	
	
}


#if !display
#if flash
















































































#elseif html5
















































































#else



#if (windows || mac || linux || cpp)





#end
#end

#if (openfl && !flash)

#end

#end