#ifndef INCLUDED_nme_events_EventPhase
#define INCLUDED_nme_events_EventPhase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,events,EventPhase)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  EventPhase_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventPhase_obj OBJ_;
		EventPhase_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.events.EventPhase")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventPhase_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventPhase_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EventPhase","\xe1","\x35","\xf5","\x34"); }

		static void __boot();
		static int CAPTURING_PHASE;
		static int AT_TARGET;
		static int BUBBLING_PHASE;
};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_EventPhase */ 
