package core2.game.entity.type.player.managers;

import core2.game.entity.type.player.Player in P;
import core2.game.entity.type.player.listeners.PlayerListener;

class PlayerManager {
	private var manager:PlayerManager;
	private var listener:PlayerListener;
	private var health:Int;
	private var level:Int;
	private var experience:Int;
	private var experienceCap:Int;
	private var experienceGained:Int;
	private var jumpheight:Int;
	private var player:P;
	private var damageGivenToPlayer:Int;

	public function new(p:P){
		manager = this;
		listener = p.getPlayerListener();
		player = p;
		health = 100;
		experience = 0;
		experienceCap = 100;
		level = 1;
		jumpheight = 20;
		damageGivenToPlayer = 0;
	}
	public function update(){
		listener.update();
	}
	public function getHealth():Int{
		return health;
	}
	public function setHealth(h:Int):Void{
		health = h;
	}

	public function getDamageGivenToPlayer():Int{
		return damageGivenToPlayer;
	}
	public function setDamageGivenToPlayer(d:Int){
		damageGivenToPlayer += d;
	}

	public function getLevel():Int{
		return level;
	}
	public function setLevel(l:Int):Void{
		level = l;
	}
	public function levelUp():Void{
		level++;
	}

	public function getExperience():Int{
		return experience;
	}
	public function setExperience(e:Int):Void{
		experience = e;
	}
	public function addExperience(e:Int):Void{
		experience += e;
	}
	public function getExperienceCap():Int{
		return experienceCap;
	}
	public function setExperienceCap(ec:Int){
		experienceCap = ec;
	}
	public function getExperienceGained():Int{
		return experienceGained;
	}
	public function setExperienceGained(eg:Int){
		experienceGained = eg;
	}
	public function getJumpHeight():Int{
		return jumpheight;
	}
	public function setJumpHeight(jh:Int){
		jumpheight = jh;
	}
	

}