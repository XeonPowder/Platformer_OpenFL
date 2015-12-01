#include <hxcpp.h>

#include "nme/Event.h"
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
namespace nme{
namespace app{


static ::String sMemberFields[] = {
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	HX_HCSTRING("onText","\x6c","\xd5","\x83","\xef"),
	HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32"),
	HX_HCSTRING("onMouse","\x86","\xb4","\xa2","\xa2"),
	HX_HCSTRING("onTouch","\x20","\xb6","\x70","\xaa"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("onDisplayObjectFocus","\x76","\xa6","\xfb","\xcc"),
	HX_HCSTRING("onInputFocus","\x6d","\xc9","\x07","\x5b"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("onActive","\x45","\x38","\xf3","\xf5"),
	HX_HCSTRING("onJoystick","\xfb","\xb4","\xa8","\x79"),
	HX_HCSTRING("onSysMessage","\x39","\xbe","\xdd","\x06"),
	HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"),
	HX_HCSTRING("onUnhandledException","\x4b","\x0a","\xce","\xd2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IAppEventHandler_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IAppEventHandler_obj::__mClass,"__mClass");
};

#endif

hx::Class IAppEventHandler_obj::__mClass;

void IAppEventHandler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.IAppEventHandler","\x5d","\xa3","\xc2","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IAppEventHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace nme
} // end namespace app
