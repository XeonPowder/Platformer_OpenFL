#include <hxcpp.h>

#ifndef INCLUDED_nme_media_AudioSampleFormat
#include <nme/media/AudioSampleFormat.h>
#endif
namespace nme{
namespace media{

::nme::media::AudioSampleFormat AudioSampleFormat_obj::Float32;

::nme::media::AudioSampleFormat AudioSampleFormat_obj::SInt16;

::nme::media::AudioSampleFormat AudioSampleFormat_obj::UInt8;

HX_DEFINE_CREATE_ENUM(AudioSampleFormat_obj)

int AudioSampleFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Float32","\x1b","\xb9","\x59","\xb7")) return 2;
	if (inName==HX_HCSTRING("SInt16","\x41","\xf4","\xec","\x80")) return 1;
	if (inName==HX_HCSTRING("UInt8","\x5e","\xbf","\xa3","\x21")) return 0;
	return super::__FindIndex(inName);
}

int AudioSampleFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Float32","\x1b","\xb9","\x59","\xb7")) return 0;
	if (inName==HX_HCSTRING("SInt16","\x41","\xf4","\xec","\x80")) return 0;
	if (inName==HX_HCSTRING("UInt8","\x5e","\xbf","\xa3","\x21")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AudioSampleFormat_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Float32","\x1b","\xb9","\x59","\xb7")) return Float32;
	if (inName==HX_HCSTRING("SInt16","\x41","\xf4","\xec","\x80")) return SInt16;
	if (inName==HX_HCSTRING("UInt8","\x5e","\xbf","\xa3","\x21")) return UInt8;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("UInt8","\x5e","\xbf","\xa3","\x21"),
	HX_HCSTRING("SInt16","\x41","\xf4","\xec","\x80"),
	HX_HCSTRING("Float32","\x1b","\xb9","\x59","\xb7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AudioSampleFormat_obj::Float32,"Float32");
	HX_MARK_MEMBER_NAME(AudioSampleFormat_obj::SInt16,"SInt16");
	HX_MARK_MEMBER_NAME(AudioSampleFormat_obj::UInt8,"UInt8");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AudioSampleFormat_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AudioSampleFormat_obj::Float32,"Float32");
	HX_VISIT_MEMBER_NAME(AudioSampleFormat_obj::SInt16,"SInt16");
	HX_VISIT_MEMBER_NAME(AudioSampleFormat_obj::UInt8,"UInt8");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class AudioSampleFormat_obj::__mClass;

Dynamic __Create_AudioSampleFormat_obj() { return new AudioSampleFormat_obj; }

void AudioSampleFormat_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.media.AudioSampleFormat","\xa5","\x85","\x43","\x62"), hx::TCanCast< AudioSampleFormat_obj >,sStaticFields,sMemberFields,
	&__Create_AudioSampleFormat_obj, &__Create,
	&super::__SGetClass(), &CreateAudioSampleFormat_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AudioSampleFormat_obj::__boot()
{
hx::Static(Float32) = hx::CreateEnum< AudioSampleFormat_obj >(HX_HCSTRING("Float32","\x1b","\xb9","\x59","\xb7"),2);
hx::Static(SInt16) = hx::CreateEnum< AudioSampleFormat_obj >(HX_HCSTRING("SInt16","\x41","\xf4","\xec","\x80"),1);
hx::Static(UInt8) = hx::CreateEnum< AudioSampleFormat_obj >(HX_HCSTRING("UInt8","\x5e","\xbf","\xa3","\x21"),0);
}


} // end namespace nme
} // end namespace media
