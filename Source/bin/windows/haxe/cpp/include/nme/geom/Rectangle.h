#ifndef INCLUDED_nme_geom_Rectangle
#define INCLUDED_nme_geom_Rectangle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
namespace nme{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES  Rectangle_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Rectangle_obj OBJ_;
		Rectangle_obj();
		Void __construct(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.geom.Rectangle")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Rectangle_obj > __new(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Rectangle_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Rectangle","\x0f","\xb4","\x4f","\xbb"); }

		Float height;
		Float width;
		Float x;
		Float y;
		virtual Void setTo( Float inX,Float inY,Float inWidth,Float inHeight);
		Dynamic setTo_dyn();

		virtual ::nme::geom::Rectangle clone( );
		Dynamic clone_dyn();

		virtual bool contains( Float inX,Float inY);
		Dynamic contains_dyn();

		virtual bool containsPoint( ::nme::geom::Point point);
		Dynamic containsPoint_dyn();

		virtual bool containsRect( ::nme::geom::Rectangle rect);
		Dynamic containsRect_dyn();

		virtual bool equals( ::nme::geom::Rectangle toCompare);
		Dynamic equals_dyn();

		virtual Void extendBounds( ::nme::geom::Rectangle r);
		Dynamic extendBounds_dyn();

		virtual Void inflate( Float dx,Float dy);
		Dynamic inflate_dyn();

		virtual Void inflatePoint( ::nme::geom::Point point);
		Dynamic inflatePoint_dyn();

		virtual ::nme::geom::Rectangle intersection( ::nme::geom::Rectangle toIntersect);
		Dynamic intersection_dyn();

		virtual bool intersects( ::nme::geom::Rectangle toIntersect);
		Dynamic intersects_dyn();

		virtual bool isEmpty( );
		Dynamic isEmpty_dyn();

		virtual Void offset( Float dx,Float dy);
		Dynamic offset_dyn();

		virtual Void offsetPoint( ::nme::geom::Point point);
		Dynamic offsetPoint_dyn();

		virtual Void setEmpty( );
		Dynamic setEmpty_dyn();

		virtual ::nme::geom::Rectangle transform( ::nme::geom::Matrix m);
		Dynamic transform_dyn();

		virtual ::nme::geom::Rectangle _union( ::nme::geom::Rectangle toUnion);
		Dynamic _union_dyn();

		virtual Float get_bottom( );
		Dynamic get_bottom_dyn();

		virtual Float set_bottom( Float b);
		Dynamic set_bottom_dyn();

		virtual ::nme::geom::Point get_bottomRight( );
		Dynamic get_bottomRight_dyn();

		virtual ::nme::geom::Point set_bottomRight( ::nme::geom::Point p);
		Dynamic set_bottomRight_dyn();

		virtual Float get_left( );
		Dynamic get_left_dyn();

		virtual Float set_left( Float l);
		Dynamic set_left_dyn();

		virtual Float get_right( );
		Dynamic get_right_dyn();

		virtual Float set_right( Float r);
		Dynamic set_right_dyn();

		virtual ::nme::geom::Point get_size( );
		Dynamic get_size_dyn();

		virtual ::nme::geom::Point set_size( ::nme::geom::Point p);
		Dynamic set_size_dyn();

		virtual Float get_top( );
		Dynamic get_top_dyn();

		virtual Float set_top( Float t);
		Dynamic set_top_dyn();

		virtual ::nme::geom::Point get_topLeft( );
		Dynamic get_topLeft_dyn();

		virtual ::nme::geom::Point set_topLeft( ::nme::geom::Point p);
		Dynamic set_topLeft_dyn();

};

} // end namespace nme
} // end namespace geom

#endif /* INCLUDED_nme_geom_Rectangle */ 
