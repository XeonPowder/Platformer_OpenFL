#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#define INCLUDED_pgr_dconsole_ui_DCInterface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,ui,DCInterface)
namespace pgr{
namespace dconsole{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  DCInterface_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef DCInterface_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
virtual Dynamic init_dyn()=0;
		virtual Void showConsole( )=0;
virtual Dynamic showConsole_dyn()=0;
		virtual Void hideConsole( )=0;
virtual Dynamic hideConsole_dyn()=0;
		virtual Void writeMonitorOutput( Array< ::String > output)=0;
virtual Dynamic writeMonitorOutput_dyn()=0;
		virtual Void showMonitor( )=0;
virtual Dynamic showMonitor_dyn()=0;
		virtual Void hideMonitor( )=0;
virtual Dynamic hideMonitor_dyn()=0;
		virtual Void writeProfilerOutput( ::String output)=0;
virtual Dynamic writeProfilerOutput_dyn()=0;
		virtual Void showProfiler( )=0;
virtual Dynamic showProfiler_dyn()=0;
		virtual Void hideProfiler( )=0;
virtual Dynamic hideProfiler_dyn()=0;
		virtual Void log( Dynamic data,int color)=0;
virtual Dynamic log_dyn()=0;
		virtual Void moveCarretToEnd( )=0;
virtual Dynamic moveCarretToEnd_dyn()=0;
		virtual Void scrollConsoleUp( )=0;
virtual Dynamic scrollConsoleUp_dyn()=0;
		virtual Void scrollConsoleDown( )=0;
virtual Dynamic scrollConsoleDown_dyn()=0;
		virtual Void toFront( )=0;
virtual Dynamic toFront_dyn()=0;
		virtual Void setConsoleFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,hx::Null< bool >  italic,hx::Null< bool >  underline)=0;
virtual Dynamic setConsoleFont_dyn()=0;
		virtual Void setPromptFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline)=0;
virtual Dynamic setPromptFont_dyn()=0;
		virtual Void setProfilerFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline)=0;
virtual Dynamic setProfilerFont_dyn()=0;
		virtual Void setMonitorFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline)=0;
virtual Dynamic setMonitorFont_dyn()=0;
		virtual Void inputRemoveLastChar( )=0;
virtual Dynamic inputRemoveLastChar_dyn()=0;
		virtual ::String getInputTxt( )=0;
virtual Dynamic getInputTxt_dyn()=0;
		virtual Void setInputTxt( ::String string)=0;
virtual Dynamic setInputTxt_dyn()=0;
		virtual ::String getConsoleText( )=0;
virtual Dynamic getConsoleText_dyn()=0;
		virtual Dynamic getMonitorText( )=0;
virtual Dynamic getMonitorText_dyn()=0;
		virtual Void clearInput( )=0;
virtual Dynamic clearInput_dyn()=0;
		virtual Void clearConsole( )=0;
virtual Dynamic clearConsole_dyn()=0;
};



template<typename IMPL>
class DCInterface_delegate_ : public DCInterface_obj
{
	protected:
		IMPL *mDelegate;
	public:
		DCInterface_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void init( ) { return mDelegate->init();}
		Dynamic init_dyn() { return mDelegate->init_dyn();}
		Void showConsole( ) { return mDelegate->showConsole();}
		Dynamic showConsole_dyn() { return mDelegate->showConsole_dyn();}
		Void hideConsole( ) { return mDelegate->hideConsole();}
		Dynamic hideConsole_dyn() { return mDelegate->hideConsole_dyn();}
		Void writeMonitorOutput( Array< ::String > output) { return mDelegate->writeMonitorOutput(output);}
		Dynamic writeMonitorOutput_dyn() { return mDelegate->writeMonitorOutput_dyn();}
		Void showMonitor( ) { return mDelegate->showMonitor();}
		Dynamic showMonitor_dyn() { return mDelegate->showMonitor_dyn();}
		Void hideMonitor( ) { return mDelegate->hideMonitor();}
		Dynamic hideMonitor_dyn() { return mDelegate->hideMonitor_dyn();}
		Void writeProfilerOutput( ::String output) { return mDelegate->writeProfilerOutput(output);}
		Dynamic writeProfilerOutput_dyn() { return mDelegate->writeProfilerOutput_dyn();}
		Void showProfiler( ) { return mDelegate->showProfiler();}
		Dynamic showProfiler_dyn() { return mDelegate->showProfiler_dyn();}
		Void hideProfiler( ) { return mDelegate->hideProfiler();}
		Dynamic hideProfiler_dyn() { return mDelegate->hideProfiler_dyn();}
		Void log( Dynamic data,int color) { return mDelegate->log(data,color);}
		Dynamic log_dyn() { return mDelegate->log_dyn();}
		Void moveCarretToEnd( ) { return mDelegate->moveCarretToEnd();}
		Dynamic moveCarretToEnd_dyn() { return mDelegate->moveCarretToEnd_dyn();}
		Void scrollConsoleUp( ) { return mDelegate->scrollConsoleUp();}
		Dynamic scrollConsoleUp_dyn() { return mDelegate->scrollConsoleUp_dyn();}
		Void scrollConsoleDown( ) { return mDelegate->scrollConsoleDown();}
		Dynamic scrollConsoleDown_dyn() { return mDelegate->scrollConsoleDown_dyn();}
		Void toFront( ) { return mDelegate->toFront();}
		Dynamic toFront_dyn() { return mDelegate->toFront_dyn();}
		Void setConsoleFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,hx::Null< bool >  italic,hx::Null< bool >  underline) { return mDelegate->setConsoleFont(font,embed,size,bold,italic,underline);}
		Dynamic setConsoleFont_dyn() { return mDelegate->setConsoleFont_dyn();}
		Void setPromptFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline) { return mDelegate->setPromptFont(font,embed,size,bold,italic,underline);}
		Dynamic setPromptFont_dyn() { return mDelegate->setPromptFont_dyn();}
		Void setProfilerFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline) { return mDelegate->setProfilerFont(font,embed,size,bold,italic,underline);}
		Dynamic setProfilerFont_dyn() { return mDelegate->setProfilerFont_dyn();}
		Void setMonitorFont( ::String font,hx::Null< bool >  embed,hx::Null< int >  size,hx::Null< bool >  bold,Dynamic italic,hx::Null< bool >  underline) { return mDelegate->setMonitorFont(font,embed,size,bold,italic,underline);}
		Dynamic setMonitorFont_dyn() { return mDelegate->setMonitorFont_dyn();}
		Void inputRemoveLastChar( ) { return mDelegate->inputRemoveLastChar();}
		Dynamic inputRemoveLastChar_dyn() { return mDelegate->inputRemoveLastChar_dyn();}
		::String getInputTxt( ) { return mDelegate->getInputTxt();}
		Dynamic getInputTxt_dyn() { return mDelegate->getInputTxt_dyn();}
		Void setInputTxt( ::String string) { return mDelegate->setInputTxt(string);}
		Dynamic setInputTxt_dyn() { return mDelegate->setInputTxt_dyn();}
		::String getConsoleText( ) { return mDelegate->getConsoleText();}
		Dynamic getConsoleText_dyn() { return mDelegate->getConsoleText_dyn();}
		Dynamic getMonitorText( ) { return mDelegate->getMonitorText();}
		Dynamic getMonitorText_dyn() { return mDelegate->getMonitorText_dyn();}
		Void clearInput( ) { return mDelegate->clearInput();}
		Dynamic clearInput_dyn() { return mDelegate->clearInput_dyn();}
		Void clearConsole( ) { return mDelegate->clearConsole();}
		Dynamic clearConsole_dyn() { return mDelegate->clearConsole_dyn();}
};

} // end namespace pgr
} // end namespace dconsole
} // end namespace ui

#endif /* INCLUDED_pgr_dconsole_ui_DCInterface */ 
