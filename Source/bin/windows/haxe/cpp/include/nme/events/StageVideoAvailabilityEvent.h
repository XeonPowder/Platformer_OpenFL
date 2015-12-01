#ifndef INCLUDED_nme_events_StageVideoAvailabilityEvent
#define INCLUDED_nme_events_StageVideoAvailabilityEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,StageVideoAvailabilityEvent)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  StageVideoAvailabilityEvent_obj : public ::nme::events::Event_obj{
	public:
		typedef ::nme::events::Event_obj super;
		typedef StageVideoAvailabilityEvent_obj OBJ_;
		StageVideoAvailabilityEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String inAvailability);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.StageVideoAvailabilityEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageVideoAvailabilityEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String inAvailability);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageVideoAvailabilityEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StageVideoAvailabilityEvent","\x82","\xa7","\x47","\x84"); }

		static void __boot();
		static ::String STAGE_VIDEO_AVAILABILITY;
		::String availability;
};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_StageVideoAvailabilityEvent */ 
