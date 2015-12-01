#ifndef INCLUDED_nme_events_TouchEvent
#define INCLUDED_nme_events_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif
#include <nme/Event.h>
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,events,MouseEvent)
HX_DECLARE_CLASS2(nme,events,TouchEvent)
HX_DECLARE_CLASS2(nme,geom,Point)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  TouchEvent_obj : public ::nme::events::MouseEvent_obj{
	public:
		typedef ::nme::events::MouseEvent_obj super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::nme::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.TouchEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TouchEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::nme::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TouchEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TouchEvent","\xfb","\xaf","\x06","\x66"); }

		static void __boot();
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_END;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
		static ::String TOUCH_ROLL_OUT;
		static ::String TOUCH_ROLL_OVER;
		static ::String TOUCH_TAP;
		static ::nme::events::TouchEvent nmeCreate( ::String inType,::cpp::Pointer< nme::Event > inEvent,::nme::geom::Point inLocal,::nme::display::InteractiveObject inTarget,Float sizeX,Float sizeY);
		static Dynamic nmeCreate_dyn();

		bool isPrimaryTouchPoint;
		int touchPointID;
		Float sizeX;
		Float sizeY;
		virtual ::nme::events::MouseEvent nmeCreateSimilar( ::String inType,::nme::display::InteractiveObject related,::nme::display::InteractiveObject targ);

};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_TouchEvent */ 
