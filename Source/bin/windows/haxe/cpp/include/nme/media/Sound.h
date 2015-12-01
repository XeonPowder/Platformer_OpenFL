#ifndef INCLUDED_nme_media_Sound
#define INCLUDED_nme_media_Sound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,media,ID3Info)
HX_DECLARE_CLASS2(nme,media,Sound)
HX_DECLARE_CLASS2(nme,media,SoundChannel)
HX_DECLARE_CLASS2(nme,media,SoundLoaderContext)
HX_DECLARE_CLASS2(nme,media,SoundTransform)
HX_DECLARE_CLASS2(nme,net,URLRequest)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  Sound_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef Sound_obj OBJ_;
		Sound_obj();
		Void __construct(::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.media.Sound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Sound_obj > __new(::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Sound_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"); }

		static void __boot();
		static Dynamic nme_sound_from_file;
		static Dynamic &nme_sound_from_file_dyn() { return nme_sound_from_file;}
		static Dynamic nme_sound_from_data;
		static Dynamic &nme_sound_from_data_dyn() { return nme_sound_from_data;}
		static Dynamic nme_sound_get_id3;
		static Dynamic &nme_sound_get_id3_dyn() { return nme_sound_get_id3;}
		static Dynamic nme_sound_get_length;
		static Dynamic &nme_sound_get_length_dyn() { return nme_sound_get_length;}
		static Dynamic nme_sound_close;
		static Dynamic &nme_sound_close_dyn() { return nme_sound_close;}
		static Dynamic nme_sound_get_status;
		static Dynamic &nme_sound_get_status_dyn() { return nme_sound_get_status;}
		static Dynamic nme_sound_get_engine;
		static Dynamic &nme_sound_get_engine_dyn() { return nme_sound_get_engine;}
		static Dynamic nme_sound_channel_create_dynamic;
		static Dynamic &nme_sound_channel_create_dynamic_dyn() { return nme_sound_channel_create_dynamic;}
		int bytesLoaded;
		int bytesTotal;
		::nme::media::ID3Info id3;
		bool isBuffering;
		Float length;
		::String url;
		Dynamic nmeHandle;
		bool nmeLoading;
		bool nmeDynamicSound;
		virtual Dynamic getEngine( );
		Dynamic getEngine_dyn();

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void load( ::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  forcePlayAsMusic,::String inEngine);
		Dynamic load_dyn();

		virtual Void loadCompressedDataFromByteArray( ::nme::utils::ByteArray bytes,int length,hx::Null< bool >  forcePlayAsMusic,::String inEngine);
		Dynamic loadCompressedDataFromByteArray_dyn();

		virtual Void loadPCMFromByteArray( ::nme::utils::ByteArray Bytes,int samples,::String format,hx::Null< bool >  stereo,hx::Null< Float >  sampleRate,::String inEngine);
		Dynamic loadPCMFromByteArray_dyn();

		virtual Void nmeCheckLoading( );
		Dynamic nmeCheckLoading_dyn();

		virtual Void nmeOnError( ::String msg);
		Dynamic nmeOnError_dyn();

		virtual ::nme::media::SoundChannel play( hx::Null< Float >  startTime,hx::Null< int >  loops,::nme::media::SoundTransform sndTransform);
		Dynamic play_dyn();

		virtual ::nme::media::ID3Info get_id3( );
		Dynamic get_id3_dyn();

		virtual bool get_isBuffering( );
		Dynamic get_isBuffering_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_Sound */ 
