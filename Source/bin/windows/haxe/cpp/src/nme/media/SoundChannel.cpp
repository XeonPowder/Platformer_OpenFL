#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
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
#ifndef INCLUDED_nme_events_SampleDataEvent
#include <nme/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_nme_media_AudioSampleFormat
#include <nme/media/AudioSampleFormat.h>
#endif
#ifndef INCLUDED_nme_media_SampleRate
#include <nme/media/SampleRate.h>
#endif
#ifndef INCLUDED_nme_media_SoundChannel
#include <nme/media/SoundChannel.h>
#endif
#ifndef INCLUDED_nme_media_SoundTransform
#include <nme/media/SoundTransform.h>
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

Void SoundChannel_obj::__construct(Dynamic inSoundHandle,Float startTime,int loops,::nme::media::SoundTransform sndTransform)
{
HX_STACK_FRAME("nme.media.SoundChannel","new",0xe1ab25b8,"nme.media.SoundChannel.new","nme/media/SoundChannel.hx",27,0xbe716c36)
HX_STACK_THIS(this)
HX_STACK_ARG(inSoundHandle,"inSoundHandle")
HX_STACK_ARG(startTime,"startTime")
HX_STACK_ARG(loops,"loops")
HX_STACK_ARG(sndTransform,"sndTransform")
{
	HX_STACK_LINE(28)
	super::__construct(null());
	HX_STACK_LINE(30)
	this->pitch = ((Float)1.0);
	HX_STACK_LINE(31)
	this->nmeStopped = false;
	HX_STACK_LINE(32)
	bool tmp = (sndTransform != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	if ((tmp)){
		HX_STACK_LINE(34)
		::nme::media::SoundTransform tmp1 = sndTransform->clone();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		this->nmeTransform = tmp1;
	}
	HX_STACK_LINE(37)
	bool tmp1 = (inSoundHandle != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	if ((tmp1)){
		HX_STACK_LINE(38)
		Dynamic tmp2 = inSoundHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(38)
		Float tmp3 = startTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(38)
		int tmp4 = loops;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(38)
		::nme::media::SoundTransform tmp5 = this->nmeTransform;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(38)
		Dynamic tmp6 = ::nme::media::SoundChannel_obj::nme_sound_channel_create(tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		this->nmeHandle = tmp6;
	}
	HX_STACK_LINE(40)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	if ((tmp3)){
		HX_STACK_LINE(41)
		::nme::media::SoundChannel_obj::nmeIncompleteList->push(hx::ObjectPtr<OBJ_>(this));
	}
}
;
	return null();
}

//SoundChannel_obj::~SoundChannel_obj() { }

Dynamic SoundChannel_obj::__CreateEmpty() { return  new SoundChannel_obj; }
hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new(Dynamic inSoundHandle,Float startTime,int loops,::nme::media::SoundTransform sndTransform)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(inSoundHandle,startTime,loops,sndTransform);
	return _result_;}

Dynamic SoundChannel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundChannel_obj > _result_ = new SoundChannel_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void SoundChannel_obj::postBuffer( ::nme::utils::ByteArray inData){
{
		HX_STACK_FRAME("nme.media.SoundChannel","postBuffer",0x9691c328,"nme.media.SoundChannel.postBuffer","nme/media/SoundChannel.hx",68,0xbe716c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inData,"inData")
		HX_STACK_LINE(69)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(70)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::nme::utils::ByteArray tmp3 = inData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(70)
			::nme::media::SoundChannel_obj::nme_sound_channel_post_buffer(tmp2,tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,postBuffer,(void))

bool SoundChannel_obj::nmeCheckComplete( ){
	HX_STACK_FRAME("nme.media.SoundChannel","nmeCheckComplete",0xd0d57623,"nme.media.SoundChannel.nmeCheckComplete","nme/media/SoundChannel.hx",74,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(75)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(75)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(75)
	if ((tmp1)){
		HX_STACK_LINE(77)
		::nme::events::EventDispatcher tmp2 = this->nmeDataProvider;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(77)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(77)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(77)
		if ((tmp3)){
			HX_STACK_LINE(77)
			Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(77)
			Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(77)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(77)
			tmp4 = ::nme::media::SoundChannel_obj::nme_sound_channel_needs_data(tmp7);
		}
		else{
			HX_STACK_LINE(77)
			tmp4 = false;
		}
		HX_STACK_LINE(77)
		if ((tmp4)){
			HX_STACK_LINE(79)
			::String tmp5 = ::nme::events::SampleDataEvent_obj::SAMPLE_DATA;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(79)
			::nme::events::SampleDataEvent tmp6 = ::nme::events::SampleDataEvent_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(79)
			::nme::events::SampleDataEvent request = tmp6;		HX_STACK_VAR(request,"request");
			HX_STACK_LINE(80)
			Dynamic tmp7 = this->nmeHandle;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(80)
			Float tmp8 = ::nme::media::SoundChannel_obj::nme_sound_channel_get_data_position(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(80)
			request->position = tmp8;
			HX_STACK_LINE(81)
			::nme::events::EventDispatcher tmp9 = this->nmeDataProvider;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(81)
			::nme::events::SampleDataEvent tmp10 = request;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(81)
			tmp9->dispatchEvent(tmp10);
			HX_STACK_LINE(83)
			int tmp11 = request->data->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(83)
			bool tmp12 = (tmp11 > (int)0);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(83)
			if ((tmp12)){
				HX_STACK_LINE(85)
				Dynamic tmp13 = this->nmeHandle;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(85)
				::nme::utils::ByteArray tmp14 = request->data;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(85)
				::nme::media::SoundChannel_obj::nme_sound_channel_add_data(tmp13,tmp14);
			}
		}
		HX_STACK_LINE(89)
		Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(89)
		bool tmp6 = ::nme::media::SoundChannel_obj::nme_sound_channel_is_complete(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(89)
		if ((tmp6)){
			HX_STACK_LINE(91)
			this->nmeHandle = null();
			HX_STACK_LINE(92)
			::nme::events::EventDispatcher tmp7 = this->nmeDataProvider;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(92)
			bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(92)
			if ((tmp8)){
				HX_STACK_LINE(93)
				(::nme::media::SoundChannel_obj::nmeDynamicSoundCount)--;
			}
			HX_STACK_LINE(95)
			return true;
		}
	}
	HX_STACK_LINE(99)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmeCheckComplete,return )

Void SoundChannel_obj::dispatchComplete( ){
{
		HX_STACK_FRAME("nme.media.SoundChannel","dispatchComplete",0xe54e093b,"nme.media.SoundChannel.dispatchComplete","nme/media/SoundChannel.hx",107,0xbe716c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(108)
		::String tmp = ::nme::events::Event_obj::SOUND_COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::nme::events::Event tmp1 = ::nme::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		::nme::events::Event complete = tmp1;		HX_STACK_VAR(complete,"complete");
		HX_STACK_LINE(109)
		::nme::events::Event tmp2 = complete;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,dispatchComplete,(void))

Void SoundChannel_obj::stop( ){
{
		HX_STACK_FRAME("nme.media.SoundChannel","stop",0x976f47aa,"nme.media.SoundChannel.stop","nme/media/SoundChannel.hx",136,0xbe716c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(137)
		this->nmeStopped = true;
		HX_STACK_LINE(138)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		::nme::media::SoundChannel_obj::nme_sound_channel_stop(tmp);
		HX_STACK_LINE(140)
		::nme::media::SoundChannel_obj::nmePollComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

Float SoundChannel_obj::get_leftPeak( ){
	HX_STACK_FRAME("nme.media.SoundChannel","get_leftPeak",0x95991577,"nme.media.SoundChannel.get_leftPeak","nme/media/SoundChannel.hx",144,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(144)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(144)
	Float tmp1 = ::nme::media::SoundChannel_obj::nme_sound_channel_get_left(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(144)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_leftPeak,return )

Float SoundChannel_obj::get_rightPeak( ){
	HX_STACK_FRAME("nme.media.SoundChannel","get_rightPeak",0x30a77b4a,"nme.media.SoundChannel.get_rightPeak","nme/media/SoundChannel.hx",145,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(145)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Float tmp1 = ::nme::media::SoundChannel_obj::nme_sound_channel_get_right(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_rightPeak,return )

Float SoundChannel_obj::get_position( ){
	HX_STACK_FRAME("nme.media.SoundChannel","get_position",0x0f43945a,"nme.media.SoundChannel.get_position","nme/media/SoundChannel.hx",146,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	Float tmp1 = ::nme::media::SoundChannel_obj::nme_sound_channel_get_position(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position( Float value){
	HX_STACK_FRAME("nme.media.SoundChannel","set_position",0x243cb7ce,"nme.media.SoundChannel.set_position","nme/media/SoundChannel.hx",147,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(147)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(147)
	Float tmp1 = this->get_position();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(147)
	Float tmp2 = ::nme::media::SoundChannel_obj::nme_sound_channel_set_position(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(147)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

::nme::media::SoundTransform SoundChannel_obj::get_soundTransform( ){
	HX_STACK_FRAME("nme.media.SoundChannel","get_soundTransform",0x6d373d0e,"nme.media.SoundChannel.get_soundTransform","nme/media/SoundChannel.hx",150,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	::nme::media::SoundTransform tmp = this->nmeTransform;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	if ((tmp1)){
		HX_STACK_LINE(153)
		::nme::media::SoundTransform tmp2 = ::nme::media::SoundTransform_obj::__new(null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(153)
		this->nmeTransform = tmp2;
	}
	HX_STACK_LINE(156)
	::nme::media::SoundTransform tmp2 = this->nmeTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	::nme::media::SoundTransform tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

::nme::media::SoundTransform SoundChannel_obj::set_soundTransform( ::nme::media::SoundTransform inTransform){
	HX_STACK_FRAME("nme.media.SoundChannel","set_soundTransform",0x49e66f82,"nme.media.SoundChannel.set_soundTransform","nme/media/SoundChannel.hx",160,0xbe716c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTransform,"inTransform")
	HX_STACK_LINE(161)
	::nme::media::SoundTransform tmp = inTransform->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(161)
	this->nmeTransform = tmp;
	HX_STACK_LINE(162)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(162)
	::nme::media::SoundTransform tmp2 = this->nmeTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	::nme::media::SoundChannel_obj::nme_sound_channel_set_transform(tmp1,tmp2);
	HX_STACK_LINE(164)
	::nme::media::SoundTransform tmp3 = inTransform;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(164)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

int SoundChannel_obj::nmeDynamicSoundCount;

Array< ::Dynamic > SoundChannel_obj::nmeIncompleteList;

::nme::media::SoundChannel SoundChannel_obj::createAsync( ::nme::media::SampleRate inRate,bool inIsStereo,::nme::media::AudioSampleFormat sampleFormat,Dynamic asyncDataRequired,::String inEngine){
	HX_STACK_FRAME("nme.media.SoundChannel","createAsync",0x8ae9a3f8,"nme.media.SoundChannel.createAsync","nme/media/SoundChannel.hx",46,0xbe716c36)
	HX_STACK_ARG(inRate,"inRate")
	HX_STACK_ARG(inIsStereo,"inIsStereo")
	HX_STACK_ARG(sampleFormat,"sampleFormat")
	HX_STACK_ARG(asyncDataRequired,"asyncDataRequired")
	HX_STACK_ARG(inEngine,"inEngine")
	HX_STACK_LINE(47)
	bool tmp = inIsStereo;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Dynamic tmp1 = asyncDataRequired;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::String tmp2 = inEngine;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	Dynamic tmp3 = ::nme::media::SoundChannel_obj::nme_sound_channel_create_async(inRate->__Index(),tmp,sampleFormat->__Index(),tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(47)
	Dynamic handle = tmp3;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(48)
	bool tmp4 = (handle == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	if ((tmp4)){
		HX_STACK_LINE(49)
		return null();
	}
	HX_STACK_LINE(51)
	::nme::media::SoundChannel tmp5 = ::nme::media::SoundChannel_obj::__new(handle,(int)0,(int)0,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(51)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(SoundChannel_obj,createAsync,return )

::nme::media::SoundChannel SoundChannel_obj::createDynamic( Dynamic inSoundHandle,::nme::media::SoundTransform sndTransform,::nme::events::EventDispatcher dataProvider){
	HX_STACK_FRAME("nme.media.SoundChannel","createDynamic",0xd880eb3b,"nme.media.SoundChannel.createDynamic","nme/media/SoundChannel.hx",56,0xbe716c36)
	HX_STACK_ARG(inSoundHandle,"inSoundHandle")
	HX_STACK_ARG(sndTransform,"sndTransform")
	HX_STACK_ARG(dataProvider,"dataProvider")
	HX_STACK_LINE(57)
	::nme::media::SoundChannel tmp = ::nme::media::SoundChannel_obj::__new(null(),(int)0,(int)0,sndTransform);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	::nme::media::SoundChannel result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(59)
	result->nmeDataProvider = dataProvider;
	HX_STACK_LINE(60)
	result->nmeHandle = inSoundHandle;
	HX_STACK_LINE(61)
	::nme::media::SoundChannel tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	::nme::media::SoundChannel_obj::nmeIncompleteList->push(tmp1);
	HX_STACK_LINE(62)
	(::nme::media::SoundChannel_obj::nmeDynamicSoundCount)++;
	HX_STACK_LINE(64)
	::nme::media::SoundChannel tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SoundChannel_obj,createDynamic,return )

bool SoundChannel_obj::nmeCompletePending( ){
	HX_STACK_FRAME("nme.media.SoundChannel","nmeCompletePending",0x25f5f5a0,"nme.media.SoundChannel.nmeCompletePending","nme/media/SoundChannel.hx",102,0xbe716c36)
	HX_STACK_LINE(103)
	int tmp = ::nme::media::SoundChannel_obj::nmeIncompleteList->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmeCompletePending,return )

Void SoundChannel_obj::nmePollComplete( ){
{
		HX_STACK_FRAME("nme.media.SoundChannel","nmePollComplete",0x3b89ffd6,"nme.media.SoundChannel.nmePollComplete","nme/media/SoundChannel.hx",113,0xbe716c36)
		HX_STACK_LINE(114)
		int tmp = ::nme::media::SoundChannel_obj::nmeIncompleteList->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		int checkLength = tmp;		HX_STACK_VAR(checkLength,"checkLength");
		HX_STACK_LINE(115)
		bool tmp1 = (checkLength > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		if ((tmp1)){
			HX_STACK_LINE(117)
			int idx = (int)0;		HX_STACK_VAR(idx,"idx");
			HX_STACK_LINE(118)
			while((true)){
				HX_STACK_LINE(118)
				bool tmp2 = (idx < checkLength);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(118)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(118)
				if ((tmp3)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(120)
				::nme::media::SoundChannel tmp4 = ::nme::media::SoundChannel_obj::nmeIncompleteList->__get(idx).StaticCast< ::nme::media::SoundChannel >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(120)
				::nme::media::SoundChannel channel = tmp4;		HX_STACK_VAR(channel,"channel");
				HX_STACK_LINE(122)
				bool tmp5 = channel->nmeCheckComplete();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(122)
				if ((tmp5)){
					HX_STACK_LINE(124)
					int tmp6 = idx;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(124)
					::nme::media::SoundChannel_obj::nmeIncompleteList->splice(tmp6,(int)1);
					HX_STACK_LINE(125)
					bool tmp7 = channel->nmeStopped;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(125)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(125)
					if ((tmp8)){
						HX_STACK_LINE(126)
						channel->dispatchComplete();
					}
					HX_STACK_LINE(127)
					(checkLength)--;
				}
				else{
					HX_STACK_LINE(130)
					(idx)++;
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,nmePollComplete,(void))

Dynamic SoundChannel_obj::nme_sound_channel_is_complete;

Dynamic SoundChannel_obj::nme_sound_channel_get_left;

Dynamic SoundChannel_obj::nme_sound_channel_get_right;

Dynamic SoundChannel_obj::nme_sound_channel_get_position;

Dynamic SoundChannel_obj::nme_sound_channel_set_position;

Dynamic SoundChannel_obj::nme_sound_channel_get_data_position;

Dynamic SoundChannel_obj::nme_sound_channel_stop;

Dynamic SoundChannel_obj::nme_sound_channel_create;

Dynamic SoundChannel_obj::nme_sound_channel_set_transform;

Dynamic SoundChannel_obj::nme_sound_channel_needs_data;

Dynamic SoundChannel_obj::nme_sound_channel_add_data;

Dynamic SoundChannel_obj::nme_sound_channel_create_async;

Dynamic SoundChannel_obj::nme_sound_channel_post_buffer;


SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(pitch,"pitch");
	HX_MARK_MEMBER_NAME(nmeStopped,"nmeStopped");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeTransform,"nmeTransform");
	HX_MARK_MEMBER_NAME(nmeDataProvider,"nmeDataProvider");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(pitch,"pitch");
	HX_VISIT_MEMBER_NAME(nmeStopped,"nmeStopped");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmeTransform,"nmeTransform");
	HX_VISIT_MEMBER_NAME(nmeDataProvider,"nmeDataProvider");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SoundChannel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { return pitch; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return inCallProp != hx::paccNever ? get_leftPeak() : leftPeak; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp != hx::paccNever) return get_position(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return inCallProp != hx::paccNever ? get_rightPeak() : rightPeak; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeStopped") ) { return nmeStopped; }
		if (HX_FIELD_EQ(inName,"postBuffer") ) { return postBuffer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeTransform") ) { return nmeTransform; }
		if (HX_FIELD_EQ(inName,"get_leftPeak") ) { return get_leftPeak_dyn(); }
		if (HX_FIELD_EQ(inName,"get_position") ) { return get_position_dyn(); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return set_position_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_rightPeak") ) { return get_rightPeak_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp != hx::paccNever) return get_soundTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDataProvider") ) { return nmeDataProvider; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeCheckComplete") ) { return nmeCheckComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatchComplete") ) { return dispatchComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return get_soundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return set_soundTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SoundChannel_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"createAsync") ) { outValue = createAsync_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createDynamic") ) { outValue = createDynamic_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmePollComplete") ) { outValue = nmePollComplete_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIncompleteList") ) { outValue = nmeIncompleteList; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeCompletePending") ) { outValue = nmeCompletePending_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeDynamicSoundCount") ) { outValue = nmeDynamicSoundCount; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { outValue = nme_sound_channel_stop; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { outValue = nme_sound_channel_create; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { outValue = nme_sound_channel_get_left; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { outValue = nme_sound_channel_add_data; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { outValue = nme_sound_channel_get_right; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { outValue = nme_sound_channel_needs_data; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { outValue = nme_sound_channel_is_complete; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_post_buffer") ) { outValue = nme_sound_channel_post_buffer; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { outValue = nme_sound_channel_get_position; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { outValue = nme_sound_channel_set_position; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_async") ) { outValue = nme_sound_channel_create_async; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { outValue = nme_sound_channel_set_transform; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { outValue = nme_sound_channel_get_data_position; return true;  }
	}
	return false;
}

Dynamic SoundChannel_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pitch") ) { pitch=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp != hx::paccNever) return set_position(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeStopped") ) { nmeStopped=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeTransform") ) { nmeTransform=inValue.Cast< ::nme::media::SoundTransform >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp != hx::paccNever) return set_soundTransform(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDataProvider") ) { nmeDataProvider=inValue.Cast< ::nme::events::EventDispatcher >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool SoundChannel_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"nmeIncompleteList") ) { nmeIncompleteList=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeDynamicSoundCount") ) { nmeDynamicSoundCount=ioValue.Cast< int >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_stop") ) { nme_sound_channel_stop=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create") ) { nme_sound_channel_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_left") ) { nme_sound_channel_get_left=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_add_data") ) { nme_sound_channel_add_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_right") ) { nme_sound_channel_get_right=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_needs_data") ) { nme_sound_channel_needs_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_is_complete") ) { nme_sound_channel_is_complete=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_post_buffer") ) { nme_sound_channel_post_buffer=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_position") ) { nme_sound_channel_get_position=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_position") ) { nme_sound_channel_set_position=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sound_channel_create_async") ) { nme_sound_channel_create_async=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_set_transform") ) { nme_sound_channel_set_transform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_sound_channel_get_data_position") ) { nme_sound_channel_get_data_position=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"));
	outFields->push(HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("soundTransform","\x9d","\xee","\xde","\x22"));
	outFields->push(HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"));
	outFields->push(HX_HCSTRING("nmeStopped","\x67","\x37","\x63","\x12"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("nmeTransform","\x46","\x1d","\xbc","\xe3"));
	outFields->push(HX_HCSTRING("nmeDataProvider","\xe1","\x31","\x1f","\xc4"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5")},
	{hx::fsFloat,(int)offsetof(SoundChannel_obj,pitch),HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2")},
	{hx::fsBool,(int)offsetof(SoundChannel_obj,nmeStopped),HX_HCSTRING("nmeStopped","\x67","\x37","\x63","\x12")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SoundChannel_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsObject /*::nme::media::SoundTransform*/ ,(int)offsetof(SoundChannel_obj,nmeTransform),HX_HCSTRING("nmeTransform","\x46","\x1d","\xbc","\xe3")},
	{hx::fsObject /*::nme::events::EventDispatcher*/ ,(int)offsetof(SoundChannel_obj,nmeDataProvider),HX_HCSTRING("nmeDataProvider","\xe1","\x31","\x1f","\xc4")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &SoundChannel_obj::nmeDynamicSoundCount,HX_HCSTRING("nmeDynamicSoundCount","\xb9","\x4b","\x66","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &SoundChannel_obj::nmeIncompleteList,HX_HCSTRING("nmeIncompleteList","\x02","\x13","\x24","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_is_complete,HX_HCSTRING("nme_sound_channel_is_complete","\x09","\xc0","\x2c","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_get_left,HX_HCSTRING("nme_sound_channel_get_left","\x95","\xe3","\x0b","\xfe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_get_right,HX_HCSTRING("nme_sound_channel_get_right","\x8e","\x4c","\x68","\xc3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_get_position,HX_HCSTRING("nme_sound_channel_get_position","\x37","\x5b","\xc6","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_set_position,HX_HCSTRING("nme_sound_channel_set_position","\xab","\x7e","\xbf","\xe3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_get_data_position,HX_HCSTRING("nme_sound_channel_get_data_position","\x50","\x6f","\x69","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_stop,HX_HCSTRING("nme_sound_channel_stop","\x87","\x69","\x01","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_create,HX_HCSTRING("nme_sound_channel_create","\xc1","\x0b","\x2a","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_set_transform,HX_HCSTRING("nme_sound_channel_set_transform","\x2a","\x91","\x10","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_needs_data,HX_HCSTRING("nme_sound_channel_needs_data","\xd1","\x34","\x33","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_add_data,HX_HCSTRING("nme_sound_channel_add_data","\x4d","\x48","\x45","\x12")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_create_async,HX_HCSTRING("nme_sound_channel_create_async","\xfe","\x18","\x98","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &SoundChannel_obj::nme_sound_channel_post_buffer,HX_HCSTRING("nme_sound_channel_post_buffer","\x5a","\x87","\x13","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("leftPeak","\xc6","\x21","\x50","\x51"),
	HX_HCSTRING("rightPeak","\x1b","\x34","\x1b","\xb5"),
	HX_HCSTRING("pitch","\xc0","\xbb","\xa0","\xc2"),
	HX_HCSTRING("nmeStopped","\x67","\x37","\x63","\x12"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("nmeTransform","\x46","\x1d","\xbc","\xe3"),
	HX_HCSTRING("nmeDataProvider","\xe1","\x31","\x1f","\xc4"),
	HX_HCSTRING("postBuffer","\x80","\x3d","\xcd","\x25"),
	HX_HCSTRING("nmeCheckComplete","\x7b","\x42","\x49","\x84"),
	HX_HCSTRING("dispatchComplete","\x93","\xd5","\xc1","\x98"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_leftPeak","\xcf","\xd5","\x69","\x06"),
	HX_HCSTRING("get_rightPeak","\xf2","\x07","\x7f","\x76"),
	HX_HCSTRING("get_position","\xb2","\x54","\x14","\x80"),
	HX_HCSTRING("set_position","\x26","\x78","\x0d","\x95"),
	HX_HCSTRING("get_soundTransform","\x66","\xcf","\x78","\xbe"),
	HX_HCSTRING("set_soundTransform","\xda","\x01","\x28","\x9b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nmeDynamicSoundCount,"nmeDynamicSoundCount");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nmeIncompleteList,"nmeIncompleteList");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create_async,"nme_sound_channel_create_async");
	HX_MARK_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_post_buffer,"nme_sound_channel_post_buffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nmeDynamicSoundCount,"nmeDynamicSoundCount");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nmeIncompleteList,"nmeIncompleteList");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_is_complete,"nme_sound_channel_is_complete");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_left,"nme_sound_channel_get_left");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_right,"nme_sound_channel_get_right");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_position,"nme_sound_channel_get_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_position,"nme_sound_channel_set_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_get_data_position,"nme_sound_channel_get_data_position");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_stop,"nme_sound_channel_stop");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create,"nme_sound_channel_create");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_set_transform,"nme_sound_channel_set_transform");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_needs_data,"nme_sound_channel_needs_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_add_data,"nme_sound_channel_add_data");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_create_async,"nme_sound_channel_create_async");
	HX_VISIT_MEMBER_NAME(SoundChannel_obj::nme_sound_channel_post_buffer,"nme_sound_channel_post_buffer");
};

#endif

hx::Class SoundChannel_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nmeDynamicSoundCount","\xb9","\x4b","\x66","\x48"),
	HX_HCSTRING("nmeIncompleteList","\x02","\x13","\x24","\x13"),
	HX_HCSTRING("createAsync","\xa0","\x36","\xb9","\x4f"),
	HX_HCSTRING("createDynamic","\xe3","\x77","\x58","\x1e"),
	HX_HCSTRING("nmeCompletePending","\xf8","\x87","\x37","\x77"),
	HX_HCSTRING("nmePollComplete","\x7e","\x06","\xdc","\x4f"),
	HX_HCSTRING("nme_sound_channel_is_complete","\x09","\xc0","\x2c","\x12"),
	HX_HCSTRING("nme_sound_channel_get_left","\x95","\xe3","\x0b","\xfe"),
	HX_HCSTRING("nme_sound_channel_get_right","\x8e","\x4c","\x68","\xc3"),
	HX_HCSTRING("nme_sound_channel_get_position","\x37","\x5b","\xc6","\xce"),
	HX_HCSTRING("nme_sound_channel_set_position","\xab","\x7e","\xbf","\xe3"),
	HX_HCSTRING("nme_sound_channel_get_data_position","\x50","\x6f","\x69","\x00"),
	HX_HCSTRING("nme_sound_channel_stop","\x87","\x69","\x01","\x3c"),
	HX_HCSTRING("nme_sound_channel_create","\xc1","\x0b","\x2a","\xbb"),
	HX_HCSTRING("nme_sound_channel_set_transform","\x2a","\x91","\x10","\xd9"),
	HX_HCSTRING("nme_sound_channel_needs_data","\xd1","\x34","\x33","\x92"),
	HX_HCSTRING("nme_sound_channel_add_data","\x4d","\x48","\x45","\x12"),
	HX_HCSTRING("nme_sound_channel_create_async","\xfe","\x18","\x98","\x5e"),
	HX_HCSTRING("nme_sound_channel_post_buffer","\x5a","\x87","\x13","\xbc"),
	::String(null()) };

void SoundChannel_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.media.SoundChannel","\xc6","\x29","\xd0","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SoundChannel_obj::__GetStatic;
	__mClass->mSetStaticField = &SoundChannel_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundChannel_obj >;
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

void SoundChannel_obj::__boot()
{
	nmeDynamicSoundCount= (int)0;
	nmeIncompleteList= Array_obj< ::Dynamic >::__new();
	nme_sound_channel_is_complete= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_is_complete","\x09","\xc0","\x2c","\x12"),(int)1);
	nme_sound_channel_get_left= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_get_left","\x95","\xe3","\x0b","\xfe"),(int)1);
	nme_sound_channel_get_right= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_get_right","\x8e","\x4c","\x68","\xc3"),(int)1);
	nme_sound_channel_get_position= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_get_position","\x37","\x5b","\xc6","\xce"),(int)1);
	nme_sound_channel_set_position= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_set_position","\xab","\x7e","\xbf","\xe3"),(int)2);
	nme_sound_channel_get_data_position= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_get_data_position","\x50","\x6f","\x69","\x00"),(int)1);
	nme_sound_channel_stop= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_stop","\x87","\x69","\x01","\x3c"),(int)1);
	nme_sound_channel_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_create","\xc1","\x0b","\x2a","\xbb"),(int)4);
	nme_sound_channel_set_transform= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_set_transform","\x2a","\x91","\x10","\xd9"),(int)2);
	nme_sound_channel_needs_data= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_needs_data","\xd1","\x34","\x33","\x92"),(int)1);
	nme_sound_channel_add_data= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_add_data","\x4d","\x48","\x45","\x12"),(int)2);
	nme_sound_channel_create_async= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_create_async","\xfe","\x18","\x98","\x5e"),(int)5);
	nme_sound_channel_post_buffer= ::nme::Loader_obj::load(HX_HCSTRING("nme_sound_channel_post_buffer","\x5a","\x87","\x13","\xbc"),(int)2);
}

} // end namespace nme
} // end namespace media
