package core4.state;

class State {
	private var name:String = null;
	private var description:String = null;
	private var stateNumber:Int = null;
	private var engineLink:core4.engine.Engine = null;
	private var stateConfig:core4.state.State = null;
	private var stateConfigArguments:Array<Dynamic> = null;
	private var oldStateConfig:core4.state.State = null;
	private var oldStateConfigList:Array<core4.state.State> = null;

	private var spriteList:Array<openfl.display.Sprite> = null;
	private var textList:Array<openfl.text.TextField> = null;
	private var entityList:Array<core4.entity.Entity> = null;
	private var buttonList:Array<openfl.display.SimpleButton> = null;
	private var mapBitmap:openfl.display.BitmapData = null;

	public function new(identificationNumber:Int, ?quickLoad:Bool = false, ?args:Array<Dynamic> = null){
		stateConfig = this;
		if(core4.Constants._L_STATES == null){
			core4.Constants._L_STATES = new Array();
		}
		core4.Constants._L_STATES.push(this);
		stateNumber = identificationNumber;
		if(args != null){
			stateConfigArguments = args;
			setup(stateConfigArguments);
		}
		prepare();
		if(quickLoad){
			render();
		}
	}
	public function load(){
		prepare();
		render();
	}
	private function setup(args:Array<Dynamic>){
		if(args != null && args.length > 0){
			var x:Int = 0;
			while(args[x] != null){
				if(x == 0){
					engineLink = args[x];
				}else if(x == 1){
					name = args[x];
				}else if(x == 2){
					description = args[x];
				}else{
					if(spriteList == null){
						spriteList = new Array();
					}
					if(textList == null){
						textList = new Array();
					}
					if(entityList == null){
						entityList = new Array();
					}
					if(buttonList == null){
						buttonList = new Array();
					}
					if(Std.is(openfl.display.Sprite, args[x])){
						spriteList.push(args[x]);
					}else if(Std.is(openfl.text.TextField, args[x])){
						textList.push(args[x]);
					}else if(Std.is(core4.entity.Entity, args[x])){
						entityList.push(args[x]);
					}else if(Std.is(openfl.display.SimpleButton, args[x])){
						buttonList.push(args[x]);
					}else if(Std.is(core4.map.Map, args[x])){
						mapBitmap = args[x];
					}
				}
				x++;
			}
		}
	}
	private function prepare(){
		oldStateConfig = engineLink.dumpState();
		if(oldStateConfig != null){
			if(oldStateConfigList == null){
				oldStateConfigList = new Array();
			}
			oldStateConfigList.push(oldStateConfig);
			oldStateConfig.unload();
		}

	}
	private function unload(){
		if(spriteList != null ){
			for(x in 0 ... spriteList.length){
				if(spriteList[x] != null){
					engineLink._stage().removeChild(spriteList[x]);
				}
			}
		}
		if(textList != null ){
			for(x in 0 ... textList.length){
				if(textList[x] != null){
					engineLink._stage().removeChild(textList[x]);
				}
			}
		}
		if(entityList != null ){
			for(x in 0 ... entityList.length){
				if(entityList[x] != null){
					entityList[x]._delete();
				}
			}
		}
		if(buttonList != null ){
			for(x in 0 ... buttonList.length){
				if(buttonList[x] != null){
				engineLink._stage().removeChild(buttonList[x]);
				}
			}
		}
	}
	private function render(){
		if(mapBitmap != null){
			core4.Constants._D_MAP = new core4.map.Map(mapBitmap);
		}
		for(x in 0 ... spriteList.length){
			if(spriteList[x] != null){
				engineLink._stage().addChild(spriteList[x]);
			}else{
				if(Main._main()._debug()){
					trace("error: sprite null");
				}
			}
		}
		for(x in 0 ... textList.length){
			if(textList[x] != null){
				engineLink._stage().addChild(textList[x]);
			}else{
				if(Main._main()._debug()){
					trace("error: text null");
				}
			}
		}
		for(x in 0 ... entityList.length){
			if(entityList[x] != null){
				entityList[x]._add();
			}else{
				if(Main._main()._debug()){
					trace("error: entity null");
				}
			}
		}
		for(x in 0 ... buttonList.length){
			if(buttonList[x] != null){
				engineLink._stage().addChild(buttonList[x]);
			}else{
				if(Main._main()._debug()){
					trace("error: button null");
				}
			}
		}
	}
	public function getPreviousState():core4.state.State{
		return oldStateConfig;
	}
	public function getPreviousStates():Array<core4.state.State>{
		return oldStateConfigList;
	}
	public function enemiesAlive():Int{
		var alive:Int = 0;
		for(x in 0 ... entityList.length){
			if(entityList[x].getHealth() > 0){
				alive++;
			}
		}
		return alive;
	}
	public function getIdentificationNumber():Int{
		return stateNumber;
	}
	public function getStateName():String{
		return name;
	}
}