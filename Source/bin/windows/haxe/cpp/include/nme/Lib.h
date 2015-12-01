#ifndef INCLUDED_nme_Lib
#define INCLUDED_nme_Lib

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,Lib)
HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,ManagedStage)
HX_DECLARE_CLASS2(nme,display,MovieClip)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,display,Stage)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,net,URLRequest)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  Lib_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Lib_obj OBJ_;
		Lib_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.Lib")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Lib_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lib_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Lib","\x25","\x07","\x3a","\x00"); }

		static void __boot();
		static ::nme::display::MovieClip nmeCurrent;
		static ::nme::display::Stage nmeStage;
		static int FULLSCREEN;
		static int BORDERLESS;
		static int RESIZABLE;
		static int HARDWARE;
		static int VSYNC;
		static int HW_AA;
		static int HW_AA_HIRES;
		static int ALLOW_SHADERS;
		static int REQUIRE_SHADERS;
		static int DEPTH_BUFFER;
		static int STENCIL_BUFFER;
		static Void create( Dynamic inOnLoaded,int inWidth,int inHeight,hx::Null< Float >  inFrameRate,hx::Null< int >  inColour,hx::Null< int >  inFlags,::String inTitle,::nme::bare::Surface inIcon,Dynamic inDummy);
		static Dynamic create_dyn();

		static Dynamic load( ::String library,::String method,hx::Null< int >  args);
		static Dynamic load_dyn();

		static Void log( ::String str);
		static Dynamic log_dyn();

		static Void redirectTrace( );
		static Dynamic redirectTrace_dyn();

		static ::nme::display::ManagedStage createManagedStage( int inWidth,int inHeight,hx::Null< int >  inFlags);
		static Dynamic createManagedStage_dyn();

		static Void getURL( ::nme::net::URLRequest url,::String target);
		static Dynamic getURL_dyn();

		static int getTimer( );
		static Dynamic getTimer_dyn();

		static ::nme::display::MovieClip get_current( );
		static Dynamic get_current_dyn();

		static ::nme::display::Stage get_stage( );
		static Dynamic get_stage_dyn();

		static Void nmeSetCurrentStage( ::nme::display::Stage inStage);
		static Dynamic nmeSetCurrentStage_dyn();

		static Dynamic close;
		static Dynamic &close_dyn() { return close;}
		static Dynamic exit;
		static Dynamic &exit_dyn() { return exit;}
		static Dynamic forceClose;
		static Dynamic &forceClose_dyn() { return forceClose;}
		static Dynamic pause;
		static Dynamic &pause_dyn() { return pause;}
		static Dynamic postUICallback;
		static Dynamic &postUICallback_dyn() { return postUICallback;}
		static Dynamic resume;
		static Dynamic &resume_dyn() { return resume;}
		static Dynamic setPackage;
		static Dynamic &setPackage_dyn() { return setPackage;}
		static Dynamic setIcon;
		static Dynamic &setIcon_dyn() { return setIcon;}
		static int get_initWidth( );
		static Dynamic get_initWidth_dyn();

		static int get_initHeight( );
		static Dynamic get_initHeight_dyn();

		static ::String get_company( );
		static Dynamic get_company_dyn();

		static ::String get_version( );
		static Dynamic get_version_dyn();

		static ::String get_packageName( );
		static Dynamic get_packageName_dyn();

		static ::String get_file( );
		static Dynamic get_file_dyn();

		static ::String get_build( );
		static Dynamic get_build_dyn();

		static int get_ndllVersion( );
		static Dynamic get_ndllVersion_dyn();

		static ::String get_nmeStateVersion( );
		static Dynamic get_nmeStateVersion_dyn();

		static int get_bits( );
		static Dynamic get_bits_dyn();

		static bool get_silentRecreate( );
		static Dynamic get_silentRecreate_dyn();

		static bool set_silentRecreate( bool inVal);
		static Dynamic set_silentRecreate_dyn();

		static Dynamic nme_get_frame_stage;
		static Dynamic nme_log;
		static Dynamic &nme_log_dyn() { return nme_log;}
};

} // end namespace nme

#endif /* INCLUDED_nme_Lib */ 
