package core3.notification;

class Notification{
    private var nTContainer:openfl.text.TextField;
    private var nTContainerFormat:openfl.text.TextFormat;
    private var nSTContainer:openfl.text.TextField;
    private var nSTContainerFormat:openfl.text.TextFormat;
    private var manager:core3.Manager;
    private var counter:Int;
    public static inline var _TITLEFONTSIZE:Int = 20;
    public static inline var _SUBTITLEFONTSIZE:Int = 14;
    public static inline var _NOTIFICATION_TIME:Int = 3;
    private var notificationIdentifier:String;
    private var endNotification:Bool;
    public function new(m:core3.Manager, ?fontsize:Int = _TITLEFONTSIZE, nTitle:String, ?subtitlefontsize:Int = _SUBTITLEFONTSIZE, nSubtitle:String){
        manager = m;
        notificationIdentifier = nSubtitle;
        createNotification(fontsize, nTitle, subtitlefontsize, nSubtitle);
        counter = 0;
        manager.stage.addChild(nTContainer);
        manager.stage.addChild(nSTContainer);
        endNotification = false;
    }
    private function createNotification(fontsize:Int, nTitle:String, subtitlefontsize:Int, nSubtitle:String){
        nTContainer = new openfl.text.TextField();
        nTContainer.width = manager.stage.stageWidth;
        nTContainer.x = manager.stage.stageWidth/2 - nTitle.length;
        nTContainer.y = manager.stage.stageHeight/6;
        nTContainerFormat = new openfl.text.TextFormat();
        nTContainerFormat.size = fontsize;
        nTContainerFormat.color = 0x000000;
        nTContainer.defaultTextFormat = nTContainerFormat;
        nTContainer.text = nTitle;


        nSTContainer = new openfl.text.TextField();
        nSTContainer.width = manager.stage.stageWidth;
        nSTContainer.x = manager.stage.stageWidth/2 - (nTitle.length - nSubtitle.length);
        nSTContainer.y = manager.stage.stageHeight/6 + nTContainer.height;
        nSTContainerFormat = new openfl.text.TextFormat();
        nSTContainerFormat.size = subtitlefontsize;
        nSTContainerFormat.color = 0x000000;
        nSTContainer.defaultTextFormat = nSTContainerFormat;
        nSTContainer.text = nSubtitle;
    }
    public function update(){
        if(endNotification){
            manager.getNotificationManager()._remove(this);
            manager.stage.removeChild(nTContainer);
            manager.stage.removeChild(nSTContainer);
        }
        if(counter < _NOTIFICATION_TIME){
            if(manager.getKTime() % 10 == 0){
                nTContainerFormat.color = nSTContainerFormat.color = Std.int(Math.random()*0xFFFFFF);
                nTContainer.defaultTextFormat = nTContainerFormat;
                nSTContainer.defaultTextFormat = nSTContainerFormat;
                nTContainer.x = manager.stage.stageWidth/2 - nTContainer.text.length;
                nTContainer.y = manager.stage.stageHeight/6;
                nSTContainer.x = manager.stage.stageWidth/2 - nSTContainer.text.length;
                nSTContainer.y = manager.stage.stageHeight/6 + nTContainer.height;
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