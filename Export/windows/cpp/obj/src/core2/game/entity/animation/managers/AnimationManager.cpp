#include <hxcpp.h>

#ifndef INCLUDED_core2_game_entity_animation_managers_AnimationManager
#include <core2/game/entity/animation/managers/AnimationManager.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace entity{
namespace animation{
namespace managers{

Void AnimationManager_obj::__construct()
{
HX_STACK_FRAME("core2.game.entity.animation.managers.AnimationManager","new",0x14748d2f,"core2.game.entity.animation.managers.AnimationManager.new","core2/game/entity/animation/managers/AnimationManager.hx",11,0x23ac63a2)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	this->list = tmp;
	HX_STACK_LINE(13)
	this->animationManager = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//AnimationManager_obj::~AnimationManager_obj() { }

Dynamic AnimationManager_obj::__CreateEmpty() { return  new AnimationManager_obj; }
hx::ObjectPtr< AnimationManager_obj > AnimationManager_obj::__new()
{  hx::ObjectPtr< AnimationManager_obj > _result_ = new AnimationManager_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnimationManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationManager_obj > _result_ = new AnimationManager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::entity::animation::managers::AnimationManager AnimationManager_obj::getAnimationManager( ){
	HX_STACK_FRAME("core2.game.entity.animation.managers.AnimationManager","getAnimationManager",0x2159674e,"core2.game.entity.animation.managers.AnimationManager.getAnimationManager","core2/game/entity/animation/managers/AnimationManager.hx",15,0x23ac63a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(16)
	::core2::game::entity::animation::managers::AnimationManager tmp = this->animationManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationManager_obj,getAnimationManager,return )

::haxe::ds::_HashMap::HashMapData AnimationManager_obj::getList( ){
	HX_STACK_FRAME("core2.game.entity.animation.managers.AnimationManager","getList",0x43569c63,"core2.game.entity.animation.managers.AnimationManager.getList","core2/game/entity/animation/managers/AnimationManager.hx",18,0x23ac63a2)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationManager_obj,getList,return )


AnimationManager_obj::AnimationManager_obj()
{
}

void AnimationManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationManager);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(animationManager,"animationManager");
	HX_MARK_END_CLASS();
}

void AnimationManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(animationManager,"animationManager");
}

Dynamic AnimationManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationManager") ) { return animationManager; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnimationManager") ) { return getAnimationManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"animationManager") ) { animationManager=inValue.Cast< ::core2::game::entity::animation::managers::AnimationManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("animationManager","\xc9","\x73","\xb3","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(AnimationManager_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::entity::animation::managers::AnimationManager*/ ,(int)offsetof(AnimationManager_obj,animationManager),HX_HCSTRING("animationManager","\xc9","\x73","\xb3","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("animationManager","\xc9","\x73","\xb3","\x21"),
	HX_HCSTRING("getAnimationManager","\x7f","\xdc","\xd9","\xdb"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationManager_obj::__mClass;

void AnimationManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.animation.managers.AnimationManager","\xbd","\xc9","\x64","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationManager_obj >;
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
} // end namespace animation
} // end namespace managers
