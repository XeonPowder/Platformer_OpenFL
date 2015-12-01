#include <hxcpp.h>

#ifndef INCLUDED_nme_display_TriangleCulling
#include <nme/display/TriangleCulling.h>
#endif
namespace nme{
namespace display{

::nme::display::TriangleCulling TriangleCulling_obj::NEGATIVE;

::nme::display::TriangleCulling TriangleCulling_obj::NONE;

::nme::display::TriangleCulling TriangleCulling_obj::POSITIVE;

HX_DEFINE_CREATE_ENUM(TriangleCulling_obj)

int TriangleCulling_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return 2;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 1;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return 0;
	return super::__FindIndex(inName);
}

int TriangleCulling_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return 0;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return 0;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TriangleCulling_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa")) return NEGATIVE;
	if (inName==HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")) return NONE;
	if (inName==HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24")) return POSITIVE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::NEGATIVE,"NEGATIVE");
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(TriangleCulling_obj::POSITIVE,"POSITIVE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TriangleCulling_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TriangleCulling_obj::NEGATIVE,"NEGATIVE");
	HX_VISIT_MEMBER_NAME(TriangleCulling_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(TriangleCulling_obj::POSITIVE,"POSITIVE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class TriangleCulling_obj::__mClass;

Dynamic __Create_TriangleCulling_obj() { return new TriangleCulling_obj; }

void TriangleCulling_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.display.TriangleCulling","\x14","\x2d","\x69","\x22"), hx::TCanCast< TriangleCulling_obj >,sStaticFields,sMemberFields,
	&__Create_TriangleCulling_obj, &__Create,
	&super::__SGetClass(), &CreateTriangleCulling_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TriangleCulling_obj::__boot()
{
hx::Static(NEGATIVE) = hx::CreateEnum< TriangleCulling_obj >(HX_HCSTRING("NEGATIVE","\x75","\xb6","\xc7","\xaa"),2);
hx::Static(NONE) = hx::CreateEnum< TriangleCulling_obj >(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),1);
hx::Static(POSITIVE) = hx::CreateEnum< TriangleCulling_obj >(HX_HCSTRING("POSITIVE","\xb9","\x36","\x80","\x24"),0);
}


} // end namespace nme
} // end namespace display
