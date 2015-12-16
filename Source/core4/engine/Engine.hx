package core4.engine;

class Engine{
	private var engine : Engine;
	private var stage : openfl.display.Stage;
	private var root : openfl.display.MovieClip;
	private var notificationManager : core4.notification.NotificationManager;
	
	public function new(_root:openfl.display.MovieClip){
		engine = this;
		root = _root;
		stage = root.stage;
		notificationManager = new core4.notification.NotificationManager();
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
	public function update():Void{
		core4.Constants.onEnterFrame();
		if(init){
			init = init();
		}else{

		}
	}
	public function init():Bool{
		core4.Constants._E_HERO = new core4.entity.hero.Hero();
		core4.Constants._D_MAP = new core4.map.Map(core4.Constants._A_M1);
		_D_KEYBOARD_KEYCODES
		_D_KEYBOARD_TIMER
		return false;
	}

	public function getNotificationManager():core4.notification.NotificationManager{
		return notificationManager;
	}
	public function gameOver(s:String){

	}
}