#ifndef INCLUDED_nme_display_MovieClip
#define INCLUDED_nme_display_MovieClip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,MovieClip)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  MovieClip_obj : public ::nme::display::Sprite_obj{
	public:
		typedef ::nme::display::Sprite_obj super;
		typedef MovieClip_obj OBJ_;
		MovieClip_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.MovieClip")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< MovieClip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MovieClip_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MovieClip","\x80","\xe2","\xed","\xb9"); }

		int currentFrame;
		bool enabled;
		int framesLoaded;
		int totalFrames;
		int mCurrentFrame;
		int mTotalFrames;
		virtual Void gotoAndPlay( Dynamic frame,::String scene);
		Dynamic gotoAndPlay_dyn();

		virtual Void gotoAndStop( Dynamic frame,::String scene);
		Dynamic gotoAndStop_dyn();

		virtual Void nextFrame( );
		Dynamic nextFrame_dyn();

		virtual ::String nmeGetType( );

		virtual Void play( );
		Dynamic play_dyn();

		virtual Void prevFrame( );
		Dynamic prevFrame_dyn();

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual int get_currentFrame( );
		Dynamic get_currentFrame_dyn();

		virtual int get_framesLoaded( );
		Dynamic get_framesLoaded_dyn();

		virtual int get_totalFrames( );
		Dynamic get_totalFrames_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_MovieClip */ 
