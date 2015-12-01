#include <hxcpp.h>

#include "nme/Event.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_vm_Gc
#include <cpp/vm/Gc.h>
#endif
#ifndef INCLUDED_cpp_vm_Lock
#include <cpp/vm/Lock.h>
#endif
#ifndef INCLUDED_cpp_vm_Thread
#include <cpp/vm/Thread.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme__Vector_Vector_Impl_
#include <nme/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
#endif
#ifndef INCLUDED_nme_app_FrameTimer
#include <nme/app/FrameTimer.h>
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
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_display_StageAlign
#include <nme/display/StageAlign.h>
#endif
#ifndef INCLUDED_nme_display_StageDisplayState
#include <nme/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_nme_display_StageQuality
#include <nme/display/StageQuality.h>
#endif
#ifndef INCLUDED_nme_display_StageScaleMode
#include <nme/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_nme_display_TouchInfo
#include <nme/display/TouchInfo.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_FocusEvent
#include <nme/events/FocusEvent.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_JoystickEvent
#include <nme/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_nme_events_KeyboardEvent
#include <nme/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif
#ifndef INCLUDED_nme_events_StageVideoAvailabilityEvent
#include <nme/events/StageVideoAvailabilityEvent.h>
#endif
#ifndef INCLUDED_nme_events_SystemEvent
#include <nme/events/SystemEvent.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
#endif
#ifndef INCLUDED_nme_events_TouchEvent
#include <nme/events/TouchEvent.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_media_SoundChannel
#include <nme/media/SoundChannel.h>
#endif
#ifndef INCLUDED_nme_media_StageVideo
#include <nme/media/StageVideo.h>
#endif
#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
#ifndef INCLUDED_nme_text_TextField
#include <nme/text/TextField.h>
#endif
#ifndef INCLUDED_nme_ui_Keyboard
#include <nme/ui/Keyboard.h>
#endif
namespace nme{
namespace display{

Void Stage_obj::__construct(::nme::app::Window inWindow)
{
HX_STACK_FRAME("nme.display.Stage","new",0x82730a3c,"nme.display.Stage.new","nme/display/Stage.hx",139,0x3f854bb6)
HX_STACK_THIS(this)
HX_STACK_ARG(inWindow,"inWindow")
{
	HX_STACK_LINE(140)
	::String tmp = ::nme::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::nme::events::Event tmp1 = ::nme::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	this->nmeEnterFrameEvent = tmp1;
	HX_STACK_LINE(141)
	::String tmp2 = ::nme::events::Event_obj::RENDER;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::nme::events::Event tmp3 = ::nme::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	this->nmeRenderEvent = tmp3;
	HX_STACK_LINE(143)
	this->window = inWindow;
	HX_STACK_LINE(144)
	this->invalid = false;
	HX_STACK_LINE(145)
	::nme::app::Window tmp4 = this->window;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	Dynamic tmp5 = tmp4->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	super::__construct(tmp5,HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"));
	HX_STACK_LINE(147)
	this->nmeMouseOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(148)
	this->nmeFocusOverObjects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(149)
	this->pauseWhenDeactivated = true;
	HX_STACK_LINE(151)
	::nme::app::Window tmp6 = this->window;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(151)
	::nme::app::IAppEventHandler tmp7 = tmp6->appEventHandler;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(151)
	bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(151)
	if ((tmp8)){
		HX_STACK_LINE(153)
		::nme::app::Window tmp9 = this->window;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(153)
		tmp9->appEventHandler = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(154)
		::nme::app::Application_obj::addPollClient(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(155)
		::nme::app::Window tmp10 = this->window;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(155)
		Float tmp11 = ::nme::app::Application_obj::initFrameRate;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(155)
		::nme::app::FrameTimer tmp12 = ::nme::app::FrameTimer_obj::__new(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(155)
		this->nmeFrameTimer = tmp12;
	}
	HX_STACK_LINE(158)
	this->nmeLastRender = (int)0;
	HX_STACK_LINE(159)
	this->nmeLastDown = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(160)
	this->nmeLastClickTime = ((Float)0.0);
	HX_STACK_LINE(161)
	::haxe::ds::IntMap tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(161)
	{
		HX_STACK_LINE(161)
		::haxe::ds::IntMap tmp10 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(161)
		::haxe::ds::IntMap tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(161)
		tmp9 = tmp11;
	}
	HX_STACK_LINE(161)
	this->nmeTouchInfo = tmp9;
	HX_STACK_LINE(162)
	::haxe::ds::IntMap tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(162)
	{
		HX_STACK_LINE(162)
		::haxe::ds::IntMap tmp11 = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(162)
		::haxe::ds::IntMap tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(162)
		tmp10 = tmp12;
	}
	HX_STACK_LINE(162)
	this->nmeJoyAxisData = tmp10;
	HX_STACK_LINE(168)
	Array< ::Dynamic > tmp11 = ::nme::_Vector::Vector_Impl__obj::_new((int)1,null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(168)
	this->stageVideos = tmp11;
	HX_STACK_LINE(169)
	Array< ::Dynamic > tmp12 = this->stageVideos;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(169)
	::nme::media::StageVideo tmp13 = ::nme::media::StageVideo_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(169)
	tmp12[(int)0] = tmp13;
	HX_STACK_LINE(172)
	this->nmePreemptiveGcFreq = (int)0;
	HX_STACK_LINE(173)
	this->nmePreemptiveGcSince = (int)0;
	HX_STACK_LINE(174)
	this->nmeLastCurrentMemory = (int)0;
	HX_STACK_LINE(175)
	this->nmeLastPreempt = false;
	HX_STACK_LINE(176)
	this->nmeFrameMemIndex = (int)0;
}
;
	return null();
}

//Stage_obj::~Stage_obj() { }

Dynamic Stage_obj::__CreateEmpty() { return  new Stage_obj; }
hx::ObjectPtr< Stage_obj > Stage_obj::__new(::nme::app::Window inWindow)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inWindow);
	return _result_;}

Dynamic Stage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage_obj > _result_ = new Stage_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *Stage_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::app::IAppEventHandler_obj)) return operator ::nme::app::IAppEventHandler_obj *();
	if (inType==typeid( ::nme::app::IPollClient_obj)) return operator ::nme::app::IPollClient_obj *();
	return super::__ToInterface(inType);
}

Stage_obj::operator ::nme::app::IAppEventHandler_obj *()
	{ return new ::nme::app::IAppEventHandler_delegate_< Stage_obj >(this); }
Stage_obj::operator ::nme::app::IPollClient_obj *()
	{ return new ::nme::app::IPollClient_delegate_< Stage_obj >(this); }
Void Stage_obj::invalidate( ){
{
		HX_STACK_FRAME("nme.display.Stage","invalidate",0x79ae131f,"nme.display.Stage.invalidate","nme/display/Stage.hx",193,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->invalid = true;
		HX_STACK_LINE(195)
		::nme::app::FrameTimer tmp = this->nmeFrameTimer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(195)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(195)
		if ((tmp1)){
			HX_STACK_LINE(196)
			::nme::app::FrameTimer tmp2 = this->nmeFrameTimer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(196)
			tmp2->invalidate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,invalidate,(void))

bool Stage_obj::isDisplayListDirty( ){
	HX_STACK_FRAME("nme.display.Stage","isDisplayListDirty",0x0002d5e0,"nme.display.Stage.isDisplayListDirty","nme/display/Stage.hx",200,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(201)
	bool tmp1 = ::nme::display::Stage_obj::nme_stage_check_cache(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(201)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(202)
	bool tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(202)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,isDisplayListDirty,return )

Dynamic Stage_obj::get_onQuit( ){
	HX_STACK_FRAME("nme.display.Stage","get_onQuit",0xd09fb1fb,"nme.display.Stage.get_onQuit","nme/display/Stage.hx",205,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(205)
	Dynamic tmp = ::nme::app::Application_obj::onQuit_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_onQuit,return )

Dynamic Stage_obj::set_onQuit( Dynamic val){
	HX_STACK_FRAME("nme.display.Stage","set_onQuit",0xd41d506f,"nme.display.Stage.set_onQuit","nme/display/Stage.hx",206,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(val,"val")
	HX_STACK_LINE(206)
	::nme::app::Application_obj::onQuit = val;
	HX_STACK_LINE(206)
	Dynamic tmp = val;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(206)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_onQuit,return )

Void Stage_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("nme.display.Stage","addEventListener",0x2c68d871,"nme.display.Stage.addEventListener","nme/display/Stage.hx",209,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(210)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		bool tmp2 = useCapture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(210)
		int tmp3 = priority;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(210)
		bool tmp4 = useWeakReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(210)
		this->super::addEventListener(tmp,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(211)
		bool tmp5 = (type == HX_HCSTRING("stageVideoAvailability","\x58","\x09","\x7a","\x7e"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(211)
		if ((tmp5)){
			HX_STACK_LINE(212)
			::nme::events::StageVideoAvailabilityEvent tmp6 = ::nme::events::StageVideoAvailabilityEvent_obj::__new(HX_HCSTRING("stageVideoAvailability","\x58","\x09","\x7a","\x7e"),false,false,HX_HCSTRING("available","\xc9","\x59","\x83","\x77"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(212)
			this->dispatchEvent(tmp6);
		}
	}
return null();
}


Void Stage_obj::nmeCheckFocusInOuts( ::cpp::Pointer< nme::Event > inEvent,Array< ::Dynamic > inStack){
{
		HX_STACK_FRAME("nme.display.Stage","nmeCheckFocusInOuts",0x15cb75fc,"nme.display.Stage.nmeCheckFocusInOuts","nme/display/Stage.hx",216,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(inStack,"inStack")
		HX_STACK_LINE(218)
		int new_n = inStack->length;		HX_STACK_VAR(new_n,"new_n");
		HX_STACK_LINE(219)
		bool tmp = (new_n > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(219)
		::nme::display::InteractiveObject tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(219)
		if ((tmp)){
			HX_STACK_LINE(219)
			int tmp2 = (new_n - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(219)
			tmp1 = inStack->__get(tmp2).StaticCast< ::nme::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(219)
			tmp1 = null();
		}
		HX_STACK_LINE(219)
		::nme::display::InteractiveObject new_obj = tmp1;		HX_STACK_VAR(new_obj,"new_obj");
		HX_STACK_LINE(220)
		int tmp2 = this->nmeFocusOverObjects->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		int old_n = tmp2;		HX_STACK_VAR(old_n,"old_n");
		HX_STACK_LINE(221)
		bool tmp3 = (old_n > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(221)
		::nme::display::InteractiveObject tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(221)
		if ((tmp3)){
			HX_STACK_LINE(221)
			int tmp5 = (old_n - (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(221)
			tmp4 = this->nmeFocusOverObjects->__get(tmp5).StaticCast< ::nme::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(221)
			tmp4 = null();
		}
		HX_STACK_LINE(221)
		::nme::display::InteractiveObject old_obj = tmp4;		HX_STACK_VAR(old_obj,"old_obj");
		HX_STACK_LINE(223)
		bool tmp5 = (new_obj != old_obj);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		if ((tmp5)){
			HX_STACK_LINE(225)
			bool tmp6 = (old_obj != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(225)
			if ((tmp6)){
				HX_STACK_LINE(227)
				::String tmp7 = ::nme::events::FocusEvent_obj::FOCUS_OUT;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(227)
				::nme::display::InteractiveObject tmp8 = new_obj;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(227)
				int tmp9 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(227)
				bool tmp10 = (tmp9 > (int)0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(227)
				int tmp11 = inEvent->get_ref().code;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(227)
				::nme::events::FocusEvent tmp12 = ::nme::events::FocusEvent_obj::__new(tmp7,true,false,tmp8,tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(227)
				::nme::events::FocusEvent focusOut = tmp12;		HX_STACK_VAR(focusOut,"focusOut");
				HX_STACK_LINE(228)
				::nme::display::InteractiveObject tmp13 = old_obj;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(228)
				focusOut->set_target(tmp13);
				HX_STACK_LINE(229)
				::nme::events::FocusEvent tmp14 = focusOut;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(229)
				old_obj->nmeFireEvent(tmp14);
			}
			HX_STACK_LINE(232)
			bool tmp7 = (new_obj != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(232)
			if ((tmp7)){
				HX_STACK_LINE(234)
				::String tmp8 = ::nme::events::FocusEvent_obj::FOCUS_IN;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(234)
				::nme::display::InteractiveObject tmp9 = old_obj;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(234)
				int tmp10 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(234)
				bool tmp11 = (tmp10 > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(234)
				int tmp12 = inEvent->get_ref().code;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(234)
				::nme::events::FocusEvent tmp13 = ::nme::events::FocusEvent_obj::__new(tmp8,true,false,tmp9,tmp11,tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(234)
				::nme::events::FocusEvent focusIn = tmp13;		HX_STACK_VAR(focusIn,"focusIn");
				HX_STACK_LINE(236)
				::nme::display::InteractiveObject tmp14 = new_obj;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(236)
				focusIn->set_target(tmp14);
				HX_STACK_LINE(237)
				::nme::events::FocusEvent tmp15 = focusIn;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(237)
				new_obj->nmeFireEvent(tmp15);
			}
			HX_STACK_LINE(240)
			this->nmeFocusOverObjects = inStack;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,nmeCheckFocusInOuts,(void))

bool Stage_obj::nmeCheckInOuts( ::nme::events::MouseEvent inEvent,Array< ::Dynamic > inStack,::nme::display::TouchInfo touchInfo){
	HX_STACK_FRAME("nme.display.Stage","nmeCheckInOuts",0xba834390,"nme.display.Stage.nmeCheckInOuts","nme/display/Stage.hx",245,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inEvent,"inEvent")
	HX_STACK_ARG(inStack,"inStack")
	HX_STACK_ARG(touchInfo,"touchInfo")
	HX_STACK_LINE(246)
	bool tmp = (touchInfo == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(246)
	Array< ::Dynamic > prev;		HX_STACK_VAR(prev,"prev");
	HX_STACK_LINE(246)
	if ((tmp)){
		HX_STACK_LINE(246)
		prev = this->nmeMouseOverObjects;
	}
	else{
		HX_STACK_LINE(246)
		prev = touchInfo->touchOverObjects;
	}
	HX_STACK_LINE(247)
	bool tmp1 = (touchInfo == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(247)
	Array< ::String > events;		HX_STACK_VAR(events,"events");
	HX_STACK_LINE(247)
	if ((tmp1)){
		HX_STACK_LINE(247)
		events = ::nme::display::Stage_obj::nmeMouseChanges;
	}
	else{
		HX_STACK_LINE(247)
		events = ::nme::display::Stage_obj::nmeTouchChanges;
	}
	HX_STACK_LINE(249)
	int new_n = inStack->length;		HX_STACK_VAR(new_n,"new_n");
	HX_STACK_LINE(250)
	bool tmp2 = (new_n > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(250)
	::nme::display::InteractiveObject tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(250)
	if ((tmp2)){
		HX_STACK_LINE(250)
		int tmp4 = (new_n - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		tmp3 = inStack->__get(tmp4).StaticCast< ::nme::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(250)
		tmp3 = null();
	}
	HX_STACK_LINE(250)
	::nme::display::InteractiveObject new_obj = tmp3;		HX_STACK_VAR(new_obj,"new_obj");
	HX_STACK_LINE(251)
	int old_n = prev->length;		HX_STACK_VAR(old_n,"old_n");
	HX_STACK_LINE(252)
	bool tmp4 = (old_n > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	::nme::display::InteractiveObject tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(252)
	if ((tmp4)){
		HX_STACK_LINE(252)
		int tmp6 = (old_n - (int)1);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		tmp5 = prev->__get(tmp6).StaticCast< ::nme::display::InteractiveObject >();
	}
	else{
		HX_STACK_LINE(252)
		tmp5 = null();
	}
	HX_STACK_LINE(252)
	::nme::display::InteractiveObject old_obj = tmp5;		HX_STACK_VAR(old_obj,"old_obj");
	HX_STACK_LINE(254)
	bool tmp6 = (new_obj != old_obj);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(254)
	if ((tmp6)){
		HX_STACK_LINE(257)
		bool tmp7 = (old_obj != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(257)
		if ((tmp7)){
			HX_STACK_LINE(258)
			::String tmp8 = events->__get((int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(258)
			::nme::display::InteractiveObject tmp9 = new_obj;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			::nme::display::InteractiveObject tmp10 = old_obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(258)
			::nme::events::MouseEvent tmp11 = inEvent->nmeCreateSimilar(tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(258)
			old_obj->nmeFireEvent(tmp11);
		}
		HX_STACK_LINE(260)
		bool tmp8 = (new_obj != null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(260)
		if ((tmp8)){
			HX_STACK_LINE(261)
			::String tmp9 = events->__get((int)1);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(261)
			::nme::display::InteractiveObject tmp10 = old_obj;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(261)
			::nme::events::MouseEvent tmp11 = inEvent->nmeCreateSimilar(tmp9,tmp10,null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(261)
			new_obj->nmeFireEvent(tmp11);
		}
		HX_STACK_LINE(264)
		int common = (int)0;		HX_STACK_VAR(common,"common");
		HX_STACK_LINE(265)
		while((true)){
			HX_STACK_LINE(265)
			bool tmp9 = (common < new_n);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(265)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(265)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(265)
			if ((tmp10)){
				HX_STACK_LINE(265)
				tmp11 = (common < old_n);
			}
			else{
				HX_STACK_LINE(265)
				tmp11 = false;
			}
			HX_STACK_LINE(265)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(265)
			if ((tmp11)){
				HX_STACK_LINE(265)
				::nme::display::InteractiveObject tmp13 = inStack->__get(common).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(265)
				::nme::display::InteractiveObject tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(265)
				::nme::display::InteractiveObject tmp15 = prev->__get(common).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(265)
				::nme::display::InteractiveObject tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(265)
				tmp12 = (tmp14 == tmp16);
			}
			else{
				HX_STACK_LINE(265)
				tmp12 = false;
			}
			HX_STACK_LINE(265)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(265)
			if ((tmp13)){
				HX_STACK_LINE(265)
				break;
			}
			HX_STACK_LINE(266)
			(common)++;
		}
		HX_STACK_LINE(268)
		::String tmp9 = events->__get((int)2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(268)
		::nme::display::InteractiveObject tmp10 = new_obj;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(268)
		::nme::display::InteractiveObject tmp11 = old_obj;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(268)
		::nme::events::MouseEvent tmp12 = inEvent->nmeCreateSimilar(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(268)
		::nme::events::MouseEvent rollOut = tmp12;		HX_STACK_VAR(rollOut,"rollOut");
		HX_STACK_LINE(269)
		int tmp13 = (old_n - (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(269)
		int i = tmp13;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(270)
		while((true)){
			HX_STACK_LINE(270)
			bool tmp14 = (i >= common);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(270)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(270)
			if ((tmp15)){
				HX_STACK_LINE(270)
				break;
			}
			HX_STACK_LINE(272)
			::nme::display::InteractiveObject tmp16 = prev->__get(i).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(272)
			::nme::events::MouseEvent tmp17 = rollOut;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(272)
			tmp16->nmeDispatchEvent(tmp17);
			HX_STACK_LINE(273)
			(i)--;
		}
		HX_STACK_LINE(276)
		::String tmp14 = events->__get((int)3);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(276)
		::nme::display::InteractiveObject tmp15 = old_obj;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(276)
		::nme::events::MouseEvent tmp16 = inEvent->nmeCreateSimilar(tmp14,tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(276)
		::nme::events::MouseEvent rollOver = tmp16;		HX_STACK_VAR(rollOver,"rollOver");
		HX_STACK_LINE(277)
		int tmp17 = (new_n - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(277)
		int i1 = tmp17;		HX_STACK_VAR(i1,"i1");
		HX_STACK_LINE(278)
		while((true)){
			HX_STACK_LINE(278)
			bool tmp18 = (i1 >= common);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(278)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(278)
			if ((tmp19)){
				HX_STACK_LINE(278)
				break;
			}
			HX_STACK_LINE(280)
			::nme::display::InteractiveObject tmp20 = inStack->__get(i1).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(280)
			::nme::events::MouseEvent tmp21 = rollOver;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(280)
			tmp20->nmeDispatchEvent(tmp21);
			HX_STACK_LINE(281)
			(i1)--;
		}
		HX_STACK_LINE(284)
		bool tmp18 = (touchInfo == null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(284)
		if ((tmp18)){
			HX_STACK_LINE(285)
			this->nmeMouseOverObjects = inStack;
		}
		else{
			HX_STACK_LINE(287)
			touchInfo->touchOverObjects = inStack;
		}
		HX_STACK_LINE(289)
		return false;
	}
	HX_STACK_LINE(292)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeCheckInOuts,return )

Void Stage_obj::onText( ::cpp::Pointer< nme::Event > inEvent,::String type){
{
		HX_STACK_FRAME("nme.display.Stage","onText",0x89592d10,"nme.display.Stage.onText","nme/display/Stage.hx",298,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(299)
		int tmp = inEvent->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(299)
		::nme::display::DisplayObject tmp1 = this->nmeFindByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		::nme::display::DisplayObject obj = tmp1;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(301)
		bool tmp2 = (obj != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(301)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(301)
		if ((tmp2)){
			HX_STACK_LINE(301)
			int tmp4 = inEvent->get_ref().id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(301)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(301)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(301)
			::nme::display::DisplayObject tmp7 = this->nmeFindByID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(301)
			::nme::display::DisplayObject tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(301)
			::nme::display::DisplayObject tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(301)
			tmp3 = ::Std_obj::is(tmp9,hx::ClassOf< ::nme::text::TextField >());
		}
		else{
			HX_STACK_LINE(301)
			tmp3 = false;
		}
		HX_STACK_LINE(301)
		if ((tmp3)){
			HX_STACK_LINE(302)
			::haxe::Utf8 tmp4 = ::haxe::Utf8_obj::__new(null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(302)
			::haxe::Utf8 u = tmp4;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(303)
			int tmp5 = inEvent->get_ref().code;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(303)
			u->addChar(tmp5);
			HX_STACK_LINE(304)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(304)
			::String tmp7 = u->toString();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(304)
			::nme::events::TextEvent tmp8 = ::nme::events::TextEvent_obj::__new(tmp6,true,true,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(304)
			::nme::events::TextEvent evt = tmp8;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(305)
			::nme::events::TextEvent tmp9 = evt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(305)
			obj->nmeFireEvent(tmp9);
			HX_STACK_LINE(307)
			bool tmp10 = evt->nmeGetIsCancelled();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(307)
			if ((tmp10)){
				HX_STACK_LINE(308)
				inEvent->get_ref().result = (int)1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onText,(void))

Void Stage_obj::onKey( ::cpp::Pointer< nme::Event > inEvent,::String type){
{
		HX_STACK_FRAME("nme.display.Stage","onKey",0xe62f869c,"nme.display.Stage.onKey","nme/display/Stage.hx",313,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(314)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(315)
		int tmp = inEvent->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		::nme::display::DisplayObject tmp1 = this->nmeFindByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		::nme::display::DisplayObject obj = tmp1;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(317)
		bool tmp2 = (obj != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		if ((tmp2)){
			HX_STACK_LINE(318)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(320)
		bool tmp3 = (stack->length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		if ((tmp3)){
			HX_STACK_LINE(322)
			int tmp4 = inEvent->get_ref().value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(322)
			int value = tmp4;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(324)
			bool tmp5 = (value >= (int)96);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(324)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(324)
			if ((tmp5)){
				HX_STACK_LINE(324)
				tmp6 = (value <= (int)122);
			}
			else{
				HX_STACK_LINE(324)
				tmp6 = false;
			}
			HX_STACK_LINE(324)
			if ((tmp6)){
				HX_STACK_LINE(324)
				hx::SubEq(value,(int)32);
			}
			HX_STACK_LINE(326)
			::nme::display::InteractiveObject tmp7 = stack->__get((int)0).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(326)
			::nme::display::InteractiveObject obj1 = tmp7;		HX_STACK_VAR(obj1,"obj1");
			HX_STACK_LINE(327)
			int tmp8 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(327)
			int flags = tmp8;		HX_STACK_VAR(flags,"flags");
			HX_STACK_LINE(328)
			::String tmp9 = type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(328)
			int tmp10 = inEvent->get_ref().code;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(328)
			int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(329)
			int tmp12 = flags;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(329)
			int tmp13 = ::nme::display::Stage_obj::efLocationRight;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(329)
			int tmp14 = (int(tmp12) & int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(329)
			bool tmp15 = (tmp14 == (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(329)
			int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(329)
			if ((tmp15)){
				HX_STACK_LINE(329)
				tmp16 = (int)1;
			}
			else{
				HX_STACK_LINE(329)
				tmp16 = (int)0;
			}
			HX_STACK_LINE(330)
			int tmp17 = flags;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(330)
			int tmp18 = ::nme::display::Stage_obj::efCtrlDown;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(330)
			int tmp19 = (int(tmp17) & int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(330)
			bool tmp20 = (tmp19 != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(331)
			int tmp21 = flags;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(331)
			int tmp22 = ::nme::display::Stage_obj::efAltDown;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(331)
			int tmp23 = (int(tmp21) & int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(331)
			bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(332)
			int tmp25 = flags;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(332)
			int tmp26 = ::nme::display::Stage_obj::efShiftDown;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(332)
			int tmp27 = (int(tmp25) & int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(332)
			bool tmp28 = (tmp27 != (int)0);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(328)
			::nme::events::KeyboardEvent tmp29 = ::nme::events::KeyboardEvent_obj::__new(tmp9,true,true,tmp10,tmp11,tmp16,tmp20,tmp24,tmp28,null(),null());		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(328)
			::nme::events::KeyboardEvent evt = tmp29;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(333)
			::nme::events::KeyboardEvent tmp30 = evt;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(333)
			obj1->nmeFireEvent(tmp30);
			HX_STACK_LINE(335)
			bool tmp31 = evt->nmeGetIsCancelled();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(335)
			if ((tmp31)){
				HX_STACK_LINE(336)
				inEvent->get_ref().result = (int)1;
			}
			HX_STACK_LINE(339)
			int tmp32 = flags;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(339)
			int tmp33 = ::nme::display::Stage_obj::efAltDown;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(339)
			int tmp34 = (int(tmp32) & int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(339)
			bool tmp35 = (tmp34 > (int)0);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(339)
			bool tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(339)
			bool tmp37;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(339)
			if ((tmp36)){
				HX_STACK_LINE(339)
				int tmp38 = inEvent->get_ref().result;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(339)
				int tmp39 = tmp38;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(339)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(339)
				int tmp41 = (int)-1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(339)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(339)
				int tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(339)
				tmp37 = (tmp40 != tmp43);
			}
			else{
				HX_STACK_LINE(339)
				tmp37 = false;
			}
			HX_STACK_LINE(339)
			bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(339)
			if ((tmp37)){
				HX_STACK_LINE(339)
				int tmp39 = inEvent->get_ref().code;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(339)
				int tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(339)
				int tmp41 = ::nme::ui::Keyboard_obj::ENTER;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(339)
				int tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(339)
				tmp38 = (tmp40 == tmp42);
			}
			else{
				HX_STACK_LINE(339)
				tmp38 = false;
			}
			HX_STACK_LINE(339)
			if ((tmp38)){
				HX_STACK_LINE(341)
				::nme::display::StageDisplayState tmp39 = this->get_displayState();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(341)
				bool tmp40 = (tmp39 == ::nme::display::StageDisplayState_obj::NORMAL);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(341)
				if ((tmp40)){
					HX_STACK_LINE(342)
					this->set_displayState(::nme::display::StageDisplayState_obj::FULL_SCREEN_INTERACTIVE);
				}
				else{
					HX_STACK_LINE(344)
					this->set_displayState(::nme::display::StageDisplayState_obj::NORMAL);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onKey,(void))

Void Stage_obj::onMouse( ::cpp::Pointer< nme::Event > inEvent,::String inType,bool inFromMouse){
{
		HX_STACK_FRAME("nme.display.Stage","onMouse",0xa37a0c62,"nme.display.Stage.onMouse","nme/display/Stage.hx",351,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(inType,"inType")
		HX_STACK_ARG(inFromMouse,"inFromMouse")
		HX_STACK_LINE(352)
		::String type = inType;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(353)
		int tmp = inEvent->get_ref().value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		int button = tmp;		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(355)
		bool tmp1 = inFromMouse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(355)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(355)
		if ((tmp2)){
			HX_STACK_LINE(356)
			button = (int)0;
		}
		HX_STACK_LINE(358)
		int wheel = (int)0;		HX_STACK_VAR(wheel,"wheel");
		HX_STACK_LINE(360)
		::String tmp3 = inType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(360)
		::String tmp4 = ::nme::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(360)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(360)
		if ((tmp5)){
			HX_STACK_LINE(362)
			bool tmp6 = (button > (int)2);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(362)
			if ((tmp6)){
				HX_STACK_LINE(363)
				return null();
			}
			HX_STACK_LINE(364)
			::String tmp7 = ::nme::display::Stage_obj::sDownEvents->__get(button);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(364)
			type = tmp7;
		}
		else{
			HX_STACK_LINE(367)
			::String tmp6 = inType;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(367)
			::String tmp7 = ::nme::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(367)
			bool tmp8 = (tmp6 == tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(367)
			if ((tmp8)){
				HX_STACK_LINE(369)
				bool tmp9 = (button > (int)2);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(369)
				if ((tmp9)){
					HX_STACK_LINE(371)
					::String tmp10 = ::nme::events::MouseEvent_obj::MOUSE_WHEEL;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(371)
					type = tmp10;
					HX_STACK_LINE(372)
					bool tmp11 = (button == (int)3);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(372)
					int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(372)
					if ((tmp11)){
						HX_STACK_LINE(372)
						tmp12 = (int)1;
					}
					else{
						HX_STACK_LINE(372)
						tmp12 = (int)-1;
					}
					HX_STACK_LINE(372)
					wheel = tmp12;
				}
				else{
					HX_STACK_LINE(376)
					::String tmp10 = ::nme::display::Stage_obj::sUpEvents->__get(button);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(376)
					type = tmp10;
				}
			}
		}
		HX_STACK_LINE(379)
		::nme::display::Sprite tmp6 = this->nmeDragObject;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(379)
		bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(379)
		if ((tmp7)){
			HX_STACK_LINE(380)
			int tmp8 = inEvent->get_ref().x;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(380)
			int tmp9 = inEvent->get_ref().y;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(380)
			::nme::geom::Point tmp10 = ::nme::geom::Point_obj::__new(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(380)
			this->nmeDrag(tmp10);
		}
		HX_STACK_LINE(382)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(383)
		int tmp8 = inEvent->get_ref().id;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(383)
		::nme::display::DisplayObject tmp9 = this->nmeFindByID(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(383)
		::nme::display::DisplayObject obj = tmp9;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(385)
		bool tmp10 = (obj != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(385)
		if ((tmp10)){
			HX_STACK_LINE(386)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(388)
		::nme::geom::Point local = null();		HX_STACK_VAR(local,"local");
		HX_STACK_LINE(389)
		bool tmp11 = (stack->length > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(389)
		if ((tmp11)){
			HX_STACK_LINE(391)
			::nme::display::InteractiveObject tmp12 = stack->__get((int)0).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(391)
			::nme::display::InteractiveObject obj1 = tmp12;		HX_STACK_VAR(obj1,"obj1");
			HX_STACK_LINE(392)
			stack->reverse();
			HX_STACK_LINE(393)
			int tmp13 = inEvent->get_ref().x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(393)
			int tmp14 = inEvent->get_ref().y;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(393)
			::nme::geom::Point tmp15 = ::nme::geom::Point_obj::__new(tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(393)
			::nme::geom::Point tmp16 = obj1->globalToLocal(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(393)
			local = tmp16;
			HX_STACK_LINE(394)
			::String tmp17 = type;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(394)
			::cpp::Pointer< nme::Event > tmp18 = inEvent;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(394)
			::nme::geom::Point tmp19 = local;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(394)
			::nme::display::InteractiveObject tmp20 = obj1;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(394)
			::nme::events::MouseEvent tmp21 = ::nme::events::MouseEvent_obj::nmeCreate(tmp17,tmp18,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(394)
			::nme::events::MouseEvent evt = tmp21;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(395)
			evt->delta = wheel;
			HX_STACK_LINE(396)
			bool tmp22 = inFromMouse;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(396)
			if ((tmp22)){
				HX_STACK_LINE(397)
				::nme::events::MouseEvent tmp23 = evt;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(397)
				this->nmeCheckInOuts(tmp23,stack,null());
			}
			HX_STACK_LINE(398)
			::nme::events::MouseEvent tmp23 = evt;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(398)
			obj1->nmeFireEvent(tmp23);
		}
		else{
			HX_STACK_LINE(404)
			int tmp12 = inEvent->get_ref().x;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(404)
			int tmp13 = inEvent->get_ref().y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(404)
			::nme::geom::Point tmp14 = ::nme::geom::Point_obj::__new(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(404)
			local = tmp14;
			HX_STACK_LINE(405)
			::String tmp15 = type;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(405)
			::cpp::Pointer< nme::Event > tmp16 = inEvent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(405)
			::nme::geom::Point tmp17 = local;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(405)
			::nme::events::MouseEvent tmp18 = ::nme::events::MouseEvent_obj::nmeCreate(tmp15,tmp16,tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(405)
			::nme::events::MouseEvent evt = tmp18;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(406)
			evt->delta = wheel;
			HX_STACK_LINE(407)
			bool tmp19 = inFromMouse;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(407)
			if ((tmp19)){
				HX_STACK_LINE(408)
				::nme::events::MouseEvent tmp20 = evt;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(408)
				this->nmeCheckInOuts(tmp20,stack,null());
			}
		}
		HX_STACK_LINE(411)
		bool tmp12 = (stack->length > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(411)
		::nme::display::InteractiveObject tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(411)
		if ((tmp12)){
			HX_STACK_LINE(411)
			int tmp14 = (stack->length - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			tmp13 = stack->__get(tmp14).StaticCast< ::nme::display::InteractiveObject >();
		}
		else{
			HX_STACK_LINE(411)
			tmp13 = hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(411)
		::nme::display::InteractiveObject click_obj = tmp13;		HX_STACK_VAR(click_obj,"click_obj");
		HX_STACK_LINE(412)
		::String tmp14 = inType;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(412)
		::String tmp15 = ::nme::events::MouseEvent_obj::MOUSE_DOWN;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(412)
		bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(412)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(412)
		if ((tmp16)){
			HX_STACK_LINE(412)
			tmp17 = (button < (int)3);
		}
		else{
			HX_STACK_LINE(412)
			tmp17 = false;
		}
		HX_STACK_LINE(412)
		if ((tmp17)){
			HX_STACK_LINE(414)
			::nme::display::InteractiveObject tmp18 = click_obj;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(414)
			this->nmeLastDown[button] = tmp18;
		}
		else{
			HX_STACK_LINE(417)
			::String tmp18 = inType;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(417)
			::String tmp19 = ::nme::events::MouseEvent_obj::MOUSE_UP;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(417)
			bool tmp20 = (tmp18 == tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(417)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(417)
			if ((tmp20)){
				HX_STACK_LINE(417)
				tmp21 = (button < (int)3);
			}
			else{
				HX_STACK_LINE(417)
				tmp21 = false;
			}
			HX_STACK_LINE(417)
			if ((tmp21)){
				HX_STACK_LINE(419)
				::nme::display::InteractiveObject tmp22 = click_obj;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(419)
				::nme::display::InteractiveObject tmp23 = this->nmeLastDown->__get(button).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(419)
				bool tmp24 = (tmp22 == tmp23);		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(419)
				if ((tmp24)){
					HX_STACK_LINE(421)
					::String tmp25 = ::nme::display::Stage_obj::sClickEvents->__get(button);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(421)
					::cpp::Pointer< nme::Event > tmp26 = inEvent;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(421)
					::nme::geom::Point tmp27 = local;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(421)
					::nme::display::InteractiveObject tmp28 = click_obj;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(421)
					::nme::events::MouseEvent tmp29 = ::nme::events::MouseEvent_obj::nmeCreate(tmp25,tmp26,tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(421)
					::nme::events::MouseEvent evt = tmp29;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(422)
					::nme::events::MouseEvent tmp30 = evt;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(422)
					click_obj->nmeFireEvent(tmp30);
					HX_STACK_LINE(424)
					bool tmp31 = (button == (int)0);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(424)
					bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(424)
					if ((tmp31)){
						HX_STACK_LINE(424)
						tmp32 = click_obj->doubleClickEnabled;
					}
					else{
						HX_STACK_LINE(424)
						tmp32 = false;
					}
					HX_STACK_LINE(424)
					if ((tmp32)){
						HX_STACK_LINE(426)
						Float tmp33 = inEvent->get_ref().pollTime;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(426)
						Float now = tmp33;		HX_STACK_VAR(now,"now");
						HX_STACK_LINE(427)
						Float tmp34 = now;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(427)
						Float tmp35 = this->nmeLastClickTime;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(427)
						Float tmp36 = (tmp34 - tmp35);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(427)
						bool tmp37 = (tmp36 < ((Float)0.25));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(427)
						if ((tmp37)){
							HX_STACK_LINE(429)
							::String tmp38 = ::nme::events::MouseEvent_obj::DOUBLE_CLICK;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(429)
							::cpp::Pointer< nme::Event > tmp39 = inEvent;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(429)
							::nme::geom::Point tmp40 = local;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(429)
							::nme::display::InteractiveObject tmp41 = click_obj;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(429)
							::nme::events::MouseEvent tmp42 = ::nme::events::MouseEvent_obj::nmeCreate(tmp38,tmp39,tmp40,tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(429)
							::nme::events::MouseEvent evt1 = tmp42;		HX_STACK_VAR(evt1,"evt1");
							HX_STACK_LINE(430)
							::nme::events::MouseEvent tmp43 = evt1;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(430)
							click_obj->nmeFireEvent(tmp43);
						}
						HX_STACK_LINE(433)
						this->nmeLastClickTime = now;
					}
				}
				HX_STACK_LINE(437)
				this->nmeLastDown[button] = null();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,onMouse,(void))

Void Stage_obj::onUnhandledException( Dynamic exception,Array< ::Dynamic > stack){
{
		HX_STACK_FRAME("nme.display.Stage","onUnhandledException",0x0bdff8ef,"nme.display.Stage.onUnhandledException","nme/display/Stage.hx",442,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(exception,"exception")
		HX_STACK_ARG(stack,"stack")
		HX_STACK_LINE(443)
		Dynamic tmp = exception;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(443)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(443)
		::String tmp2 = (HX_HCSTRING("Exception: ","\x95","\xcc","\xac","\x54") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(443)
		::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(443)
		::String tmp4 = ::haxe::CallStack_obj::toString(stack);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(443)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(443)
		Dynamic tmp6 = hx::SourceInfo(HX_HCSTRING("Stage.hx","\xe0","\x5e","\xde","\xbc"),443,HX_HCSTRING("nme.display.Stage","\x4a","\x7c","\x22","\xdf"),HX_HCSTRING("onUnhandledException","\x4b","\x0a","\xce","\xd2"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(443)
		::haxe::Log_obj::trace(tmp5,tmp6);
		HX_STACK_LINE(444)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Stage.hx","\xe0","\x5e","\xde","\xbc"),444,HX_HCSTRING("nme.display.Stage","\x4a","\x7c","\x22","\xdf"),HX_HCSTRING("onUnhandledException","\x4b","\x0a","\xce","\xd2"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(444)
		::haxe::Log_obj::trace(HX_HCSTRING("\n\n\n===Terminating===\n.","\x56","\xfa","\x3c","\x80"),tmp7);
		HX_STACK_LINE(445)
		Dynamic tmp8 = exception;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(445)
		::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(445)
		::String tmp10 = (HX_HCSTRING("Unhandled exception:","\xa8","\x2b","\xda","\x98") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(445)
		HX_STACK_DO_THROW(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onUnhandledException,(void))

Void Stage_obj::onTouch( ::cpp::Pointer< nme::Event > inEvent,::String inType){
{
		HX_STACK_FRAME("nme.display.Stage","onTouch",0xab480dfc,"nme.display.Stage.onTouch","nme/display/Stage.hx",450,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(inType,"inType")
		HX_STACK_LINE(451)
		::String tmp = inType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		::String tmp1 = ::nme::events::TouchEvent_obj::TOUCH_TAP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(451)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		if ((tmp2)){
			HX_STACK_LINE(452)
			return null();
		}
		HX_STACK_LINE(454)
		::String tmp3 = inType;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(454)
		::String tmp4 = ::nme::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(454)
		bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(454)
		if ((tmp5)){
			HX_STACK_LINE(456)
			::nme::display::TouchInfo tmp6 = ::nme::display::TouchInfo_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(456)
			::nme::display::TouchInfo touchInfo = tmp6;		HX_STACK_VAR(touchInfo,"touchInfo");
			HX_STACK_LINE(457)
			{
				HX_STACK_LINE(457)
				int tmp7 = inEvent->get_ref().value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(457)
				int key = tmp7;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(457)
				::haxe::ds::IntMap tmp8 = this->nmeTouchInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(457)
				int tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(457)
				::nme::display::TouchInfo tmp10 = touchInfo;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(457)
				tmp8->set(tmp9,tmp10);
			}
			HX_STACK_LINE(458)
			::cpp::Pointer< nme::Event > tmp7 = inEvent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(458)
			::String tmp8 = ::nme::events::TouchEvent_obj::TOUCH_BEGIN;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(458)
			::nme::display::TouchInfo tmp9 = touchInfo;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(458)
			this->nmeOnTouch(tmp7,tmp8,tmp9);
			HX_STACK_LINE(459)
			return null();
		}
		HX_STACK_LINE(462)
		::nme::display::TouchInfo tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			int tmp7 = inEvent->get_ref().value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(462)
			int key = tmp7;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(462)
			::haxe::ds::IntMap tmp8 = this->nmeTouchInfo;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(462)
			int tmp9 = key;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(462)
			tmp6 = tmp8->get(tmp9);
		}
		HX_STACK_LINE(462)
		::nme::display::TouchInfo touchInfo = tmp6;		HX_STACK_VAR(touchInfo,"touchInfo");
		HX_STACK_LINE(463)
		::cpp::Pointer< nme::Event > tmp7 = inEvent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(463)
		::String tmp8 = inType;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(463)
		::nme::display::TouchInfo tmp9 = touchInfo;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(463)
		this->nmeOnTouch(tmp7,tmp8,tmp9);
		HX_STACK_LINE(465)
		::String tmp10 = inType;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(465)
		::String tmp11 = ::nme::events::TouchEvent_obj::TOUCH_END;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(465)
		bool tmp12 = (tmp10 == tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(465)
		if ((tmp12)){
			HX_STACK_LINE(466)
			int tmp13 = inEvent->get_ref().value;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(466)
			int key = tmp13;		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(466)
			::haxe::ds::IntMap tmp14 = this->nmeTouchInfo;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(466)
			int tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(466)
			tmp14->remove(tmp15);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onTouch,(void))

Void Stage_obj::onResize( int width,int height){
{
		HX_STACK_FRAME("nme.display.Stage","onResize",0xa3bdd917,"nme.display.Stage.onResize","nme/display/Stage.hx",470,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(471)
		::String tmp = ::nme::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(471)
		::nme::events::Event tmp1 = ::nme::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		::nme::events::Event evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(472)
		::nme::events::Event tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(472)
		this->nmeDispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onResize,(void))

Void Stage_obj::onRender( bool inFrameDue){
{
		HX_STACK_FRAME("nme.display.Stage","onRender",0xa06bea79,"nme.display.Stage.onRender","nme/display/Stage.hx",476,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFrameDue,"inFrameDue")
		HX_STACK_LINE(477)
		bool tmp = inFrameDue;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(477)
		if ((tmp)){
			HX_STACK_LINE(478)
			::nme::events::Event tmp1 = this->nmeEnterFrameEvent;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(478)
			this->nmeBroadcast(tmp1);
		}
		HX_STACK_LINE(480)
		bool tmp1 = this->invalid;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(480)
		if ((tmp1)){
			HX_STACK_LINE(482)
			this->invalid = false;
			HX_STACK_LINE(483)
			::nme::events::Event tmp2 = this->nmeRenderEvent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(483)
			this->nmeBroadcast(tmp2);
		}
		HX_STACK_LINE(487)
		bool rendered = false;		HX_STACK_VAR(rendered,"rendered");
		HX_STACK_LINE(488)
		::cpp::vm::Thread tmp2 = this->nmeCollectionAgency;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(488)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(488)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		if ((tmp3)){
			HX_STACK_LINE(488)
			int tmp5 = this->nmePreemptiveGcFreq;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(488)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(488)
			tmp4 = (tmp6 != (int)0);
		}
		else{
			HX_STACK_LINE(488)
			tmp4 = false;
		}
		HX_STACK_LINE(488)
		if ((tmp4)){
			HX_STACK_LINE(490)
			(this->nmePreemptiveGcSince)++;
			HX_STACK_LINE(491)
			int tmp5 = this->nmePreemptiveGcSince;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(491)
			int tmp6 = this->nmePreemptiveGcFreq;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(491)
			bool tmp7 = (tmp5 >= tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(491)
			bool preempt = tmp7;		HX_STACK_VAR(preempt,"preempt");
			HX_STACK_LINE(495)
			int tmp8 = this->nmePreemptiveGcFreq;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(495)
			bool tmp9 = (tmp8 < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(495)
			if ((tmp9)){
				HX_STACK_LINE(497)
				bool tmp10 = (this->nmeFrameAlloc == null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(497)
				if ((tmp10)){
					HX_STACK_LINE(498)
					this->nmeFrameAlloc = Array_obj< int >::__new();
				}
				HX_STACK_LINE(500)
				int tmp11 = ::cpp::vm::Gc_obj::memInfo((int)2);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(500)
				int current = tmp11;		HX_STACK_VAR(current,"current");
				HX_STACK_LINE(501)
				int tmp12 = this->nmeLastCurrentMemory;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(501)
				bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(501)
				if ((tmp13)){
					HX_STACK_LINE(503)
					int tmp14 = current;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(503)
					int tmp15 = this->nmeLastCurrentMemory;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(503)
					int tmp16 = (tmp14 - tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(503)
					int frameAlloc = tmp16;		HX_STACK_VAR(frameAlloc,"frameAlloc");
					HX_STACK_LINE(504)
					bool tmp17 = (frameAlloc >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(504)
					if ((tmp17)){
						HX_STACK_LINE(506)
						int tmp18 = (this->nmeFrameMemIndex)++;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(506)
						int tmp19 = frameAlloc;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(506)
						this->nmeFrameAlloc[tmp18] = tmp19;
						HX_STACK_LINE(507)
						int tmp20 = this->nmeFrameMemIndex;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(507)
						bool tmp21 = (tmp20 > (int)10);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(507)
						if ((tmp21)){
							HX_STACK_LINE(508)
							this->nmeFrameMemIndex = (int)0;
						}
					}
					else{
						HX_STACK_LINE(510)
						bool tmp18 = this->nmeLastPreempt;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(510)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(510)
						if ((tmp19)){
						}
					}
				}
				HX_STACK_LINE(515)
				this->nmeLastCurrentMemory = current;
				HX_STACK_LINE(517)
				int tmp14 = this->nmeFrameAlloc->length;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(517)
				bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(517)
				if ((tmp15)){
					HX_STACK_LINE(519)
					int sum = (int)0;		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(520)
					{
						HX_STACK_LINE(520)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(520)
						Array< int > _g1 = this->nmeFrameAlloc;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(520)
						while((true)){
							HX_STACK_LINE(520)
							bool tmp16 = (_g < _g1->length);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(520)
							bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(520)
							if ((tmp17)){
								HX_STACK_LINE(520)
								break;
							}
							HX_STACK_LINE(520)
							int tmp18 = _g1->__get(_g);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(520)
							int f = tmp18;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(520)
							++(_g);
							HX_STACK_LINE(521)
							hx::AddEq(sum,f);
						}
					}
					HX_STACK_LINE(523)
					int tmp16 = ::cpp::vm::Gc_obj::memInfo((int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(523)
					int reserved = tmp16;		HX_STACK_VAR(reserved,"reserved");
					HX_STACK_LINE(524)
					Float tmp17 = (sum * ((Float)1.2));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(524)
					int tmp18 = this->nmeFrameAlloc->length;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(524)
					Float tmp19 = (Float(tmp17) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(524)
					int tmp20 = current;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(524)
					Float tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(524)
					int tmp22 = reserved;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(524)
					bool tmp23 = (tmp21 > tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(524)
					preempt = tmp23;
				}
				else{
					HX_STACK_LINE(527)
					preempt = false;
				}
			}
			HX_STACK_LINE(531)
			this->nmeLastPreempt = preempt;
			HX_STACK_LINE(532)
			bool tmp10 = preempt;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(532)
			if ((tmp10)){
				HX_STACK_LINE(535)
				this->nmePreemptiveGcSince = (int)0;
				HX_STACK_LINE(536)
				rendered = true;
				HX_STACK_LINE(537)
				::nme::display::Stage_obj::nme_set_render_gc_free(true);
				HX_STACK_LINE(538)
				::cpp::vm::Gc_obj::enterGCFreeZone();
				HX_STACK_LINE(539)
				::cpp::vm::Lock tmp11 = this->nmeCollectionLock;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(539)
				tmp11->release();
				HX_STACK_LINE(540)
				Dynamic tmp12 = this->nmeHandle;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(540)
				::nme::display::Stage_obj::nme_render_stage(tmp12);
				HX_STACK_LINE(541)
				::cpp::vm::Gc_obj::exitGCFreeZone();
				HX_STACK_LINE(542)
				::nme::display::Stage_obj::nme_set_render_gc_free(false);
			}
			else{
			}
		}
		HX_STACK_LINE(549)
		bool tmp5 = rendered;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(549)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(549)
		if ((tmp6)){
			HX_STACK_LINE(551)
			Dynamic tmp7 = this->nmeHandle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(551)
			::nme::display::Stage_obj::nme_render_stage(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRender,(void))

Void Stage_obj::onDisplayObjectFocus( ::cpp::Pointer< nme::Event > inEvent){
{
		HX_STACK_FRAME("nme.display.Stage","onDisplayObjectFocus",0x060d951a,"nme.display.Stage.onDisplayObjectFocus","nme/display/Stage.hx",555,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_LINE(556)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(557)
		int tmp = inEvent->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		::nme::display::DisplayObject tmp1 = this->nmeFindByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		::nme::display::DisplayObject obj = tmp1;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(559)
		bool tmp2 = (obj != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(559)
		if ((tmp2)){
			HX_STACK_LINE(560)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(562)
		bool tmp3 = (stack->length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(562)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(562)
		if ((tmp3)){
			HX_STACK_LINE(562)
			int tmp5 = inEvent->get_ref().value;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(562)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(562)
			bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(562)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(562)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(562)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(562)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(562)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(562)
			if ((tmp12)){
				HX_STACK_LINE(562)
				int tmp13 = inEvent->get_ref().value;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(562)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(562)
				int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(562)
				tmp4 = (tmp15 == (int)2);
			}
			else{
				HX_STACK_LINE(562)
				tmp4 = true;
			}
		}
		else{
			HX_STACK_LINE(562)
			tmp4 = false;
		}
		HX_STACK_LINE(562)
		if ((tmp4)){
			HX_STACK_LINE(564)
			::nme::display::InteractiveObject tmp5 = stack->__get((int)0).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(564)
			::nme::display::InteractiveObject obj1 = tmp5;		HX_STACK_VAR(obj1,"obj1");
			HX_STACK_LINE(566)
			int tmp6 = inEvent->get_ref().value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(566)
			bool tmp7 = (tmp6 == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(566)
			::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(566)
			if ((tmp7)){
				HX_STACK_LINE(566)
				tmp8 = ::nme::events::FocusEvent_obj::MOUSE_FOCUS_CHANGE;
			}
			else{
				HX_STACK_LINE(566)
				tmp8 = ::nme::events::FocusEvent_obj::KEY_FOCUS_CHANGE;
			}
			HX_STACK_LINE(567)
			int tmp9 = this->nmeFocusOverObjects->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(567)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(567)
			::nme::display::InteractiveObject tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(567)
			if ((tmp10)){
				HX_STACK_LINE(567)
				tmp11 = null();
			}
			else{
				HX_STACK_LINE(567)
				tmp11 = this->nmeFocusOverObjects->__get((int)0).StaticCast< ::nme::display::InteractiveObject >();
			}
			HX_STACK_LINE(568)
			int tmp12 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(568)
			bool tmp13 = (tmp12 > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(568)
			int tmp14 = inEvent->get_ref().code;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(565)
			::nme::events::FocusEvent tmp15 = ::nme::events::FocusEvent_obj::__new(tmp8,true,true,tmp11,tmp13,tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(565)
			::nme::events::FocusEvent evt = tmp15;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(569)
			::nme::events::FocusEvent tmp16 = evt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(569)
			obj1->nmeFireEvent(tmp16);
			HX_STACK_LINE(571)
			bool tmp17 = evt->nmeGetIsCancelled();		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(571)
			if ((tmp17)){
				HX_STACK_LINE(573)
				inEvent->get_ref().result = (int)1;
				HX_STACK_LINE(574)
				return null();
			}
		}
		HX_STACK_LINE(577)
		stack->reverse();
		HX_STACK_LINE(579)
		::cpp::Pointer< nme::Event > tmp5 = inEvent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(579)
		this->nmeCheckFocusInOuts(tmp5,stack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onDisplayObjectFocus,(void))

Void Stage_obj::onInputFocus( bool acquired){
{
		HX_STACK_FRAME("nme.display.Stage","onInputFocus",0xf1b87411,"nme.display.Stage.onInputFocus","nme/display/Stage.hx",583,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(acquired,"acquired")
		HX_STACK_LINE(584)
		bool tmp = acquired;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(584)
		::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(584)
		if ((tmp)){
			HX_STACK_LINE(584)
			tmp1 = ::nme::events::FocusEvent_obj::FOCUS_IN;
		}
		else{
			HX_STACK_LINE(584)
			tmp1 = ::nme::events::FocusEvent_obj::FOCUS_OUT;
		}
		HX_STACK_LINE(584)
		::nme::events::Event tmp2 = ::nme::events::Event_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(584)
		::nme::events::Event evt = tmp2;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(585)
		::nme::events::Event tmp3 = evt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		this->nmeDispatchEvent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onInputFocus,(void))

bool Stage_obj::onRotateRequest( int inDirection){
	HX_STACK_FRAME("nme.display.Stage","onRotateRequest",0x145a0d71,"nme.display.Stage.onRotateRequest","nme/display/Stage.hx",589,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inDirection,"inDirection")
	HX_STACK_LINE(590)
	int tmp = inDirection;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(590)
	bool tmp1 = ::nme::display::Stage_obj::shouldRotateInterface(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(590)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onRotateRequest,return )

Void Stage_obj::onChange( ::cpp::Pointer< nme::Event > inEvent){
{
		HX_STACK_FRAME("nme.display.Stage","onChange",0x52b51093,"nme.display.Stage.onChange","nme/display/Stage.hx",594,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_LINE(595)
		int tmp = inEvent->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(595)
		::nme::display::DisplayObject tmp1 = this->nmeFindByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(595)
		::nme::display::DisplayObject obj = tmp1;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(596)
		bool tmp2 = (obj != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(596)
		if ((tmp2)){
			HX_STACK_LINE(597)
			::String tmp3 = ::nme::events::Event_obj::CHANGE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(597)
			::nme::events::Event tmp4 = ::nme::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(597)
			obj->nmeFireEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onChange,(void))

Void Stage_obj::onActive( bool inActive){
{
		HX_STACK_FRAME("nme.display.Stage","onActive",0xb188c0e9,"nme.display.Stage.onActive","nme/display/Stage.hx",601,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inActive,"inActive")
		HX_STACK_LINE(603)
		bool tmp = inActive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(603)
		bool tmp1 = this->get_active();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(603)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(603)
		if ((tmp2)){
			HX_STACK_LINE(605)
			::nme::app::Window tmp3 = this->window;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(605)
			tmp3->active = inActive;
			HX_STACK_LINE(606)
			bool tmp4 = this->get_active();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(606)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(606)
			if ((tmp5)){
				HX_STACK_LINE(607)
				Float tmp6 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(607)
				this->nmeLastRender = tmp6;
			}
			HX_STACK_LINE(609)
			bool tmp6 = inActive;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(609)
			::String tmp7;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(609)
			if ((tmp6)){
				HX_STACK_LINE(609)
				tmp7 = ::nme::events::Event_obj::ACTIVATE;
			}
			else{
				HX_STACK_LINE(609)
				tmp7 = ::nme::events::Event_obj::DEACTIVATE;
			}
			HX_STACK_LINE(609)
			::nme::events::Event tmp8 = ::nme::events::Event_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(609)
			::nme::events::Event evt = tmp8;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(610)
			::nme::events::Event tmp9 = evt;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(610)
			this->nmeBroadcast(tmp9);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onActive,(void))

Void Stage_obj::onJoystick( ::cpp::Pointer< nme::Event > inEvent,::String inType){
{
		HX_STACK_FRAME("nme.display.Stage","onJoystick",0x6c2cae9f,"nme.display.Stage.onJoystick","nme/display/Stage.hx",617,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(inType,"inType")
		HX_STACK_LINE(618)
		::nme::events::JoystickEvent evt = null();		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(620)
		::String tmp = inType;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(620)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"))){
			HX_STACK_LINE(623)
			Array< Float > data;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(623)
			{
				HX_STACK_LINE(623)
				int tmp1 = inEvent->get_ref().id;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(623)
				int key = tmp1;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(623)
				::haxe::ds::IntMap tmp2 = this->nmeJoyAxisData;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(623)
				int tmp3 = key;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(623)
				data = tmp2->get(tmp3);
			}
			HX_STACK_LINE(624)
			bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(624)
			if ((tmp1)){
				HX_STACK_LINE(625)
				data = Array_obj< Float >::__new().Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0)).Add(((Float)0.0));
			}
			HX_STACK_LINE(627)
			int tmp2 = inEvent->get_ref().value;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(627)
			Float tmp3 = (Float(tmp2) / Float((int)32767));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(627)
			Float value = tmp3;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(628)
			bool tmp4 = (value < (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(628)
			if ((tmp4)){
				HX_STACK_LINE(628)
				value = (int)-1;
			}
			HX_STACK_LINE(630)
			while((true)){
				HX_STACK_LINE(630)
				int tmp5 = data->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(630)
				int tmp6 = inEvent->get_ref().code;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(630)
				bool tmp7 = (tmp5 < tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(630)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(630)
				if ((tmp8)){
					HX_STACK_LINE(630)
					break;
				}
				HX_STACK_LINE(631)
				data->push((int)0);
			}
			HX_STACK_LINE(633)
			int tmp5 = inEvent->get_ref().code;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(633)
			Float tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(633)
			data[tmp5] = tmp6;
			HX_STACK_LINE(635)
			::String tmp7 = inType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(635)
			int tmp8 = inEvent->get_ref().id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(635)
			Float tmp9 = data->__get((int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(635)
			Float tmp10 = data->__get((int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(635)
			Float tmp11 = data->__get((int)2);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(635)
			::nme::events::JoystickEvent tmp12 = ::nme::events::JoystickEvent_obj::__new(tmp7,false,false,tmp8,(int)0,tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(635)
			evt = tmp12;
			HX_STACK_LINE(636)
			evt->axis = data->copy();
			HX_STACK_LINE(638)
			{
				HX_STACK_LINE(638)
				int tmp13 = inEvent->get_ref().id;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(638)
				int key = tmp13;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(638)
				::haxe::ds::IntMap tmp14 = this->nmeJoyAxisData;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(638)
				int tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(638)
				tmp14->set(tmp15,data);
			}
		}
		else if (  ( _switch_1==HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"))){
			HX_STACK_LINE(641)
			::String tmp1 = inType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(641)
			int tmp2 = inEvent->get_ref().id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(641)
			int tmp3 = inEvent->get_ref().code;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(641)
			int tmp4 = inEvent->get_ref().x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(641)
			int tmp5 = inEvent->get_ref().y;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(641)
			::nme::events::JoystickEvent tmp6 = ::nme::events::JoystickEvent_obj::__new(tmp1,false,false,tmp2,tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(641)
			evt = tmp6;
		}
		else if (  ( _switch_1==HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"))){
			HX_STACK_LINE(644)
			int x = (int)0;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(645)
			int y = (int)0;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(647)
			int tmp1 = inEvent->get_ref().value;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(647)
			int tmp2 = (int(tmp1) & int((int)1));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(647)
			bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(647)
			if ((tmp3)){
				HX_STACK_LINE(648)
				y = (int)-1;
			}
			else{
				HX_STACK_LINE(649)
				int tmp4 = inEvent->get_ref().value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(649)
				int tmp5 = (int(tmp4) & int((int)4));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(649)
				bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(649)
				if ((tmp6)){
					HX_STACK_LINE(650)
					y = (int)1;
				}
			}
			HX_STACK_LINE(652)
			int tmp4 = inEvent->get_ref().value;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(652)
			int tmp5 = (int(tmp4) & int((int)2));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(652)
			bool tmp6 = (tmp5 != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(652)
			if ((tmp6)){
				HX_STACK_LINE(653)
				x = (int)1;
			}
			else{
				HX_STACK_LINE(654)
				int tmp7 = inEvent->get_ref().value;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(654)
				int tmp8 = (int(tmp7) & int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(654)
				bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(654)
				if ((tmp9)){
					HX_STACK_LINE(655)
					x = (int)-1;
				}
			}
			HX_STACK_LINE(657)
			::String tmp7 = inType;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(657)
			int tmp8 = inEvent->get_ref().id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(657)
			int tmp9 = inEvent->get_ref().code;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(657)
			int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(657)
			int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(657)
			::nme::events::JoystickEvent tmp12 = ::nme::events::JoystickEvent_obj::__new(tmp7,false,false,tmp8,tmp9,tmp10,tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(657)
			evt = tmp12;
		}
		else  {
			HX_STACK_LINE(660)
			::String tmp1 = inType;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(660)
			int tmp2 = inEvent->get_ref().id;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(660)
			int tmp3 = inEvent->get_ref().code;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(660)
			::nme::events::JoystickEvent tmp4 = ::nme::events::JoystickEvent_obj::__new(tmp1,false,false,tmp2,tmp3,null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(660)
			evt = tmp4;
		}
;
;
		HX_STACK_LINE(663)
		::nme::events::JoystickEvent tmp1 = evt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(663)
		this->nmeDispatchEvent(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,onJoystick,(void))

Void Stage_obj::onSysMessage( ::cpp::Pointer< nme::Event > inEvent){
{
		HX_STACK_FRAME("nme.display.Stage","onSysMessage",0x9d8e68dd,"nme.display.Stage.onSysMessage","nme/display/Stage.hx",667,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_LINE(668)
		::String tmp = ::nme::events::SystemEvent_obj::SYSTEM;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(668)
		int tmp1 = inEvent->get_ref().value;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(668)
		::nme::events::SystemEvent tmp2 = ::nme::events::SystemEvent_obj::__new(tmp,false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(668)
		::nme::events::SystemEvent evt = tmp2;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(669)
		::nme::events::SystemEvent tmp3 = evt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(669)
		this->nmeDispatchEvent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onSysMessage,(void))

Void Stage_obj::onContextLost( ){
{
		HX_STACK_FRAME("nme.display.Stage","onContextLost",0xcb8a5170,"nme.display.Stage.onContextLost","nme/display/Stage.hx",673,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(674)
		::String tmp = ::nme::events::Event_obj::CONTEXT3D_LOST;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(674)
		::nme::events::Event tmp1 = ::nme::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(674)
		::nme::events::Event evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(675)
		::nme::events::Event tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(675)
		this->nmeBroadcast(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,onContextLost,(void))

Void Stage_obj::nmeDrag( ::nme::geom::Point inMouse){
{
		HX_STACK_FRAME("nme.display.Stage","nmeDrag",0xc8b8a236,"nme.display.Stage.nmeDrag","nme/display/Stage.hx",683,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inMouse,"inMouse")
		HX_STACK_LINE(684)
		::nme::display::Sprite tmp = this->nmeDragObject;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(684)
		::nme::display::DisplayObjectContainer tmp1 = tmp->get_parent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(684)
		::nme::display::DisplayObjectContainer p = tmp1;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(685)
		bool tmp2 = (p != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(685)
		if ((tmp2)){
			HX_STACK_LINE(686)
			::nme::geom::Point tmp3 = inMouse;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(686)
			::nme::geom::Point tmp4 = p->globalToLocal(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(686)
			inMouse = tmp4;
		}
		HX_STACK_LINE(688)
		Float tmp3 = inMouse->x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(688)
		Float tmp4 = this->nmeDragOffsetX;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(688)
		Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(688)
		Float x = tmp5;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(689)
		Float tmp6 = inMouse->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(689)
		Float tmp7 = this->nmeDragOffsetY;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(689)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(689)
		Float y = tmp8;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(691)
		::nme::geom::Rectangle tmp9 = this->nmeDragBounds;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(691)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(691)
		if ((tmp10)){
			HX_STACK_LINE(693)
			Float tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(693)
			::nme::geom::Rectangle tmp12 = this->nmeDragBounds;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(693)
			Float tmp13 = tmp12->x;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(693)
			bool tmp14 = (tmp11 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(693)
			if ((tmp14)){
				HX_STACK_LINE(693)
				::nme::geom::Rectangle tmp15 = this->nmeDragBounds;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(693)
				x = tmp15->x;
			}
			else{
				HX_STACK_LINE(694)
				Float tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(694)
				::nme::geom::Rectangle tmp16 = this->nmeDragBounds;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(694)
				Float tmp17 = tmp16->get_right();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(694)
				bool tmp18 = (tmp15 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(694)
				if ((tmp18)){
					HX_STACK_LINE(694)
					::nme::geom::Rectangle tmp19 = this->nmeDragBounds;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(694)
					Float tmp20 = tmp19->get_right();		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(694)
					x = tmp20;
				}
			}
			HX_STACK_LINE(696)
			Float tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(696)
			::nme::geom::Rectangle tmp16 = this->nmeDragBounds;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(696)
			Float tmp17 = tmp16->y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(696)
			bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(696)
			if ((tmp18)){
				HX_STACK_LINE(696)
				::nme::geom::Rectangle tmp19 = this->nmeDragBounds;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(696)
				y = tmp19->y;
			}
			else{
				HX_STACK_LINE(697)
				Float tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(697)
				::nme::geom::Rectangle tmp20 = this->nmeDragBounds;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(697)
				Float tmp21 = tmp20->get_bottom();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(697)
				bool tmp22 = (tmp19 > tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(697)
				if ((tmp22)){
					HX_STACK_LINE(697)
					::nme::geom::Rectangle tmp23 = this->nmeDragBounds;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(697)
					Float tmp24 = tmp23->get_bottom();		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(697)
					y = tmp24;
				}
			}
		}
		HX_STACK_LINE(700)
		::nme::display::Sprite tmp11 = this->nmeDragObject;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(700)
		Float tmp12 = x;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(700)
		tmp11->set_x(tmp12);
		HX_STACK_LINE(701)
		::nme::display::Sprite tmp13 = this->nmeDragObject;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(701)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(701)
		tmp13->set_y(tmp14);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeDrag,(void))

Float Stage_obj::nmeNextFrameDue( Float inOtherTimers,Float inTimestamp){
	HX_STACK_FRAME("nme.display.Stage","nmeNextFrameDue",0x7dd495dc,"nme.display.Stage.nmeNextFrameDue","nme/display/Stage.hx",705,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inOtherTimers,"inOtherTimers")
	HX_STACK_ARG(inTimestamp,"inTimestamp")
	HX_STACK_LINE(706)
	bool tmp = this->get_active();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(706)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(706)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(706)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(706)
	if ((tmp2)){
		HX_STACK_LINE(706)
		tmp3 = this->pauseWhenDeactivated;
	}
	else{
		HX_STACK_LINE(706)
		tmp3 = false;
	}
	HX_STACK_LINE(706)
	if ((tmp3)){
		HX_STACK_LINE(707)
		Float tmp4 = inOtherTimers;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(707)
		return tmp4;
	}
	HX_STACK_LINE(709)
	Float tmp4 = this->get_frameRate();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(709)
	bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(709)
	if ((tmp5)){
		HX_STACK_LINE(711)
		Float tmp6 = this->nmeLastRender;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(711)
		Float tmp7 = this->nmeFramePeriod;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(711)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(711)
		Float tmp9 = inTimestamp;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(711)
		Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(711)
		Float tmp11 = ::nme::display::Stage_obj::nmeEarlyWakeup;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(711)
		Float tmp12 = (tmp10 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(711)
		Float next = tmp12;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(712)
		bool tmp13 = (next < inOtherTimers);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(712)
		if ((tmp13)){
			HX_STACK_LINE(713)
			Float tmp14 = next;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(713)
			return tmp14;
		}
	}
	HX_STACK_LINE(716)
	Float tmp6 = inOtherTimers;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(716)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,nmeNextFrameDue,return )

Dynamic Stage_obj::set_opaqueBackground( Dynamic inBG){
	HX_STACK_FRAME("nme.display.Stage","set_opaqueBackground",0x3edbc350,"nme.display.Stage.set_opaqueBackground","nme/display/Stage.hx",720,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBG,"inBG")
	HX_STACK_LINE(721)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(721)
	Dynamic tmp1 = inBG;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(721)
	tmp->setBackground(tmp1);
	HX_STACK_LINE(722)
	bool tmp2 = (inBG == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(722)
	if ((tmp2)){
		HX_STACK_LINE(723)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(723)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(tmp3,(int)0);
	}
	else{
		HX_STACK_LINE(725)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(725)
		int tmp4 = (int(inBG) | int((int)-16777216));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(725)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(tmp3,tmp4);
	}
	HX_STACK_LINE(727)
	Dynamic tmp3 = inBG;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(727)
	return tmp3;
}


int Stage_obj::set_color( int inColor){
	HX_STACK_FRAME("nme.display.Stage","set_color",0xd898c0a2,"nme.display.Stage.set_color","nme/display/Stage.hx",731,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inColor,"inColor")
	HX_STACK_LINE(732)
	int tmp = inColor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(732)
	this->set_opaqueBackground(tmp);
	HX_STACK_LINE(733)
	int tmp1 = inColor;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(733)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_color,return )

int Stage_obj::get_color( ){
	HX_STACK_FRAME("nme.display.Stage","get_color",0xf547d496,"nme.display.Stage.get_color","nme/display/Stage.hx",738,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(739)
	Dynamic tmp = this->get_opaqueBackground();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(739)
	Dynamic col = tmp;		HX_STACK_VAR(col,"col");
	HX_STACK_LINE(740)
	bool tmp1 = (col == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(740)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(740)
	if ((tmp1)){
		HX_STACK_LINE(740)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(740)
		tmp2 = col;
	}
	HX_STACK_LINE(740)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_color,return )

Void Stage_obj::nmeOnTouch( ::cpp::Pointer< nme::Event > inEvent,::String inType,::nme::display::TouchInfo touchInfo){
{
		HX_STACK_FRAME("nme.display.Stage","nmeOnTouch",0x6bf6151e,"nme.display.Stage.nmeOnTouch","nme/display/Stage.hx",746,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_ARG(inType,"inType")
		HX_STACK_ARG(touchInfo,"touchInfo")
		HX_STACK_LINE(747)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(748)
		int tmp = inEvent->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		::nme::display::DisplayObject tmp1 = this->nmeFindByID(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(748)
		::nme::display::DisplayObject obj = tmp1;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(750)
		bool tmp2 = (obj != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(750)
		if ((tmp2)){
			HX_STACK_LINE(751)
			obj->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(753)
		bool tmp3 = (stack->length > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(753)
		if ((tmp3)){
			HX_STACK_LINE(755)
			::nme::display::InteractiveObject tmp4 = stack->__get((int)0).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(755)
			::nme::display::InteractiveObject obj1 = tmp4;		HX_STACK_VAR(obj1,"obj1");
			HX_STACK_LINE(756)
			stack->reverse();
			HX_STACK_LINE(757)
			int tmp5 = inEvent->get_ref().x;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(757)
			int tmp6 = inEvent->get_ref().y;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(757)
			::nme::geom::Point tmp7 = ::nme::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			::nme::geom::Point tmp8 = obj1->globalToLocal(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			::nme::geom::Point local = tmp8;		HX_STACK_VAR(local,"local");
			HX_STACK_LINE(758)
			::String tmp9 = inType;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(758)
			::cpp::Pointer< nme::Event > tmp10 = inEvent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(758)
			::nme::geom::Point tmp11 = local;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(758)
			::nme::display::InteractiveObject tmp12 = obj1;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(758)
			Float tmp13 = inEvent->get_ref().scaleX;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(758)
			Float tmp14 = inEvent->get_ref().scaleY;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(758)
			::nme::events::TouchEvent tmp15 = ::nme::events::TouchEvent_obj::nmeCreate(tmp9,tmp10,tmp11,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(758)
			::nme::events::TouchEvent evt = tmp15;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(759)
			int tmp16 = inEvent->get_ref().value;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(759)
			evt->touchPointID = tmp16;
			HX_STACK_LINE(760)
			int tmp17 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(760)
			int tmp18 = (int(tmp17) & int((int)32768));		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(760)
			bool tmp19 = (tmp18 > (int)0);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(760)
			evt->isPrimaryTouchPoint = tmp19;
			HX_STACK_LINE(762)
			::nme::events::TouchEvent tmp20 = evt;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(762)
			::nme::display::TouchInfo tmp21 = touchInfo;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(762)
			this->nmeCheckInOuts(tmp20,stack,tmp21);
			HX_STACK_LINE(763)
			::nme::events::TouchEvent tmp22 = evt;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(763)
			obj1->nmeFireEvent(tmp22);
			HX_STACK_LINE(765)
			bool tmp23 = evt->isPrimaryTouchPoint;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(765)
			bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(765)
			if ((tmp23)){
				HX_STACK_LINE(765)
				::String tmp25 = inType;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(765)
				::String tmp26 = ::nme::events::TouchEvent_obj::TOUCH_MOVE;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(765)
				::String tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(765)
				tmp24 = (tmp25 == tmp27);
			}
			else{
				HX_STACK_LINE(765)
				tmp24 = false;
			}
			HX_STACK_LINE(765)
			if ((tmp24)){
				HX_STACK_LINE(767)
				::nme::display::Sprite tmp25 = this->nmeDragObject;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(767)
				bool tmp26 = (tmp25 != null());		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(767)
				if ((tmp26)){
					HX_STACK_LINE(768)
					int tmp27 = inEvent->get_ref().x;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(768)
					int tmp28 = inEvent->get_ref().y;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(768)
					::nme::geom::Point tmp29 = ::nme::geom::Point_obj::__new(tmp27,tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(768)
					this->nmeDrag(tmp29);
				}
				HX_STACK_LINE(770)
				::String tmp27 = ::nme::events::MouseEvent_obj::MOUSE_MOVE;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(770)
				::cpp::Pointer< nme::Event > tmp28 = inEvent;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(770)
				::nme::geom::Point tmp29 = local;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(770)
				::nme::display::InteractiveObject tmp30 = obj1;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(770)
				::nme::events::MouseEvent tmp31 = ::nme::events::MouseEvent_obj::nmeCreate(tmp27,tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(770)
				::nme::events::MouseEvent evt1 = tmp31;		HX_STACK_VAR(evt1,"evt1");
				HX_STACK_LINE(771)
				::nme::events::MouseEvent tmp32 = evt1;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(771)
				obj1->nmeFireEvent(tmp32);
			}
		}
		else{
			HX_STACK_LINE(777)
			::String tmp4 = inType;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(777)
			::cpp::Pointer< nme::Event > tmp5 = inEvent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(777)
			int tmp6 = inEvent->get_ref().x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(777)
			int tmp7 = inEvent->get_ref().y;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(777)
			::nme::geom::Point tmp8 = ::nme::geom::Point_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(777)
			Float tmp9 = inEvent->get_ref().scaleX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(777)
			Float tmp10 = inEvent->get_ref().scaleY;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(777)
			::nme::events::TouchEvent tmp11 = ::nme::events::TouchEvent_obj::nmeCreate(tmp4,tmp5,tmp8,null(),tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(777)
			::nme::events::TouchEvent evt = tmp11;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(778)
			int tmp12 = inEvent->get_ref().value;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(778)
			evt->touchPointID = tmp12;
			HX_STACK_LINE(779)
			int tmp13 = inEvent->get_ref().flags;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(779)
			int tmp14 = (int(tmp13) & int((int)32768));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(779)
			bool tmp15 = (tmp14 > (int)0);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(779)
			evt->isPrimaryTouchPoint = tmp15;
			HX_STACK_LINE(781)
			::nme::events::TouchEvent tmp16 = evt;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(781)
			::nme::display::TouchInfo tmp17 = touchInfo;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(781)
			this->nmeCheckInOuts(tmp16,stack,tmp17);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeOnTouch,(void))

Void Stage_obj::onPoll( Float inTimestamp){
{
		HX_STACK_FRAME("nme.display.Stage","onPoll",0x86bbdea2,"nme.display.Stage.onPoll","nme/display/Stage.hx",787,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTimestamp,"inTimestamp")
		HX_STACK_LINE(789)
		::nme::media::SoundChannel_obj::nmePollComplete();
		HX_STACK_LINE(790)
		::nme::net::URLLoader_obj::nmePollData();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,onPoll,(void))

Float Stage_obj::getNextWake( Float inDefaultWake,Float inTimestamp){
	HX_STACK_FRAME("nme.display.Stage","getNextWake",0x61a93b49,"nme.display.Stage.getNextWake","nme/display/Stage.hx",794,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inDefaultWake,"inDefaultWake")
	HX_STACK_ARG(inTimestamp,"inTimestamp")
	HX_STACK_LINE(795)
	Float wake = inDefaultWake;		HX_STACK_VAR(wake,"wake");
	HX_STACK_LINE(797)
	bool tmp = (wake > ((Float)0.001));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(797)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(797)
	if ((tmp)){
		HX_STACK_LINE(797)
		int tmp2 = ::nme::media::SoundChannel_obj::nmeDynamicSoundCount;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(797)
		int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(797)
		tmp1 = (tmp3 > (int)0);
	}
	else{
		HX_STACK_LINE(797)
		tmp1 = false;
	}
	HX_STACK_LINE(797)
	if ((tmp1)){
		HX_STACK_LINE(798)
		wake = ((Float)0.001);
	}
	HX_STACK_LINE(800)
	bool tmp2 = (wake > ((Float)0.02));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(800)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(800)
	if ((tmp2)){
		HX_STACK_LINE(800)
		bool tmp4 = ::nme::media::SoundChannel_obj::nmeCompletePending();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(800)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(800)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(800)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(800)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(800)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(800)
		if ((tmp9)){
			HX_STACK_LINE(800)
			tmp3 = ::nme::net::URLLoader_obj::nmeLoadPending();
		}
		else{
			HX_STACK_LINE(800)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(800)
		tmp3 = false;
	}
	HX_STACK_LINE(800)
	if ((tmp3)){
		HX_STACK_LINE(802)
		bool tmp4 = this->get_active();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(802)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(802)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(802)
		if ((tmp5)){
			HX_STACK_LINE(802)
			bool tmp7 = this->pauseWhenDeactivated;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(802)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(802)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(802)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(802)
			tmp6 = true;
		}
		HX_STACK_LINE(802)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(802)
		if ((tmp6)){
			HX_STACK_LINE(802)
			tmp7 = ((Float)0.020);
		}
		else{
			HX_STACK_LINE(802)
			tmp7 = ((Float)0.500);
		}
		HX_STACK_LINE(802)
		wake = tmp7;
	}
	HX_STACK_LINE(805)
	Float tmp4 = wake;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(805)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,getNextWake,return )

Void Stage_obj::nmeStartDrag( ::nme::display::Sprite sprite,bool lockCenter,::nme::geom::Rectangle bounds){
{
		HX_STACK_FRAME("nme.display.Stage","nmeStartDrag",0x303d3ff4,"nme.display.Stage.nmeStartDrag","nme/display/Stage.hx",811,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_ARG(lockCenter,"lockCenter")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(812)
		bool tmp = (bounds == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(812)
		::nme::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(812)
		if ((tmp)){
			HX_STACK_LINE(812)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(812)
			tmp1 = bounds->clone();
		}
		HX_STACK_LINE(812)
		this->nmeDragBounds = tmp1;
		HX_STACK_LINE(813)
		this->nmeDragObject = sprite;
		HX_STACK_LINE(815)
		::nme::display::Sprite tmp2 = this->nmeDragObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(815)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(815)
		if ((tmp3)){
			HX_STACK_LINE(817)
			bool tmp4 = lockCenter;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(817)
			if ((tmp4)){
				HX_STACK_LINE(819)
				::nme::display::Sprite tmp5 = this->nmeDragObject;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(819)
				Float tmp6 = tmp5->get_width();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(819)
				Float tmp7 = -(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(819)
				Float tmp8 = (Float(tmp7) / Float((int)2));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(819)
				this->nmeDragOffsetX = tmp8;
				HX_STACK_LINE(820)
				::nme::display::Sprite tmp9 = this->nmeDragObject;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(820)
				Float tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(820)
				Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(820)
				Float tmp12 = (Float(tmp11) / Float((int)2));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(820)
				this->nmeDragOffsetY = tmp12;
			}
			else{
				HX_STACK_LINE(824)
				Float tmp5 = this->get_mouseX();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(824)
				Float tmp6 = this->get_mouseY();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(824)
				::nme::geom::Point tmp7 = ::nme::geom::Point_obj::__new(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(824)
				::nme::geom::Point mouse = tmp7;		HX_STACK_VAR(mouse,"mouse");
				HX_STACK_LINE(825)
				::nme::display::Sprite tmp8 = this->nmeDragObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(825)
				::nme::display::DisplayObjectContainer tmp9 = tmp8->get_parent();		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(825)
				::nme::display::DisplayObjectContainer p = tmp9;		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(826)
				bool tmp10 = (p != null());		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(826)
				if ((tmp10)){
					HX_STACK_LINE(827)
					::nme::geom::Point tmp11 = mouse;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(827)
					::nme::geom::Point tmp12 = p->globalToLocal(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(827)
					mouse = tmp12;
				}
				HX_STACK_LINE(829)
				::nme::display::Sprite tmp11 = this->nmeDragObject;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(829)
				Float tmp12 = tmp11->get_x();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(829)
				Float tmp13 = mouse->x;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(829)
				Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(829)
				this->nmeDragOffsetX = tmp14;
				HX_STACK_LINE(830)
				::nme::display::Sprite tmp15 = this->nmeDragObject;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(830)
				Float tmp16 = tmp15->get_y();		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(830)
				Float tmp17 = mouse->y;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(830)
				Float tmp18 = (tmp16 - tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(830)
				this->nmeDragOffsetY = tmp18;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Stage_obj,nmeStartDrag,(void))

Void Stage_obj::nmeStopDrag( ::nme::display::Sprite sprite){
{
		HX_STACK_FRAME("nme.display.Stage","nmeStopDrag",0x28583058,"nme.display.Stage.nmeStopDrag","nme/display/Stage.hx",836,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(837)
		this->nmeDragBounds = null();
		HX_STACK_LINE(838)
		this->nmeDragObject = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,nmeStopDrag,(void))

Void Stage_obj::setPreemtiveGcFrequency( int inFrames){
{
		HX_STACK_FRAME("nme.display.Stage","setPreemtiveGcFrequency",0xb518050f,"nme.display.Stage.setPreemtiveGcFrequency","nme/display/Stage.hx",842,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFrames,"inFrames")
		HX_STACK_LINE(841)
		::nme::display::Stage _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(848)
		this->nmePreemptiveGcSince = (int)0;
		HX_STACK_LINE(849)
		this->nmePreemptiveGcFreq = inFrames;
		HX_STACK_LINE(850)
		::cpp::vm::Lock tmp = this->nmeCollectionLock;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(850)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(850)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(850)
		if ((tmp1)){
			HX_STACK_LINE(850)
			tmp2 = (inFrames != (int)0);
		}
		else{
			HX_STACK_LINE(850)
			tmp2 = false;
		}
		HX_STACK_LINE(850)
		if ((tmp2)){
			HX_STACK_LINE(852)
			::cpp::vm::Lock tmp3 = ::cpp::vm::Lock_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(852)
			this->nmeCollectionLock = tmp3;

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::nme::display::Stage,_g)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","nme/display/Stage.hx",854,0x3f854bb6)
				{
					HX_STACK_LINE(854)
					while((true)){
						HX_STACK_LINE(856)
						_g->nmeCollectionLock->wait(null());
						HX_STACK_LINE(857)
						::cpp::vm::Gc_obj::run(false);
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(853)
			::cpp::vm::Thread tmp4 = ::cpp::vm::Thread_obj::create( Dynamic(new _Function_2_1(_g)));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(853)
			this->nmeCollectionAgency = tmp4;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setPreemtiveGcFrequency,(void))

Void Stage_obj::setSmartPreemtiveGc( ){
{
		HX_STACK_FRAME("nme.display.Stage","setSmartPreemtiveGc",0xcc4d6ec0,"nme.display.Stage.setSmartPreemtiveGc","nme/display/Stage.hx",865,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_LINE(865)
		this->setPreemtiveGcFrequency((int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,setSmartPreemtiveGc,(void))

Void Stage_obj::showCursor( bool inShow){
{
		HX_STACK_FRAME("nme.display.Stage","showCursor",0x9ae12d57,"nme.display.Stage.showCursor","nme/display/Stage.hx",878,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inShow,"inShow")
		HX_STACK_LINE(879)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(879)
		bool tmp1 = inShow;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(879)
		::nme::display::Stage_obj::nme_stage_show_cursor(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,showCursor,(void))

::nme::display::InteractiveObject Stage_obj::get_focus( ){
	HX_STACK_FRAME("nme.display.Stage","get_focus",0xaf74c30b,"nme.display.Stage.get_focus","nme/display/Stage.hx",884,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(885)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(885)
	int tmp1 = ::nme::display::Stage_obj::nme_stage_get_focus_id(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(885)
	int id = tmp1;		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(886)
	int tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(886)
	::nme::display::DisplayObject tmp3 = this->nmeFindByID(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(886)
	::nme::display::DisplayObject obj = tmp3;		HX_STACK_VAR(obj,"obj");
	HX_STACK_LINE(887)
	::nme::display::InteractiveObject tmp4 = ((::nme::display::InteractiveObject)(obj));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(887)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_focus,return )

::nme::display::InteractiveObject Stage_obj::set_focus( ::nme::display::InteractiveObject inObject){
	HX_STACK_FRAME("nme.display.Stage","set_focus",0x92c5af17,"nme.display.Stage.set_focus","nme/display/Stage.hx",891,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inObject,"inObject")
	HX_STACK_LINE(892)
	bool tmp = (inObject == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(892)
	if ((tmp)){
		HX_STACK_LINE(893)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(893)
		::nme::display::Stage_obj::nme_stage_set_focus(tmp1,null(),(int)0);
	}
	else{
		HX_STACK_LINE(895)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(895)
		Dynamic tmp2 = inObject->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(895)
		::nme::display::Stage_obj::nme_stage_set_focus(tmp1,tmp2,(int)0);
	}
	HX_STACK_LINE(896)
	::nme::display::InteractiveObject tmp1 = inObject;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(896)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_focus,return )

Float Stage_obj::set_frameRate( Float inRate){
	HX_STACK_FRAME("nme.display.Stage","set_frameRate",0x83736c6c,"nme.display.Stage.set_frameRate","nme/display/Stage.hx",900,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inRate,"inRate")
	HX_STACK_LINE(901)
	::nme::app::FrameTimer tmp = this->nmeFrameTimer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(901)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(901)
	if ((tmp1)){
		HX_STACK_LINE(902)
		::nme::app::FrameTimer tmp2 = this->nmeFrameTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(902)
		Float tmp3 = inRate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(902)
		tmp2->set_fps(tmp3);
	}
	HX_STACK_LINE(903)
	Float tmp2 = inRate;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(903)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_frameRate,return )

Float Stage_obj::get_frameRate( ){
	HX_STACK_FRAME("nme.display.Stage","get_frameRate",0x3e6d8a60,"nme.display.Stage.get_frameRate","nme/display/Stage.hx",905,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(905)
	::nme::app::FrameTimer tmp = this->nmeFrameTimer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(905)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(905)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(905)
	if ((tmp1)){
		HX_STACK_LINE(905)
		tmp2 = (int)0;
	}
	else{
		HX_STACK_LINE(905)
		::nme::app::FrameTimer tmp3 = this->nmeFrameTimer;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(905)
		tmp2 = tmp3->fps;
	}
	HX_STACK_LINE(905)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_frameRate,return )

::nme::display::Stage Stage_obj::get_stage( ){
	HX_STACK_FRAME("nme.display.Stage","get_stage",0x2ef6cdf1,"nme.display.Stage.get_stage","nme/display/Stage.hx",910,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(910)
	return hx::ObjectPtr<OBJ_>(this);
}


Void Stage_obj::resize( int width,int height){
{
		HX_STACK_FRAME("nme.display.Stage","resize",0xa250b198,"nme.display.Stage.resize","nme/display/Stage.hx",913,0x3f854bb6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(913)
		::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(913)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(913)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(913)
		tmp->resize(tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage_obj,resize,(void))

bool Stage_obj::get_stageFocusRect( ){
	HX_STACK_FRAME("nme.display.Stage","get_stageFocusRect",0xaf67f0eb,"nme.display.Stage.get_stageFocusRect","nme/display/Stage.hx",915,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(915)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(915)
	bool tmp1 = ::nme::display::Stage_obj::nme_stage_get_focus_rect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(915)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageFocusRect,return )

bool Stage_obj::set_stageFocusRect( bool inVal){
	HX_STACK_FRAME("nme.display.Stage","set_stageFocusRect",0x8c17235f,"nme.display.Stage.set_stageFocusRect","nme/display/Stage.hx",917,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(918)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(918)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(918)
	::nme::display::Stage_obj::nme_stage_set_focus_rect(tmp,tmp1);
	HX_STACK_LINE(919)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(919)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_stageFocusRect,return )

bool Stage_obj::get_active( ){
	HX_STACK_FRAME("nme.display.Stage","get_active",0xf951ab33,"nme.display.Stage.get_active","nme/display/Stage.hx",921,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(921)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_active,return )

::nme::display::StageAlign Stage_obj::get_align( ){
	HX_STACK_FRAME("nme.display.Stage","get_align",0xcc7cb9f8,"nme.display.Stage.get_align","nme/display/Stage.hx",922,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	::nme::display::StageAlign tmp1 = tmp->get_align();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_align,return )

::nme::display::StageAlign Stage_obj::set_align( ::nme::display::StageAlign inMode){
	HX_STACK_FRAME("nme.display.Stage","set_align",0xafcda604,"nme.display.Stage.set_align","nme/display/Stage.hx",923,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMode,"inMode")
	HX_STACK_LINE(923)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(923)
	::nme::display::StageAlign tmp1 = inMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(923)
	::nme::display::StageAlign tmp2 = tmp->set_align(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(923)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_align,return )

::nme::display::StageDisplayState Stage_obj::get_displayState( ){
	HX_STACK_FRAME("nme.display.Stage","get_displayState",0xd008059c,"nme.display.Stage.get_displayState","nme/display/Stage.hx",924,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(924)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(924)
	::nme::display::StageDisplayState tmp1 = tmp->get_displayState();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(924)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_displayState,return )

::nme::display::StageDisplayState Stage_obj::set_displayState( ::nme::display::StageDisplayState inState){
	HX_STACK_FRAME("nme.display.Stage","set_displayState",0x2649f310,"nme.display.Stage.set_displayState","nme/display/Stage.hx",925,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inState,"inState")
	HX_STACK_LINE(925)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(925)
	::nme::display::StageDisplayState tmp1 = inState;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(925)
	::nme::display::StageDisplayState tmp2 = tmp->set_displayState(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(925)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_displayState,return )

Float Stage_obj::get_dpiScale( ){
	HX_STACK_FRAME("nme.display.Stage","get_dpiScale",0xdc58089a,"nme.display.Stage.get_dpiScale","nme/display/Stage.hx",926,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(926)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(926)
	Float tmp1 = tmp->get_dpiScale();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(926)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_dpiScale,return )

::nme::display::StageQuality Stage_obj::get_quality( ){
	HX_STACK_FRAME("nme.display.Stage","get_quality",0x0b3cdab2,"nme.display.Stage.get_quality","nme/display/Stage.hx",927,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(927)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(927)
	::nme::display::StageQuality tmp1 = tmp->get_quality();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(927)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_quality,return )

::nme::display::StageQuality Stage_obj::set_quality( ::nme::display::StageQuality inQuality){
	HX_STACK_FRAME("nme.display.Stage","set_quality",0x15a9e1be,"nme.display.Stage.set_quality","nme/display/Stage.hx",928,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inQuality,"inQuality")
	HX_STACK_LINE(928)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(928)
	::nme::display::StageQuality tmp1 = inQuality;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(928)
	::nme::display::StageQuality tmp2 = tmp->set_quality(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(928)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_quality,return )

::nme::display::StageScaleMode Stage_obj::get_scaleMode( ){
	HX_STACK_FRAME("nme.display.Stage","get_scaleMode",0x311c53c0,"nme.display.Stage.get_scaleMode","nme/display/Stage.hx",929,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(929)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(929)
	::nme::display::StageScaleMode tmp1 = tmp->get_scaleMode();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(929)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_scaleMode,return )

::nme::display::StageScaleMode Stage_obj::set_scaleMode( ::nme::display::StageScaleMode inMode){
	HX_STACK_FRAME("nme.display.Stage","set_scaleMode",0x762235cc,"nme.display.Stage.set_scaleMode","nme/display/Stage.hx",930,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMode,"inMode")
	HX_STACK_LINE(930)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(930)
	::nme::display::StageScaleMode tmp1 = inMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(930)
	::nme::display::StageScaleMode tmp2 = tmp->set_scaleMode(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(930)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_scaleMode,return )

int Stage_obj::get_stageHeight( ){
	HX_STACK_FRAME("nme.display.Stage","get_stageHeight",0xd823d4b8,"nme.display.Stage.get_stageHeight","nme/display/Stage.hx",931,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(931)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(931)
	int tmp1 = tmp->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(931)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageHeight,return )

int Stage_obj::get_stageWidth( ){
	HX_STACK_FRAME("nme.display.Stage","get_stageWidth",0xb7d42e55,"nme.display.Stage.get_stageWidth","nme/display/Stage.hx",932,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(932)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(932)
	int tmp1 = tmp->get_width();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(932)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_stageWidth,return )

bool Stage_obj::get_isOpenGL( ){
	HX_STACK_FRAME("nme.display.Stage","get_isOpenGL",0xc5c842a6,"nme.display.Stage.get_isOpenGL","nme/display/Stage.hx",933,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(933)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(933)
	bool tmp1 = tmp->get_isOpenGL();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(933)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_isOpenGL,return )

Dynamic Stage_obj::get_renderRequest( ){
	HX_STACK_FRAME("nme.display.Stage","get_renderRequest",0xb010a0cc,"nme.display.Stage.get_renderRequest","nme/display/Stage.hx",934,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(934)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(934)
	Dynamic tmp1 = tmp->renderRequest;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(934)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Stage_obj,get_renderRequest,return )

Dynamic Stage_obj::set_renderRequest( Dynamic f){
	HX_STACK_FRAME("nme.display.Stage","set_renderRequest",0xd37e78d8,"nme.display.Stage.set_renderRequest","nme/display/Stage.hx",935,0x3f854bb6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(935)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(935)
	Dynamic tmp1 = tmp->renderRequest = f;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(935)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,set_renderRequest,return )

Float Stage_obj::nmeEarlyWakeup;

int Stage_obj::OrientationPortrait;

int Stage_obj::OrientationPortraitUpsideDown;

int Stage_obj::OrientationLandscapeRight;

int Stage_obj::OrientationLandscapeLeft;

int Stage_obj::OrientationFaceUp;

int Stage_obj::OrientationFaceDown;

int Stage_obj::OrientationPortraitAny;

int Stage_obj::OrientationLandscapeAny;

int Stage_obj::OrientationAny;

int Stage_obj::OrientationUseFunction;

int Stage_obj::efLeftDown;

int Stage_obj::efShiftDown;

int Stage_obj::efCtrlDown;

int Stage_obj::efAltDown;

int Stage_obj::efCommandDown;

int Stage_obj::efLocationRight;

int Stage_obj::efNoNativeClick;

Array< ::String > Stage_obj::nmeMouseChanges;

Array< ::String > Stage_obj::nmeTouchChanges;

Array< ::String > Stage_obj::sClickEvents;

Array< ::String > Stage_obj::sDownEvents;

Array< ::String > Stage_obj::sUpEvents;

bool Stage_obj::nmeQuitting;

HX_BEGIN_DEFAULT_FUNC(__default_getOrientation,Stage_obj)
int run(){
	HX_STACK_FRAME("nme.display.Stage","getOrientation",0xa9c8dd7e,"nme.display.Stage.getOrientation","nme/display/Stage.hx",183,0x3f854bb6)
	HX_STACK_LINE(184)
	int tmp = ::nme::display::Stage_obj::nme_stage_get_orientation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getOrientation;

HX_BEGIN_DEFAULT_FUNC(__default_getNormalOrientation,Stage_obj)
int run(){
	HX_STACK_FRAME("nme.display.Stage","getNormalOrientation",0x4bea2d17,"nme.display.Stage.getNormalOrientation","nme/display/Stage.hx",188,0x3f854bb6)
	HX_STACK_LINE(189)
	int tmp = ::nme::display::Stage_obj::nme_stage_get_normal_orientation();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	return tmp;
}
HX_END_LOCAL_FUNC0(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::getNormalOrientation;

Void Stage_obj::setFixedOrientation( int inOrientation){
{
		HX_STACK_FRAME("nme.display.Stage","setFixedOrientation",0x89bae75a,"nme.display.Stage.setFixedOrientation","nme/display/Stage.hx",869,0x3f854bb6)
		HX_STACK_ARG(inOrientation,"inOrientation")
		HX_STACK_LINE(870)
		int tmp = inOrientation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(870)
		::nme::app::Application_obj::setFixedOrientation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Stage_obj,setFixedOrientation,(void))

HX_BEGIN_DEFAULT_FUNC(__default_shouldRotateInterface,Stage_obj)
bool run(int inOrientation){
	HX_STACK_FRAME("nme.display.Stage","shouldRotateInterface",0x09de19c7,"nme.display.Stage.shouldRotateInterface","nme/display/Stage.hx",875,0x3f854bb6)
	HX_STACK_ARG(inOrientation,"inOrientation")
	HX_STACK_LINE(875)
	return true;
}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

Dynamic Stage_obj::shouldRotateInterface;

Dynamic Stage_obj::nme_render_stage;

Dynamic Stage_obj::nme_set_render_gc_free;

Dynamic Stage_obj::nme_stage_get_focus_id;

Dynamic Stage_obj::nme_stage_set_focus;

Dynamic Stage_obj::nme_stage_get_focus_rect;

Dynamic Stage_obj::nme_stage_set_focus_rect;

Dynamic Stage_obj::nme_stage_resize_window;

Dynamic Stage_obj::nme_stage_show_cursor;

Dynamic Stage_obj::nme_stage_get_orientation;

Dynamic Stage_obj::nme_stage_get_normal_orientation;

Dynamic Stage_obj::nme_stage_check_cache;


Stage_obj::Stage_obj()
{
}

void Stage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_MARK_MEMBER_NAME(invalid,"invalid");
	HX_MARK_MEMBER_NAME(stageVideos,"stageVideos");
	HX_MARK_MEMBER_NAME(nmeJoyAxisData,"nmeJoyAxisData");
	HX_MARK_MEMBER_NAME(nmeDragBounds,"nmeDragBounds");
	HX_MARK_MEMBER_NAME(nmeDragObject,"nmeDragObject");
	HX_MARK_MEMBER_NAME(nmeDragOffsetX,"nmeDragOffsetX");
	HX_MARK_MEMBER_NAME(nmeDragOffsetY,"nmeDragOffsetY");
	HX_MARK_MEMBER_NAME(nmeFocusOverObjects,"nmeFocusOverObjects");
	HX_MARK_MEMBER_NAME(nmeFramePeriod,"nmeFramePeriod");
	HX_MARK_MEMBER_NAME(nmeLastClickTime,"nmeLastClickTime");
	HX_MARK_MEMBER_NAME(nmeLastDown,"nmeLastDown");
	HX_MARK_MEMBER_NAME(nmeLastRender,"nmeLastRender");
	HX_MARK_MEMBER_NAME(nmeMouseOverObjects,"nmeMouseOverObjects");
	HX_MARK_MEMBER_NAME(nmeTouchInfo,"nmeTouchInfo");
	HX_MARK_MEMBER_NAME(nmeFrameTimer,"nmeFrameTimer");
	HX_MARK_MEMBER_NAME(nmeEnterFrameEvent,"nmeEnterFrameEvent");
	HX_MARK_MEMBER_NAME(nmeRenderEvent,"nmeRenderEvent");
	HX_MARK_MEMBER_NAME(nmePreemptiveGcFreq,"nmePreemptiveGcFreq");
	HX_MARK_MEMBER_NAME(nmePreemptiveGcSince,"nmePreemptiveGcSince");
	HX_MARK_MEMBER_NAME(nmeCollectionLock,"nmeCollectionLock");
	HX_MARK_MEMBER_NAME(nmeCollectionAgency,"nmeCollectionAgency");
	HX_MARK_MEMBER_NAME(nmeFrameAlloc,"nmeFrameAlloc");
	HX_MARK_MEMBER_NAME(nmeLastCurrentMemory,"nmeLastCurrentMemory");
	HX_MARK_MEMBER_NAME(nmeLastPreempt,"nmeLastPreempt");
	HX_MARK_MEMBER_NAME(nmeFrameMemIndex,"nmeFrameMemIndex");
	::nme::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(pauseWhenDeactivated,"pauseWhenDeactivated");
	HX_VISIT_MEMBER_NAME(invalid,"invalid");
	HX_VISIT_MEMBER_NAME(stageVideos,"stageVideos");
	HX_VISIT_MEMBER_NAME(nmeJoyAxisData,"nmeJoyAxisData");
	HX_VISIT_MEMBER_NAME(nmeDragBounds,"nmeDragBounds");
	HX_VISIT_MEMBER_NAME(nmeDragObject,"nmeDragObject");
	HX_VISIT_MEMBER_NAME(nmeDragOffsetX,"nmeDragOffsetX");
	HX_VISIT_MEMBER_NAME(nmeDragOffsetY,"nmeDragOffsetY");
	HX_VISIT_MEMBER_NAME(nmeFocusOverObjects,"nmeFocusOverObjects");
	HX_VISIT_MEMBER_NAME(nmeFramePeriod,"nmeFramePeriod");
	HX_VISIT_MEMBER_NAME(nmeLastClickTime,"nmeLastClickTime");
	HX_VISIT_MEMBER_NAME(nmeLastDown,"nmeLastDown");
	HX_VISIT_MEMBER_NAME(nmeLastRender,"nmeLastRender");
	HX_VISIT_MEMBER_NAME(nmeMouseOverObjects,"nmeMouseOverObjects");
	HX_VISIT_MEMBER_NAME(nmeTouchInfo,"nmeTouchInfo");
	HX_VISIT_MEMBER_NAME(nmeFrameTimer,"nmeFrameTimer");
	HX_VISIT_MEMBER_NAME(nmeEnterFrameEvent,"nmeEnterFrameEvent");
	HX_VISIT_MEMBER_NAME(nmeRenderEvent,"nmeRenderEvent");
	HX_VISIT_MEMBER_NAME(nmePreemptiveGcFreq,"nmePreemptiveGcFreq");
	HX_VISIT_MEMBER_NAME(nmePreemptiveGcSince,"nmePreemptiveGcSince");
	HX_VISIT_MEMBER_NAME(nmeCollectionLock,"nmeCollectionLock");
	HX_VISIT_MEMBER_NAME(nmeCollectionAgency,"nmeCollectionAgency");
	HX_VISIT_MEMBER_NAME(nmeFrameAlloc,"nmeFrameAlloc");
	HX_VISIT_MEMBER_NAME(nmeLastCurrentMemory,"nmeLastCurrentMemory");
	HX_VISIT_MEMBER_NAME(nmeLastPreempt,"nmeLastPreempt");
	HX_VISIT_MEMBER_NAME(nmeFrameMemIndex,"nmeFrameMemIndex");
	::nme::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp != hx::paccNever) return get_align(); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp != hx::paccNever) return get_focus(); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp != hx::paccNever) return get_color(); }
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"active") ) { if (inCallProp != hx::paccNever) return get_active(); }
		if (HX_FIELD_EQ(inName,"onQuit") ) { if (inCallProp != hx::paccNever) return get_onQuit(); }
		if (HX_FIELD_EQ(inName,"onText") ) { return onText_dyn(); }
		if (HX_FIELD_EQ(inName,"onPoll") ) { return onPoll_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp != hx::paccNever) return get_quality(); }
		if (HX_FIELD_EQ(inName,"invalid") ) { return invalid; }
		if (HX_FIELD_EQ(inName,"onMouse") ) { return onMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"onTouch") ) { return onTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDrag") ) { return nmeDrag_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpiScale") ) { if (inCallProp != hx::paccNever) return get_dpiScale(); }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { if (inCallProp != hx::paccNever) return get_isOpenGL(); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		if (HX_FIELD_EQ(inName,"onRender") ) { return onRender_dyn(); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"onActive") ) { return onActive_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp != hx::paccNever) return get_frameRate(); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp != hx::paccNever) return get_scaleMode(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"get_focus") ) { return get_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stageWidth") ) { if (inCallProp != hx::paccNever) return get_stageWidth(); }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_onQuit") ) { return get_onQuit_dyn(); }
		if (HX_FIELD_EQ(inName,"set_onQuit") ) { return set_onQuit_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoystick") ) { return onJoystick_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnTouch") ) { return nmeOnTouch_dyn(); }
		if (HX_FIELD_EQ(inName,"showCursor") ) { return showCursor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_active") ) { return get_active_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageHeight") ) { if (inCallProp != hx::paccNever) return get_stageHeight(); }
		if (HX_FIELD_EQ(inName,"stageVideos") ) { return stageVideos; }
		if (HX_FIELD_EQ(inName,"nmeLastDown") ) { return nmeLastDown; }
		if (HX_FIELD_EQ(inName,"getNextWake") ) { return getNextWake_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeStopDrag") ) { return nmeStopDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp != hx::paccNever) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"nmeTouchInfo") ) { return nmeTouchInfo; }
		if (HX_FIELD_EQ(inName,"onInputFocus") ) { return onInputFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"onSysMessage") ) { return onSysMessage_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeStartDrag") ) { return nmeStartDrag_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dpiScale") ) { return get_dpiScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isOpenGL") ) { return get_isOpenGL_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { if (inCallProp != hx::paccNever) return get_renderRequest(); }
		if (HX_FIELD_EQ(inName,"nmeDragBounds") ) { return nmeDragBounds; }
		if (HX_FIELD_EQ(inName,"nmeDragObject") ) { return nmeDragObject; }
		if (HX_FIELD_EQ(inName,"nmeLastRender") ) { return nmeLastRender; }
		if (HX_FIELD_EQ(inName,"nmeFrameTimer") ) { return nmeFrameTimer; }
		if (HX_FIELD_EQ(inName,"nmeFrameAlloc") ) { return nmeFrameAlloc; }
		if (HX_FIELD_EQ(inName,"onContextLost") ) { return onContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"set_frameRate") ) { return set_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_frameRate") ) { return get_frameRate_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { return get_scaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { if (inCallProp != hx::paccNever) return get_stageFocusRect(); }
		if (HX_FIELD_EQ(inName,"nmeJoyAxisData") ) { return nmeJoyAxisData; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetX") ) { return nmeDragOffsetX; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetY") ) { return nmeDragOffsetY; }
		if (HX_FIELD_EQ(inName,"nmeFramePeriod") ) { return nmeFramePeriod; }
		if (HX_FIELD_EQ(inName,"nmeRenderEvent") ) { return nmeRenderEvent; }
		if (HX_FIELD_EQ(inName,"nmeLastPreempt") ) { return nmeLastPreempt; }
		if (HX_FIELD_EQ(inName,"nmeCheckInOuts") ) { return nmeCheckInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageWidth") ) { return get_stageWidth_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onRotateRequest") ) { return onRotateRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeNextFrameDue") ) { return nmeNextFrameDue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageHeight") ) { return get_stageHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeLastClickTime") ) { return nmeLastClickTime; }
		if (HX_FIELD_EQ(inName,"nmeFrameMemIndex") ) { return nmeFrameMemIndex; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeCollectionLock") ) { return nmeCollectionLock; }
		if (HX_FIELD_EQ(inName,"get_renderRequest") ) { return get_renderRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"set_renderRequest") ) { return set_renderRequest_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeEnterFrameEvent") ) { return nmeEnterFrameEvent; }
		if (HX_FIELD_EQ(inName,"isDisplayListDirty") ) { return isDisplayListDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stageFocusRect") ) { return get_stageFocusRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stageFocusRect") ) { return set_stageFocusRect_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nmeFocusOverObjects") ) { return nmeFocusOverObjects; }
		if (HX_FIELD_EQ(inName,"nmeMouseOverObjects") ) { return nmeMouseOverObjects; }
		if (HX_FIELD_EQ(inName,"nmePreemptiveGcFreq") ) { return nmePreemptiveGcFreq; }
		if (HX_FIELD_EQ(inName,"nmeCollectionAgency") ) { return nmeCollectionAgency; }
		if (HX_FIELD_EQ(inName,"nmeCheckFocusInOuts") ) { return nmeCheckFocusInOuts_dyn(); }
		if (HX_FIELD_EQ(inName,"setSmartPreemtiveGc") ) { return setSmartPreemtiveGc_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { return pauseWhenDeactivated; }
		if (HX_FIELD_EQ(inName,"nmePreemptiveGcSince") ) { return nmePreemptiveGcSince; }
		if (HX_FIELD_EQ(inName,"nmeLastCurrentMemory") ) { return nmeLastCurrentMemory; }
		if (HX_FIELD_EQ(inName,"onUnhandledException") ) { return onUnhandledException_dyn(); }
		if (HX_FIELD_EQ(inName,"onDisplayObjectFocus") ) { return onDisplayObjectFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"set_opaqueBackground") ) { return set_opaqueBackground_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"setPreemtiveGcFrequency") ) { return setPreemtiveGcFrequency_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Stage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"efAltDown") ) { outValue = efAltDown; return true;  }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { outValue = sUpEvents; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { outValue = efLeftDown; return true;  }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { outValue = efCtrlDown; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { outValue = efShiftDown; return true;  }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { outValue = sDownEvents; return true;  }
		if (HX_FIELD_EQ(inName,"nmeQuitting") ) { outValue = nmeQuitting; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { outValue = sClickEvents; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { outValue = efCommandDown; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeEarlyWakeup") ) { outValue = nmeEarlyWakeup; return true;  }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { outValue = getOrientation; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { outValue = efLocationRight; return true;  }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { outValue = efNoNativeClick; return true;  }
		if (HX_FIELD_EQ(inName,"nmeMouseChanges") ) { outValue = nmeMouseChanges; return true;  }
		if (HX_FIELD_EQ(inName,"nmeTouchChanges") ) { outValue = nmeTouchChanges; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { outValue = nme_render_stage; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setFixedOrientation") ) { outValue = setFixedOrientation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { outValue = nme_stage_set_focus; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { outValue = getNormalOrientation; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { outValue = shouldRotateInterface; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { outValue = nme_stage_show_cursor; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_check_cache") ) { outValue = nme_stage_check_cache; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_set_render_gc_free") ) { outValue = nme_set_render_gc_free; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { outValue = nme_stage_get_focus_id; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { outValue = nme_stage_resize_window; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { outValue = nme_stage_get_focus_rect; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { outValue = nme_stage_set_focus_rect; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { outValue = nme_stage_get_orientation; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { outValue = nme_stage_get_normal_orientation; return true;  }
	}
	return false;
}

Dynamic Stage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp != hx::paccNever) return set_align(inValue); }
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp != hx::paccNever) return set_focus(inValue); }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp != hx::paccNever) return set_color(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::nme::app::Window >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onQuit") ) { if (inCallProp != hx::paccNever) return set_onQuit(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp != hx::paccNever) return set_quality(inValue); }
		if (HX_FIELD_EQ(inName,"invalid") ) { invalid=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { if (inCallProp != hx::paccNever) return set_frameRate(inValue); }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp != hx::paccNever) return set_scaleMode(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageVideos") ) { stageVideos=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastDown") ) { nmeLastDown=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp != hx::paccNever) return set_displayState(inValue); }
		if (HX_FIELD_EQ(inName,"nmeTouchInfo") ) { nmeTouchInfo=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { if (inCallProp != hx::paccNever) return set_renderRequest(inValue); }
		if (HX_FIELD_EQ(inName,"nmeDragBounds") ) { nmeDragBounds=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragObject") ) { nmeDragObject=inValue.Cast< ::nme::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastRender") ) { nmeLastRender=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFrameTimer") ) { nmeFrameTimer=inValue.Cast< ::nme::app::FrameTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFrameAlloc") ) { nmeFrameAlloc=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"stageFocusRect") ) { if (inCallProp != hx::paccNever) return set_stageFocusRect(inValue); }
		if (HX_FIELD_EQ(inName,"nmeJoyAxisData") ) { nmeJoyAxisData=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetX") ) { nmeDragOffsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeDragOffsetY") ) { nmeDragOffsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFramePeriod") ) { nmeFramePeriod=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeRenderEvent") ) { nmeRenderEvent=inValue.Cast< ::nme::events::Event >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastPreempt") ) { nmeLastPreempt=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeLastClickTime") ) { nmeLastClickTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFrameMemIndex") ) { nmeFrameMemIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeCollectionLock") ) { nmeCollectionLock=inValue.Cast< ::cpp::vm::Lock >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeEnterFrameEvent") ) { nmeEnterFrameEvent=inValue.Cast< ::nme::events::Event >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nmeFocusOverObjects") ) { nmeFocusOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeMouseOverObjects") ) { nmeMouseOverObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmePreemptiveGcFreq") ) { nmePreemptiveGcFreq=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeCollectionAgency") ) { nmeCollectionAgency=inValue.Cast< ::cpp::vm::Thread >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"pauseWhenDeactivated") ) { pauseWhenDeactivated=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmePreemptiveGcSince") ) { nmePreemptiveGcSince=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLastCurrentMemory") ) { nmeLastCurrentMemory=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Stage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"efAltDown") ) { efAltDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"sUpEvents") ) { sUpEvents=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"efLeftDown") ) { efLeftDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"efCtrlDown") ) { efCtrlDown=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"efShiftDown") ) { efShiftDown=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"sDownEvents") ) { sDownEvents=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"nmeQuitting") ) { nmeQuitting=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sClickEvents") ) { sClickEvents=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"efCommandDown") ) { efCommandDown=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeEarlyWakeup") ) { nmeEarlyWakeup=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"getOrientation") ) { getOrientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"efLocationRight") ) { efLocationRight=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"efNoNativeClick") ) { efNoNativeClick=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"nmeMouseChanges") ) { nmeMouseChanges=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"nmeTouchChanges") ) { nmeTouchChanges=ioValue.Cast< Array< ::String > >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_render_stage") ) { nme_render_stage=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus") ) { nme_stage_set_focus=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getNormalOrientation") ) { getNormalOrientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"shouldRotateInterface") ) { shouldRotateInterface=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { nme_stage_show_cursor=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_check_cache") ) { nme_stage_check_cache=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_set_render_gc_free") ) { nme_set_render_gc_free=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_id") ) { nme_stage_get_focus_id=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { nme_stage_resize_window=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_stage_get_focus_rect") ) { nme_stage_get_focus_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_focus_rect") ) { nme_stage_set_focus_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { nme_stage_get_orientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { nme_stage_get_normal_orientation=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Stage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90"));
	outFields->push(HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79"));
	outFields->push(HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("stageFocusRect","\x7e","\xd2","\x81","\x74"));
	outFields->push(HX_HCSTRING("stageHeight","\x45","\x89","\x45","\x95"));
	outFields->push(HX_HCSTRING("stageWidth","\x68","\x0a","\xb3","\x1d"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b"));
	outFields->push(HX_HCSTRING("stageVideos","\xf6","\x58","\x8f","\x78"));
	outFields->push(HX_HCSTRING("nmeJoyAxisData","\xf9","\xdd","\x4d","\x02"));
	outFields->push(HX_HCSTRING("nmeDragBounds","\x6f","\x84","\x32","\xd4"));
	outFields->push(HX_HCSTRING("nmeDragObject","\xb9","\x7c","\x54","\x83"));
	outFields->push(HX_HCSTRING("nmeDragOffsetX","\x2b","\x46","\xae","\xbb"));
	outFields->push(HX_HCSTRING("nmeDragOffsetY","\x2c","\x46","\xae","\xbb"));
	outFields->push(HX_HCSTRING("nmeFocusOverObjects","\x4e","\xc8","\xed","\xd5"));
	outFields->push(HX_HCSTRING("nmeFramePeriod","\x68","\x47","\x8b","\x47"));
	outFields->push(HX_HCSTRING("nmeLastClickTime","\x19","\xf8","\x5b","\x46"));
	outFields->push(HX_HCSTRING("nmeLastDown","\x3e","\x5b","\xee","\x27"));
	outFields->push(HX_HCSTRING("nmeLastRender","\x32","\x3d","\xad","\x95"));
	outFields->push(HX_HCSTRING("nmeMouseOverObjects","\x21","\xcb","\x75","\xd4"));
	outFields->push(HX_HCSTRING("nmeTouchInfo","\xa7","\xb7","\x50","\xa9"));
	outFields->push(HX_HCSTRING("nmeFrameTimer","\x3e","\xe3","\x04","\xb9"));
	outFields->push(HX_HCSTRING("nmeEnterFrameEvent","\x3f","\x0b","\x74","\x4b"));
	outFields->push(HX_HCSTRING("nmeRenderEvent","\x3e","\x0f","\x9e","\x6f"));
	outFields->push(HX_HCSTRING("nmePreemptiveGcFreq","\x63","\xee","\x33","\xf3"));
	outFields->push(HX_HCSTRING("nmePreemptiveGcSince","\xaf","\x0f","\x86","\x50"));
	outFields->push(HX_HCSTRING("nmeCollectionLock","\x4f","\x77","\x1e","\x7c"));
	outFields->push(HX_HCSTRING("nmeCollectionAgency","\xa9","\x97","\x59","\x9a"));
	outFields->push(HX_HCSTRING("nmeFrameAlloc","\xee","\xc7","\x62","\xca"));
	outFields->push(HX_HCSTRING("nmeLastCurrentMemory","\xbe","\xad","\x7e","\x14"));
	outFields->push(HX_HCSTRING("nmeLastPreempt","\xb3","\x20","\x75","\x13"));
	outFields->push(HX_HCSTRING("nmeFrameMemIndex","\xe4","\x5e","\x9e","\x9d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::app::Window*/ ,(int)offsetof(Stage_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsBool,(int)offsetof(Stage_obj,pauseWhenDeactivated),HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d")},
	{hx::fsBool,(int)offsetof(Stage_obj,invalid),HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,stageVideos),HX_HCSTRING("stageVideos","\xf6","\x58","\x8f","\x78")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,nmeJoyAxisData),HX_HCSTRING("nmeJoyAxisData","\xf9","\xdd","\x4d","\x02")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(Stage_obj,nmeDragBounds),HX_HCSTRING("nmeDragBounds","\x6f","\x84","\x32","\xd4")},
	{hx::fsObject /*::nme::display::Sprite*/ ,(int)offsetof(Stage_obj,nmeDragObject),HX_HCSTRING("nmeDragObject","\xb9","\x7c","\x54","\x83")},
	{hx::fsFloat,(int)offsetof(Stage_obj,nmeDragOffsetX),HX_HCSTRING("nmeDragOffsetX","\x2b","\x46","\xae","\xbb")},
	{hx::fsFloat,(int)offsetof(Stage_obj,nmeDragOffsetY),HX_HCSTRING("nmeDragOffsetY","\x2c","\x46","\xae","\xbb")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,nmeFocusOverObjects),HX_HCSTRING("nmeFocusOverObjects","\x4e","\xc8","\xed","\xd5")},
	{hx::fsFloat,(int)offsetof(Stage_obj,nmeFramePeriod),HX_HCSTRING("nmeFramePeriod","\x68","\x47","\x8b","\x47")},
	{hx::fsFloat,(int)offsetof(Stage_obj,nmeLastClickTime),HX_HCSTRING("nmeLastClickTime","\x19","\xf8","\x5b","\x46")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,nmeLastDown),HX_HCSTRING("nmeLastDown","\x3e","\x5b","\xee","\x27")},
	{hx::fsFloat,(int)offsetof(Stage_obj,nmeLastRender),HX_HCSTRING("nmeLastRender","\x32","\x3d","\xad","\x95")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Stage_obj,nmeMouseOverObjects),HX_HCSTRING("nmeMouseOverObjects","\x21","\xcb","\x75","\xd4")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Stage_obj,nmeTouchInfo),HX_HCSTRING("nmeTouchInfo","\xa7","\xb7","\x50","\xa9")},
	{hx::fsObject /*::nme::app::FrameTimer*/ ,(int)offsetof(Stage_obj,nmeFrameTimer),HX_HCSTRING("nmeFrameTimer","\x3e","\xe3","\x04","\xb9")},
	{hx::fsObject /*::nme::events::Event*/ ,(int)offsetof(Stage_obj,nmeEnterFrameEvent),HX_HCSTRING("nmeEnterFrameEvent","\x3f","\x0b","\x74","\x4b")},
	{hx::fsObject /*::nme::events::Event*/ ,(int)offsetof(Stage_obj,nmeRenderEvent),HX_HCSTRING("nmeRenderEvent","\x3e","\x0f","\x9e","\x6f")},
	{hx::fsInt,(int)offsetof(Stage_obj,nmePreemptiveGcFreq),HX_HCSTRING("nmePreemptiveGcFreq","\x63","\xee","\x33","\xf3")},
	{hx::fsInt,(int)offsetof(Stage_obj,nmePreemptiveGcSince),HX_HCSTRING("nmePreemptiveGcSince","\xaf","\x0f","\x86","\x50")},
	{hx::fsObject /*::cpp::vm::Lock*/ ,(int)offsetof(Stage_obj,nmeCollectionLock),HX_HCSTRING("nmeCollectionLock","\x4f","\x77","\x1e","\x7c")},
	{hx::fsObject /*::cpp::vm::Thread*/ ,(int)offsetof(Stage_obj,nmeCollectionAgency),HX_HCSTRING("nmeCollectionAgency","\xa9","\x97","\x59","\x9a")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Stage_obj,nmeFrameAlloc),HX_HCSTRING("nmeFrameAlloc","\xee","\xc7","\x62","\xca")},
	{hx::fsInt,(int)offsetof(Stage_obj,nmeLastCurrentMemory),HX_HCSTRING("nmeLastCurrentMemory","\xbe","\xad","\x7e","\x14")},
	{hx::fsBool,(int)offsetof(Stage_obj,nmeLastPreempt),HX_HCSTRING("nmeLastPreempt","\xb3","\x20","\x75","\x13")},
	{hx::fsInt,(int)offsetof(Stage_obj,nmeFrameMemIndex),HX_HCSTRING("nmeFrameMemIndex","\xe4","\x5e","\x9e","\x9d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &Stage_obj::nmeEarlyWakeup,HX_HCSTRING("nmeEarlyWakeup","\xdc","\x66","\x7f","\x84")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortrait,HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortraitUpsideDown,HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeRight,HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeLeft,HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43")},
	{hx::fsInt,(void *) &Stage_obj::OrientationFaceUp,HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08")},
	{hx::fsInt,(void *) &Stage_obj::OrientationFaceDown,HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad")},
	{hx::fsInt,(void *) &Stage_obj::OrientationPortraitAny,HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f")},
	{hx::fsInt,(void *) &Stage_obj::OrientationLandscapeAny,HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c")},
	{hx::fsInt,(void *) &Stage_obj::OrientationAny,HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9")},
	{hx::fsInt,(void *) &Stage_obj::OrientationUseFunction,HX_HCSTRING("OrientationUseFunction","\xaf","\xe1","\xfb","\x12")},
	{hx::fsInt,(void *) &Stage_obj::efLeftDown,HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c")},
	{hx::fsInt,(void *) &Stage_obj::efShiftDown,HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4")},
	{hx::fsInt,(void *) &Stage_obj::efCtrlDown,HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa")},
	{hx::fsInt,(void *) &Stage_obj::efAltDown,HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8")},
	{hx::fsInt,(void *) &Stage_obj::efCommandDown,HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b")},
	{hx::fsInt,(void *) &Stage_obj::efLocationRight,HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc")},
	{hx::fsInt,(void *) &Stage_obj::efNoNativeClick,HX_HCSTRING("efNoNativeClick","\x4f","\x9b","\x88","\xae")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::nmeMouseChanges,HX_HCSTRING("nmeMouseChanges","\xc4","\xf5","\x60","\xe3")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::nmeTouchChanges,HX_HCSTRING("nmeTouchChanges","\x6a","\xbb","\x1d","\x2c")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sClickEvents,HX_HCSTRING("sClickEvents","\xce","\x7b","\x9c","\x32")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sDownEvents,HX_HCSTRING("sDownEvents","\x6e","\x63","\x09","\xae")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Stage_obj::sUpEvents,HX_HCSTRING("sUpEvents","\x67","\xc7","\x94","\xbc")},
	{hx::fsBool,(void *) &Stage_obj::nmeQuitting,HX_HCSTRING("nmeQuitting","\xa3","\xe9","\xbb","\xa5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::getOrientation,HX_HCSTRING("getOrientation","\xda","\x41","\x9d","\x85")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::getNormalOrientation,HX_HCSTRING("getNormalOrientation","\x73","\x3e","\xd8","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::shouldRotateInterface,HX_HCSTRING("shouldRotateInterface","\xeb","\x38","\x3f","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_render_stage,HX_HCSTRING("nme_render_stage","\xae","\x69","\x59","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_set_render_gc_free,HX_HCSTRING("nme_set_render_gc_free","\x9c","\x67","\xa0","\x58")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_get_focus_id,HX_HCSTRING("nme_stage_get_focus_id","\x25","\x17","\x5f","\x40")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_set_focus,HX_HCSTRING("nme_stage_set_focus","\x01","\x2e","\xaa","\xf9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_get_focus_rect,HX_HCSTRING("nme_stage_get_focus_rect","\xee","\xee","\xa2","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_set_focus_rect,HX_HCSTRING("nme_stage_set_focus_rect","\x62","\xd7","\xc2","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_resize_window,HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_show_cursor,HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_get_orientation,HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_get_normal_orientation,HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Stage_obj::nme_stage_check_cache,HX_HCSTRING("nme_stage_check_cache","\x91","\x43","\xa1","\x73")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("pauseWhenDeactivated","\xc0","\x1e","\xb2","\x2d"),
	HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b"),
	HX_HCSTRING("stageVideos","\xf6","\x58","\x8f","\x78"),
	HX_HCSTRING("nmeJoyAxisData","\xf9","\xdd","\x4d","\x02"),
	HX_HCSTRING("nmeDragBounds","\x6f","\x84","\x32","\xd4"),
	HX_HCSTRING("nmeDragObject","\xb9","\x7c","\x54","\x83"),
	HX_HCSTRING("nmeDragOffsetX","\x2b","\x46","\xae","\xbb"),
	HX_HCSTRING("nmeDragOffsetY","\x2c","\x46","\xae","\xbb"),
	HX_HCSTRING("nmeFocusOverObjects","\x4e","\xc8","\xed","\xd5"),
	HX_HCSTRING("nmeFramePeriod","\x68","\x47","\x8b","\x47"),
	HX_HCSTRING("nmeLastClickTime","\x19","\xf8","\x5b","\x46"),
	HX_HCSTRING("nmeLastDown","\x3e","\x5b","\xee","\x27"),
	HX_HCSTRING("nmeLastRender","\x32","\x3d","\xad","\x95"),
	HX_HCSTRING("nmeMouseOverObjects","\x21","\xcb","\x75","\xd4"),
	HX_HCSTRING("nmeTouchInfo","\xa7","\xb7","\x50","\xa9"),
	HX_HCSTRING("nmeFrameTimer","\x3e","\xe3","\x04","\xb9"),
	HX_HCSTRING("nmeEnterFrameEvent","\x3f","\x0b","\x74","\x4b"),
	HX_HCSTRING("nmeRenderEvent","\x3e","\x0f","\x9e","\x6f"),
	HX_HCSTRING("nmePreemptiveGcFreq","\x63","\xee","\x33","\xf3"),
	HX_HCSTRING("nmePreemptiveGcSince","\xaf","\x0f","\x86","\x50"),
	HX_HCSTRING("nmeCollectionLock","\x4f","\x77","\x1e","\x7c"),
	HX_HCSTRING("nmeCollectionAgency","\xa9","\x97","\x59","\x9a"),
	HX_HCSTRING("nmeFrameAlloc","\xee","\xc7","\x62","\xca"),
	HX_HCSTRING("nmeLastCurrentMemory","\xbe","\xad","\x7e","\x14"),
	HX_HCSTRING("nmeLastPreempt","\xb3","\x20","\x75","\x13"),
	HX_HCSTRING("nmeFrameMemIndex","\xe4","\x5e","\x9e","\x9d"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("isDisplayListDirty","\x3c","\x98","\xb6","\x60"),
	HX_HCSTRING("get_onQuit","\x57","\xb8","\x1b","\xde"),
	HX_HCSTRING("set_onQuit","\xcb","\x56","\x99","\xe1"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("nmeCheckFocusInOuts","\x20","\xc4","\x61","\x52"),
	HX_HCSTRING("nmeCheckInOuts","\xec","\xa7","\x57","\x96"),
	HX_HCSTRING("onText","\x6c","\xd5","\x83","\xef"),
	HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32"),
	HX_HCSTRING("onMouse","\x86","\xb4","\xa2","\xa2"),
	HX_HCSTRING("onUnhandledException","\x4b","\x0a","\xce","\xd2"),
	HX_HCSTRING("onTouch","\x20","\xb6","\x70","\xaa"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("onRender","\xd5","\x61","\xd6","\xe4"),
	HX_HCSTRING("onDisplayObjectFocus","\x76","\xa6","\xfb","\xcc"),
	HX_HCSTRING("onInputFocus","\x6d","\xc9","\x07","\x5b"),
	HX_HCSTRING("onRotateRequest","\x95","\x79","\x5d","\x92"),
	HX_HCSTRING("onChange","\xef","\x87","\x1f","\x97"),
	HX_HCSTRING("onActive","\x45","\x38","\xf3","\xf5"),
	HX_HCSTRING("onJoystick","\xfb","\xb4","\xa8","\x79"),
	HX_HCSTRING("onSysMessage","\x39","\xbe","\xdd","\x06"),
	HX_HCSTRING("onContextLost","\x94","\xac","\xa5","\x87"),
	HX_HCSTRING("nmeDrag","\x5a","\x4a","\xe1","\xc7"),
	HX_HCSTRING("nmeNextFrameDue","\x00","\x02","\xd8","\xfb"),
	HX_HCSTRING("set_opaqueBackground","\xac","\xd4","\xc9","\x05"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("nmeOnTouch","\x7a","\x1b","\x72","\x79"),
	HX_HCSTRING("onPoll","\xfe","\x86","\xe6","\xec"),
	HX_HCSTRING("getNextWake","\x6d","\xc5","\xb2","\x20"),
	HX_HCSTRING("nmeStartDrag","\x50","\x95","\x8c","\x99"),
	HX_HCSTRING("nmeStopDrag","\x7c","\xba","\x61","\xe7"),
	HX_HCSTRING("setPreemtiveGcFrequency","\x33","\x35","\x5a","\xf0"),
	HX_HCSTRING("setSmartPreemtiveGc","\xe4","\xbc","\xe3","\x08"),
	HX_HCSTRING("showCursor","\xb3","\x33","\x5d","\xa8"),
	HX_HCSTRING("get_focus","\x2f","\xbc","\x32","\x48"),
	HX_HCSTRING("set_focus","\x3b","\xa8","\x83","\x2b"),
	HX_HCSTRING("set_frameRate","\x90","\xc7","\x8e","\x3f"),
	HX_HCSTRING("get_frameRate","\x84","\xe5","\x88","\xfa"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("get_stageFocusRect","\x47","\xb3","\x1b","\x10"),
	HX_HCSTRING("set_stageFocusRect","\xbb","\xe5","\xca","\xec"),
	HX_HCSTRING("get_active","\x8f","\xb1","\xcd","\x06"),
	HX_HCSTRING("get_align","\x1c","\xb3","\x3a","\x65"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_dpiScale","\xf6","\x5d","\xa7","\x45"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("set_scaleMode","\xf0","\x90","\x3d","\x32"),
	HX_HCSTRING("get_stageHeight","\xdc","\x40","\x27","\x56"),
	HX_HCSTRING("get_stageWidth","\xb1","\x92","\xa8","\x93"),
	HX_HCSTRING("get_isOpenGL","\x02","\x98","\x17","\x2f"),
	HX_HCSTRING("get_renderRequest","\xf0","\x5d","\xe2","\x46"),
	HX_HCSTRING("set_renderRequest","\xfc","\x35","\x50","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeEarlyWakeup,"nmeEarlyWakeup");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationAny,"OrientationAny");
	HX_MARK_MEMBER_NAME(Stage_obj::OrientationUseFunction,"OrientationUseFunction");
	HX_MARK_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_MARK_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_MARK_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeMouseChanges,"nmeMouseChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeTouchChanges,"nmeTouchChanges");
	HX_MARK_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_MARK_MEMBER_NAME(Stage_obj::nmeQuitting,"nmeQuitting");
	HX_MARK_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_MARK_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_render_stage,"nme_render_stage");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_set_render_gc_free,"nme_set_render_gc_free");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_id,"nme_stage_get_focus_id");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus,"nme_stage_set_focus");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_focus_rect,"nme_stage_get_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_set_focus_rect,"nme_stage_set_focus_rect");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
	HX_MARK_MEMBER_NAME(Stage_obj::nme_stage_check_cache,"nme_stage_check_cache");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Stage_obj::nmeEarlyWakeup,"nmeEarlyWakeup");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortrait,"OrientationPortrait");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationAny,"OrientationAny");
	HX_VISIT_MEMBER_NAME(Stage_obj::OrientationUseFunction,"OrientationUseFunction");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLeftDown,"efLeftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efShiftDown,"efShiftDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCtrlDown,"efCtrlDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efAltDown,"efAltDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efCommandDown,"efCommandDown");
	HX_VISIT_MEMBER_NAME(Stage_obj::efLocationRight,"efLocationRight");
	HX_VISIT_MEMBER_NAME(Stage_obj::efNoNativeClick,"efNoNativeClick");
	HX_VISIT_MEMBER_NAME(Stage_obj::nmeMouseChanges,"nmeMouseChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::nmeTouchChanges,"nmeTouchChanges");
	HX_VISIT_MEMBER_NAME(Stage_obj::sClickEvents,"sClickEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sDownEvents,"sDownEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::sUpEvents,"sUpEvents");
	HX_VISIT_MEMBER_NAME(Stage_obj::nmeQuitting,"nmeQuitting");
	HX_VISIT_MEMBER_NAME(Stage_obj::getOrientation,"getOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::getNormalOrientation,"getNormalOrientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::shouldRotateInterface,"shouldRotateInterface");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_render_stage,"nme_render_stage");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_set_render_gc_free,"nme_set_render_gc_free");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_focus_id,"nme_stage_get_focus_id");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_focus,"nme_stage_set_focus");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_focus_rect,"nme_stage_get_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_set_focus_rect,"nme_stage_set_focus_rect");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
	HX_VISIT_MEMBER_NAME(Stage_obj::nme_stage_check_cache,"nme_stage_check_cache");
};

#endif

hx::Class Stage_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nmeEarlyWakeup","\xdc","\x66","\x7f","\x84"),
	HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0"),
	HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe"),
	HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a"),
	HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43"),
	HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08"),
	HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad"),
	HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f"),
	HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c"),
	HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9"),
	HX_HCSTRING("OrientationUseFunction","\xaf","\xe1","\xfb","\x12"),
	HX_HCSTRING("efLeftDown","\x8a","\x19","\xac","\x0c"),
	HX_HCSTRING("efShiftDown","\x63","\x6d","\xa6","\xe4"),
	HX_HCSTRING("efCtrlDown","\x2e","\xbc","\xbb","\xaa"),
	HX_HCSTRING("efAltDown","\xca","\x73","\x98","\xb8"),
	HX_HCSTRING("efCommandDown","\x6c","\x60","\x38","\x7b"),
	HX_HCSTRING("efLocationRight","\x46","\xfc","\x6b","\xcc"),
	HX_HCSTRING("efNoNativeClick","\x4f","\x9b","\x88","\xae"),
	HX_HCSTRING("nmeMouseChanges","\xc4","\xf5","\x60","\xe3"),
	HX_HCSTRING("nmeTouchChanges","\x6a","\xbb","\x1d","\x2c"),
	HX_HCSTRING("sClickEvents","\xce","\x7b","\x9c","\x32"),
	HX_HCSTRING("sDownEvents","\x6e","\x63","\x09","\xae"),
	HX_HCSTRING("sUpEvents","\x67","\xc7","\x94","\xbc"),
	HX_HCSTRING("nmeQuitting","\xa3","\xe9","\xbb","\xa5"),
	HX_HCSTRING("getOrientation","\xda","\x41","\x9d","\x85"),
	HX_HCSTRING("getNormalOrientation","\x73","\x3e","\xd8","\x12"),
	HX_HCSTRING("setFixedOrientation","\x7e","\x35","\x51","\xc6"),
	HX_HCSTRING("shouldRotateInterface","\xeb","\x38","\x3f","\x53"),
	HX_HCSTRING("nme_render_stage","\xae","\x69","\x59","\x71"),
	HX_HCSTRING("nme_set_render_gc_free","\x9c","\x67","\xa0","\x58"),
	HX_HCSTRING("nme_stage_get_focus_id","\x25","\x17","\x5f","\x40"),
	HX_HCSTRING("nme_stage_set_focus","\x01","\x2e","\xaa","\xf9"),
	HX_HCSTRING("nme_stage_get_focus_rect","\xee","\xee","\xa2","\x6d"),
	HX_HCSTRING("nme_stage_set_focus_rect","\x62","\xd7","\xc2","\x8d"),
	HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1"),
	HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45"),
	HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d"),
	HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30"),
	HX_HCSTRING("nme_stage_check_cache","\x91","\x43","\xa1","\x73"),
	::String(null()) };

void Stage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Stage","\x4a","\x7c","\x22","\xdf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Stage_obj::__GetStatic;
	__mClass->mSetStaticField = &Stage_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage_obj >;
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

void Stage_obj::__boot()
{
	nmeEarlyWakeup= ((Float)0.005);
	OrientationPortrait= (int)1;
	OrientationPortraitUpsideDown= (int)2;
	OrientationLandscapeRight= (int)3;
	OrientationLandscapeLeft= (int)4;
	OrientationFaceUp= (int)5;
	OrientationFaceDown= (int)6;
	OrientationPortraitAny= (int)7;
	OrientationLandscapeAny= (int)8;
	OrientationAny= (int)9;
	OrientationUseFunction= (int)-1;
	efLeftDown= (int)1;
	efShiftDown= (int)2;
	efCtrlDown= (int)4;
	efAltDown= (int)8;
	efCommandDown= (int)16;
	efLocationRight= (int)16384;
	efNoNativeClick= (int)65536;
struct _Function_0_1{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/Stage.hx",102,0x3f854bb6)
		{
			HX_STACK_LINE(102)
			::String tmp = ::nme::events::MouseEvent_obj::MOUSE_OUT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(102)
			::String tmp1 = ::nme::events::MouseEvent_obj::MOUSE_OVER;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(102)
			::String tmp2 = ::nme::events::MouseEvent_obj::ROLL_OUT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			::String tmp3 = ::nme::events::MouseEvent_obj::ROLL_OVER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			return Array_obj< ::String >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	nmeMouseChanges= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::String > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/Stage.hx",103,0x3f854bb6)
		{
			HX_STACK_LINE(103)
			::String tmp = ::nme::events::TouchEvent_obj::TOUCH_OUT;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(103)
			::String tmp1 = ::nme::events::TouchEvent_obj::TOUCH_OVER;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(103)
			::String tmp2 = ::nme::events::TouchEvent_obj::TOUCH_ROLL_OUT;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(103)
			::String tmp3 = ::nme::events::TouchEvent_obj::TOUCH_ROLL_OVER;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			return Array_obj< ::String >::__new().Add(tmp).Add(tmp1).Add(tmp2).Add(tmp3);
		}
		return null();
	}
};
	nmeTouchChanges= _Function_0_2::Block();
	sClickEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("click","\x48","\x7c","\x5e","\x48")).Add(HX_HCSTRING("middleClick","\xb3","\xe4","\xe5","\x43")).Add(HX_HCSTRING("rightClick","\xcc","\x62","\x23","\x4b"));
	sDownEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee")).Add(HX_HCSTRING("middleMouseDown","\x12","\x2b","\xfe","\x01")).Add(HX_HCSTRING("rightMouseDown","\xab","\x29","\xd7","\xcd"));
	sUpEvents= Array_obj< ::String >::__new().Add(HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0")).Add(HX_HCSTRING("middleMouseUp","\x0b","\x8d","\xf5","\x3a")).Add(HX_HCSTRING("rightMouseUp","\x64","\x83","\x21","\xab"));
	nmeQuitting= false;
	getOrientation = new __default_getOrientation;

	getNormalOrientation = new __default_getNormalOrientation;

	shouldRotateInterface = new __default_shouldRotateInterface;

	nme_render_stage= ::nme::Loader_obj::load(HX_HCSTRING("nme_render_stage","\xae","\x69","\x59","\x71"),(int)1);
	nme_set_render_gc_free= ::nme::Loader_obj::load(HX_HCSTRING("nme_set_render_gc_free","\x9c","\x67","\xa0","\x58"),(int)1);
	nme_stage_get_focus_id= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_focus_id","\x25","\x17","\x5f","\x40"),(int)1);
	nme_stage_set_focus= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_focus","\x01","\x2e","\xaa","\xf9"),(int)3);
	nme_stage_get_focus_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_focus_rect","\xee","\xee","\xa2","\x6d"),(int)1);
	nme_stage_set_focus_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_focus_rect","\x62","\xd7","\xc2","\x8d"),(int)2);
	nme_stage_resize_window= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1"),(int)3);
	nme_stage_show_cursor= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45"),(int)2);
	nme_stage_get_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d"),(int)0);
	nme_stage_get_normal_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30"),(int)0);
	nme_stage_check_cache= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_check_cache","\x91","\x43","\xa1","\x73"),(int)1);
}

} // end namespace nme
} // end namespace display
