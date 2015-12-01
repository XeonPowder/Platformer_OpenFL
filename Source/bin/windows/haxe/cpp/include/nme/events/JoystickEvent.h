#ifndef INCLUDED_nme_events_JoystickEvent
#define INCLUDED_nme_events_JoystickEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,JoystickEvent)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  JoystickEvent_obj : public ::nme::events::Event_obj{
	public:
		typedef ::nme::events::Event_obj super;
		typedef JoystickEvent_obj OBJ_;
		JoystickEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.JoystickEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< JoystickEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_device,hx::Null< int >  __o_id,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JoystickEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("JoystickEvent","\x9e","\x7d","\x3c","\xe7"); }

		static void __boot();
		static ::String AXIS_MOVE;
		static ::String BALL_MOVE;
		static ::String BUTTON_DOWN;
		static ::String BUTTON_UP;
		static ::String HAT_MOVE;
		static ::String DEVICE_ADDED;
		static ::String DEVICE_REMOVED;
		Array< Float > axis;
		int device;
		int id;
		Float x;
		Float y;
		Float z;
		virtual ::nme::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_JoystickEvent */ 
