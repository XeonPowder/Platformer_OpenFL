#include <hxcpp.h>

#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCEmtpyInterface
#include <pgr/dconsole/ui/DCEmtpyInterface.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
namespace pgr{
namespace dconsole{
namespace ui{

Void DCEmtpyInterface_obj::__construct()
{
HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","new",0x335ac4c7,"pgr.dconsole.ui.DCEmtpyInterface.new","pgr/dconsole/ui/DCEmtpyInterface.hx",10,0x4c443508)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DCEmtpyInterface_obj::~DCEmtpyInterface_obj() { }

Dynamic DCEmtpyInterface_obj::__CreateEmpty() { return  new DCEmtpyInterface_obj; }
hx::ObjectPtr< DCEmtpyInterface_obj > DCEmtpyInterface_obj::__new()
{  hx::ObjectPtr< DCEmtpyInterface_obj > _result_ = new DCEmtpyInterface_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCEmtpyInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCEmtpyInterface_obj > _result_ = new DCEmtpyInterface_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DCEmtpyInterface_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::pgr::dconsole::ui::DCInterface_obj)) return operator ::pgr::dconsole::ui::DCInterface_obj *();
	return super::__ToInterface(inType);
}

DCEmtpyInterface_obj::operator ::pgr::dconsole::ui::DCInterface_obj *()
	{ return new ::pgr::dconsole::ui::DCInterface_delegate_< DCEmtpyInterface_obj >(this); }
Void DCEmtpyInterface_obj::init( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","init",0xb8ca20c9,"pgr.dconsole.ui.DCEmtpyInterface.init","pgr/dconsole/ui/DCEmtpyInterface.hx",12,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,init,(void))

Void DCEmtpyInterface_obj::showConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","showConsole",0x95adbb41,"pgr.dconsole.ui.DCEmtpyInterface.showConsole","pgr/dconsole/ui/DCEmtpyInterface.hx",14,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,showConsole,(void))

Void DCEmtpyInterface_obj::hideConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","hideConsole",0xb67e0e1c,"pgr.dconsole.ui.DCEmtpyInterface.hideConsole","pgr/dconsole/ui/DCEmtpyInterface.hx",16,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,hideConsole,(void))

Void DCEmtpyInterface_obj::writeMonitorOutput( Array< ::String > output){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","writeMonitorOutput",0xf265c855,"pgr.dconsole.ui.DCEmtpyInterface.writeMonitorOutput","pgr/dconsole/ui/DCEmtpyInterface.hx",18,0x4c443508)
		HX_STACK_THIS(this)
		HX_STACK_ARG(output,"output")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCEmtpyInterface_obj,writeMonitorOutput,(void))

Void DCEmtpyInterface_obj::showMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","showMonitor",0x2eec0a84,"pgr.dconsole.ui.DCEmtpyInterface.showMonitor","pgr/dconsole/ui/DCEmtpyInterface.hx",20,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,showMonitor,(void))

Void DCEmtpyInterface_obj::hideMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","hideMonitor",0x4fbc5d5f,"pgr.dconsole.ui.DCEmtpyInterface.hideMonitor","pgr/dconsole/ui/DCEmtpyInterface.hx",22,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,hideMonitor,(void))

Void DCEmtpyInterface_obj::writeProfilerOutput( ::String output){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","writeProfilerOutput",0x6f671eb0,"pgr.dconsole.ui.DCEmtpyInterface.writeProfilerOutput","pgr/dconsole/ui/DCEmtpyInterface.hx",24,0x4c443508)
		HX_STACK_THIS(this)
		HX_STACK_ARG(output,"output")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCEmtpyInterface_obj,writeProfilerOutput,(void))

Void DCEmtpyInterface_obj::showProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","showProfiler",0xacd4d7ff,"pgr.dconsole.ui.DCEmtpyInterface.showProfiler","pgr/dconsole/ui/DCEmtpyInterface.hx",26,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,showProfiler,(void))

Void DCEmtpyInterface_obj::hideProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","hideProfiler",0x424d04c4,"pgr.dconsole.ui.DCEmtpyInterface.hideProfiler","pgr/dconsole/ui/DCEmtpyInterface.hx",28,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,hideProfiler,(void))

Void DCEmtpyInterface_obj::log( Dynamic data,int color){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","log",0x335948eb,"pgr.dconsole.ui.DCEmtpyInterface.log","pgr/dconsole/ui/DCEmtpyInterface.hx",33,0x4c443508)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(color,"color")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DCEmtpyInterface_obj,log,(void))

Void DCEmtpyInterface_obj::moveCarretToEnd( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","moveCarretToEnd",0x8aa0a369,"pgr.dconsole.ui.DCEmtpyInterface.moveCarretToEnd","pgr/dconsole/ui/DCEmtpyInterface.hx",35,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,moveCarretToEnd,(void))

Void DCEmtpyInterface_obj::scrollConsoleUp( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","scrollConsoleUp",0x7d9b8aac,"pgr.dconsole.ui.DCEmtpyInterface.scrollConsoleUp","pgr/dconsole/ui/DCEmtpyInterface.hx",37,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,scrollConsoleUp,(void))

Void DCEmtpyInterface_obj::scrollConsoleDown( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","scrollConsoleDown",0xb85792f3,"pgr.dconsole.ui.DCEmtpyInterface.scrollConsoleDown","pgr/dconsole/ui/DCEmtpyInterface.hx",39,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,scrollConsoleDown,(void))

Void DCEmtpyInterface_obj::toFront( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","toFront",0x14e91915,"pgr.dconsole.ui.DCEmtpyInterface.toFront","pgr/dconsole/ui/DCEmtpyInterface.hx",44,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,toFront,(void))

Void DCEmtpyInterface_obj::setConsoleFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,hx::Null< bool >  __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
bool italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","setConsoleFont",0xe7164f3d,"pgr.dconsole.ui.DCEmtpyInterface.setConsoleFont","pgr/dconsole/ui/DCEmtpyInterface.hx",46,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCEmtpyInterface_obj,setConsoleFont,(void))

Void DCEmtpyInterface_obj::setPromptFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(16);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","setPromptFont",0x425ad6fc,"pgr.dconsole.ui.DCEmtpyInterface.setPromptFont","pgr/dconsole/ui/DCEmtpyInterface.hx",49,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCEmtpyInterface_obj,setPromptFont,(void))

Void DCEmtpyInterface_obj::setProfilerFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","setProfilerFont",0x1324d341,"pgr.dconsole.ui.DCEmtpyInterface.setProfilerFont","pgr/dconsole/ui/DCEmtpyInterface.hx",51,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCEmtpyInterface_obj,setProfilerFont,(void))

Void DCEmtpyInterface_obj::setMonitorFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","setMonitorFont",0x3300fc00,"pgr.dconsole.ui.DCEmtpyInterface.setMonitorFont","pgr/dconsole/ui/DCEmtpyInterface.hx",53,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCEmtpyInterface_obj,setMonitorFont,(void))

Void DCEmtpyInterface_obj::inputRemoveLastChar( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","inputRemoveLastChar",0x4bfdbcc1,"pgr.dconsole.ui.DCEmtpyInterface.inputRemoveLastChar","pgr/dconsole/ui/DCEmtpyInterface.hx",58,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,inputRemoveLastChar,(void))

::String DCEmtpyInterface_obj::getInputTxt( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","getInputTxt",0x8ce0faa3,"pgr.dconsole.ui.DCEmtpyInterface.getInputTxt","pgr/dconsole/ui/DCEmtpyInterface.hx",60,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,getInputTxt,return )

Void DCEmtpyInterface_obj::setInputTxt( ::String string){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","setInputTxt",0x974e01af,"pgr.dconsole.ui.DCEmtpyInterface.setInputTxt","pgr/dconsole/ui/DCEmtpyInterface.hx",62,0x4c443508)
		HX_STACK_THIS(this)
		HX_STACK_ARG(string,"string")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCEmtpyInterface_obj,setInputTxt,(void))

::String DCEmtpyInterface_obj::getConsoleText( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","getConsoleText",0xd02fd5a7,"pgr.dconsole.ui.DCEmtpyInterface.getConsoleText","pgr/dconsole/ui/DCEmtpyInterface.hx",64,0x4c443508)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,getConsoleText,return )

Dynamic DCEmtpyInterface_obj::getMonitorText( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","getMonitorText",0x1c1a826a,"pgr.dconsole.ui.DCEmtpyInterface.getMonitorText","pgr/dconsole/ui/DCEmtpyInterface.hx",66,0x4c443508)
	HX_STACK_THIS(this)
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/ui/DCEmtpyInterface.hx",66,0x4c443508)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("col1","\xf1","\xb7","\xc4","\x41") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				__result->Add(HX_HCSTRING("col2","\xf2","\xb7","\xc4","\x41") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(66)
	Dynamic tmp = _Function_1_1::Block();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,getMonitorText,return )

Void DCEmtpyInterface_obj::clearInput( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","clearInput",0x84f379b6,"pgr.dconsole.ui.DCEmtpyInterface.clearInput","pgr/dconsole/ui/DCEmtpyInterface.hx",68,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,clearInput,(void))

Void DCEmtpyInterface_obj::clearConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCEmtpyInterface","clearConsole",0x88c56403,"pgr.dconsole.ui.DCEmtpyInterface.clearConsole","pgr/dconsole/ui/DCEmtpyInterface.hx",71,0x4c443508)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmtpyInterface_obj,clearConsole,(void))


DCEmtpyInterface_obj::DCEmtpyInterface_obj()
{
}

void DCEmtpyInterface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCEmtpyInterface);
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_END_CLASS();
}

void DCEmtpyInterface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(console,"console");
}

Dynamic DCEmtpyInterface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"toFront") ) { return toFront_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearInput") ) { return clearInput_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"hideConsole") ) { return hideConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"showMonitor") ) { return showMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMonitor") ) { return hideMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"getInputTxt") ) { return getInputTxt_dyn(); }
		if (HX_FIELD_EQ(inName,"setInputTxt") ) { return setInputTxt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"showProfiler") ) { return showProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"hideProfiler") ) { return hideProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"clearConsole") ) { return clearConsole_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setPromptFont") ) { return setPromptFont_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setConsoleFont") ) { return setConsoleFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setMonitorFont") ) { return setMonitorFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getConsoleText") ) { return getConsoleText_dyn(); }
		if (HX_FIELD_EQ(inName,"getMonitorText") ) { return getMonitorText_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"moveCarretToEnd") ) { return moveCarretToEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollConsoleUp") ) { return scrollConsoleUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setProfilerFont") ) { return setProfilerFont_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scrollConsoleDown") ) { return scrollConsoleDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"writeMonitorOutput") ) { return writeMonitorOutput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"writeProfilerOutput") ) { return writeProfilerOutput_dyn(); }
		if (HX_FIELD_EQ(inName,"inputRemoveLastChar") ) { return inputRemoveLastChar_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCEmtpyInterface_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCEmtpyInterface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCEmtpyInterface_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("hideConsole","\xb5","\xda","\x41","\x16"),
	HX_HCSTRING("writeMonitorOutput","\xdc","\xb0","\x19","\xc3"),
	HX_HCSTRING("showMonitor","\x1d","\xd7","\xaf","\x8e"),
	HX_HCSTRING("hideMonitor","\xf8","\x29","\x80","\xaf"),
	HX_HCSTRING("writeProfilerOutput","\x49","\xac","\x1e","\x3c"),
	HX_HCSTRING("showProfiler","\x46","\x11","\x64","\x18"),
	HX_HCSTRING("hideProfiler","\x0b","\x3e","\xdc","\xad"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("moveCarretToEnd","\x82","\x30","\x89","\x5e"),
	HX_HCSTRING("scrollConsoleUp","\xc5","\x17","\x84","\x51"),
	HX_HCSTRING("scrollConsoleDown","\x4c","\x58","\x50","\xc1"),
	HX_HCSTRING("toFront","\x2e","\x65","\x12","\xd3"),
	HX_HCSTRING("setConsoleFont","\x44","\xa8","\xdb","\xbf"),
	HX_HCSTRING("setPromptFont","\xd5","\xbb","\x1d","\xf4"),
	HX_HCSTRING("setProfilerFont","\x5a","\x60","\x0d","\xe7"),
	HX_HCSTRING("setMonitorFont","\x07","\x55","\xc6","\x0b"),
	HX_HCSTRING("inputRemoveLastChar","\x5a","\x4a","\xb5","\x18"),
	HX_HCSTRING("getInputTxt","\x3c","\xc7","\xa4","\xec"),
	HX_HCSTRING("setInputTxt","\x48","\xce","\x11","\xf7"),
	HX_HCSTRING("getConsoleText","\xae","\x2e","\xf5","\xa8"),
	HX_HCSTRING("getMonitorText","\x71","\xdb","\xdf","\xf4"),
	HX_HCSTRING("clearInput","\x3d","\x03","\x28","\x93"),
	HX_HCSTRING("clearConsole","\x4a","\x9d","\x54","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCEmtpyInterface_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCEmtpyInterface_obj::__mClass,"__mClass");
};

#endif

hx::Class DCEmtpyInterface_obj::__mClass;

void DCEmtpyInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.ui.DCEmtpyInterface","\x55","\x55","\xc1","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCEmtpyInterface_obj >;
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

} // end namespace pgr
} // end namespace dconsole
} // end namespace ui
