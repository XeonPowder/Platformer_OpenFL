#ifndef INCLUDED_nme_text_FontType
#define INCLUDED_nme_text_FontType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,text,FontType)
namespace nme{
namespace text{


class FontType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontType_obj OBJ_;

	public:
		FontType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.text.FontType","\x02","\x21","\x0a","\x7d"); }
		::String __ToString() const { return HX_HCSTRING("FontType.","\xc5","\xf3","\x79","\x68") + tag; }

		static ::nme::text::FontType DEVICE;
		static inline ::nme::text::FontType DEVICE_dyn() { return DEVICE; }
		static ::nme::text::FontType EMBEDDED;
		static inline ::nme::text::FontType EMBEDDED_dyn() { return EMBEDDED; }
		static ::nme::text::FontType EMBEDDED_CFF;
		static inline ::nme::text::FontType EMBEDDED_CFF_dyn() { return EMBEDDED_CFF; }
};

} // end namespace nme
} // end namespace text

#endif /* INCLUDED_nme_text_FontType */ 
