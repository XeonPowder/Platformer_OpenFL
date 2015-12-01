package core3;

import flash.display.Sprite;

class Entity {
	var man					: Manager;
	
	public var sprite		: Sprite;
	
	public var cx			: Int;
	public var cy			: Int;
	public var xr			: Float;
	public var yr			: Float;
	
	public var dx			: Float;
	public var dy			: Float;
	public var xx			: Float;
	public var yy			: Float;
	
	public function new() {
		man = core3.Manager.ME;
		
		cx = 5;
		cy = 0;
		xr = yr = 0.5;
		dx = dy = 0;
		
		sprite = new Sprite();
		sprite.graphics.beginFill(0xFFFF00,1);
		sprite.graphics.drawCircle(0,0,core3.Const.GRID*0.5);
	}
	
	public function setCoordinates(x,y) {
		xx = x;
		yy = y;
		cx = Std.int(xx/core3.Const.GRID);
		cy = Std.int(yy/core3.Const.GRID);
		xr = (xx-cx*core3.Const.GRID) / core3.Const.GRID;
		yr = (yy-cy*core3.Const.GRID) / core3.Const.GRID;
	}
	
	
	public inline function hasCollision(cx,cy) {
		return
			if( cx<0 || cx>=man.level.length || cy>=man.level[cx].length )
				true;
			else
				man.levelCollision[cx][cy];
	}
	
	public function onGround() {
		return hasCollision(cx,cy+1) && yr>=0.5;
	}
	
	public function update() {
		var frictX = 0.92;
		var frictY = 0.94;
		var gravity = 0.04;
		
		// X component
		xr+=dx;
		dx*=frictX;
		if( hasCollision(cx-1,cy) && xr<=0.3 ) {
			dx = 0;
			xr = 0.3;
		}
		if( hasCollision(cx+1,cy) && xr>=0.7 ) {
			dx = 0;
			xr = 0.7;
		}
		while( xr<0 ) {
			cx--;
			xr++;
		}
		while( xr>1 ) {
			cx++;
			xr--;
		}
		
		// if using gravity
		// Y component
		//dy+=gravity;
		yr+=dy;
		dy*=frictY;
		/*
		if( hasCollision(cx,cy-1) && yr<=0.4 ) {
			dy = 0;
			yr = 0.4;
		}
		if( hasCollision(cx,cy+1) && yr>=0.5 ) {
			dy  = 0;
			yr = 0.5;
		}
		while( yr<0 ) {
			cy--;
			yr++;
		}
		while( yr>1 ) {
			cy++;
			yr--;
		}
		*/
			
		xx = Std.int((cx+xr)*core3.Const.GRID);
		yy = Std.int((cy+yr)*core3.Const.GRID);
		sprite.x = xx;
		sprite.y = yy;
	}
	
}
