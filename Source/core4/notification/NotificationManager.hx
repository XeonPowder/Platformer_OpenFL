package core4.notification;

class NotificationManager{
        private var notificationList:Array<core4.notification.Notification>;
        private var notificationListNames:Array<String>;

        public function new(){
                notificationList = new Array();
                notificationListNames = new Array();
        }
        public function update(){
                if(notificationList != null && notificationList.length > 0){
                    for(x in 0 ... notificationList.length){
                        notificationList[x].update();
                    }
                }
        }
        public function getNotificationList():Array<core4.notification.Notification>{
            return notificationList;
        }
        public function _new(n:core4.notification.Notification):Int{
            notificationListNames.push(n.getIdentifier());
            return notificationList.push(n);
        }
        public function _remove(n:core4.notification.Notification){
            notificationListNames.remove(n.getIdentifier());
            notificationList.remove(n);
        }
        public function containsName(s:String):Bool{
            for(x in 0 ... notificationListNames.length){
                if(notificationListNames[x] == s){
                    return true;
                }
            }
            return false;
        }
}