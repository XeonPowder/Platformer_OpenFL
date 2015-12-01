#ifndef INCLUDED_nme_net_NetStream
#define INCLUDED_nme_net_NetStream

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,media,SoundTransform)
HX_DECLARE_CLASS2(nme,media,StageVideo)
HX_DECLARE_CLASS2(nme,net,NetConnection)
HX_DECLARE_CLASS2(nme,net,NetStream)
namespace nme{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  NetStream_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef NetStream_obj OBJ_;
		NetStream_obj();
		Void __construct(::nme::net::NetConnection inConnection,::String peerID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.net.NetStream")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< NetStream_obj > __new(::nme::net::NetConnection inConnection,::String peerID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NetStream_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("NetStream","\x9d","\x5c","\xf0","\xf3"); }

		static void __boot();
		static ::String CONNECT_TO_FMS;
		static ::String DIRECT_CONNECTIONS;
		int bytesTotal;
		int bytesLoaded;
		int decodedFrames;
		Dynamic client;
		int objectEncoding;
		cpp::ArrayBase peerStreams;
		Float time;
		::nme::net::NetConnection nmeConnection;
		bool nmeReceiveAudio;
		bool nmeReceiveVideo;
		Float nmeVolume;
		Float nmeSoundPan;
		::String nmeFilename;
		bool nmePaused;
		Float nmeSeek;
		::nme::media::StageVideo nmeAttachedVideo;
		virtual Void attach( ::nme::net::NetConnection inConnection);
		Dynamic attach_dyn();

		virtual Float get_time( );
		Dynamic get_time_dyn();

		virtual Void seek( Float offset);
		Dynamic seek_dyn();

		virtual Void close( );
		Dynamic close_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void play( ::String inFilename,hx::Null< Float >  startSeconds,Dynamic lenSeconds,Dynamic p4,Dynamic p5);
		Dynamic play_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void togglePause( );
		Dynamic togglePause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void receiveAudio( bool flag);
		Dynamic receiveAudio_dyn();

		virtual Void receiveVideo( bool flag);
		Dynamic receiveVideo_dyn();

		virtual bool onPeerConnect( ::nme::net::NetStream subscriber);
		Dynamic onPeerConnect_dyn();

		virtual int get_bytesTotal( );
		Dynamic get_bytesTotal_dyn();

		virtual int get_bytesLoaded( );
		Dynamic get_bytesLoaded_dyn();

		virtual int get_decodedFrames( );
		Dynamic get_decodedFrames_dyn();

		virtual cpp::ArrayBase get_peerStreams( );
		Dynamic get_peerStreams_dyn();

		virtual ::nme::media::SoundTransform get_soundTransform( );
		Dynamic get_soundTransform_dyn();

		virtual ::nme::media::SoundTransform set_soundTransform( ::nme::media::SoundTransform inTransform);
		Dynamic set_soundTransform_dyn();

};

} // end namespace nme
} // end namespace net

#endif /* INCLUDED_nme_net_NetStream */ 
