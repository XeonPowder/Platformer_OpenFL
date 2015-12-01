#ifndef INCLUDED_nme_geom_Point
#define INCLUDED_nme_geom_Point

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,Point)
namespace nme{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Point_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Point_obj OBJ_;
		Point_obj();
		Void __construct(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.geom.Point")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Point_obj > __new(hx::Null< Float >  __o_inX,hx::Null< Float >  __o_inY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Point_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Point","\x30","\x24","\xbd","\x59"); }

		static Float distance( ::nme::geom::Point pt1,::nme::geom::Point pt2);
		static Dynamic distance_dyn();

		static ::nme::geom::Point interpolate( ::nme::geom::Point pt1,::nme::geom::Point pt2,Float f);
		static Dynamic interpolate_dyn();

		static ::nme::geom::Point polar( Float len,Float angle);
		static Dynamic polar_dyn();

		Float x;
		Float y;
		virtual ::nme::geom::Point add( ::nme::geom::Point v);
		Dynamic add_dyn();

		virtual ::nme::geom::Point clone( );
		Dynamic clone_dyn();

		virtual ::nme::geom::Point setTo( Float inX,Float inY);
		Dynamic setTo_dyn();

		virtual Void copyFrom( ::nme::geom::Point sourcePoint);
		Dynamic copyFrom_dyn();

		virtual bool equals( ::nme::geom::Point toCompare);
		Dynamic equals_dyn();

		virtual Void normalize( Float thickness);
		Dynamic normalize_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual ::nme::geom::Point subtract( ::nme::geom::Point v);
		Dynamic subtract_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float get_length( );
		Dynamic get_length_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Point */ 
