#ifndef INCLUDED_nme_geom_Matrix
#define INCLUDED_nme_geom_Matrix

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
namespace nme{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Matrix_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Matrix_obj OBJ_;
		Matrix_obj();
		Void __construct(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.geom.Matrix")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Matrix_obj > __new(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Matrix_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		double __INumField(int inFieldID);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Matrix","\x61","\xaa","\x5c","\xf0"); }

		Float a;
		Float b;
		Float c;
		Float d;
		Float tx;
		Float ty;
		virtual ::nme::geom::Matrix clone( );
		Dynamic clone_dyn();

		virtual Void concat( ::nme::geom::Matrix m);
		Dynamic concat_dyn();

		virtual Void createBox( Float scaleX,Float scaleY,Dynamic rotation,Dynamic tx,Dynamic ty);
		Dynamic createBox_dyn();

		virtual Void createGradientBox( Float in_width,Float in_height,Dynamic rotation,Dynamic in_tx,Dynamic in_ty);
		Dynamic createGradientBox_dyn();

		virtual ::nme::geom::Point deltaTransformPoint( ::nme::geom::Point point);
		Dynamic deltaTransformPoint_dyn();

		virtual Void identity( );
		Dynamic identity_dyn();

		virtual ::nme::geom::Matrix invert( );
		Dynamic invert_dyn();

		virtual ::nme::geom::Matrix mult( ::nme::geom::Matrix m);
		Dynamic mult_dyn();

		virtual Void rotate( Float inTheta);
		Dynamic rotate_dyn();

		virtual Void scale( Float inSX,Float inSY);
		Dynamic scale_dyn();

		virtual Void setRotation( Float inTheta,Dynamic inScale);
		Dynamic setRotation_dyn();

		virtual Void setTo( Float a,Float b,Float c,Float d,Float tx,Float ty);
		Dynamic setTo_dyn();

		virtual ::nme::geom::Point transformPoint( ::nme::geom::Point inPos);
		Dynamic transformPoint_dyn();

		virtual Void translate( Float inDX,Float inDY);
		Dynamic translate_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Matrix */ 
