#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_display_BMD
#include <core2/game/display/BMD.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_Map
#include <core2/game/world/maps/Map.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_layout_MapLayout
#include <core2/game/world/maps/layout/MapLayout.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_layout_managers_MapLayoutManager
#include <core2/game/world/maps/layout/managers/MapLayoutManager.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tile_Tile
#include <core2/game/world/maps/tile/Tile.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileManager
#include <core2/game/world/maps/tile/managers/TileManager.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tilesheet_MapTilesheet
#include <core2/game/world/maps/tilesheet/MapTilesheet.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tilesheet_managers_MapTilesheetManager
#include <core2/game/world/maps/tilesheet/managers/MapTilesheetManager.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tilesheet{

Void MapTilesheet_obj::__construct(::core2::game::world::maps::Map map,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet)
{
HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","new",0xbb1eb81e,"core2.game.world.maps.tilesheet.MapTilesheet.new","core2/game/world/maps/tilesheet/MapTilesheet.hx",26,0x630a4231)
HX_STACK_THIS(this)
HX_STACK_ARG(map,"map")
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(mapName,"mapName")
HX_STACK_ARG(__o_registerMapTilesheet,"registerMapTilesheet")
bool registerMapTilesheet = __o_registerMapTilesheet.Default(true);
{
	HX_STACK_LINE(27)
	::core2::game::display::BMD tmp = bmd;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	super::__construct(tmp);
	HX_STACK_LINE(28)
	this->m = map;
	HX_STACK_LINE(29)
	this->bitmapData = bmd;
	HX_STACK_LINE(30)
	::core2::game::world::maps::tile::managers::TileManager tmp1 = ::core2::game::world::maps::tile::managers::TileManager_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->tileManager = tmp1;
	HX_STACK_LINE(31)
	::core2::game::world::maps::layout::managers::MapLayoutManager tmp2 = ::core2::game::world::maps::layout::managers::MapLayoutManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	this->mapLayoutManager = tmp2;
	HX_STACK_LINE(32)
	int tmp3 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	this->id = tmp3;
	HX_STACK_LINE(33)
	bool tmp4 = registerMapTilesheet;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	if ((tmp4)){
		HX_STACK_LINE(34)
		::core2::game::world::maps::Map tmp5 = this->m;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(34)
		::core2::game::world::maps::tilesheet::managers::MapTilesheetManager tmp6 = tmp5->getMapTilesheetManager();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(34)
		::haxe::ds::_HashMap::HashMapData tmp7 = tmp6->getList();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(34)
		::haxe::ds::_HashMap::HashMapData this1 = tmp7;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(34)
		::haxe::ds::IntMap tmp8 = this1->keys;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(34)
		int tmp9 = this->hashCode();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(34)
		tmp8->set(tmp9,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(34)
		::haxe::ds::IntMap tmp10 = this1->values;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(34)
		int tmp11 = this->hashCode();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(34)
		::String tmp12 = mapName;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(34)
		tmp10->set(tmp11,tmp12);
	}
	HX_STACK_LINE(36)
	::String tmp5 = (mapName + HX_HCSTRING("NameArray.txt","\x30","\x89","\x6f","\x05"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(36)
	this->nameArray = this->generateNameArray(tmp5);
	HX_STACK_LINE(37)
	::core2::game::world::maps::Map tmp6 = map;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	::core2::game::world::maps::layout::managers::MapLayoutManager tmp7 = this->mapLayoutManager;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(37)
	::core2::game::display::BMD tmp8 = bmd;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(37)
	::String tmp9 = mapName;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(37)
	::core2::game::world::maps::layout::MapLayout tmp10 = ::core2::game::world::maps::layout::MapLayout_obj::__new(tmp6,tmp7,tmp8,tmp9,this->generateTiles(this->nameArray),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(37)
	this->mapLayout = tmp10;
	HX_STACK_LINE(38)
	::core2::game::world::maps::layout::MapLayout tmp11 = this->mapLayout;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(38)
	this->mapTilesheet = tmp11->getLayout();
}
;
	return null();
}

//MapTilesheet_obj::~MapTilesheet_obj() { }

Dynamic MapTilesheet_obj::__CreateEmpty() { return  new MapTilesheet_obj; }
hx::ObjectPtr< MapTilesheet_obj > MapTilesheet_obj::__new(::core2::game::world::maps::Map map,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet)
{  hx::ObjectPtr< MapTilesheet_obj > _result_ = new MapTilesheet_obj();
	_result_->__construct(map,bmd,mapName,__o_registerMapTilesheet);
	return _result_;}

Dynamic MapTilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapTilesheet_obj > _result_ = new MapTilesheet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

int MapTilesheet_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","hashCode",0x5893539d,"core2.game.world.maps.tilesheet.MapTilesheet.hashCode","core2/game/world/maps/tilesheet/MapTilesheet.hx",40,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,hashCode,return )

Array< ::String > MapTilesheet_obj::generateNameArray( ::String fName){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateNameArray",0xfd4d6597,"core2.game.world.maps.tilesheet.MapTilesheet.generateNameArray","core2/game/world/maps/tilesheet/MapTilesheet.hx",43,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fName,"fName")
	HX_STACK_LINE(44)
	Array< ::String > array = Array_obj< ::String >::__new();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(45)
	::String tmp = fName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::sys::io::FileInput tmp1 = ::sys::io::File_obj::read(tmp,false);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::sys::io::FileInput fin = tmp1;		HX_STACK_VAR(fin,"fin");
	HX_STACK_LINE(46)
	int x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(47)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(48)
		while((true)){
			HX_STACK_LINE(48)
			::String tmp2 = fin->readLine();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(48)
			bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(48)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(48)
			if ((tmp4)){
				HX_STACK_LINE(48)
				break;
			}
			HX_STACK_LINE(49)
			::String tmp5 = fin->readLine();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(49)
			array[x] = tmp5;
			HX_STACK_LINE(50)
			(x)++;
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(53)
				return null();
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(55)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(MapTilesheet_obj,generateNameArray,return )

Array< ::Dynamic > MapTilesheet_obj::generateTiles( Array< ::String > a){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateTiles",0xe9d70f4e,"core2.game.world.maps.tilesheet.MapTilesheet.generateTiles","core2/game/world/maps/tilesheet/MapTilesheet.hx",57,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(58)
	::core2::game::world::maps::Map tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = tmp->getAspectRatioX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	int arX = tmp1;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(59)
	::core2::game::world::maps::Map tmp2 = this->m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	int tmp3 = tmp2->getAspectRatioY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	int arY = tmp3;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(60)
	::core2::game::display::BMD tmp4 = this->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(60)
	int tmp6 = arX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(60)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(60)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(60)
	int xTo = tmp8;		HX_STACK_VAR(xTo,"xTo");
	HX_STACK_LINE(61)
	::core2::game::display::BMD tmp9 = this->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(61)
	int tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(61)
	int tmp11 = arY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(61)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(61)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(61)
	int yTo = tmp13;		HX_STACK_VAR(yTo,"yTo");
	HX_STACK_LINE(62)
	Array< ::Dynamic > tileArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(tileArray,"tileArray");
	HX_STACK_LINE(63)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		while((true)){
			HX_STACK_LINE(64)
			bool tmp14 = (_g < xTo);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(64)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(64)
			if ((tmp15)){
				HX_STACK_LINE(64)
				break;
			}
			HX_STACK_LINE(64)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(64)
			int x = tmp16;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(65)
			{
				HX_STACK_LINE(65)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(65)
				while((true)){
					HX_STACK_LINE(65)
					bool tmp17 = (_g1 < yTo);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(65)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(65)
					if ((tmp18)){
						HX_STACK_LINE(65)
						break;
					}
					HX_STACK_LINE(65)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(65)
					int y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(66)
					int tmp20 = (x * arX);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(66)
					int tmp21 = (y * arY);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(66)
					int tmp22 = arX;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(66)
					int tmp23 = arY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(66)
					::openfl::geom::Rectangle tmp24 = ::openfl::geom::Rectangle_obj::__new(tmp20,tmp21,tmp22,tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(66)
					int tmp25 = this->addTileRect(tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(66)
					int tileID = tmp25;		HX_STACK_VAR(tileID,"tileID");
					HX_STACK_LINE(67)
					::String tmp26 = a->__get(z);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(67)
					bool tmp27 = (tmp26 == null());		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(67)
					if ((tmp27)){
						HX_STACK_LINE(68)
						::String tileName = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(tileName,"tileName");
						HX_STACK_LINE(69)
						while((true)){
							HX_STACK_LINE(69)
							bool tmp28 = (tileName == null());		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(69)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(69)
							if ((tmp29)){
								HX_STACK_LINE(69)
								break;
							}
							HX_STACK_LINE(70)
							::Sys_obj::print(HX_HCSTRING("Enter Tilename: ","\xa7","\xb1","\xcd","\x16"));
							HX_STACK_LINE(71)
							::haxe::io::Input tmp30 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(71)
							::String tmp31 = tmp30->readLine();		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(71)
							tileName = tmp31;
						}
						HX_STACK_LINE(73)
						::core2::game::world::maps::tile::managers::TileManager tmp28 = this->tileManager;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(73)
						::String tmp29 = tileName;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(73)
						int tmp30 = tileID;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(73)
						::core2::game::world::maps::tile::Tile tmp31 = ::core2::game::world::maps::tile::Tile_obj::__new(tmp28,tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(73)
						tileArray[tileArray->length] = tmp31;
					}
					else{
						HX_STACK_LINE(75)
						::core2::game::world::maps::tile::managers::TileManager tmp28 = this->tileManager;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(75)
						::String tmp29 = a->__get(z);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(75)
						int tmp30 = tileID;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(75)
						::core2::game::world::maps::tile::Tile tmp31 = ::core2::game::world::maps::tile::Tile_obj::__new(tmp28,tmp29,tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(75)
						tileArray[tileArray->length] = tmp31;
					}
					HX_STACK_LINE(77)
					(z)++;
				}
			}
		}
	}
	HX_STACK_LINE(80)
	return tileArray;
}


HX_DEFINE_DYNAMIC_FUNC1(MapTilesheet_obj,generateTiles,return )

::core2::game::world::maps::layout::MapLayout MapTilesheet_obj::getMapLayout( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getMapLayout",0xd053d772,"core2.game.world.maps.tilesheet.MapTilesheet.getMapLayout","core2/game/world/maps/tilesheet/MapTilesheet.hx",82,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	::core2::game::world::maps::layout::MapLayout tmp = this->mapLayout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getMapLayout,return )

::core2::game::world::maps::tilesheet::MapTilesheet MapTilesheet_obj::getMapTilesheet( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getMapTilesheet",0x644e54e9,"core2.game.world.maps.tilesheet.MapTilesheet.getMapTilesheet","core2/game/world/maps/tilesheet/MapTilesheet.hx",86,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getMapTilesheet,return )

Array< Float > MapTilesheet_obj::getTileData( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getTileData",0x9c1314ec,"core2.game.world.maps.tilesheet.MapTilesheet.getTileData","core2/game/world/maps/tilesheet/MapTilesheet.hx",89,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	return this->generateTileDataArray();
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getTileData,return )

Array< Float > MapTilesheet_obj::generateTileDataArray( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateTileDataArray",0xce6bb0ca,"core2.game.world.maps.tilesheet.MapTilesheet.generateTileDataArray","core2/game/world/maps/tilesheet/MapTilesheet.hx",91,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	Array< Float > tileDataArray = Array_obj< Float >::__new();		HX_STACK_VAR(tileDataArray,"tileDataArray");
	HX_STACK_LINE(93)
	::core2::game::world::maps::Map tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	int tmp1 = tmp->getAspectRatioX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	int arX = tmp1;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(94)
	::core2::game::world::maps::Map tmp2 = this->m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	int tmp3 = tmp2->getAspectRatioY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(94)
	int arY = tmp3;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(95)
	::core2::game::display::BMD tmp4 = this->bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(95)
	int tmp6 = arX;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(95)
	Float tmp7 = (Float(tmp5) / Float(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(95)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(95)
	int xTo = tmp8;		HX_STACK_VAR(xTo,"xTo");
	HX_STACK_LINE(96)
	::core2::game::display::BMD tmp9 = this->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(96)
	int tmp10 = tmp9->height;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(96)
	int tmp11 = arY;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(96)
	Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(96)
	int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(96)
	int yTo = tmp13;		HX_STACK_VAR(yTo,"yTo");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while((true)){
			HX_STACK_LINE(97)
			bool tmp14 = (_g < xTo);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(97)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(97)
			if ((tmp15)){
				HX_STACK_LINE(97)
				break;
			}
			HX_STACK_LINE(97)
			int tmp16 = (_g)++;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(97)
			int x = tmp16;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(98)
				while((true)){
					HX_STACK_LINE(98)
					bool tmp17 = (_g1 < yTo);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(98)
					bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(98)
					if ((tmp18)){
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(98)
					int tmp19 = (_g1)++;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(98)
					int y = tmp19;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(99)
					int tmp20 = (x * arX);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(99)
					int tmp21 = (y * arY);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(99)
					int tmp22 = this->mapTilesheet->__get(x).StaticCast< Array< int > >()->__get(y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(99)
					tileDataArray = tileDataArray->concat(Array_obj< Float >::__new().Add(tmp20).Add(tmp21).Add(tmp22));
				}
			}
		}
	}
	HX_STACK_LINE(102)
	return tileDataArray;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,generateTileDataArray,return )


MapTilesheet_obj::MapTilesheet_obj()
{
}

void MapTilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapTilesheet);
	HX_MARK_MEMBER_NAME(nameArray,"nameArray");
	HX_MARK_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_MARK_MEMBER_NAME(mapLayout,"mapLayout");
	HX_MARK_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_MARK_MEMBER_NAME(tileManager,"tileManager");
	HX_MARK_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(id,"id");
	::openfl::display::Tilesheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapTilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nameArray,"nameArray");
	HX_VISIT_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_VISIT_MEMBER_NAME(mapLayout,"mapLayout");
	HX_VISIT_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_VISIT_MEMBER_NAME(tileManager,"tileManager");
	HX_VISIT_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(id,"id");
	::openfl::display::Tilesheet_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MapTilesheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { return nameArray; }
		if (HX_FIELD_EQ(inName,"mapLayout") ) { return mapLayout; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { return tileManager; }
		if (HX_FIELD_EQ(inName,"getTileData") ) { return getTileData_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { return mapTilesheet; }
		if (HX_FIELD_EQ(inName,"getMapLayout") ) { return getMapLayout_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"generateTiles") ) { return generateTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMapTilesheet") ) { return getMapTilesheet_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { return mapLayoutManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateNameArray") ) { return generateNameArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { return mapTilesheetManager; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"generateTileDataArray") ) { return generateTileDataArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapTilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< ::core2::game::world::maps::Map >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { nameArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapLayout") ) { mapLayout=inValue.Cast< ::core2::game::world::maps::layout::MapLayout >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { mapTilesheet=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { mapLayoutManager=inValue.Cast< ::core2::game::world::maps::layout::managers::MapLayoutManager >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { mapTilesheetManager=inValue.Cast< ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapTilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"));
	outFields->push(HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"));
	outFields->push(HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b"));
	outFields->push(HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"));
	outFields->push(HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"));
	outFields->push(HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MapTilesheet_obj,nameArray),HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapTilesheet_obj,mapTilesheet),HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09")},
	{hx::fsObject /*::core2::game::world::maps::layout::MapLayout*/ ,(int)offsetof(MapTilesheet_obj,mapLayout),HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::managers::MapTilesheetManager*/ ,(int)offsetof(MapTilesheet_obj,mapTilesheetManager),HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(MapTilesheet_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{hx::fsObject /*::core2::game::world::maps::layout::managers::MapLayoutManager*/ ,(int)offsetof(MapTilesheet_obj,mapLayoutManager),HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b")},
	{hx::fsObject /*::core2::game::world::maps::Map*/ ,(int)offsetof(MapTilesheet_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(MapTilesheet_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsInt,(int)offsetof(MapTilesheet_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"),
	HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"),
	HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b"),
	HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"),
	HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"),
	HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("generateNameArray","\x59","\xad","\x1b","\x15"),
	HX_HCSTRING("generateTiles","\x10","\xce","\xb1","\xb6"),
	HX_HCSTRING("getMapLayout","\xf0","\xa6","\xee","\x4a"),
	HX_HCSTRING("getMapTilesheet","\x2b","\xc8","\x67","\x2c"),
	HX_HCSTRING("getTileData","\x2e","\x3f","\x5d","\xa2"),
	HX_HCSTRING("generateTileDataArray","\x8c","\x01","\x26","\x0c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapTilesheet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapTilesheet_obj::__mClass,"__mClass");
};

#endif

hx::Class MapTilesheet_obj::__mClass;

void MapTilesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.tilesheet.MapTilesheet","\x2c","\x11","\x65","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapTilesheet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tilesheet
