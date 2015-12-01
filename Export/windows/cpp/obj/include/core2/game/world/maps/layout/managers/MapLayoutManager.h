#ifndef INCLUDED_core2_game_world_maps_layout_managers_MapLayoutManager
#define INCLUDED_core2_game_world_maps_layout_managers_MapLayoutManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS6(core2,game,world,maps,layout,managers,MapLayoutManager)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace layout{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  MapLayoutManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapLayoutManager_obj OBJ_;
		MapLayoutManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.layout.managers.MapLayoutManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapLayoutManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapLayoutManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapLayoutManager","\xc7","\x44","\x04","\xa5"); }

		::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager;
		::haxe::ds::ObjectMap list;
		virtual ::core2::game::world::maps::layout::managers::MapLayoutManager getMapLayoutManager( );
		Dynamic getMapLayoutManager_dyn();

		virtual ::haxe::ds::ObjectMap getList( );
		Dynamic getList_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace layout
} // end namespace managers

#endif /* INCLUDED_core2_game_world_maps_layout_managers_MapLayoutManager */ 
