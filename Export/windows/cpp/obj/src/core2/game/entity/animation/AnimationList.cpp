#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_entity_animation_AnimationList
#include <core2/game/entity/animation/AnimationList.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
namespace core2{
namespace game{
namespace entity{
namespace animation{

Void AnimationList_obj::__construct()
{
HX_STACK_FRAME("core2.game.entity.animation.AnimationList","new",0xfc9a6520,"core2.game.entity.animation.AnimationList.new","core2/game/entity/animation/AnimationList.hx",8,0x540d2532)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->id = (int)0;
	HX_STACK_LINE(15)
	::haxe::ds::_HashMap::HashMapData tmp = ::haxe::ds::_HashMap::HashMapData_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	this->list = tmp;
	HX_STACK_LINE(16)
	this->animationList = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(17)
	int tmp1 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(17)
	this->id = tmp1;
}
;
	return null();
}

//AnimationList_obj::~AnimationList_obj() { }

Dynamic AnimationList_obj::__CreateEmpty() { return  new AnimationList_obj; }
hx::ObjectPtr< AnimationList_obj > AnimationList_obj::__new()
{  hx::ObjectPtr< AnimationList_obj > _result_ = new AnimationList_obj();
	_result_->__construct();
	return _result_;}

Dynamic AnimationList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationList_obj > _result_ = new AnimationList_obj();
	_result_->__construct();
	return _result_;}

::core2::game::entity::animation::AnimationList AnimationList_obj::getAnimationList( ){
	HX_STACK_FRAME("core2.game.entity.animation.AnimationList","getAnimationList",0x2a4b264c,"core2.game.entity.animation.AnimationList.getAnimationList","core2/game/entity/animation/AnimationList.hx",19,0x540d2532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::core2::game::entity::animation::AnimationList tmp = this->animationList;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationList_obj,getAnimationList,return )

::haxe::ds::_HashMap::HashMapData AnimationList_obj::getList( ){
	HX_STACK_FRAME("core2.game.entity.animation.AnimationList","getList",0x8c45c0d4,"core2.game.entity.animation.AnimationList.getList","core2/game/entity/animation/AnimationList.hx",22,0x540d2532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	::haxe::ds::_HashMap::HashMapData tmp = this->list;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationList_obj,getList,return )

int AnimationList_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.entity.animation.AnimationList","hashCode",0x635b3f5b,"core2.game.entity.animation.AnimationList.hashCode","core2/game/entity/animation/AnimationList.hx",25,0x540d2532)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationList_obj,hashCode,return )


AnimationList_obj::AnimationList_obj()
{
}

void AnimationList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationList);
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(animationList,"animationList");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void AnimationList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(animationList,"animationList");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic AnimationList_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getList") ) { return getList_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationList") ) { return animationList; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getAnimationList") ) { return getAnimationList_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationList_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::haxe::ds::_HashMap::HashMapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationList") ) { animationList=inValue.Cast< ::core2::game::entity::animation::AnimationList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"));
	outFields->push(HX_HCSTRING("animationList","\x82","\x09","\xff","\x39"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::_HashMap::HashMapData*/ ,(int)offsetof(AnimationList_obj,list),HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47")},
	{hx::fsObject /*::core2::game::entity::animation::AnimationList*/ ,(int)offsetof(AnimationList_obj,animationList),HX_HCSTRING("animationList","\x82","\x09","\xff","\x39")},
	{hx::fsInt,(int)offsetof(AnimationList_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("animationList","\x82","\x09","\xff","\x39"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("getAnimationList","\x0c","\xb3","\x1f","\xa4"),
	HX_HCSTRING("getList","\x14","\xcc","\x35","\x1a"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationList_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationList_obj::__mClass;

void AnimationList_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.animation.AnimationList","\x2e","\x95","\x81","\xd8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationList_obj >;
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
