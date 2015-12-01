#include <hxcpp.h>

#ifndef INCLUDED_ApplicationBoot
#include <ApplicationBoot.h>
#endif

Void ApplicationBoot_obj::__construct()
{
	return null();
}

//ApplicationBoot_obj::~ApplicationBoot_obj() { }

Dynamic ApplicationBoot_obj::__CreateEmpty() { return  new ApplicationBoot_obj; }
hx::ObjectPtr< ApplicationBoot_obj > ApplicationBoot_obj::__new()
{  hx::ObjectPtr< ApplicationBoot_obj > _result_ = new ApplicationBoot_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationBoot_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationBoot_obj > _result_ = new ApplicationBoot_obj();
	_result_->__construct();
	return _result_;}


ApplicationBoot_obj::ApplicationBoot_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationBoot_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationBoot_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplicationBoot_obj::__mClass;

void ApplicationBoot_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationBoot","\x82","\x4b","\xff","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationBoot_obj >;
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

