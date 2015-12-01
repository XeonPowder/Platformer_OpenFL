#ifndef INCLUDED_nme_text_TextLineMetrics
#define INCLUDED_nme_text_TextLineMetrics

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,text,TextLineMetrics)
namespace nme{
namespace text{


class HXCPP_CLASS_ATTRIBUTES  TextLineMetrics_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TextLineMetrics_obj OBJ_;
		TextLineMetrics_obj();
		Void __construct(Dynamic in_x,Dynamic in_width,Dynamic in_height,Dynamic in_ascent,Dynamic in_descent,Dynamic in_leading);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.text.TextLineMetrics")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TextLineMetrics_obj > __new(Dynamic in_x,Dynamic in_width,Dynamic in_height,Dynamic in_ascent,Dynamic in_descent,Dynamic in_leading);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextLineMetrics_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("TextLineMetrics","\xe2","\xc0","\x45","\x7d"); }

		Float x;
		Float width;
		Float height;
		Float ascent;
		Float descent;
		Float leading;
};

} // end namespace nme
} // end namespace text

#endif /* INCLUDED_nme_text_TextLineMetrics */ 
