package core.entity;

import core.entity.Entity in E;
import core.assests.Variables in V;

import openfl.Assests;
import openfl.display.Bitmap;
import openfl.display.BitmapData;

class Player extends Entity{

	private var playerAnimations:PA;
	private var health:Float;
	private var level:Int;
	private var experience:Float;
	private var experienceCap:Float;
	private var experienceGained:Float;
	private var jumpheight:Int;
	private var bitmap:Bitmap;

	public function new(x:Int, y:Int, hx:Int, hy:Int, type:String = "unit", name = V.name, experienceGained = 0, playerAnimations:PA = new PA(this), graphic:BitmapData = Assests.getBitmapData("assests/player/movement/idle/idle.png")){
        super(x, y);
        playerListener = new PL();
        setHitbox(hx, hy);
        bitmapData;
        bitmap = new Bitmap(graphic);
        addChild(bitmap);
        health = 100.0;
        experience = 0.0;
        experienceCap = 100;
        level = 1;
        jumpheight = 20;
    }
    public override function update(){
    	playerListener.update();
    }
    public function getPlayerAnimations():PA{
    	return playerAnimations;
    }
    public function getPlayerHealth():Flaot{
    	return health;
    }
    public function getPlayerLevel():Int{
    	return level;
    }
    public function getExperience():Float{
    	return experience;
    }
    public function getExperienceCap():Float{
    	return experienceCap;
    }
    public function getExperienceGained():Float{
    	return experienceGained;
    }
    public function getJumpHeight():Int{
    	return jumpheight;
    }
    public function getBitmap():Bitmap{
    	return bitmap;
    }

    public function setExperience(e:Int):Void{
    	experience = e;
    }
    public function setLevel(ll:Int):Void{
    	level = l;
    }
}