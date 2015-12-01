#ifndef INCLUDED_nme_media_SoundChannel
#define INCLUDED_nme_media_SoundChannel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,media,AudioSampleFormat)
HX_DECLARE_CLASS2(nme,media,SampleRate)
HX_DECLARE_CLASS2(nme,media,SoundChannel)
HX_DECLARE_CLASS2(nme,media,SoundTransform)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundChannel_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef SoundChannel_obj OBJ_;
		SoundChannel_obj();
		Void __construct(Dynamic inSoundHandle,Float startTime,int loops,::nme::media::SoundTransform sndTransform);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.media.SoundChannel")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundChannel_obj > __new(Dynamic inSoundHandle,Float startTime,int loops,::nme::media::SoundTransform sndTransform);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundChannel_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SoundChannel","\xd4","\xaf","\x1c","\xa9"); }

		static void __boot();
		static int nmeDynamicSoundCount;
		static Array< ::Dynamic > nmeIncompleteList;
		static ::nme::media::SoundChannel createAsync( ::nme::media::SampleRate inRate,bool inIsStereo,::nme::media::AudioSampleFormat sampleFormat,Dynamic asyncDataRequired,::String inEngine);
		static Dynamic createAsync_dyn();

		static ::nme::media::SoundChannel createDynamic( Dynamic inSoundHandle,::nme::media::SoundTransform sndTransform,::nme::events::EventDispatcher dataProvider);
		static Dynamic createDynamic_dyn();

		static bool nmeCompletePending( );
		static Dynamic nmeCompletePending_dyn();

		static Void nmePollComplete( );
		static Dynamic nmePollComplete_dyn();

		static Dynamic nme_sound_channel_is_complete;
		static Dynamic &nme_sound_channel_is_complete_dyn() { return nme_sound_channel_is_complete;}
		static Dynamic nme_sound_channel_get_left;
		static Dynamic &nme_sound_channel_get_left_dyn() { return nme_sound_channel_get_left;}
		static Dynamic nme_sound_channel_get_right;
		static Dynamic &nme_sound_channel_get_right_dyn() { return nme_sound_channel_get_right;}
		static Dynamic nme_sound_channel_get_position;
		static Dynamic &nme_sound_channel_get_position_dyn() { return nme_sound_channel_get_position;}
		static Dynamic nme_sound_channel_set_position;
		static Dynamic &nme_sound_channel_set_position_dyn() { return nme_sound_channel_set_position;}
		static Dynamic nme_sound_channel_get_data_position;
		static Dynamic &nme_sound_channel_get_data_position_dyn() { return nme_sound_channel_get_data_position;}
		static Dynamic nme_sound_channel_stop;
		static Dynamic &nme_sound_channel_stop_dyn() { return nme_sound_channel_stop;}
		static Dynamic nme_sound_channel_create;
		static Dynamic &nme_sound_channel_create_dyn() { return nme_sound_channel_create;}
		static Dynamic nme_sound_channel_set_transform;
		static Dynamic &nme_sound_channel_set_transform_dyn() { return nme_sound_channel_set_transform;}
		static Dynamic nme_sound_channel_needs_data;
		static Dynamic &nme_sound_channel_needs_data_dyn() { return nme_sound_channel_needs_data;}
		static Dynamic nme_sound_channel_add_data;
		static Dynamic &nme_sound_channel_add_data_dyn() { return nme_sound_channel_add_data;}
		static Dynamic nme_sound_channel_create_async;
		static Dynamic &nme_sound_channel_create_async_dyn() { return nme_sound_channel_create_async;}
		static Dynamic nme_sound_channel_post_buffer;
		static Dynamic &nme_sound_channel_post_buffer_dyn() { return nme_sound_channel_post_buffer;}
		Float leftPeak;
		Float rightPeak;
		Float pitch;
		bool nmeStopped;
		Dynamic nmeHandle;
		::nme::media::SoundTransform nmeTransform;
		::nme::events::EventDispatcher nmeDataProvider;
		virtual Void postBuffer( ::nme::utils::ByteArray inData);
		Dynamic postBuffer_dyn();

		virtual bool nmeCheckComplete( );
		Dynamic nmeCheckComplete_dyn();

		virtual Void dispatchComplete( );
		Dynamic dispatchComplete_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Float get_leftPeak( );
		Dynamic get_leftPeak_dyn();

		virtual Float get_rightPeak( );
		Dynamic get_rightPeak_dyn();

		virtual Float get_position( );
		Dynamic get_position_dyn();

		virtual Float set_position( Float value);
		Dynamic set_position_dyn();

		virtual ::nme::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual ::nme::media::SoundTransform set_soundTransform( ::nme::media::SoundTransform inTransform);
		Dynamic set_soundTransform_dyn();

};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_SoundChannel */ 
