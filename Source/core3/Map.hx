package core3;

class Map extends openfl.display.Sprite{
        private var sheet:openfl.display.Tilesheet;
        private var sprite:openfl.display.Sprite;
        private var tileData:Array<Float>;
 
        public function new(_tileData:Array<Float>, sheet:openfl.display.Tilesheet){
                super();
                tileData = _tileData;
                this.x = 0;
                this.y = 0;
                this.sprite = new openfl.display.Sprite();
                openfl.Lib.current.addChild(sprite);
                this.sheet = sheet;
        }
       
 
        public function update():Void{
                sprite.graphics.clear();
                sheet.drawTiles(sprite.graphics, tileData, false);
        }
}