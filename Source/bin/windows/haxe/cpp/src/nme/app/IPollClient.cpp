#include <hxcpp.h>

#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
namespace nme{
namespace app{


static ::String sMemberFields[] = {
	HX_HCSTRING("onPoll","\xfe","\x86","\xe6","\xec"),
	HX_HCSTRING("getNextWake","\x6d","\xc5","\xb2","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IPollClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IPollClient_obj::__mClass,"__mClass");
};

#endif

hx::Class IPollClient_obj::__mClass;

void IPollClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.IPollClient","\x1e","\x53","\x66","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IPollClient_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nme
} // end namespace app
