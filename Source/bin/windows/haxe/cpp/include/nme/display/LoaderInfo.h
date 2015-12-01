#ifndef INCLUDED_nme_display_LoaderInfo
#define INCLUDED_nme_display_LoaderInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,Loader)
HX_DECLARE_CLASS2(nme,display,LoaderInfo)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,net,URLLoader)
HX_DECLARE_CLASS2(nme,net,URLRequest)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  LoaderInfo_obj : public ::nme::net::URLLoader_obj{
	public:
		typedef ::nme::net::URLLoader_obj super;
		typedef LoaderInfo_obj OBJ_;
		LoaderInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.LoaderInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoaderInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LoaderInfo","\x41","\xb6","\x95","\xad"); }

		static ::nme::display::LoaderInfo create( ::nme::display::Loader ldr);
		static Dynamic create_dyn();

		::nme::utils::ByteArray bytes;
		bool childAllowsParent;
		::nme::display::DisplayObject content;
		::String contentType;
		Float frameRate;
		int height;
		::nme::display::Loader loader;
		::String loaderURL;
		Dynamic parameters;
		bool parentAllowsChild;
		bool sameDomain;
		::nme::events::EventDispatcher sharedEvents;
		::String url;
		int width;
		::String pendingURL;
		virtual Void load( ::nme::net::URLRequest request);

		virtual Void onURLLoaded( ::nme::events::Event event);
		Dynamic onURLLoaded_dyn();

		virtual ::nme::utils::ByteArray get_bytes( );
		Dynamic get_bytes_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_LoaderInfo */ 