package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/Sprites/player/movement/left/left.png", "assets/Sprites/player/movement/left/left.png");
			type.set ("assets/Sprites/player/movement/left/left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/left/left_fall.png", "assets/Sprites/player/movement/left/left_fall.png");
			type.set ("assets/Sprites/player/movement/left/left_fall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/left/left_jump.png", "assets/Sprites/player/movement/left/left_jump.png");
			type.set ("assets/Sprites/player/movement/left/left_jump.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/left/left_touchdown.png", "assets/Sprites/player/movement/left/left_touchdown.png");
			type.set ("assets/Sprites/player/movement/left/left_touchdown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/right/right.png", "assets/Sprites/player/movement/right/right.png");
			type.set ("assets/Sprites/player/movement/right/right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/right/right_fall.png", "assets/Sprites/player/movement/right/right_fall.png");
			type.set ("assets/Sprites/player/movement/right/right_fall.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/right/right_jump.png", "assets/Sprites/player/movement/right/right_jump.png");
			type.set ("assets/Sprites/player/movement/right/right_jump.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/movement/right/right_touchdown.png", "assets/Sprites/player/movement/right/right_touchdown.png");
			type.set ("assets/Sprites/player/movement/right/right_touchdown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/Sprites/player/player.psd", "assets/Sprites/player/player.psd");
			type.set ("assets/Sprites/player/player.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/Sprites/player/player2.psd", "assets/Sprites/player/player2.psd");
			type.set ("assets/Sprites/player/player2.psd", Reflect.field (AssetType, "binary".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
