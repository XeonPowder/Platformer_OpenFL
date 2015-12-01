#include <hxcpp.h>

#ifndef INCLUDED_nme_Version
#include <nme/Version.h>
#endif
namespace nme{

Void Version_obj::__construct()
{
	return null();
}

//Version_obj::~Version_obj() { }

Dynamic Version_obj::__CreateEmpty() { return  new Version_obj; }
hx::ObjectPtr< Version_obj > Version_obj::__new()
{  hx::ObjectPtr< Version_obj > _result_ = new Version_obj();
	_result_->__construct();
	return _result_;}

Dynamic Version_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Version_obj > _result_ = new Version_obj();
	_result_->__construct();
	return _result_;}

::String Version_obj::name;


Version_obj::Version_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Version_obj::name,HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Version_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Version_obj::name,"name");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Version_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Version_obj::name,"name");
};

#endif

hx::Class Version_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	::String(null()) };

void Version_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Version","\xd0","\x1d","\xd9","\x09");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Version_obj >;
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

void Version_obj::__boot()
{
	name= HX_HCSTRING("5.5.7","\x05","\xef","\xcc","\xa2");
}

} // end namespace nme
