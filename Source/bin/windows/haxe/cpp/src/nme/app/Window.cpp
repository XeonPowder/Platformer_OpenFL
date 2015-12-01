#include <hxcpp.h>

#include "nme/Event.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_Window
#include <nme/app/Window.h>
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
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
#endif
namespace nme{
namespace app{

Void Window_obj::__construct(Dynamic inFrameHandle,int inWidth,int inHeight)
{
HX_STACK_FRAME("nme.app.Window","new",0xecfca7d7,"nme.app.Window.new","nme/app/Window.hx",40,0xb1f32ab7)
HX_STACK_THIS(this)
HX_STACK_ARG(inFrameHandle,"inFrameHandle")
HX_STACK_ARG(inWidth,"inWidth")
HX_STACK_ARG(inHeight,"inHeight")
{
	HX_STACK_LINE(41)
	this->appEventHandler = null();
	HX_STACK_LINE(42)
	this->active = true;
	HX_STACK_LINE(43)
	this->autoClear = true;
	HX_STACK_LINE(49)
	this->renderRequest = null();
	HX_STACK_LINE(52)
	Dynamic tmp = inFrameHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Dynamic tmp1 = ::nme::app::Window_obj::nme_get_frame_stage(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	this->nmeHandle = tmp1;
	HX_STACK_LINE(53)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	Dynamic tmp3 = this->nmeProcessWindowEvent_dyn();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(53)
	int tmp4 = inWidth;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(53)
	int tmp5 = inHeight;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	::nme::app::Window_obj::nme_set_stage_handler(tmp2,tmp3,tmp4,tmp5);
}
;
	return null();
}

//Window_obj::~Window_obj() { }

Dynamic Window_obj::__CreateEmpty() { return  new Window_obj; }
hx::ObjectPtr< Window_obj > Window_obj::__new(Dynamic inFrameHandle,int inWidth,int inHeight)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inFrameHandle,inWidth,inHeight);
	return _result_;}

Dynamic Window_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Window_obj > _result_ = new Window_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

bool Window_obj::shouldRenderNow( ){
	HX_STACK_FRAME("nme.app.Window","shouldRenderNow",0x970e26a4,"nme.app.Window.shouldRenderNow","nme/app/Window.hx",57,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	Dynamic tmp = this->renderRequest_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	if ((tmp1)){
		HX_STACK_LINE(59)
		return true;
	}
	HX_STACK_LINE(61)
	bool tmp2 = this->renderRequest();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(61)
	bool tmp3 = (tmp2 == true);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(61)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,shouldRenderNow,return )

Void Window_obj::setBackground( Dynamic inBackground){
{
		HX_STACK_FRAME("nme.app.Window","setBackground",0xc9b54467,"nme.app.Window.setBackground","nme/app/Window.hx",65,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBackground,"inBackground")
		HX_STACK_LINE(66)
		bool tmp = (inBackground == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		if ((tmp)){
			HX_STACK_LINE(67)
			Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(67)
			::nme::app::Window_obj::nme_display_object_set_bg(tmp1,(int)0);
		}
		else{
			HX_STACK_LINE(69)
			Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(69)
			int tmp2 = (int(inBackground) | int((int)-16777216));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(69)
			::nme::app::Window_obj::nme_display_object_set_bg(tmp1,tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,setBackground,(void))

Void Window_obj::onNewFrame( ){
{
		HX_STACK_FRAME("nme.app.Window","onNewFrame",0x7427a555,"nme.app.Window.onNewFrame","nme/app/Window.hx",74,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(75)
		bool tmp = this->shouldRenderNow();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		if ((tmp)){
			HX_STACK_LINE(77)
			Dynamic tmp1 = this->beginRenderImmediate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(77)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			if ((tmp2)){
				HX_STACK_LINE(78)
				this->beginRenderImmediate();
			}
			HX_STACK_LINE(79)
			this->beginRender();
			HX_STACK_LINE(80)
			::nme::app::IAppEventHandler tmp3 = this->appEventHandler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(80)
			tmp3->onRender(true);
			HX_STACK_LINE(81)
			this->endRender();
			HX_STACK_LINE(82)
			Dynamic tmp4 = this->endRenderImmediate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(82)
			if ((tmp5)){
				HX_STACK_LINE(83)
				this->endRenderImmediate();
			}
		}
		else{
			HX_STACK_LINE(89)
			this->enterFramePending = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,onNewFrame,(void))

Void Window_obj::onInvalidFrame( ){
{
		HX_STACK_FRAME("nme.app.Window","onInvalidFrame",0xaf2ccb5e,"nme.app.Window.onInvalidFrame","nme/app/Window.hx",95,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		bool tmp = this->shouldRenderNow();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		if ((tmp)){
			HX_STACK_LINE(98)
			Dynamic tmp1 = this->beginRenderImmediate_dyn();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(98)
			bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			if ((tmp2)){
				HX_STACK_LINE(99)
				this->beginRenderImmediate();
			}
			HX_STACK_LINE(100)
			this->beginRender();
			HX_STACK_LINE(101)
			::nme::app::IAppEventHandler tmp3 = this->appEventHandler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(101)
			tmp3->onRender(false);
			HX_STACK_LINE(102)
			this->endRender();
			HX_STACK_LINE(103)
			Dynamic tmp4 = this->endRenderImmediate_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(103)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(103)
			if ((tmp5)){
				HX_STACK_LINE(104)
				this->endRenderImmediate();
			}
		}
		else{
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,onInvalidFrame,(void))

Void Window_obj::nmeProcessWindowEvent( Dynamic inEvent){
{
		HX_STACK_FRAME("nme.app.Window","nmeProcessWindowEvent",0x7d0961f8,"nme.app.Window.nmeProcessWindowEvent","nme/app/Window.hx",114,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvent,"inEvent")
		HX_STACK_LINE(115)
		::nme::app::IAppEventHandler tmp = this->appEventHandler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(118)
		::cpp::Pointer< nme::Event > event = inEvent;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(119)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(125)
			{
				HX_STACK_LINE(125)
				int tmp2 = event->get_ref().type;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(125)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(125)
				int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(125)
				switch( (int)(tmp3)){
					case (int)9: {
						HX_STACK_LINE(128)
						Float tmp4 = event->get_ref().pollTime;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(128)
						::nme::app::Application_obj::pollClients(tmp4);
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(131)
						Dynamic tmp4 = this->onKey_dyn();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(131)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(131)
						if ((tmp5)){
							HX_STACK_LINE(132)
							int tmp6 = event->get_ref().code;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(132)
							int tmp7 = event->get_ref().value;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(132)
							int tmp8 = event->get_ref().flags;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(132)
							this->onKey(tmp6,tmp7,tmp8);
						}
						HX_STACK_LINE(133)
						::nme::app::IAppEventHandler tmp6 = this->appEventHandler;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(133)
						::cpp::Pointer< nme::Event > tmp7 = event;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(133)
						::String tmp8 = ::nme::events::TextEvent_obj::TEXT_INPUT;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(133)
						tmp6->onText(tmp7,tmp8);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(136)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(136)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(136)
						tmp4->onKey(tmp5,HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(139)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(139)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(139)
						tmp4->onKey(tmp5,HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"));
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(142)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(142)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(142)
						tmp4->onMouse(tmp5,HX_HCSTRING("mouseMove","\xd6","\x9b","\xb5","\xf4"),true);
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(145)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(145)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(145)
						tmp4->onMouse(tmp5,HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),true);
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(148)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(148)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(148)
						tmp4->onMouse(tmp5,HX_HCSTRING("click","\x48","\x7c","\x5e","\x48"),true);
					}
					;break;
					case (int)7: {
						HX_STACK_LINE(151)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(151)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(151)
						tmp4->onMouse(tmp5,HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),true);
					}
					;break;
					case (int)8: {
						HX_STACK_LINE(154)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(154)
						int tmp5 = event->get_ref().x;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(154)
						int tmp6 = event->get_ref().y;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(154)
						tmp4->onResize(tmp5,tmp6);
						HX_STACK_LINE(155)
						bool tmp7 = this->shouldRenderNow();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(155)
						if ((tmp7)){
							HX_STACK_LINE(157)
							Dynamic tmp8 = this->beginRenderImmediate_dyn();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(157)
							bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(157)
							if ((tmp9)){
								HX_STACK_LINE(158)
								this->beginRenderImmediate();
							}
							HX_STACK_LINE(159)
							this->beginRender();
							HX_STACK_LINE(160)
							::nme::app::IAppEventHandler tmp10 = this->appEventHandler;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(160)
							tmp10->onRender(false);
							HX_STACK_LINE(161)
							this->endRender();
							HX_STACK_LINE(162)
							Dynamic tmp11 = this->endRenderImmediate_dyn();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(162)
							bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(162)
							if ((tmp12)){
								HX_STACK_LINE(163)
								this->endRenderImmediate();
							}
						}
					}
					;break;
					case (int)10: {
						HX_STACK_LINE(167)
						Dynamic tmp4 = ::nme::app::Application_obj::onQuit_dyn();		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(167)
						bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(167)
						if ((tmp5)){
							HX_STACK_LINE(168)
							::nme::app::Application_obj::onQuit();
						}
					}
					;break;
					case (int)11: {
						HX_STACK_LINE(171)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(171)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(171)
						tmp4->onDisplayObjectFocus(tmp5);
					}
					;break;
					case (int)12: {
					}
					;break;
					case (int)14: {
						HX_STACK_LINE(177)
						this->beginRender();
						HX_STACK_LINE(178)
						bool tmp4 = this->enterFramePending;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(178)
						bool wasTimed = tmp4;		HX_STACK_VAR(wasTimed,"wasTimed");
						HX_STACK_LINE(179)
						this->enterFramePending = false;
						HX_STACK_LINE(180)
						::nme::app::IAppEventHandler tmp5 = this->appEventHandler;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(180)
						bool tmp6 = wasTimed;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(180)
						tmp5->onRender(tmp6);
						HX_STACK_LINE(181)
						this->endRender();
					}
					;break;
					case (int)15: {
						HX_STACK_LINE(184)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(184)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(184)
						tmp4->onTouch(tmp5,HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9"));
						HX_STACK_LINE(185)
						int tmp6 = event->get_ref().flags;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(185)
						int tmp7 = (int(tmp6) & int((int)32768));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(185)
						bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(185)
						if ((tmp8)){
							HX_STACK_LINE(186)
							::nme::app::IAppEventHandler tmp9 = this->appEventHandler;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(186)
							::cpp::Pointer< nme::Event > tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(186)
							tmp9->onMouse(tmp10,HX_HCSTRING("mouseDown","\x27","\xb1","\xc2","\xee"),false);
						}
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(189)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(189)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(189)
						tmp4->onTouch(tmp5,HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d"));
					}
					;break;
					case (int)17: {
						HX_STACK_LINE(192)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(192)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(192)
						tmp4->onTouch(tmp5,HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00"));
						HX_STACK_LINE(193)
						int tmp6 = event->get_ref().flags;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(193)
						int tmp7 = (int(tmp6) & int((int)32768));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(193)
						bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(193)
						if ((tmp8)){
							HX_STACK_LINE(194)
							::nme::app::IAppEventHandler tmp9 = this->appEventHandler;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(194)
							::cpp::Pointer< nme::Event > tmp10 = event;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(194)
							tmp9->onMouse(tmp10,HX_HCSTRING("mouseUp","\xe0","\xf3","\x72","\xc0"),false);
						}
					}
					;break;
					case (int)18: {
						HX_STACK_LINE(197)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(197)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(197)
						tmp4->onTouch(tmp5,HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00"));
					}
					;break;
					case (int)19: {
						HX_STACK_LINE(200)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(200)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(200)
						tmp4->onChange(tmp5);
					}
					;break;
					case (int)20: {
						HX_STACK_LINE(203)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(203)
						tmp4->onActive(true);
					}
					;break;
					case (int)21: {
						HX_STACK_LINE(206)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(206)
						tmp4->onActive(false);
					}
					;break;
					case (int)22: {
						HX_STACK_LINE(209)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(209)
						tmp4->onInputFocus(true);
					}
					;break;
					case (int)23: {
						HX_STACK_LINE(212)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(212)
						tmp4->onInputFocus(false);
					}
					;break;
					case (int)24: {
						HX_STACK_LINE(215)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(215)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(215)
						tmp4->onJoystick(tmp5,HX_HCSTRING("axisMove","\x52","\x90","\xf4","\x8f"));
					}
					;break;
					case (int)25: {
						HX_STACK_LINE(218)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(218)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(218)
						tmp4->onJoystick(tmp5,HX_HCSTRING("ballMove","\xb0","\x5c","\xfd","\x37"));
					}
					;break;
					case (int)26: {
						HX_STACK_LINE(221)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(221)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(221)
						tmp4->onJoystick(tmp5,HX_HCSTRING("hatMove","\x0c","\x98","\x0b","\xab"));
					}
					;break;
					case (int)27: {
						HX_STACK_LINE(224)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(224)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(224)
						tmp4->onJoystick(tmp5,HX_HCSTRING("downMove","\x93","\xe0","\x48","\x7d"));
					}
					;break;
					case (int)28: {
						HX_STACK_LINE(227)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(227)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(227)
						tmp4->onJoystick(tmp5,HX_HCSTRING("upMove","\x0c","\x3f","\xdc","\x77"));
					}
					;break;
					case (int)31: {
						HX_STACK_LINE(230)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(230)
						::cpp::Pointer< nme::Event > tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(230)
						tmp4->onSysMessage(tmp5);
					}
					;break;
					case (int)32: {
						HX_STACK_LINE(233)
						::nme::app::IAppEventHandler tmp4 = this->appEventHandler;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(233)
						tmp4->onContextLost();
					}
					;break;
				}
			}
			HX_STACK_LINE(237)
			Float tmp2 = event->get_ref().pollTime;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(237)
			Float tmp3 = ::nme::app::Application_obj::getNextWake(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(237)
			Float nextWake = tmp3;		HX_STACK_VAR(nextWake,"nextWake");
			HX_STACK_LINE(238)
			Dynamic tmp4 = this->nextWakeHandler_dyn();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(238)
			bool tmp5 = (tmp4 != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(238)
			if ((tmp5)){
				HX_STACK_LINE(239)
				Float tmp6 = nextWake;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(239)
				this->nextWakeHandler(tmp6);
			}
			HX_STACK_LINE(242)
			event->get_ref().pollTime = nextWake;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(249)
					Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
					HX_STACK_LINE(250)
					event->get_ref().pollTime = (int)0;
					HX_STACK_LINE(251)
					::nme::app::IAppEventHandler tmp2 = this->appEventHandler;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(251)
					Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(251)
					tmp2->onUnhandledException(tmp3,stack);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,nmeProcessWindowEvent,(void))

Void Window_obj::beginRender( ){
{
		HX_STACK_FRAME("nme.app.Window","beginRender",0x415ef4d6,"nme.app.Window.beginRender","nme/app/Window.hx",256,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = this->autoClear;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		::nme::app::Window_obj::nme_stage_begin_render(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,beginRender,(void))

Void Window_obj::endRender( ){
{
		HX_STACK_FRAME("nme.app.Window","endRender",0xfaea0448,"nme.app.Window.endRender","nme/app/Window.hx",260,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		::nme::app::Window_obj::nme_stage_end_render(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,endRender,(void))

::nme::display::StageAlign Window_obj::get_align( ){
	HX_STACK_FRAME("nme.app.Window","get_align",0x1b18fdd3,"nme.app.Window.get_align","nme/app/Window.hx",266,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(267)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(267)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_align(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(267)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(268)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(268)
	::nme::display::StageAlign tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageAlign >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(268)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_align,return )

::nme::display::StageAlign Window_obj::set_align( ::nme::display::StageAlign inMode){
	HX_STACK_FRAME("nme.app.Window","set_align",0xfe69e9df,"nme.app.Window.set_align","nme/app/Window.hx",272,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMode,"inMode")
	HX_STACK_LINE(273)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	::nme::app::Window_obj::nme_stage_set_align(tmp,inMode->__Index());
	HX_STACK_LINE(274)
	::nme::display::StageAlign tmp1 = inMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_align,return )

::nme::display::StageDisplayState Window_obj::get_displayState( ){
	HX_STACK_FRAME("nme.app.Window","get_displayState",0xeef1c321,"nme.app.Window.get_displayState","nme/app/Window.hx",278,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(279)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_display_state(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(280)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	::nme::display::StageDisplayState tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageDisplayState >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(280)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_displayState,return )

::nme::display::StageDisplayState Window_obj::set_displayState( ::nme::display::StageDisplayState inState){
	HX_STACK_FRAME("nme.app.Window","set_displayState",0x4533b095,"nme.app.Window.set_displayState","nme/app/Window.hx",284,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inState,"inState")
	HX_STACK_LINE(285)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(285)
	::nme::app::Window_obj::nme_stage_set_display_state(tmp,inState->__Index());
	HX_STACK_LINE(286)
	::nme::display::StageDisplayState tmp1 = inState;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(286)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_displayState,return )

Float Window_obj::get_dpiScale( ){
	HX_STACK_FRAME("nme.app.Window","get_dpiScale",0x71495f9f,"nme.app.Window.get_dpiScale","nme/app/Window.hx",290,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(291)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(291)
	Float tmp1 = ::nme::app::Window_obj::nme_stage_get_dpi_scale(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(291)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_dpiScale,return )

bool Window_obj::get_isOpenGL( ){
	HX_STACK_FRAME("nme.app.Window","get_isOpenGL",0x5ab999ab,"nme.app.Window.get_isOpenGL","nme/app/Window.hx",297,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(298)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(298)
	bool tmp1 = ::nme::app::Window_obj::nme_stage_is_opengl(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(298)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_isOpenGL,return )

::nme::display::StageQuality Window_obj::get_quality( ){
	HX_STACK_FRAME("nme.app.Window","get_quality",0x6c560b4d,"nme.app.Window.get_quality","nme/app/Window.hx",302,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(303)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_quality(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(304)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(304)
	::nme::display::StageQuality tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageQuality >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(304)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_quality,return )

::nme::display::StageQuality Window_obj::set_quality( ::nme::display::StageQuality inQuality){
	HX_STACK_FRAME("nme.app.Window","set_quality",0x76c31259,"nme.app.Window.set_quality","nme/app/Window.hx",308,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inQuality,"inQuality")
	HX_STACK_LINE(309)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	::nme::app::Window_obj::nme_stage_set_quality(tmp,inQuality->__Index());
	HX_STACK_LINE(310)
	::nme::display::StageQuality tmp1 = inQuality;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(310)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_quality,return )

::nme::display::StageScaleMode Window_obj::get_scaleMode( ){
	HX_STACK_FRAME("nme.app.Window","get_scaleMode",0xef57211b,"nme.app.Window.get_scaleMode","nme/app/Window.hx",314,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(315)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(315)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_scale_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(315)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(316)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(316)
	::nme::display::StageScaleMode tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::StageScaleMode >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(316)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_scaleMode,return )

::nme::display::StageScaleMode Window_obj::set_scaleMode( ::nme::display::StageScaleMode inMode){
	HX_STACK_FRAME("nme.app.Window","set_scaleMode",0x345d0327,"nme.app.Window.set_scaleMode","nme/app/Window.hx",320,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMode,"inMode")
	HX_STACK_LINE(321)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(321)
	::nme::app::Window_obj::nme_stage_set_scale_mode(tmp,inMode->__Index());
	HX_STACK_LINE(322)
	::nme::display::StageScaleMode tmp1 = inMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Window_obj,set_scaleMode,return )

int Window_obj::get_x( ){
	HX_STACK_FRAME("nme.app.Window","get_x",0x9b878886,"nme.app.Window.get_x","nme/app/Window.hx",326,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(327)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_window_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_x,return )

int Window_obj::get_y( ){
	HX_STACK_FRAME("nme.app.Window","get_y",0x9b878887,"nme.app.Window.get_y","nme/app/Window.hx",331,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	int tmp1 = ::nme::app::Window_obj::nme_stage_get_window_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(332)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_y,return )

int Window_obj::get_height( ){
	HX_STACK_FRAME("nme.app.Window","get_height",0x5f768d19,"nme.app.Window.get_height","nme/app/Window.hx",338,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(339)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(339)
	Dynamic tmp1 = ::nme::app::Window_obj::nme_stage_get_stage_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(339)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(339)
	tmp2 = hx::TCast< ::Float >::cast(tmp1);
	HX_STACK_LINE(339)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(339)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_height,return )

int Window_obj::get_width( ){
	HX_STACK_FRAME("nme.app.Window","get_width",0xc3ea5d14,"nme.app.Window.get_width","nme/app/Window.hx",343,0xb1f32ab7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(344)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(344)
	Dynamic tmp1 = ::nme::app::Window_obj::nme_stage_get_stage_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(344)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(344)
	tmp2 = hx::TCast< ::Float >::cast(tmp1);
	HX_STACK_LINE(344)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(344)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Window_obj,get_width,return )

Void Window_obj::resize( int width,int height){
{
		HX_STACK_FRAME("nme.app.Window","resize",0xe05b46dd,"nme.app.Window.resize","nme/app/Window.hx",349,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(350)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(350)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(350)
		::nme::app::Window_obj::nme_stage_resize_window(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,resize,(void))

Void Window_obj::setPosition( int x,int y){
{
		HX_STACK_FRAME("nme.app.Window","setPosition",0x9d6b10e2,"nme.app.Window.setPosition","nme/app/Window.hx",355,0xb1f32ab7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(356)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		::nme::app::Window_obj::nme_stage_set_window_position(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Window_obj,setPosition,(void))

Dynamic Window_obj::nme_stage_resize_window;

Dynamic Window_obj::nme_stage_is_opengl;

Dynamic Window_obj::nme_stage_get_stage_width;

Dynamic Window_obj::nme_stage_get_stage_height;

Dynamic Window_obj::nme_stage_get_dpi_scale;

Dynamic Window_obj::nme_stage_get_scale_mode;

Dynamic Window_obj::nme_stage_set_scale_mode;

Dynamic Window_obj::nme_stage_get_align;

Dynamic Window_obj::nme_stage_set_align;

Dynamic Window_obj::nme_stage_get_quality;

Dynamic Window_obj::nme_stage_set_quality;

Dynamic Window_obj::nme_stage_get_display_state;

Dynamic Window_obj::nme_stage_set_display_state;

Dynamic Window_obj::nme_stage_show_cursor;

Dynamic Window_obj::nme_stage_set_fixed_orientation;

Dynamic Window_obj::nme_stage_get_orientation;

Dynamic Window_obj::nme_stage_get_normal_orientation;

Dynamic Window_obj::nme_stage_set_window_position;

Dynamic Window_obj::nme_stage_get_window_x;

Dynamic Window_obj::nme_stage_get_window_y;

Dynamic Window_obj::nme_stage_set_next_wake;

Dynamic Window_obj::nme_stage_begin_render;

Dynamic Window_obj::nme_stage_end_render;

Dynamic Window_obj::nme_get_frame_stage;

Dynamic Window_obj::nme_display_object_set_bg;

Dynamic Window_obj::nme_set_stage_handler;


Window_obj::Window_obj()
{
}

void Window_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Window);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(dpiScale,"dpiScale");
	HX_MARK_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(autoClear,"autoClear");
	HX_MARK_MEMBER_NAME(renderRequest,"renderRequest");
	HX_MARK_MEMBER_NAME(nextWakeHandler,"nextWakeHandler");
	HX_MARK_MEMBER_NAME(beginRenderImmediate,"beginRenderImmediate");
	HX_MARK_MEMBER_NAME(endRenderImmediate,"endRenderImmediate");
	HX_MARK_MEMBER_NAME(appEventHandler,"appEventHandler");
	HX_MARK_MEMBER_NAME(onKey,"onKey");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(enterFramePending,"enterFramePending");
	HX_MARK_END_CLASS();
}

void Window_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(dpiScale,"dpiScale");
	HX_VISIT_MEMBER_NAME(isOpenGL,"isOpenGL");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(autoClear,"autoClear");
	HX_VISIT_MEMBER_NAME(renderRequest,"renderRequest");
	HX_VISIT_MEMBER_NAME(nextWakeHandler,"nextWakeHandler");
	HX_VISIT_MEMBER_NAME(beginRenderImmediate,"beginRenderImmediate");
	HX_VISIT_MEMBER_NAME(endRenderImmediate,"endRenderImmediate");
	HX_VISIT_MEMBER_NAME(appEventHandler,"appEventHandler");
	HX_VISIT_MEMBER_NAME(onKey,"onKey");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(enterFramePending,"enterFramePending");
}

Dynamic Window_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp != hx::paccNever ? get_x() : x; }
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp != hx::paccNever ? get_y() : y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp != hx::paccNever) return get_align(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp != hx::paccNever ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"onKey") ) { return onKey; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp != hx::paccNever ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp != hx::paccNever) return get_quality(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpiScale") ) { return inCallProp != hx::paccNever ? get_dpiScale() : dpiScale; }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { return inCallProp != hx::paccNever ? get_isOpenGL() : isOpenGL; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp != hx::paccNever) return get_scaleMode(); }
		if (HX_FIELD_EQ(inName,"autoClear") ) { return autoClear; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"endRender") ) { return endRender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_align") ) { return get_align_dyn(); }
		if (HX_FIELD_EQ(inName,"set_align") ) { return set_align_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onNewFrame") ) { return onNewFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginRender") ) { return beginRender_dyn(); }
		if (HX_FIELD_EQ(inName,"get_quality") ) { return get_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"set_quality") ) { return set_quality_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp != hx::paccNever) return get_displayState(); }
		if (HX_FIELD_EQ(inName,"get_dpiScale") ) { return get_dpiScale_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isOpenGL") ) { return get_isOpenGL_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { return renderRequest; }
		if (HX_FIELD_EQ(inName,"setBackground") ) { return setBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleMode") ) { return get_scaleMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onInvalidFrame") ) { return onInvalidFrame_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nextWakeHandler") ) { return nextWakeHandler; }
		if (HX_FIELD_EQ(inName,"appEventHandler") ) { return appEventHandler; }
		if (HX_FIELD_EQ(inName,"shouldRenderNow") ) { return shouldRenderNow_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_displayState") ) { return get_displayState_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayState") ) { return set_displayState_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enterFramePending") ) { return enterFramePending; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"endRenderImmediate") ) { return endRenderImmediate; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"beginRenderImmediate") ) { return beginRenderImmediate; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nmeProcessWindowEvent") ) { return nmeProcessWindowEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Window_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { outValue = nme_stage_is_opengl; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { outValue = nme_stage_get_align; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { outValue = nme_stage_set_align; return true;  }
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { outValue = nme_get_frame_stage; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_stage_end_render") ) { outValue = nme_stage_end_render; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { outValue = nme_stage_get_quality; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { outValue = nme_stage_set_quality; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { outValue = nme_stage_show_cursor; return true;  }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { outValue = nme_set_stage_handler; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_window_x") ) { outValue = nme_stage_get_window_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_get_window_y") ) { outValue = nme_stage_get_window_y; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_begin_render") ) { outValue = nme_stage_begin_render; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { outValue = nme_stage_resize_window; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { outValue = nme_stage_get_dpi_scale; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { outValue = nme_stage_set_next_wake; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { outValue = nme_stage_get_scale_mode; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { outValue = nme_stage_set_scale_mode; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { outValue = nme_stage_get_stage_width; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { outValue = nme_stage_get_orientation; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { outValue = nme_display_object_set_bg; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { outValue = nme_stage_get_stage_height; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { outValue = nme_stage_get_display_state; return true;  }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { outValue = nme_stage_set_display_state; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_stage_set_window_position") ) { outValue = nme_stage_set_window_position; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { outValue = nme_stage_set_fixed_orientation; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { outValue = nme_stage_get_normal_orientation; return true;  }
	}
	return false;
}

Dynamic Window_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"align") ) { if (inCallProp != hx::paccNever) return set_align(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onKey") ) { onKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { if (inCallProp != hx::paccNever) return set_quality(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dpiScale") ) { dpiScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isOpenGL") ) { isOpenGL=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp != hx::paccNever) return set_scaleMode(inValue); }
		if (HX_FIELD_EQ(inName,"autoClear") ) { autoClear=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayState") ) { if (inCallProp != hx::paccNever) return set_displayState(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"renderRequest") ) { renderRequest=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nextWakeHandler") ) { nextWakeHandler=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"appEventHandler") ) { appEventHandler=inValue.Cast< ::nme::app::IAppEventHandler >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"enterFramePending") ) { enterFramePending=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"endRenderImmediate") ) { endRenderImmediate=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"beginRenderImmediate") ) { beginRenderImmediate=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Window_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"nme_stage_is_opengl") ) { nme_stage_is_opengl=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_align") ) { nme_stage_get_align=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_align") ) { nme_stage_set_align=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { nme_get_frame_stage=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_stage_end_render") ) { nme_stage_end_render=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_stage_get_quality") ) { nme_stage_get_quality=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_quality") ) { nme_stage_set_quality=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_show_cursor") ) { nme_stage_show_cursor=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_set_stage_handler") ) { nme_set_stage_handler=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_stage_get_window_x") ) { nme_stage_get_window_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_window_y") ) { nme_stage_get_window_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_begin_render") ) { nme_stage_begin_render=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_stage_resize_window") ) { nme_stage_resize_window=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_dpi_scale") ) { nme_stage_get_dpi_scale=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_next_wake") ) { nme_stage_set_next_wake=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_stage_get_scale_mode") ) { nme_stage_get_scale_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_scale_mode") ) { nme_stage_set_scale_mode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_width") ) { nme_stage_get_stage_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_get_orientation") ) { nme_stage_get_orientation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { nme_display_object_set_bg=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_stage_get_stage_height") ) { nme_stage_get_stage_height=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_stage_get_display_state") ) { nme_stage_get_display_state=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_stage_set_display_state") ) { nme_stage_set_display_state=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_stage_set_window_position") ) { nme_stage_set_window_position=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { nme_stage_set_fixed_orientation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_stage_get_normal_orientation") ) { nme_stage_get_normal_orientation=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Window_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("align","\xc5","\x56","\x91","\x21"));
	outFields->push(HX_HCSTRING("displayState","\x6f","\x4c","\x64","\x90"));
	outFields->push(HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90"));
	outFields->push(HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79"));
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	outFields->push(HX_HCSTRING("scaleMode","\x0d","\xdb","\xd3","\x2b"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26"));
	outFields->push(HX_HCSTRING("appEventHandler","\x11","\xdd","\x9f","\xc1"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("enterFramePending","\xe2","\x54","\x8b","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Window_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsFloat,(int)offsetof(Window_obj,dpiScale),HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90")},
	{hx::fsBool,(int)offsetof(Window_obj,isOpenGL),HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79")},
	{hx::fsInt,(int)offsetof(Window_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Window_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Window_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsBool,(int)offsetof(Window_obj,autoClear),HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,renderRequest),HX_HCSTRING("renderRequest","\x99","\x52","\x72","\x40")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,nextWakeHandler),HX_HCSTRING("nextWakeHandler","\xd3","\xa9","\x3b","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,beginRenderImmediate),HX_HCSTRING("beginRenderImmediate","\x92","\x61","\xbd","\xfc")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,endRenderImmediate),HX_HCSTRING("endRenderImmediate","\x20","\x00","\x27","\x6e")},
	{hx::fsObject /*::nme::app::IAppEventHandler*/ ,(int)offsetof(Window_obj,appEventHandler),HX_HCSTRING("appEventHandler","\x11","\xdd","\x9f","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,onKey),HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Window_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsBool,(int)offsetof(Window_obj,enterFramePending),HX_HCSTRING("enterFramePending","\xe2","\x54","\x8b","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_resize_window,HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_is_opengl,HX_HCSTRING("nme_stage_is_opengl","\x2a","\x51","\xdf","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_stage_width,HX_HCSTRING("nme_stage_get_stage_width","\x62","\xe0","\x82","\xa4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_stage_height,HX_HCSTRING("nme_stage_get_stage_height","\x0b","\xee","\x50","\x04")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_dpi_scale,HX_HCSTRING("nme_stage_get_dpi_scale","\x85","\x71","\x6a","\xd6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_scale_mode,HX_HCSTRING("nme_stage_get_scale_mode","\x3b","\x81","\x2e","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_scale_mode,HX_HCSTRING("nme_stage_set_scale_mode","\xaf","\x69","\x4e","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_align,HX_HCSTRING("nme_stage_get_align","\xe2","\x38","\x61","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_align,HX_HCSTRING("nme_stage_set_align","\xee","\x24","\xb2","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_quality,HX_HCSTRING("nme_stage_get_quality","\x1c","\x68","\x6e","\x53")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_quality,HX_HCSTRING("nme_stage_set_quality","\x28","\x6f","\xdb","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_display_state,HX_HCSTRING("nme_stage_get_display_state","\x31","\xcc","\x9b","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_display_state,HX_HCSTRING("nme_stage_set_display_state","\x3d","\xa4","\x09","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_show_cursor,HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_fixed_orientation,HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_orientation,HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_normal_orientation,HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_window_position,HX_HCSTRING("nme_stage_set_window_position","\x81","\x81","\x37","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_window_x,HX_HCSTRING("nme_stage_get_window_x","\x2c","\x51","\xc2","\xac")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_get_window_y,HX_HCSTRING("nme_stage_get_window_y","\x2d","\x51","\xc2","\xac")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_set_next_wake,HX_HCSTRING("nme_stage_set_next_wake","\xd9","\xb8","\x28","\x42")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_begin_render,HX_HCSTRING("nme_stage_begin_render","\xe6","\xf3","\x2a","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_stage_end_render,HX_HCSTRING("nme_stage_end_render","\xf4","\x01","\x00","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_get_frame_stage,HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_display_object_set_bg,HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Window_obj::nme_set_stage_handler,HX_HCSTRING("nme_set_stage_handler","\xf3","\x0a","\xdc","\xf6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("dpiScale","\xed","\xa9","\x8d","\x90"),
	HX_HCSTRING("isOpenGL","\xf9","\xe3","\xfd","\x79"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("autoClear","\x9e","\xaf","\x66","\x26"),
	HX_HCSTRING("renderRequest","\x99","\x52","\x72","\x40"),
	HX_HCSTRING("nextWakeHandler","\xd3","\xa9","\x3b","\xc6"),
	HX_HCSTRING("beginRenderImmediate","\x92","\x61","\xbd","\xfc"),
	HX_HCSTRING("endRenderImmediate","\x20","\x00","\x27","\x6e"),
	HX_HCSTRING("appEventHandler","\x11","\xdd","\x9f","\xc1"),
	HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("enterFramePending","\xe2","\x54","\x8b","\x35"),
	HX_HCSTRING("shouldRenderNow","\xad","\x78","\x84","\x38"),
	HX_HCSTRING("setBackground","\x30","\xd2","\x95","\xc7"),
	HX_HCSTRING("onNewFrame","\xec","\x8f","\x84","\x07"),
	HX_HCSTRING("onInvalidFrame","\x75","\x4d","\xc8","\xd5"),
	HX_HCSTRING("nmeProcessWindowEvent","\xc1","\x60","\x4a","\xf1"),
	HX_HCSTRING("beginRender","\x5f","\x4e","\x4f","\x9f"),
	HX_HCSTRING("endRender","\x91","\xb9","\x0b","\x45"),
	HX_HCSTRING("get_align","\x1c","\xb3","\x3a","\x65"),
	HX_HCSTRING("set_align","\x28","\x9f","\x8b","\x48"),
	HX_HCSTRING("get_displayState","\xf8","\x38","\x03","\x95"),
	HX_HCSTRING("set_displayState","\x6c","\x26","\x45","\xeb"),
	HX_HCSTRING("get_dpiScale","\xf6","\x5d","\xa7","\x45"),
	HX_HCSTRING("get_isOpenGL","\x02","\x98","\x17","\x2f"),
	HX_HCSTRING("get_quality","\xd6","\x64","\x46","\xca"),
	HX_HCSTRING("set_quality","\xe2","\x6b","\xb3","\xd4"),
	HX_HCSTRING("get_scaleMode","\xe4","\xae","\x37","\xed"),
	HX_HCSTRING("set_scaleMode","\xf0","\x90","\x3d","\x32"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setPosition","\x6b","\x6a","\x5b","\xfb"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_is_opengl,"nme_stage_is_opengl");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_stage_width,"nme_stage_get_stage_width");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_stage_height,"nme_stage_get_stage_height");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_dpi_scale,"nme_stage_get_dpi_scale");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_scale_mode,"nme_stage_get_scale_mode");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_scale_mode,"nme_stage_set_scale_mode");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_align,"nme_stage_get_align");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_align,"nme_stage_set_align");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_quality,"nme_stage_get_quality");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_quality,"nme_stage_set_quality");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_display_state,"nme_stage_get_display_state");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_display_state,"nme_stage_set_display_state");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_window_position,"nme_stage_set_window_position");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_window_x,"nme_stage_get_window_x");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_get_window_y,"nme_stage_get_window_y");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_set_next_wake,"nme_stage_set_next_wake");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_begin_render,"nme_stage_begin_render");
	HX_MARK_MEMBER_NAME(Window_obj::nme_stage_end_render,"nme_stage_end_render");
	HX_MARK_MEMBER_NAME(Window_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_MARK_MEMBER_NAME(Window_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_MARK_MEMBER_NAME(Window_obj::nme_set_stage_handler,"nme_set_stage_handler");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Window_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_resize_window,"nme_stage_resize_window");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_is_opengl,"nme_stage_is_opengl");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_stage_width,"nme_stage_get_stage_width");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_stage_height,"nme_stage_get_stage_height");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_dpi_scale,"nme_stage_get_dpi_scale");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_scale_mode,"nme_stage_get_scale_mode");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_scale_mode,"nme_stage_set_scale_mode");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_align,"nme_stage_get_align");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_align,"nme_stage_set_align");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_quality,"nme_stage_get_quality");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_quality,"nme_stage_set_quality");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_display_state,"nme_stage_get_display_state");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_display_state,"nme_stage_set_display_state");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_show_cursor,"nme_stage_show_cursor");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_orientation,"nme_stage_get_orientation");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_normal_orientation,"nme_stage_get_normal_orientation");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_window_position,"nme_stage_set_window_position");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_window_x,"nme_stage_get_window_x");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_get_window_y,"nme_stage_get_window_y");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_set_next_wake,"nme_stage_set_next_wake");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_begin_render,"nme_stage_begin_render");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_stage_end_render,"nme_stage_end_render");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_VISIT_MEMBER_NAME(Window_obj::nme_set_stage_handler,"nme_set_stage_handler");
};

#endif

hx::Class Window_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1"),
	HX_HCSTRING("nme_stage_is_opengl","\x2a","\x51","\xdf","\x94"),
	HX_HCSTRING("nme_stage_get_stage_width","\x62","\xe0","\x82","\xa4"),
	HX_HCSTRING("nme_stage_get_stage_height","\x0b","\xee","\x50","\x04"),
	HX_HCSTRING("nme_stage_get_dpi_scale","\x85","\x71","\x6a","\xd6"),
	HX_HCSTRING("nme_stage_get_scale_mode","\x3b","\x81","\x2e","\xc9"),
	HX_HCSTRING("nme_stage_set_scale_mode","\xaf","\x69","\x4e","\xe9"),
	HX_HCSTRING("nme_stage_get_align","\xe2","\x38","\x61","\x33"),
	HX_HCSTRING("nme_stage_set_align","\xee","\x24","\xb2","\x16"),
	HX_HCSTRING("nme_stage_get_quality","\x1c","\x68","\x6e","\x53"),
	HX_HCSTRING("nme_stage_set_quality","\x28","\x6f","\xdb","\x5d"),
	HX_HCSTRING("nme_stage_get_display_state","\x31","\xcc","\x9b","\x09"),
	HX_HCSTRING("nme_stage_set_display_state","\x3d","\xa4","\x09","\x2d"),
	HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45"),
	HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d"),
	HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d"),
	HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30"),
	HX_HCSTRING("nme_stage_set_window_position","\x81","\x81","\x37","\x52"),
	HX_HCSTRING("nme_stage_get_window_x","\x2c","\x51","\xc2","\xac"),
	HX_HCSTRING("nme_stage_get_window_y","\x2d","\x51","\xc2","\xac"),
	HX_HCSTRING("nme_stage_set_next_wake","\xd9","\xb8","\x28","\x42"),
	HX_HCSTRING("nme_stage_begin_render","\xe6","\xf3","\x2a","\x67"),
	HX_HCSTRING("nme_stage_end_render","\xf4","\x01","\x00","\xe0"),
	HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),
	HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b"),
	HX_HCSTRING("nme_set_stage_handler","\xf3","\x0a","\xdc","\xf6"),
	::String(null()) };

void Window_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.Window","\x65","\x70","\xd0","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Window_obj::__GetStatic;
	__mClass->mSetStaticField = &Window_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Window_obj >;
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

void Window_obj::__boot()
{
	nme_stage_resize_window= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_resize_window","\xe1","\x12","\x4e","\xc1"),(int)3);
	nme_stage_is_opengl= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_is_opengl","\x2a","\x51","\xdf","\x94"),(int)1);
	nme_stage_get_stage_width= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_stage_width","\x62","\xe0","\x82","\xa4"),(int)1);
	nme_stage_get_stage_height= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_stage_height","\x0b","\xee","\x50","\x04"),(int)1);
	nme_stage_get_dpi_scale= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_dpi_scale","\x85","\x71","\x6a","\xd6"),(int)1);
	nme_stage_get_scale_mode= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_scale_mode","\x3b","\x81","\x2e","\xc9"),(int)1);
	nme_stage_set_scale_mode= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_scale_mode","\xaf","\x69","\x4e","\xe9"),(int)2);
	nme_stage_get_align= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_align","\xe2","\x38","\x61","\x33"),(int)1);
	nme_stage_set_align= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_align","\xee","\x24","\xb2","\x16"),(int)2);
	nme_stage_get_quality= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_quality","\x1c","\x68","\x6e","\x53"),(int)1);
	nme_stage_set_quality= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_quality","\x28","\x6f","\xdb","\x5d"),(int)2);
	nme_stage_get_display_state= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_display_state","\x31","\xcc","\x9b","\x09"),(int)1);
	nme_stage_set_display_state= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_display_state","\x3d","\xa4","\x09","\x2d"),(int)2);
	nme_stage_show_cursor= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_show_cursor","\x5e","\x18","\xd2","\x45"),(int)2);
	nme_stage_set_fixed_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d"),(int)1);
	nme_stage_get_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_orientation","\xad","\xc4","\xd2","\x7d"),(int)0);
	nme_stage_get_normal_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_normal_orientation","\x3b","\x7d","\x35","\x30"),(int)0);
	nme_stage_set_window_position= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_window_position","\x81","\x81","\x37","\x52"),(int)3);
	nme_stage_get_window_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_window_x","\x2c","\x51","\xc2","\xac"),(int)1);
	nme_stage_get_window_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_get_window_y","\x2d","\x51","\xc2","\xac"),(int)1);
	nme_stage_set_next_wake= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_next_wake","\xd9","\xb8","\x28","\x42"),(int)2);
	nme_stage_begin_render= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_begin_render","\xe6","\xf3","\x2a","\x67"),(int)2);
	nme_stage_end_render= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_end_render","\xf4","\x01","\x00","\xe0"),(int)1);
	nme_get_frame_stage= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),(int)1);
	nme_display_object_set_bg= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b"),(int)2);
	nme_set_stage_handler= ::nme::Loader_obj::load(HX_HCSTRING("nme_set_stage_handler_native","\xa3","\x64","\x8f","\xb0"),(int)4);
}

} // end namespace nme
} // end namespace app
