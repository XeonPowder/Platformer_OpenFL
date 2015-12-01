#ifndef INCLUDED_nme_media_StageVideo
#define INCLUDED_nme_media_StageVideo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,Stage)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,media,StageVideo)
HX_DECLARE_CLASS2(nme,net,NetStream)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  StageVideo_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef StageVideo_obj OBJ_;
		StageVideo_obj();
		Void __construct(::nme::display::Stage inStage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.media.StageVideo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< StageVideo_obj > __new(::nme::display::Stage inStage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StageVideo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("StageVideo","\xfd","\x6c","\xfd","\x80"); }

		static void __boot();
		static ::String playComplete;
		static ::String playSwitch;
		static ::String playTransitionComplete;
		static ::String playStart;
		static ::String playStop;
		static ::String playStreamNotFound;
		static ::String playFailed;
		static ::String seekFailed;
		static ::String seekNotify;
		static ::String seekInvalidTime;
		static ::String failed;
		static int PAUSE;
		static int RESUME;
		static int TOGGLE;
		static int PAUSE_LEN;
		static int ALL_LEN;
		static int PLAY_STATUS_COMPLETE;
		static int PLAY_STATUS_SWITCH;
		static int PLAY_STATUS_TRANSITION;
		static int PLAY_STATUS_ERROR;
		static int PLAY_STATUS_NOT_STARTED;
		static int PLAY_STATUS_STARTED;
		static int PLAY_STATUS_STOPPED;
		static int SEEK_FINISHED_OK;
		static int SEEK_FINISHED_EARLY;
		static int SEEK_FINISHED_ERROR;
		static Dynamic nme_sv_create;
		static Dynamic &nme_sv_create_dyn() { return nme_sv_create;}
		static Dynamic nme_sv_destroy;
		static Dynamic &nme_sv_destroy_dyn() { return nme_sv_destroy;}
		static Dynamic nme_sv_action;
		static Dynamic &nme_sv_action_dyn() { return nme_sv_action;}
		static Dynamic nme_sv_play;
		static Dynamic &nme_sv_play_dyn() { return nme_sv_play;}
		static Dynamic nme_sv_seek;
		static Dynamic &nme_sv_seek_dyn() { return nme_sv_seek;}
		static Dynamic nme_sv_get_time;
		static Dynamic &nme_sv_get_time_dyn() { return nme_sv_get_time;}
		static Dynamic nme_sv_get_buffered_percent;
		static Dynamic &nme_sv_get_buffered_percent_dyn() { return nme_sv_get_buffered_percent;}
		static Dynamic nme_sv_viewport;
		static Dynamic &nme_sv_viewport_dyn() { return nme_sv_viewport;}
		static Dynamic nme_sv_pan;
		static Dynamic &nme_sv_pan_dyn() { return nme_sv_pan;}
		static Dynamic nme_sv_zoom;
		static Dynamic &nme_sv_zoom_dyn() { return nme_sv_zoom;}
		static Dynamic nme_sv_set_sound_transform;
		static Dynamic &nme_sv_set_sound_transform_dyn() { return nme_sv_set_sound_transform;}
		Array< ::String > colorSpaces;
		int depth;
		int videoHeight;
		int videoWidth;
		Float duration;
		Float seekFrom;
		int seekCode;
		Dynamic nmeHandle;
		::nme::geom::Point nmePan;
		::nme::geom::Point nmeZoom;
		::nme::geom::Rectangle nmeViewport;
		::nme::net::NetStream nmeNetStream;
		::nme::display::Stage nmeStage;
		virtual Array< ::String > get_colorSpaces( );
		Dynamic get_colorSpaces_dyn();

		virtual Void attachNetStream( ::nme::net::NetStream inNetStream);
		Dynamic attachNetStream_dyn();

		virtual ::nme::geom::Point get_pan( );
		Dynamic get_pan_dyn();

		virtual ::nme::geom::Point set_pan( ::nme::geom::Point inPan);
		Dynamic set_pan_dyn();

		virtual ::nme::geom::Point get_zoom( );
		Dynamic get_zoom_dyn();

		virtual ::nme::geom::Point set_zoom( ::nme::geom::Point inZoom);
		Dynamic set_zoom_dyn();

		virtual ::nme::geom::Rectangle get_viewPort( );
		Dynamic get_viewPort_dyn();

		virtual ::nme::geom::Rectangle set_viewPort( ::nme::geom::Rectangle inVp);
		Dynamic set_viewPort_dyn();

		virtual bool nmeCreate( );
		Dynamic nmeCreate_dyn();

		virtual Void nmeDestroy( );
		Dynamic nmeDestroy_dyn();

		virtual Float nmeGetTime( );
		Dynamic nmeGetTime_dyn();

		virtual Void nmeSeek( Float inTime);
		Dynamic nmeSeek_dyn();

		virtual Void nmePlay( ::String inUrl,hx::Null< Float >  inStart,hx::Null< Float >  inLength);
		Dynamic nmePlay_dyn();

		virtual Void nmePause( );
		Dynamic nmePause_dyn();

		virtual Void nmeTogglePause( );
		Dynamic nmeTogglePause_dyn();

		virtual Void nmeResume( );
		Dynamic nmeResume_dyn();

		virtual Void nmeSetVolume( Float inVolume);
		Dynamic nmeSetVolume_dyn();

		virtual int nmeGetBytesTotal( );
		Dynamic nmeGetBytesTotal_dyn();

		virtual int nmeGetDecodedFrames( );
		Dynamic nmeGetDecodedFrames_dyn();

		virtual int nmeGetBytesLoaded( );
		Dynamic nmeGetBytesLoaded_dyn();

		virtual Void nmeSetSoundTransform( Float inVolume,Float inRightness);
		Dynamic nmeSetSoundTransform_dyn();

		virtual Void _native_meta_data( );
		Dynamic _native_meta_data_dyn();

		virtual Void _native_set_data( int inWidth,int inHeight,Float inDuration);
		Dynamic _native_set_data_dyn();

		virtual Void _native_play_status( int inStatus);
		Dynamic _native_play_status_dyn();

		virtual Void _native_on_seek( );
		Dynamic _native_on_seek_dyn();

		virtual Void _native_on_seek_data( int inCode,Float inWhen);
		Dynamic _native_on_seek_data_dyn();

};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_StageVideo */ 
