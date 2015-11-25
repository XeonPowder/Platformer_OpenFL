#ifndef INCLUDED_pgr_dconsole_DCUtil
#define INCLUDED_pgr_dconsole_DCUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,ALIAS_TYPE)
HX_DECLARE_CLASS2(pgr,dconsole,DCCommands)
HX_DECLARE_CLASS2(pgr,dconsole,DCUtil)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCUtil_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCUtil_obj OBJ_;
		DCUtil_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="pgr.dconsole.DCUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DCUtil","\x21","\xeb","\xa4","\xfc"); }

		static ::String formatAlias( ::pgr::dconsole::DCCommands commands,::String alias,::pgr::dconsole::ALIAS_TYPE type);
		static Dynamic formatAlias_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCUtil */ 
