#include <hxcpp.h>

#ifndef INCLUDED_core2_game_managers_Manager
#include <core2/game/managers/Manager.h>
#endif
namespace core2{
namespace game{
namespace managers{

Void Manager_obj::__construct()
{
HX_STACK_FRAME("core2.game.managers.Manager","new",0xaf7dd478,"core2.game.managers.Manager.new","core2/game/managers/Manager.hx",8,0x71a6acd9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(8)
	this->manager = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new()
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct();
	return _result_;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct();
	return _result_;}

::core2::game::managers::Manager Manager_obj::getManager( ){
	HX_STACK_FRAME("core2.game.managers.Manager","getManager",0x73bc475f,"core2.game.managers.Manager.getManager","core2/game/managers/Manager.hx",10,0x71a6acd9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(11)
	::core2::game::managers::Manager tmp = this->manager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getManager,return )


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
}

Dynamic Manager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getManager") ) { return getManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::core2::game::managers::Manager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::managers::Manager*/ ,(int)offsetof(Manager_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("getManager","\x77","\x18","\x23","\x63"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
};

#endif

hx::Class Manager_obj::__mClass;

void Manager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.managers.Manager","\x86","\x78","\x74","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Manager_obj >;
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
} // end namespace managers
