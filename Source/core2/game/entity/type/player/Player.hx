package core2.game.entity.type.player;

import core2.game.entity.Entity in E;
import core2.game.entity.type.player.animation.PlayerAnimations in PA;
import core2.game.entity.type.player.listeners.PlayerListener in PL;
import core2.game.entity.type.player.managers.PlayerManager in PM;
import core2.game.Game in G;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.Assets;

class Player extends E{

	private var playerAnimations:PA;
    private var playerListener:PL;
	private var playerManager:PM;
	private var bitmap:Bitmap;
    private var game:G;

	public function new(g:G, x:Int, y:Int, hx:Int, hy:Int, name:String, type:String = "unit", experienceGained = 0){
        super(x, y);
        game = g;
        graphic = Assets.getBitmapData("assests/player/movement/idle/idle.png");
        playerAnimations = new PA(this);
        playerListener = new PL(this, getGame().getEngine().getKeyboardListener());
        setHitbox(hx, hy);
        bitmap = new Bitmap(graphic);
        addChild(bitmap);
        playerManager = new PM(this);  
    }
    public function update(){
    	playerListener.update();
    }
    public function getPlayerAnimations():PA{
    	return playerAnimations;
    }
    public function getPlayerManager():PM{
        return playerManager;
    }
    public function getBitmap():Bitmap{
    	return bitmap;
    }
    public function getGame():G{
        return game;
    }
    public function getPlayerListener():PL{
        return playerListener;
    }
    
    
    
}