#ifndef INCLUDED_nme_text_GridFitType
#define INCLUDED_nme_text_GridFitType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,text,GridFitType)
namespace nme{
namespace text{


class GridFitType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GridFitType_obj OBJ_;

	public:
		GridFitType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.text.GridFitType","\xcc","\x2f","\x4a","\x3d"); }
		::String __ToString() const { return HX_HCSTRING("GridFitType.","\xa9","\xfd","\x72","\xa5") + tag; }

		static ::nme::text::GridFitType NONE;
		static inline ::nme::text::GridFitType NONE_dyn() { return NONE; }
		static ::nme::text::GridFitType PIXEL;
		static inline ::nme::text::GridFitType PIXEL_dyn() { return PIXEL; }
		static ::nme::text::GridFitType SUBPIXEL;
		static inline ::nme::text::GridFitType SUBPIXEL_dyn() { return SUBPIXEL; }
};

} // end namespace nme
} // end namespace text

#endif /* INCLUDED_nme_text_GridFitType */ 
