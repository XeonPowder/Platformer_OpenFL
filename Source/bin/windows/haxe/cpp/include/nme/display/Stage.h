#ifndef INCLUDED_nme_display_Stage
#define INCLUDED_nme_display_Stage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#include <nme/Event.h>
HX_DECLARE_CLASS2(cpp,vm,Lock)
HX_DECLARE_CLASS2(cpp,vm,Thread)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS1(haxe,StackItem)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(nme,app,FrameTimer)
HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,app,Window)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,Sprite)
HX_DECLARE_CLASS2(nme,display,Stage)
HX_DECLARE_CLASS2(nme,display,StageAlign)
HX_DECLARE_CLASS2(nme,display,StageDisplayState)
HX_DECLARE_CLASS2(nme,display,StageQuality)
HX_DECLARE_CLASS2(nme,display,StageScaleMode)
HX_DECLARE_CLASS2(nme,display,TouchInfo)
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,events,MouseEvent)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,media,StageVideo)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Stage_obj : public ::nme::display::DisplayObjectContainer_obj{
	public:
		typedef ::nme::display::DisplayObjectContainer_obj super;
		typedef Stage_obj OBJ_;
		Stage_obj();
		Void __construct(::nme::app::Window inWindow);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.Stage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Stage_obj > __new(::nme::app::Window inWindow);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Stage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::nme::app::IAppEventHandler_obj *();
		operator ::nme::app::IPollClient_obj *();
		::String __ToString() const { return HX_HCSTRING("Stage","\x9e","\xda","\x38","\x17"); }

		static void __boot();
		static Float nmeEarlyWakeup;
		static int OrientationPortrait;
		static int OrientationPortraitUpsideDown;
		static int OrientationLandscapeRight;
		static int OrientationLandscapeLeft;
		static int OrientationFaceUp;
		static int OrientationFaceDown;
		static int OrientationPortraitAny;
		static int OrientationLandscapeAny;
		static int OrientationAny;
		static int OrientationUseFunction;
		static int efLeftDown;
		static int efShiftDown;
		static int efCtrlDown;
		static int efAltDown;
		static int efCommandDown;
		static int efLocationRight;
		static int efNoNativeClick;
		static Array< ::String > nmeMouseChanges;
		static Array< ::String > nmeTouchChanges;
		static Array< ::String > sClickEvents;
		static Array< ::String > sDownEvents;
		static Array< ::String > sUpEvents;
		static bool nmeQuitting;
		static Dynamic getOrientation;
		static inline Dynamic &getOrientation_dyn() {return getOrientation; }

		static Dynamic getNormalOrientation;
		static inline Dynamic &getNormalOrientation_dyn() {return getNormalOrientation; }

		static Void setFixedOrientation( int inOrientation);
		static Dynamic setFixedOrientation_dyn();

		static Dynamic shouldRotateInterface;
		static inline Dynamic &shouldRotateInterface_dyn() {return shouldRotateInterface; }

		static Dynamic nme_render_stage;
		static Dynamic &nme_render_stage_dyn() { return nme_render_stage;}
		static Dynamic nme_set_render_gc_free;
		static Dynamic &nme_set_render_gc_free_dyn() { return nme_set_render_gc_free;}
		static Dynamic nme_stage_get_focus_id;
		static Dynamic &nme_stage_get_focus_id_dyn() { return nme_stage_get_focus_id;}
		static Dynamic nme_stage_set_focus;
		static Dynamic &nme_stage_set_focus_dyn() { return nme_stage_set_focus;}
		static Dynamic nme_stage_get_focus_rect;
		static Dynamic &nme_stage_get_focus_rect_dyn() { return nme_stage_get_focus_rect;}
		static Dynamic nme_stage_set_focus_rect;
		static Dynamic &nme_stage_set_focus_rect_dyn() { return nme_stage_set_focus_rect;}
		static Dynamic nme_stage_resize_window;
		static Dynamic nme_stage_show_cursor;
		static Dynamic &nme_stage_show_cursor_dyn() { return nme_stage_show_cursor;}
		static Dynamic nme_stage_get_orientation;
		static Dynamic &nme_stage_get_orientation_dyn() { return nme_stage_get_orientation;}
		static Dynamic nme_stage_get_normal_orientation;
		static Dynamic &nme_stage_get_normal_orientation_dyn() { return nme_stage_get_normal_orientation;}
		static Dynamic nme_stage_check_cache;
		static Dynamic &nme_stage_check_cache_dyn() { return nme_stage_check_cache;}
		::nme::app::Window window;
		bool pauseWhenDeactivated;
		bool invalid;
		Array< ::Dynamic > stageVideos;
		::haxe::ds::IntMap nmeJoyAxisData;
		::nme::geom::Rectangle nmeDragBounds;
		::nme::display::Sprite nmeDragObject;
		Float nmeDragOffsetX;
		Float nmeDragOffsetY;
		Array< ::Dynamic > nmeFocusOverObjects;
		Float nmeFramePeriod;
		Float nmeLastClickTime;
		Array< ::Dynamic > nmeLastDown;
		Float nmeLastRender;
		Array< ::Dynamic > nmeMouseOverObjects;
		::haxe::ds::IntMap nmeTouchInfo;
		::nme::app::FrameTimer nmeFrameTimer;
		::nme::events::Event nmeEnterFrameEvent;
		::nme::events::Event nmeRenderEvent;
		int nmePreemptiveGcFreq;
		int nmePreemptiveGcSince;
		::cpp::vm::Lock nmeCollectionLock;
		::cpp::vm::Thread nmeCollectionAgency;
		Array< int > nmeFrameAlloc;
		int nmeLastCurrentMemory;
		bool nmeLastPreempt;
		int nmeFrameMemIndex;
		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual bool isDisplayListDirty( );
		Dynamic isDisplayListDirty_dyn();

		virtual Dynamic get_onQuit( );
		Dynamic get_onQuit_dyn();

		virtual Dynamic set_onQuit( Dynamic val);
		Dynamic set_onQuit_dyn();

		virtual Void addEventListener( ::String type,Dynamic listener,hx::Null< bool >  useCapture,hx::Null< int >  priority,hx::Null< bool >  useWeakReference);

		virtual Void nmeCheckFocusInOuts( ::cpp::Pointer< nme::Event > inEvent,Array< ::Dynamic > inStack);
		Dynamic nmeCheckFocusInOuts_dyn();

		virtual bool nmeCheckInOuts( ::nme::events::MouseEvent inEvent,Array< ::Dynamic > inStack,::nme::display::TouchInfo touchInfo);
		Dynamic nmeCheckInOuts_dyn();

		virtual Void onText( ::cpp::Pointer< nme::Event > inEvent,::String type);
		Dynamic onText_dyn();

		virtual Void onKey( ::cpp::Pointer< nme::Event > inEvent,::String type);
		Dynamic onKey_dyn();

		virtual Void onMouse( ::cpp::Pointer< nme::Event > inEvent,::String inType,bool inFromMouse);
		Dynamic onMouse_dyn();

		virtual Void onUnhandledException( Dynamic exception,Array< ::Dynamic > stack);
		Dynamic onUnhandledException_dyn();

		virtual Void onTouch( ::cpp::Pointer< nme::Event > inEvent,::String inType);
		Dynamic onTouch_dyn();

		virtual Void onResize( int width,int height);
		Dynamic onResize_dyn();

		virtual Void onRender( bool inFrameDue);
		Dynamic onRender_dyn();

		virtual Void onDisplayObjectFocus( ::cpp::Pointer< nme::Event > inEvent);
		Dynamic onDisplayObjectFocus_dyn();

		virtual Void onInputFocus( bool acquired);
		Dynamic onInputFocus_dyn();

		virtual bool onRotateRequest( int inDirection);
		Dynamic onRotateRequest_dyn();

		virtual Void onChange( ::cpp::Pointer< nme::Event > inEvent);
		Dynamic onChange_dyn();

		virtual Void onActive( bool inActive);
		Dynamic onActive_dyn();

		virtual Void onJoystick( ::cpp::Pointer< nme::Event > inEvent,::String inType);
		Dynamic onJoystick_dyn();

		virtual Void onSysMessage( ::cpp::Pointer< nme::Event > inEvent);
		Dynamic onSysMessage_dyn();

		virtual Void onContextLost( );
		Dynamic onContextLost_dyn();

		virtual Void nmeDrag( ::nme::geom::Point inMouse);
		Dynamic nmeDrag_dyn();

		virtual Float nmeNextFrameDue( Float inOtherTimers,Float inTimestamp);
		Dynamic nmeNextFrameDue_dyn();

		virtual Dynamic set_opaqueBackground( Dynamic inBG);

		virtual int set_color( int inColor);
		Dynamic set_color_dyn();

		virtual int get_color( );
		Dynamic get_color_dyn();

		virtual Void nmeOnTouch( ::cpp::Pointer< nme::Event > inEvent,::String inType,::nme::display::TouchInfo touchInfo);
		Dynamic nmeOnTouch_dyn();

		virtual Void onPoll( Float inTimestamp);
		Dynamic onPoll_dyn();

		virtual Float getNextWake( Float inDefaultWake,Float inTimestamp);
		Dynamic getNextWake_dyn();

		virtual Void nmeStartDrag( ::nme::display::Sprite sprite,bool lockCenter,::nme::geom::Rectangle bounds);
		Dynamic nmeStartDrag_dyn();

		virtual Void nmeStopDrag( ::nme::display::Sprite sprite);
		Dynamic nmeStopDrag_dyn();

		virtual Void setPreemtiveGcFrequency( int inFrames);
		Dynamic setPreemtiveGcFrequency_dyn();

		virtual Void setSmartPreemtiveGc( );
		Dynamic setSmartPreemtiveGc_dyn();

		virtual Void showCursor( bool inShow);
		Dynamic showCursor_dyn();

		virtual ::nme::display::InteractiveObject get_focus( );
		Dynamic get_focus_dyn();

		virtual ::nme::display::InteractiveObject set_focus( ::nme::display::InteractiveObject inObject);
		Dynamic set_focus_dyn();

		virtual Float set_frameRate( Float inRate);
		Dynamic set_frameRate_dyn();

		virtual Float get_frameRate( );
		Dynamic get_frameRate_dyn();

		virtual ::nme::display::Stage get_stage( );

		virtual Void resize( int width,int height);
		Dynamic resize_dyn();

		virtual bool get_stageFocusRect( );
		Dynamic get_stageFocusRect_dyn();

		virtual bool set_stageFocusRect( bool inVal);
		Dynamic set_stageFocusRect_dyn();

		virtual bool get_active( );
		Dynamic get_active_dyn();

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

		virtual ::nme::display::StageQuality get_quality( );
		Dynamic get_quality_dyn();

		virtual ::nme::display::StageQuality set_quality( ::nme::display::StageQuality inQuality);
		Dynamic set_quality_dyn();

		virtual ::nme::display::StageScaleMode get_scaleMode( );
		Dynamic get_scaleMode_dyn();

		virtual ::nme::display::StageScaleMode set_scaleMode( ::nme::display::StageScaleMode inMode);
		Dynamic set_scaleMode_dyn();

		virtual int get_stageHeight( );
		Dynamic get_stageHeight_dyn();

		virtual int get_stageWidth( );
		Dynamic get_stageWidth_dyn();

		virtual bool get_isOpenGL( );
		Dynamic get_isOpenGL_dyn();

		virtual Dynamic get_renderRequest( );
		Dynamic get_renderRequest_dyn();

		virtual Dynamic set_renderRequest( Dynamic f);
		Dynamic set_renderRequest_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_Stage */ 
