#ifndef INCLUDED_nme_app_Application
#define INCLUDED_nme_app_Application

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(cpp,vm,Mutex)
HX_DECLARE_CLASS2(nme,app,Application)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,app,Window)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Application_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Application_obj OBJ_;
		Application_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.app.Application")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Application_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Application_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Application","\x30","\x43","\x71","\x0e"); }

		static void __boot();
		static int OrientationPortrait;
		static int OrientationPortraitUpsideDown;
		static int OrientationLandscapeRight;
		static int OrientationLandscapeLeft;
		static int OrientationFaceUp;
		static int OrientationFaceDown;
		static int OrientationPortraitAny;
		static int OrientationLandscapeAny;
		static int OrientationAny;
		static int FULLSCREEN;
		static int BORDERLESS;
		static int RESIZABLE;
		static int HARDWARE;
		static int VSYNC;
		static int HW_AA;
		static int HW_AA_HIRES;
		static int DEPTH_BUFFER;
		static int STENCIL_BUFFER;
		static Dynamic nmeFrameHandle;
		static ::nme::app::Window nmeWindow;
		static bool silentRecreate;
		static bool sIsInit;
		static int initHeight;
		static int initWidth;
		static Float initFrameRate;
		static ::String company;
		static ::String version;
		static ::String packageName;
		static ::String file;
		static ::String build;
		static int ndllVersion;
		static ::String nmeStateVersion;
		static int bits;
		static Dynamic onQuit;
		static Dynamic &onQuit_dyn() { return onQuit;}
		static bool nmeQuitting;
		static Array< ::nme::app::IPollClient > pollClientList;
		static cpp::ArrayBase mainThreadJobs;
		static ::cpp::vm::Mutex mainThreadJobMutex;
		static Void createWindow( Dynamic inOnLoaded,Dynamic inParams);
		static Dynamic createWindow_dyn();

		static Void close( );
		static Dynamic close_dyn();

		static Void addPollClient( ::nme::app::IPollClient client,hx::Null< bool >  inAtEnd);
		static Dynamic addPollClient_dyn();

		static Void pollThreadJobs( );
		static Dynamic pollThreadJobs_dyn();

		static Void pollClients( Float timestamp);
		static Dynamic pollClients_dyn();

		static Float getNextWake( Float timestamp);
		static Dynamic getNextWake_dyn();

		static Void setFixedOrientation( int inOrientation);
		static Dynamic setFixedOrientation_dyn();

		static Void exit( );
		static Dynamic exit_dyn();

		static Void forceClose( );
		static Dynamic forceClose_dyn();

		static Void pause( );
		static Dynamic pause_dyn();

		static Void runOnMainThread( Dynamic inCallback);
		static Dynamic runOnMainThread_dyn();

		static Void postUICallback( Dynamic inCallback);
		static Dynamic postUICallback_dyn();

		static Void resume( );
		static Dynamic resume_dyn();

		static Void setIcon( ::String path);
		static Dynamic setIcon_dyn();

		static Void setPackage( ::String inCompany,::String inFile,::String inPack,::String inVersion);
		static Dynamic setPackage_dyn();

		static ::String get_build( );
		static Dynamic get_build_dyn();

		static int get_ndllVersion( );
		static Dynamic get_ndllVersion_dyn();

		static ::String get_nmeStateVersion( );
		static Dynamic get_nmeStateVersion_dyn();

		static int get_bits( );
		static Dynamic get_bits_dyn();

		static Dynamic nme_set_package;
		static Dynamic &nme_set_package_dyn() { return nme_set_package;}
		static Dynamic nme_get_frame_stage;
		static Dynamic nme_pause_animation;
		static Dynamic &nme_pause_animation_dyn() { return nme_pause_animation;}
		static Dynamic nme_resume_animation;
		static Dynamic &nme_resume_animation_dyn() { return nme_resume_animation;}
		static Dynamic nme_get_ndll_version;
		static Dynamic &nme_get_ndll_version_dyn() { return nme_get_ndll_version;}
		static Dynamic nme_get_nme_state_version;
		static Dynamic &nme_get_nme_state_version_dyn() { return nme_get_nme_state_version;}
		static Dynamic nme_stage_set_fixed_orientation;
		static Dynamic &nme_stage_set_fixed_orientation_dyn() { return nme_stage_set_fixed_orientation;}
		static Dynamic nme_get_bits;
		static Dynamic &nme_get_bits_dyn() { return nme_get_bits;}
};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_Application */ 
