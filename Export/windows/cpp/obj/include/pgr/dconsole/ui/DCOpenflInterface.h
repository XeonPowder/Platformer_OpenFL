#ifndef INCLUDED_pgr_dconsole_ui_DCOpenflInterface
#define INCLUDED_pgr_dconsole_ui_DCOpenflInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCInterface)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCOpenflInterface)
namespace pgr{
namespace dconsole{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  DCOpenflInterface_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef DCOpenflInterface_obj OBJ_;
		DCOpenflInterface_obj();
		Void __construct(Float heightPt,::String align);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.ui.DCOpenflInterface")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCOpenflInterface_obj > __new(Float heightPt,::String align);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCOpenflInterface_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::pgr::dconsole::ui::DCInterface_obj *();
		::String __ToString() const { return HX_HCSTRING("DCOpenflInterface","\x4a","\x4f","\xc2","\x28"); }

		::pgr::dconsole::DConsole console;
		int _promptFontYOffset;
		::String yAlign;
		Float heightPt;
		Float widthPt;
		Float maxWidth;
		Float maxHeight;
		int margin;
		::openfl::display::Sprite monitorDisplay;
		::openfl::text::TextField txtMonitorLeft;
		::openfl::text::TextField txtMonitorRight;
		::openfl::display::Sprite profilerDisplay;
		::openfl::text::TextField txtProfiler;
		::openfl::display::Sprite consoleDisplay;
		::openfl::display::Sprite promptDisplay;
		::openfl::text::TextField txtConsole;
		::openfl::text::TextField txtPrompt;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void onResize( ::openfl::events::Event e);
		Dynamic onResize_dyn();

		virtual Void createConsoleDisplay( );
		Dynamic createConsoleDisplay_dyn();

		virtual Void drawConsole( );
		Dynamic drawConsole_dyn();

		virtual Void showConsole( );
		Dynamic showConsole_dyn();

		virtual Void hideConsole( );
		Dynamic hideConsole_dyn();

		virtual Void createMonitorDisplay( );
		Dynamic createMonitorDisplay_dyn();

		virtual Void drawMonitor( );
		Dynamic drawMonitor_dyn();

		virtual Void writeMonitorOutput( Array< ::String > output);
		Dynamic writeMonitorOutput_dyn();

		virtual Void showMonitor( );
		Dynamic showMonitor_dyn();

		virtual Void hideMonitor( );
		Dynamic hideMonitor_dyn();

		virtual Void createProfilerDisplay( );
		Dynamic createProfilerDisplay_dyn();

		virtual Void drawProfiler( );
		Dynamic drawProfiler_dyn();

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

		virtual Void scrollToBottom( );
		Dynamic scrollToBottom_dyn();

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

#endif /* INCLUDED_pgr_dconsole_ui_DCOpenflInterface */ 
