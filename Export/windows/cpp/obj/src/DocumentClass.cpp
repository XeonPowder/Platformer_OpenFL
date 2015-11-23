#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif

Void DocumentClass_obj::__construct()
{
	return null();
}

//DocumentClass_obj::~DocumentClass_obj() { }

Dynamic DocumentClass_obj::__CreateEmpty() { return  new DocumentClass_obj; }
hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new()
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct();
	return _result_;}

Dynamic DocumentClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DocumentClass_obj > _result_ = new DocumentClass_obj();
	_result_->__construct();
	return _result_;}


DocumentClass_obj::DocumentClass_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DocumentClass_obj::__mClass,"__mClass");
};

#endif

hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DocumentClass","\xfd","\xa6","\x03","\x3e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DocumentClass_obj >;
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

