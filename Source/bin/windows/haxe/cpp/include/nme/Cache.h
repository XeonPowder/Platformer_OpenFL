#ifndef INCLUDED_nme_Cache
#define INCLUDED_nme_Cache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,Cache)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  Cache_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Cache_obj OBJ_;
		Cache_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.Cache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Cache_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Cache_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Cache","\x22","\x0a","\x42","\xd4"); }

		virtual Void removeBitmapData( ::String inId);
		Dynamic removeBitmapData_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_Cache */ 
