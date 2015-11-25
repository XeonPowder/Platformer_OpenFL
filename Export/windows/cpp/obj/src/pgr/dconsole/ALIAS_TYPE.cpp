#include <hxcpp.h>

#ifndef INCLUDED_pgr_dconsole_ALIAS_TYPE
#include <pgr/dconsole/ALIAS_TYPE.h>
#endif
namespace pgr{
namespace dconsole{

::pgr::dconsole::ALIAS_TYPE ALIAS_TYPE_obj::COMMAND;

::pgr::dconsole::ALIAS_TYPE ALIAS_TYPE_obj::FUNCTION;

::pgr::dconsole::ALIAS_TYPE ALIAS_TYPE_obj::OBJECT;

HX_DEFINE_CREATE_ENUM(ALIAS_TYPE_obj)

int ALIAS_TYPE_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")) return 0;
	if (inName==HX_HCSTRING("FUNCTION","\x18","\x3b","\xd8","\x6d")) return 2;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return 1;
	return super::__FindIndex(inName);
}

int ALIAS_TYPE_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")) return 0;
	if (inName==HX_HCSTRING("FUNCTION","\x18","\x3b","\xd8","\x6d")) return 0;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ALIAS_TYPE_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")) return COMMAND;
	if (inName==HX_HCSTRING("FUNCTION","\x18","\x3b","\xd8","\x6d")) return FUNCTION;
	if (inName==HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7")) return OBJECT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01"),
	HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7"),
	HX_HCSTRING("FUNCTION","\x18","\x3b","\xd8","\x6d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALIAS_TYPE_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(ALIAS_TYPE_obj::FUNCTION,"FUNCTION");
	HX_MARK_MEMBER_NAME(ALIAS_TYPE_obj::OBJECT,"OBJECT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALIAS_TYPE_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ALIAS_TYPE_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(ALIAS_TYPE_obj::FUNCTION,"FUNCTION");
	HX_VISIT_MEMBER_NAME(ALIAS_TYPE_obj::OBJECT,"OBJECT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class ALIAS_TYPE_obj::__mClass;

Dynamic __Create_ALIAS_TYPE_obj() { return new ALIAS_TYPE_obj; }

void ALIAS_TYPE_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("pgr.dconsole.ALIAS_TYPE","\xf1","\x76","\x91","\xd1"), hx::TCanCast< ALIAS_TYPE_obj >,sStaticFields,sMemberFields,
	&__Create_ALIAS_TYPE_obj, &__Create,
	&super::__SGetClass(), &CreateALIAS_TYPE_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ALIAS_TYPE_obj::__boot()
{
hx::Static(COMMAND) = hx::CreateEnum< ALIAS_TYPE_obj >(HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01"),0);
hx::Static(FUNCTION) = hx::CreateEnum< ALIAS_TYPE_obj >(HX_HCSTRING("FUNCTION","\x18","\x3b","\xd8","\x6d"),2);
hx::Static(OBJECT) = hx::CreateEnum< ALIAS_TYPE_obj >(HX_HCSTRING("OBJECT","\xbf","\x2a","\xc2","\xc7"),1);
}


} // end namespace pgr
} // end namespace dconsole
