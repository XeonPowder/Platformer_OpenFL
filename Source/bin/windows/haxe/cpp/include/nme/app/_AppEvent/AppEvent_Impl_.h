#ifndef INCLUDED_nme_app__AppEvent_AppEvent_Impl_
#define INCLUDED_nme_app__AppEvent_AppEvent_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <nme/Event.h>
HX_DECLARE_CLASS3(nme,app,_AppEvent,AppEvent_Impl_)
namespace nme{
namespace app{
namespace _AppEvent{


class HXCPP_CLASS_ATTRIBUTES  AppEvent_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AppEvent_Impl__obj OBJ_;
		AppEvent_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.app._AppEvent.AppEvent_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AppEvent_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AppEvent_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AppEvent_Impl_","\x39","\xb5","\x6d","\x05"); }

		static int get_type( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_type_dyn();

		static int get_x( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_x_dyn();

		static int get_y( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_y_dyn();

		static int get_value( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_value_dyn();

		static int get_code( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_code_dyn();

		static int get_id( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_id_dyn();

		static int get_flags( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_flags_dyn();

		static int get_result( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_result_dyn();

		static int set_result( ::cpp::Pointer< nme::Event > this1,int inResult);
		static Dynamic set_result_dyn();

		static Float get_sx( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_sx_dyn();

		static Float get_sy( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_sy_dyn();

		static Float get_deltaX( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_deltaX_dyn();

		static Float get_deltaY( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_deltaY_dyn();

		static Float get_pollTime( ::cpp::Pointer< nme::Event > this1);
		static Dynamic get_pollTime_dyn();

		static Float set_pollTime( ::cpp::Pointer< nme::Event > this1,Float inWake);
		static Dynamic set_pollTime_dyn();

};

} // end namespace nme
} // end namespace app
} // end namespace _AppEvent

#endif /* INCLUDED_nme_app__AppEvent_AppEvent_Impl_ */ 
