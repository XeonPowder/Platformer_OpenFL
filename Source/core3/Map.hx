package core3;

class Map{
        private var sheet:openfl.display.Tilesheet;
        private var sprite:openfl.display.Sprite;
        private var tileData:Array<Float>;
        private var animatingNewMap:Bool;
        private var man:core3.Manager;
        private var counter:Float;
        private var mapName:openfl.display.Bitmap;
        private var border:openfl.display.Bitmap;
        private var spriteBorder:openfl.display.Sprite;
        private var spriteMapName:openfl.display.Sprite;
        private var spriteTextMapName:openfl.text.TextField;
        public function new(_tileData:Array<Float>, _sheet:openfl.display.Tilesheet, manager:core3.Manager){
                man = manager;
                tileData = _tileData;
                sheet = _sheet;
                sprite = new openfl.display.Sprite();

                counter = 0;
                animatingNewMap = true;
                mapName = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/overlay/maps/newmapoverlay.png"));
                border = new openfl.display.Bitmap(openfl.Assets.getBitmapData("assets/overlay/maps/mapborderoverlay.png"));
                spriteBorder = new openfl.display.Sprite();
                spriteMapName = new openfl.display.Sprite();
                spriteTextMapName = new openfl.text.TextField();

                counter = spriteMapName.x = -1 * mapName.bitmapData.width;
                spriteMapName.y = 0;
                spriteBorder.addChild(border);
                spriteMapName.addChild(mapName);

                man.stage.addChild(spriteMapName);
                man.stage.addChild(spriteBorder);

                
                spriteTextMapName.text = "New World";
                spriteTextMapName.width = mapName.width - 40;
                spriteTextMapName.height = mapName.height - 30;
                spriteTextMapName.x = 40;
                spriteTextMapName.y = 30;
                spriteTextMapName.textColor = 0x000000;
                spriteTextMapName.mouseEnabled = spriteTextMapName.selectable = false;
        }
       
 
        public function update():Bool{
                if(!animatingNewMap){
                        sprite.graphics.clear();
                        sheet.drawTiles(sprite.graphics, tileData, false);
                        return animatingNewMap;
                }else{
                        if(Std.int(counter/5) < 0){
                                if(man.getKTime() % 2 == 0){
                                        spriteMapName.x += 1;
                                        spriteMapName.x += 1;
                                        spriteMapName.x += 1;
                                        spriteMapName.x += 1;
                                        spriteMapName.x += 1;
                                        counter+=5;
                                        return animatingNewMap;
                                }
                                return animatingNewMap;
                        }else if(counter == -3){
                                spriteMapName.x += 1;
                                spriteMapName.x += 1;
                                spriteMapName.x += 1;
                                counter = 20;
                                return animatingNewMap;
                        }else if(counter > 0){
                                if(counter == 1){
                                        animatingNewMap = false;
                                        man.stage.removeChild(spriteMapName);
                                        man.stage.removeChild(spriteBorder);
                                        man.stage.removeChild(spriteTextMapName);
                                        man.stage.addChild(sprite);
                                        return animatingNewMap;
                                }
                                if(man.getKTime() % 2 == 0){
                                        counter--;
                                        return animatingNewMap;
                                }
                                return animatingNewMap;
                        }
                        trace(counter);
                        return animatingNewMap;
                }
        }
}