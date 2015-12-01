#ifndef INCLUDED_core2_game_world_maps_tilesheet_MapTilesheet
#define INCLUDED_core2_game_world_maps_tilesheet_MapTilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
HX_DECLARE_CLASS3(core2,game,display,BMD)
HX_DECLARE_CLASS4(core2,game,world,maps,Map)
HX_DECLARE_CLASS5(core2,game,world,maps,layout,MapLayout)
HX_DECLARE_CLASS6(core2,game,world,maps,layout,managers,MapLayoutManager)
HX_DECLARE_CLASS5(core2,game,world,maps,tile,Tile)
HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileManager)
HX_DECLARE_CLASS5(core2,game,world,maps,tilesheet,MapTilesheet)
HX_DECLARE_CLASS6(core2,game,world,maps,tilesheet,managers,MapTilesheetManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tilesheet{


class HXCPP_CLASS_ATTRIBUTES  MapTilesheet_obj : public ::openfl::display::Tilesheet_obj{
	public:
		typedef ::openfl::display::Tilesheet_obj super;
		typedef MapTilesheet_obj OBJ_;
		MapTilesheet_obj();
		Void __construct(::core2::game::world::maps::Map map,int w,int h,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.tilesheet.MapTilesheet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapTilesheet_obj > __new(::core2::game::world::maps::Map map,int w,int h,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapTilesheet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapTilesheet","\x95","\xbe","\x8f","\xd1"); }

		Array< ::String > nameArray;
		Array< ::Dynamic > tileArray;
		::haxe::ds::IntMap mapTilesheet;
		::core2::game::world::maps::layout::MapLayout mapLayout;
		::core2::game::world::maps::tilesheet::managers::MapTilesheetManager mapTilesheetManager;
		::core2::game::world::maps::tile::managers::TileManager tileManager;
		::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager;
		::core2::game::world::maps::Map m;
		::core2::game::display::BMD bitmapData;
		int id;
		bool nameArrayFromFile;
		Array< Float > tileDataArray;
		int width;
		int height;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual Array< ::String > generateNameArray( ::String fName);
		Dynamic generateNameArray_dyn();

		virtual Array< ::Dynamic > generateTiles( Array< ::String > a,::core2::game::world::maps::tile::managers::TileManager tm,::core2::game::display::BMD bmd,int w,int h);
		Dynamic generateTiles_dyn();

		virtual ::core2::game::world::maps::layout::MapLayout getMapLayout( );
		Dynamic getMapLayout_dyn();

		virtual ::core2::game::world::maps::tilesheet::MapTilesheet getMapTilesheet( );
		Dynamic getMapTilesheet_dyn();

		virtual Array< Float > getTileData( );
		Dynamic getTileData_dyn();

		virtual Array< ::Dynamic > getTileArray( );
		Dynamic getTileArray_dyn();

		virtual Array< Float > generateTileDataArray( ::core2::game::world::maps::Map m,::haxe::ds::IntMap mts,::core2::game::display::BMD bmd,int x,int y,int z,int w,int h,int arX,int arY,Array< Float > a);
		Dynamic generateTileDataArray_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tilesheet

#endif /* INCLUDED_core2_game_world_maps_tilesheet_MapTilesheet */ 
