#ifndef INCLUDED_nme_media_SoundTransform
#define INCLUDED_nme_media_SoundTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,media,SoundTransform)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundTransform_obj OBJ_;
		SoundTransform_obj();
		Void __construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.media.SoundTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundTransform_obj > __new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundTransform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundTransform","\xbd","\x82","\x34","\xcd"); }

		Float pan;
		Float volume;
		virtual ::nme::media::SoundTransform clone( );
		Dynamic clone_dyn();

};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_SoundTransform */ 
