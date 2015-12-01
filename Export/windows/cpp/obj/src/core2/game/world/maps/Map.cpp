#include <hxcpp.h>

#ifndef INCLUDED_core2_game_Game
#include <core2/game/Game.h>
#endif
#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_display_BMD
#include <core2/game/display/BMD.h>
#endif
#ifndef INCLUDED_core2_game_world_World
#include <core2/game/world/World.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_Map
#include <core2/game/world/maps/Map.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_managers_MapManager
#include <core2/game/world/maps/managers/MapManager.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileBitmapDataManager
#include <core2/game/world/maps/tile/managers/TileBitmapDataManager.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
namespace core2{
namespace game{
namespace world{
namespace maps{

Void Map_obj::__construct(::core2::game::world::World w,int ww,int wh,::core2::game::world::maps::managers::MapManager mm,int ax,int ay,::String mn,hx::Null< bool >  __o_registerMap)
{
HX_STACK_FRAME("core2.game.world.maps.Map","new",0x1de71774,"core2.game.world.maps.Map.new","core2/game/world/maps/Map.hx",33,0xdde92e7c)
HX_STACK_THIS(this)
HX_STACK_ARG(w,"w")
HX_STACK_ARG(ww,"ww")
HX_STACK_ARG(wh,"wh")
HX_STACK_ARG(mm,"mm")
HX_STACK_ARG(ax,"ax")
HX_STACK_ARG(ay,"ay")
HX_STACK_ARG(mn,"mn")
HX_STACK_ARG(__o_registerMap,"registerMap")
bool registerMap = __o_registerMap.Default(true);
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->world = w;
	HX_STACK_LINE(36)
	this->wwidth = ww;
	HX_STACK_LINE(37)
	this->wheight = wh;
	HX_STACK_LINE(38)
	this->mapName = mn;
	HX_STACK_LINE(39)
	int tmp = this->hashCode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	this->mmHash = tmp;
	HX_STACK_LINE(40)
	int tmp1 = this->hashCode();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->mtsmHash = tmp1;
	HX_STACK_LINE(41)
	int tmp2 = this->hashCode();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	this->tbmdmHash = tmp2;
	HX_STACK_LINE(42)
	this->aspectRatioX = ax;
	HX_STACK_LINE(43)
	this->aspectRatioY = ay;
	HX_STACK_LINE(44)
	this->mapManager = mm;
	HX_STACK_LINE(45)
	bool tmp3 = registerMap;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	if ((tmp3)){
		HX_STACK_LINE(46)
		::haxe::ds::StringMap tmp4 = mm->getMapManager();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(46)
		::String tmp5 = mn;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(46)
		tmp4->set(tmp5,hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(48)
	::String tmp4 = (ax + HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	int tmp5 = ay;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	::String ar = tmp6;		HX_STACK_VAR(ar,"ar");
	HX_STACK_LINE(49)
	::String tmp7 = (HX_HCSTRING("assets/maps/","\x2c","\x50","\x0b","\xcf") + mn);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(49)
	::String tmp8 = (tmp7 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(49)
	::String tmp9 = ar;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(49)
	::String tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(49)
	::String tmp11 = (tmp10 + HX_HCSTRING(".png","\x3b","\x2d","\xbd","\x1e"));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(49)
	::String tmp12 = ::String(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(49)
	::openfl::display::BitmapData tmp13 = ::openfl::Assets_obj::getBitmapData(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(49)
	::core2::game::world::World tmp14 = this->getWorld();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(49)
	::core2::game::Game tmp15 = tmp14->getGame();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(49)
	int tmp16 = tmp15->getWidth();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(49)
	::core2::game::world::World tmp17 = this->getWorld();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(49)
	::core2::game::Game tmp18 = tmp17->getGame();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(49)
	int tmp19 = tmp18->getHeight();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(49)
	::core2::game::display::BMD tmp20 = ::core2::game::display::BMD_obj::__new(tmp13,tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(49)
	this->tileBMD = tmp20;
	HX_STACK_LINE(50)
	::core2::game::display::BMD tmp21 = this->tileBMD;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(50)
	::openfl::display::BitmapData tmp22 = tmp21->getData();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(50)
	this->openFLBMDtileBMD = tmp22;
	HX_STACK_LINE(51)
	::core2::game::world::maps::tile::managers::TileBitmapDataManager tmp23 = ::core2::game::world::maps::tile::managers::TileBitmapDataManager_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(51)
	this->tileBitmapDataManager = tmp23;
	HX_STACK_LINE(52)
	::core2::game::world::maps::tile::managers::TileBitmapDataManager tmp24 = this->tileBitmapDataManager;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(52)
	::haxe::ds::StringMap tmp25 = tmp24->getList();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(52)
	::String tmp26 = ar;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(52)
	::core2::game::display::BMD tmp27 = this->tileBMD;		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(52)
	tmp25->set(tmp26,tmp27);
	HX_STACK_LINE(53)
	::openfl::display::Sprite tmp28 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(53)
	this->mapTilesheetCanvas = tmp28;
	HX_STACK_LINE(54)
	::openfl::display::Sprite tmp29 = this->mapTilesheetCanvas;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(54)
	this->addChild(tmp29);
	HX_STACK_LINE(55)
	::core2::game::world::maps::tilesheet::managers::MapTilesheetManager tmp30 = ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager_obj::__new();		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(55)
	this->mapTilesheetManager = tmp30;
	HX_STACK_LINE(56)
	int tmp31 = this->wwidth;		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(56)
	int tmp32 = this->wheight;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(56)
	::core2::game::display::BMD tmp33 = this->tileBMD;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(56)
	::String tmp34 = this->mapName;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(56)
	::core2::game::world::maps::tilesheet::MapTilesheet tmp35 = ::core2::game::world::maps::tilesheet::MapTilesheet_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp31,tmp32,tmp33,tmp34,null());		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(56)
	this->mapTilesheet = tmp35;
}
;
	return null();
}

//Map_obj::~Map_obj() { }

Dynamic Map_obj::__CreateEmpty() { return  new Map_obj; }
hx::ObjectPtr< Map_obj > Map_obj::__new(::core2::game::world::World w,int ww,int wh,::core2::game::world::maps::managers::MapManager mm,int ax,int ay,::String mn,hx::Null< bool >  __o_registerMap)
{  hx::ObjectPtr< Map_obj > _result_ = new Map_obj();
	_result_->__construct(w,ww,wh,mm,ax,ay,mn,__o_registerMap);
	return _result_;}

Dynamic Map_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_obj > _result_ = new Map_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

int Map_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","hashCode",0x2ac39c87,"core2.game.world.maps.Map.hashCode","core2/game/world/maps/Map.hx",58,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,hashCode,return )

::core2::game::world::maps::Map Map_obj::getMap( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getMap",0xfecda112,"core2.game.world.maps.Map.getMap","core2/game/world/maps/Map.hx",62,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getMap,return )

::openfl::display::Sprite Map_obj::getMapTilesheetCanvas( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getMapTilesheetCanvas",0xa5561f77,"core2.game.world.maps.Map.getMapTilesheetCanvas","core2/game/world/maps/Map.hx",64,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(65)
	::openfl::display::Sprite tmp = this->mapTilesheetCanvas;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getMapTilesheetCanvas,return )

::core2::game::world::maps::tilesheet::MapTilesheet Map_obj::getMapTilesheet( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getMapTilesheet",0xb0535d3f,"core2.game.world.maps.Map.getMapTilesheet","core2/game/world/maps/Map.hx",67,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	::core2::game::world::maps::tilesheet::MapTilesheet tmp = this->mapTilesheet;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getMapTilesheet,return )

::core2::game::world::maps::tilesheet::managers::MapTilesheetManager Map_obj::getMapTilesheetManager( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getMapTilesheetManager",0x97ff12ee,"core2.game.world.maps.Map.getMapTilesheetManager","core2/game/world/maps/Map.hx",70,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(71)
	::core2::game::world::maps::tilesheet::managers::MapTilesheetManager tmp = this->mapTilesheetManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(71)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getMapTilesheetManager,return )

::core2::game::world::maps::tile::managers::TileBitmapDataManager Map_obj::getTileBitmapDataManager( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getTileBitmapDataManager",0x4dc00a9c,"core2.game.world.maps.Map.getTileBitmapDataManager","core2/game/world/maps/Map.hx",73,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(74)
	::core2::game::world::maps::tile::managers::TileBitmapDataManager tmp = this->tileBitmapDataManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getTileBitmapDataManager,return )

Void Map_obj::update( ){
{
		HX_STACK_FRAME("core2.game.world.maps.Map","update",0xe2b0e375,"core2.game.world.maps.Map.update","core2/game/world/maps/Map.hx",76,0xdde92e7c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		::core2::game::world::maps::tilesheet::MapTilesheet tmp = this->mapTilesheet;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		::openfl::display::Sprite tmp1 = this->mapTilesheetCanvas;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(77)
		::openfl::display::Graphics tmp2 = tmp1->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		::core2::game::world::maps::tilesheet::MapTilesheet tmp3 = this->mapTilesheet;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		tmp->drawTiles(tmp2,tmp3->getTileData(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,update,(void))

int Map_obj::getAspectRatioY( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getAspectRatioY",0xb4761bb0,"core2.game.world.maps.Map.getAspectRatioY","core2/game/world/maps/Map.hx",79,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	int tmp = this->aspectRatioY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(80)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getAspectRatioY,return )

int Map_obj::getAspectRatioX( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getAspectRatioX",0xb4761baf,"core2.game.world.maps.Map.getAspectRatioX","core2/game/world/maps/Map.hx",82,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(83)
	int tmp = this->aspectRatioX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(83)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getAspectRatioX,return )

::String Map_obj::getMapName( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getMapName",0xfdc1307d,"core2.game.world.maps.Map.getMapName","core2/game/world/maps/Map.hx",85,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	::String tmp = this->mapName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getMapName,return )

::core2::game::world::World Map_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.world.maps.Map","getWorld",0x518a3648,"core2.game.world.maps.Map.getWorld","core2/game/world/maps/Map.hx",88,0xdde92e7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	::core2::game::world::World tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getWorld,return )


Map_obj::Map_obj()
{
}

void Map_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Map);
	HX_MARK_MEMBER_NAME(mapName,"mapName");
	HX_MARK_MEMBER_NAME(mapTilesheetCanvas,"mapTilesheetCanvas");
	HX_MARK_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_MARK_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_MARK_MEMBER_NAME(tileBitmapDataManager,"tileBitmapDataManager");
	HX_MARK_MEMBER_NAME(tileBMD,"tileBMD");
	HX_MARK_MEMBER_NAME(openFLBMDtileBMD,"openFLBMDtileBMD");
	HX_MARK_MEMBER_NAME(aspectRatioX,"aspectRatioX");
	HX_MARK_MEMBER_NAME(aspectRatioY,"aspectRatioY");
	HX_MARK_MEMBER_NAME(mapManager,"mapManager");
	HX_MARK_MEMBER_NAME(mmHash,"mmHash");
	HX_MARK_MEMBER_NAME(mtsmHash,"mtsmHash");
	HX_MARK_MEMBER_NAME(tbmdmHash,"tbmdmHash");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(wwidth,"wwidth");
	HX_MARK_MEMBER_NAME(wheight,"wheight");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Map_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapName,"mapName");
	HX_VISIT_MEMBER_NAME(mapTilesheetCanvas,"mapTilesheetCanvas");
	HX_VISIT_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_VISIT_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_VISIT_MEMBER_NAME(tileBitmapDataManager,"tileBitmapDataManager");
	HX_VISIT_MEMBER_NAME(tileBMD,"tileBMD");
	HX_VISIT_MEMBER_NAME(openFLBMDtileBMD,"openFLBMDtileBMD");
	HX_VISIT_MEMBER_NAME(aspectRatioX,"aspectRatioX");
	HX_VISIT_MEMBER_NAME(aspectRatioY,"aspectRatioY");
	HX_VISIT_MEMBER_NAME(mapManager,"mapManager");
	HX_VISIT_MEMBER_NAME(mmHash,"mmHash");
	HX_VISIT_MEMBER_NAME(mtsmHash,"mtsmHash");
	HX_VISIT_MEMBER_NAME(tbmdmHash,"tbmdmHash");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(wwidth,"wwidth");
	HX_VISIT_MEMBER_NAME(wheight,"wheight");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Map_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mmHash") ) { return mmHash; }
		if (HX_FIELD_EQ(inName,"wwidth") ) { return wwidth; }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapName") ) { return mapName; }
		if (HX_FIELD_EQ(inName,"tileBMD") ) { return tileBMD; }
		if (HX_FIELD_EQ(inName,"wheight") ) { return wheight; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mtsmHash") ) { return mtsmHash; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tbmdmHash") ) { return tbmdmHash; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { return mapManager; }
		if (HX_FIELD_EQ(inName,"getMapName") ) { return getMapName_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { return mapTilesheet; }
		if (HX_FIELD_EQ(inName,"aspectRatioX") ) { return aspectRatioX; }
		if (HX_FIELD_EQ(inName,"aspectRatioY") ) { return aspectRatioY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getMapTilesheet") ) { return getMapTilesheet_dyn(); }
		if (HX_FIELD_EQ(inName,"getAspectRatioY") ) { return getAspectRatioY_dyn(); }
		if (HX_FIELD_EQ(inName,"getAspectRatioX") ) { return getAspectRatioX_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"openFLBMDtileBMD") ) { return openFLBMDtileBMD; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mapTilesheetCanvas") ) { return mapTilesheetCanvas; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { return mapTilesheetManager; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tileBitmapDataManager") ) { return tileBitmapDataManager; }
		if (HX_FIELD_EQ(inName,"getMapTilesheetCanvas") ) { return getMapTilesheetCanvas_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getMapTilesheetManager") ) { return getMapTilesheetManager_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getTileBitmapDataManager") ) { return getTileBitmapDataManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Map_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::core2::game::world::World >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mmHash") ) { mmHash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wwidth") ) { wwidth=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mapName") ) { mapName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileBMD") ) { tileBMD=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wheight") ) { wheight=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mtsmHash") ) { mtsmHash=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tbmdmHash") ) { tbmdmHash=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { mapManager=inValue.Cast< ::core2::game::world::maps::managers::MapManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { mapTilesheet=inValue.Cast< ::core2::game::world::maps::tilesheet::MapTilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aspectRatioX") ) { aspectRatioX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aspectRatioY") ) { aspectRatioY=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"openFLBMDtileBMD") ) { openFLBMDtileBMD=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mapTilesheetCanvas") ) { mapTilesheetCanvas=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { mapTilesheetManager=inValue.Cast< ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tileBitmapDataManager") ) { tileBitmapDataManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileBitmapDataManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Map_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mapName","\x07","\x27","\xfb","\x2d"));
	outFields->push(HX_HCSTRING("mapTilesheetCanvas","\x2d","\x01","\x45","\x42"));
	outFields->push(HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"));
	outFields->push(HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"));
	outFields->push(HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a"));
	outFields->push(HX_HCSTRING("tileBMD","\xab","\x3d","\x6e","\x45"));
	outFields->push(HX_HCSTRING("openFLBMDtileBMD","\x42","\x66","\x13","\x0c"));
	outFields->push(HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d"));
	outFields->push(HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d"));
	outFields->push(HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"));
	outFields->push(HX_HCSTRING("mmHash","\x4e","\xeb","\x74","\x87"));
	outFields->push(HX_HCSTRING("mtsmHash","\x2f","\x7c","\xcd","\x1f"));
	outFields->push(HX_HCSTRING("tbmdmHash","\x76","\x80","\x95","\x1d"));
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("wwidth","\x2f","\xa6","\xda","\x5e"));
	outFields->push(HX_HCSTRING("wheight","\x9e","\x3b","\xc6","\x56"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Map_obj,mapName),HX_HCSTRING("mapName","\x07","\x27","\xfb","\x2d")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Map_obj,mapTilesheetCanvas),HX_HCSTRING("mapTilesheetCanvas","\x2d","\x01","\x45","\x42")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::MapTilesheet*/ ,(int)offsetof(Map_obj,mapTilesheet),HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::managers::MapTilesheetManager*/ ,(int)offsetof(Map_obj,mapTilesheetManager),HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileBitmapDataManager*/ ,(int)offsetof(Map_obj,tileBitmapDataManager),HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(Map_obj,tileBMD),HX_HCSTRING("tileBMD","\xab","\x3d","\x6e","\x45")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Map_obj,openFLBMDtileBMD),HX_HCSTRING("openFLBMDtileBMD","\x42","\x66","\x13","\x0c")},
	{hx::fsInt,(int)offsetof(Map_obj,aspectRatioX),HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d")},
	{hx::fsInt,(int)offsetof(Map_obj,aspectRatioY),HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d")},
	{hx::fsObject /*::core2::game::world::maps::managers::MapManager*/ ,(int)offsetof(Map_obj,mapManager),HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4")},
	{hx::fsInt,(int)offsetof(Map_obj,mmHash),HX_HCSTRING("mmHash","\x4e","\xeb","\x74","\x87")},
	{hx::fsInt,(int)offsetof(Map_obj,mtsmHash),HX_HCSTRING("mtsmHash","\x2f","\x7c","\xcd","\x1f")},
	{hx::fsInt,(int)offsetof(Map_obj,tbmdmHash),HX_HCSTRING("tbmdmHash","\x76","\x80","\x95","\x1d")},
	{hx::fsObject /*::core2::game::world::World*/ ,(int)offsetof(Map_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsInt,(int)offsetof(Map_obj,wwidth),HX_HCSTRING("wwidth","\x2f","\xa6","\xda","\x5e")},
	{hx::fsInt,(int)offsetof(Map_obj,wheight),HX_HCSTRING("wheight","\x9e","\x3b","\xc6","\x56")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mapName","\x07","\x27","\xfb","\x2d"),
	HX_HCSTRING("mapTilesheetCanvas","\x2d","\x01","\x45","\x42"),
	HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"),
	HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"),
	HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a"),
	HX_HCSTRING("tileBMD","\xab","\x3d","\x6e","\x45"),
	HX_HCSTRING("openFLBMDtileBMD","\x42","\x66","\x13","\x0c"),
	HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d"),
	HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d"),
	HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"),
	HX_HCSTRING("mmHash","\x4e","\xeb","\x74","\x87"),
	HX_HCSTRING("mtsmHash","\x2f","\x7c","\xcd","\x1f"),
	HX_HCSTRING("tbmdmHash","\x76","\x80","\x95","\x1d"),
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("wwidth","\x2f","\xa6","\xda","\x5e"),
	HX_HCSTRING("wheight","\x9e","\x3b","\xc6","\x56"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("getMapTilesheetCanvas","\x63","\x83","\x5f","\xa1"),
	HX_HCSTRING("getMapTilesheet","\x2b","\xc8","\x67","\x2c"),
	HX_HCSTRING("getMapTilesheetManager","\x82","\x1d","\x2d","\x24"),
	HX_HCSTRING("getTileBitmapDataManager","\x30","\xe2","\x74","\xc9"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getAspectRatioY","\x9c","\x86","\x8a","\x30"),
	HX_HCSTRING("getAspectRatioX","\x9b","\x86","\x8a","\x30"),
	HX_HCSTRING("getMapName","\x11","\xad","\x5c","\x7d"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#endif

hx::Class Map_obj::__mClass;

void Map_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.Map","\x82","\x8d","\xc9","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Map_obj >;
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
