#include <hxcpp.h>

#ifndef INCLUDED_nme_app_EventName
#include <nme/app/EventName.h>
#endif
namespace nme{
namespace app{

Void EventName_obj::__construct()
{
	return null();
}

//EventName_obj::~EventName_obj() { }

Dynamic EventName_obj::__CreateEmpty() { return  new EventName_obj; }
hx::ObjectPtr< EventName_obj > EventName_obj::__new()
{  hx::ObjectPtr< EventName_obj > _result_ = new EventName_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventName_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventName_obj > _result_ = new EventName_obj();
	_result_->__construct();
	return _result_;}

::String EventName_obj::KEY_DOWN;

::String EventName_obj::KEY_UP;

::String EventName_obj::MOUSE_MOVE;

::String EventName_obj::MOUSE_DOWN;

::String EventName_obj::MOUSE_UP;

::String EventName_obj::CLICK;

::String EventName_obj::TOUCH_BEGIN;

::String EventName_obj::TOUCH_MOVE;

::String EventName_obj::TOUCH_END;

::String EventName_obj::TOUCH_TAP;

::String EventName_obj::AXIS_MOVE;

::String EventName_obj::BALL_MOVE;

::String EventName_obj::HAT_MOVE;

::String EventName_obj::BUTTON_DOWN;

::String EventName_obj::BUTTON_UP;


EventName_obj::EventName_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &EventName_obj::KEY_DOWN,HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d")},
	{hx::fsString,(void *) &EventName_obj::KEY_UP,HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2")},
	{hx::fsString,(void *) &EventName_obj::MOUSE_MOVE,HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4")},
	{hx::fsString,(void *) &EventName_obj::MOUSE_DOWN,HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde")},
	{hx::fsString,(void *) &EventName_obj::MOUSE_UP,HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd")},
	{hx::fsString,(void *) &EventName_obj::CLICK,HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6")},
	{hx::fsString,(void *) &EventName_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &EventName_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &EventName_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &EventName_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{hx::fsString,(void *) &EventName_obj::AXIS_MOVE,HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a")},
	{hx::fsString,(void *) &EventName_obj::BALL_MOVE,HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89")},
	{hx::fsString,(void *) &EventName_obj::HAT_MOVE,HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21")},
	{hx::fsString,(void *) &EventName_obj::BUTTON_DOWN,HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3")},
	{hx::fsString,(void *) &EventName_obj::BUTTON_UP,HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventName_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventName_obj::KEY_DOWN,"KEY_DOWN");
	HX_MARK_MEMBER_NAME(EventName_obj::KEY_UP,"KEY_UP");
	HX_MARK_MEMBER_NAME(EventName_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_MARK_MEMBER_NAME(EventName_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_MARK_MEMBER_NAME(EventName_obj::MOUSE_UP,"MOUSE_UP");
	HX_MARK_MEMBER_NAME(EventName_obj::CLICK,"CLICK");
	HX_MARK_MEMBER_NAME(EventName_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(EventName_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(EventName_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(EventName_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_MARK_MEMBER_NAME(EventName_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_MARK_MEMBER_NAME(EventName_obj::BALL_MOVE,"BALL_MOVE");
	HX_MARK_MEMBER_NAME(EventName_obj::HAT_MOVE,"HAT_MOVE");
	HX_MARK_MEMBER_NAME(EventName_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_MARK_MEMBER_NAME(EventName_obj::BUTTON_UP,"BUTTON_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventName_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventName_obj::KEY_DOWN,"KEY_DOWN");
	HX_VISIT_MEMBER_NAME(EventName_obj::KEY_UP,"KEY_UP");
	HX_VISIT_MEMBER_NAME(EventName_obj::MOUSE_MOVE,"MOUSE_MOVE");
	HX_VISIT_MEMBER_NAME(EventName_obj::MOUSE_DOWN,"MOUSE_DOWN");
	HX_VISIT_MEMBER_NAME(EventName_obj::MOUSE_UP,"MOUSE_UP");
	HX_VISIT_MEMBER_NAME(EventName_obj::CLICK,"CLICK");
	HX_VISIT_MEMBER_NAME(EventName_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(EventName_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(EventName_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(EventName_obj::TOUCH_TAP,"TOUCH_TAP");
	HX_VISIT_MEMBER_NAME(EventName_obj::AXIS_MOVE,"AXIS_MOVE");
	HX_VISIT_MEMBER_NAME(EventName_obj::BALL_MOVE,"BALL_MOVE");
	HX_VISIT_MEMBER_NAME(EventName_obj::HAT_MOVE,"HAT_MOVE");
	HX_VISIT_MEMBER_NAME(EventName_obj::BUTTON_DOWN,"BUTTON_DOWN");
	HX_VISIT_MEMBER_NAME(EventName_obj::BUTTON_UP,"BUTTON_UP");
};

#endif

hx::Class EventName_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d"),
	HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2"),
	HX_HCSTRING("MOUSE_MOVE","\xcb","\x86","\xed","\xe4"),
	HX_HCSTRING("MOUSE_DOWN","\x1c","\x9c","\xfa","\xde"),
	HX_HCSTRING("MOUSE_UP","\x95","\xe3","\xc7","\xfd"),
	HX_HCSTRING("CLICK","\x28","\xb4","\x4c","\xc6"),
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("AXIS_MOVE","\xaf","\x7a","\x13","\x2a"),
	HX_HCSTRING("BALL_MOVE","\x91","\x80","\xbd","\x89"),
	HX_HCSTRING("HAT_MOVE","\xd5","\x55","\x50","\x21"),
	HX_HCSTRING("BUTTON_DOWN","\x0f","\x01","\x0b","\xf3"),
	HX_HCSTRING("BUTTON_UP","\xc8","\x15","\x81","\x4b"),
	::String(null()) };

void EventName_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.EventName","\x30","\x16","\xf0","\x90");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventName_obj >;
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

void EventName_obj::__boot()
{
	KEY_DOWN= HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c");
	KEY_UP= HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde");
	MOUSE_MOVE= HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4");
	MOUSE_DOWN= HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee");
	MOUSE_UP= HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0");
	CLICK= HX_HCSTRING("click","\x48","\x7c","\x5e","\x48");
	TOUCH_BEGIN= HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9");
	TOUCH_MOVE= HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d");
	TOUCH_END= HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00");
	TOUCH_TAP= HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00");
	AXIS_MOVE= HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f");
	BALL_MOVE= HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37");
	HAT_MOVE= HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab");
	BUTTON_DOWN= HX_HCSTRING("downMove","\x93","\xe0","\x48","\x7d");
	BUTTON_UP= HX_HCSTRING("upMove","\x0c","\x3f","\xdc","\x77");
}

} // end namespace nme
} // end namespace app
