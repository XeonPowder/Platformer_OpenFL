#ifndef INCLUDED_nme_media_SoundLoaderContext
#define INCLUDED_nme_media_SoundLoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,media,SoundLoaderContext)
namespace nme{
namespace media{


class HXCPP_CLASS_ATTRIBUTES  SoundLoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SoundLoaderContext_obj OBJ_;
		SoundLoaderContext_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.media.SoundLoaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SoundLoaderContext_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundLoaderContext_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("SoundLoaderContext","\xed","\xbf","\xf5","\x97"); }

};

} // end namespace nme
} // end namespace media

#endif /* INCLUDED_nme_media_SoundLoaderContext */ 
