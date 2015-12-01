package nme;

#if (waxe && !nme)
import wx.Assets;
import wx.AssetInfo;
import wx.AssetType;
#else
import nme.Assets;
import nme.AssetInfo;
import nme.AssetType;
#end

class AssetData
{
   public static function create():Void
   {
      var info = Assets.info;

      
      
      info.set("assets/maps/NewWorld/16x9.png", new AssetInfo("assets/maps/NewWorld/16x9.png",AssetType.IMAGE,false,null));
      info.set("assets/maps/NewWorld/NameArray.txt", new AssetInfo("assets/maps/NewWorld/NameArray.txt",AssetType.TEXT,false,null));
      info.set("assets/maps/test/test_tilesheet.png", new AssetInfo("assets/maps/test/test_tilesheet.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/left/left.png", new AssetInfo("assets/Sprites/player/movement/left/left.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/left/left_fall.png", new AssetInfo("assets/Sprites/player/movement/left/left_fall.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/left/left_jump.png", new AssetInfo("assets/Sprites/player/movement/left/left_jump.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/left/left_touchdown.png", new AssetInfo("assets/Sprites/player/movement/left/left_touchdown.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/right/right.png", new AssetInfo("assets/Sprites/player/movement/right/right.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/right/right_fall.png", new AssetInfo("assets/Sprites/player/movement/right/right_fall.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/right/right_jump.png", new AssetInfo("assets/Sprites/player/movement/right/right_jump.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/movement/right/right_touchdown.png", new AssetInfo("assets/Sprites/player/movement/right/right_touchdown.png",AssetType.IMAGE,false,null));
      info.set("assets/Sprites/player/player.psd", new AssetInfo("assets/Sprites/player/player.psd",AssetType.BINARY,false,null));
      info.set("assets/Sprites/player/player2.psd", new AssetInfo("assets/Sprites/player/player2.psd",AssetType.BINARY,false,null));
      
   }
}

#if flash














#end


