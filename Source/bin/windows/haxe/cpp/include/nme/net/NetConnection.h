#ifndef INCLUDED_nme_net_NetConnection
#define INCLUDED_nme_net_NetConnection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,net,NetConnection)
namespace nme{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  NetConnection_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef NetConnection_obj OBJ_;
		NetConnection_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.net.NetConnection")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NetConnection_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetConnection_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NetConnection","\xbb","\xba","\xb8","\x81"); }

		static void __boot();
		static int defaultObjectEncoding;
		Dynamic client;
		bool connected;
		int objectEncoding;
		::String uri;
		::String connectedProxyType;
		bool usingTLS;
		virtual Void connect( ::String command,Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5);
		Dynamic connect_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual bool get_connected( );
		Dynamic get_connected_dyn();

		virtual ::String get_proxyType( );
		Dynamic get_proxyType_dyn();

		virtual ::String set_proxyType( ::String inType);
		Dynamic set_proxyType_dyn();

};

} // end namespace nme
} // end namespace net

#endif /* INCLUDED_nme_net_NetConnection */ 
