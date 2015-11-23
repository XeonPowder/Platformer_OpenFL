#include <hxcpp.h>

#ifndef INCLUDED_core2_game_world_maps_tilesheet_managers_MapTilesheetManager
#include <core2/game/world/maps/tilesheet/managers/MapTilesheetManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tilesheet{
namespace managers{

Void MapTilesheetManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.world.maps.tilesheet.managers.MapTilesheetManager","new",0xe258f259,"core2.game.world.maps.tilesheet.managers.MapTilesheetManager.new","core2/game/world/maps/tilesheet/managers/MapTilesheetManager.hx",9,0xeb749f17)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	this->list = tmp;
	HX_STACK_LINE(11)
	this->mapTilesheetManager = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//MapTilesheetManager_obj::~MapTilesheetManager_obj() { }

Dynamic MapTilesheetManager_obj::__CreateEmpty() { return  new MapTilesheetManager_obj; }
hx::ObjectPtr< MapTilesheetManager_obj > MapTilesheetManager_obj::__new()
{  hx::ObjectPtr< MapTilesheetManager_obj > _result_ = new MapTilesheetManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic MapTilesheetManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapTilesheetManager_obj > _result_ = new MapTilesheetManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::world::maps::tilesheet::managers::MapTilesheetManager MapTilesheetManager_obj::getMapTilesheetManager( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.managers.MapTilesheetManager","getMapTilesheetManager",0x4a64bb29,"core2.game.world.maps.tilesheet.managers.MapTilesheetManager.getMapTilesheetManager","core2/game/world/maps/tilesheet/managers/MapTilesheetManager.hx",13,0xeb749f17)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::core2::game::world::maps::tilesheet::managers::MapTilesheetManager tmp = this->mapTilesheetManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheetManager_obj,getMapTilesheetManager,return )

::haxe::ds::_HashMap::HashMapData MapTilesheetManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.world.maps.tilesheet.managers.MapTilesheetManager","getList",0x7aa5de8d,"core2.game.world.maps.tilesheet.managers.MapTilesheetManager.getList","core2/game/world/maps/tilesheet/managers/MapTilesheetManager.hx",16,0xeb749f17)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapTilesheetManager_obj,getList,return )


MapTilesheetManager_obj::MapTilesheetManager_obj()
{
}

void MapTilesheetManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapTilesheetManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
	HX_MARK_END_CLASS();
}

void MapTilesheetManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(mapTilesheetManager,"mapTilesheetManager");
}

Dynamic MapTilesheetManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { return mapTilesheetManager; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getMapTilesheetManager") ) { return getMapTilesheetManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapTilesheetManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"mapTilesheetManager") ) { mapTilesheetManager=inValue.Cast< ::core2::game::world::maps::tilesheet::managers::MapTilesheetManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapTilesheetManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(MapTilesheetManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::world::maps::tilesheet::managers::MapTilesheetManager*/ ,(int)offsetof(MapTilesheetManager_obj,mapTilesheetManager),HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("mapTilesheetManager","\x78","\xb0","\x15","\x4c"),
	HX_HCSTRING("getMapTilesheetManager","\x82","\x1d","\x2d","\x24"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapTilesheetManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapTilesheetManager_obj::__mClass,"__mClass");
};

#endif

hx::Class MapTilesheetManager_obj::__mClass;

void MapTilesheetManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.tilesheet.managers.MapTilesheetManager","\xe7","\xd1","\xd0","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapTilesheetManager_obj >;
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
} // end namespace managers
