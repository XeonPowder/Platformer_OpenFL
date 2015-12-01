#ifndef INCLUDED_nme_events_ProgressEvent
#define INCLUDED_nme_events_ProgressEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,ProgressEvent)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  ProgressEvent_obj : public ::nme::events::Event_obj{
	public:
		typedef ::nme::events::Event_obj super;
		typedef ProgressEvent_obj OBJ_;
		ProgressEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_bytesLoaded,hx::Null< int >  __o_bytesTotal);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.ProgressEvent")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ProgressEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< int >  __o_bytesLoaded,hx::Null< int >  __o_bytesTotal);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ProgressEvent_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ProgressEvent","\x0d","\x9d","\x55","\x84"); }

		static void __boot();
		static ::String PROGRESS;
		static ::String SOCKET_DATA;
		int bytesLoaded;
		int bytesTotal;
		virtual ::nme::events::Event clone( );

		virtual ::String toString( );

};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_ProgressEvent */ 
