#include <hxcpp.h>

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
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
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

Void MapLayout_obj::__construct(::core2::game::world::maps::Map map,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout)
{
HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","new",0xc6eed3ae,"core2.game.world.maps.layout.MapLayout.new","core2/game/world/maps/layout/MapLayout.hx",18,0x2f5d1d03)
HX_STACK_THIS(this)
HX_STACK_ARG(map,"map")
HX_STACK_ARG(mapLayoutManager,"mapLayoutManager")
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(mName,"mName")
HX_STACK_ARG(tileArray,"tileArray")
HX_STACK_ARG(__o_registerMapLayout,"registerMapLayout")
bool registerMapLayout = __o_registerMapLayout.Default(true);
{
	HX_STACK_LINE(19)
	this->m = map;
	HX_STACK_LINE(20)
	int tmp = this->hashCode();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->tmHash = tmp;
	HX_STACK_LINE(21)
	this->bitmapData = bmd;
	HX_STACK_LINE(22)
	this->layout = this->generateLayout(tileArray);
	HX_STACK_LINE(23)
	bool tmp1 = registerMapLayout;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp1)){
		HX_STACK_LINE(24)
		::core2::game::world::maps::layout::managers::MapLayoutManager tmp2 = mapLayoutManager->getMapLayoutManager();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		::haxe::ds::_HashMap::HashMapData tmp3 = tmp2->getList();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(24)
		::haxe::ds::_HashMap::HashMapData this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(24)
		::core2::game::world::maps::Map tmp4 = this->m;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(24)
		::String tmp5 = tmp4->getMapName();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		::String tmp6 = (tmp5 + HX_HCSTRING("Layout","\xca","\x22","\x4d","\x8d"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(24)
		::String v = tmp6;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(24)
		::haxe::ds::IntMap tmp7 = this1->keys;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(24)
		int tmp8 = this->hashCode();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		tmp7->set(tmp8,hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(24)
		::haxe::ds::IntMap tmp9 = this1->values;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		int tmp10 = this->hashCode();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(24)
		::String tmp11 = v;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(24)
		tmp9->set(tmp10,tmp11);
	}
	else{
		HX_STACK_LINE(26)
		::String tmp2 = (HX_HCSTRING("Map: ","\x22","\x8c","\x4d","\x96") + mName);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::String tmp3 = (tmp2 + HX_HCSTRING("Layout was not added to the MapLayoutManager.","\xad","\x02","\x2f","\xa4"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		::Sys_obj::println(tmp3);
	}
}
;
	return null();
}

//MapLayout_obj::~MapLayout_obj() { }

Dynamic MapLayout_obj::__CreateEmpty() { return  new MapLayout_obj; }
hx::ObjectPtr< MapLayout_obj > MapLayout_obj::__new(::core2::game::world::maps::Map map,::core2::game::world::maps::layout::managers::MapLayoutManager mapLayoutManager,::core2::game::display::BMD bmd,::String mName,Array< ::Dynamic > tileArray,hx::Null< bool >  __o_registerMapLayout)
{  hx::ObjectPtr< MapLayout_obj > _result_ = new MapLayout_obj();
	_result_->__construct(map,mapLayoutManager,bmd,mName,tileArray,__o_registerMapLayout);
	return _result_;}

Dynamic MapLayout_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapLayout_obj > _result_ = new MapLayout_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

int MapLayout_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","hashCode",0xb0e54e0d,"core2.game.world.maps.layout.MapLayout.hashCode","core2/game/world/maps/layout/MapLayout.hx",29,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(30)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,hashCode,return )

Array< ::Dynamic > MapLayout_obj::generateLayout( Array< ::Dynamic > array){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","generateLayout",0xff539b31,"core2.game.world.maps.layout.MapLayout.generateLayout","core2/game/world/maps/layout/MapLayout.hx",32,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_ARG(array,"array")
	HX_STACK_LINE(33)
	int x = (int)0;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(34)
	int y = (int)0;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(35)
	::core2::game::world::maps::Map tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	int tmp1 = tmp->getAspectRatioX();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	int arX = tmp1;		HX_STACK_VAR(arX,"arX");
	HX_STACK_LINE(36)
	::core2::game::world::maps::Map tmp2 = this->m;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(36)
	int tmp3 = tmp2->getAspectRatioY();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(36)
	int arY = tmp3;		HX_STACK_VAR(arY,"arY");
	HX_STACK_LINE(37)
	Array< ::Dynamic > generatedLayout = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(generatedLayout,"generatedLayout");
	HX_STACK_LINE(38)
	{
		HX_STACK_LINE(38)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		int _g = array->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		while((true)){
			HX_STACK_LINE(38)
			bool tmp4 = (_g1 < _g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			if ((tmp5)){
				HX_STACK_LINE(38)
				break;
			}
			HX_STACK_LINE(38)
			int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(38)
			int z = tmp6;		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(39)
			::core2::game::world::maps::tile::Tile tmp7 = array->__get(z).StaticCast< ::core2::game::world::maps::tile::Tile >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(39)
			int tmp8 = tmp7->getTileID();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(39)
			generatedLayout->__get(x).StaticCast< Array< int > >()[y] = tmp8;
			HX_STACK_LINE(40)
			(x)++;
			HX_STACK_LINE(41)
			(y)++;
			HX_STACK_LINE(42)
			int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(42)
			::core2::game::display::BMD tmp10 = this->bitmapData;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(42)
			int tmp11 = tmp10->width;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(42)
			int tmp12 = arX;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(42)
			Float tmp13 = (Float(tmp11) / Float(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(42)
			bool tmp14 = (tmp9 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(42)
			if ((tmp14)){
				HX_STACK_LINE(43)
				x = (int)0;
			}
			HX_STACK_LINE(45)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(45)
			::core2::game::display::BMD tmp16 = this->bitmapData;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(45)
			int tmp17 = tmp16->height;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(45)
			int tmp18 = arY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(45)
			Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(45)
			bool tmp20 = (tmp15 > tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(45)
			if ((tmp20)){
				HX_STACK_LINE(46)
				y = (int)0;
			}
		}
	}
	HX_STACK_LINE(49)
	return generatedLayout;
}


HX_DEFINE_DYNAMIC_FUNC1(MapLayout_obj,generateLayout,return )

Array< ::Dynamic > MapLayout_obj::getLayout( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.MapLayout","getLayout",0x6dd8a9ae,"core2.game.world.maps.layout.MapLayout.getLayout","core2/game/world/maps/layout/MapLayout.hx",52,0x2f5d1d03)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	return this->layout;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayout_obj,getLayout,return )


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
}

Dynamic MapLayout_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout; }
		if (HX_FIELD_EQ(inName,"tmHash") ) { return tmHash; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { return nameArray; }
		if (HX_FIELD_EQ(inName,"getLayout") ) { return getLayout_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { return tileManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generateLayout") ) { return generateLayout_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapLayout_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< ::core2::game::world::maps::Map >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tmHash") ) { tmHash=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameArray") ) { nameArray=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
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
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MapLayout_obj,layout),HX_HCSTRING("layout","\xaa","\xae","\xb8","\x58")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(MapLayout_obj,nameArray),HX_HCSTRING("nameArray","\x4e","\x3b","\x44","\x1f")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(MapLayout_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(MapLayout_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{hx::fsObject /*::core2::game::world::maps::Map*/ ,(int)offsetof(MapLayout_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(MapLayout_obj,tmHash),HX_HCSTRING("tmHash","\xe7","\x71","\xf4","\x53")},
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
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("generateLayout","\xbf","\x57","\x72","\x5f"),
	HX_HCSTRING("getLayout","\xe0","\x37","\x0f","\xd5"),
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
