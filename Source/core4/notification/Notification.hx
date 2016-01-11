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
    private function createNotification(fontsize:Int, nTitle:String,){
        nContainer = new openfl.text.Sprite();
        nContainer.x = _main()._engine()._stage().stageWidth/2;
        nContainer.y = _main()._engine()._stage().stageHeight/6;
        nContainer.addChild(core4.Constants.getNotificationBitmap(nTitle));
        _main()._engine()._stage().addChild(nContainer);
    }
    public function update(){
        if(endNotification){
            _main()._engine().getNotificationManager()._remove(this);
            _main()._engine()._stage().removeChild(nContainer);
        }
        if(counter < _NOTIFICATION_TIME){
            nContainer.x = _main()._engine()._stage().stageWidth/2 - nTContainer.text.length;
            nContainer.y = _main()._engine()._stage().stageHeight/6;
            if(manager.getKTime() % 10 == 0){
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