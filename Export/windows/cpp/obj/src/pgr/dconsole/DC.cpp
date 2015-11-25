#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DC
#include <pgr/dconsole/DC.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCCommands
#include <pgr/dconsole/DCCommands.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCMonitor
#include <pgr/dconsole/DCMonitor.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCProfiler
#include <pgr/dconsole/DCProfiler.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCThemes
#include <pgr/dconsole/DCThemes.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCOpenflInput
#include <pgr/dconsole/input/DCOpenflInput.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCOpenflInterface
#include <pgr/dconsole/ui/DCOpenflInterface.h>
#endif
namespace pgr{
namespace dconsole{

Void DC_obj::__construct()
{
	return null();
}

//DC_obj::~DC_obj() { }

Dynamic DC_obj::__CreateEmpty() { return  new DC_obj; }
hx::ObjectPtr< DC_obj > DC_obj::__new()
{  hx::ObjectPtr< DC_obj > _result_ = new DC_obj();
	_result_->__construct();
	return _result_;}

Dynamic DC_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DC_obj > _result_ = new DC_obj();
	_result_->__construct();
	return _result_;}

::String DC_obj::VERSION;

::String DC_obj::ALIGN_DOWN;

::String DC_obj::ALIGN_UP;

::pgr::dconsole::DConsole DC_obj::instance;

Void DC_obj::init( Dynamic __o_heightPt,::String __o_align,Dynamic theme,::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc){
Dynamic heightPt = __o_heightPt.Default(33);
::String align = __o_align.Default(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));
	HX_STACK_FRAME("pgr.dconsole.DC","init",0xfb861597,"pgr.dconsole.DC.init","pgr/dconsole/DC.hx",39,0x3000b1f7)
	HX_STACK_ARG(heightPt,"heightPt")
	HX_STACK_ARG(align,"align")
	HX_STACK_ARG(theme,"theme")
	HX_STACK_ARG(input,"input")
	HX_STACK_ARG(interfc,"interfc")
{
		HX_STACK_LINE(40)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		if ((tmp1)){
			HX_STACK_LINE(41)
			return null();
		}
		HX_STACK_LINE(44)
		bool tmp2 = (input == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp2)){
			HX_STACK_LINE(46)
			::pgr::dconsole::input::DCOpenflInput tmp3 = ::pgr::dconsole::input::DCOpenflInput_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(46)
			input = tmp3;
		}
		HX_STACK_LINE(54)
		bool tmp3 = (interfc == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(54)
		if ((tmp3)){
			HX_STACK_LINE(56)
			::pgr::dconsole::ui::DCOpenflInterface tmp4 = ::pgr::dconsole::ui::DCOpenflInterface_obj::__new(heightPt,align);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(56)
			interfc = tmp4;
		}
		HX_STACK_LINE(67)
		::pgr::dconsole::DConsole tmp4 = ::pgr::dconsole::DConsole_obj::__new(input,interfc,theme);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::pgr::dconsole::DC_obj::instance = tmp4;
		HX_STACK_LINE(68)
		::String tmp5 = HX_HCSTRING("~~~~~~~~~~ DCONSOLE ~~~~~~~~~~ (v5.0.0","\x78","\xf8","\xa6","\x48");		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		::String tmp6 = (tmp5 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		::pgr::dconsole::DC_obj::logInfo(tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DC_obj,init,(void))

Void DC_obj::setConsoleFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,hx::Null< bool >  __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(true);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
bool italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setConsoleFont",0xb2c5918b,"pgr.dconsole.DC.setConsoleFont","pgr/dconsole/DC.hx",80,0x3000b1f7)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(81)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(82)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::String tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		bool tmp4 = bold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		bool tmp5 = italic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(82)
		bool tmp6 = underline;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(82)
		tmp->interfc->setConsoleFont(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(DC_obj,setConsoleFont,(void))

Void DC_obj::setPromptFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(true);
int size = __o_size.Default(16);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setPromptFont",0x066cd86e,"pgr.dconsole.DC.setPromptFont","pgr/dconsole/DC.hx",93,0x3000b1f7)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(94)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(95)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::String tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(95)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(95)
		bool tmp4 = bold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		Dynamic tmp5 = italic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		bool tmp6 = underline;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		tmp->interfc->setPromptFont(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(DC_obj,setPromptFont,(void))

Void DC_obj::setMonitorFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(true);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setMonitorFont",0xfeb03e4e,"pgr.dconsole.DC.setMonitorFont","pgr/dconsole/DC.hx",107,0x3000b1f7)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(108)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(109)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		::String tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(109)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(109)
		bool tmp4 = bold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(109)
		Dynamic tmp5 = italic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(109)
		bool tmp6 = underline;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		tmp->interfc->setConsoleFont(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(DC_obj,setMonitorFont,(void))

Void DC_obj::setFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(true);
int size = __o_size.Default(16);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setFont",0xff79d26a,"pgr.dconsole.DC.setFont","pgr/dconsole/DC.hx",123,0x3000b1f7)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(124)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(125)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		::String tmp1 = font;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(125)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(125)
		bool tmp4 = bold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(125)
		Dynamic tmp5 = italic;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(125)
		bool tmp6 = underline;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		tmp->interfc->setConsoleFont(tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
		HX_STACK_LINE(126)
		::pgr::dconsole::DConsole tmp7 = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(126)
		::String tmp8 = font;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(126)
		bool tmp9 = embed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(126)
		int tmp10 = size;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(126)
		bool tmp11 = bold;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(126)
		Dynamic tmp12 = italic;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		bool tmp13 = underline;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		tmp7->interfc->setPromptFont(tmp8,tmp9,tmp10,tmp11,tmp12,tmp13);
		HX_STACK_LINE(127)
		::pgr::dconsole::DConsole tmp14 = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(127)
		::String tmp15 = font;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(127)
		bool tmp16 = embed;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(127)
		int tmp17 = size;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(127)
		bool tmp18 = bold;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(127)
		Dynamic tmp19 = italic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		bool tmp20 = underline;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(127)
		tmp14->interfc->setConsoleFont(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20);
		HX_STACK_LINE(128)
		::pgr::dconsole::DConsole tmp21 = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(128)
		::String tmp22 = font;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(128)
		bool tmp23 = embed;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(128)
		int tmp24 = size;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(128)
		bool tmp25 = bold;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(128)
		Dynamic tmp26 = italic;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(128)
		bool tmp27 = underline;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(128)
		tmp21->interfc->setProfilerFont(tmp22,tmp23,tmp24,tmp25,tmp26,tmp27);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(DC_obj,setFont,(void))

Void DC_obj::showConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","showConsole",0x0bb01c33,"pgr.dconsole.DC.showConsole","pgr/dconsole/DC.hx",134,0x3000b1f7)
		HX_STACK_LINE(135)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(136)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(136)
		tmp->showConsole();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,showConsole,(void))

Void DC_obj::hideConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","hideConsole",0x2c806f0e,"pgr.dconsole.DC.hideConsole","pgr/dconsole/DC.hx",141,0x3000b1f7)
		HX_STACK_LINE(142)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(143)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		tmp->hideConsole();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,hideConsole,(void))

Void DC_obj::showMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","showMonitor",0xa4ee6b76,"pgr.dconsole.DC.showMonitor","pgr/dconsole/DC.hx",148,0x3000b1f7)
		HX_STACK_LINE(149)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(150)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		tmp->showMonitor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,showMonitor,(void))

Void DC_obj::hideMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","hideMonitor",0xc5bebe51,"pgr.dconsole.DC.hideMonitor","pgr/dconsole/DC.hx",156,0x3000b1f7)
		HX_STACK_LINE(157)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(158)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(158)
		tmp->hideMonitor();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,hideMonitor,(void))

Void DC_obj::showProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","showProfiler",0x78e74acd,"pgr.dconsole.DC.showProfiler","pgr/dconsole/DC.hx",163,0x3000b1f7)
		HX_STACK_LINE(164)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(165)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		tmp->showProfiler();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,showProfiler,(void))

Void DC_obj::hideProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","hideProfiler",0x0e5f7792,"pgr.dconsole.DC.hideProfiler","pgr/dconsole/DC.hx",171,0x3000b1f7)
		HX_STACK_LINE(172)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(173)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(173)
		tmp->hideProfiler();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,hideProfiler,(void))

Void DC_obj::enable( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","enable",0xdaa378ca,"pgr.dconsole.DC.enable","pgr/dconsole/DC.hx",178,0x3000b1f7)
		HX_STACK_LINE(179)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(180)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		tmp->enable();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,enable,(void))

Void DC_obj::disable( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","disable",0xa78d9dc1,"pgr.dconsole.DC.disable","pgr/dconsole/DC.hx",185,0x3000b1f7)
		HX_STACK_LINE(186)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(187)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		tmp->disable();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,disable,(void))

Void DC_obj::setConsoleKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setConsoleKey",0x9cf12163,"pgr.dconsole.DC.setConsoleKey","pgr/dconsole/DC.hx",196,0x3000b1f7)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(197)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(198)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		int tmp1 = keyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		bool tmp2 = ctrlKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(198)
		bool tmp3 = shiftKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(198)
		bool tmp4 = altKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(198)
		tmp->setConsoleKey(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DC_obj,setConsoleKey,(void))

Void DC_obj::setMonitorKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setMonitorKey",0x42977e00,"pgr.dconsole.DC.setMonitorKey","pgr/dconsole/DC.hx",207,0x3000b1f7)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(208)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(209)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(209)
		int tmp1 = keyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(209)
		bool tmp2 = ctrlKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(209)
		bool tmp3 = shiftKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(209)
		bool tmp4 = altKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		tmp->setMonitorKey(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DC_obj,setMonitorKey,(void))

Void DC_obj::setProfilerKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DC","setProfilerKey",0x8dcb4abb,"pgr.dconsole.DC.setProfilerKey","pgr/dconsole/DC.hx",218,0x3000b1f7)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(219)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(220)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		int tmp1 = keyCode;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		bool tmp2 = ctrlKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		bool tmp3 = shiftKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(220)
		bool tmp4 = altKey;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(220)
		tmp->setProfilerKey(tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(DC_obj,setProfilerKey,(void))

Void DC_obj::log( Dynamic data,hx::Null< int >  __o_color){
int color = __o_color.Default(-1);
	HX_STACK_FRAME("pgr.dconsole.DC","log",0xdfd867dd,"pgr.dconsole.DC.log","pgr/dconsole/DC.hx",227,0x3000b1f7)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(228)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(229)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(229)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(229)
		int tmp2 = color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		tmp->log(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DC_obj,log,(void))

Void DC_obj::logWarning( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DC","logWarning",0xcebbffff,"pgr.dconsole.DC.logWarning","pgr/dconsole/DC.hx",235,0x3000b1f7)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(236)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(237)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		tmp->logWarning(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,logWarning,(void))

Void DC_obj::logError( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DC","logError",0xd68832ab,"pgr.dconsole.DC.logError","pgr/dconsole/DC.hx",243,0x3000b1f7)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(244)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(245)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		Dynamic tmp2 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		int tmp3 = tmp2->__Field(HX_HCSTRING("LOG_ERR","\xaa","\xda","\x03","\x0f"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		tmp->log(tmp1,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,logError,(void))

Void DC_obj::logConfirmation( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DC","logConfirmation",0x653de132,"pgr.dconsole.DC.logConfirmation","pgr/dconsole/DC.hx",251,0x3000b1f7)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(252)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(253)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(253)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(253)
		tmp->logConfirmation(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,logConfirmation,(void))

Void DC_obj::logInfo( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DC","logInfo",0x61ba7eeb,"pgr.dconsole.DC.logInfo","pgr/dconsole/DC.hx",259,0x3000b1f7)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(260)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(261)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		tmp->logInfo(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,logInfo,(void))

Void DC_obj::monitorField( Dynamic object,::String fieldName,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DC","monitorField",0x7f935547,"pgr.dconsole.DC.monitorField","pgr/dconsole/DC.hx",273,0x3000b1f7)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(fieldName,"fieldName")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(274)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(275)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		::String tmp2 = fieldName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		::String tmp3 = alias;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(275)
		tmp->monitorField(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DC_obj,monitorField,(void))

Void DC_obj::setMonitorRefreshRate( hx::Null< int >  __o_refreshRate){
int refreshRate = __o_refreshRate.Default(100);
	HX_STACK_FRAME("pgr.dconsole.DC","setMonitorRefreshRate",0xd5129fbc,"pgr.dconsole.DC.setMonitorRefreshRate","pgr/dconsole/DC.hx",282,0x3000b1f7)
	HX_STACK_ARG(refreshRate,"refreshRate")
{
		HX_STACK_LINE(283)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(284)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		int tmp1 = refreshRate;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		tmp->monitor->setRefreshRate(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,setMonitorRefreshRate,(void))

Void DC_obj::registerCommand( Dynamic Function,::String alias,::String __o_shortcut,::String __o_description,::String __o_help){
::String shortcut = __o_shortcut.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String description = __o_description.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String help = __o_help.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("pgr.dconsole.DC","registerCommand",0xce440a01,"pgr.dconsole.DC.registerCommand","pgr/dconsole/DC.hx",302,0x3000b1f7)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(alias,"alias")
	HX_STACK_ARG(shortcut,"shortcut")
	HX_STACK_ARG(description,"description")
	HX_STACK_ARG(help,"help")
{
		HX_STACK_LINE(303)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(304)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		::String tmp2 = alias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		::String tmp3 = shortcut;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		::String tmp4 = description;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		::String tmp5 = help;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(304)
		tmp->commands->registerCommand(tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(DC_obj,registerCommand,(void))

Void DC_obj::registerObject( Dynamic object,::String __o_alias){
::String alias = __o_alias.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("pgr.dconsole.DC","registerObject",0xce6aeec9,"pgr.dconsole.DC.registerObject","pgr/dconsole/DC.hx",312,0x3000b1f7)
	HX_STACK_ARG(object,"object")
	HX_STACK_ARG(alias,"alias")
{
		HX_STACK_LINE(313)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(314)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(314)
		Dynamic tmp1 = object;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(314)
		::String tmp2 = alias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		tmp->commands->registerObject(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DC_obj,registerObject,(void))

Void DC_obj::registerClass( ::hx::Class cls,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DC","registerClass",0x5010576e,"pgr.dconsole.DC.registerClass","pgr/dconsole/DC.hx",322,0x3000b1f7)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(323)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(324)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		::hx::Class tmp1 = cls;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		::String tmp2 = alias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		tmp->commands->registerClass(tmp1,tmp2);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DC_obj,registerClass,(void))

Void DC_obj::registerFunction( Dynamic Function,::String alias,::String __o_description){
::String description = __o_description.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("pgr.dconsole.DC","registerFunction",0x0341b1a2,"pgr.dconsole.DC.registerFunction","pgr/dconsole/DC.hx",334,0x3000b1f7)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(alias,"alias")
	HX_STACK_ARG(description,"description")
{
		HX_STACK_LINE(335)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(336)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		Dynamic tmp1 = Function;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(336)
		::String tmp2 = alias;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(336)
		::String tmp3 = description;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(336)
		tmp->commands->registerFunction(tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DC_obj,registerFunction,(void))

Void DC_obj::unregisterFunction( ::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DC","unregisterFunction",0x198ba9bb,"pgr.dconsole.DC.unregisterFunction","pgr/dconsole/DC.hx",342,0x3000b1f7)
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(343)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(344)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(344)
		::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(344)
		tmp->commands->unregisterFunction(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,unregisterFunction,(void))

Void DC_obj::unregisterObject( ::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DC","unregisterObject",0xd8ce7ea2,"pgr.dconsole.DC.unregisterObject","pgr/dconsole/DC.hx",347,0x3000b1f7)
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(348)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(349)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		tmp->commands->unregisterObject(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,unregisterObject,(void))

Void DC_obj::clearConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","clearConsole",0x54d7d6d1,"pgr.dconsole.DC.clearConsole","pgr/dconsole/DC.hx",354,0x3000b1f7)
		HX_STACK_LINE(355)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(356)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		tmp->clearConsole(null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clearConsole,(void))

Void DC_obj::clearRegistry( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","clearRegistry",0x164bd103,"pgr.dconsole.DC.clearRegistry","pgr/dconsole/DC.hx",361,0x3000b1f7)
		HX_STACK_LINE(362)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(363)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(363)
		tmp->commands->clearRegistry();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clearRegistry,(void))

Void DC_obj::clearProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","clearProfiler",0x3282da6f,"pgr.dconsole.DC.clearProfiler","pgr/dconsole/DC.hx",370,0x3000b1f7)
		HX_STACK_LINE(371)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(372)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		tmp->profiler->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clearProfiler,(void))

Void DC_obj::clearMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","clearMonitor",0xee162614,"pgr.dconsole.DC.clearMonitor","pgr/dconsole/DC.hx",378,0x3000b1f7)
		HX_STACK_LINE(379)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(380)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(380)
		tmp->monitor->clear();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,clearMonitor,(void))

Void DC_obj::toFront( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","toFront",0xc9479907,"pgr.dconsole.DC.toFront","pgr/dconsole/DC.hx",387,0x3000b1f7)
		HX_STACK_LINE(388)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(389)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(389)
		tmp->interfc->toFront();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,toFront,(void))

Void DC_obj::beginProfile( ::String sampleName){
{
		HX_STACK_FRAME("pgr.dconsole.DC","beginProfile",0x9acd4787,"pgr.dconsole.DC.beginProfile","pgr/dconsole/DC.hx",396,0x3000b1f7)
		HX_STACK_ARG(sampleName,"sampleName")
		HX_STACK_LINE(397)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(398)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		::String tmp1 = sampleName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(398)
		tmp->profiler->begin(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,beginProfile,(void))

Void DC_obj::endProfile( ::String sampleName){
{
		HX_STACK_FRAME("pgr.dconsole.DC","endProfile",0xf7a76855,"pgr.dconsole.DC.endProfile","pgr/dconsole/DC.hx",404,0x3000b1f7)
		HX_STACK_ARG(sampleName,"sampleName")
		HX_STACK_LINE(405)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(406)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(406)
		::String tmp1 = sampleName;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(406)
		tmp->profiler->end(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,endProfile,(void))

Void DC_obj::setVerboseErrors( bool b){
{
		HX_STACK_FRAME("pgr.dconsole.DC","setVerboseErrors",0xdda6fcd2,"pgr.dconsole.DC.setVerboseErrors","pgr/dconsole/DC.hx",413,0x3000b1f7)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(414)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(415)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(415)
		tmp->commands->printErrorStack = b;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,setVerboseErrors,(void))

Void DC_obj::eval( ::String expr){
{
		HX_STACK_FRAME("pgr.dconsole.DC","eval",0xf8e74623,"pgr.dconsole.DC.eval","pgr/dconsole/DC.hx",422,0x3000b1f7)
		HX_STACK_ARG(expr,"expr")
		HX_STACK_LINE(423)
		::pgr::dconsole::DC_obj::checkInstance();
		HX_STACK_LINE(424)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(424)
		::String tmp1 = expr;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(424)
		tmp->commands->evaluate(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DC_obj,eval,(void))

Void DC_obj::checkInstance( ){
{
		HX_STACK_FRAME("pgr.dconsole.DC","checkInstance",0x548a9916,"pgr.dconsole.DC.checkInstance","pgr/dconsole/DC.hx",430,0x3000b1f7)
		HX_STACK_LINE(431)
		::pgr::dconsole::DConsole tmp = ::pgr::dconsole::DC_obj::instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(431)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(431)
		if ((tmp1)){
			HX_STACK_LINE(432)
			::pgr::dconsole::DC_obj::init(null(),null(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(DC_obj,checkInstance,(void))


DC_obj::DC_obj()
{
}

bool DC_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"eval") ) { outValue = eval_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { outValue = enable_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setFont") ) { outValue = setFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"disable") ) { outValue = disable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"logInfo") ) { outValue = logInfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toFront") ) { outValue = toFront_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"ALIGN_UP") ) { outValue = ALIGN_UP; return true;  }
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance; return true;  }
		if (HX_FIELD_EQ(inName,"logError") ) { outValue = logError_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_DOWN") ) { outValue = ALIGN_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"logWarning") ) { outValue = logWarning_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"endProfile") ) { outValue = endProfile_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showConsole") ) { outValue = showConsole_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hideConsole") ) { outValue = hideConsole_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"showMonitor") ) { outValue = showMonitor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hideMonitor") ) { outValue = hideMonitor_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showProfiler") ) { outValue = showProfiler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hideProfiler") ) { outValue = hideProfiler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"monitorField") ) { outValue = monitorField_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearConsole") ) { outValue = clearConsole_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearMonitor") ) { outValue = clearMonitor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"beginProfile") ) { outValue = beginProfile_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setPromptFont") ) { outValue = setPromptFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setConsoleKey") ) { outValue = setConsoleKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setMonitorKey") ) { outValue = setMonitorKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerClass") ) { outValue = registerClass_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { outValue = clearRegistry_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"clearProfiler") ) { outValue = clearProfiler_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"checkInstance") ) { outValue = checkInstance_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setConsoleFont") ) { outValue = setConsoleFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setMonitorFont") ) { outValue = setMonitorFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setProfilerKey") ) { outValue = setProfilerKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerObject") ) { outValue = registerObject_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"logConfirmation") ) { outValue = logConfirmation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"registerCommand") ) { outValue = registerCommand_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { outValue = registerFunction_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unregisterObject") ) { outValue = unregisterObject_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setVerboseErrors") ) { outValue = setVerboseErrors_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unregisterFunction") ) { outValue = unregisterFunction_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setMonitorRefreshRate") ) { outValue = setMonitorRefreshRate_dyn(); return true;  }
	}
	return false;
}

bool DC_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ALIGN_UP") ) { ALIGN_UP=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast< ::pgr::dconsole::DConsole >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_DOWN") ) { ALIGN_DOWN=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &DC_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsString,(void *) &DC_obj::ALIGN_DOWN,HX_HCSTRING("ALIGN_DOWN","\x7c","\x17","\x80","\x5a")},
	{hx::fsString,(void *) &DC_obj::ALIGN_UP,HX_HCSTRING("ALIGN_UP","\xf5","\xc6","\x85","\x23")},
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(void *) &DC_obj::instance,HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DC_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DC_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(DC_obj::ALIGN_DOWN,"ALIGN_DOWN");
	HX_MARK_MEMBER_NAME(DC_obj::ALIGN_UP,"ALIGN_UP");
	HX_MARK_MEMBER_NAME(DC_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DC_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DC_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(DC_obj::ALIGN_DOWN,"ALIGN_DOWN");
	HX_VISIT_MEMBER_NAME(DC_obj::ALIGN_UP,"ALIGN_UP");
	HX_VISIT_MEMBER_NAME(DC_obj::instance,"instance");
};

#endif

hx::Class DC_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("ALIGN_DOWN","\x7c","\x17","\x80","\x5a"),
	HX_HCSTRING("ALIGN_UP","\xf5","\xc6","\x85","\x23"),
	HX_HCSTRING("instance","\x95","\x1f","\xe1","\x59"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("setConsoleFont","\x44","\xa8","\xdb","\xbf"),
	HX_HCSTRING("setPromptFont","\xd5","\xbb","\x1d","\xf4"),
	HX_HCSTRING("setMonitorFont","\x07","\x55","\xc6","\x0b"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("hideConsole","\xb5","\xda","\x41","\x16"),
	HX_HCSTRING("showMonitor","\x1d","\xd7","\xaf","\x8e"),
	HX_HCSTRING("hideMonitor","\xf8","\x29","\x80","\xaf"),
	HX_HCSTRING("showProfiler","\x46","\x11","\x64","\x18"),
	HX_HCSTRING("hideProfiler","\x0b","\x3e","\xdc","\xad"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("setConsoleKey","\xca","\x04","\xa2","\x8a"),
	HX_HCSTRING("setMonitorKey","\x67","\x61","\x48","\x30"),
	HX_HCSTRING("setProfilerKey","\x74","\x61","\xe1","\x9a"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("logWarning","\x38","\x06","\x80","\x70"),
	HX_HCSTRING("logError","\xa4","\x08","\x30","\x5e"),
	HX_HCSTRING("logConfirmation","\x59","\xac","\x7b","\xcb"),
	HX_HCSTRING("logInfo","\x12","\x4b","\x85","\x6b"),
	HX_HCSTRING("monitorField","\xc0","\x1b","\x10","\x1f"),
	HX_HCSTRING("setMonitorRefreshRate","\x23","\xc2","\xff","\xe1"),
	HX_HCSTRING("registerCommand","\x28","\xd5","\x81","\x34"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("unregisterFunction","\xf4","\x10","\x86","\xbf"),
	HX_HCSTRING("unregisterObject","\x9b","\x75","\xa2","\xe8"),
	HX_HCSTRING("clearConsole","\x4a","\x9d","\x54","\xf4"),
	HX_HCSTRING("clearRegistry","\x6a","\xb4","\xfc","\x03"),
	HX_HCSTRING("clearProfiler","\xd6","\xbd","\x33","\x20"),
	HX_HCSTRING("clearMonitor","\x8d","\xec","\x92","\x8d"),
	HX_HCSTRING("toFront","\x2e","\x65","\x12","\xd3"),
	HX_HCSTRING("beginProfile","\x00","\x0e","\x4a","\x3a"),
	HX_HCSTRING("endProfile","\x8e","\x6e","\x6b","\x99"),
	HX_HCSTRING("setVerboseErrors","\xcb","\xf3","\x7a","\xed"),
	HX_HCSTRING("eval","\x9c","\x6b","\x1c","\x43"),
	HX_HCSTRING("checkInstance","\x7d","\x7c","\x3b","\x42"),
	::String(null()) };

void DC_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DC","\x47","\x93","\xe5","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DC_obj::__GetStatic;
	__mClass->mSetStaticField = &DC_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DC_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void DC_obj::__boot()
{
	VERSION= HX_HCSTRING("5.0.0","\xb9","\x23","\xc9","\xa2");
	ALIGN_DOWN= HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");
	ALIGN_UP= HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
}

} // end namespace pgr
} // end namespace dconsole
