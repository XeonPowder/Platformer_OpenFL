#ifndef INCLUDED_pgr_dconsole_ui_DCEmtpyInterface
#define INCLUDED_pgr_dconsole_ui_DCEmtpyInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCEmtpyInterface)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCInterface)
namespace pgr{
namespace dconsole{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  DCEmtpyInterface_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCEmtpyInterface_obj OBJ_;
		DCEmtpyInterface_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.ui.DCEmtpyInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCEmtpyInterface_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCEmtpyInterface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::pgr::dconsole::ui::DCInterface_obj *();
		::String __ToString() const { return HX_HCSTRING("DCEmtpyInterface","\xc3","\xf6","\x3e","\xfd"); }

		::pgr::dconsole::DConsole console;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void showConsole( );
		Dynamic showConsole_dyn();

		virtual Void hideConsole( );
		Dynamic hideConsole_dyn();

		virtual Void writeMonitorOutput( Array< ::String > output);
		Dynamic writeMonitorOutput_dyn();

		virtual Void showMonitor( );
		Dynamic showMonitor_dyn();

		virtual Void hideMonitor( );
		Dynamic hideMonitor_dyn();

		virtual Void writeProfilerOutput( ::String output);
		Dynamic writeProfilerOutput_dyn();

		virtual Void showProfiler( );
		Dynamic showProfiler_dyn();

		virtual Void hideProfiler( );
		Dynamic hideProfiler_dyn();

		virtual Void log( Dynamic data,int color);
		Dynamic log_dyn();

		virtual Void moveCarretToEnd( );
		Dynamic moveCarretToEnd_dyn();

		virtual Void scrollConsoleUp( );
		Dynamic scrollConsoleUp_dyn();

		virtual Void scrollConsoleDown( );
		Dynamic scrollConsoleDown_dyn();

		virtual Void toFront( );
		Dynamic toFront_dyn();

		virtual Void setConsoleFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,hx::Null< bool >  italic,hx::Null< bool >  underline);
		Dynamic setConsoleFont_dyn();

		virtual Void setPromptFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		Dynamic setPromptFont_dyn();

		virtual Void setProfilerFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		Dynamic setProfilerFont_dyn();

		virtual Void setMonitorFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		Dynamic setMonitorFont_dyn();

		virtual Void inputRemoveLastChar( );
		Dynamic inputRemoveLastChar_dyn();

		virtual ::String getInputTxt( );
		Dynamic getInputTxt_dyn();

		virtual Void setInputTxt( ::String string);
		Dynamic setInputTxt_dyn();

		virtual ::String getConsoleText( );
		Dynamic getConsoleText_dyn();

		virtual Dynamic getMonitorText( );
		Dynamic getMonitorText_dyn();

		virtual Void clearInput( );
		Dynamic clearInput_dyn();

		virtual Void clearConsole( );
		Dynamic clearConsole_dyn();

};

} // end namespace pgr
} // end namespace dconsole
} // end namespace ui

#endif /* INCLUDED_pgr_dconsole_ui_DCEmtpyInterface */ 
