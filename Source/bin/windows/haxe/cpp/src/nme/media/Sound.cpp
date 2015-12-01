#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_events_ErrorEvent
#include <nme/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IOErrorEvent
#include <nme/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_SampleDataEvent
#include <nme/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
#endif
#ifndef INCLUDED_nme_media_ID3Info
#include <nme/media/ID3Info.h>
#endif
#ifndef INCLUDED_nme_media_Sound
#include <nme/media/Sound.h>
#endif
#ifndef INCLUDED_nme_media_SoundChannel
#include <nme/media/SoundChannel.h>
#endif
#ifndef INCLUDED_nme_media_SoundLoaderContext
#include <nme/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_nme_media_SoundTransform
#include <nme/media/SoundTransform.h>
#endif
#ifndef INCLUDED_nme_net_URLRequest
#include <nme/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{
namespace media{

Void Sound_obj::__construct(::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine)
{
HX_STACK_FRAME("nme.media.Sound","new",0x2b69dbef,"nme.media.Sound.new","nme/media/Sound.hx",29,0x15773f23)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
HX_STACK_ARG(__o_forcePlayAsMusic,"forcePlayAsMusic")
HX_STACK_ARG(inEngine,"inEngine")
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(30)
	super::__construct(null());
	HX_STACK_LINE(32)
	bool tmp = (stream == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(34)
		::hx::Class tmp1 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		::hx::Class className = tmp1;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(35)
		::hx::Class tmp2 = className;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3 = ::Reflect_obj::hasField(tmp2,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(37)
			::hx::Class tmp4 = className;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(37)
			Dynamic tmp5 = ::Reflect_obj::field(tmp4,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(37)
			::nme::net::URLRequest tmp6 = ::nme::net::URLRequest_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(37)
			stream = tmp6;
			HX_STACK_LINE(38)
			forcePlayAsMusic = true;
		}
	}
	HX_STACK_LINE(42)
	int tmp1 = this->bytesTotal = (int)0;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	this->bytesLoaded = tmp1;
	HX_STACK_LINE(43)
	this->nmeLoading = false;
	HX_STACK_LINE(44)
	this->nmeDynamicSound = false;
	HX_STACK_LINE(46)
	bool tmp2 = (stream != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	if ((tmp2)){
		HX_STACK_LINE(47)
		::nme::net::URLRequest tmp3 = stream;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::nme::media::SoundLoaderContext tmp4 = context;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		bool tmp5 = forcePlayAsMusic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(47)
		::String tmp6 = inEngine;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(47)
		this->load(tmp3,tmp4,tmp5,tmp6);
	}
}
;
	return null();
}

//Sound_obj::~Sound_obj() { }

Dynamic Sound_obj::__CreateEmpty() { return  new Sound_obj; }
hx::ObjectPtr< Sound_obj > Sound_obj::__new(::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(stream,context,__o_forcePlayAsMusic,inEngine);
	return _result_;}

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sound_obj > _result_ = new Sound_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Dynamic Sound_obj::getEngine( ){
	HX_STACK_FRAME("nme.media.Sound","getEngine",0xbf0871c7,"nme.media.Sound.getEngine","nme/media/Sound.hx",50,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Dynamic tmp1 = ::nme::media::Sound_obj::nme_sound_get_engine(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,getEngine,return )

Void Sound_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("nme.media.Sound","addEventListener",0x41f4b2de,"nme.media.Sound.addEventListener","nme/media/Sound.hx",56,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(57)
		::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(57)
		Dynamic tmp1 = listener;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(57)
		bool tmp2 = useCapture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(57)
		int tmp3 = priority;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(57)
		bool tmp4 = useWeakReference;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		this->super::addEventListener(tmp,tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(59)
		::String tmp5 = type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(59)
		::String tmp6 = ::nme::events::SampleDataEvent_obj::SAMPLE_DATA;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(59)
		bool tmp7 = (tmp5 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(59)
		if ((tmp7)){
			HX_STACK_LINE(61)
			Dynamic tmp8 = this->nmeHandle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(61)
			bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(61)
			if ((tmp9)){
				HX_STACK_LINE(62)
				HX_STACK_DO_THROW(HX_HCSTRING("Can't use dynamic sound once file loaded","\x98","\x42","\xab","\x4b"));
			}
			HX_STACK_LINE(64)
			this->nmeDynamicSound = true;
			HX_STACK_LINE(65)
			this->nmeLoading = false;
		}
	}
return null();
}


Void Sound_obj::close( ){
{
		HX_STACK_FRAME("nme.media.Sound","close",0xedbe6507,"nme.media.Sound.close","nme/media/Sound.hx",70,0x15773f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::nme::media::Sound_obj::nme_sound_close(tmp2);
		}
		HX_STACK_LINE(74)
		this->nmeHandle = (int)0;
		HX_STACK_LINE(75)
		this->nmeLoading = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

Void Sound_obj::load( ::nme::net::URLRequest stream,::nme::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("nme.media.Sound","load",0xcfebabb7,"nme.media.Sound.load","nme/media/Sound.hx",79,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(stream,"stream")
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
	HX_STACK_ARG(inEngine,"inEngine")
{
		HX_STACK_LINE(80)
		int tmp = this->bytesTotal = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		this->bytesLoaded = tmp;
		HX_STACK_LINE(81)
		::String tmp1 = stream->url;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2 = forcePlayAsMusic;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		::String tmp3 = inEngine;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(81)
		Dynamic tmp4 = ::nme::media::Sound_obj::nme_sound_from_file(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(81)
		this->nmeHandle = tmp4;
		HX_STACK_LINE(83)
		Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(83)
		if ((tmp6)){
			HX_STACK_LINE(85)
			bool tmp7 = forcePlayAsMusic;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(85)
			if ((tmp7)){
				HX_STACK_LINE(85)
				tmp8 = HX_HCSTRING("music","\xa5","\xd0","\x5a","\x10");
			}
			else{
				HX_STACK_LINE(85)
				tmp8 = HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80");
			}
			HX_STACK_LINE(85)
			::String tmp9 = (HX_HCSTRING("Could not load ","\x6e","\xae","\x9d","\xf1") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(85)
			::String tmp10 = (tmp9 + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(85)
			::String tmp11 = stream->url;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(85)
			::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(85)
			HX_STACK_DO_THROW(tmp12);
		}
		else{
			HX_STACK_LINE(89)
			this->url = stream->url;
			HX_STACK_LINE(90)
			this->nmeLoading = true;
			HX_STACK_LINE(91)
			this->nmeLoading = false;
			HX_STACK_LINE(92)
			this->nmeCheckLoading();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Sound_obj,load,(void))

Void Sound_obj::loadCompressedDataFromByteArray( ::nme::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic,::String inEngine){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
	HX_STACK_FRAME("nme.media.Sound","loadCompressedDataFromByteArray",0x16d343e5,"nme.media.Sound.loadCompressedDataFromByteArray","nme/media/Sound.hx",97,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(forcePlayAsMusic,"forcePlayAsMusic")
	HX_STACK_ARG(inEngine,"inEngine")
{
		HX_STACK_LINE(98)
		int tmp = this->bytesTotal = length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(98)
		this->bytesLoaded = tmp;
		HX_STACK_LINE(99)
		::nme::utils::ByteArray tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		int tmp2 = length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(99)
		bool tmp3 = forcePlayAsMusic;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(99)
		::String tmp4 = inEngine;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(99)
		Dynamic tmp5 = ::nme::media::Sound_obj::nme_sound_from_data(tmp1,tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(99)
		this->nmeHandle = tmp5;
		HX_STACK_LINE(101)
		Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(101)
		bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		if ((tmp7)){
			HX_STACK_LINE(103)
			::String tmp8 = (HX_HCSTRING("Could not load buffer with length: ","\xb4","\xa8","\x96","\xd0") + length);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(103)
			HX_STACK_DO_THROW(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Sound_obj,loadCompressedDataFromByteArray,(void))

Void Sound_obj::loadPCMFromByteArray( ::nme::utils::ByteArray Bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate,::String inEngine){
::String format = __o_format.Default(HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(((Float)44100.0));
	HX_STACK_FRAME("nme.media.Sound","loadPCMFromByteArray",0x52245504,"nme.media.Sound.loadPCMFromByteArray","nme/media/Sound.hx",108,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bytes,"Bytes")
	HX_STACK_ARG(samples,"samples")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(stereo,"stereo")
	HX_STACK_ARG(sampleRate,"sampleRate")
	HX_STACK_ARG(inEngine,"inEngine")
{
		HX_STACK_LINE(110)
		::nme::utils::ByteArray tmp = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(110)
		::nme::utils::ByteArray wav = tmp;		HX_STACK_VAR(wav,"wav");
		HX_STACK_LINE(111)
		wav->set_endian(HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07"));
		HX_STACK_LINE(113)
		::String tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		::String _switch_1 = (tmp1);
		if (  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
			HX_STACK_LINE(115)
			tmp2 = (int)3;
		}
		else if (  ( _switch_1==HX_HCSTRING("short","\x7c","\x84","\x27","\x7c"))){
			HX_STACK_LINE(116)
			tmp2 = (int)1;
		}
		else  {
			HX_STACK_LINE(117)
			::String tmp3 = (HX_HCSTRING("Unsupported format ","\x7e","\x06","\x66","\xfe") + format);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			::nme::errors::Error tmp4 = ::nme::errors::Error_obj::__new(tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(117)
			HX_STACK_DO_THROW(tmp4);
		}
;
;
		HX_STACK_LINE(113)
		int AudioFormat = tmp2;		HX_STACK_VAR(AudioFormat,"AudioFormat");
		HX_STACK_LINE(120)
		bool tmp3 = stereo;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(120)
		if ((tmp3)){
			HX_STACK_LINE(120)
			tmp4 = (int)2;
		}
		else{
			HX_STACK_LINE(120)
			tmp4 = (int)1;
		}
		HX_STACK_LINE(120)
		int NumChannels = tmp4;		HX_STACK_VAR(NumChannels,"NumChannels");
		HX_STACK_LINE(121)
		Float tmp5 = sampleRate;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(121)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(121)
		int SampleRate = tmp6;		HX_STACK_VAR(SampleRate,"SampleRate");
		HX_STACK_LINE(122)
		::String tmp7 = format;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		::String _switch_2 = (tmp7);
		if (  ( _switch_2==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
			HX_STACK_LINE(124)
			tmp8 = (int)32;
		}
		else if (  ( _switch_2==HX_HCSTRING("short","\x7c","\x84","\x27","\x7c"))){
			HX_STACK_LINE(125)
			tmp8 = (int)16;
		}
		else  {
			HX_STACK_LINE(126)
			::String tmp9 = (HX_HCSTRING("Unsupported format ","\x7e","\x06","\x66","\xfe") + format);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			::nme::errors::Error tmp10 = ::nme::errors::Error_obj::__new(tmp9,null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(126)
			HX_STACK_DO_THROW(tmp10);
		}
;
;
		HX_STACK_LINE(122)
		int BitsPerSample = tmp8;		HX_STACK_VAR(BitsPerSample,"BitsPerSample");
		HX_STACK_LINE(129)
		int tmp9 = (SampleRate * NumChannels);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		int tmp10 = BitsPerSample;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(129)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(129)
		Float tmp12 = (Float(tmp11) / Float((int)8));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(129)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(129)
		int ByteRate = tmp13;		HX_STACK_VAR(ByteRate,"ByteRate");
		HX_STACK_LINE(130)
		int tmp14 = (NumChannels * BitsPerSample);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(130)
		Float tmp15 = (Float(tmp14) / Float((int)8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(130)
		int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(130)
		int BlockAlign = tmp16;		HX_STACK_VAR(BlockAlign,"BlockAlign");
		HX_STACK_LINE(131)
		Float tmp17 = (Float(Bytes->length) / Float(BlockAlign));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(131)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(131)
		int NumSamples = tmp18;		HX_STACK_VAR(NumSamples,"NumSamples");
		HX_STACK_LINE(133)
		wav->writeUTFBytes(HX_HCSTRING("RIFF","\xb7","\x20","\x6b","\x36"));
		HX_STACK_LINE(134)
		int tmp19 = ((int)36 + Bytes->length);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(134)
		wav->writeInt(tmp19);
		HX_STACK_LINE(135)
		wav->writeUTFBytes(HX_HCSTRING("WAVE","\xb9","\x2d","\xb3","\x39"));
		HX_STACK_LINE(136)
		wav->writeUTFBytes(HX_HCSTRING("fmt ","\x33","\xde","\xbe","\x43"));
		HX_STACK_LINE(137)
		wav->writeInt((int)16);
		HX_STACK_LINE(138)
		int tmp20 = AudioFormat;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(138)
		wav->writeShort(tmp20);
		HX_STACK_LINE(139)
		int tmp21 = NumChannels;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(139)
		wav->writeShort(tmp21);
		HX_STACK_LINE(140)
		int tmp22 = SampleRate;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(140)
		wav->writeInt(tmp22);
		HX_STACK_LINE(141)
		int tmp23 = ByteRate;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(141)
		wav->writeInt(tmp23);
		HX_STACK_LINE(142)
		int tmp24 = BlockAlign;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(142)
		wav->writeShort(tmp24);
		HX_STACK_LINE(143)
		int tmp25 = BitsPerSample;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(143)
		wav->writeShort(tmp25);
		HX_STACK_LINE(144)
		wav->writeUTFBytes(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
		HX_STACK_LINE(145)
		int tmp26 = Bytes->length;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(145)
		wav->writeInt(tmp26);
		HX_STACK_LINE(146)
		::nme::utils::ByteArray tmp27 = Bytes;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(146)
		int tmp28 = Bytes->length;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(146)
		wav->writeBytes(tmp27,(int)0,tmp28);
		HX_STACK_LINE(148)
		wav->position = (int)0;
		HX_STACK_LINE(149)
		::nme::utils::ByteArray tmp29 = wav;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(149)
		int tmp30 = wav->length;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(149)
		this->loadCompressedDataFromByteArray(tmp29,tmp30,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Sound_obj,loadPCMFromByteArray,(void))

Void Sound_obj::nmeCheckLoading( ){
{
		HX_STACK_FRAME("nme.media.Sound","nmeCheckLoading",0xdb692109,"nme.media.Sound.nmeCheckLoading","nme/media/Sound.hx",152,0x15773f23)
		HX_STACK_THIS(this)
		HX_STACK_LINE(153)
		bool tmp = this->nmeDynamicSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(153)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(153)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(153)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(153)
		if ((tmp3)){
			HX_STACK_LINE(153)
			tmp4 = this->nmeLoading;
		}
		else{
			HX_STACK_LINE(153)
			tmp4 = false;
		}
		HX_STACK_LINE(153)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		if ((tmp4)){
			HX_STACK_LINE(153)
			Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(153)
			tmp5 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(153)
			tmp5 = false;
		}
		HX_STACK_LINE(153)
		if ((tmp5)){
			HX_STACK_LINE(155)
			Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(155)
			Dynamic tmp7 = ::nme::media::Sound_obj::nme_sound_get_status(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(155)
			Dynamic status = tmp7;		HX_STACK_VAR(status,"status");
			HX_STACK_LINE(157)
			bool tmp8 = (status == null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(157)
			if ((tmp8)){
				HX_STACK_LINE(158)
				HX_STACK_DO_THROW(HX_HCSTRING("Could not get sound status","\x79","\x41","\xe1","\xc3"));
			}
			HX_STACK_LINE(160)
			this->bytesLoaded = status->__Field(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"), hx::paccDynamic );
			HX_STACK_LINE(161)
			this->bytesTotal = status->__Field(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"), hx::paccDynamic );
			HX_STACK_LINE(163)
			int tmp9 = this->bytesLoaded;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			int tmp10 = this->bytesTotal;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(163)
			this->nmeLoading = tmp11;
			HX_STACK_LINE(165)
			bool tmp12 = (status->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ) != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(165)
			if ((tmp12)){
				HX_STACK_LINE(167)
				HX_STACK_DO_THROW(status->__Field(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"), hx::paccDynamic ));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,nmeCheckLoading,(void))

Void Sound_obj::nmeOnError( ::String msg){
{
		HX_STACK_FRAME("nme.media.Sound","nmeOnError",0xfa27e3d4,"nme.media.Sound.nmeOnError","nme/media/Sound.hx",172,0x15773f23)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(173)
		::String tmp = ::nme::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		::String tmp1 = msg;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::nme::events::IOErrorEvent tmp2 = ::nme::events::IOErrorEvent_obj::__new(tmp,true,false,tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(173)
		this->dispatchEvent(tmp2);
		HX_STACK_LINE(174)
		this->nmeHandle = null();
		HX_STACK_LINE(175)
		this->nmeLoading = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,nmeOnError,(void))

::nme::media::SoundChannel Sound_obj::play( hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops,::nme::media::SoundTransform sndTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
	HX_STACK_FRAME("nme.media.Sound","play",0xd28e3f85,"nme.media.Sound.play","nme/media/Sound.hx",179,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startTime,"startTime")
	HX_STACK_ARG(loops,"loops")
	HX_STACK_ARG(sndTransform,"sndTransform")
{
		HX_STACK_LINE(180)
		this->nmeCheckLoading();
		HX_STACK_LINE(182)
		bool tmp = this->nmeDynamicSound;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		if ((tmp)){
			HX_STACK_LINE(184)
			::String tmp1 = ::nme::events::SampleDataEvent_obj::SAMPLE_DATA;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(184)
			::nme::events::SampleDataEvent tmp2 = ::nme::events::SampleDataEvent_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(184)
			::nme::events::SampleDataEvent request = tmp2;		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(185)
			::nme::events::SampleDataEvent tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			this->dispatchEvent(tmp3);
			HX_STACK_LINE(187)
			int tmp4 = request->data->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(187)
			bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(187)
			if ((tmp5)){
				HX_STACK_LINE(189)
				::nme::utils::ByteArray tmp6 = request->data;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(189)
				::nme::media::SoundTransform tmp7 = sndTransform;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(189)
				Dynamic tmp8 = ::nme::media::Sound_obj::nme_sound_channel_create_dynamic(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(189)
				this->nmeHandle = tmp8;
			}
			HX_STACK_LINE(192)
			Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(192)
			bool tmp7 = (tmp6 == null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			if ((tmp7)){
				HX_STACK_LINE(193)
				return null();
			}
			HX_STACK_LINE(195)
			Dynamic tmp8 = this->nmeHandle;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(195)
			::nme::media::SoundTransform tmp9 = sndTransform;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			::nme::media::SoundChannel tmp10 = ::nme::media::SoundChannel_obj::createDynamic(tmp8,tmp9,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(195)
			::nme::media::SoundChannel result = tmp10;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(196)
			this->nmeHandle = null();
			HX_STACK_LINE(197)
			::nme::media::SoundChannel tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(197)
			return tmp11;
		}
		else{
			HX_STACK_LINE(202)
			Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(202)
			bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(202)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(202)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(202)
			if ((tmp3)){
				HX_STACK_LINE(202)
				tmp4 = this->nmeLoading;
			}
			else{
				HX_STACK_LINE(202)
				tmp4 = true;
			}
			HX_STACK_LINE(202)
			if ((tmp4)){
				HX_STACK_LINE(203)
				return null();
			}
			HX_STACK_LINE(205)
			Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(205)
			Float tmp6 = startTime;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(205)
			int tmp7 = loops;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(205)
			::nme::media::SoundTransform tmp8 = sndTransform;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(205)
			::nme::media::SoundChannel tmp9 = ::nme::media::SoundChannel_obj::__new(tmp5,tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(205)
			::nme::media::SoundChannel result = tmp9;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(206)
			bool tmp10 = (result->nmeHandle == null());		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(206)
			if ((tmp10)){
				HX_STACK_LINE(207)
				return null();
			}
			HX_STACK_LINE(208)
			::nme::media::SoundChannel tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(208)
			return tmp11;
		}
		HX_STACK_LINE(182)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

::nme::media::ID3Info Sound_obj::get_id3( ){
	HX_STACK_FRAME("nme.media.Sound","get_id3",0x53894b9e,"nme.media.Sound.get_id3","nme/media/Sound.hx",213,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	this->nmeCheckLoading();
	HX_STACK_LINE(216)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(216)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(216)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(216)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(216)
	if ((tmp2)){
		HX_STACK_LINE(216)
		tmp3 = this->nmeLoading;
	}
	else{
		HX_STACK_LINE(216)
		tmp3 = true;
	}
	HX_STACK_LINE(216)
	if ((tmp3)){
		HX_STACK_LINE(217)
		return null();
	}
	HX_STACK_LINE(219)
	::nme::media::ID3Info tmp4 = ::nme::media::ID3Info_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	::nme::media::ID3Info id3 = tmp4;		HX_STACK_VAR(id3,"id3");
	HX_STACK_LINE(220)
	Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(220)
	::nme::media::ID3Info tmp6 = id3;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	::nme::media::Sound_obj::nme_sound_get_id3(tmp5,tmp6);
	HX_STACK_LINE(221)
	::nme::media::ID3Info tmp7 = id3;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(221)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

bool Sound_obj::get_isBuffering( ){
	HX_STACK_FRAME("nme.media.Sound","get_isBuffering",0x00f2843e,"nme.media.Sound.get_isBuffering","nme/media/Sound.hx",224,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(225)
	this->nmeCheckLoading();
	HX_STACK_LINE(226)
	bool tmp = this->nmeLoading;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(226)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(226)
	if ((tmp)){
		HX_STACK_LINE(226)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		tmp1 = (tmp3 == null());
	}
	else{
		HX_STACK_LINE(226)
		tmp1 = false;
	}
	HX_STACK_LINE(226)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_isBuffering,return )

Float Sound_obj::get_length( ){
	HX_STACK_FRAME("nme.media.Sound","get_length",0xb14e1900,"nme.media.Sound.get_length","nme/media/Sound.hx",229,0x15773f23)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(230)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(230)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(230)
	if ((tmp2)){
		HX_STACK_LINE(230)
		tmp3 = this->nmeLoading;
	}
	else{
		HX_STACK_LINE(230)
		tmp3 = true;
	}
	HX_STACK_LINE(230)
	if ((tmp3)){
		HX_STACK_LINE(231)
		return (int)0;
	}
	HX_STACK_LINE(233)
	Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(233)
	Float tmp5 = ::nme::media::Sound_obj::nme_sound_get_length(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(233)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

Dynamic Sound_obj::nme_sound_from_file;

Dynamic Sound_obj::nme_sound_from_data;

Dynamic Sound_obj::nme_sound_get_id3;

Dynamic Sound_obj::nme_sound_get_length;

Dynamic Sound_obj::nme_sound_close;

Dynamic Sound_obj::nme_sound_get_status;

Dynamic Sound_obj::nme_sound_get_engine;

Dynamic Sound_obj::nme_sound_channel_create_dynamic;


Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeLoading,"nmeLoading");
	HX_MARK_MEMBER_NAME(nmeDynamicSound,"nmeDynamicSound");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmeLoading,"nmeLoading");
	HX_VISIT_MEMBER_NAME(nmeDynamicSound,"nmeDynamicSound");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { return inCallProp != hx::paccNever ? get_id3() : id3; }
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp != hx::paccNever ? get_length() : length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return get_id3_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"getEngine") ) { return getEngine_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { return nmeLoading; }
		if (HX_FIELD_EQ(inName,"nmeOnError") ) { return nmeOnError_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return inCallProp != hx::paccNever ? get_isBuffering() : isBuffering; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { return nmeDynamicSound; }
		if (HX_FIELD_EQ(inName,"nmeCheckLoading") ) { return nmeCheckLoading_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isBuffering") ) { return get_isBuffering_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return loadPCMFromByteArray_dyn(); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return loadCompressedDataFromByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { outValue = nme_sound_close; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { outValue = nme_sound_get_id3; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { outValue = nme_sound_from_file; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { outValue = nme_sound_from_data; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { outValue = nme_sound_get_length; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { outValue = nme_sound_get_status; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_get_engine") ) { outValue = nme_sound_get_engine; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { outValue = nme_sound_channel_create_dynamic; return true;  }
	}
	return false;
}

Dynamic Sound_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast< ::nme::media::ID3Info >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeLoading") ) { nmeLoading=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDynamicSound") ) { nmeDynamicSound=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sound_close") ) { nme_sound_close=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_sound_get_id3") ) { nme_sound_get_id3=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_sound_from_file") ) { nme_sound_from_file=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_from_data") ) { nme_sound_from_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_sound_get_length") ) { nme_sound_get_length=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_status") ) { nme_sound_get_status=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_get_engine") ) { nme_sound_get_engine=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_dynamic") ) { nme_sound_channel_create_dynamic=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("nmeLoading","\xd6","\x33","\xf4","\xd7"));
	outFields->push(HX_HCSTRING("nmeDynamicSound","\x36","\xc5","\x65","\x6c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::nme::media::ID3Info*/ ,(int)offsetof(Sound_obj,id3),HX_HCSTRING("id3","\xf8","\x03","\x50","\x00")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90")},
	{hx::fsFloat,(int)offsetof(Sound_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsBool,(int)offsetof(Sound_obj,nmeLoading),HX_HCSTRING("nmeLoading","\xd6","\x33","\xf4","\xd7")},
	{hx::fsBool,(int)offsetof(Sound_obj,nmeDynamicSound),HX_HCSTRING("nmeDynamicSound","\x36","\xc5","\x65","\x6c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_from_file,HX_HCSTRING("nme_sound_from_file","\xc8","\xab","\x53","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_from_data,HX_HCSTRING("nme_sound_from_data","\x76","\x33","\xfb","\xd5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_get_id3,HX_HCSTRING("nme_sound_get_id3","\xe6","\x4f","\xc7","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_get_length,HX_HCSTRING("nme_sound_get_length","\xb8","\xf1","\x41","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_close,HX_HCSTRING("nme_sound_close","\x4f","\x47","\xc9","\x95")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_get_status,HX_HCSTRING("nme_sound_get_status","\x04","\x44","\x36","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_get_engine,HX_HCSTRING("nme_sound_get_engine","\x94","\xa4","\xbe","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::nme_sound_channel_create_dynamic,HX_HCSTRING("nme_sound_channel_create_dynamic","\xc1","\x2d","\x7b","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"),
	HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("nmeLoading","\xd6","\x33","\xf4","\xd7"),
	HX_HCSTRING("nmeDynamicSound","\x36","\xc5","\x65","\x6c"),
	HX_HCSTRING("getEngine","\xf8","\xd0","\xda","\x78"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("nmeCheckLoading","\xfa","\x7a","\x68","\x2b"),
	HX_HCSTRING("nmeOnError","\x83","\xcf","\x68","\xd8"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("get_id3","\x8f","\xcc","\xc4","\x26"),
	HX_HCSTRING("get_isBuffering","\x2f","\xde","\xf1","\x50"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_get_engine,"nme_sound_get_engine");
	HX_MARK_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_file,"nme_sound_from_file");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_from_data,"nme_sound_from_data");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_id3,"nme_sound_get_id3");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_length,"nme_sound_get_length");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_close,"nme_sound_close");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_status,"nme_sound_get_status");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_get_engine,"nme_sound_get_engine");
	HX_VISIT_MEMBER_NAME(Sound_obj::nme_sound_channel_create_dynamic,"nme_sound_channel_create_dynamic");
};

#endif

hx::Class Sound_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_sound_from_file","\xc8","\xab","\x53","\xd7"),
	HX_HCSTRING("nme_sound_from_data","\x76","\x33","\xfb","\xd5"),
	HX_HCSTRING("nme_sound_get_id3","\xe6","\x4f","\xc7","\x3d"),
	HX_HCSTRING("nme_sound_get_length","\xb8","\xf1","\x41","\x16"),
	HX_HCSTRING("nme_sound_close","\x4f","\x47","\xc9","\x95"),
	HX_HCSTRING("nme_sound_get_status","\x04","\x44","\x36","\x7d"),
	HX_HCSTRING("nme_sound_get_engine","\x94","\xa4","\xbe","\x73"),
	HX_HCSTRING("nme_sound_channel_create_dynamic","\xc1","\x2d","\x7b","\xcc"),
	::String(null()) };

void Sound_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.media.Sound","\x7d","\xb8","\x5b","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
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

void Sound_obj::__boot()
{
	nme_sound_from_file= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_from_file","\xc8","\xab","\x53","\xd7"),(int)3);
	nme_sound_from_data= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_from_data","\x76","\x33","\xfb","\xd5"),(int)4);
	nme_sound_get_id3= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_get_id3","\xe6","\x4f","\xc7","\x3d"),(int)2);
	nme_sound_get_length= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_get_length","\xb8","\xf1","\x41","\x16"),(int)1);
	nme_sound_close= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_close","\x4f","\x47","\xc9","\x95"),(int)1);
	nme_sound_get_status= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_get_status","\x04","\x44","\x36","\x7d"),(int)1);
	nme_sound_get_engine= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_get_engine","\x94","\xa4","\xbe","\x73"),(int)1);
	nme_sound_channel_create_dynamic= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_create_dynamic","\xc1","\x2d","\x7b","\xcc"),(int)2);
}

} // end namespace nme
} // end namespace media
