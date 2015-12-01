#ifndef INCLUDED_nme_native_Include
#define INCLUDED_nme_native_Include

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,native,Include)
namespace nme{
namespace native{


class HXCPP_CLASS_ATTRIBUTES  Include_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Include_obj OBJ_;
		Include_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.native.Include")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Include_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Include_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Include","\x08","\x26","\x48","\x1f"); }

};

} // end namespace nme
} // end namespace native

#endif /* INCLUDED_nme_native_Include */ 
