package core2.game.entity.type.player.listeners;

import core2.game.Game in G;
import core2.game.entity.type.player.Player in P;
import core2.game.entity.type.player.managers.PlayerManager in PM;
import core2.game.engine.input.keyboard.KeyboardListener in KL;

class PlayerListener extends core2.game.entity.listeners.EntityListener{
	private var player:P;
	private var pManager:PM;
	private var keyboardListener:KL;
	private var keyUP:Int = 38;
	private var keyDOWN:Int = 40;
	private var keyLEFT:Int = 37;
	private var keyRIGHT:Int = 39;

	private var moveUp:Bool = false;
	private var moveDown:Bool = false;
	private var moveLeft:Bool = false;
	private var moveRight:Bool = false;

	public function new(p:P, kl:KL){
		super();
		player = p;
		pManager = p.getPlayerManager();
		keyboardListener = kl;
	}
	public override function update(){
		checkKeyStates();
		move();
		checkDamageRecieved();
		checkExperienceRecieved();
		checkLevelUp();
	}
	public function checkKeyStates():Void{
		moveUp = keyboardListener.getKeyState(keyUP);
		moveDown = keyboardListener.getKeyState(keyDOWN);
		moveLeft = keyboardListener.getKeyState(keyLEFT);
		moveRight = keyboardListener.getKeyState(keyRIGHT);

	}
	public function move():Void{
		if(moveUp){
			player.y++;
		}
		if(moveDown){
			player.y--;
		}
		if(moveLeft){
			player.x--;
		}
		if(moveRight){
			player.x++;
		}
	}
	public function checkDamageRecieved(){
		pManager.setHealth(pManager.getHealth() - pManager.getDamageGivenToPlayer());
		if(pManager.getHealth() <= 0){
			//player.getGame().stop();
		}
	}
	public function checkExperienceRecieved():Void{
		pManager.setExperience(pManager.getExperienceGained());
	}
	public function checkLevelUp():Void{
		if(pManager.getExperience() == pManager.getExperienceCap()){
			pManager.setExperience(0);
			pManager.levelUp();
		}
	}
}