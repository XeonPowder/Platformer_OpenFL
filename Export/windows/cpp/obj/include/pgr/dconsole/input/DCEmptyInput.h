#ifndef INCLUDED_pgr_dconsole_input_DCEmptyInput
#define INCLUDED_pgr_dconsole_input_DCEmptyInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCEmptyInput)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCInput)
namespace pgr{
namespace dconsole{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  DCEmptyInput_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCEmptyInput_obj OBJ_;
		DCEmptyInput_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.input.DCEmptyInput")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCEmptyInput_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCEmptyInput_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::pgr::dconsole::input::DCInput_obj *();
		::String __ToString() const { return HX_HCSTRING("DCEmptyInput","\x9c","\xce","\x30","\x66"); }

		::pgr::dconsole::DConsole console;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void disable( );
		Dynamic disable_dyn();

};

} // end namespace pgr
} // end namespace dconsole
} // end namespace input

#endif /* INCLUDED_pgr_dconsole_input_DCEmptyInput */ 
