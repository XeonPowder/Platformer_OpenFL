#ifndef INCLUDED_nme_bare_Surface
#define INCLUDED_nme_bare_Surface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,geom,ColorTransform)
HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace bare{


class HXCPP_CLASS_ATTRIBUTES  Surface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Surface_obj OBJ_;
		Surface_obj();
		Void __construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.bare.Surface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Surface_obj > __new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Surface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Surface","\x0d","\x8e","\x9a","\x2a"); }

		static void __boot();
		static ::String PNG;
		static ::String JPG;
		static int TRANSPARENT;
		static int HARDWARE;
		static int FORMAT_8888;
		static int FORMAT_4444;
		static int FORMAT_565;
		static ::nme::bare::Surface load( ::String inFilename,hx::Null< int >  format);
		static Dynamic load_dyn();

		static ::nme::bare::Surface loadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha);
		static Dynamic loadFromBytes_dyn();

		static ::nme::bare::Surface loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha);
		static Dynamic loadFromHaxeBytes_dyn();

		static Dynamic nme_bitmap_data_create;
		static Dynamic &nme_bitmap_data_create_dyn() { return nme_bitmap_data_create;}
		static Dynamic nme_bitmap_data_load;
		static Dynamic &nme_bitmap_data_load_dyn() { return nme_bitmap_data_load;}
		static Dynamic nme_bitmap_data_from_bytes;
		static Dynamic &nme_bitmap_data_from_bytes_dyn() { return nme_bitmap_data_from_bytes;}
		static Dynamic nme_bitmap_data_clear;
		static Dynamic &nme_bitmap_data_clear_dyn() { return nme_bitmap_data_clear;}
		static Dynamic nme_bitmap_data_clone;
		static Dynamic &nme_bitmap_data_clone_dyn() { return nme_bitmap_data_clone;}
		static Dynamic nme_bitmap_data_apply_filter;
		static Dynamic nme_bitmap_data_color_transform;
		static Dynamic &nme_bitmap_data_color_transform_dyn() { return nme_bitmap_data_color_transform;}
		static Dynamic nme_bitmap_data_copy;
		static Dynamic &nme_bitmap_data_copy_dyn() { return nme_bitmap_data_copy;}
		static Dynamic nme_bitmap_data_copy_channel;
		static Dynamic &nme_bitmap_data_copy_channel_dyn() { return nme_bitmap_data_copy_channel;}
		static Dynamic nme_bitmap_data_fill;
		static Dynamic &nme_bitmap_data_fill_dyn() { return nme_bitmap_data_fill;}
		static Dynamic nme_bitmap_data_get_pixels;
		static Dynamic &nme_bitmap_data_get_pixels_dyn() { return nme_bitmap_data_get_pixels;}
		static Dynamic nme_bitmap_data_get_pixel;
		static Dynamic &nme_bitmap_data_get_pixel_dyn() { return nme_bitmap_data_get_pixel;}
		static Dynamic nme_bitmap_data_get_pixel32;
		static Dynamic &nme_bitmap_data_get_pixel32_dyn() { return nme_bitmap_data_get_pixel32;}
		static Dynamic nme_bitmap_data_get_array;
		static Dynamic &nme_bitmap_data_get_array_dyn() { return nme_bitmap_data_get_array;}
		static Dynamic nme_bitmap_data_get_color_bounds_rect;
		static Dynamic &nme_bitmap_data_get_color_bounds_rect_dyn() { return nme_bitmap_data_get_color_bounds_rect;}
		static Dynamic nme_bitmap_data_scroll;
		static Dynamic &nme_bitmap_data_scroll_dyn() { return nme_bitmap_data_scroll;}
		static Dynamic nme_bitmap_data_set_pixel;
		static Dynamic &nme_bitmap_data_set_pixel_dyn() { return nme_bitmap_data_set_pixel;}
		static Dynamic nme_bitmap_data_set_pixel32;
		static Dynamic &nme_bitmap_data_set_pixel32_dyn() { return nme_bitmap_data_set_pixel32;}
		static Dynamic nme_bitmap_data_set_pixel_rgba;
		static Dynamic nme_bitmap_data_set_bytes;
		static Dynamic &nme_bitmap_data_set_bytes_dyn() { return nme_bitmap_data_set_bytes;}
		static Dynamic nme_bitmap_data_set_format;
		static Dynamic &nme_bitmap_data_set_format_dyn() { return nme_bitmap_data_set_format;}
		static Dynamic nme_bitmap_data_set_array;
		static Dynamic &nme_bitmap_data_set_array_dyn() { return nme_bitmap_data_set_array;}
		static Dynamic nme_bitmap_data_create_hardware_surface;
		static Dynamic &nme_bitmap_data_create_hardware_surface_dyn() { return nme_bitmap_data_create_hardware_surface;}
		static Dynamic nme_bitmap_data_destroy_hardware_surface;
		static Dynamic &nme_bitmap_data_destroy_hardware_surface_dyn() { return nme_bitmap_data_destroy_hardware_surface;}
		static Dynamic nme_bitmap_data_generate_filter_rect;
		static Dynamic nme_render_surface_to_surface;
		static Dynamic &nme_render_surface_to_surface_dyn() { return nme_render_surface_to_surface;}
		static Dynamic nme_bitmap_data_height;
		static Dynamic &nme_bitmap_data_height_dyn() { return nme_bitmap_data_height;}
		static Dynamic nme_bitmap_data_width;
		static Dynamic &nme_bitmap_data_width_dyn() { return nme_bitmap_data_width;}
		static Dynamic nme_bitmap_data_get_transparent;
		static Dynamic nme_bitmap_data_set_flags;
		static Dynamic &nme_bitmap_data_set_flags_dyn() { return nme_bitmap_data_set_flags;}
		static Dynamic nme_bitmap_data_encode;
		static Dynamic &nme_bitmap_data_encode_dyn() { return nme_bitmap_data_encode;}
		static Dynamic nme_bitmap_data_dump_bits;
		static Dynamic &nme_bitmap_data_dump_bits_dyn() { return nme_bitmap_data_dump_bits;}
		static Dynamic nme_bitmap_data_dispose;
		static Dynamic &nme_bitmap_data_dispose_dyn() { return nme_bitmap_data_dispose;}
		static Dynamic nme_bitmap_data_noise;
		static Dynamic &nme_bitmap_data_noise_dyn() { return nme_bitmap_data_noise;}
		static Dynamic nme_bitmap_data_flood_fill;
		static Dynamic &nme_bitmap_data_flood_fill_dyn() { return nme_bitmap_data_flood_fill;}
		static Dynamic nme_bitmap_data_get_prem_alpha;
		static Dynamic &nme_bitmap_data_get_prem_alpha_dyn() { return nme_bitmap_data_get_prem_alpha;}
		static Dynamic nme_bitmap_data_set_prem_alpha;
		static Dynamic &nme_bitmap_data_set_prem_alpha_dyn() { return nme_bitmap_data_set_prem_alpha;}
		int height;
		::nme::geom::Rectangle rect;
		bool transparent;
		int width;
		Dynamic nmeHandle;
		bool nmeTransparent;
		virtual Void clear( int color);
		Dynamic clear_dyn();

		virtual ::nme::bare::Surface clone( );
		Dynamic clone_dyn();

		virtual Void colorTransform( ::nme::geom::Rectangle rect,::nme::geom::ColorTransform colorTransform);
		Dynamic colorTransform_dyn();

		virtual Void copyChannel( ::nme::bare::Surface sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,int inSourceChannel,int inDestChannel);
		Dynamic copyChannel_dyn();

		virtual Void copyPixels( ::nme::bare::Surface sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::nme::bare::Surface alphaBitmapData,::nme::geom::Point alphaPoint,hx::Null< bool >  mergeAlpha);
		Dynamic copyPixels_dyn();

		virtual Void createHardwareSurface( );
		Dynamic createHardwareSurface_dyn();

		virtual Void destroyHardwareSurface( );
		Dynamic destroyHardwareSurface_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void dumpBits( );
		Dynamic dumpBits_dyn();

		virtual ::nme::utils::ByteArray encode( ::String inFormat,hx::Null< Float >  inQuality);
		Dynamic encode_dyn();

		virtual Void fillRect( ::nme::geom::Rectangle rect,int inColour);
		Dynamic fillRect_dyn();

		virtual Void fillRectEx( ::nme::geom::Rectangle rect,int inColour,hx::Null< int >  inAlpha);
		Dynamic fillRectEx_dyn();

		virtual Void floodFill( int x,int y,int color);
		Dynamic floodFill_dyn();

		virtual ::nme::geom::Rectangle getColorBoundsRect( int mask,int color,hx::Null< bool >  findColor);
		Dynamic getColorBoundsRect_dyn();

		virtual int getPixel( int x,int y);
		Dynamic getPixel_dyn();

		virtual int getPixel32( int x,int y);
		Dynamic getPixel32_dyn();

		virtual ::nme::utils::ByteArray getPixels( ::nme::geom::Rectangle rect);
		Dynamic getPixels_dyn();

		virtual Array< int > getVector( ::nme::geom::Rectangle rect);
		Dynamic getVector_dyn();

		virtual Void nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing);
		Dynamic nmeDrawToSurface_dyn();

		virtual Void nmeLoadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha);
		Dynamic nmeLoadFromBytes_dyn();

		virtual Void scroll( int inDX,int inDY);
		Dynamic scroll_dyn();

		virtual Void setFlags( int inFlags);
		Dynamic setFlags_dyn();

		virtual Void setPixel( int inX,int inY,int inColour);
		Dynamic setPixel_dyn();

		virtual Void setPixel32( int inX,int inY,int inColour);
		Dynamic setPixel32_dyn();

		virtual Void setPixels( ::nme::geom::Rectangle rect,::nme::utils::ByteArray pixels);
		Dynamic setPixels_dyn();

		virtual Void setVector( ::nme::geom::Rectangle rect,Array< int > inPixels);
		Dynamic setVector_dyn();

		virtual Void setFormat( int format);
		Dynamic setFormat_dyn();

		virtual Void noise( int randomSeed,hx::Null< int >  low,hx::Null< int >  high,hx::Null< int >  channelOptions,hx::Null< bool >  grayScale);
		Dynamic noise_dyn();

		virtual ::nme::geom::Rectangle get_rect( );
		Dynamic get_rect_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual bool get_transparent( );
		Dynamic get_transparent_dyn();

		virtual bool get_premultipliedAlpha( );
		Dynamic get_premultipliedAlpha_dyn();

		virtual bool set_premultipliedAlpha( bool inVal);
		Dynamic set_premultipliedAlpha_dyn();

};

} // end namespace nme
} // end namespace bare

#endif /* INCLUDED_nme_bare_Surface */ 
