#include <hxcpp.h>

#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileManager
#include <core2/game/world/maps/tile/managers/TileManager.h>
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

Void TileManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileManager","new",0xb0c629ef,"core2.game.world.maps.tile.managers.TileManager.new","core2/game/world/maps/tile/managers/TileManager.hx",9,0xe46ac441)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(10)
	this->tileManager = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(11)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	this->list = tmp;
}
;
	return null();
}

//TileManager_obj::~TileManager_obj() { }

Dynamic TileManager_obj::__CreateEmpty() { return  new TileManager_obj; }
hx::ObjectPtr< TileManager_obj > TileManager_obj::__new()
{  hx::ObjectPtr< TileManager_obj > _result_ = new TileManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic TileManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TileManager_obj > _result_ = new TileManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::world::maps::tile::managers::TileManager TileManager_obj::getTileManager( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileManager","getTileManager",0xa29ca6ba,"core2.game.world.maps.tile.managers.TileManager.getTileManager","core2/game/world/maps/tile/managers/TileManager.hx",13,0xe46ac441)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::core2::game::world::maps::tile::managers::TileManager tmp = this->tileManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TileManager_obj,getTileManager,return )

::haxe::ds::_HashMap::HashMapData TileManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.managers.TileManager","getList",0xeb959923,"core2.game.world.maps.tile.managers.TileManager.getList","core2/game/world/maps/tile/managers/TileManager.hx",16,0xe46ac441)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(TileManager_obj,getList,return )


TileManager_obj::TileManager_obj()
{
}

void TileManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TileManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(tileManager,"tileManager");
	HX_MARK_END_CLASS();
}

void TileManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(tileManager,"tileManager");
}

Dynamic TileManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { return tileManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getTileManager") ) { return getTileManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TileManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TileManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(TileManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(TileManager_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"),
	HX_HCSTRING("getTileManager","\xe9","\x23","\xc4","\x3a"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TileManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TileManager_obj::__mClass,"__mClass");
};

#endif

hx::Class TileManager_obj::__mClass;

void TileManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.tile.managers.TileManager","\x7d","\x06","\xf9","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TileManager_obj >;
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
