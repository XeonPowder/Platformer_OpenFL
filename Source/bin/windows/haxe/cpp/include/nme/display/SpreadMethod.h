#ifndef INCLUDED_nme_display_SpreadMethod
#define INCLUDED_nme_display_SpreadMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,SpreadMethod)
namespace nme{
namespace display{


class SpreadMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef SpreadMethod_obj OBJ_;

	public:
		SpreadMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.display.SpreadMethod","\xa8","\x7d","\x17","\xd4"); }
		::String __ToString() const { return HX_HCSTRING("SpreadMethod.","\xda","\x47","\x51","\xda") + tag; }

		static ::nme::display::SpreadMethod PAD;
		static inline ::nme::display::SpreadMethod PAD_dyn() { return PAD; }
		static ::nme::display::SpreadMethod REFLECT;
		static inline ::nme::display::SpreadMethod REFLECT_dyn() { return REFLECT; }
		static ::nme::display::SpreadMethod REPEAT;
		static inline ::nme::display::SpreadMethod REPEAT_dyn() { return REPEAT; }
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_SpreadMethod */ 
