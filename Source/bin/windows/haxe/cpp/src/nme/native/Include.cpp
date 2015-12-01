#include <hxcpp.h>

#ifndef INCLUDED_nme_native_Include
#include <nme/native/Include.h>
#endif
namespace nme{
namespace native{

Void Include_obj::__construct()
{
	return null();
}

//Include_obj::~Include_obj() { }

Dynamic Include_obj::__CreateEmpty() { return  new Include_obj; }
hx::ObjectPtr< Include_obj > Include_obj::__new()
{  hx::ObjectPtr< Include_obj > _result_ = new Include_obj();
	_result_->__construct();
	return _result_;}

Dynamic Include_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Include_obj > _result_ = new Include_obj();
	_result_->__construct();
	return _result_;}


Include_obj::Include_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Include_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Include_obj::__mClass,"__mClass");
};

#endif

hx::Class Include_obj::__mClass;

void Include_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.native.Include","\x59","\x5c","\x43","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Include_obj >;
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

} // end namespace nme
} // end namespace native
