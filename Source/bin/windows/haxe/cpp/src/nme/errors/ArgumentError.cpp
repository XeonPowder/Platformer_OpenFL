#include <hxcpp.h>

#ifndef INCLUDED_nme_errors_ArgumentError
#include <nme/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
namespace nme{
namespace errors{

Void ArgumentError_obj::__construct(Dynamic inMessage,Dynamic id)
{
HX_STACK_FRAME("nme.errors.ArgumentError","new",0x7c3b5f02,"nme.errors.ArgumentError.new","nme/errors/ArgumentError.hx",4,0x3fd1a8ce)
HX_STACK_THIS(this)
HX_STACK_ARG(inMessage,"inMessage")
HX_STACK_ARG(id,"id")
{
	HX_STACK_LINE(4)
	Dynamic tmp = inMessage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(4)
	Dynamic tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(4)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//ArgumentError_obj::~ArgumentError_obj() { }

Dynamic ArgumentError_obj::__CreateEmpty() { return  new ArgumentError_obj; }
hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(Dynamic inMessage,Dynamic id)
{  hx::ObjectPtr< ArgumentError_obj > _result_ = new ArgumentError_obj();
	_result_->__construct(inMessage,id);
	return _result_;}

Dynamic ArgumentError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgumentError_obj > _result_ = new ArgumentError_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}


ArgumentError_obj::ArgumentError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#endif

hx::Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.errors.ArgumentError","\x10","\x76","\x23","\x11");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ArgumentError_obj >;
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

} // end namespace nme
} // end namespace errors
