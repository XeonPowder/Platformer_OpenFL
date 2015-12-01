#include <hxcpp.h>

#ifndef INCLUDED_nme_media_SampleRate
#include <nme/media/SampleRate.h>
#endif
namespace nme{
namespace media{

::nme::media::SampleRate SampleRate_obj::Rate11025;

::nme::media::SampleRate SampleRate_obj::Rate22050;

::nme::media::SampleRate SampleRate_obj::Rate44100;

HX_DEFINE_CREATE_ENUM(SampleRate_obj)

int SampleRate_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("Rate11025","\x13","\x9a","\x60","\xce")) return 0;
	if (inName==HX_HCSTRING("Rate22050","\xcb","\x67","\x70","\x62")) return 1;
	if (inName==HX_HCSTRING("Rate44100","\xf1","\xbb","\x90","\x8a")) return 2;
	return super::__FindIndex(inName);
}

int SampleRate_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("Rate11025","\x13","\x9a","\x60","\xce")) return 0;
	if (inName==HX_HCSTRING("Rate22050","\xcb","\x67","\x70","\x62")) return 0;
	if (inName==HX_HCSTRING("Rate44100","\xf1","\xbb","\x90","\x8a")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic SampleRate_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("Rate11025","\x13","\x9a","\x60","\xce")) return Rate11025;
	if (inName==HX_HCSTRING("Rate22050","\xcb","\x67","\x70","\x62")) return Rate22050;
	if (inName==HX_HCSTRING("Rate44100","\xf1","\xbb","\x90","\x8a")) return Rate44100;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("Rate11025","\x13","\x9a","\x60","\xce"),
	HX_HCSTRING("Rate22050","\xcb","\x67","\x70","\x62"),
	HX_HCSTRING("Rate44100","\xf1","\xbb","\x90","\x8a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SampleRate_obj::Rate11025,"Rate11025");
	HX_MARK_MEMBER_NAME(SampleRate_obj::Rate22050,"Rate22050");
	HX_MARK_MEMBER_NAME(SampleRate_obj::Rate44100,"Rate44100");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SampleRate_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SampleRate_obj::Rate11025,"Rate11025");
	HX_VISIT_MEMBER_NAME(SampleRate_obj::Rate22050,"Rate22050");
	HX_VISIT_MEMBER_NAME(SampleRate_obj::Rate44100,"Rate44100");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class SampleRate_obj::__mClass;

Dynamic __Create_SampleRate_obj() { return new SampleRate_obj; }

void SampleRate_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.media.SampleRate","\xbc","\xf9","\xf9","\x9c"), hx::TCanCast< SampleRate_obj >,sStaticFields,sMemberFields,
	&__Create_SampleRate_obj, &__Create,
	&super::__SGetClass(), &CreateSampleRate_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void SampleRate_obj::__boot()
{
hx::Static(Rate11025) = hx::CreateEnum< SampleRate_obj >(HX_HCSTRING("Rate11025","\x13","\x9a","\x60","\xce"),0);
hx::Static(Rate22050) = hx::CreateEnum< SampleRate_obj >(HX_HCSTRING("Rate22050","\xcb","\x67","\x70","\x62"),1);
hx::Static(Rate44100) = hx::CreateEnum< SampleRate_obj >(HX_HCSTRING("Rate44100","\xf1","\xbb","\x90","\x8a"),2);
}


} // end namespace nme
} // end namespace media
