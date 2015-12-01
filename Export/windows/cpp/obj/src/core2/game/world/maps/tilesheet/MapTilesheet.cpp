#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
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

Void MapTilesheet_obj::__construct(::core2::game::world::maps::Map map,int w,int h,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet)
{
HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","new",0xbb1eb81e,"core2.game.world.maps.tilesheet.MapTilesheet.new","core2/game/world/maps/tilesheet/MapTilesheet.hx",35,0x630a4231)
HX_STACK_THIS(this)
HX_STACK_ARG(map,"map")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(mapName,"mapName")
HX_STACK_ARG(__o_registerMapTilesheet,"registerMapTilesheet")
bool registerMapTilesheet = __o_registerMapTilesheet.Default(true);
{
	HX_STACK_LINE(36)
	::openfl::display::BitmapData tmp = bmd->getData();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	super::__construct(tmp);
	HX_STACK_LINE(37)
	this->m = map;
	HX_STACK_LINE(38)
	::core2::game::world::maps::Map tmp1 = this->m;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(38)
	int tmp2 = tmp1->getAspectRatioX();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	int arX = tmp2;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(39)
	::core2::game::world::maps::Map tmp3 = this->m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	int tmp4 = tmp3->getAspectRatioY();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	int arY = tmp4;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(40)
	this->width = w;
	HX_STACK_LINE(41)
	this->height = h;
	HX_STACK_LINE(42)
	this->bitmapData = bmd;
	HX_STACK_LINE(43)
	::core2::game::world::maps::tile::managers::TileManager tmp5 = ::core2::game::world::maps::tile::managers::TileManager_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	this->tileManager = tmp5;
	HX_STACK_LINE(44)
	::core2::game::world::maps::layout::managers::MapLayoutManager tmp6 = ::core2::game::world::maps::layout::managers::MapLayoutManager_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(44)
	this->mapLayoutManager = tmp6;
	HX_STACK_LINE(45)
	int tmp7 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(45)
	this->id = tmp7;
	HX_STACK_LINE(46)
	bool tmp8 = registerMapTilesheet;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(46)
	if ((tmp8)){
		HX_STACK_LINE(47)
		::core2::game::world::maps::Map tmp9 = this->m;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(47)
		::core2::game::world::maps::tilesheet::managers::MapTilesheetManager tmp10 = tmp9->getMapTilesheetManager();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(47)
		::haxe::ds::StringMap tmp11 = tmp10->getList();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(47)
		::String tmp12 = mapName;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(47)
		tmp11->set(tmp12,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(49)
	this->nameArray = Array_obj< ::String >::__new();
	HX_STACK_LINE(50)
	::String tmp9 = (HX_HCSTRING("assets/maps/","\x2c","\x50","\x0b","\xcf") + mapName);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(50)
	::String tmp10 = (tmp9 + HX_HCSTRING("/NameArray.txt","\xa1","\xd7","\x41","\xc3"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(50)
	this->nameArray = this->generateNameArray(tmp10);
	HX_STACK_LINE(51)
	this->tileArray = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(52)
	::core2::game::world::maps::tile::managers::TileManager tmp11 = this->tileManager;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(52)
	::core2::game::display::BMD tmp12 = this->bitmapData;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(52)
	int tmp13 = this->width;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(52)
	int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(52)
	this->tileArray = this->generateTiles(this->nameArray,tmp11,tmp12,tmp13,tmp14);
	HX_STACK_LINE(53)
	::core2::game::world::maps::Map tmp15 = map;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(53)
	::core2::game::world::maps::layout::managers::MapLayoutManager tmp16 = this->mapLayoutManager;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(53)
	::core2::game::display::BMD tmp17 = bmd;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(53)
	::String tmp18 = mapName;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(53)
	int tmp19 = this->width;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(53)
	int tmp20 = this->height;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(53)
	::core2::game::world::maps::layout::MapLayout tmp21 = ::core2::game::world::maps::layout::MapLayout_obj::__new(tmp15,hx::ObjectPtr<OBJ_>(this),tmp16,tmp17,tmp18,tmp19,tmp20,this->tileArray,null());		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(53)
	this->mapLayout = tmp21;
	HX_STACK_LINE(54)
	::haxe::ds::IntMap tmp22 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(54)
	this->mapTilesheet = tmp22;
	HX_STACK_LINE(55)
	::core2::game::world::maps::layout::MapLayout tmp23 = this->mapLayout;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(55)
	::haxe::ds::IntMap tmp24 = tmp23->getLayout();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(55)
	this->mapTilesheet = tmp24;
	HX_STACK_LINE(56)
	::haxe::ds::IntMap tmp25 = this->mapTilesheet;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(56)
	Dynamic tmp26 = hx::SourceInfo(HX_HCSTRING("MapTilesheet.hx","\x49","\x0f","\xfb","\x4a"),56,HX_HCSTRING("core2.game.world.maps.tilesheet.MapTilesheet","\x2c","\x11","\x65","\xe0"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(56)
	::haxe::Log_obj::trace(tmp25,tmp26);
	HX_STACK_LINE(57)
	this->tileDataArray = Array_obj< Float >::__new();
	HX_STACK_LINE(58)
	::core2::game::world::maps::Map tmp27 = this->m;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(58)
	::haxe::ds::IntMap tmp28 = this->mapTilesheet;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(58)
	::core2::game::display::BMD tmp29 = this->bitmapData;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(58)
	int tmp30 = this->width;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(58)
	int tmp31 = this->height;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(58)
	int tmp32 = arX;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(58)
	int tmp33 = arY;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(58)
	this->tileDataArray = this->generateTileDataArray(tmp27,tmp28,tmp29,(int)0,(int)0,(int)0,tmp30,tmp31,tmp32,tmp33,Array_obj< Float >::__new());
}
;
	return null();
}

//MapTilesheet_obj::~MapTilesheet_obj() { }

Dynamic MapTilesheet_obj::__CreateEmpty() { return  new MapTilesheet_obj; }
hx::ObjectPtr< MapTilesheet_obj > MapTilesheet_obj::__new(::core2::game::world::maps::Map map,int w,int h,::core2::game::display::BMD bmd,::String mapName,hx::Null< bool >  __o_registerMapTilesheet)
{  hx::ObjectPtr< MapTilesheet_obj > _result_ = new MapTilesheet_obj();
	_result_->__construct(map,w,h,bmd,mapName,__o_registerMapTilesheet);
	return _result_;}

Dynamic MapTilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapTilesheet_obj > _result_ = new MapTilesheet_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

int MapTilesheet_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","hashCode",0x5893539d,"core2.game.world.maps.tilesheet.MapTilesheet.hashCode","core2/game/world/maps/tilesheet/MapTilesheet.hx",60,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(61)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,hashCode,return )

Array< ::String > MapTilesheet_obj::generateNameArray( ::String fName){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateNameArray",0xfd4d6597,"core2.game.world.maps.tilesheet.MapTilesheet.generateNameArray","core2/game/world/maps/tilesheet/MapTilesheet.hx",63,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fName,"fName")
	HX_STACK_LINE(64)
	Array< ::String > array = Array_obj< ::String >::__new();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(65)
	this->nameArrayFromFile = false;
	HX_STACK_LINE(66)
	::String tmp = fName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	bool tmp1 = ::sys::FileSystem_obj::exists(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(66)
	if ((tmp1)){
		HX_STACK_LINE(67)
		::String tmp2 = fName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::sys::io::FileInput tmp3 = ::sys::io::File_obj::read(tmp2,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		::sys::io::FileInput fin = tmp3;		HX_STACK_VAR(fin,"fin");
		HX_STACK_LINE(68)
		int x = (int)0;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(69)
		try
		{
		HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
		{
			HX_STACK_LINE(70)
			while((true)){
				HX_STACK_LINE(71)
				::String tmp4 = fin->readLine();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(71)
				array[x] = tmp4;
				HX_STACK_LINE(72)
				(x)++;
			}
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::haxe::io::Eof >() ){
				HX_STACK_BEGIN_CATCH
				::haxe::io::Eof e = __e;{
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(76)
		this->nameArrayFromFile = true;
	}
	HX_STACK_LINE(78)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(MapTilesheet_obj,generateNameArray,return )

Array< ::Dynamic > MapTilesheet_obj::generateTiles( Array< ::String > a,::core2::game::world::maps::tile::managers::TileManager tm,::core2::game::display::BMD bmd,int w,int h){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateTiles",0xe9d70f4e,"core2.game.world.maps.tilesheet.MapTilesheet.generateTiles","core2/game/world/maps/tilesheet/MapTilesheet.hx",80,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(tm,"tm")
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_LINE(81)
	::core2::game::world::maps::Map tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	int tmp1 = tmp->getAspectRatioX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	int arX = tmp1;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(82)
	::core2::game::world::maps::Map tmp2 = this->m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	int tmp3 = tmp2->getAspectRatioY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	int arY = tmp3;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(83)
	Float tmp4 = (Float(w) / Float(arX));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(83)
	int xTo = tmp5;		HX_STACK_VAR(xTo,"xTo");
	HX_STACK_LINE(84)
	Float tmp6 = (Float(h) / Float(arY));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(84)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(84)
	int yTo = tmp7;		HX_STACK_VAR(yTo,"yTo");
	HX_STACK_LINE(85)
	Array< ::Dynamic > f_tileArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(f_tileArray,"f_tileArray");
	HX_STACK_LINE(86)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while((true)){
			HX_STACK_LINE(87)
			bool tmp8 = (_g < xTo);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(87)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(87)
			if ((tmp9)){
				HX_STACK_LINE(87)
				break;
			}
			HX_STACK_LINE(87)
			int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(87)
			int x = tmp10;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(88)
				while((true)){
					HX_STACK_LINE(88)
					bool tmp11 = (_g1 < yTo);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(88)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(88)
					if ((tmp12)){
						HX_STACK_LINE(88)
						break;
					}
					HX_STACK_LINE(88)
					int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(88)
					int y = tmp13;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(89)
					int tmp14 = (x * arX);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(89)
					int tmp15 = (y * arY);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(89)
					int tmp16 = arX;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(89)
					int tmp17 = arY;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(89)
					::openfl::geom::Rectangle tmp18 = ::openfl::geom::Rectangle_obj::__new(tmp14,tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(89)
					int tmp19 = this->addTileRect(tmp18,null());		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(89)
					int tileID = tmp19;		HX_STACK_VAR(tileID,"tileID");
					HX_STACK_LINE(90)
					::String tmp20 = a->__get(z);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(90)
					bool tmp21 = (tmp20 != null());		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(90)
					if ((tmp21)){
						HX_STACK_LINE(91)
						::String tmp22 = (HX_HCSTRING("x:","\xc2","\x68","\x00","\x00") + x);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(91)
						::String tmp23 = (tmp22 + HX_HCSTRING(" y:","\xc1","\xb1","\x18","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(91)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(91)
						::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(91)
						::String tmp26 = ::String(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(91)
						::String tileName = tmp26;		HX_STACK_VAR(tileName,"tileName");
						HX_STACK_LINE(92)
						::core2::game::world::maps::tile::Tile tmp27 = ::core2::game::world::maps::tile::Tile_obj::__new(tm,tileName,tileID,null());		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(92)
						f_tileArray[z] = tmp27;
					}
					else{
						HX_STACK_LINE(94)
						::core2::game::world::maps::tile::managers::TileManager tmp22 = tm;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(94)
						::String tmp23 = a->__get(z);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(94)
						int tmp24 = tileID;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(94)
						::core2::game::world::maps::tile::Tile tmp25 = ::core2::game::world::maps::tile::Tile_obj::__new(tmp22,tmp23,tmp24,null());		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(94)
						f_tileArray[z] = tmp25;
					}
					HX_STACK_LINE(96)
					(z)++;
				}
			}
		}
	}
	HX_STACK_LINE(99)
	return f_tileArray;
}


HX_DEFINE_DYNAMIC_FUNC5(MapTilesheet_obj,generateTiles,return )

::core2::game::world::maps::layout::MapLayout MapTilesheet_obj::getMapLayout( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getMapLayout",0xd053d772,"core2.game.world.maps.tilesheet.MapTilesheet.getMapLayout","core2/game/world/maps/tilesheet/MapTilesheet.hx",101,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	::core2::game::world::maps::layout::MapLayout tmp = this->mapLayout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getMapLayout,return )

::core2::game::world::maps::tilesheet::MapTilesheet MapTilesheet_obj::getMapTilesheet( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getMapTilesheet",0x644e54e9,"core2.game.world.maps.tilesheet.MapTilesheet.getMapTilesheet","core2/game/world/maps/tilesheet/MapTilesheet.hx",105,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getMapTilesheet,return )

Array< Float > MapTilesheet_obj::getTileData( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getTileData",0x9c1314ec,"core2.game.world.maps.tilesheet.MapTilesheet.getTileData","core2/game/world/maps/tilesheet/MapTilesheet.hx",108,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	return this->tileDataArray;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getTileData,return )

Array< ::Dynamic > MapTilesheet_obj::getTileArray( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","getTileArray",0x45a69897,"core2.game.world.maps.tilesheet.MapTilesheet.getTileArray","core2/game/world/maps/tilesheet/MapTilesheet.hx",111,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	return this->tileArray;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheet_obj,getTileArray,return )

Array< Float > MapTilesheet_obj::generateTileDataArray( ::core2::game::world::maps::Map m,::haxe::ds::IntMap mts,::core2::game::display::BMD bmd,int x,int y,int z,int w,int h,int arX,int arY,Array< Float > a){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.MapTilesheet","generateTileDataArray",0xce6bb0ca,"core2.game.world.maps.tilesheet.MapTilesheet.generateTileDataArray","core2/game/world/maps/tilesheet/MapTilesheet.hx",113,0x630a4231)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_ARG(mts,"mts")
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(z,"z")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(arX,"arX")
	HX_STACK_ARG(arY,"arY")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(114)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = (Float(w) / Float(arX));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	bool tmp3 = (tmp > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	if ((tmp3)){
		HX_STACK_LINE(115)
		x = (int)0;
		HX_STACK_LINE(116)
		(y)++;
	}
	HX_STACK_LINE(118)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(118)
	Float tmp5 = (Float(h) / Float(arY));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(118)
	int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(118)
	bool tmp7 = (tmp4 > tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(118)
	if ((tmp7)){
		HX_STACK_LINE(119)
		y = (int)0;
	}
	HX_STACK_LINE(121)
	::haxe::ds::IntMap tmp8 = mts;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(121)
	Dynamic tmp9 = hx::SourceInfo(HX_HCSTRING("MapTilesheet.hx","\x49","\x0f","\xfb","\x4a"),121,HX_HCSTRING("core2.game.world.maps.tilesheet.MapTilesheet","\x2c","\x11","\x65","\xe0"),HX_HCSTRING("generateTileDataArray","\x8c","\x01","\x26","\x0c"));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(121)
	::haxe::Log_obj::trace(tmp8,tmp9);
	HX_STACK_LINE(122)
	int tmp10 = z;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(122)
	int tmp11 = (arY * arX);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(122)
	bool tmp12 = (tmp10 < tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(122)
	if ((tmp12)){
		HX_STACK_LINE(123)
		int tmp13 = (x * arX);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(123)
		int tmp14 = (y * arY);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(123)
		int tmp15 = z;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(123)
		Dynamic tmp16 = mts->get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		a->concat(Array_obj< Float >::__new().Add(tmp13).Add(tmp14).Add(tmp16));
		HX_STACK_LINE(124)
		::core2::game::world::maps::Map tmp17 = m;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(124)
		::haxe::ds::IntMap tmp18 = mts;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(124)
		::core2::game::display::BMD tmp19 = bmd;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(124)
		int tmp20 = (x + (int)1);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(124)
		int tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(124)
		int tmp22 = (z + (int)1);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(124)
		int tmp23 = w;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(124)
		int tmp24 = h;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(124)
		int tmp25 = arX;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(124)
		int tmp26 = arY;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(124)
		a = this->generateTileDataArray(tmp17,tmp18,tmp19,tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,a);
	}
	HX_STACK_LINE(126)
	Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("MapTilesheet.hx","\x49","\x0f","\xfb","\x4a"),126,HX_HCSTRING("core2.game.world.maps.tilesheet.MapTilesheet","\x2c","\x11","\x65","\xe0"),HX_HCSTRING("generateTileDataArray","\x8c","\x01","\x26","\x0c"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(126)
	::haxe::Log_obj::trace(a,tmp13);
	HX_STACK_LINE(127)
	return a;
}


HX_DEFINE_DYNAMIC_FUNC11(MapTilesheet_obj,generateTileDataArray,return )


MapTilesheet_obj::MapTilesheet_obj()
{
}

void MapTilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapTilesheet);
	HX_MARK_MEMBER_NAME(nameArray,"nameArray");
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_MARK_MEMBER_NAME(mapLayout,"mapLayout");
	HX_MARK_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_MARK_MEMBER_NAME(tileManager,"tileManager");
	HX_MARK_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(nameArrayFromFile,"nameArrayFromFile");
	HX_MARK_MEMBER_NAME(tileDataArray,"tileDataArray");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	::openfl::display::Tilesheet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MapTilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nameArray,"nameArray");
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
	HX_VISIT_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_VISIT_MEMBER_NAME(mapLayout,"mapLayout");
	HX_VISIT_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_VISIT_MEMBER_NAME(tileManager,"tileManager");
	HX_VISIT_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(nameArrayFromFile,"nameArrayFromFile");
	HX_VISIT_MEMBER_NAME(tileDataArray,"tileDataArray");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
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
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { return nameArray; }
		if (HX_FIELD_EQ(inName,"tileArray") ) { return tileArray; }
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
		if (HX_FIELD_EQ(inName,"getTileArray") ) { return getTileArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileDataArray") ) { return tileDataArray; }
		if (HX_FIELD_EQ(inName,"generateTiles") ) { return generateTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMapTilesheet") ) { return getMapTilesheet_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { return mapLayoutManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nameArrayFromFile") ) { return nameArrayFromFile; }
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
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { nameArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mapLayout") ) { mapLayout=inValue.Cast< ::core2::game::world::maps::layout::MapLayout >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { mapTilesheet=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tileDataArray") ) { tileDataArray=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { mapLayoutManager=inValue.Cast< ::core2::game::world::maps::layout::managers::MapLayoutManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nameArrayFromFile") ) { nameArrayFromFile=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { mapTilesheetManager=inValue.Cast< ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapTilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"));
	outFields->push(HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"));
	outFields->push(HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"));
	outFields->push(HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b"));
	outFields->push(HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"));
	outFields->push(HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"));
	outFields->push(HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("nameArrayFromFile","\x74","\x92","\x3e","\x67"));
	outFields->push(HX_HCSTRING("tileDataArray","\x01","\x2e","\x45","\xdb"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MapTilesheet_obj,nameArray),HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapTilesheet_obj,tileArray),HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MapTilesheet_obj,mapTilesheet),HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09")},
	{hx::fsObject /*::core2::game::world::maps::layout::MapLayout*/ ,(int)offsetof(MapTilesheet_obj,mapLayout),HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::managers::MapTilesheetManager*/ ,(int)offsetof(MapTilesheet_obj,mapTilesheetManager),HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(MapTilesheet_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{hx::fsObject /*::core2::game::world::maps::layout::managers::MapLayoutManager*/ ,(int)offsetof(MapTilesheet_obj,mapLayoutManager),HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b")},
	{hx::fsObject /*::core2::game::world::maps::Map*/ ,(int)offsetof(MapTilesheet_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(MapTilesheet_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsInt,(int)offsetof(MapTilesheet_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsBool,(int)offsetof(MapTilesheet_obj,nameArrayFromFile),HX_HCSTRING("nameArrayFromFile","\x74","\x92","\x3e","\x67")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(MapTilesheet_obj,tileDataArray),HX_HCSTRING("tileDataArray","\x01","\x2e","\x45","\xdb")},
	{hx::fsInt,(int)offsetof(MapTilesheet_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(MapTilesheet_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"),
	HX_HCSTRING("tileArray","\x8b","\xcb","\xea","\xb0"),
	HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"),
	HX_HCSTRING("mapLayout","\x66","\x0a","\x98","\x3b"),
	HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"),
	HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"),
	HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("nameArrayFromFile","\x74","\x92","\x3e","\x67"),
	HX_HCSTRING("tileDataArray","\x01","\x2e","\x45","\xdb"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("generateNameArray","\x59","\xad","\x1b","\x15"),
	HX_HCSTRING("generateTiles","\x10","\xce","\xb1","\xb6"),
	HX_HCSTRING("getMapLayout","\xf0","\xa6","\xee","\x4a"),
	HX_HCSTRING("getMapTilesheet","\x2b","\xc8","\x67","\x2c"),
	HX_HCSTRING("getTileData","\x2e","\x3f","\x5d","\xa2"),
	HX_HCSTRING("getTileArray","\x15","\x68","\x41","\xc0"),
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
