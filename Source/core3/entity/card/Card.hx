package core3.entity.card;

class Card extends Entity{
	public var card 							:				openfl.display.Sprite;
	private var cardBMD 						: 				openfl.display.Bitmap;
	private var cardBMDright 					: 				openfl.display.Bitmap;
	private var cardBMDleft 					: 				openfl.display.Bitmap;
	private var cardBMDup 						: 				openfl.display.Bitmap;
	private var cardBMDdown 					: 				openfl.display.Bitmap;
	private var currentCardBMD 					: 				openfl.display.Bitmap;
	private var init 							: 				Bool;
	private var maxbob 							: 				Int;
	private var bob 							: 				Int;
	private var up 								: 				Bool;
	public function new(){
		init = true;
		super();
		type = "card";
		card = new openfl.display.Sprite();
		cardBMDright = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right.png"));
		cardBMDleft = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left.png"));
		cardBMDup = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/left/left_jump.png"));
		cardBMDdown = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/player/movement/right/right_jump.png"));
		currentCardBMD = cardBMDright;
		card.addChild(currentCardBMD);
		maxbob = 20;
		bob = 0;
		up = true;
		card.x = 50;
		card.y = 50;

		man.stage.addChild(card);
		init = false;
	}
	public override function update(){
		if(bob < maxbob){
			if(up){
				card.y++;
			}else if(!up){
				card.y--;
			}
			bob++;
		}else{
			bob = 0;
			up = !up;
		}
		if(!init){
			if(man.getKTime() % 20 == 0){
				if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMDright){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMDleft;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMDleft){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMDup;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMDup){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMDdown;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMDdown){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMDright;
					card.addChild(currentCardBMD);
				}
			}
		}
	}
}