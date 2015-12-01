#include <hxcpp.h>

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_media_SoundTransform
#include <nme/media/SoundTransform.h>
#endif
#ifndef INCLUDED_nme_media_StageVideo
#include <nme/media/StageVideo.h>
#endif
#ifndef INCLUDED_nme_net_NetConnection
#include <nme/net/NetConnection.h>
#endif
#ifndef INCLUDED_nme_net_NetStream
#include <nme/net/NetStream.h>
#endif
namespace nme{
namespace net{

Void NetStream_obj::__construct(::nme::net::NetConnection inConnection,::String peerID)
{
HX_STACK_FRAME("nme.net.NetStream","new",0xa27ef116,"nme.net.NetStream.new","nme/net/NetStream.hx",36,0x2e74929c)
HX_STACK_THIS(this)
HX_STACK_ARG(inConnection,"inConnection")
HX_STACK_ARG(peerID,"peerID")
{
	HX_STACK_LINE(37)
	super::__construct(null());
	HX_STACK_LINE(38)
	this->nmeConnection = inConnection;
	HX_STACK_LINE(39)
	this->client = null();
	HX_STACK_LINE(40)
	this->nmeReceiveAudio = true;
	HX_STACK_LINE(41)
	this->nmeReceiveVideo = true;
	HX_STACK_LINE(42)
	this->nmeVolume = ((Float)1.0);
	HX_STACK_LINE(43)
	this->nmeSoundPan = ((Float)0.0);
	HX_STACK_LINE(44)
	this->objectEncoding = (int)0;
	HX_STACK_LINE(45)
	this->nmePaused = false;
	HX_STACK_LINE(46)
	this->nmeSeek = ((Float)0.0);
}
;
	return null();
}

//NetStream_obj::~NetStream_obj() { }

Dynamic NetStream_obj::__CreateEmpty() { return  new NetStream_obj; }
hx::ObjectPtr< NetStream_obj > NetStream_obj::__new(::nme::net::NetConnection inConnection,::String peerID)
{  hx::ObjectPtr< NetStream_obj > _result_ = new NetStream_obj();
	_result_->__construct(inConnection,peerID);
	return _result_;}

Dynamic NetStream_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetStream_obj > _result_ = new NetStream_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void NetStream_obj::attach( ::nme::net::NetConnection inConnection){
{
		HX_STACK_FRAME("nme.net.NetStream","attach",0x49e5b0cf,"nme.net.NetStream.attach","nme/net/NetStream.hx",50,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inConnection,"inConnection")
		HX_STACK_LINE(50)
		this->nmeConnection = inConnection;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,attach,(void))

Float NetStream_obj::get_time( ){
	HX_STACK_FRAME("nme.net.NetStream","get_time",0x9f2c1320,"nme.net.NetStream.get_time","nme/net/NetStream.hx",53,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	if ((tmp1)){
		HX_STACK_LINE(55)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		Float tmp3 = tmp2->nmeGetTime();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		return tmp3;
	}
	HX_STACK_LINE(56)
	return ((Float)0.0);
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_time,return )

Void NetStream_obj::seek( Float offset){
{
		HX_STACK_FRAME("nme.net.NetStream","seek",0x8fe20402,"nme.net.NetStream.seek","nme/net/NetStream.hx",59,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(60)
		this->nmeSeek = offset;
		HX_STACK_LINE(61)
		::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(62)
			::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			Float tmp3 = offset;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			tmp2->nmeSeek(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,seek,(void))

Void NetStream_obj::close( ){
{
		HX_STACK_FRAME("nme.net.NetStream","close",0x242051ee,"nme.net.NetStream.close","nme/net/NetStream.hx",65,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		if ((tmp1)){
			HX_STACK_LINE(67)
			::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(67)
			tmp2->nmeDestroy();
		}
		HX_STACK_LINE(68)
		this->nmeFilename = null();
		HX_STACK_LINE(69)
		this->nmeSeek = ((Float)0.0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,close,(void))

Void NetStream_obj::dispose( ){
{
		HX_STACK_FRAME("nme.net.NetStream","dispose",0xec753455,"nme.net.NetStream.dispose","nme/net/NetStream.hx",71,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,dispose,(void))

Void NetStream_obj::play( ::String inFilename,hx::Null< Float >  __o_startSeconds,Dynamic __o_lenSeconds,Dynamic p4,Dynamic p5){
Float startSeconds = __o_startSeconds.Default(((Float)0.0));
Dynamic lenSeconds = __o_lenSeconds.Default(-1);
	HX_STACK_FRAME("nme.net.NetStream","play",0x8debac7e,"nme.net.NetStream.play","nme/net/NetStream.hx",74,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFilename,"inFilename")
	HX_STACK_ARG(startSeconds,"startSeconds")
	HX_STACK_ARG(lenSeconds,"lenSeconds")
	HX_STACK_ARG(p4,"p4")
	HX_STACK_ARG(p5,"p5")
{
		HX_STACK_LINE(75)
		this->nmeFilename = inFilename;
		HX_STACK_LINE(76)
		::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(76)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		if ((tmp1)){
			HX_STACK_LINE(77)
			::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(77)
			::String tmp3 = this->nmeFilename;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(77)
			Float tmp4 = startSeconds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			Dynamic tmp5 = lenSeconds;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			tmp2->nmePlay(tmp3,tmp4,tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(NetStream_obj,play,(void))

Void NetStream_obj::pause( ){
{
		HX_STACK_FRAME("nme.net.NetStream","pause",0x9915112c,"nme.net.NetStream.pause","nme/net/NetStream.hx",83,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->nmePaused = true;
		HX_STACK_LINE(85)
		::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		if ((tmp1)){
			HX_STACK_LINE(86)
			::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(86)
			tmp2->nmePause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,pause,(void))

Void NetStream_obj::togglePause( ){
{
		HX_STACK_FRAME("nme.net.NetStream","togglePause",0x4f0a5578,"nme.net.NetStream.togglePause","nme/net/NetStream.hx",89,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		bool tmp = this->nmePaused;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		this->nmePaused = tmp1;
		HX_STACK_LINE(91)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(91)
		if ((tmp3)){
			HX_STACK_LINE(92)
			::nme::media::StageVideo tmp4 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(92)
			tmp4->nmeTogglePause();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,togglePause,(void))

Void NetStream_obj::resume( ){
{
		HX_STACK_FRAME("nme.net.NetStream","resume",0x725a1eb7,"nme.net.NetStream.resume","nme/net/NetStream.hx",95,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		this->nmePaused = false;
		HX_STACK_LINE(97)
		::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(98)
			::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			tmp2->nmeResume();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,resume,(void))

Void NetStream_obj::receiveAudio( bool flag){
{
		HX_STACK_FRAME("nme.net.NetStream","receiveAudio",0xb6bae87d,"nme.net.NetStream.receiveAudio","nme/net/NetStream.hx",102,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(102)
		this->nmeReceiveAudio = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,receiveAudio,(void))

Void NetStream_obj::receiveVideo( bool flag){
{
		HX_STACK_FRAME("nme.net.NetStream","receiveVideo",0xc6368422,"nme.net.NetStream.receiveVideo","nme/net/NetStream.hx",106,0x2e74929c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(106)
		this->nmeReceiveVideo = flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,receiveVideo,(void))

bool NetStream_obj::onPeerConnect( ::nme::net::NetStream subscriber){
	HX_STACK_FRAME("nme.net.NetStream","onPeerConnect",0xc79457bf,"nme.net.NetStream.onPeerConnect","nme/net/NetStream.hx",109,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(subscriber,"subscriber")
	HX_STACK_LINE(109)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,onPeerConnect,return )

int NetStream_obj::get_bytesTotal( ){
	HX_STACK_FRAME("nme.net.NetStream","get_bytesTotal",0x6f50aeac,"nme.net.NetStream.get_bytesTotal","nme/net/NetStream.hx",112,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(113)
	::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	if ((tmp1)){
		HX_STACK_LINE(114)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		int tmp3 = tmp2->nmeGetBytesTotal();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		return tmp3;
	}
	HX_STACK_LINE(115)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_bytesTotal,return )

int NetStream_obj::get_bytesLoaded( ){
	HX_STACK_FRAME("nme.net.NetStream","get_bytesLoaded",0xb7e0781d,"nme.net.NetStream.get_bytesLoaded","nme/net/NetStream.hx",118,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(119)
	::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp1)){
		HX_STACK_LINE(120)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		int tmp3 = tmp2->nmeGetBytesLoaded();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		return tmp3;
	}
	HX_STACK_LINE(121)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_bytesLoaded,return )

int NetStream_obj::get_decodedFrames( ){
	HX_STACK_FRAME("nme.net.NetStream","get_decodedFrames",0xd96c0a49,"nme.net.NetStream.get_decodedFrames","nme/net/NetStream.hx",124,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp1)){
		HX_STACK_LINE(126)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		int tmp3 = tmp2->nmeGetDecodedFrames();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		return tmp3;
	}
	HX_STACK_LINE(127)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_decodedFrames,return )

cpp::ArrayBase NetStream_obj::get_peerStreams( ){
	HX_STACK_FRAME("nme.net.NetStream","get_peerStreams",0xd2118bbe,"nme.net.NetStream.get_peerStreams","nme/net/NetStream.hx",129,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(129)
	return Dynamic( Array_obj<Dynamic>::__new() );
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_peerStreams,return )

::nme::media::SoundTransform NetStream_obj::get_soundTransform( ){
	HX_STACK_FRAME("nme.net.NetStream","get_soundTransform",0xe60eeb70,"nme.net.NetStream.get_soundTransform","nme/net/NetStream.hx",132,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	Float tmp = this->nmeVolume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	Float tmp1 = this->nmeSoundPan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::nme::media::SoundTransform tmp2 = ::nme::media::SoundTransform_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(133)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(NetStream_obj,get_soundTransform,return )

::nme::media::SoundTransform NetStream_obj::set_soundTransform( ::nme::media::SoundTransform inTransform){
	HX_STACK_FRAME("nme.net.NetStream","set_soundTransform",0xc2be1de4,"nme.net.NetStream.set_soundTransform","nme/net/NetStream.hx",138,0x2e74929c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTransform,"inTransform")
	HX_STACK_LINE(139)
	this->nmeVolume = inTransform->volume;
	HX_STACK_LINE(140)
	this->nmeSoundPan = inTransform->pan;
	HX_STACK_LINE(141)
	::nme::media::StageVideo tmp = this->nmeAttachedVideo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	if ((tmp1)){
		HX_STACK_LINE(142)
		::nme::media::StageVideo tmp2 = this->nmeAttachedVideo;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		Float tmp3 = this->nmeVolume;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		Float tmp4 = this->nmeSoundPan;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		tmp2->nmeSetSoundTransform(tmp3,tmp4);
	}
	HX_STACK_LINE(143)
	::nme::media::SoundTransform tmp2 = inTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NetStream_obj,set_soundTransform,return )

::String NetStream_obj::CONNECT_TO_FMS;

::String NetStream_obj::DIRECT_CONNECTIONS;


NetStream_obj::NetStream_obj()
{
}

void NetStream_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStream);
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(peerStreams,"peerStreams");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(nmeConnection,"nmeConnection");
	HX_MARK_MEMBER_NAME(nmeReceiveAudio,"nmeReceiveAudio");
	HX_MARK_MEMBER_NAME(nmeReceiveVideo,"nmeReceiveVideo");
	HX_MARK_MEMBER_NAME(nmeVolume,"nmeVolume");
	HX_MARK_MEMBER_NAME(nmeSoundPan,"nmeSoundPan");
	HX_MARK_MEMBER_NAME(nmeFilename,"nmeFilename");
	HX_MARK_MEMBER_NAME(nmePaused,"nmePaused");
	HX_MARK_MEMBER_NAME(nmeSeek,"nmeSeek");
	HX_MARK_MEMBER_NAME(nmeAttachedVideo,"nmeAttachedVideo");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStream_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(decodedFrames,"decodedFrames");
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(peerStreams,"peerStreams");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(nmeConnection,"nmeConnection");
	HX_VISIT_MEMBER_NAME(nmeReceiveAudio,"nmeReceiveAudio");
	HX_VISIT_MEMBER_NAME(nmeReceiveVideo,"nmeReceiveVideo");
	HX_VISIT_MEMBER_NAME(nmeVolume,"nmeVolume");
	HX_VISIT_MEMBER_NAME(nmeSoundPan,"nmeSoundPan");
	HX_VISIT_MEMBER_NAME(nmeFilename,"nmeFilename");
	HX_VISIT_MEMBER_NAME(nmePaused,"nmePaused");
	HX_VISIT_MEMBER_NAME(nmeSeek,"nmeSeek");
	HX_VISIT_MEMBER_NAME(nmeAttachedVideo,"nmeAttachedVideo");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NetStream_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return inCallProp != hx::paccNever ? get_time() : time; }
		if (HX_FIELD_EQ(inName,"seek") ) { return seek_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		if (HX_FIELD_EQ(inName,"attach") ) { return attach_dyn(); }
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nmeSeek") ) { return nmeSeek; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_time") ) { return get_time_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeVolume") ) { return nmeVolume; }
		if (HX_FIELD_EQ(inName,"nmePaused") ) { return nmePaused; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return inCallProp != hx::paccNever ? get_bytesTotal() : bytesTotal; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return inCallProp != hx::paccNever ? get_bytesLoaded() : bytesLoaded; }
		if (HX_FIELD_EQ(inName,"peerStreams") ) { return inCallProp != hx::paccNever ? get_peerStreams() : peerStreams; }
		if (HX_FIELD_EQ(inName,"nmeSoundPan") ) { return nmeSoundPan; }
		if (HX_FIELD_EQ(inName,"nmeFilename") ) { return nmeFilename; }
		if (HX_FIELD_EQ(inName,"togglePause") ) { return togglePause_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"receiveAudio") ) { return receiveAudio_dyn(); }
		if (HX_FIELD_EQ(inName,"receiveVideo") ) { return receiveVideo_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { return inCallProp != hx::paccNever ? get_decodedFrames() : decodedFrames; }
		if (HX_FIELD_EQ(inName,"nmeConnection") ) { return nmeConnection; }
		if (HX_FIELD_EQ(inName,"onPeerConnect") ) { return onPeerConnect_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp != hx::paccNever) return get_soundTransform(); }
		if (HX_FIELD_EQ(inName,"get_bytesTotal") ) { return get_bytesTotal_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeReceiveAudio") ) { return nmeReceiveAudio; }
		if (HX_FIELD_EQ(inName,"nmeReceiveVideo") ) { return nmeReceiveVideo; }
		if (HX_FIELD_EQ(inName,"get_bytesLoaded") ) { return get_bytesLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_peerStreams") ) { return get_peerStreams_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeAttachedVideo") ) { return nmeAttachedVideo; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_decodedFrames") ) { return get_decodedFrames_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NetStream_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nmeSeek") ) { nmeSeek=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeVolume") ) { nmeVolume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmePaused") ) { nmePaused=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"peerStreams") ) { peerStreams=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeSoundPan") ) { nmeSoundPan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeFilename") ) { nmeFilename=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"decodedFrames") ) { decodedFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeConnection") ) { nmeConnection=inValue.Cast< ::nme::net::NetConnection >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp != hx::paccNever) return set_soundTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeReceiveAudio") ) { nmeReceiveAudio=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeReceiveVideo") ) { nmeReceiveVideo=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeAttachedVideo") ) { nmeAttachedVideo=inValue.Cast< ::nme::media::StageVideo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStream_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"));
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("peerStreams","\x71","\x7a","\xfb","\xb3"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("nmeConnection","\x04","\x8f","\xbb","\xba"));
	outFields->push(HX_HCSTRING("nmeReceiveAudio","\x59","\xc4","\x47","\xa7"));
	outFields->push(HX_HCSTRING("nmeReceiveVideo","\xfe","\x5f","\xc3","\xb6"));
	outFields->push(HX_HCSTRING("nmeVolume","\xc0","\x2d","\x15","\xfa"));
	outFields->push(HX_HCSTRING("nmeSoundPan","\x34","\x71","\xda","\x6b"));
	outFields->push(HX_HCSTRING("nmeFilename","\x2d","\x78","\xa1","\xc9"));
	outFields->push(HX_HCSTRING("nmePaused","\x94","\x44","\x46","\x8a"));
	outFields->push(HX_HCSTRING("nmeSeek","\xde","\xa3","\xc1","\xd1"));
	outFields->push(HX_HCSTRING("nmeAttachedVideo","\x51","\x8f","\x7f","\x93"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsInt,(int)offsetof(NetStream_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(NetStream_obj,decodedFrames),HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetStream_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsInt,(int)offsetof(NetStream_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(NetStream_obj,peerStreams),HX_HCSTRING("peerStreams","\x71","\x7a","\xfb","\xb3")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsObject /*::nme::net::NetConnection*/ ,(int)offsetof(NetStream_obj,nmeConnection),HX_HCSTRING("nmeConnection","\x04","\x8f","\xbb","\xba")},
	{hx::fsBool,(int)offsetof(NetStream_obj,nmeReceiveAudio),HX_HCSTRING("nmeReceiveAudio","\x59","\xc4","\x47","\xa7")},
	{hx::fsBool,(int)offsetof(NetStream_obj,nmeReceiveVideo),HX_HCSTRING("nmeReceiveVideo","\xfe","\x5f","\xc3","\xb6")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,nmeVolume),HX_HCSTRING("nmeVolume","\xc0","\x2d","\x15","\xfa")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,nmeSoundPan),HX_HCSTRING("nmeSoundPan","\x34","\x71","\xda","\x6b")},
	{hx::fsString,(int)offsetof(NetStream_obj,nmeFilename),HX_HCSTRING("nmeFilename","\x2d","\x78","\xa1","\xc9")},
	{hx::fsBool,(int)offsetof(NetStream_obj,nmePaused),HX_HCSTRING("nmePaused","\x94","\x44","\x46","\x8a")},
	{hx::fsFloat,(int)offsetof(NetStream_obj,nmeSeek),HX_HCSTRING("nmeSeek","\xde","\xa3","\xc1","\xd1")},
	{hx::fsObject /*::nme::media::StageVideo*/ ,(int)offsetof(NetStream_obj,nmeAttachedVideo),HX_HCSTRING("nmeAttachedVideo","\x51","\x8f","\x7f","\x93")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NetStream_obj::CONNECT_TO_FMS,HX_HCSTRING("CONNECT_TO_FMS","\x3d","\xb8","\xc3","\x53")},
	{hx::fsString,(void *) &NetStream_obj::DIRECT_CONNECTIONS,HX_HCSTRING("DIRECT_CONNECTIONS","\x1f","\xc5","\x56","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("decodedFrames","\xbc","\x4b","\xb5","\x7c"),
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("peerStreams","\x71","\x7a","\xfb","\xb3"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("nmeConnection","\x04","\x8f","\xbb","\xba"),
	HX_HCSTRING("nmeReceiveAudio","\x59","\xc4","\x47","\xa7"),
	HX_HCSTRING("nmeReceiveVideo","\xfe","\x5f","\xc3","\xb6"),
	HX_HCSTRING("nmeVolume","\xc0","\x2d","\x15","\xfa"),
	HX_HCSTRING("nmeSoundPan","\x34","\x71","\xda","\x6b"),
	HX_HCSTRING("nmeFilename","\x2d","\x78","\xa1","\xc9"),
	HX_HCSTRING("nmePaused","\x94","\x44","\x46","\x8a"),
	HX_HCSTRING("nmeSeek","\xde","\xa3","\xc1","\xd1"),
	HX_HCSTRING("nmeAttachedVideo","\x51","\x8f","\x7f","\x93"),
	HX_HCSTRING("attach","\xc5","\xfb","\x0f","\xe0"),
	HX_HCSTRING("get_time","\x96","\x87","\xb7","\xcc"),
	HX_HCSTRING("seek","\x78","\x85","\x50","\x4c"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("togglePause","\xc2","\x8e","\x1e","\xe5"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("receiveAudio","\xf3","\xcf","\x58","\x72"),
	HX_HCSTRING("receiveVideo","\x98","\x6b","\xd4","\x81"),
	HX_HCSTRING("onPeerConnect","\x89","\xf7","\x20","\x36"),
	HX_HCSTRING("get_bytesTotal","\xa2","\xdf","\xcf","\xbb"),
	HX_HCSTRING("get_bytesLoaded","\x67","\x1e","\xac","\x5a"),
	HX_HCSTRING("get_decodedFrames","\x13","\x57","\x25","\x83"),
	HX_HCSTRING("get_peerStreams","\x08","\x32","\xdd","\x74"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetStream_obj::CONNECT_TO_FMS,"CONNECT_TO_FMS");
	HX_MARK_MEMBER_NAME(NetStream_obj::DIRECT_CONNECTIONS,"DIRECT_CONNECTIONS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStream_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetStream_obj::CONNECT_TO_FMS,"CONNECT_TO_FMS");
	HX_VISIT_MEMBER_NAME(NetStream_obj::DIRECT_CONNECTIONS,"DIRECT_CONNECTIONS");
};

#endif

hx::Class NetStream_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CONNECT_TO_FMS","\x3d","\xb8","\xc3","\x53"),
	HX_HCSTRING("DIRECT_CONNECTIONS","\x1f","\xc5","\x56","\xbd"),
	::String(null()) };

void NetStream_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.net.NetStream","\x24","\x6e","\x07","\xa6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetStream_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void NetStream_obj::__boot()
{
	CONNECT_TO_FMS= HX_HCSTRING("connectToFMS","\x47","\x1e","\x89","\x3f");
	DIRECT_CONNECTIONS= HX_HCSTRING("directConnections","\xec","\x35","\x08","\x24");
}

} // end namespace nme
} // end namespace net
