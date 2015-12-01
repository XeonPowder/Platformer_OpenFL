#ifndef INCLUDED_nme_geom_ColorTransform
#define INCLUDED_nme_geom_ColorTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,ColorTransform)
namespace nme{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  ColorTransform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ColorTransform_obj OBJ_;
		ColorTransform_obj();
		Void __construct(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.geom.ColorTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ColorTransform_obj > __new(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorTransform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ColorTransform","\xa9","\x6b","\x95","\x57"); }

		Float alphaMultiplier;
		Float alphaOffset;
		Float blueMultiplier;
		Float blueOffset;
		Float greenMultiplier;
		Float greenOffset;
		Float redMultiplier;
		Float redOffset;
		virtual Void concat( ::nme::geom::ColorTransform second);
		Dynamic concat_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual int set_color( int value);
		Dynamic set_color_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_ColorTransform */ 
