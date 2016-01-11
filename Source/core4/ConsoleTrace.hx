package core4;

class ConsoleTrace {
    public static function setRedirection() {
        haxe.Log.trace = myTrace;
    }

    private static function myTrace( v : Dynamic, ?inf : haxe.PosInfos ) {
        var fileOut = sys.io.File.write("console.txt", false);
        fileOut.writeString(inf.className+"#"+inf.methodName+"("+inf.lineNumber+"): "+v+"\n");
        fileOut.close();
    }
}