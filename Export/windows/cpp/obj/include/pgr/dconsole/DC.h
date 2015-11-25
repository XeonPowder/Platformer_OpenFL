#ifndef INCLUDED_pgr_dconsole_DC
#define INCLUDED_pgr_dconsole_DC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,DC)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCInput)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCInterface)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DC_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DC_obj OBJ_;
		DC_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="pgr.dconsole.DC")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DC_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("DC","\x7f","\x3b","\x00","\x00"); }

		static void __boot();
		static ::String VERSION;
		static ::String ALIGN_DOWN;
		static ::String ALIGN_UP;
		static ::pgr::dconsole::DConsole instance;
		static Void init( Dynamic heightPt,::String align,Dynamic theme,::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc);
		static Dynamic init_dyn();

		static Void setConsoleFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,hx::Null< bool >  italic,hx::Null< bool >  underline);
		static Dynamic setConsoleFont_dyn();

		static Void setPromptFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		static Dynamic setPromptFont_dyn();

		static Void setMonitorFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		static Dynamic setMonitorFont_dyn();

		static Void setFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline);
		static Dynamic setFont_dyn();

		static Void showConsole( );
		static Dynamic showConsole_dyn();

		static Void hideConsole( );
		static Dynamic hideConsole_dyn();

		static Void showMonitor( );
		static Dynamic showMonitor_dyn();

		static Void hideMonitor( );
		static Dynamic hideMonitor_dyn();

		static Void showProfiler( );
		static Dynamic showProfiler_dyn();

		static Void hideProfiler( );
		static Dynamic hideProfiler_dyn();

		static Void enable( );
		static Dynamic enable_dyn();

		static Void disable( );
		static Dynamic disable_dyn();

		static Void setConsoleKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		static Dynamic setConsoleKey_dyn();

		static Void setMonitorKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		static Dynamic setMonitorKey_dyn();

		static Void setProfilerKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		static Dynamic setProfilerKey_dyn();

		static Void log( Dynamic data,hx::Null< int >  color);
		static Dynamic log_dyn();

		static Void logWarning( Dynamic data);
		static Dynamic logWarning_dyn();

		static Void logError( Dynamic data);
		static Dynamic logError_dyn();

		static Void logConfirmation( Dynamic data);
		static Dynamic logConfirmation_dyn();

		static Void logInfo( Dynamic data);
		static Dynamic logInfo_dyn();

		static Void monitorField( Dynamic object,::String fieldName,::String alias);
		static Dynamic monitorField_dyn();

		static Void setMonitorRefreshRate( hx::Null< int >  refreshRate);
		static Dynamic setMonitorRefreshRate_dyn();

		static Void registerCommand( Dynamic Function,::String alias,::String shortcut,::String description,::String help);
		static Dynamic registerCommand_dyn();

		static Void registerObject( Dynamic object,::String alias);
		static Dynamic registerObject_dyn();

		static Void registerClass( ::hx::Class cls,::String alias);
		static Dynamic registerClass_dyn();

		static Void registerFunction( Dynamic Function,::String alias,::String description);
		static Dynamic registerFunction_dyn();

		static Void unregisterFunction( ::String alias);
		static Dynamic unregisterFunction_dyn();

		static Void unregisterObject( ::String alias);
		static Dynamic unregisterObject_dyn();

		static Void clearConsole( );
		static Dynamic clearConsole_dyn();

		static Void clearRegistry( );
		static Dynamic clearRegistry_dyn();

		static Void clearProfiler( );
		static Dynamic clearProfiler_dyn();

		static Void clearMonitor( );
		static Dynamic clearMonitor_dyn();

		static Void toFront( );
		static Dynamic toFront_dyn();

		static Void beginProfile( ::String sampleName);
		static Dynamic beginProfile_dyn();

		static Void endProfile( ::String sampleName);
		static Dynamic endProfile_dyn();

		static Void setVerboseErrors( bool b);
		static Dynamic setVerboseErrors_dyn();

		static Void eval( ::String expr);
		static Dynamic eval_dyn();

		static Void checkInstance( );
		static Dynamic checkInstance_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DC */ 
