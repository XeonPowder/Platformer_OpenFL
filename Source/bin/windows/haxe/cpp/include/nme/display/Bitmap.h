#ifndef INCLUDED_nme_display_Bitmap
#define INCLUDED_nme_display_Bitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(nme,bare,Surface)
HX_DECLARE_CLASS2(nme,display,Bitmap)
HX_DECLARE_CLASS2(nme,display,BitmapData)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,Graphics)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,PixelSnapping)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Bitmap_obj : public ::nme::display::DisplayObject_obj{
	public:
		typedef ::nme::display::DisplayObject_obj super;
		typedef Bitmap_obj OBJ_;
		Bitmap_obj();
		Void __construct(::nme::display::BitmapData bitmapData,::nme::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.Bitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Bitmap_obj > __new(::nme::display::BitmapData bitmapData,::nme::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bitmap_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"); }

		::nme::display::BitmapData bitmapData;
		bool smoothing;
		::nme::display::Graphics mGraphics;
		virtual Void nmeRebuild( );
		Dynamic nmeRebuild_dyn();

		virtual ::nme::display::BitmapData set_bitmapData( ::nme::display::BitmapData inBitmapData);
		Dynamic set_bitmapData_dyn();

		virtual bool set_smoothing( bool inSmooth);
		Dynamic set_smoothing_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_Bitmap */ 
