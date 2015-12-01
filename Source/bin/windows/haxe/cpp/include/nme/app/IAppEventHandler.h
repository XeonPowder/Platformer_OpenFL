#ifndef INCLUDED_nme_app_IAppEventHandler
#define INCLUDED_nme_app_IAppEventHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nme/Event.h>
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IAppEventHandler_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IAppEventHandler_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onRender( bool inTimed)=0;
virtual Dynamic onRender_dyn()=0;
		virtual Void onText( ::cpp::Pointer< nme::Event > event,::String type)=0;
virtual Dynamic onText_dyn()=0;
		virtual Void onKey( ::cpp::Pointer< nme::Event > event,::String type)=0;
virtual Dynamic onKey_dyn()=0;
		virtual Void onMouse( ::cpp::Pointer< nme::Event > event,::String type,bool inFromMouse)=0;
virtual Dynamic onMouse_dyn()=0;
		virtual Void onTouch( ::cpp::Pointer< nme::Event > event,::String type)=0;
virtual Dynamic onTouch_dyn()=0;
		virtual Void onResize( int width,int height)=0;
virtual Dynamic onResize_dyn()=0;
		virtual Void onDisplayObjectFocus( ::cpp::Pointer< nme::Event > event)=0;
virtual Dynamic onDisplayObjectFocus_dyn()=0;
		virtual Void onInputFocus( bool acquired)=0;
virtual Dynamic onInputFocus_dyn()=0;
		virtual Void onChange( ::cpp::Pointer< nme::Event > event)=0;
virtual Dynamic onChange_dyn()=0;
		virtual Void onActive( bool activated)=0;
virtual Dynamic onActive_dyn()=0;
		virtual Void onJoystick( ::cpp::Pointer< nme::Event > event,::String type)=0;
virtual Dynamic onJoystick_dyn()=0;
		virtual Void onSysMessage( ::cpp::Pointer< nme::Event > event)=0;
virtual Dynamic onSysMessage_dyn()=0;
		virtual Void onContextLost( )=0;
virtual Dynamic onContextLost_dyn()=0;
		virtual Void onUnhandledException( Dynamic exception,Array< ::Dynamic > stack)=0;
virtual Dynamic onUnhandledException_dyn()=0;
};



template<typename IMPL>
class IAppEventHandler_delegate_ : public IAppEventHandler_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IAppEventHandler_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onRender( bool inTimed) { return mDelegate->onRender(inTimed);}
		Dynamic onRender_dyn() { return mDelegate->onRender_dyn();}
		Void onText( ::cpp::Pointer< nme::Event > event,::String type) { return mDelegate->onText(event,type);}
		Dynamic onText_dyn() { return mDelegate->onText_dyn();}
		Void onKey( ::cpp::Pointer< nme::Event > event,::String type) { return mDelegate->onKey(event,type);}
		Dynamic onKey_dyn() { return mDelegate->onKey_dyn();}
		Void onMouse( ::cpp::Pointer< nme::Event > event,::String type,bool inFromMouse) { return mDelegate->onMouse(event,type,inFromMouse);}
		Dynamic onMouse_dyn() { return mDelegate->onMouse_dyn();}
		Void onTouch( ::cpp::Pointer< nme::Event > event,::String type) { return mDelegate->onTouch(event,type);}
		Dynamic onTouch_dyn() { return mDelegate->onTouch_dyn();}
		Void onResize( int width,int height) { return mDelegate->onResize(width,height);}
		Dynamic onResize_dyn() { return mDelegate->onResize_dyn();}
		Void onDisplayObjectFocus( ::cpp::Pointer< nme::Event > event) { return mDelegate->onDisplayObjectFocus(event);}
		Dynamic onDisplayObjectFocus_dyn() { return mDelegate->onDisplayObjectFocus_dyn();}
		Void onInputFocus( bool acquired) { return mDelegate->onInputFocus(acquired);}
		Dynamic onInputFocus_dyn() { return mDelegate->onInputFocus_dyn();}
		Void onChange( ::cpp::Pointer< nme::Event > event) { return mDelegate->onChange(event);}
		Dynamic onChange_dyn() { return mDelegate->onChange_dyn();}
		Void onActive( bool activated) { return mDelegate->onActive(activated);}
		Dynamic onActive_dyn() { return mDelegate->onActive_dyn();}
		Void onJoystick( ::cpp::Pointer< nme::Event > event,::String type) { return mDelegate->onJoystick(event,type);}
		Dynamic onJoystick_dyn() { return mDelegate->onJoystick_dyn();}
		Void onSysMessage( ::cpp::Pointer< nme::Event > event) { return mDelegate->onSysMessage(event);}
		Dynamic onSysMessage_dyn() { return mDelegate->onSysMessage_dyn();}
		Void onContextLost( ) { return mDelegate->onContextLost();}
		Dynamic onContextLost_dyn() { return mDelegate->onContextLost_dyn();}
		Void onUnhandledException( Dynamic exception,Array< ::Dynamic > stack) { return mDelegate->onUnhandledException(exception,stack);}
		Dynamic onUnhandledException_dyn() { return mDelegate->onUnhandledException_dyn();}
};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_IAppEventHandler */ 
