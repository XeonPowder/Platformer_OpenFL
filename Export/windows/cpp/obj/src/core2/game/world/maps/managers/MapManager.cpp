#include <hxcpp.h>

#ifndef INCLUDED_core2_game_world_maps_managers_MapManager
#include <core2/game/world/maps/managers/MapManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace managers{

Void MapManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.world.maps.managers.MapManager","new",0xff6978d1,"core2.game.world.maps.managers.MapManager.new","core2/game/world/maps/managers/MapManager.hx",8,0x90ce3b1e)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	this->manager = tmp;
}
;
	return null();
}

//MapManager_obj::~MapManager_obj() { }

Dynamic MapManager_obj::__CreateEmpty() { return  new MapManager_obj; }
hx::ObjectPtr< MapManager_obj > MapManager_obj::__new()
{  hx::ObjectPtr< MapManager_obj > _result_ = new MapManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic MapManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapManager_obj > _result_ = new MapManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::world::maps::managers::MapManager MapManager_obj::getManager( ){
	HX_STACK_FRAME("core2.game.world.maps.managers.MapManager","getManager",0xfad6d026,"core2.game.world.maps.managers.MapManager.getManager","core2/game/world/maps/managers/MapManager.hx",12,0x90ce3b1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(12)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(MapManager_obj,getManager,return )

::haxe::ds::_HashMap::HashMapData MapManager_obj::getMapManager( ){
	HX_STACK_FRAME("core2.game.world.maps.managers.MapManager","getMapManager",0x74a9d718,"core2.game.world.maps.managers.MapManager.getMapManager","core2/game/world/maps/managers/MapManager.hx",14,0x90ce3b1e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	::haxe::ds::_HashMap::HashMapData tmp = this->manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MapManager_obj,getMapManager,return )


MapManager_obj::MapManager_obj()
{
}

void MapManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MapManager);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

void MapManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
}

Dynamic MapManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { return getManager_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getMapManager") ) { return getMapManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(MapManager_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("getManager","\x77","\x18","\x23","\x63"),
	HX_HCSTRING("getMapManager","\x67","\xd7","\xc4","\x10"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapManager_obj::__mClass,"__mClass");
};

#endif

hx::Class MapManager_obj::__mClass;

void MapManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.managers.MapManager","\x5f","\xbc","\x8e","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MapManager_obj >;
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
} // end namespace managers
