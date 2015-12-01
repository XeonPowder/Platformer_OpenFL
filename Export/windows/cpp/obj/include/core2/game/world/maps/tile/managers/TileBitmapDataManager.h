#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileBitmapDataManager
#define INCLUDED_core2_game_world_maps_tile_managers_TileBitmapDataManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileBitmapDataManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tile{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  TileBitmapDataManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileBitmapDataManager_obj OBJ_;
		TileBitmapDataManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.tile.managers.TileBitmapDataManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileBitmapDataManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileBitmapDataManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TileBitmapDataManager","\x86","\xce","\x73","\xf5"); }

		::haxe::ds::StringMap list;
		::core2::game::world::maps::tile::managers::TileBitmapDataManager tileBitmapDataManager;
		virtual ::core2::game::world::maps::tile::managers::TileBitmapDataManager getTileBitmapDataManager( );
		Dynamic getTileBitmapDataManager_dyn();

		virtual ::haxe::ds::StringMap getList( );
		Dynamic getList_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tile
} // end namespace managers

#endif /* INCLUDED_core2_game_world_maps_tile_managers_TileBitmapDataManager */ 
