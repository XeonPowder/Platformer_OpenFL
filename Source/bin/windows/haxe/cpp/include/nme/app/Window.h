#ifndef INCLUDED_nme_app_Window
#define INCLUDED_nme_app_Window

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
HX_DECLARE_CLASS2(nme,app,Window)
HX_DECLARE_CLASS2(nme,display,StageAlign)
HX_DECLARE_CLASS2(nme,display,StageDisplayState)
HX_DECLARE_CLASS2(nme,display,StageQuality)
HX_DECLARE_CLASS2(nme,display,StageScaleMode)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  Window_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Window_obj OBJ_;
		Window_obj();
		Void __construct(Dynamic inFrameHandle,int inWidth,int inHeight);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.app.Window")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Window_obj > __new(Dynamic inFrameHandle,int inWidth,int inHeight);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Window_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Window","\x10","\x08","\x21","\x87"); }

		static void __boot();
		static Dynamic nme_stage_resize_window;
		static Dynamic &nme_stage_resize_window_dyn() { return nme_stage_resize_window;}
		static Dynamic nme_stage_is_opengl;
		static Dynamic &nme_stage_is_opengl_dyn() { return nme_stage_is_opengl;}
		static Dynamic nme_stage_get_stage_width;
		static Dynamic &nme_stage_get_stage_width_dyn() { return nme_stage_get_stage_width;}
		static Dynamic nme_stage_get_stage_height;
		static Dynamic &nme_stage_get_stage_height_dyn() { return nme_stage_get_stage_height;}
		static Dynamic nme_stage_get_dpi_scale;
		static Dynamic &nme_stage_get_dpi_scale_dyn() { return nme_stage_get_dpi_scale;}
		static Dynamic nme_stage_get_scale_mode;
		static Dynamic &nme_stage_get_scale_mode_dyn() { return nme_stage_get_scale_mode;}
		static Dynamic nme_stage_set_scale_mode;
		static Dynamic &nme_stage_set_scale_mode_dyn() { return nme_stage_set_scale_mode;}
		static Dynamic nme_stage_get_align;
		static Dynamic &nme_stage_get_align_dyn() { return nme_stage_get_align;}
		static Dynamic nme_stage_set_align;
		static Dynamic &nme_stage_set_align_dyn() { return nme_stage_set_align;}
		static Dynamic nme_stage_get_quality;
		static Dynamic &nme_stage_get_quality_dyn() { return nme_stage_get_quality;}
		static Dynamic nme_stage_set_quality;
		static Dynamic &nme_stage_set_quality_dyn() { return nme_stage_set_quality;}
		static Dynamic nme_stage_get_display_state;
		static Dynamic &nme_stage_get_display_state_dyn() { return nme_stage_get_display_state;}
		static Dynamic nme_stage_set_display_state;
		static Dynamic &nme_stage_set_display_state_dyn() { return nme_stage_set_display_state;}
		static Dynamic nme_stage_show_cursor;
		static Dynamic nme_stage_set_fixed_orientation;
		static Dynamic nme_stage_get_orientation;
		static Dynamic nme_stage_get_normal_orientation;
		static Dynamic nme_stage_set_window_position;
		static Dynamic &nme_stage_set_window_position_dyn() { return nme_stage_set_window_position;}
		static Dynamic nme_stage_get_window_x;
		static Dynamic &nme_stage_get_window_x_dyn() { return nme_stage_get_window_x;}
		static Dynamic nme_stage_get_window_y;
		static Dynamic &nme_stage_get_window_y_dyn() { return nme_stage_get_window_y;}
		static Dynamic nme_stage_set_next_wake;
		static Dynamic nme_stage_begin_render;
		static Dynamic &nme_stage_begin_render_dyn() { return nme_stage_begin_render;}
		static Dynamic nme_stage_end_render;
		static Dynamic &nme_stage_end_render_dyn() { return nme_stage_end_render;}
		static Dynamic nme_get_frame_stage;
		static Dynamic &nme_get_frame_stage_dyn() { return nme_get_frame_stage;}
		static Dynamic nme_display_object_set_bg;
		static Dynamic &nme_display_object_set_bg_dyn() { return nme_display_object_set_bg;}
		static Dynamic nme_set_stage_handler;
		static Dynamic &nme_set_stage_handler_dyn() { return nme_set_stage_handler;}
		bool active;
		Float dpiScale;
		bool isOpenGL;
		int x;
		int y;
		int height;
		int width;
		bool autoClear;
		Dynamic renderRequest;
		Dynamic &renderRequest_dyn() { return renderRequest;}
		Dynamic nextWakeHandler;
		Dynamic &nextWakeHandler_dyn() { return nextWakeHandler;}
		Dynamic beginRenderImmediate;
		Dynamic &beginRenderImmediate_dyn() { return beginRenderImmediate;}
		Dynamic endRenderImmediate;
		Dynamic &endRenderImmediate_dyn() { return endRenderImmediate;}
		::nme::app::IAppEventHandler appEventHandler;
		Dynamic onKey;
		Dynamic &onKey_dyn() { return onKey;}
		Dynamic nmeHandle;
		bool enterFramePending;
		virtual bool shouldRenderNow( );
		Dynamic shouldRenderNow_dyn();

		virtual Void setBackground( Dynamic inBackground);
		Dynamic setBackground_dyn();

		virtual Void onNewFrame( );
		Dynamic onNewFrame_dyn();

		virtual Void onInvalidFrame( );
		Dynamic onInvalidFrame_dyn();

		virtual Void nmeProcessWindowEvent( Dynamic inEvent);
		Dynamic nmeProcessWindowEvent_dyn();

		virtual Void beginRender( );
		Dynamic beginRender_dyn();

		virtual Void endRender( );
		Dynamic endRender_dyn();

		virtual ::nme::display::StageAlign get_align( );
		Dynamic get_align_dyn();

		virtual ::nme::display::StageAlign set_align( ::nme::display::StageAlign inMode);
		Dynamic set_align_dyn();

		virtual ::nme::display::StageDisplayState get_displayState( );
		Dynamic get_displayState_dyn();

		virtual ::nme::display::StageDisplayState set_displayState( ::nme::display::StageDisplayState inState);
		Dynamic set_displayState_dyn();

		virtual Float get_dpiScale( );
		Dynamic get_dpiScale_dyn();

		virtual bool get_isOpenGL( );
		Dynamic get_isOpenGL_dyn();

		virtual ::nme::display::StageQuality get_quality( );
		Dynamic get_quality_dyn();

		virtual ::nme::display::StageQuality set_quality( ::nme::display::StageQuality inQuality);
		Dynamic set_quality_dyn();

		virtual ::nme::display::StageScaleMode get_scaleMode( );
		Dynamic get_scaleMode_dyn();

		virtual ::nme::display::StageScaleMode set_scaleMode( ::nme::display::StageScaleMode inMode);
		Dynamic set_scaleMode_dyn();

		virtual int get_x( );
		Dynamic get_x_dyn();

		virtual int get_y( );
		Dynamic get_y_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual Void setPosition( int x,int y);
		Dynamic setPosition_dyn();

};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_Window */ 
