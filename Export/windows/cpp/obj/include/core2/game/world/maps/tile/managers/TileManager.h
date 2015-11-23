#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileManager
#define INCLUDED_core2_game_world_maps_tile_managers_TileManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileManager)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tile{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  TileManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TileManager_obj OBJ_;
		TileManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.tile.managers.TileManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TileManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TileManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("TileManager","\xbf","\x68","\x58","\x97"); }

		::haxe::ds::_HashMap::HashMapData list;
		::core2::game::world::maps::tile::managers::TileManager tileManager;
		virtual ::core2::game::world::maps::tile::managers::TileManager getTileManager( );
		Dynamic getTileManager_dyn();

		virtual ::haxe::ds::_HashMap::HashMapData getList( );
		Dynamic getList_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tile
} // end namespace managers

#endif /* INCLUDED_core2_game_world_maps_tile_managers_TileManager */ 
