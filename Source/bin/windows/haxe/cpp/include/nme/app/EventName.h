#ifndef INCLUDED_nme_app_EventName
#define INCLUDED_nme_app_EventName

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,app,EventName)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  EventName_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventName_obj OBJ_;
		EventName_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.app.EventName")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventName_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventName_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EventName","\x65","\x5b","\xdf","\x99"); }

		static void __boot();
		static ::String KEY_DOWN;
		static ::String KEY_UP;
		static ::String MOUSE_MOVE;
		static ::String MOUSE_DOWN;
		static ::String MOUSE_UP;
		static ::String CLICK;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_END;
		static ::String TOUCH_TAP;
		static ::String AXIS_MOVE;
		static ::String BALL_MOVE;
		static ::String HAT_MOVE;
		static ::String BUTTON_DOWN;
		static ::String BUTTON_UP;
};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_EventName */ 
