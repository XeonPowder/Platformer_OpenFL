#ifndef INCLUDED_pgr_dconsole_DConsole
#define INCLUDED_pgr_dconsole_DConsole

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,DCCommands)
HX_DECLARE_CLASS2(pgr,dconsole,DCMonitor)
HX_DECLARE_CLASS2(pgr,dconsole,DCProfiler)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCInput)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCInterface)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DConsole_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DConsole_obj OBJ_;
		DConsole_obj();
		Void __construct(::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc,Dynamic theme);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.DConsole")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DConsole_obj > __new(::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc,Dynamic theme);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DConsole_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DConsole","\x73","\x63","\x8d","\x17"); }

		static void __boot();
		static ::String ALIGN_DOWN;
		static ::String ALIGN_UP;
		Array< ::String > _historyArray;
		int _historyIndex;
		::pgr::dconsole::input::DCInput input;
		::pgr::dconsole::ui::DCInterface interfc;
		::pgr::dconsole::DCMonitor monitor;
		::pgr::dconsole::DCProfiler profiler;
		::pgr::dconsole::DCCommands commands;
		Dynamic consoleKey;
		Dynamic monitorKey;
		Dynamic profilerKey;
		bool enabled;
		bool visible;
		virtual Void showConsole( );
		Dynamic showConsole_dyn();

		virtual Void hideConsole( );
		Dynamic hideConsole_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void disable( );
		Dynamic disable_dyn();

		virtual Void setConsoleKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		Dynamic setConsoleKey_dyn();

		virtual Void setMonitorKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		Dynamic setMonitorKey_dyn();

		virtual Void setProfilerKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		Dynamic setProfilerKey_dyn();

		virtual Dynamic makeShorcutKey( int keyCode,hx::Null< bool >  ctrlKey,hx::Null< bool >  shiftKey,hx::Null< bool >  altKey);
		Dynamic makeShorcutKey_dyn();

		virtual Void log( Dynamic data,hx::Null< int >  color);
		Dynamic log_dyn();

		virtual Void logConfirmation( Dynamic data);
		Dynamic logConfirmation_dyn();

		virtual Void logInfo( Dynamic data);
		Dynamic logInfo_dyn();

		virtual Void logError( Dynamic data);
		Dynamic logError_dyn();

		virtual Void logWarning( Dynamic data);
		Dynamic logWarning_dyn();

		virtual Void clearConsole( Array< ::String > args);
		Dynamic clearConsole_dyn();

		virtual Void clearHistory( );
		Dynamic clearHistory_dyn();

		virtual Void monitorField( Dynamic object,::String fieldName,::String alias);
		Dynamic monitorField_dyn();

		virtual Void toggleMonitor( Array< ::String > args);
		Dynamic toggleMonitor_dyn();

		virtual Void showMonitor( );
		Dynamic showMonitor_dyn();

		virtual Void hideMonitor( );
		Dynamic hideMonitor_dyn();

		virtual Void toggleProfiler( Array< ::String > args);
		Dynamic toggleProfiler_dyn();

		virtual Void showProfiler( );
		Dynamic showProfiler_dyn();

		virtual Void hideProfiler( );
		Dynamic hideProfiler_dyn();

		virtual Void prevHistory( );
		Dynamic prevHistory_dyn();

		virtual Void nextHistory( );
		Dynamic nextHistory_dyn();

		virtual Void processInputLine( );
		Dynamic processInputLine_dyn();

		virtual Void resetHistoryIndex( );
		Dynamic resetHistoryIndex_dyn();

		virtual Void scrollDown( );
		Dynamic scrollDown_dyn();

		virtual Void scrollUp( );
		Dynamic scrollUp_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DConsole */ 
