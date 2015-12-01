#ifndef INCLUDED_nme_Version
#define INCLUDED_nme_Version

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,Version)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  Version_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Version_obj OBJ_;
		Version_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.Version")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Version_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Version_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Version","\xf8","\x0e","\x43","\x4a"); }

		static void __boot();
		static ::String name;
};

} // end namespace nme

#endif /* INCLUDED_nme_Version */ 
