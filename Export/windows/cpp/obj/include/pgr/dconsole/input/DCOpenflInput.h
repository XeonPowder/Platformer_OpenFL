#ifndef INCLUDED_pgr_dconsole_input_DCOpenflInput
#define INCLUDED_pgr_dconsole_input_DCOpenflInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCInput)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCOpenflInput)
namespace pgr{
namespace dconsole{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  DCOpenflInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCOpenflInput_obj OBJ_;
		DCOpenflInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.input.DCOpenflInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCOpenflInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCOpenflInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::pgr::dconsole::input::DCInput_obj *();
		::String __ToString() const { return HX_HCSTRING("DCOpenflInput","\x1b","\x85","\xc1","\x7f"); }

		::pgr::dconsole::DConsole console;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void disable( );
		Dynamic disable_dyn();

		virtual Void onKeyDown( ::openfl::events::KeyboardEvent e);
		Dynamic onKeyDown_dyn();

		virtual Void onKeyUp( ::openfl::events::KeyboardEvent e);
		Dynamic onKeyUp_dyn();

		virtual bool matchesKey( Dynamic key,::openfl::events::KeyboardEvent e);
		Dynamic matchesKey_dyn();

};

} // end namespace pgr
} // end namespace dconsole
} // end namespace input

#endif /* INCLUDED_pgr_dconsole_input_DCOpenflInput */ 
