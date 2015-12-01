#ifndef INCLUDED_nme_net_URLLoader
#define INCLUDED_nme_net_URLLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,net,URLLoader)
HX_DECLARE_CLASS2(nme,net,URLLoaderDataFormat)
HX_DECLARE_CLASS2(nme,net,URLRequest)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  URLLoader_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef URLLoader_obj OBJ_;
		URLLoader_obj();
		Void __construct(::nme::net::URLRequest request);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.net.URLLoader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< URLLoader_obj > __new(::nme::net::URLRequest request);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~URLLoader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("URLLoader","\xc2","\x68","\xb3","\x41"); }

		static void __boot();
		static ::List activeLoaders;
		static int urlInvalid;
		static int urlInit;
		static int urlLoading;
		static int urlComplete;
		static int urlError;
		static bool hasActive( );
		static Dynamic hasActive_dyn();

		static Void initialize( ::String inCACertFilePath);
		static Dynamic initialize_dyn();

		static bool nmeLoadPending( );
		static Dynamic nmeLoadPending_dyn();

		static Void nmePollData( );
		static Dynamic nmePollData_dyn();

		static Dynamic nme_curl_create;
		static Dynamic &nme_curl_create_dyn() { return nme_curl_create;}
		static Dynamic nme_curl_process_loaders;
		static Dynamic &nme_curl_process_loaders_dyn() { return nme_curl_process_loaders;}
		static Dynamic nme_curl_update_loader;
		static Dynamic &nme_curl_update_loader_dyn() { return nme_curl_update_loader;}
		static Dynamic nme_curl_get_code;
		static Dynamic &nme_curl_get_code_dyn() { return nme_curl_get_code;}
		static Dynamic nme_curl_get_error_message;
		static Dynamic &nme_curl_get_error_message_dyn() { return nme_curl_get_error_message;}
		static Dynamic nme_curl_get_data;
		static Dynamic &nme_curl_get_data_dyn() { return nme_curl_get_data;}
		static Dynamic nme_curl_get_cookies;
		static Dynamic &nme_curl_get_cookies_dyn() { return nme_curl_get_cookies;}
		static Dynamic nme_curl_get_headers;
		static Dynamic &nme_curl_get_headers_dyn() { return nme_curl_get_headers;}
		static Dynamic nme_curl_initialize;
		static Dynamic &nme_curl_initialize_dyn() { return nme_curl_initialize;}
		int bytesLoaded;
		int bytesTotal;
		Dynamic data;
		::nme::net::URLLoaderDataFormat dataFormat;
		Dynamic nmeHandle;
		int state;
		Dynamic nmeOnComplete;
		Dynamic &nmeOnComplete_dyn() { return nmeOnComplete;}
		virtual Void close( );
		Dynamic close_dyn();

		virtual Array< ::String > getCookies( );
		Dynamic getCookies_dyn();

		virtual Void load( ::nme::net::URLRequest request);
		Dynamic load_dyn();

		virtual Void nmeDataComplete( );
		Dynamic nmeDataComplete_dyn();

		virtual Void onError( ::String msg);
		Dynamic onError_dyn();

		virtual Void dispatchHTTPStatus( int code);
		Dynamic dispatchHTTPStatus_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace nme
} // end namespace net

#endif /* INCLUDED_nme_net_URLLoader */ 
