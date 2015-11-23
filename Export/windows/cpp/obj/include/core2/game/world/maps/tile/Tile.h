#ifndef INCLUDED_core2_game_world_maps_tile_Tile
#define INCLUDED_core2_game_world_maps_tile_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(core2,game,world,maps,tile,Tile)
HX_DECLARE_CLASS6(core2,game,world,maps,tile,managers,TileManager)
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tile{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(::core2::game::world::maps::tile::managers::TileManager tm,::String name,int tileid,hx::Null< bool >  __o_registerTile);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.maps.tile.Tile")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tile_obj > __new(::core2::game::world::maps::tile::managers::TileManager tm,::String name,int tileid,hx::Null< bool >  __o_registerTile);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tile","\x4e","\xf7","\xd5","\x37"); }

		::String tileName;
		int tileID;
		::core2::game::world::maps::tile::managers::TileManager tileManager;
		int id;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::world::maps::tile::Tile getTile( );
		Dynamic getTile_dyn();

		virtual int getTileID( );
		Dynamic getTileID_dyn();

		virtual ::String getTileName( );
		Dynamic getTileName_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tile

#endif /* INCLUDED_core2_game_world_maps_tile_Tile */ 
