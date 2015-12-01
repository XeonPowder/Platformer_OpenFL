#ifndef INCLUDED_nme_text_Font
#define INCLUDED_nme_text_Font

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,text,Font)
HX_DECLARE_CLASS2(nme,text,FontStyle)
HX_DECLARE_CLASS2(nme,text,FontType)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  Font_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Font_obj OBJ_;
		Font_obj();
		Void __construct(::String __o_inFilename,::nme::text::FontStyle inStyle,::nme::text::FontType inType,::String resourceName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.text.Font")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Font_obj > __new(::String __o_inFilename,::nme::text::FontStyle inStyle,::nme::text::FontType inType,::String resourceName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Font_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"); }

		static void __boot();
		static Array< ::Dynamic > nmeRegisteredFonts;
		static Array< ::Dynamic > nmeDeviceFonts;
		static Array< ::Dynamic > enumerateFonts( hx::Null< bool >  enumerateDeviceFonts);
		static Dynamic enumerateFonts_dyn();

		static Dynamic load( ::String inFilename);
		static Dynamic load_dyn();

		static Dynamic loadBytes( ::nme::utils::ByteArray inBytes);
		static Dynamic loadBytes_dyn();

		static Void registerFontData( ::nme::text::Font instance,::nme::utils::ByteArray inBytes);
		static Dynamic registerFontData_dyn();

		static Void registerFont( ::hx::Class font);
		static Dynamic registerFont_dyn();

		static bool get_useNative( );
		static Dynamic get_useNative_dyn();

		static bool set_useNative( bool inVal);
		static Dynamic set_useNative_dyn();

		static Dynamic nme_font_set_use_native;
		static Dynamic &nme_font_set_use_native_dyn() { return nme_font_set_use_native;}
		static Dynamic nme_font_get_use_native;
		static Dynamic &nme_font_get_use_native_dyn() { return nme_font_get_use_native;}
		static Dynamic freetype_import_font;
		static Dynamic &freetype_import_font_dyn() { return freetype_import_font;}
		static Dynamic nme_font_register_font;
		static Dynamic &nme_font_register_font_dyn() { return nme_font_register_font;}
		static Dynamic nme_font_iterate_device_fonts;
		static Dynamic &nme_font_iterate_device_fonts_dyn() { return nme_font_iterate_device_fonts;}
		::String fontName;
		::nme::text::FontStyle fontStyle;
		::nme::text::FontType fontType;
		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nme
} // end namespace text

#endif /* INCLUDED_nme_text_Font */ 
