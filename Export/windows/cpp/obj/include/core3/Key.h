#ifndef INCLUDED_core3_Key
#define INCLUDED_core3_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core3,Key)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace core3{


class HXCPP_CLASS_ATTRIBUTES  Key_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="core3.Key")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Key_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Key_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Key","\x7f","\x41","\x39","\x00"); }

		static void __boot();
		static bool fl_initDone;
		static Array< ::Dynamic > kcodes;
		static int ktime;
		static Void init( );
		static Dynamic init_dyn();

		static Void onEnterFrame( Dynamic _);
		static Dynamic onEnterFrame_dyn();

		static Void onKey( bool down,::openfl::events::KeyboardEvent e);
		static Dynamic onKey_dyn();

		static Void event( int code,bool down);
		static Dynamic event_dyn();

		static bool isDown( int c);
		static Dynamic isDown_dyn();

		static bool isToggled( int c);
		static Dynamic isToggled_dyn();

};

} // end namespace core3

#endif /* INCLUDED_core3_Key */ 
