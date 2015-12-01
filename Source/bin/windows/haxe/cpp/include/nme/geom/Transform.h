#ifndef INCLUDED_nme_geom_Transform
#define INCLUDED_nme_geom_Transform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,geom,ColorTransform)
HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,geom,Transform)
namespace nme{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Transform_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Transform_obj OBJ_;
		Transform_obj();
		Void __construct(::nme::display::DisplayObject inParent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.geom.Transform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Transform_obj > __new(::nme::display::DisplayObject inParent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Transform_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Transform","\x4c","\x0d","\x66","\xe7"); }

		::nme::geom::ColorTransform concatenatedColorTransform;
		::nme::geom::Matrix concatenatedMatrix;
		::nme::geom::Rectangle pixelBounds;
		::nme::display::DisplayObject nmeObj;
		virtual ::nme::geom::ColorTransform get_colorTransform( );
		Dynamic get_colorTransform_dyn();

		virtual ::nme::geom::ColorTransform set_colorTransform( ::nme::geom::ColorTransform inTrans);
		Dynamic set_colorTransform_dyn();

		virtual ::nme::geom::ColorTransform get_concatenatedColorTransform( );
		Dynamic get_concatenatedColorTransform_dyn();

		virtual ::nme::geom::Matrix get_concatenatedMatrix( );
		Dynamic get_concatenatedMatrix_dyn();

		virtual ::nme::geom::Matrix get_matrix( );
		Dynamic get_matrix_dyn();

		virtual ::nme::geom::Matrix set_matrix( ::nme::geom::Matrix inMatrix);
		Dynamic set_matrix_dyn();

		virtual ::nme::geom::Rectangle get_pixelBounds( );
		Dynamic get_pixelBounds_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Transform */ 
