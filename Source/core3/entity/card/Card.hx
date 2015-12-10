package core3.entity.card;

class Card extends Entity{
	public var card 							:				openfl.display.Sprite;
	private var cardBMD1						: 				openfl.display.Bitmap;
	private var cardBMD2						: 				openfl.display.Bitmap;
	private var cardBMD3 						: 				openfl.display.Bitmap;
	private var cardBMD4 						: 				openfl.display.Bitmap;
	private var currentCardBMD 					: 				openfl.display.Bitmap;
	private var init 							: 				Bool;
	private var maxbob 							: 				Int;
	private var bob 							: 				Int;
	private var up 								: 				Bool;
	private var item 							: 				core3.Item;
	private var itemDBIndex 					:				Int;
	public function new(_type:String, ?_cardName:String = "NONE", ?hasMultiplierEffect:Bool = false, ?multiplierEffectType:String = "NONE", ?multiplier:Float = 0, ?location:openfl.geom.Point = null){
		init = true;
		type = _type;
		card = new openfl.display.Sprite();
		super(card);
		item = new core3.Item(this, _cardName, hasMultiplierEffect, multiplierEffectType);
		itemDBIndex = man.addItemToDB(item);
		man.addItemToFloor(item);
		trace(""+item.getItemID());
		if(Const.compareString(_type, Const._HEALTH) == 0){
			currentCardBMD = cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/healthboostcard.png"));
		}else if(Const.compareString(_type, Const._ATTACKDAMAGE) == 0){
			currentCardBMD =  cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/attackdamageboostcard.png"));
		}else if(Const.compareString(_type, Const._ATTACKSPEED) == 0){
			currentCardBMD =  cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/attackspeedboostcard.png"));
		}else if(Const.compareString(_type, Const._ENERGY) == 0){
			currentCardBMD = cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/energyboostcard.png"));
		}else if(Const.compareString(_type, Const._EXPERIENCE) == 0){
			currentCardBMD = cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/experienceboostcard.png"));
		}else if(Const.compareString(_type, Const._MOVEMENTSPEED) == 0){
			currentCardBMD = cardBMD1 = cardBMD2 = cardBMD3 = cardBMD4 = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/sprites/card/movementboostcard.png"));
		}
		card.addChild(currentCardBMD);
		maxbob = 20;
		bob = 0;
		up = true;
		if(location != null){
			setLocation(location);
		}else{
			setLocation(new openfl.geom.Point(0, 0));
		}
		
	}
	public override function update(){
		if(!init){
			if(bob < maxbob){
				if(up){
					setLocation(new openfl.geom.Point(getLocation().x, getLocation().y + 1));
				}else if(!up){
					setLocation(new openfl.geom.Point(getLocation().x, getLocation().y - 1));
				}
				bob++;
			}else{
				bob = 0;
				up = !up;
			}
			if(man.getKTime() % 20 == 0){
				if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMD1){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMD2;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMD2){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMD3;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMD3){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMD4;
					card.addChild(currentCardBMD);
				}else if(card.getChildAt(card.getChildIndex(currentCardBMD)) == cardBMD4){
					card.removeChild(currentCardBMD);
					currentCardBMD = cardBMD1;
					card.addChild(currentCardBMD);
				}
			}
		}else{
			man.stage.addChild(card);
			init = false;
		}
	}
}