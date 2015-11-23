#include <hxcpp.h>

#ifndef INCLUDED_core2_game_entity_listeners_EntityListener
#include <core2/game/entity/listeners/EntityListener.h>
#endif
namespace core2{
namespace game{
namespace entity{
namespace listeners{

Void EntityListener_obj::__construct()
{
HX_STACK_FRAME("core2.game.entity.listeners.EntityListener","new",0x1083fa62,"core2.game.entity.listeners.EntityListener.new","core2/game/entity/listeners/EntityListener.hx",6,0x13e8662c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//EntityListener_obj::~EntityListener_obj() { }

Dynamic EntityListener_obj::__CreateEmpty() { return  new EntityListener_obj; }
hx::ObjectPtr< EntityListener_obj > EntityListener_obj::__new()
{  hx::ObjectPtr< EntityListener_obj > _result_ = new EntityListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic EntityListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityListener_obj > _result_ = new EntityListener_obj();
	_result_->__construct();
	return _result_;}

Void EntityListener_obj::update( ){
{
		HX_STACK_FRAME("core2.game.entity.listeners.EntityListener","update",0x791e0947,"core2.game.entity.listeners.EntityListener.update","core2/game/entity/listeners/EntityListener.hx",9,0x13e8662c)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EntityListener_obj,update,(void))


EntityListener_obj::EntityListener_obj()
{
}

Dynamic EntityListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityListener_obj::__mClass,"__mClass");
};

#endif

hx::Class EntityListener_obj::__mClass;

void EntityListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.listeners.EntityListener","\x70","\xe1","\x62","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EntityListener_obj >;
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
} // end namespace listeners
