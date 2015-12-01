#ifndef INCLUDED_haxe_Timer
#define INCLUDED_haxe_Timer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(nme,app,IPollClient)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  Timer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Timer_obj OBJ_;
		Timer_obj();
		Void __construct(Float inTimeMs);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxe.Timer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Timer_obj > __new(Float inTimeMs);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Timer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Timer","\xa5","\x2f","\x63","\xa3"); }

		static void __boot();
		static Array< ::Dynamic > sRunningTimers;
		static ::nme::app::IPollClient sPollClient;
		static Dynamic measure( Dynamic f,Dynamic pos);
		static Dynamic measure_dyn();

		static Float nmeGetNextWake( Float inDefaultWake,Float inStamp);
		static Dynamic nmeGetNextWake_dyn();

		static Void nmeCheckTimers( Float inStamp);
		static Dynamic nmeCheckTimers_dyn();

		static ::haxe::Timer delay( Dynamic f,int time);
		static Dynamic delay_dyn();

		static Float stamp( );
		static Dynamic stamp_dyn();

		static Dynamic nme_time_stamp;
		static Dynamic &nme_time_stamp_dyn() { return nme_time_stamp;}
		Float mTime;
		Float mFireAt;
		bool mRunning;
		Dynamic run;
		inline Dynamic &run_dyn() {return run; }

		virtual Void stop( );
		Dynamic stop_dyn();

		virtual Void nmeCheck( Float inTime);
		Dynamic nmeCheck_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_Timer */ 
