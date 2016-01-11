package core4.notification;

class Notification{
    private var nContainer:openfl.display.Sprite;
    private var counter:Int;
    public static inline var _TITLEFONTSIZE:Int = 20;
    public static inline var _SUBTITLEFONTSIZE:Int = 14;
    public static inline var _NOTIFICATION_TIME:Int = 3;
    private var notificationIdentifier:String;
    private var endNotification:Bool;
    public function new(?fontsize:Int = _TITLEFONTSIZE, nTitle:String){
        notificationIdentifier = nTitle;
        createNotification(fontsize, nTitle);
        counter = 0;
        endNotification = false;
    }
    private function createNotification(fontsize:Int, nTitle:String){
        nContainer = new openfl.display.Sprite();
        nContainer.x = Main._main()._engine()._engine()._stage().stageWidth/2;
        nContainer.y = Main._main()._engine()._engine()._stage().stageHeight/6;
        nContainer.addChild(core4.Constants.getNotificationBitmap(nTitle));
        Main._main()._engine()._stage().addChild(nContainer);
    }
    public function update(){
        if(endNotification){
            Main._main()._engine().getNotificationManager()._remove(this);
            Main._main()._engine()._stage().removeChild(nContainer);
        }
        if(counter < _NOTIFICATION_TIME){
            nContainer.x =  Main._main()._engine()._stage().stageWidth/2 - Std.int(nContainer.bitmapData.width/2);
            nContainer.y =  Main._main()._engine()._stage().stageHeight/6;
            if(core4.Constants.getKTime() % 10 == 0){
                counter++;
            }
        }else{
            _delete();
        }
    }
    public function getIdentifier():String{
        return notificationIdentifier;
    }
    public function _delete(){
        endNotification = true;
    }
}