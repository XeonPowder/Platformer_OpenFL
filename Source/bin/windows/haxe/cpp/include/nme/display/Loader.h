#ifndef INCLUDED_nme_display_Loader
#define INCLUDED_nme_display_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,display,BitmapData)
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
HX_DECLARE_CLASS2(nme,_system,LoaderContext)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public ::nme::display::Sprite_obj{
	public:
		typedef ::nme::display::Sprite_obj super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		::nme::display::DisplayObject content;
		::nme::display::LoaderInfo contentLoaderInfo;
		::nme::display::BitmapData nmeImage;
		virtual bool doLoad( ::nme::utils::ByteArray inBytes);
		Dynamic doLoad_dyn();

		virtual Void load( ::nme::net::URLRequest request,::nme::_system::LoaderContext context);
		Dynamic load_dyn();

		virtual Void loadBytes( ::nme::utils::ByteArray bytes,::nme::_system::LoaderContext context);
		Dynamic loadBytes_dyn();

		virtual Void unload( );
		Dynamic unload_dyn();

		virtual Void onData( ::nme::events::Event event);
		Dynamic onData_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_Loader */ 
