#ifndef INCLUDED_nme_events_NetStatusEvent
#define INCLUDED_nme_events_NetStatusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,NetStatusEvent)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  NetStatusEvent_obj : public ::nme::events::Event_obj{
	public:
		typedef ::nme::events::Event_obj super;
		typedef NetStatusEvent_obj OBJ_;
		NetStatusEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic inInfo);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.NetStatusEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NetStatusEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic inInfo);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetStatusEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NetStatusEvent","\x4b","\x2a","\xfa","\x67"); }

		static void __boot();
		static ::String NET_STATUS;
		Dynamic info;
};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_NetStatusEvent */ 
