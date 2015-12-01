package core3;

class Map extends nme.display.Sprite{
        private var sheet:nme.display.Tilesheet;
        private var sprite:nme.display.Sprite;
        private var tileData:Array<Float>;
 
        public function new(_tileData:Array<Float>, sheet:nme.display.Tilesheet)
        {
                super();
                tileData = _tileData;
                this.x = 0;
                this.y = 0;
                this.sprite = new nme.display.Sprite();
                nme.Lib.current.addChild(sprite);
                this.sheet = sheet;
        }
       
 
        public function draw()
        {
                sprite.graphics.clear();
                sheet.drawTiles(sprite.graphics, tileData);
        }
}