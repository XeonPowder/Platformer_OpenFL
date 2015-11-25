#include <hxcpp.h>

#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
namespace pgr{
namespace dconsole{
namespace ui{


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
	HX_MARK_MEMBER_NAME(DCInterface_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCInterface_obj::__mClass,"__mClass");
};

#endif

hx::Class DCInterface_obj::__mClass;

void DCInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.ui.DCInterface","\xe8","\x18","\x3d","\x1e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCInterface_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

} // end namespace pgr
} // end namespace dconsole
} // end namespace ui
