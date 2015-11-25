#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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

Void DConsole_obj::__construct(::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc,Dynamic theme)
{
HX_STACK_FRAME("pgr.dconsole.DConsole","new",0x79a71bad,"pgr.dconsole.DConsole.new","pgr/dconsole/DConsole.hx",60,0x90a98c83)
HX_STACK_THIS(this)
HX_STACK_ARG(input,"input")
HX_STACK_ARG(interfc,"interfc")
HX_STACK_ARG(theme,"theme")
{
	HX_STACK_LINE(62)
	bool tmp = (input == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	if ((tmp)){
		HX_STACK_LINE(64)
		::pgr::dconsole::input::DCOpenflInput tmp1 = ::pgr::dconsole::input::DCOpenflInput_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		input = tmp1;
	}
	HX_STACK_LINE(70)
	bool tmp1 = (interfc == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	if ((tmp1)){
		HX_STACK_LINE(72)
		::pgr::dconsole::ui::DCOpenflInterface tmp2 = ::pgr::dconsole::ui::DCOpenflInterface_obj::__new((int)33,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(72)
		interfc = tmp2;
	}
	HX_STACK_LINE(78)
	bool tmp2 = (theme == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	if ((tmp2)){
		HX_STACK_LINE(79)
		Dynamic tmp3 = ::pgr::dconsole::DCThemes_obj::DARK;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		::pgr::dconsole::DCThemes_obj::current = tmp3;
	}
	else{
		HX_STACK_LINE(81)
		::pgr::dconsole::DCThemes_obj::current = theme;
	}
	HX_STACK_LINE(85)
	this->setConsoleKey((int)9,null(),null(),null());
	HX_STACK_LINE(87)
	this->setMonitorKey((int)9,true,null(),null());
	HX_STACK_LINE(89)
	this->setProfilerKey((int)9,false,true,null());
	HX_STACK_LINE(92)
	::pgr::dconsole::DCMonitor tmp3 = ::pgr::dconsole::DCMonitor_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	this->monitor = tmp3;
	HX_STACK_LINE(95)
	::pgr::dconsole::DCProfiler tmp4 = ::pgr::dconsole::DCProfiler_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(95)
	this->profiler = tmp4;
	HX_STACK_LINE(98)
	this->input = input;
	HX_STACK_LINE(99)
	input->__FieldRef(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(100)
	input->init();
	HX_STACK_LINE(103)
	this->interfc = interfc;
	HX_STACK_LINE(104)
	interfc->__FieldRef(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")) = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(105)
	interfc->init();
	HX_STACK_LINE(107)
	::pgr::dconsole::DCCommands tmp5 = ::pgr::dconsole::DCCommands_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(107)
	this->commands = tmp5;
	HX_STACK_LINE(109)
	this->clearHistory();
	HX_STACK_LINE(111)
	this->enable();
	HX_STACK_LINE(112)
	this->hideConsole();
	HX_STACK_LINE(113)
	this->hideMonitor();
	HX_STACK_LINE(114)
	this->hideProfiler();
	HX_STACK_LINE(116)
	::pgr::dconsole::DCCommands tmp6 = this->commands;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(116)
	::pgr::dconsole::DCCommands tmp7 = this->commands;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	Dynamic tmp8 = tmp7->showHelp_dyn();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(116)
	tmp6->registerCommand(tmp8,HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Type HELP [command-name] for more info","\x50","\x2a","\x10","\xbe"),null());
	HX_STACK_LINE(117)
	::pgr::dconsole::DCCommands tmp9 = this->commands;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(117)
	::pgr::dconsole::DCCommands tmp10 = this->commands;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(117)
	Dynamic tmp11 = tmp10->showCommands_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(117)
	tmp9->registerCommand(tmp11,HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Shows available commands","\x29","\x0f","\x9a","\x3c"),HX_HCSTRING("Type HELP [command-name] for more info","\x50","\x2a","\x10","\xbe"));
	HX_STACK_LINE(118)
	::pgr::dconsole::DCCommands tmp12 = this->commands;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(118)
	::pgr::dconsole::DCCommands tmp13 = this->commands;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(118)
	Dynamic tmp14 = tmp13->listFunctions_dyn();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(118)
	tmp12->registerCommand(tmp14,HX_HCSTRING("functions","\x5b","\x0a","\x03","\xb4"),HX_HCSTRING("funcs","\xaf","\xf0","\x88","\x08"),HX_HCSTRING("Lists registered functions","\x08","\xaa","\x44","\x54"),HX_HCSTRING("To call a function type functionName( args ), make sure the args type and number are correct","\xea","\xe0","\xa5","\xea"));
	HX_STACK_LINE(119)
	::pgr::dconsole::DCCommands tmp15 = this->commands;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(119)
	::pgr::dconsole::DCCommands tmp16 = this->commands;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(119)
	Dynamic tmp17 = tmp16->listObjects_dyn();		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(119)
	tmp15->registerCommand(tmp17,HX_HCSTRING("objects","\xd4","\x68","\x4f","\x82"),HX_HCSTRING("objs","\x9c","\x68","\xa9","\x49"),HX_HCSTRING("Lists registered objects","\x41","\xd3","\xcf","\xf1"),HX_HCSTRING("To print an object field type object.field\nTo set and object field type object.field = value","\xdf","\x42","\xd1","\x96"));
	HX_STACK_LINE(120)
	::pgr::dconsole::DCCommands tmp18 = this->commands;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(120)
	::pgr::dconsole::DCCommands tmp19 = this->commands;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(120)
	Dynamic tmp20 = tmp19->listClasses_dyn();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(120)
	tmp18->registerCommand(tmp20,HX_HCSTRING("classes","\xa6","\x4e","\x91","\x69"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Lists registered classes","\x13","\xb9","\x11","\xd9"),HX_HCSTRING("Registered classes can access their static fields and methods, eg: Math.abs(value), or Math.PI","\x14","\x25","\x7d","\x6f"));
	HX_STACK_LINE(121)
	::pgr::dconsole::DCCommands tmp21 = this->commands;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(121)
	Dynamic tmp22 = this->clearConsole_dyn();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(121)
	tmp21->registerCommand(tmp22,HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Clears console view","\xc8","\x25","\x04","\xe1"),null());
	HX_STACK_LINE(122)
	::pgr::dconsole::DCCommands tmp23 = this->commands;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(122)
	Dynamic tmp24 = this->toggleMonitor_dyn();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(122)
	tmp23->registerCommand(tmp24,HX_HCSTRING("monitor","\x9a","\x3a","\x14","\xb2"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Toggles monitor on and off","\xac","\x16","\x9c","\x29"),HX_HCSTRING("Monitor is used to track variable values in runtime\nCONTROL + CONSOLE_KEY (default TAB) also toggles monitor","\x52","\xdb","\x6e","\xe9"));
	HX_STACK_LINE(123)
	::pgr::dconsole::DCCommands tmp25 = this->commands;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(123)
	Dynamic tmp26 = this->toggleProfiler_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(123)
	tmp25->registerCommand(tmp26,HX_HCSTRING("profiler","\x29","\xbb","\xd6","\xec"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("Toggles profiler on and off","\xdb","\x68","\xd0","\x19"),HX_HCSTRING("Profiler is used to profile app and view statistics like time elapsed and percentage in runtime\nSHIFT + CONSOLE_KEY (default TAB) also toggles profiler","\x02","\x51","\x65","\xe1"));
}
;
	return null();
}

//DConsole_obj::~DConsole_obj() { }

Dynamic DConsole_obj::__CreateEmpty() { return  new DConsole_obj; }
hx::ObjectPtr< DConsole_obj > DConsole_obj::__new(::pgr::dconsole::input::DCInput input,::pgr::dconsole::ui::DCInterface interfc,Dynamic theme)
{  hx::ObjectPtr< DConsole_obj > _result_ = new DConsole_obj();
	_result_->__construct(input,interfc,theme);
	return _result_;}

Dynamic DConsole_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DConsole_obj > _result_ = new DConsole_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void DConsole_obj::showConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","showConsole",0xa6246827,"pgr.dconsole.DConsole.showConsole","pgr/dconsole/DConsole.hx",127,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(128)
		this->visible = true;
		HX_STACK_LINE(129)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		if ((tmp1)){
			HX_STACK_LINE(130)
			return null();
		}
		HX_STACK_LINE(132)
		::pgr::dconsole::ui::DCInterface tmp2 = this->interfc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		tmp2->showConsole();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,showConsole,(void))

Void DConsole_obj::hideConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","hideConsole",0xc6f4bb02,"pgr.dconsole.DConsole.hideConsole","pgr/dconsole/DConsole.hx",135,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(136)
		this->visible = false;
		HX_STACK_LINE(137)
		bool tmp = this->enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(137)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(137)
		if ((tmp1)){
			HX_STACK_LINE(138)
			return null();
		}
		HX_STACK_LINE(140)
		::pgr::dconsole::ui::DCInterface tmp2 = this->interfc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		tmp2->hideConsole();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,hideConsole,(void))

Void DConsole_obj::enable( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","enable",0x9afab156,"pgr.dconsole.DConsole.enable","pgr/dconsole/DConsole.hx",144,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(145)
		this->enabled = true;
		HX_STACK_LINE(146)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(146)
		if ((tmp)){
			HX_STACK_LINE(147)
			::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			tmp1->showConsole();
		}
		HX_STACK_LINE(149)
		::pgr::dconsole::DCMonitor tmp1 = this->monitor;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		bool tmp2 = tmp1->visible;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		if ((tmp2)){
			HX_STACK_LINE(150)
			::pgr::dconsole::ui::DCInterface tmp3 = this->interfc;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(150)
			tmp3->showMonitor();
		}
		HX_STACK_LINE(152)
		::pgr::dconsole::DCProfiler tmp3 = this->profiler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		bool tmp4 = tmp3->visible;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		if ((tmp4)){
			HX_STACK_LINE(153)
			::pgr::dconsole::ui::DCInterface tmp5 = this->interfc;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			tmp5->showProfiler();
		}
		HX_STACK_LINE(155)
		::pgr::dconsole::input::DCInput tmp5 = this->input;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		tmp5->enable();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,enable,(void))

Void DConsole_obj::disable( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","disable",0x3387dfb5,"pgr.dconsole.DConsole.disable","pgr/dconsole/DConsole.hx",159,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(160)
		this->enabled = false;
		HX_STACK_LINE(161)
		::pgr::dconsole::ui::DCInterface tmp = this->interfc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		tmp->hideConsole();
		HX_STACK_LINE(162)
		::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(162)
		tmp1->hideMonitor();
		HX_STACK_LINE(163)
		::pgr::dconsole::ui::DCInterface tmp2 = this->interfc;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		tmp2->hideProfiler();
		HX_STACK_LINE(164)
		::pgr::dconsole::input::DCInput tmp3 = this->input;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		tmp3->disable();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,disable,(void))

Void DConsole_obj::setConsoleKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DConsole","setConsoleKey",0xf6075257,"pgr.dconsole.DConsole.setConsoleKey","pgr/dconsole/DConsole.hx",167,0x90a98c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(168)
		int tmp = keyCode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = ctrlKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		bool tmp2 = shiftKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		bool tmp3 = altKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(168)
		Dynamic tmp4 = this->makeShorcutKey(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(168)
		this->consoleKey = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DConsole_obj,setConsoleKey,(void))

Void DConsole_obj::setMonitorKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DConsole","setMonitorKey",0x9badaef4,"pgr.dconsole.DConsole.setMonitorKey","pgr/dconsole/DConsole.hx",171,0x90a98c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(172)
		int tmp = keyCode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(172)
		bool tmp1 = ctrlKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(172)
		bool tmp2 = shiftKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3 = altKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		Dynamic tmp4 = this->makeShorcutKey(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		this->monitorKey = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DConsole_obj,setMonitorKey,(void))

Void DConsole_obj::setProfilerKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DConsole","setProfilerKey",0x281fef47,"pgr.dconsole.DConsole.setProfilerKey","pgr/dconsole/DConsole.hx",175,0x90a98c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		HX_STACK_LINE(176)
		int tmp = keyCode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		bool tmp1 = ctrlKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(176)
		bool tmp2 = shiftKey;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		bool tmp3 = altKey;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		Dynamic tmp4 = this->makeShorcutKey(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		this->profilerKey = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(DConsole_obj,setProfilerKey,(void))

Dynamic DConsole_obj::makeShorcutKey( int keyCode,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_altKey){
bool ctrlKey = __o_ctrlKey.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
bool altKey = __o_altKey.Default(false);
	HX_STACK_FRAME("pgr.dconsole.DConsole","makeShorcutKey",0xcd803996,"pgr.dconsole.DConsole.makeShorcutKey","pgr/dconsole/DConsole.hx",179,0x90a98c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(keyCode,"keyCode")
	HX_STACK_ARG(ctrlKey,"ctrlKey")
	HX_STACK_ARG(shiftKey,"shiftKey")
	HX_STACK_ARG(altKey,"altKey")
{
		struct _Function_1_1{
			inline static Dynamic Block( bool &altKey,bool &ctrlKey,int &keyCode,bool &shiftKey){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DConsole.hx",180,0x90a98c83)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44") , altKey,false);
					__result->Add(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61") , ctrlKey,false);
					__result->Add(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99") , shiftKey,false);
					__result->Add(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0") , keyCode,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(180)
		Dynamic tmp = _Function_1_1::Block(altKey,ctrlKey,keyCode,shiftKey);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		return tmp;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(DConsole_obj,makeShorcutKey,return )

Void DConsole_obj::log( Dynamic data,hx::Null< int >  __o_color){
int color = __o_color.Default(-1);
	HX_STACK_FRAME("pgr.dconsole.DConsole","log",0x79a59fd1,"pgr.dconsole.DConsole.log","pgr/dconsole/DConsole.hx",189,0x90a98c83)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(color,"color")
{
		HX_STACK_LINE(191)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		bool tmp1 = ::Std_obj::is(tmp,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp4)){
			HX_STACK_LINE(191)
			Dynamic tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(191)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(191)
			bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::Bool >());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(191)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(191)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(191)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(191)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(191)
			tmp5 = !(tmp13);
		}
		else{
			HX_STACK_LINE(191)
			tmp5 = false;
		}
		HX_STACK_LINE(191)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(191)
		if ((tmp5)){
			HX_STACK_LINE(191)
			tmp6 = (data == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(191)
			tmp6 = false;
		}
		HX_STACK_LINE(191)
		if ((tmp6)){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(195)
		::pgr::dconsole::ui::DCInterface tmp7 = this->interfc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(195)
		Dynamic tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(195)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(195)
		tmp7->log(tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DConsole_obj,log,(void))

Void DConsole_obj::logConfirmation( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","logConfirmation",0xd4f93726,"pgr.dconsole.DConsole.logConfirmation","pgr/dconsole/DConsole.hx",211,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(212)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(212)
		Dynamic tmp1 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(212)
		int tmp2 = tmp1->__Field(HX_HCSTRING("LOG_CON","\x87","\x53","\x02","\x0f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(212)
		this->log(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,logConfirmation,(void))

Void DConsole_obj::logInfo( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","logInfo",0xedb4c0df,"pgr.dconsole.DConsole.logInfo","pgr/dconsole/DConsole.hx",215,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(216)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		Dynamic tmp1 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		int tmp2 = tmp1->__Field(HX_HCSTRING("LOG_INF","\x26","\xe0","\x06","\x0f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		this->log(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,logInfo,(void))

Void DConsole_obj::logError( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","logError",0xc587a637,"pgr.dconsole.DConsole.logError","pgr/dconsole/DConsole.hx",219,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(220)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		Dynamic tmp1 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(220)
		int tmp2 = tmp1->__Field(HX_HCSTRING("LOG_ERR","\xaa","\xda","\x03","\x0f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(220)
		this->log(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,logError,(void))

Void DConsole_obj::logWarning( Dynamic data){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","logWarning",0x13286e8b,"pgr.dconsole.DConsole.logWarning","pgr/dconsole/DConsole.hx",223,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(224)
		Dynamic tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(224)
		Dynamic tmp1 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		int tmp2 = tmp1->__Field(HX_HCSTRING("LOG_WAR","\x6d","\x74","\x11","\x0f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(224)
		this->log(tmp,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,logWarning,(void))

Void DConsole_obj::clearConsole( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","clearConsole",0xe026005d,"pgr.dconsole.DConsole.clearConsole","pgr/dconsole/DConsole.hx",230,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(231)
		::pgr::dconsole::ui::DCInterface tmp = this->interfc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(231)
		tmp->clearConsole();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,clearConsole,(void))

Void DConsole_obj::clearHistory( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","clearHistory",0x2b974a5a,"pgr.dconsole.DConsole.clearHistory","pgr/dconsole/DConsole.hx",234,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_historyArray = Array_obj< ::String >::__new();
		HX_STACK_LINE(236)
		this->_historyIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,clearHistory,(void))

Void DConsole_obj::monitorField( Dynamic object,::String fieldName,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","monitorField",0x0ae17ed3,"pgr.dconsole.DConsole.monitorField","pgr/dconsole/DConsole.hx",240,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(fieldName,"fieldName")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(242)
		bool tmp = (fieldName == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(242)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(242)
		if ((tmp1)){
			HX_STACK_LINE(242)
			tmp2 = (fieldName == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(242)
			tmp2 = true;
		}
		HX_STACK_LINE(242)
		if ((tmp2)){
			HX_STACK_LINE(243)
			this->logError(HX_HCSTRING("invalid fieldName","\xbc","\xe9","\x92","\x61"));
			HX_STACK_LINE(244)
			return null();
		}
		HX_STACK_LINE(247)
		bool tmp3 = (alias == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(247)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(247)
		if ((tmp4)){
			HX_STACK_LINE(247)
			tmp5 = (alias == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(247)
			tmp5 = true;
		}
		HX_STACK_LINE(247)
		if ((tmp5)){
			HX_STACK_LINE(248)
			this->logError(HX_HCSTRING("invalid alias","\xa7","\xcb","\xd9","\xbd"));
			HX_STACK_LINE(249)
			return null();
		}
		HX_STACK_LINE(252)
		bool tmp6 = (object == null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(252)
		if ((tmp7)){
			HX_STACK_LINE(252)
			Dynamic tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(252)
			Dynamic tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(252)
			bool tmp11 = ::Reflect_obj::isObject(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(252)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(252)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(252)
			tmp8 = !(tmp13);
		}
		else{
			HX_STACK_LINE(252)
			tmp8 = true;
		}
		HX_STACK_LINE(252)
		if ((tmp8)){
			HX_STACK_LINE(253)
			this->logError(HX_HCSTRING("invalid object.","\x66","\xd6","\x3b","\x1d"));
			HX_STACK_LINE(254)
			return null();
		}
		HX_STACK_LINE(257)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(258)
			Dynamic tmp9 = object;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(258)
			::String tmp10 = fieldName;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(258)
			::Reflect_obj::getProperty(tmp9,tmp10);
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(260)
					::String tmp9 = (HX_HCSTRING("could not find field: ","\x25","\x52","\x4d","\xc3") + fieldName);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(260)
					this->logError(tmp9);
					HX_STACK_LINE(261)
					return null();
				}
			}
		}
		HX_STACK_LINE(264)
		::pgr::dconsole::DCMonitor tmp9 = this->monitor;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(264)
		Dynamic tmp10 = object;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(264)
		::String tmp11 = fieldName;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(264)
		::String tmp12 = alias;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(264)
		tmp9->addField(tmp10,tmp11,tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DConsole_obj,monitorField,(void))

Void DConsole_obj::toggleMonitor( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","toggleMonitor",0xce36caf3,"pgr.dconsole.DConsole.toggleMonitor","pgr/dconsole/DConsole.hx",268,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(269)
		::pgr::dconsole::DCMonitor tmp = this->monitor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(269)
		if ((tmp1)){
			HX_STACK_LINE(270)
			this->hideMonitor();
		}
		else{
			HX_STACK_LINE(272)
			this->showMonitor();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,toggleMonitor,(void))

Void DConsole_obj::showMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","showMonitor",0x3f62b76a,"pgr.dconsole.DConsole.showMonitor","pgr/dconsole/DConsole.hx",276,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(277)
		this->hideProfiler();
		HX_STACK_LINE(278)
		::pgr::dconsole::DCMonitor tmp = this->monitor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		tmp->show();
		HX_STACK_LINE(279)
		::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(279)
		tmp1->showMonitor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,showMonitor,(void))

Void DConsole_obj::hideMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","hideMonitor",0x60330a45,"pgr.dconsole.DConsole.hideMonitor","pgr/dconsole/DConsole.hx",282,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(283)
		::pgr::dconsole::DCMonitor tmp = this->monitor;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(283)
		tmp->hide();
		HX_STACK_LINE(284)
		::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(284)
		tmp1->hideMonitor();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,hideMonitor,(void))

Void DConsole_obj::toggleProfiler( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","toggleProfiler",0x6ef278b0,"pgr.dconsole.DConsole.toggleProfiler","pgr/dconsole/DConsole.hx",288,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(289)
		::pgr::dconsole::DCProfiler tmp = this->profiler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		bool tmp1 = tmp->visible;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		if ((tmp1)){
			HX_STACK_LINE(290)
			this->hideProfiler();
		}
		else{
			HX_STACK_LINE(292)
			this->showProfiler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DConsole_obj,toggleProfiler,(void))

Void DConsole_obj::showProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","showProfiler",0x04357459,"pgr.dconsole.DConsole.showProfiler","pgr/dconsole/DConsole.hx",296,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		this->hideMonitor();
		HX_STACK_LINE(298)
		::pgr::dconsole::DCProfiler tmp = this->profiler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		tmp->show();
		HX_STACK_LINE(299)
		::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(299)
		tmp1->showProfiler();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,showProfiler,(void))

Void DConsole_obj::hideProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","hideProfiler",0x99ada11e,"pgr.dconsole.DConsole.hideProfiler","pgr/dconsole/DConsole.hx",302,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(303)
		::pgr::dconsole::DCProfiler tmp = this->profiler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(303)
		tmp->hide();
		HX_STACK_LINE(304)
		::pgr::dconsole::ui::DCInterface tmp1 = this->interfc;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		tmp1->hideProfiler();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,hideProfiler,(void))

Void DConsole_obj::prevHistory( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","prevHistory",0x7b4292ee,"pgr.dconsole.DConsole.prevHistory","pgr/dconsole/DConsole.hx",307,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(308)
		(this->_historyIndex)--;
		HX_STACK_LINE(310)
		int tmp = this->_historyIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(310)
		bool tmp1 = (tmp < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		if ((tmp1)){
			HX_STACK_LINE(311)
			this->_historyIndex = (int)0;
		}
		HX_STACK_LINE(314)
		int tmp2 = this->_historyIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(314)
		int tmp3 = this->_historyArray->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(314)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(314)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(314)
		if ((tmp5)){
			HX_STACK_LINE(315)
			return null();
		}
		HX_STACK_LINE(318)
		::pgr::dconsole::ui::DCInterface tmp6 = this->interfc;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(318)
		int tmp7 = this->_historyIndex;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		::String tmp8 = this->_historyArray->__get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		tmp6->setInputTxt(tmp8);
		HX_STACK_LINE(319)
		::pgr::dconsole::ui::DCInterface tmp9 = this->interfc;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		tmp9->moveCarretToEnd();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,prevHistory,(void))

Void DConsole_obj::nextHistory( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","nextHistory",0xeb438cee,"pgr.dconsole.DConsole.nextHistory","pgr/dconsole/DConsole.hx",322,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(324)
		int tmp = this->_historyIndex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(324)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(324)
		int tmp2 = this->_historyArray->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(324)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(324)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		if ((tmp4)){
			HX_STACK_LINE(325)
			return null();
		}
		HX_STACK_LINE(328)
		(this->_historyIndex)++;
		HX_STACK_LINE(330)
		::pgr::dconsole::ui::DCInterface tmp5 = this->interfc;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(330)
		int tmp6 = this->_historyIndex;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(330)
		::String tmp7 = this->_historyArray->__get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(330)
		tmp5->setInputTxt(tmp7);
		HX_STACK_LINE(331)
		::pgr::dconsole::ui::DCInterface tmp8 = this->interfc;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(331)
		tmp8->moveCarretToEnd();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,nextHistory,(void))

Void DConsole_obj::processInputLine( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","processInputLine",0x0aa7b542,"pgr.dconsole.DConsole.processInputLine","pgr/dconsole/DConsole.hx",335,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(337)
		::pgr::dconsole::ui::DCInterface tmp = this->interfc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		::String tmp1 = tmp->getInputTxt();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::String currText = tmp1;		HX_STACK_VAR(currText,"currText");
		HX_STACK_LINE(339)
		bool tmp2 = (currText == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(339)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(339)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(339)
		if ((tmp3)){
			HX_STACK_LINE(339)
			tmp4 = (currText == null());
		}
		else{
			HX_STACK_LINE(339)
			tmp4 = true;
		}
		HX_STACK_LINE(339)
		if ((tmp4)){
			HX_STACK_LINE(340)
			return null();
		}
		HX_STACK_LINE(344)
		::String tmp5 = currText;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(344)
		this->_historyArray->insert((int)0,tmp5);
		HX_STACK_LINE(345)
		this->resetHistoryIndex();
		HX_STACK_LINE(348)
		::String tmp6 = (HX_HCSTRING("> ","\x22","\x36","\x00","\x00") + currText);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(348)
		this->log(tmp6,null());
		HX_STACK_LINE(349)
		::pgr::dconsole::ui::DCInterface tmp7 = this->interfc;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(349)
		tmp7->clearInput();
		HX_STACK_LINE(351)
		::pgr::dconsole::DCCommands tmp8 = this->commands;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(351)
		::String tmp9 = currText;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(351)
		tmp8->evaluate(tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,processInputLine,(void))

Void DConsole_obj::resetHistoryIndex( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","resetHistoryIndex",0x1d0e2d9a,"pgr.dconsole.DConsole.resetHistoryIndex","pgr/dconsole/DConsole.hx",356,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		this->_historyIndex = (int)-1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,resetHistoryIndex,(void))

Void DConsole_obj::scrollDown( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","scrollDown",0xa2d5ef62,"pgr.dconsole.DConsole.scrollDown","pgr/dconsole/DConsole.hx",359,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(360)
		::pgr::dconsole::ui::DCInterface tmp = this->interfc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(360)
		tmp->scrollConsoleDown();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,scrollDown,(void))

Void DConsole_obj::scrollUp( ){
{
		HX_STACK_FRAME("pgr.dconsole.DConsole","scrollUp",0xf3ac9d5b,"pgr.dconsole.DConsole.scrollUp","pgr/dconsole/DConsole.hx",363,0x90a98c83)
		HX_STACK_THIS(this)
		HX_STACK_LINE(364)
		::pgr::dconsole::ui::DCInterface tmp = this->interfc;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(364)
		tmp->scrollConsoleUp();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DConsole_obj,scrollUp,(void))

::String DConsole_obj::ALIGN_DOWN;

::String DConsole_obj::ALIGN_UP;


DConsole_obj::DConsole_obj()
{
}

void DConsole_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DConsole);
	HX_MARK_MEMBER_NAME(_historyArray,"_historyArray");
	HX_MARK_MEMBER_NAME(_historyIndex,"_historyIndex");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(interfc,"interfc");
	HX_MARK_MEMBER_NAME(monitor,"monitor");
	HX_MARK_MEMBER_NAME(profiler,"profiler");
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(consoleKey,"consoleKey");
	HX_MARK_MEMBER_NAME(monitorKey,"monitorKey");
	HX_MARK_MEMBER_NAME(profilerKey,"profilerKey");
	HX_MARK_MEMBER_NAME(enabled,"enabled");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_END_CLASS();
}

void DConsole_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_historyArray,"_historyArray");
	HX_VISIT_MEMBER_NAME(_historyIndex,"_historyIndex");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(interfc,"interfc");
	HX_VISIT_MEMBER_NAME(monitor,"monitor");
	HX_VISIT_MEMBER_NAME(profiler,"profiler");
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(consoleKey,"consoleKey");
	HX_VISIT_MEMBER_NAME(monitorKey,"monitorKey");
	HX_VISIT_MEMBER_NAME(profilerKey,"profilerKey");
	HX_VISIT_MEMBER_NAME(enabled,"enabled");
	HX_VISIT_MEMBER_NAME(visible,"visible");
}

Dynamic DConsole_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"interfc") ) { return interfc; }
		if (HX_FIELD_EQ(inName,"monitor") ) { return monitor; }
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"logInfo") ) { return logInfo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"profiler") ) { return profiler; }
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		if (HX_FIELD_EQ(inName,"logError") ) { return logError_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollUp") ) { return scrollUp_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"consoleKey") ) { return consoleKey; }
		if (HX_FIELD_EQ(inName,"monitorKey") ) { return monitorKey; }
		if (HX_FIELD_EQ(inName,"logWarning") ) { return logWarning_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollDown") ) { return scrollDown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"profilerKey") ) { return profilerKey; }
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"hideConsole") ) { return hideConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"showMonitor") ) { return showMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMonitor") ) { return hideMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"prevHistory") ) { return prevHistory_dyn(); }
		if (HX_FIELD_EQ(inName,"nextHistory") ) { return nextHistory_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearConsole") ) { return clearConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"clearHistory") ) { return clearHistory_dyn(); }
		if (HX_FIELD_EQ(inName,"monitorField") ) { return monitorField_dyn(); }
		if (HX_FIELD_EQ(inName,"showProfiler") ) { return showProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"hideProfiler") ) { return hideProfiler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_historyArray") ) { return _historyArray; }
		if (HX_FIELD_EQ(inName,"_historyIndex") ) { return _historyIndex; }
		if (HX_FIELD_EQ(inName,"setConsoleKey") ) { return setConsoleKey_dyn(); }
		if (HX_FIELD_EQ(inName,"setMonitorKey") ) { return setMonitorKey_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleMonitor") ) { return toggleMonitor_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setProfilerKey") ) { return setProfilerKey_dyn(); }
		if (HX_FIELD_EQ(inName,"makeShorcutKey") ) { return makeShorcutKey_dyn(); }
		if (HX_FIELD_EQ(inName,"toggleProfiler") ) { return toggleProfiler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"logConfirmation") ) { return logConfirmation_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"processInputLine") ) { return processInputLine_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"resetHistoryIndex") ) { return resetHistoryIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DConsole_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ALIGN_UP") ) { outValue = ALIGN_UP; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_DOWN") ) { outValue = ALIGN_DOWN; return true;  }
	}
	return false;
}

Dynamic DConsole_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::pgr::dconsole::input::DCInput >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"interfc") ) { interfc=inValue.Cast< ::pgr::dconsole::ui::DCInterface >(); return inValue; }
		if (HX_FIELD_EQ(inName,"monitor") ) { monitor=inValue.Cast< ::pgr::dconsole::DCMonitor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"profiler") ) { profiler=inValue.Cast< ::pgr::dconsole::DCProfiler >(); return inValue; }
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::pgr::dconsole::DCCommands >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"consoleKey") ) { consoleKey=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"monitorKey") ) { monitorKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"profilerKey") ) { profilerKey=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_historyArray") ) { _historyArray=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_historyIndex") ) { _historyIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DConsole_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ALIGN_UP") ) { ALIGN_UP=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALIGN_DOWN") ) { ALIGN_DOWN=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void DConsole_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_historyArray","\x84","\x6a","\x9e","\xd5"));
	outFields->push(HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("interfc","\x59","\x17","\x24","\x17"));
	outFields->push(HX_HCSTRING("monitor","\x9a","\x3a","\x14","\xb2"));
	outFields->push(HX_HCSTRING("profiler","\x29","\xbb","\xd6","\xec"));
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("consoleKey","\x88","\xc6","\x29","\xe9"));
	outFields->push(HX_HCSTRING("monitorKey","\x25","\x23","\xd0","\x8e"));
	outFields->push(HX_HCSTRING("profilerKey","\xf6","\x25","\x23","\xf3"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(DConsole_obj,_historyArray),HX_HCSTRING("_historyArray","\x84","\x6a","\x9e","\xd5")},
	{hx::fsInt,(int)offsetof(DConsole_obj,_historyIndex),HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e")},
	{hx::fsObject /*::pgr::dconsole::input::DCInput*/ ,(int)offsetof(DConsole_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsObject /*::pgr::dconsole::ui::DCInterface*/ ,(int)offsetof(DConsole_obj,interfc),HX_HCSTRING("interfc","\x59","\x17","\x24","\x17")},
	{hx::fsObject /*::pgr::dconsole::DCMonitor*/ ,(int)offsetof(DConsole_obj,monitor),HX_HCSTRING("monitor","\x9a","\x3a","\x14","\xb2")},
	{hx::fsObject /*::pgr::dconsole::DCProfiler*/ ,(int)offsetof(DConsole_obj,profiler),HX_HCSTRING("profiler","\x29","\xbb","\xd6","\xec")},
	{hx::fsObject /*::pgr::dconsole::DCCommands*/ ,(int)offsetof(DConsole_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DConsole_obj,consoleKey),HX_HCSTRING("consoleKey","\x88","\xc6","\x29","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DConsole_obj,monitorKey),HX_HCSTRING("monitorKey","\x25","\x23","\xd0","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DConsole_obj,profilerKey),HX_HCSTRING("profilerKey","\xf6","\x25","\x23","\xf3")},
	{hx::fsBool,(int)offsetof(DConsole_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsBool,(int)offsetof(DConsole_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &DConsole_obj::ALIGN_DOWN,HX_HCSTRING("ALIGN_DOWN","\x7c","\x17","\x80","\x5a")},
	{hx::fsString,(void *) &DConsole_obj::ALIGN_UP,HX_HCSTRING("ALIGN_UP","\xf5","\xc6","\x85","\x23")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_historyArray","\x84","\x6a","\x9e","\xd5"),
	HX_HCSTRING("_historyIndex","\xfd","\x97","\x23","\x6e"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("interfc","\x59","\x17","\x24","\x17"),
	HX_HCSTRING("monitor","\x9a","\x3a","\x14","\xb2"),
	HX_HCSTRING("profiler","\x29","\xbb","\xd6","\xec"),
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("consoleKey","\x88","\xc6","\x29","\xe9"),
	HX_HCSTRING("monitorKey","\x25","\x23","\xd0","\x8e"),
	HX_HCSTRING("profilerKey","\xf6","\x25","\x23","\xf3"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("hideConsole","\xb5","\xda","\x41","\x16"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("setConsoleKey","\xca","\x04","\xa2","\x8a"),
	HX_HCSTRING("setMonitorKey","\x67","\x61","\x48","\x30"),
	HX_HCSTRING("setProfilerKey","\x74","\x61","\xe1","\x9a"),
	HX_HCSTRING("makeShorcutKey","\xc3","\xab","\x41","\x40"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("logConfirmation","\x59","\xac","\x7b","\xcb"),
	HX_HCSTRING("logInfo","\x12","\x4b","\x85","\x6b"),
	HX_HCSTRING("logError","\xa4","\x08","\x30","\x5e"),
	HX_HCSTRING("logWarning","\x38","\x06","\x80","\x70"),
	HX_HCSTRING("clearConsole","\x4a","\x9d","\x54","\xf4"),
	HX_HCSTRING("clearHistory","\x47","\xe7","\xc5","\x3f"),
	HX_HCSTRING("monitorField","\xc0","\x1b","\x10","\x1f"),
	HX_HCSTRING("toggleMonitor","\x66","\x7d","\xd1","\x62"),
	HX_HCSTRING("showMonitor","\x1d","\xd7","\xaf","\x8e"),
	HX_HCSTRING("hideMonitor","\xf8","\x29","\x80","\xaf"),
	HX_HCSTRING("toggleProfiler","\xdd","\xea","\xb3","\xe1"),
	HX_HCSTRING("showProfiler","\x46","\x11","\x64","\x18"),
	HX_HCSTRING("hideProfiler","\x0b","\x3e","\xdc","\xad"),
	HX_HCSTRING("prevHistory","\xa1","\xb2","\x8f","\xca"),
	HX_HCSTRING("nextHistory","\xa1","\xac","\x90","\x3a"),
	HX_HCSTRING("processInputLine","\xaf","\xcc","\x4b","\xc6"),
	HX_HCSTRING("resetHistoryIndex","\x8d","\x95","\xfe","\x90"),
	HX_HCSTRING("scrollDown","\x0f","\x87","\x2d","\x00"),
	HX_HCSTRING("scrollUp","\xc8","\xff","\x54","\x8c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DConsole_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DConsole_obj::ALIGN_DOWN,"ALIGN_DOWN");
	HX_MARK_MEMBER_NAME(DConsole_obj::ALIGN_UP,"ALIGN_UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DConsole_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DConsole_obj::ALIGN_DOWN,"ALIGN_DOWN");
	HX_VISIT_MEMBER_NAME(DConsole_obj::ALIGN_UP,"ALIGN_UP");
};

#endif

hx::Class DConsole_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ALIGN_DOWN","\x7c","\x17","\x80","\x5a"),
	HX_HCSTRING("ALIGN_UP","\xf5","\xc6","\x85","\x23"),
	::String(null()) };

void DConsole_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DConsole","\x3b","\xc1","\x52","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DConsole_obj::__GetStatic;
	__mClass->mSetStaticField = &DConsole_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DConsole_obj >;
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

void DConsole_obj::__boot()
{
	ALIGN_DOWN= HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d");
	ALIGN_UP= HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00");
}

} // end namespace pgr
} // end namespace dconsole
