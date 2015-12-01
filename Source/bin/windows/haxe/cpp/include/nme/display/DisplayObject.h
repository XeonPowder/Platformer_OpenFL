#ifndef INCLUDED_nme_display_DisplayObject
#define INCLUDED_nme_display_DisplayObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
HX_DECLARE_CLASS2(nme,app,IAppEventHandler)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,display,BlendMode)
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,Graphics)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,display,LoaderInfo)
HX_DECLARE_CLASS2(nme,display,PixelSnapping)
HX_DECLARE_CLASS2(nme,display,Stage)
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,geom,ColorTransform)
HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Point)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
HX_DECLARE_CLASS2(nme,geom,Transform)
HX_DECLARE_CLASS2(nme,net,URLLoader)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObject_obj : public ::nme::events::EventDispatcher_obj{
	public:
		typedef ::nme::events::EventDispatcher_obj super;
		typedef DisplayObject_obj OBJ_;
		DisplayObject_obj();
		Void __construct(Dynamic inHandle,::String inType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.DisplayObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObject_obj > __new(Dynamic inHandle,::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObject_obj();

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
		operator ::nme::display::IBitmapDrawable_obj *();
		::String __ToString() const { return HX_HCSTRING("DisplayObject","\x81","\x8a","\x92","\x1e"); }

		static void __boot();
		static Dynamic nme_create_display_object;
		static Dynamic &nme_create_display_object_dyn() { return nme_create_display_object;}
		static Dynamic nme_display_object_get_graphics;
		static Dynamic &nme_display_object_get_graphics_dyn() { return nme_display_object_get_graphics;}
		static Dynamic nme_display_object_draw_to_surface;
		static Dynamic &nme_display_object_draw_to_surface_dyn() { return nme_display_object_draw_to_surface;}
		static Dynamic nme_display_object_get_id;
		static Dynamic &nme_display_object_get_id_dyn() { return nme_display_object_get_id;}
		static Dynamic nme_display_object_get_x;
		static Dynamic &nme_display_object_get_x_dyn() { return nme_display_object_get_x;}
		static Dynamic nme_display_object_set_x;
		static Dynamic &nme_display_object_set_x_dyn() { return nme_display_object_set_x;}
		static Dynamic nme_display_object_get_y;
		static Dynamic &nme_display_object_get_y_dyn() { return nme_display_object_get_y;}
		static Dynamic nme_display_object_set_y;
		static Dynamic &nme_display_object_set_y_dyn() { return nme_display_object_set_y;}
		static Dynamic nme_display_object_get_scale_x;
		static Dynamic &nme_display_object_get_scale_x_dyn() { return nme_display_object_get_scale_x;}
		static Dynamic nme_display_object_set_scale_x;
		static Dynamic &nme_display_object_set_scale_x_dyn() { return nme_display_object_set_scale_x;}
		static Dynamic nme_display_object_get_scale_y;
		static Dynamic &nme_display_object_get_scale_y_dyn() { return nme_display_object_get_scale_y;}
		static Dynamic nme_display_object_set_scale_y;
		static Dynamic &nme_display_object_set_scale_y_dyn() { return nme_display_object_set_scale_y;}
		static Dynamic nme_display_object_get_mouse_x;
		static Dynamic &nme_display_object_get_mouse_x_dyn() { return nme_display_object_get_mouse_x;}
		static Dynamic nme_display_object_get_mouse_y;
		static Dynamic &nme_display_object_get_mouse_y_dyn() { return nme_display_object_get_mouse_y;}
		static Dynamic nme_display_object_get_rotation;
		static Dynamic &nme_display_object_get_rotation_dyn() { return nme_display_object_get_rotation;}
		static Dynamic nme_display_object_set_rotation;
		static Dynamic &nme_display_object_set_rotation_dyn() { return nme_display_object_set_rotation;}
		static Dynamic nme_display_object_get_bg;
		static Dynamic &nme_display_object_get_bg_dyn() { return nme_display_object_get_bg;}
		static Dynamic nme_display_object_set_bg;
		static Dynamic &nme_display_object_set_bg_dyn() { return nme_display_object_set_bg;}
		static Dynamic nme_display_object_get_name;
		static Dynamic &nme_display_object_get_name_dyn() { return nme_display_object_get_name;}
		static Dynamic nme_display_object_set_name;
		static Dynamic &nme_display_object_set_name_dyn() { return nme_display_object_set_name;}
		static Dynamic nme_display_object_get_width;
		static Dynamic &nme_display_object_get_width_dyn() { return nme_display_object_get_width;}
		static Dynamic nme_display_object_set_width;
		static Dynamic &nme_display_object_set_width_dyn() { return nme_display_object_set_width;}
		static Dynamic nme_display_object_get_height;
		static Dynamic &nme_display_object_get_height_dyn() { return nme_display_object_get_height;}
		static Dynamic nme_display_object_set_height;
		static Dynamic &nme_display_object_set_height_dyn() { return nme_display_object_set_height;}
		static Dynamic nme_display_object_get_alpha;
		static Dynamic &nme_display_object_get_alpha_dyn() { return nme_display_object_get_alpha;}
		static Dynamic nme_display_object_set_alpha;
		static Dynamic &nme_display_object_set_alpha_dyn() { return nme_display_object_set_alpha;}
		static Dynamic nme_display_object_get_blend_mode;
		static Dynamic &nme_display_object_get_blend_mode_dyn() { return nme_display_object_get_blend_mode;}
		static Dynamic nme_display_object_set_blend_mode;
		static Dynamic &nme_display_object_set_blend_mode_dyn() { return nme_display_object_set_blend_mode;}
		static Dynamic nme_display_object_get_cache_as_bitmap;
		static Dynamic &nme_display_object_get_cache_as_bitmap_dyn() { return nme_display_object_get_cache_as_bitmap;}
		static Dynamic nme_display_object_set_cache_as_bitmap;
		static Dynamic &nme_display_object_set_cache_as_bitmap_dyn() { return nme_display_object_set_cache_as_bitmap;}
		static Dynamic nme_display_object_get_pedantic_bitmap_caching;
		static Dynamic &nme_display_object_get_pedantic_bitmap_caching_dyn() { return nme_display_object_get_pedantic_bitmap_caching;}
		static Dynamic nme_display_object_set_pedantic_bitmap_caching;
		static Dynamic &nme_display_object_set_pedantic_bitmap_caching_dyn() { return nme_display_object_set_pedantic_bitmap_caching;}
		static Dynamic nme_display_object_get_pixel_snapping;
		static Dynamic &nme_display_object_get_pixel_snapping_dyn() { return nme_display_object_get_pixel_snapping;}
		static Dynamic nme_display_object_set_pixel_snapping;
		static Dynamic &nme_display_object_set_pixel_snapping_dyn() { return nme_display_object_set_pixel_snapping;}
		static Dynamic nme_display_object_get_visible;
		static Dynamic &nme_display_object_get_visible_dyn() { return nme_display_object_get_visible;}
		static Dynamic nme_display_object_set_visible;
		static Dynamic &nme_display_object_set_visible_dyn() { return nme_display_object_set_visible;}
		static Dynamic nme_display_object_set_filters;
		static Dynamic &nme_display_object_set_filters_dyn() { return nme_display_object_set_filters;}
		static Dynamic nme_display_object_global_to_local;
		static Dynamic &nme_display_object_global_to_local_dyn() { return nme_display_object_global_to_local;}
		static Dynamic nme_display_object_local_to_global;
		static Dynamic &nme_display_object_local_to_global_dyn() { return nme_display_object_local_to_global;}
		static Dynamic nme_display_object_set_scale9_grid;
		static Dynamic &nme_display_object_set_scale9_grid_dyn() { return nme_display_object_set_scale9_grid;}
		static Dynamic nme_display_object_set_scroll_rect;
		static Dynamic &nme_display_object_set_scroll_rect_dyn() { return nme_display_object_set_scroll_rect;}
		static Dynamic nme_display_object_set_mask;
		static Dynamic &nme_display_object_set_mask_dyn() { return nme_display_object_set_mask;}
		static Dynamic nme_display_object_set_matrix;
		static Dynamic &nme_display_object_set_matrix_dyn() { return nme_display_object_set_matrix;}
		static Dynamic nme_display_object_get_matrix;
		static Dynamic &nme_display_object_get_matrix_dyn() { return nme_display_object_get_matrix;}
		static Dynamic nme_display_object_get_color_transform;
		static Dynamic &nme_display_object_get_color_transform_dyn() { return nme_display_object_get_color_transform;}
		static Dynamic nme_display_object_set_color_transform;
		static Dynamic &nme_display_object_set_color_transform_dyn() { return nme_display_object_set_color_transform;}
		static Dynamic nme_display_object_get_pixel_bounds;
		static Dynamic &nme_display_object_get_pixel_bounds_dyn() { return nme_display_object_get_pixel_bounds;}
		static Dynamic nme_display_object_get_bounds;
		static Dynamic &nme_display_object_get_bounds_dyn() { return nme_display_object_get_bounds;}
		static Dynamic nme_display_object_hit_test_point;
		static Dynamic &nme_display_object_hit_test_point_dyn() { return nme_display_object_hit_test_point;}
		static Dynamic nme_display_object_get_hit_enabled;
		static Dynamic &nme_display_object_get_hit_enabled_dyn() { return nme_display_object_get_hit_enabled;}
		static Dynamic nme_display_object_set_hit_enabled;
		static Dynamic &nme_display_object_set_hit_enabled_dyn() { return nme_display_object_set_hit_enabled;}
		static Dynamic nme_doc_add_child;
		static Dynamic &nme_doc_add_child_dyn() { return nme_doc_add_child;}
		::nme::display::Graphics graphics;
		::nme::display::LoaderInfo loaderInfo;
		::nme::display::DisplayObject mask;
		Float mouseX;
		Float mouseY;
		::nme::display::DisplayObjectContainer parent;
		::nme::display::Stage stage;
		Dynamic nmeHandle;
		cpp::ArrayBase nmeFilters;
		::nme::display::Graphics nmeGraphicsCache;
		int nmeID;
		::nme::display::DisplayObjectContainer nmeParent;
		::nme::geom::Rectangle nmeScale9Grid;
		::nme::geom::Rectangle nmeScrollRect;
		virtual bool dispatchEvent( ::nme::events::Event event);

		virtual bool get_hitEnabled( );
		Dynamic get_hitEnabled_dyn();

		virtual bool set_hitEnabled( bool inVal);
		Dynamic set_hitEnabled_dyn();

		virtual ::nme::geom::Rectangle getBounds( ::nme::display::DisplayObject targetCoordinateSpace);
		Dynamic getBounds_dyn();

		virtual ::nme::geom::Rectangle getRect( ::nme::display::DisplayObject targetCoordinateSpace);
		Dynamic getRect_dyn();

		virtual ::nme::geom::Point globalToLocal( ::nme::geom::Point inGlobal);
		Dynamic globalToLocal_dyn();

		virtual bool hitTestObject( ::nme::display::DisplayObject object);
		Dynamic hitTestObject_dyn();

		virtual bool hitTestPoint( Float x,Float y,hx::Null< bool >  shapeFlag);
		Dynamic hitTestPoint_dyn();

		virtual ::nme::geom::Point localToGlobal( ::nme::geom::Point inLocal);
		Dynamic localToGlobal_dyn();

		virtual ::nme::display::InteractiveObject nmeAsInteractiveObject( );
		Dynamic nmeAsInteractiveObject_dyn();

		virtual Void nmeBroadcast( ::nme::events::Event inEvt);
		Dynamic nmeBroadcast_dyn();

		virtual bool nmeDispatchEvent( ::nme::events::Event inEvt);
		Dynamic nmeDispatchEvent_dyn();

		virtual Void nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing);
		Dynamic nmeDrawToSurface_dyn();

		virtual ::nme::display::DisplayObject nmeFindByID( int inID);
		Dynamic nmeFindByID_dyn();

		virtual Void nmeFireEvent( ::nme::events::Event inEvt);
		Dynamic nmeFireEvent_dyn();

		virtual ::nme::geom::ColorTransform nmeGetColorTransform( );
		Dynamic nmeGetColorTransform_dyn();

		virtual ::nme::geom::ColorTransform nmeGetConcatenatedColorTransform( );
		Dynamic nmeGetConcatenatedColorTransform_dyn();

		virtual ::nme::geom::Matrix nmeGetConcatenatedMatrix( );
		Dynamic nmeGetConcatenatedMatrix_dyn();

		virtual Void nmeGetInteractiveObjectStack( Array< ::Dynamic > outStack);
		Dynamic nmeGetInteractiveObjectStack_dyn();

		virtual ::nme::geom::Matrix nmeGetMatrix( );
		Dynamic nmeGetMatrix_dyn();

		virtual Void nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::Dynamic > result);
		Dynamic nmeGetObjectsUnderPoint_dyn();

		virtual ::nme::geom::Rectangle nmeGetPixelBounds( );
		Dynamic nmeGetPixelBounds_dyn();

		virtual Void nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage);
		Dynamic nmeOnAdded_dyn();

		virtual Void nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage);
		Dynamic nmeOnRemoved_dyn();

		virtual Void nmeSetColorTransform( ::nme::geom::ColorTransform inTrans);
		Dynamic nmeSetColorTransform_dyn();

		virtual Void nmeSetMatrix( ::nme::geom::Matrix inMatrix);
		Dynamic nmeSetMatrix_dyn();

		virtual ::nme::display::DisplayObjectContainer nmeSetParent( ::nme::display::DisplayObjectContainer inParent);
		Dynamic nmeSetParent_dyn();

		virtual ::String toString( );

		virtual Float get_alpha( );
		Dynamic get_alpha_dyn();

		virtual Float set_alpha( Float inAlpha);
		Dynamic set_alpha_dyn();

		virtual Dynamic get_opaqueBackground( );
		Dynamic get_opaqueBackground_dyn();

		virtual Dynamic set_opaqueBackground( Dynamic inBG);
		Dynamic set_opaqueBackground_dyn();

		virtual ::nme::display::BlendMode get_blendMode( );
		Dynamic get_blendMode_dyn();

		virtual ::nme::display::BlendMode set_blendMode( ::nme::display::BlendMode inMode);
		Dynamic set_blendMode_dyn();

		virtual bool get_cacheAsBitmap( );
		Dynamic get_cacheAsBitmap_dyn();

		virtual bool set_cacheAsBitmap( bool inVal);
		Dynamic set_cacheAsBitmap_dyn();

		virtual bool get_pedanticBitmapCaching( );
		Dynamic get_pedanticBitmapCaching_dyn();

		virtual bool set_pedanticBitmapCaching( bool inVal);
		Dynamic set_pedanticBitmapCaching_dyn();

		virtual ::nme::display::PixelSnapping get_pixelSnapping( );
		Dynamic get_pixelSnapping_dyn();

		virtual ::nme::display::PixelSnapping set_pixelSnapping( ::nme::display::PixelSnapping inVal);
		Dynamic set_pixelSnapping_dyn();

		virtual cpp::ArrayBase get_filters( );
		Dynamic get_filters_dyn();

		virtual cpp::ArrayBase set_filters( cpp::ArrayBase inFilters);
		Dynamic set_filters_dyn();

		virtual ::nme::display::Graphics get_graphics( );
		Dynamic get_graphics_dyn();

		virtual Float get_height( );
		Dynamic get_height_dyn();

		virtual Float set_height( Float inVal);
		Dynamic set_height_dyn();

		virtual ::nme::display::DisplayObject set_mask( ::nme::display::DisplayObject inObject);
		Dynamic set_mask_dyn();

		virtual Float get_mouseX( );
		Dynamic get_mouseX_dyn();

		virtual Float get_mouseY( );
		Dynamic get_mouseY_dyn();

		virtual ::String get_name( );
		Dynamic get_name_dyn();

		virtual ::String set_name( ::String inVal);
		Dynamic set_name_dyn();

		virtual ::nme::display::DisplayObjectContainer get_parent( );
		Dynamic get_parent_dyn();

		virtual Float get_rotation( );
		Dynamic get_rotation_dyn();

		virtual Float set_rotation( Float inVal);
		Dynamic set_rotation_dyn();

		virtual ::nme::geom::Rectangle get_scale9Grid( );
		Dynamic get_scale9Grid_dyn();

		virtual ::nme::geom::Rectangle set_scale9Grid( ::nme::geom::Rectangle inRect);
		Dynamic set_scale9Grid_dyn();

		virtual Float get_scaleX( );
		Dynamic get_scaleX_dyn();

		virtual Float set_scaleX( Float inVal);
		Dynamic set_scaleX_dyn();

		virtual Float get_scaleY( );
		Dynamic get_scaleY_dyn();

		virtual Float set_scaleY( Float inVal);
		Dynamic set_scaleY_dyn();

		virtual ::nme::geom::Rectangle get_scrollRect( );
		Dynamic get_scrollRect_dyn();

		virtual ::nme::geom::Rectangle set_scrollRect( ::nme::geom::Rectangle inRect);
		Dynamic set_scrollRect_dyn();

		virtual ::nme::display::Stage get_stage( );
		Dynamic get_stage_dyn();

		virtual ::nme::geom::Transform get_transform( );
		Dynamic get_transform_dyn();

		virtual ::nme::geom::Transform set_transform( ::nme::geom::Transform inTransform);
		Dynamic set_transform_dyn();

		virtual bool get_visible( );
		Dynamic get_visible_dyn();

		virtual bool set_visible( bool inVal);
		Dynamic set_visible_dyn();

		virtual Float get_width( );
		Dynamic get_width_dyn();

		virtual Float set_width( Float inVal);
		Dynamic set_width_dyn();

		virtual Float get_x( );
		Dynamic get_x_dyn();

		virtual Float set_x( Float inVal);
		Dynamic set_x_dyn();

		virtual Float get_y( );
		Dynamic get_y_dyn();

		virtual Float set_y( Float inVal);
		Dynamic set_y_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_DisplayObject */ 
