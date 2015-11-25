#ifndef INCLUDED_pgr_dconsole_DCInterp
#define INCLUDED_pgr_dconsole_DCInterp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS2(pgr,dconsole,DCInterp)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCInterp_obj : public ::hscript::Interp_obj{
	public:
		typedef ::hscript::Interp_obj super;
		typedef DCInterp_obj OBJ_;
		DCInterp_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.DCInterp")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCInterp_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCInterp_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DCInterp","\xb3","\x52","\x9f","\xe6"); }

		virtual Dynamic get( Dynamic o,::String f);

		virtual Dynamic set( Dynamic o,::String f,Dynamic v);

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCInterp */ 
