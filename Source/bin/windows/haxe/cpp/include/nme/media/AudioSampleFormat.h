#ifndef INCLUDED_nme_media_AudioSampleFormat
#define INCLUDED_nme_media_AudioSampleFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,media,AudioSampleFormat)
namespace nme{
namespace media{


class AudioSampleFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef AudioSampleFormat_obj OBJ_;

	public:
		AudioSampleFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.media.AudioSampleFormat","\xa5","\x85","\x43","\x62"); }
		::String __ToString() const { return HX_HCSTRING("AudioSampleFormat.","\x77","\xef","\x72","\x99") + tag; }

		static ::nme::media::AudioSampleFormat Float32;
		static inline ::nme::media::AudioSampleFormat Float32_dyn() { return Float32; }
		static ::nme::media::AudioSampleFormat SInt16;
		static inline ::nme::media::AudioSampleFormat SInt16_dyn() { return SInt16; }
		static ::nme::media::AudioSampleFormat UInt8;
		static inline ::nme::media::AudioSampleFormat UInt8_dyn() { return UInt8; }
};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_AudioSampleFormat */ 
