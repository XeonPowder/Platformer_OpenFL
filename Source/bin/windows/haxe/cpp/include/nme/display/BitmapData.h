#ifndef INCLUDED_nme_display_BitmapData
#define INCLUDED_nme_display_BitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,display,BitmapData)
HX_DECLARE_CLASS2(nme,display,BlendMode)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,filters,BitmapFilter)
HX_DECLARE_CLASS2(nme,geom,ColorTransform)
HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BitmapData_obj : public ::nme::bare::Surface_obj{
	public:
		typedef ::nme::bare::Surface_obj super;
		typedef BitmapData_obj OBJ_;
		BitmapData_obj();
		Void __construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.BitmapData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapData_obj > __new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapData_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::nme::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"); }

		static void __boot();
		static int CLEAR;
		static int BLACK;
		static int WHITE;
		static int RED;
		static int GREEN;
		static int BLUE;
		static ::String PNG;
		static ::String JPG;
		static int TRANSPARENT;
		static int HARDWARE;
		static int FORMAT_8888;
		static int FORMAT_4444;
		static int FORMAT_565;
		static int createColor( int inRGB,hx::Null< int >  inAlpha);
		static Dynamic createColor_dyn();

		static int extractAlpha( int v);
		static Dynamic extractAlpha_dyn();

		static int extractColor( int v);
		static Dynamic extractColor_dyn();

		static bool sameValue( int a,int b);
		static Dynamic sameValue_dyn();

		static int flip_pixel4( int pix4);
		static Dynamic flip_pixel4_dyn();

		static int ucompare( int n1,int n2);
		static Dynamic ucompare_dyn();

		static ::nme::utils::ByteArray getRGBAPixels( ::nme::display::BitmapData bitmapData);
		static Dynamic getRGBAPixels_dyn();

		static ::nme::display::BitmapData load( ::String inFilename,hx::Null< int >  format);
		static Dynamic load_dyn();

		static ::nme::display::BitmapData loadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha);
		static Dynamic loadFromBytes_dyn();

		static ::nme::display::BitmapData loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha);
		static Dynamic loadFromHaxeBytes_dyn();

		static Dynamic nme_bitmap_data_apply_filter;
		static Dynamic &nme_bitmap_data_apply_filter_dyn() { return nme_bitmap_data_apply_filter;}
		static Dynamic nme_bitmap_data_generate_filter_rect;
		static Dynamic &nme_bitmap_data_generate_filter_rect_dyn() { return nme_bitmap_data_generate_filter_rect;}
		virtual Void applyFilter( ::nme::display::BitmapData sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::nme::filters::BitmapFilter filter);
		Dynamic applyFilter_dyn();

		virtual ::nme::bare::Surface clone( );

		virtual Void draw( ::nme::display::IBitmapDrawable source,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::nme::display::BlendMode blendMode,::nme::geom::Rectangle clipRect,hx::Null< bool >  smoothing);
		Dynamic draw_dyn();

		virtual int threshold( ::nme::display::BitmapData sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask,hx::Null< bool >  copySource);
		Dynamic threshold_dyn();

		virtual int _self_threshold( ::String operation,int threshold,hx::Null< int >  color,hx::Null< int >  mask);
		Dynamic _self_threshold_dyn();

		virtual ::nme::geom::Rectangle generateFilterRect( ::nme::geom::Rectangle sourceRect,::nme::filters::BitmapFilter filter);
		Dynamic generateFilterRect_dyn();

		virtual Void lock( );
		Dynamic lock_dyn();

		virtual Void unlock( ::nme::geom::Rectangle changeRect);
		Dynamic unlock_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_BitmapData */ 
