#ifndef INCLUDED_core2_game_world_maps_managers_MapManager
#define INCLUDED_core2_game_world_maps_managers_MapManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(core2,game,world,maps,managers,MapManager)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  MapManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapManager_obj OBJ_;
		MapManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.managers.MapManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapManager","\x51","\x7f","\x03","\xab"); }

		::haxe::ds::_HashMap::HashMapData manager;
		virtual ::core2::game::world::maps::managers::MapManager getManager( );
		Dynamic getManager_dyn();

		virtual ::haxe::ds::_HashMap::HashMapData getMapManager( );
		Dynamic getMapManager_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace managers

#endif /* INCLUDED_core2_game_world_maps_managers_MapManager */ 
