#ifndef INCLUDED_nme_display_InterpolationMethod
#define INCLUDED_nme_display_InterpolationMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,InterpolationMethod)
namespace nme{
namespace display{


class InterpolationMethod_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef InterpolationMethod_obj OBJ_;

	public:
		InterpolationMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.display.InterpolationMethod","\xb1","\xbd","\x82","\xed"); }
		::String __ToString() const { return HX_HCSTRING("InterpolationMethod.","\x89","\x1d","\x74","\x40") + tag; }

		static ::nme::display::InterpolationMethod LINEAR_RGB;
		static inline ::nme::display::InterpolationMethod LINEAR_RGB_dyn() { return LINEAR_RGB; }
		static ::nme::display::InterpolationMethod RGB;
		static inline ::nme::display::InterpolationMethod RGB_dyn() { return RGB; }
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_InterpolationMethod */ 
