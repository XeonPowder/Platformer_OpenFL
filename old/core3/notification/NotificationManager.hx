package core3.notification;

class NotificationManager{
        private var notificationList:Array<core3.notification.Notification>;
        private var notificationListNames:Array<String>;
        private var manager:core3.Manager;

        public function new(m:core3.Manager){
                manager = m;
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
        public function getNotificationList():Array<core3.notification.Notification>{
            return notificationList;
        }
        public function _new(n:core3.notification.Notification):Int{
            notificationListNames.push(n.getIdentifier());
            return notificationList.push(n);
        }
        public function _remove(n:core3.notification.Notification){
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