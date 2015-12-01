#ifndef INCLUDED_core2_game_world_maps_tilesheet_managers_MapTilesheetManager
#define INCLUDED_core2_game_world_maps_tilesheet_managers_MapTilesheetManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(core2,game,world,maps,tilesheet,managers,MapTilesheetManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tilesheet{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  MapTilesheetManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapTilesheetManager_obj OBJ_;
		MapTilesheetManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.tilesheet.managers.MapTilesheetManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapTilesheetManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapTilesheetManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapTilesheetManager","\x58","\x28","\x73","\xaa"); }

		::haxe::ds::StringMap list;
		::core2::game::world::maps::tilesheet::managers::MapTilesheetManager mapTilesheetManager;
		virtual ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager getMapTilesheetManager( );
		Dynamic getMapTilesheetManager_dyn();

		virtual ::haxe::ds::StringMap getList( );
		Dynamic getList_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tilesheet
} // end namespace managers

#endif /* INCLUDED_core2_game_world_maps_tilesheet_managers_MapTilesheetManager */ 
