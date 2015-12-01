#include <hxcpp.h>

#ifndef INCLUDED_nme_display_LineScaleMode
#include <nme/display/LineScaleMode.h>
#endif
namespace nme{
namespace display{

::nme::display::LineScaleMode LineScaleMode_obj::HORIZONTAL;

::nme::display::LineScaleMode LineScaleMode_obj::NONE;

::nme::display::LineScaleMode LineScaleMode_obj::NORMAL;

::nme::display::LineScaleMode LineScaleMode_obj::OPENGL;

::nme::display::LineScaleMode LineScaleMode_obj::VERTICAL;

HX_DEFINE_CREATE_ENUM(LineScaleMode_obj)

int LineScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return 3;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 1;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 4;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return 2;
	return super::__FindIndex(inName);
}

int LineScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return 0;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return 0;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LineScaleMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07")) return HORIZONTAL;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2")) return NORMAL;
	if (inName==HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4")) return OPENGL;
	if (inName==HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3")) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),
	HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),
	HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class LineScaleMode_obj::__mClass;

Dynamic __Create_LineScaleMode_obj() { return new LineScaleMode_obj; }

void LineScaleMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.display.LineScaleMode","\x05","\x82","\x68","\x9d"), hx::TCanCast< LineScaleMode_obj >,sStaticFields,sMemberFields,
	&__Create_LineScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateLineScaleMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LineScaleMode_obj::__boot()
{
hx::Static(HORIZONTAL) = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("HORIZONTAL","\xe4","\x70","\xcd","\x07"),3);
hx::Static(NONE) = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),1);
hx::Static(NORMAL) = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("NORMAL","\x27","\x1e","\xec","\xe2"),0);
hx::Static(OPENGL) = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("OPENGL","\x6f","\x10","\x17","\xd4"),4);
hx::Static(VERTICAL) = hx::CreateEnum< LineScaleMode_obj >(HX_HCSTRING("VERTICAL","\x76","\x4c","\x9b","\xc3"),2);
}


} // end namespace nme
} // end namespace display
