#ifndef INCLUDED_nme_display_Tilesheet
#define INCLUDED_nme_display_Tilesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,display,BitmapData)
HX_DECLARE_CLASS2(nme,display,Graphics)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,Tilesheet)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Tilesheet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tilesheet_obj OBJ_;
		Tilesheet_obj();
		Void __construct(::nme::display::BitmapData inImage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.Tilesheet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Tilesheet_obj > __new(::nme::display::BitmapData inImage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tilesheet_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Tilesheet","\x91","\xb0","\x20","\x16"); }

		static void __boot();
		static int TILE_SCALE;
		static int TILE_ROTATION;
		static int TILE_RGB;
		static int TILE_ALPHA;
		static int TILE_TRANS_2x2;
		static int TILE_RECT;
		static int TILE_ORIGIN;
		static int TILE_NO_ID;
		static int TILE_BLEND_NORMAL;
		static int TILE_BLEND_ADD;
		static int TILE_BLEND_SCREEN;
		static int TILE_BLEND_MULTIPLY;
		static int TILE_BLEND_SUBTRACT;
		static Dynamic nme_tilesheet_create;
		static Dynamic &nme_tilesheet_create_dyn() { return nme_tilesheet_create;}
		static Dynamic nme_tilesheet_add_rect;
		static Dynamic &nme_tilesheet_add_rect_dyn() { return nme_tilesheet_add_rect;}
		::nme::display::BitmapData nmeBitmap;
		Dynamic nmeHandle;
		virtual int addTileRect( ::nme::geom::Rectangle rectangle,::nme::geom::Point centerPoint);
		Dynamic addTileRect_dyn();

		virtual Void drawTiles( ::nme::display::Graphics graphics,Dynamic tileData,hx::Null< bool >  smooth,hx::Null< int >  flags,hx::Null< int >  count);
		Dynamic drawTiles_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_Tilesheet */ 
