#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_layout_managers_MapLayoutManager
#include <core2/game/world/maps/layout/managers/MapLayoutManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace layout{
namespace managers{

Void MapLayoutManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.world.maps.layout.managers.MapLayoutManager","new",0x77d12eb7,"core2.game.world.maps.layout.managers.MapLayoutManager.new","core2/game/world/maps/layout/managers/MapLayoutManager.hx",11,0x35742cb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->list = tmp;
	HX_STACK_LINE(13)
	this->mapLayoutManager = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//MapLayoutManager_obj::~MapLayoutManager_obj() { }

Dynamic MapLayoutManager_obj::__CreateEmpty() { return  new MapLayoutManager_obj; }
hx::ObjectPtr< MapLayoutManager_obj > MapLayoutManager_obj::__new()
{  hx::ObjectPtr< MapLayoutManager_obj > _result_ = new MapLayoutManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic MapLayoutManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapLayoutManager_obj > _result_ = new MapLayoutManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::world::maps::layout::managers::MapLayoutManager MapLayoutManager_obj::getMapLayoutManager( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.managers.MapLayoutManager","getMapLayoutManager",0x4ea58db4,"core2.game.world.maps.layout.managers.MapLayoutManager.getMapLayoutManager","core2/game/world/maps/layout/managers/MapLayoutManager.hx",15,0x35742cb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	::core2::game::world::maps::layout::managers::MapLayoutManager tmp = this->mapLayoutManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayoutManager_obj,getMapLayoutManager,return )

::haxe::ds::_HashMap::HashMapData MapLayoutManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.managers.MapLayoutManager","getList",0x5696a1eb,"core2.game.world.maps.layout.managers.MapLayoutManager.getList","core2/game/world/maps/layout/managers/MapLayoutManager.hx",18,0x35742cb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayoutManager_obj,getList,return )

int MapLayoutManager_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.layout.managers.MapLayoutManager","hashCode",0x9fcf5264,"core2.game.world.maps.layout.managers.MapLayoutManager.hashCode","core2/game/world/maps/layout/managers/MapLayoutManager.hx",21,0x35742cb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapLayoutManager_obj,hashCode,return )


MapLayoutManager_obj::MapLayoutManager_obj()
{
}

void MapLayoutManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapLayoutManager);
	HX_MARK_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void MapLayoutManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapLayoutManager,"mapLayoutManager");
	HX_VISIT_MEMBER_NAME(list,"list");
}

Dynamic MapLayoutManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { return mapLayoutManager; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getMapLayoutManager") ) { return getMapLayoutManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapLayoutManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mapLayoutManager") ) { mapLayoutManager=inValue.Cast< ::core2::game::world::maps::layout::managers::MapLayoutManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapLayoutManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"));
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::world::maps::layout::managers::MapLayoutManager*/ ,(int)offsetof(MapLayoutManager_obj,mapLayoutManager),HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b")},
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(MapLayoutManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mapLayoutManager","\xa7","\x68","\x09","\x8b"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("getMapLayoutManager","\x5d","\xd1","\x2f","\x45"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapLayoutManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapLayoutManager_obj::__mClass,"__mClass");
};

#endif

hx::Class MapLayoutManager_obj::__mClass;

void MapLayoutManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.layout.managers.MapLayoutManager","\x45","\x07","\x60","\x20");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapLayoutManager_obj >;
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
} // end namespace managers
