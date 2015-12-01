#ifndef INCLUDED_nme_display_JointStyle
#define INCLUDED_nme_display_JointStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,JointStyle)
namespace nme{
namespace display{


class JointStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef JointStyle_obj OBJ_;

	public:
		JointStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.display.JointStyle","\x7b","\xc2","\xbe","\xfe"); }
		::String __ToString() const { return HX_HCSTRING("JointStyle.","\xa7","\x3e","\x67","\xdb") + tag; }

		static ::nme::display::JointStyle BEVEL;
		static inline ::nme::display::JointStyle BEVEL_dyn() { return BEVEL; }
		static ::nme::display::JointStyle MITER;
		static inline ::nme::display::JointStyle MITER_dyn() { return MITER; }
		static ::nme::display::JointStyle ROUND;
		static inline ::nme::display::JointStyle ROUND_dyn() { return ROUND; }
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_JointStyle */ 
