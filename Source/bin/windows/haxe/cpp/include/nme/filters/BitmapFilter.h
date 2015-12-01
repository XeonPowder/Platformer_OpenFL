#ifndef INCLUDED_nme_filters_BitmapFilter
#define INCLUDED_nme_filters_BitmapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,filters,BitmapFilter)
namespace nme{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES  BitmapFilter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapFilter_obj OBJ_;
		BitmapFilter_obj();
		Void __construct(::String inType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.filters.BitmapFilter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapFilter_obj > __new(::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapFilter_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapFilter","\x27","\x0d","\x67","\x58"); }

		::String type;
		virtual ::nme::filters::BitmapFilter clone( );
		Dynamic clone_dyn();

};

} // end namespace nme
} // end namespace filters

#endif /* INCLUDED_nme_filters_BitmapFilter */ 
