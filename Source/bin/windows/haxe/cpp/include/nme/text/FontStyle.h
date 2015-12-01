#ifndef INCLUDED_nme_text_FontStyle
#define INCLUDED_nme_text_FontStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,text,FontStyle)
namespace nme{
namespace text{


class FontStyle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef FontStyle_obj OBJ_;

	public:
		FontStyle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.text.FontStyle","\xe9","\xf5","\x24","\x55"); }
		::String __ToString() const { return HX_HCSTRING("FontStyle.","\x2c","\x81","\xd7","\xc0") + tag; }

		static ::nme::text::FontStyle BOLD;
		static inline ::nme::text::FontStyle BOLD_dyn() { return BOLD; }
		static ::nme::text::FontStyle BOLD_ITALIC;
		static inline ::nme::text::FontStyle BOLD_ITALIC_dyn() { return BOLD_ITALIC; }
		static ::nme::text::FontStyle ITALIC;
		static inline ::nme::text::FontStyle ITALIC_dyn() { return ITALIC; }
		static ::nme::text::FontStyle REGULAR;
		static inline ::nme::text::FontStyle REGULAR_dyn() { return REGULAR; }
};

} // end namespace nme
} // end namespace text

#endif /* INCLUDED_nme_text_FontStyle */ 
