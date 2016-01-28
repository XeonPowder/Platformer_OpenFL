package core4.map;

class Map{
    private var sheet:openfl.display.Tilesheet;
    private var sprite:openfl.display.Sprite;
    private var tileData:Array<Float>;
    private var level:Array<Array<Int>>;
    private var levelCollision:Array<Array<Bool>>;
    private var tileIDList:Array<Int>;
    private var animatingNewMap:Bool;
    private var counter:Float;
    private var init:Bool;
    private var bitmapData:openfl.display.BitmapData;
    public function new(mapBitmapData:openfl.display.BitmapData){
        init = true;
        bitmapData = mapBitmapData;
        sprite = new openfl.display.Sprite();
    } 
    public function update():Bool{
        if(!init){
            sprite.graphics.clear();
            sheet.drawTiles(sprite.graphics, tileData, false);
        }else{
            trace("generating map");
            genMapData();
            trace("adding map to screen");
            add();
            init = false;
        }
        return animatingNewMap;
    }
    public function remove(){
        Main._main()._engine()._stage().removeChild(sprite);
    }
    public function add(){
        Main._main()._engine()._stage().addChild(sprite);
    }
    public function change(map:openfl.display.BitmapData){
        bitmapData = map;
        genMapData();
        sprite.graphics.clear();
        sheet.drawTiles(sprite.graphics, tileData, false);
    }
    public function genMapData():Void{
        var bmd:openfl.display.BitmapData = bitmapData;
        sheet = new openfl.display.Tilesheet(bmd);


        tileIDList = new Array();
        var z = 0;
        //trace(Std.int(bmd.width/arX));
        //trace(Std.int(bmd.height/arY));
        for(x in 0 ... Std.int(bmd.width/core4.Constants._D_GRID_SIZE)){
            for(y in 0 ... Std.int(bmd.height/core4.Constants._D_GRID_SIZE)){
                tileIDList[z] = sheet.addTileRect(new openfl.geom.Rectangle(x*core4.Constants._D_GRID_SIZE, y*core4.Constants._D_GRID_SIZE, core4.Constants._D_GRID_SIZE, core4.Constants._D_GRID_SIZE));
                z++;
            }
        }

        level = new Array();
        levelCollision = new Array();
        var collision:String = "";
        //Sys.print("auto tileID generation? (y or n): ");
        //var auto:String = Sys.stdin().readLine();
        var auto:String = "y";
        var autoCounter = 0;
        for(x in 0... Std.int(bmd.width/core4.Constants._D_GRID_SIZE)){
            level[x] = new Array();
            levelCollision[x] = new Array();
            for(y in 0... Std.int(bmd.height/core4.Constants._D_GRID_SIZE)) {
                if(core4.Constants.compareString(auto, "y") == 0){
                    levelCollision[x][y] = false;
                    level[x][y] = tileIDList[autoCounter];
                    autoCounter++;
                }else if(core4.Constants.compareString(auto, "n") == 0){
                    collision = "";
                    z = -1;
                    while((z == -1 || z == Math.NaN) && collision == ""){
                        //Sys.print("tileID to assign map tile: ["+x+", "+y+"]? ");
                        //z = Std.parseInt(Sys.stdin().readLine());
                        //Sys.print("entity collision? (y or n): ");
                        //collision = Sys.stdin().readLine();
                        if(Main._main()._debug())trace(collision);
                        if(core4.Constants.compareString(collision, "y") == 0){
                            levelCollision[x][y] = true;
                        }else if(core4.Constants.compareString(collision, "n") == 0){
                            levelCollision[x][y] = false;
                            
                        }
                        if(Main._main()._debug())trace(levelCollision[x][y]);
                    }
                    level[x][y] = tileIDList[z];
                    z++;
                }
            }
        }
        tileData = new Array();
        for (row in 0...level.length) {
            for (cell in 0...level[row].length) {
                tileData = tileData.concat([core4.Constants._D_GRID_SIZE*row, core4.Constants._D_GRID_SIZE*cell, level[row][cell]]);
            }
        }
    }
}