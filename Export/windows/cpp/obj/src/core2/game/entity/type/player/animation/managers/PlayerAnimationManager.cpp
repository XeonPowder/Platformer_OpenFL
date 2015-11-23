#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_animation_managers_PlayerAnimationManager
#include <core2/game/entity/type/player/animation/managers/PlayerAnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace entity{
namespace type{
namespace player{
namespace animation{
namespace managers{

Void PlayerAnimationManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","new",0x80a58f97,"core2.game.entity.type.player.animation.managers.PlayerAnimationManager.new","core2/game/entity/type/player/animation/managers/PlayerAnimationManager.hx",12,0x93724c9a)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	this->list = tmp;
	HX_STACK_LINE(14)
	this->playerAnimationManager = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(15)
	int tmp1 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	this->id = tmp1;
}
;
	return null();
}

//PlayerAnimationManager_obj::~PlayerAnimationManager_obj() { }

Dynamic PlayerAnimationManager_obj::__CreateEmpty() { return  new PlayerAnimationManager_obj; }
hx::ObjectPtr< PlayerAnimationManager_obj > PlayerAnimationManager_obj::__new()
{  hx::ObjectPtr< PlayerAnimationManager_obj > _result_ = new PlayerAnimationManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic PlayerAnimationManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerAnimationManager_obj > _result_ = new PlayerAnimationManager_obj();
	_result_->__construct();
	return _result_;}

int PlayerAnimationManager_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","hashCode",0xe90fc584,"core2.game.entity.type.player.animation.managers.PlayerAnimationManager.hashCode","core2/game/entity/type/player/animation/managers/PlayerAnimationManager.hx",17,0x93724c9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimationManager_obj,hashCode,return )

::core2::game::entity::type::player::animation::managers::PlayerAnimationManager PlayerAnimationManager_obj::getPlayerAnimationManager( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","getPlayerAnimationManager",0x6a78c2f7,"core2.game.entity.type.player.animation.managers.PlayerAnimationManager.getPlayerAnimationManager","core2/game/entity/type/player/animation/managers/PlayerAnimationManager.hx",20,0x93724c9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	::core2::game::entity::type::player::animation::managers::PlayerAnimationManager tmp = this->playerAnimationManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimationManager_obj,getPlayerAnimationManager,return )

::haxe::ds::_HashMap::HashMapData PlayerAnimationManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","getList",0xcadcf2cb,"core2.game.entity.type.player.animation.managers.PlayerAnimationManager.getList","core2/game/entity/type/player/animation/managers/PlayerAnimationManager.hx",23,0x93724c9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimationManager_obj,getList,return )

int PlayerAnimationManager_obj::getID( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","getID",0x1909cce8,"core2.game.entity.type.player.animation.managers.PlayerAnimationManager.getID","core2/game/entity/type/player/animation/managers/PlayerAnimationManager.hx",26,0x93724c9a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(27)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimationManager_obj,getID,return )


PlayerAnimationManager_obj::PlayerAnimationManager_obj()
{
}

void PlayerAnimationManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerAnimationManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(playerAnimationManager,"playerAnimationManager");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void PlayerAnimationManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(playerAnimationManager,"playerAnimationManager");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic PlayerAnimationManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return getID_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerAnimationManager") ) { return playerAnimationManager; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getPlayerAnimationManager") ) { return getPlayerAnimationManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerAnimationManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerAnimationManager") ) { playerAnimationManager=inValue.Cast< ::core2::game::entity::type::player::animation::managers::PlayerAnimationManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerAnimationManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(PlayerAnimationManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::entity::type::player::animation::managers::PlayerAnimationManager*/ ,(int)offsetof(PlayerAnimationManager_obj,playerAnimationManager),HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3")},
	{hx::fsInt,(int)offsetof(PlayerAnimationManager_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getPlayerAnimationManager","\x80","\xa2","\xb6","\xf6"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerAnimationManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerAnimationManager_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerAnimationManager_obj::__mClass;

void PlayerAnimationManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.type.player.animation.managers.PlayerAnimationManager","\x25","\x78","\x7a","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerAnimationManager_obj >;
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
} // end namespace entity
} // end namespace type
} // end namespace player
} // end namespace animation
} // end namespace managers
