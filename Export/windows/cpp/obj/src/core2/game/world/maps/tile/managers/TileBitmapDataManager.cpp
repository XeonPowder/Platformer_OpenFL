#include <hxcpp.h>

#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileBitmapDataManager
#include <core2/game/world/maps/tile/managers/TileBitmapDataManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tile{
namespace managers{

Void TileBitmapDataManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileBitmapDataManager","new",0xa23a18b6,"core2.game.world.maps.tile.managers.TileBitmapDataManager.new","core2/game/world/maps/tile/managers/TileBitmapDataManager.hx",11,0x8522a35a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->list = tmp;
	HX_STACK_LINE(13)
	this->tileBitmapDataManager = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//TileBitmapDataManager_obj::~TileBitmapDataManager_obj() { }

Dynamic TileBitmapDataManager_obj::__CreateEmpty() { return  new TileBitmapDataManager_obj; }
hx::ObjectPtr< TileBitmapDataManager_obj > TileBitmapDataManager_obj::__new()
{  hx::ObjectPtr< TileBitmapDataManager_obj > _result_ = new TileBitmapDataManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic TileBitmapDataManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileBitmapDataManager_obj > _result_ = new TileBitmapDataManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::world::maps::tile::managers::TileBitmapDataManager TileBitmapDataManager_obj::getTileBitmapDataManager( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileBitmapDataManager","getTileBitmapDataManager",0x5106961a,"core2.game.world.maps.tile.managers.TileBitmapDataManager.getTileBitmapDataManager","core2/game/world/maps/tile/managers/TileBitmapDataManager.hx",15,0x8522a35a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	::core2::game::world::maps::tile::managers::TileBitmapDataManager tmp = this->tileBitmapDataManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TileBitmapDataManager_obj,getTileBitmapDataManager,return )

::haxe::ds::_HashMap::HashMapData TileBitmapDataManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileBitmapDataManager","getList",0x0555f76a,"core2.game.world.maps.tile.managers.TileBitmapDataManager.getList","core2/game/world/maps/tile/managers/TileBitmapDataManager.hx",18,0x8522a35a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TileBitmapDataManager_obj,getList,return )


TileBitmapDataManager_obj::TileBitmapDataManager_obj()
{
}

void TileBitmapDataManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileBitmapDataManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(tileBitmapDataManager,"tileBitmapDataManager");
	HX_MARK_END_CLASS();
}

void TileBitmapDataManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(tileBitmapDataManager,"tileBitmapDataManager");
}

Dynamic TileBitmapDataManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tileBitmapDataManager") ) { return tileBitmapDataManager; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getTileBitmapDataManager") ) { return getTileBitmapDataManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileBitmapDataManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"tileBitmapDataManager") ) { tileBitmapDataManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileBitmapDataManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileBitmapDataManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(TileBitmapDataManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileBitmapDataManager*/ ,(int)offsetof(TileBitmapDataManager_obj,tileBitmapDataManager),HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("tileBitmapDataManager","\xa6","\x9e","\xe0","\x2a"),
	HX_HCSTRING("getTileBitmapDataManager","\x30","\xe2","\x74","\xc9"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileBitmapDataManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileBitmapDataManager_obj::__mClass,"__mClass");
};

#endif

hx::Class TileBitmapDataManager_obj::__mClass;

void TileBitmapDataManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.tile.managers.TileBitmapDataManager","\xc4","\x45","\xee","\x73");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileBitmapDataManager_obj >;
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
} // end namespace tile
} // end namespace managers
