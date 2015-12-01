#include <hxcpp.h>

#ifndef INCLUDED_nme_app_EventId
#include <nme/app/EventId.h>
#endif
namespace nme{
namespace app{

Void EventId_obj::__construct()
{
	return null();
}

//EventId_obj::~EventId_obj() { }

Dynamic EventId_obj::__CreateEmpty() { return  new EventId_obj; }
hx::ObjectPtr< EventId_obj > EventId_obj::__new()
{  hx::ObjectPtr< EventId_obj > _result_ = new EventId_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventId_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventId_obj > _result_ = new EventId_obj();
	_result_->__construct();
	return _result_;}

int EventId_obj::Unknown;

int EventId_obj::KeyDown;

int EventId_obj::Char;

int EventId_obj::KeyUp;

int EventId_obj::MouseMove;

int EventId_obj::MouseDown;

int EventId_obj::MouseClick;

int EventId_obj::MouseUp;

int EventId_obj::Resize;

int EventId_obj::Poll;

int EventId_obj::Quit;

int EventId_obj::Focus;

int EventId_obj::ShouldRotate;

int EventId_obj::DestroyHandler;

int EventId_obj::Redraw;

int EventId_obj::TouchBegin;

int EventId_obj::TouchMove;

int EventId_obj::TouchEnd;

int EventId_obj::TouchTap;

int EventId_obj::Change;

int EventId_obj::Activate;

int EventId_obj::Deactivate;

int EventId_obj::GotInputFocus;

int EventId_obj::LostInputFocus;

int EventId_obj::JoyAxisMove;

int EventId_obj::JoyBallMove;

int EventId_obj::JoyHatMove;

int EventId_obj::JoyButtonDown;

int EventId_obj::JoyButtonUp;

int EventId_obj::JoyDeviceAdded;

int EventId_obj::JoyDeviceRemoved;

int EventId_obj::SysWM;

int EventId_obj::RenderContextLost;

int EventId_obj::RenderContextRestored;


EventId_obj::EventId_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EventId_obj::Unknown,HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae")},
	{hx::fsInt,(void *) &EventId_obj::KeyDown,HX_HCSTRING("KeyDown","\x81","\x91","\x98","\x69")},
	{hx::fsInt,(void *) &EventId_obj::Char,HX_HCSTRING("Char","\xf6","\x8a","\x98","\x2c")},
	{hx::fsInt,(void *) &EventId_obj::KeyUp,HX_HCSTRING("KeyUp","\xba","\x29","\x2c","\x72")},
	{hx::fsInt,(void *) &EventId_obj::MouseMove,HX_HCSTRING("MouseMove","\xb6","\x7b","\x88","\x96")},
	{hx::fsInt,(void *) &EventId_obj::MouseDown,HX_HCSTRING("MouseDown","\x07","\x91","\x95","\x90")},
	{hx::fsInt,(void *) &EventId_obj::MouseClick,HX_HCSTRING("MouseClick","\x03","\x74","\xdc","\x5c")},
	{hx::fsInt,(void *) &EventId_obj::MouseUp,HX_HCSTRING("MouseUp","\xc0","\x1b","\xc4","\x8d")},
	{hx::fsInt,(void *) &EventId_obj::Resize,HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d")},
	{hx::fsInt,(void *) &EventId_obj::Poll,HX_HCSTRING("Poll","\x5f","\xaa","\x35","\x35")},
	{hx::fsInt,(void *) &EventId_obj::Quit,HX_HCSTRING("Quit","\xef","\x6b","\xe3","\x35")},
	{hx::fsInt,(void *) &EventId_obj::Focus,HX_HCSTRING("Focus","\xb8","\xcf","\xb6","\x97")},
	{hx::fsInt,(void *) &EventId_obj::ShouldRotate,HX_HCSTRING("ShouldRotate","\x0e","\x57","\x6a","\xd3")},
	{hx::fsInt,(void *) &EventId_obj::DestroyHandler,HX_HCSTRING("DestroyHandler","\x10","\x32","\x97","\x5c")},
	{hx::fsInt,(void *) &EventId_obj::Redraw,HX_HCSTRING("Redraw","\x57","\x59","\x2c","\x33")},
	{hx::fsInt,(void *) &EventId_obj::TouchBegin,HX_HCSTRING("TouchBegin","\x0a","\xd2","\x97","\xa0")},
	{hx::fsInt,(void *) &EventId_obj::TouchMove,HX_HCSTRING("TouchMove","\x50","\x52","\xa0","\xaf")},
	{hx::fsInt,(void *) &EventId_obj::TouchEnd,HX_HCSTRING("TouchEnd","\x7c","\x81","\xbb","\xd9")},
	{hx::fsInt,(void *) &EventId_obj::TouchTap,HX_HCSTRING("TouchTap","\x04","\xd8","\xc6","\xd9")},
	{hx::fsInt,(void *) &EventId_obj::Change,HX_HCSTRING("Change","\x90","\x05","\x07","\xec")},
	{hx::fsInt,(void *) &EventId_obj::Activate,HX_HCSTRING("Activate","\xd3","\xd7","\x5d","\xbf")},
	{hx::fsInt,(void *) &EventId_obj::Deactivate,HX_HCSTRING("Deactivate","\x54","\x60","\xb2","\x32")},
	{hx::fsInt,(void *) &EventId_obj::GotInputFocus,HX_HCSTRING("GotInputFocus","\xba","\x1b","\xa1","\xb8")},
	{hx::fsInt,(void *) &EventId_obj::LostInputFocus,HX_HCSTRING("LostInputFocus","\x92","\x2e","\x27","\x71")},
	{hx::fsInt,(void *) &EventId_obj::JoyAxisMove,HX_HCSTRING("JoyAxisMove","\x66","\xe8","\x55","\xbe")},
	{hx::fsInt,(void *) &EventId_obj::JoyBallMove,HX_HCSTRING("JoyBallMove","\xc4","\xb4","\x5e","\x66")},
	{hx::fsInt,(void *) &EventId_obj::JoyHatMove,HX_HCSTRING("JoyHatMove","\x78","\xde","\x67","\x8d")},
	{hx::fsInt,(void *) &EventId_obj::JoyButtonDown,HX_HCSTRING("JoyButtonDown","\x88","\xec","\xda","\x37")},
	{hx::fsInt,(void *) &EventId_obj::JoyButtonUp,HX_HCSTRING("JoyButtonUp","\x01","\xe5","\x93","\x8a")},
	{hx::fsInt,(void *) &EventId_obj::JoyDeviceAdded,HX_HCSTRING("JoyDeviceAdded","\xb6","\xf4","\xc1","\x87")},
	{hx::fsInt,(void *) &EventId_obj::JoyDeviceRemoved,HX_HCSTRING("JoyDeviceRemoved","\x16","\xa9","\x3e","\xd2")},
	{hx::fsInt,(void *) &EventId_obj::SysWM,HX_HCSTRING("SysWM","\x43","\x86","\x94","\x1a")},
	{hx::fsInt,(void *) &EventId_obj::RenderContextLost,HX_HCSTRING("RenderContextLost","\x9d","\x2f","\x0b","\x6d")},
	{hx::fsInt,(void *) &EventId_obj::RenderContextRestored,HX_HCSTRING("RenderContextRestored","\x8f","\x53","\xc5","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventId_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventId_obj::Unknown,"Unknown");
	HX_MARK_MEMBER_NAME(EventId_obj::KeyDown,"KeyDown");
	HX_MARK_MEMBER_NAME(EventId_obj::Char,"Char");
	HX_MARK_MEMBER_NAME(EventId_obj::KeyUp,"KeyUp");
	HX_MARK_MEMBER_NAME(EventId_obj::MouseMove,"MouseMove");
	HX_MARK_MEMBER_NAME(EventId_obj::MouseDown,"MouseDown");
	HX_MARK_MEMBER_NAME(EventId_obj::MouseClick,"MouseClick");
	HX_MARK_MEMBER_NAME(EventId_obj::MouseUp,"MouseUp");
	HX_MARK_MEMBER_NAME(EventId_obj::Resize,"Resize");
	HX_MARK_MEMBER_NAME(EventId_obj::Poll,"Poll");
	HX_MARK_MEMBER_NAME(EventId_obj::Quit,"Quit");
	HX_MARK_MEMBER_NAME(EventId_obj::Focus,"Focus");
	HX_MARK_MEMBER_NAME(EventId_obj::ShouldRotate,"ShouldRotate");
	HX_MARK_MEMBER_NAME(EventId_obj::DestroyHandler,"DestroyHandler");
	HX_MARK_MEMBER_NAME(EventId_obj::Redraw,"Redraw");
	HX_MARK_MEMBER_NAME(EventId_obj::TouchBegin,"TouchBegin");
	HX_MARK_MEMBER_NAME(EventId_obj::TouchMove,"TouchMove");
	HX_MARK_MEMBER_NAME(EventId_obj::TouchEnd,"TouchEnd");
	HX_MARK_MEMBER_NAME(EventId_obj::TouchTap,"TouchTap");
	HX_MARK_MEMBER_NAME(EventId_obj::Change,"Change");
	HX_MARK_MEMBER_NAME(EventId_obj::Activate,"Activate");
	HX_MARK_MEMBER_NAME(EventId_obj::Deactivate,"Deactivate");
	HX_MARK_MEMBER_NAME(EventId_obj::GotInputFocus,"GotInputFocus");
	HX_MARK_MEMBER_NAME(EventId_obj::LostInputFocus,"LostInputFocus");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyAxisMove,"JoyAxisMove");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyBallMove,"JoyBallMove");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyHatMove,"JoyHatMove");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyButtonDown,"JoyButtonDown");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyButtonUp,"JoyButtonUp");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyDeviceAdded,"JoyDeviceAdded");
	HX_MARK_MEMBER_NAME(EventId_obj::JoyDeviceRemoved,"JoyDeviceRemoved");
	HX_MARK_MEMBER_NAME(EventId_obj::SysWM,"SysWM");
	HX_MARK_MEMBER_NAME(EventId_obj::RenderContextLost,"RenderContextLost");
	HX_MARK_MEMBER_NAME(EventId_obj::RenderContextRestored,"RenderContextRestored");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventId_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventId_obj::Unknown,"Unknown");
	HX_VISIT_MEMBER_NAME(EventId_obj::KeyDown,"KeyDown");
	HX_VISIT_MEMBER_NAME(EventId_obj::Char,"Char");
	HX_VISIT_MEMBER_NAME(EventId_obj::KeyUp,"KeyUp");
	HX_VISIT_MEMBER_NAME(EventId_obj::MouseMove,"MouseMove");
	HX_VISIT_MEMBER_NAME(EventId_obj::MouseDown,"MouseDown");
	HX_VISIT_MEMBER_NAME(EventId_obj::MouseClick,"MouseClick");
	HX_VISIT_MEMBER_NAME(EventId_obj::MouseUp,"MouseUp");
	HX_VISIT_MEMBER_NAME(EventId_obj::Resize,"Resize");
	HX_VISIT_MEMBER_NAME(EventId_obj::Poll,"Poll");
	HX_VISIT_MEMBER_NAME(EventId_obj::Quit,"Quit");
	HX_VISIT_MEMBER_NAME(EventId_obj::Focus,"Focus");
	HX_VISIT_MEMBER_NAME(EventId_obj::ShouldRotate,"ShouldRotate");
	HX_VISIT_MEMBER_NAME(EventId_obj::DestroyHandler,"DestroyHandler");
	HX_VISIT_MEMBER_NAME(EventId_obj::Redraw,"Redraw");
	HX_VISIT_MEMBER_NAME(EventId_obj::TouchBegin,"TouchBegin");
	HX_VISIT_MEMBER_NAME(EventId_obj::TouchMove,"TouchMove");
	HX_VISIT_MEMBER_NAME(EventId_obj::TouchEnd,"TouchEnd");
	HX_VISIT_MEMBER_NAME(EventId_obj::TouchTap,"TouchTap");
	HX_VISIT_MEMBER_NAME(EventId_obj::Change,"Change");
	HX_VISIT_MEMBER_NAME(EventId_obj::Activate,"Activate");
	HX_VISIT_MEMBER_NAME(EventId_obj::Deactivate,"Deactivate");
	HX_VISIT_MEMBER_NAME(EventId_obj::GotInputFocus,"GotInputFocus");
	HX_VISIT_MEMBER_NAME(EventId_obj::LostInputFocus,"LostInputFocus");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyAxisMove,"JoyAxisMove");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyBallMove,"JoyBallMove");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyHatMove,"JoyHatMove");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyButtonDown,"JoyButtonDown");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyButtonUp,"JoyButtonUp");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyDeviceAdded,"JoyDeviceAdded");
	HX_VISIT_MEMBER_NAME(EventId_obj::JoyDeviceRemoved,"JoyDeviceRemoved");
	HX_VISIT_MEMBER_NAME(EventId_obj::SysWM,"SysWM");
	HX_VISIT_MEMBER_NAME(EventId_obj::RenderContextLost,"RenderContextLost");
	HX_VISIT_MEMBER_NAME(EventId_obj::RenderContextRestored,"RenderContextRestored");
};

#endif

hx::Class EventId_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Unknown","\x6a","\x4b","\xcc","\xae"),
	HX_HCSTRING("KeyDown","\x81","\x91","\x98","\x69"),
	HX_HCSTRING("Char","\xf6","\x8a","\x98","\x2c"),
	HX_HCSTRING("KeyUp","\xba","\x29","\x2c","\x72"),
	HX_HCSTRING("MouseMove","\xb6","\x7b","\x88","\x96"),
	HX_HCSTRING("MouseDown","\x07","\x91","\x95","\x90"),
	HX_HCSTRING("MouseClick","\x03","\x74","\xdc","\x5c"),
	HX_HCSTRING("MouseUp","\xc0","\x1b","\xc4","\x8d"),
	HX_HCSTRING("Resize","\x14","\xce","\x0f","\x3d"),
	HX_HCSTRING("Poll","\x5f","\xaa","\x35","\x35"),
	HX_HCSTRING("Quit","\xef","\x6b","\xe3","\x35"),
	HX_HCSTRING("Focus","\xb8","\xcf","\xb6","\x97"),
	HX_HCSTRING("ShouldRotate","\x0e","\x57","\x6a","\xd3"),
	HX_HCSTRING("DestroyHandler","\x10","\x32","\x97","\x5c"),
	HX_HCSTRING("Redraw","\x57","\x59","\x2c","\x33"),
	HX_HCSTRING("TouchBegin","\x0a","\xd2","\x97","\xa0"),
	HX_HCSTRING("TouchMove","\x50","\x52","\xa0","\xaf"),
	HX_HCSTRING("TouchEnd","\x7c","\x81","\xbb","\xd9"),
	HX_HCSTRING("TouchTap","\x04","\xd8","\xc6","\xd9"),
	HX_HCSTRING("Change","\x90","\x05","\x07","\xec"),
	HX_HCSTRING("Activate","\xd3","\xd7","\x5d","\xbf"),
	HX_HCSTRING("Deactivate","\x54","\x60","\xb2","\x32"),
	HX_HCSTRING("GotInputFocus","\xba","\x1b","\xa1","\xb8"),
	HX_HCSTRING("LostInputFocus","\x92","\x2e","\x27","\x71"),
	HX_HCSTRING("JoyAxisMove","\x66","\xe8","\x55","\xbe"),
	HX_HCSTRING("JoyBallMove","\xc4","\xb4","\x5e","\x66"),
	HX_HCSTRING("JoyHatMove","\x78","\xde","\x67","\x8d"),
	HX_HCSTRING("JoyButtonDown","\x88","\xec","\xda","\x37"),
	HX_HCSTRING("JoyButtonUp","\x01","\xe5","\x93","\x8a"),
	HX_HCSTRING("JoyDeviceAdded","\xb6","\xf4","\xc1","\x87"),
	HX_HCSTRING("JoyDeviceRemoved","\x16","\xa9","\x3e","\xd2"),
	HX_HCSTRING("SysWM","\x43","\x86","\x94","\x1a"),
	HX_HCSTRING("RenderContextLost","\x9d","\x2f","\x0b","\x6d"),
	HX_HCSTRING("RenderContextRestored","\x8f","\x53","\xc5","\x8a"),
	::String(null()) };

void EventId_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.EventId","\x80","\xcc","\xb7","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventId_obj >;
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

void EventId_obj::__boot()
{
	Unknown= (int)0;
	KeyDown= (int)1;
	Char= (int)2;
	KeyUp= (int)3;
	MouseMove= (int)4;
	MouseDown= (int)5;
	MouseClick= (int)6;
	MouseUp= (int)7;
	Resize= (int)8;
	Poll= (int)9;
	Quit= (int)10;
	Focus= (int)11;
	ShouldRotate= (int)12;
	DestroyHandler= (int)13;
	Redraw= (int)14;
	TouchBegin= (int)15;
	TouchMove= (int)16;
	TouchEnd= (int)17;
	TouchTap= (int)18;
	Change= (int)19;
	Activate= (int)20;
	Deactivate= (int)21;
	GotInputFocus= (int)22;
	LostInputFocus= (int)23;
	JoyAxisMove= (int)24;
	JoyBallMove= (int)25;
	JoyHatMove= (int)26;
	JoyButtonDown= (int)27;
	JoyButtonUp= (int)28;
	JoyDeviceAdded= (int)29;
	JoyDeviceRemoved= (int)30;
	SysWM= (int)31;
	RenderContextLost= (int)32;
	RenderContextRestored= (int)33;
}

} // end namespace nme
} // end namespace app
