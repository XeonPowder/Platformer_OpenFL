#include <hxcpp.h>

#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#ifndef INCLUDED_nme_app_Window
#include <nme/app/Window.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_ManagedStage
#include <nme/display/ManagedStage.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
namespace nme{
namespace display{

Void ManagedStage_obj::__construct(int inWidth,int inHeight,hx::Null< int >  __o_inFlags)
{
HX_STACK_FRAME("nme.display.ManagedStage","new",0x4f184e45,"nme.display.ManagedStage.new","nme/display/ManagedStage.hx",41,0x5f1dea09)
HX_STACK_THIS(this)
HX_STACK_ARG(inWidth,"inWidth")
HX_STACK_ARG(inHeight,"inHeight")
HX_STACK_ARG(__o_inFlags,"inFlags")
int inFlags = __o_inFlags.Default(0);
{
	HX_STACK_LINE(42)
	int tmp = inWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	int tmp1 = inHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	int tmp2 = inFlags;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	Dynamic tmp3 = ::nme::display::ManagedStage_obj::nme_managed_stage_create(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	Dynamic managedStage = tmp3;		HX_STACK_VAR(managedStage,"managedStage");
	HX_STACK_LINE(43)
	::nme::app::Window tmp4 = ::nme::app::Window_obj::__new(managedStage,inWidth,inHeight);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	::nme::app::Window managedWindow = tmp4;		HX_STACK_VAR(managedWindow,"managedWindow");
	HX_STACK_LINE(44)
	::nme::app::Window tmp5 = managedWindow;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(44)
	super::__construct(tmp5);
}
;
	return null();
}

//ManagedStage_obj::~ManagedStage_obj() { }

Dynamic ManagedStage_obj::__CreateEmpty() { return  new ManagedStage_obj; }
hx::ObjectPtr< ManagedStage_obj > ManagedStage_obj::__new(int inWidth,int inHeight,hx::Null< int >  __o_inFlags)
{  hx::ObjectPtr< ManagedStage_obj > _result_ = new ManagedStage_obj();
	_result_->__construct(inWidth,inHeight,__o_inFlags);
	return _result_;}

Dynamic ManagedStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ManagedStage_obj > _result_ = new ManagedStage_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void ManagedStage_obj::pumpEvent( Dynamic inEvent){
{
		HX_STACK_FRAME("nme.display.ManagedStage","pumpEvent",0xdaadc1f7,"nme.display.ManagedStage.pumpEvent","nme/display/ManagedStage.hx",62,0x5f1dea09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_LINE(63)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		Dynamic tmp1 = inEvent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		::nme::display::ManagedStage_obj::nme_managed_stage_pump_event(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ManagedStage_obj,pumpEvent,(void))

Void ManagedStage_obj::onWindowSize( int inWidth,int inHeight){
{
		HX_STACK_FRAME("nme.display.ManagedStage","onWindowSize",0xc74ed84b,"nme.display.ManagedStage.onWindowSize","nme/display/ManagedStage.hx",67,0x5f1dea09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		struct _Function_1_1{
			inline static Dynamic Block( int &inHeight,int &inWidth){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/ManagedStage.hx",68,0x5f1dea09)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)8,false);
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , inWidth,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , inHeight,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(68)
		Dynamic tmp = _Function_1_1::Block(inHeight,inWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		this->pumpEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ManagedStage_obj,onWindowSize,(void))

Void ManagedStage_obj::sendQuit( ){
{
		HX_STACK_FRAME("nme.display.ManagedStage","sendQuit",0xb5684132,"nme.display.ManagedStage.sendQuit","nme/display/ManagedStage.hx",72,0x5f1dea09)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/ManagedStage.hx",73,0x5f1dea09)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d") , (int)10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(73)
		Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		this->pumpEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ManagedStage_obj,sendQuit,(void))

HX_BEGIN_DEFAULT_FUNC(__default_setNextWake,ManagedStage_obj)
Void run(Float inDelay){
{
		HX_STACK_FRAME("nme.display.ManagedStage","setNextWake",0x701c375e,"nme.display.ManagedStage.setNextWake","nme/display/ManagedStage.hx",77,0x5f1dea09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDelay,"inDelay")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

int ManagedStage_obj::etUnknown;

int ManagedStage_obj::etKeyDown;

int ManagedStage_obj::etChar;

int ManagedStage_obj::etKeyUp;

int ManagedStage_obj::etMouseMove;

int ManagedStage_obj::etMouseDown;

int ManagedStage_obj::etMouseClick;

int ManagedStage_obj::etMouseUp;

int ManagedStage_obj::etResize;

int ManagedStage_obj::etPoll;

int ManagedStage_obj::etQuit;

int ManagedStage_obj::etFocus;

int ManagedStage_obj::etShouldRotate;

int ManagedStage_obj::etDestroyHandler;

int ManagedStage_obj::etRedraw;

int ManagedStage_obj::etTouchBegin;

int ManagedStage_obj::etTouchMove;

int ManagedStage_obj::etTouchEnd;

int ManagedStage_obj::etTouchTap;

int ManagedStage_obj::etChange;

int ManagedStage_obj::efLeftDown;

int ManagedStage_obj::efShiftDown;

int ManagedStage_obj::efCtrlDown;

int ManagedStage_obj::efAltDown;

int ManagedStage_obj::efCommandDown;

int ManagedStage_obj::efMiddleDown;

int ManagedStage_obj::efRightDown;

int ManagedStage_obj::efLocationRight;

int ManagedStage_obj::efPrimaryTouch;

Void ManagedStage_obj::initSdlAudio( ){
{
		HX_STACK_FRAME("nme.display.ManagedStage","initSdlAudio",0x95dc2cc6,"nme.display.ManagedStage.initSdlAudio","nme/display/ManagedStage.hx",82,0x5f1dea09)
		HX_STACK_LINE(82)
		::nme::display::ManagedStage_obj::nme_init_sdl_audio();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ManagedStage_obj,initSdlAudio,(void))

Dynamic ManagedStage_obj::nme_managed_stage_create;

Dynamic ManagedStage_obj::nme_managed_stage_pump_event;

Dynamic ManagedStage_obj::nme_init_sdl_audio;


ManagedStage_obj::ManagedStage_obj()
{
	setNextWake = new __default_setNextWake(this);
}

void ManagedStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ManagedStage);
	HX_MARK_MEMBER_NAME(setNextWake,"setNextWake");
	::nme::display::Stage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ManagedStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(setNextWake,"setNextWake");
	::nme::display::Stage_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ManagedStage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"sendQuit") ) { return sendQuit_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pumpEvent") ) { return pumpEvent_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { return setNextWake; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onWindowSize") ) { return onWindowSize_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ManagedStage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"initSdlAudio") ) { outValue = initSdlAudio_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_init_sdl_audio") ) { outValue = nme_init_sdl_audio; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { outValue = nme_managed_stage_create; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { outValue = nme_managed_stage_pump_event; return true;  }
	}
	return false;
}

Dynamic ManagedStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"setNextWake") ) { setNextWake=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ManagedStage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"nme_init_sdl_audio") ) { nme_init_sdl_audio=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_create") ) { nme_managed_stage_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_managed_stage_pump_event") ) { nme_managed_stage_pump_event=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ManagedStage_obj,setNextWake),HX_HCSTRING("setNextWake","\x79","\xcc","\x1f","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &ManagedStage_obj::etUnknown,HX_HCSTRING("etUnknown","\xdb","\x6e","\xe6","\xd2")},
	{hx::fsInt,(void *) &ManagedStage_obj::etKeyDown,HX_HCSTRING("etKeyDown","\xf2","\xb4","\xb2","\x8d")},
	{hx::fsInt,(void *) &ManagedStage_obj::etChar,HX_HCSTRING("etChar","\xe5","\x46","\x1f","\x59")},
	{hx::fsInt,(void *) &ManagedStage_obj::etKeyUp,HX_HCSTRING("etKeyUp","\xeb","\xde","\x89","\x3b")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseMove,HX_HCSTRING("etMouseMove","\x67","\x1d","\x07","\x90")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseDown,HX_HCSTRING("etMouseDown","\xb8","\x32","\x14","\x8a")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseClick,HX_HCSTRING("etMouseClick","\x32","\x4d","\x2b","\xb2")},
	{hx::fsInt,(void *) &ManagedStage_obj::etMouseUp,HX_HCSTRING("etMouseUp","\x31","\x3f","\xde","\xb1")},
	{hx::fsInt,(void *) &ManagedStage_obj::etResize,HX_HCSTRING("etResize","\xc3","\xa3","\xb0","\xa5")},
	{hx::fsInt,(void *) &ManagedStage_obj::etPoll,HX_HCSTRING("etPoll","\x4e","\x66","\xbc","\x61")},
	{hx::fsInt,(void *) &ManagedStage_obj::etQuit,HX_HCSTRING("etQuit","\xde","\x27","\x6a","\x62")},
	{hx::fsInt,(void *) &ManagedStage_obj::etFocus,HX_HCSTRING("etFocus","\xe9","\x84","\x14","\x61")},
	{hx::fsInt,(void *) &ManagedStage_obj::etShouldRotate,HX_HCSTRING("etShouldRotate","\xfd","\x19","\x05","\x3d")},
	{hx::fsInt,(void *) &ManagedStage_obj::etDestroyHandler,HX_HCSTRING("etDestroyHandler","\xbf","\xce","\x9b","\x74")},
	{hx::fsInt,(void *) &ManagedStage_obj::etRedraw,HX_HCSTRING("etRedraw","\x06","\x2f","\xcd","\x9b")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchBegin,HX_HCSTRING("etTouchBegin","\x39","\xab","\xe6","\xf5")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchMove,HX_HCSTRING("etTouchMove","\x01","\xf4","\x1e","\xa9")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchEnd,HX_HCSTRING("etTouchEnd","\xeb","\x60","\x80","\x4c")},
	{hx::fsInt,(void *) &ManagedStage_obj::etTouchTap,HX_HCSTRING("etTouchTap","\x73","\xb7","\x8b","\x4c")},
	{hx::fsInt,(void *) &ManagedStage_obj::etChange,HX_HCSTRING("etChange","\x3f","\xdb","\xa7","\x54")},
	{hx::fsInt,(void *) &ManagedStage_obj::efLeftDown,HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c")},
	{hx::fsInt,(void *) &ManagedStage_obj::efShiftDown,HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4")},
	{hx::fsInt,(void *) &ManagedStage_obj::efCtrlDown,HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa")},
	{hx::fsInt,(void *) &ManagedStage_obj::efAltDown,HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8")},
	{hx::fsInt,(void *) &ManagedStage_obj::efCommandDown,HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b")},
	{hx::fsInt,(void *) &ManagedStage_obj::efMiddleDown,HX_HCSTRING("efMiddleDown","\x18","\xc6","\xf0","\xbd")},
	{hx::fsInt,(void *) &ManagedStage_obj::efRightDown,HX_HCSTRING("efRightDown","\xbd","\x41","\x73","\xc4")},
	{hx::fsInt,(void *) &ManagedStage_obj::efLocationRight,HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc")},
	{hx::fsInt,(void *) &ManagedStage_obj::efPrimaryTouch,HX_HCSTRING("efPrimaryTouch","\x9e","\x1a","\x82","\x70")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ManagedStage_obj::nme_managed_stage_create,HX_HCSTRING("nme_managed_stage_create","\x96","\xdb","\xbe","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ManagedStage_obj::nme_managed_stage_pump_event,HX_HCSTRING("nme_managed_stage_pump_event","\x9d","\xd3","\xa2","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ManagedStage_obj::nme_init_sdl_audio,HX_HCSTRING("nme_init_sdl_audio","\xfc","\x53","\x7a","\xda")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pumpEvent","\x52","\x4a","\x3a","\xf3"),
	HX_HCSTRING("onWindowSize","\xd0","\xba","\x6d","\xaf"),
	HX_HCSTRING("sendQuit","\x37","\x3d","\xd8","\xde"),
	HX_HCSTRING("setNextWake","\x79","\xcc","\x1f","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etUnknown,"etUnknown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etKeyDown,"etKeyDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etChar,"etChar");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etKeyUp,"etKeyUp");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseMove,"etMouseMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseDown,"etMouseDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseClick,"etMouseClick");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etMouseUp,"etMouseUp");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etResize,"etResize");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etPoll,"etPoll");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etQuit,"etQuit");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etFocus,"etFocus");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etShouldRotate,"etShouldRotate");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etDestroyHandler,"etDestroyHandler");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etRedraw,"etRedraw");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchBegin,"etTouchBegin");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchMove,"etTouchMove");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchEnd,"etTouchEnd");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etTouchTap,"etTouchTap");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::etChange,"etChange");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efMiddleDown,"efMiddleDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efRightDown,"efRightDown");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::efPrimaryTouch,"efPrimaryTouch");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
	HX_MARK_MEMBER_NAME(ManagedStage_obj::nme_init_sdl_audio,"nme_init_sdl_audio");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etUnknown,"etUnknown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etKeyDown,"etKeyDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etChar,"etChar");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etKeyUp,"etKeyUp");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseMove,"etMouseMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseDown,"etMouseDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseClick,"etMouseClick");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etMouseUp,"etMouseUp");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etResize,"etResize");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etPoll,"etPoll");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etQuit,"etQuit");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etFocus,"etFocus");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etShouldRotate,"etShouldRotate");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etDestroyHandler,"etDestroyHandler");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etRedraw,"etRedraw");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchBegin,"etTouchBegin");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchMove,"etTouchMove");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchEnd,"etTouchEnd");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etTouchTap,"etTouchTap");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::etChange,"etChange");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efCommandDown,"efCommandDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efMiddleDown,"efMiddleDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efRightDown,"efRightDown");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::efPrimaryTouch,"efPrimaryTouch");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_create,"nme_managed_stage_create");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_managed_stage_pump_event,"nme_managed_stage_pump_event");
	HX_VISIT_MEMBER_NAME(ManagedStage_obj::nme_init_sdl_audio,"nme_init_sdl_audio");
};

#endif

hx::Class ManagedStage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("etUnknown","\xdb","\x6e","\xe6","\xd2"),
	HX_HCSTRING("etKeyDown","\xf2","\xb4","\xb2","\x8d"),
	HX_HCSTRING("etChar","\xe5","\x46","\x1f","\x59"),
	HX_HCSTRING("etKeyUp","\xeb","\xde","\x89","\x3b"),
	HX_HCSTRING("etMouseMove","\x67","\x1d","\x07","\x90"),
	HX_HCSTRING("etMouseDown","\xb8","\x32","\x14","\x8a"),
	HX_HCSTRING("etMouseClick","\x32","\x4d","\x2b","\xb2"),
	HX_HCSTRING("etMouseUp","\x31","\x3f","\xde","\xb1"),
	HX_HCSTRING("etResize","\xc3","\xa3","\xb0","\xa5"),
	HX_HCSTRING("etPoll","\x4e","\x66","\xbc","\x61"),
	HX_HCSTRING("etQuit","\xde","\x27","\x6a","\x62"),
	HX_HCSTRING("etFocus","\xe9","\x84","\x14","\x61"),
	HX_HCSTRING("etShouldRotate","\xfd","\x19","\x05","\x3d"),
	HX_HCSTRING("etDestroyHandler","\xbf","\xce","\x9b","\x74"),
	HX_HCSTRING("etRedraw","\x06","\x2f","\xcd","\x9b"),
	HX_HCSTRING("etTouchBegin","\x39","\xab","\xe6","\xf5"),
	HX_HCSTRING("etTouchMove","\x01","\xf4","\x1e","\xa9"),
	HX_HCSTRING("etTouchEnd","\xeb","\x60","\x80","\x4c"),
	HX_HCSTRING("etTouchTap","\x73","\xb7","\x8b","\x4c"),
	HX_HCSTRING("etChange","\x3f","\xdb","\xa7","\x54"),
	HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c"),
	HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4"),
	HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa"),
	HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8"),
	HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b"),
	HX_HCSTRING("efMiddleDown","\x18","\xc6","\xf0","\xbd"),
	HX_HCSTRING("efRightDown","\xbd","\x41","\x73","\xc4"),
	HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc"),
	HX_HCSTRING("efPrimaryTouch","\x9e","\x1a","\x82","\x70"),
	HX_HCSTRING("initSdlAudio","\x4b","\x0f","\xfb","\x7d"),
	HX_HCSTRING("nme_managed_stage_create","\x96","\xdb","\xbe","\xff"),
	HX_HCSTRING("nme_managed_stage_pump_event","\x9d","\xd3","\xa2","\x34"),
	HX_HCSTRING("nme_init_sdl_audio","\xfc","\x53","\x7a","\xda"),
	::String(null()) };

void ManagedStage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.ManagedStage","\xd3","\xc7","\x60","\xc5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManagedStage_obj::__GetStatic;
	__mClass->mSetStaticField = &ManagedStage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ManagedStage_obj >;
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

void ManagedStage_obj::__boot()
{
	etUnknown= (int)0;
	etKeyDown= (int)1;
	etChar= (int)2;
	etKeyUp= (int)3;
	etMouseMove= (int)4;
	etMouseDown= (int)5;
	etMouseClick= (int)6;
	etMouseUp= (int)7;
	etResize= (int)8;
	etPoll= (int)9;
	etQuit= (int)10;
	etFocus= (int)11;
	etShouldRotate= (int)12;
	etDestroyHandler= (int)13;
	etRedraw= (int)14;
	etTouchBegin= (int)15;
	etTouchMove= (int)16;
	etTouchEnd= (int)17;
	etTouchTap= (int)18;
	etChange= (int)19;
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
	efMiddleDown= (int)32;
	efRightDown= (int)64;
	efLocationRight= (int)16384;
	efPrimaryTouch= (int)32768;
	nme_managed_stage_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_managed_stage_create","\x96","\xdb","\xbe","\xff"),(int)3);
	nme_managed_stage_pump_event= ::nme::Loader_obj::load(HX_HCSTRING("nme_managed_stage_pump_event","\x9d","\xd3","\xa2","\x34"),(int)2);
	nme_init_sdl_audio= ::nme::Loader_obj::load(HX_HCSTRING("nme_init_sdl_audio","\xfc","\x53","\x7a","\xda"),(int)0);
}

} // end namespace nme
} // end namespace display
