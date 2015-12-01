#include <hxcpp.h>

#ifndef INCLUDED_nme_display_GraphicsPathWinding
#include <nme/display/GraphicsPathWinding.h>
#endif
namespace nme{
namespace display{

Void GraphicsPathWinding_obj::__construct()
{
	return null();
}

//GraphicsPathWinding_obj::~GraphicsPathWinding_obj() { }

Dynamic GraphicsPathWinding_obj::__CreateEmpty() { return  new GraphicsPathWinding_obj; }
hx::ObjectPtr< GraphicsPathWinding_obj > GraphicsPathWinding_obj::__new()
{  hx::ObjectPtr< GraphicsPathWinding_obj > _result_ = new GraphicsPathWinding_obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsPathWinding_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPathWinding_obj > _result_ = new GraphicsPathWinding_obj();
	_result_->__construct();
	return _result_;}

::String GraphicsPathWinding_obj::EVEN_ODD;

::String GraphicsPathWinding_obj::NON_ZERO;


GraphicsPathWinding_obj::GraphicsPathWinding_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &GraphicsPathWinding_obj::EVEN_ODD,HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21")},
	{hx::fsString,(void *) &GraphicsPathWinding_obj::NON_ZERO,HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_obj::EVEN_ODD,"EVEN_ODD");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_obj::NON_ZERO,"NON_ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_obj::EVEN_ODD,"EVEN_ODD");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_obj::NON_ZERO,"NON_ZERO");
};

#endif

hx::Class GraphicsPathWinding_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21"),
	HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61"),
	::String(null()) };

void GraphicsPathWinding_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.GraphicsPathWinding","\x76","\x75","\xe1","\xab");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsPathWinding_obj >;
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

void GraphicsPathWinding_obj::__boot()
{
	EVEN_ODD= HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06");
	NON_ZERO= HX_HCSTRING("nonZero","\xd5","\x1e","\xb4","\xd1");
}

} // end namespace nme
} // end namespace display
