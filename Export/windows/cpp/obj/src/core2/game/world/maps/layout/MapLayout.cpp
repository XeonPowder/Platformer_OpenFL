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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
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
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace layout{

Void MapLayout_obj::__construct(::core2::game::world::maps::Map map,::core2::game::world::maps::tilesheet::MapTilesheet mts,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,int w,int h,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout)
{
HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","new",0xc6eed3ae,"core2.game.world.maps.layout.MapLayout.new","core2/game/world/maps/layout/MapLayout.hx",23,0x2f5d1d03)
HX_STACK_THIS(this)
HX_STACK_ARG(map,"map")
HX_STACK_ARG(mts,"mts")
HX_STACK_ARG(mapLayoutManager,"mapLayoutManager")
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(mName,"mName")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(tileArray,"tileArray")
HX_STACK_ARG(__o_registerMapLayout,"registerMapLayout")
bool registerMapLayout = __o_registerMapLayout.Default(true);
{
	HX_STACK_LINE(24)
	this->m = map;
	HX_STACK_LINE(25)
	this->width = w;
	HX_STACK_LINE(26)
	this->height = h;
	HX_STACK_LINE(27)
	int tmp = this->hashCode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	this->tmHash = tmp;
	HX_STACK_LINE(28)
	this->bitmapData = bmd;
	HX_STACK_LINE(29)
	this->mapTilesheet = mts;
	HX_STACK_LINE(30)
	::core2::game::world::maps::tilesheet::MapTilesheet tmp1 = this->mapTilesheet;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	this->ta = tmp1->getTileArray();
	HX_STACK_LINE(31)
	::haxe::ds::IntMap tmp2 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(31)
	this->layout = tmp2;
	HX_STACK_LINE(32)
	::core2::game::world::maps::Map tmp3 = this->m;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(32)
	int tmp4 = tmp3->getAspectRatioX();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int arX = tmp4;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(33)
	::core2::game::world::maps::Map tmp5 = this->m;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	int tmp6 = tmp5->getAspectRatioY();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	int arY = tmp6;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(34)
	int tmp7 = arX;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	int tmp8 = arY;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	::haxe::ds::IntMap tmp9 = this->gLayout(this->ta,(int)0,(int)0,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	this->layout = tmp9;
	HX_STACK_LINE(35)
	bool tmp10 = registerMapLayout;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(35)
	if ((tmp10)){
		HX_STACK_LINE(36)
		::core2::game::world::maps::layout::managers::MapLayoutManager tmp11 = mapLayoutManager->getMapLayoutManager();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(36)
		::haxe::ds::ObjectMap tmp12 = tmp11->getList();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(36)
		::core2::game::world::maps::Map tmp13 = this->m;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(36)
		::String tmp14 = tmp13->getMapName();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(36)
		::String tmp15 = (tmp14 + HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(36)
		tmp12->set(tmp15,hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(38)
		::String tmp11 = (HX_HCSTRING("Map: ","\x22","\x8c","\x4d","\x96") + mName);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		::String tmp12 = (tmp11 + HX_HCSTRING("Layout was not added to the MapLayoutManager.","\xad","\x02","\x2f","\xa4"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		::Sys_obj::println(tmp12);
	}
}
;
	return null();
}

//MapLayout_obj::~MapLayout_obj() { }

Dynamic MapLayout_obj::__CreateEmpty() { return  new MapLayout_obj; }
hx::ObjectPtr< MapLayout_obj > MapLayout_obj::__new(::core2::game::world::maps::Map map,::core2::game::world::maps::tilesheet::MapTilesheet mts,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,int w,int h,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout)
{  hx::ObjectPtr< MapLayout_obj > _result_ = new MapLayout_obj();
	_result_->__construct(map,mts,mapLayoutManager,bmd,mName,w,h,tileArray,__o_registerMapLayout);
	return _result_;}

Dynamic MapLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapLayout_obj > _result_ = new MapLayout_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return _result_;}

int MapLayout_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","hashCode",0xb0e54e0d,"core2.game.world.maps.layout.MapLayout.hashCode","core2/game/world/maps/layout/MapLayout.hx",41,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,hashCode,return )

::haxe::ds::IntMap MapLayout_obj::gLayout( Array< ::Dynamic > ta,int w,int h,int arX,int arY){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","gLayout",0x1589acbf,"core2.game.world.maps.layout.MapLayout.gLayout","core2/game/world/maps/layout/MapLayout.hx",64,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ta,"ta")
	HX_STACK_ARG(w,"w")
	HX_STACK_ARG(h,"h")
	HX_STACK_ARG(arX,"arX")
	HX_STACK_ARG(arY,"arY")
	HX_STACK_LINE(65)
	::haxe::ds::IntMap tmp = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	::haxe::ds::IntMap a = tmp;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(66)
	int x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(67)
	int y = (int)0;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(68)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(69)
	while((true)){
		HX_STACK_LINE(69)
		int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		int tmp2 = this->getHeight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		int tmp3 = arY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		bool tmp6 = (tmp1 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		if ((tmp6)){
			HX_STACK_LINE(69)
			int tmp8 = z;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(69)
			int tmp9 = (arY * arX);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(69)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(69)
			tmp7 = (tmp8 < tmp10);
		}
		else{
			HX_STACK_LINE(69)
			tmp7 = false;
		}
		HX_STACK_LINE(69)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		if ((tmp8)){
			HX_STACK_LINE(69)
			break;
		}
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(70)
			int tmp10 = this->getWidth();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(70)
			int tmp11 = arX;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(70)
			Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			bool tmp14 = (tmp9 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(70)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(70)
			if ((tmp15)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(71)
			int tmp16 = x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(71)
			int tmp17 = (y * x);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(71)
			int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(71)
			::core2::game::world::maps::tile::Tile tmp19 = ta->__get(z).StaticCast< ::core2::game::world::maps::tile::Tile >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(71)
			int tmp20 = tmp19->getTileID();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(71)
			a->set(tmp18,tmp20);
			HX_STACK_LINE(72)
			(y)++;
			HX_STACK_LINE(73)
			(x)++;
		}
		HX_STACK_LINE(75)
		int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(75)
		int tmp10 = this->getWidth();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(75)
		int tmp11 = arX;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(75)
		Float tmp12 = (Float(tmp10) / Float(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(75)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(75)
		bool tmp14 = (tmp9 >= tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(75)
		if ((tmp14)){
			HX_STACK_LINE(76)
			x = (int)0;
		}
		HX_STACK_LINE(78)
		(y)++;
		HX_STACK_LINE(79)
		int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(79)
		int tmp16 = this->getHeight();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(79)
		int tmp17 = arY;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(79)
		Float tmp18 = (Float(tmp16) / Float(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		int tmp19 = ::Std_obj::_int(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		bool tmp20 = (tmp15 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		if ((tmp20)){
			HX_STACK_LINE(80)
			y = (int)0;
		}
	}
	HX_STACK_LINE(83)
	::haxe::ds::IntMap tmp1 = a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC5(MapLayout_obj,gLayout,return )

::haxe::ds::IntMap MapLayout_obj::getLayout( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","getLayout",0x6dd8a9ae,"core2.game.world.maps.layout.MapLayout.getLayout","core2/game/world/maps/layout/MapLayout.hx",85,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	::haxe::ds::IntMap tmp = this->layout;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,getLayout,return )

int MapLayout_obj::getWidth( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","getWidth",0xd3aa0782,"core2.game.world.maps.layout.MapLayout.getWidth","core2/game/world/maps/layout/MapLayout.hx",88,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(89)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,getWidth,return )

int MapLayout_obj::getHeight( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","getHeight",0x176c02eb,"core2.game.world.maps.layout.MapLayout.getHeight","core2/game/world/maps/layout/MapLayout.hx",91,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,getHeight,return )

Array< ::Dynamic > MapLayout_obj::getTileArray( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","getTileArray",0x445e8b07,"core2.game.world.maps.layout.MapLayout.getTileArray","core2/game/world/maps/layout/MapLayout.hx",95,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return this->ta;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,getTileArray,return )


MapLayout_obj::MapLayout_obj()
{
}

void MapLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapLayout);
	HX_MARK_MEMBER_NAME(layout,"layout");
	HX_MARK_MEMBER_NAME(nameArray,"nameArray");
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(tileManager,"tileManager");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(tmHash,"tmHash");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(ta,"ta");
	HX_MARK_MEMBER_NAME(mapTilesheet,"mapTilesheet");
	HX_MARK_END_CLASS();
}

void MapLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layout,"layout");
	HX_VISIT_MEMBER_NAME(nameArray,"nameArray");
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(tileManager,"tileManager");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(tmHash,"tmHash");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(ta,"ta");
	HX_VISIT_MEMBER_NAME(mapTilesheet,"mapTilesheet");
}

Dynamic MapLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ta") ) { return ta; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout; }
		if (HX_FIELD_EQ(inName,"tmHash") ) { return tmHash; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gLayout") ) { return gLayout_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { return nameArray; }
		if (HX_FIELD_EQ(inName,"getLayout") ) { return getLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { return tileManager; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { return mapTilesheet; }
		if (HX_FIELD_EQ(inName,"getTileArray") ) { return getTileArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< ::core2::game::world::maps::Map >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"ta") ) { ta=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmHash") ) { tmHash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { nameArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapTilesheet") ) { mapTilesheet=inValue.Cast< ::core2::game::world::maps::tilesheet::MapTilesheet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"));
	outFields->push(HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"));
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tmHash","\xe7","\x71","\xf4","\x53"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("ta","\x6d","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(MapLayout_obj,layout),HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MapLayout_obj,nameArray),HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(MapLayout_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(MapLayout_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{hx::fsObject /*::core2::game::world::maps::Map*/ ,(int)offsetof(MapLayout_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MapLayout_obj,tmHash),HX_HCSTRING("tmHash","\xe7","\x71","\xf4","\x53")},
	{hx::fsInt,(int)offsetof(MapLayout_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(MapLayout_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapLayout_obj,ta),HX_HCSTRING("ta","\x6d","\x65","\x00","\x00")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::MapTilesheet*/ ,(int)offsetof(MapLayout_obj,mapTilesheet),HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58"),
	HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f"),
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("tmHash","\xe7","\x71","\xf4","\x53"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("ta","\x6d","\x65","\x00","\x00"),
	HX_HCSTRING("mapTilesheet","\x75","\x72","\x7d","\x09"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("gLayout","\x71","\xea","\x6f","\x48"),
	HX_HCSTRING("getLayout","\xe0","\x37","\x0f","\xd5"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getTileArray","\x15","\x68","\x41","\xc0"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapLayout_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapLayout_obj::__mClass,"__mClass");
};

#endif

hx::Class MapLayout_obj::__mClass;

void MapLayout_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.layout.MapLayout","\xbc","\x24","\xfc","\x4d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapLayout_obj >;
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
} // end namespace layout
