#ifndef INCLUDED_pgr_dconsole_ALIAS_TYPE
#define INCLUDED_pgr_dconsole_ALIAS_TYPE

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,ALIAS_TYPE)
namespace pgr{
namespace dconsole{


class ALIAS_TYPE_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ALIAS_TYPE_obj OBJ_;

	public:
		ALIAS_TYPE_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("pgr.dconsole.ALIAS_TYPE","\xf1","\x76","\x91","\xd1"); }
		::String __ToString() const { return HX_HCSTRING("ALIAS_TYPE.","\xe5","\x2c","\x51","\x8b") + tag; }

		static ::pgr::dconsole::ALIAS_TYPE COMMAND;
		static inline ::pgr::dconsole::ALIAS_TYPE COMMAND_dyn() { return COMMAND; }
		static ::pgr::dconsole::ALIAS_TYPE FUNCTION;
		static inline ::pgr::dconsole::ALIAS_TYPE FUNCTION_dyn() { return FUNCTION; }
		static ::pgr::dconsole::ALIAS_TYPE OBJECT;
		static inline ::pgr::dconsole::ALIAS_TYPE OBJECT_dyn() { return OBJECT; }
};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_ALIAS_TYPE */ 
