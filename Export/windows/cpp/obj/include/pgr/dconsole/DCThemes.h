#ifndef INCLUDED_pgr_dconsole_DCThemes
#define INCLUDED_pgr_dconsole_DCThemes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,DCThemes)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCThemes_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCThemes_obj OBJ_;
		DCThemes_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="pgr.dconsole.DCThemes")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCThemes_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCThemes_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DCThemes","\x29","\xa3","\x40","\xce"); }

		static void __boot();
		static Dynamic current;
		static Dynamic LIGHT;
		static Dynamic DARK;
};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCThemes */ 
