#ifndef INCLUDED_nme_display_LineScaleMode
#define INCLUDED_nme_display_LineScaleMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,LineScaleMode)
namespace nme{
namespace display{


class LineScaleMode_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef LineScaleMode_obj OBJ_;

	public:
		LineScaleMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.display.LineScaleMode","\x05","\x82","\x68","\x9d"); }
		::String __ToString() const { return HX_HCSTRING("LineScaleMode.","\xb5","\x79","\xa6","\xa3") + tag; }

		static ::nme::display::LineScaleMode HORIZONTAL;
		static inline ::nme::display::LineScaleMode HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::nme::display::LineScaleMode NONE;
		static inline ::nme::display::LineScaleMode NONE_dyn() { return NONE; }
		static ::nme::display::LineScaleMode NORMAL;
		static inline ::nme::display::LineScaleMode NORMAL_dyn() { return NORMAL; }
		static ::nme::display::LineScaleMode OPENGL;
		static inline ::nme::display::LineScaleMode OPENGL_dyn() { return OPENGL; }
		static ::nme::display::LineScaleMode VERTICAL;
		static inline ::nme::display::LineScaleMode VERTICAL_dyn() { return VERTICAL; }
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_LineScaleMode */ 
