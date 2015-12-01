#ifndef INCLUDED_core2_game_world_maps_layout_MapLayout
#define INCLUDED_core2_game_world_maps_layout_MapLayout

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,display,BMD)
HX_DECLARE_CLASS4(core2,game,world,maps,Map)
HX_DECLARE_CLASS5(core2,game,world,maps,layout,MapLayout)
HX_DECLARE_CLASS6(core2,game,world,maps,layout,managers,MapLayoutManager)
HX_DECLARE_CLASS5(core2,game,world,maps,tile,Tile)
HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileManager)
HX_DECLARE_CLASS5(core2,game,world,maps,tilesheet,MapTilesheet)
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
namespace layout{


class HXCPP_CLASS_ATTRIBUTES  MapLayout_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapLayout_obj OBJ_;
		MapLayout_obj();
		Void __construct(::core2::game::world::maps::Map map,::core2::game::world::maps::tilesheet::MapTilesheet mts,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,int w,int h,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.layout.MapLayout")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MapLayout_obj > __new(::core2::game::world::maps::Map map,::core2::game::world::maps::tilesheet::MapTilesheet mts,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,int w,int h,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapLayout_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("MapLayout","\x46","\xea","\x6a","\xdd"); }

		::haxe::ds::IntMap layout;
		Array< ::String > nameArray;
		::core2::game::display::BMD bitmapData;
		::core2::game::world::maps::tile::managers::TileManager tileManager;
		::core2::game::world::maps::Map m;
		int tmHash;
		int width;
		int height;
		Array< ::Dynamic > ta;
		::core2::game::world::maps::tilesheet::MapTilesheet mapTilesheet;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::haxe::ds::IntMap gLayout( Array< ::Dynamic > ta,int w,int h,int arX,int arY);
		Dynamic gLayout_dyn();

		virtual ::haxe::ds::IntMap getLayout( );
		Dynamic getLayout_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual Array< ::Dynamic > getTileArray( );
		Dynamic getTileArray_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace layout

#endif /* INCLUDED_core2_game_world_maps_layout_MapLayout */ 
