#include <hxcpp.h>

#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_errors_RangeError
#include <nme/errors/RangeError.h>
#endif
namespace nme{
namespace errors{

Void RangeError_obj::__construct(::String __o_inMessage)
{
HX_STACK_FRAME("nme.errors.RangeError","new",0xc8d80198,"nme.errors.RangeError.new","nme/errors/RangeError.hx",8,0x95f6f2b8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inMessage,"inMessage")
::String inMessage = __o_inMessage.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(9)
	::String tmp = inMessage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	super::__construct(tmp,(int)0);
}
;
	return null();
}

//RangeError_obj::~RangeError_obj() { }

Dynamic RangeError_obj::__CreateEmpty() { return  new RangeError_obj; }
hx::ObjectPtr< RangeError_obj > RangeError_obj::__new(::String __o_inMessage)
{  hx::ObjectPtr< RangeError_obj > _result_ = new RangeError_obj();
	_result_->__construct(__o_inMessage);
	return _result_;}

Dynamic RangeError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RangeError_obj > _result_ = new RangeError_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


RangeError_obj::RangeError_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RangeError_obj::__mClass,"__mClass");
};

#endif

hx::Class RangeError_obj::__mClass;

void RangeError_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.errors.RangeError","\xa6","\x95","\xa9","\x58");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< RangeError_obj >;
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
