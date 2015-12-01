#ifndef INCLUDED_nme_events_Listener
#define INCLUDED_nme_events_Listener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,Listener)
HX_DECLARE_CLASS2(nme,utils,WeakRef)
namespace nme{
namespace events{


class HXCPP_CLASS_ATTRIBUTES  Listener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Listener_obj OBJ_;
		Listener_obj();
		Void __construct(Dynamic inListener,bool inUseCapture,int inPriority,bool inUseWeakRef);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.events.Listener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Listener_obj > __new(Dynamic inListener,bool inUseCapture,int inPriority,bool inUseWeakRef);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Listener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Listener","\x94","\xbc","\xe3","\x11"); }

		static void __boot();
		static int sIDs;
		int mID;
		::nme::utils::WeakRef mListner;
		int mPriority;
		bool mUseCapture;
		virtual Void dispatchEvent( ::nme::events::Event event);
		Dynamic dispatchEvent_dyn();

		virtual bool Is( Dynamic inListener,bool inCapture);
		Dynamic Is_dyn();

};

} // end namespace nme
} // end namespace events

#endif /* INCLUDED_nme_events_Listener */ 
