#include <hxcpp.h>

#ifndef INCLUDED_nme_system_SecurityDomain
#include <nme/system/SecurityDomain.h>
#endif
namespace nme{
namespace _system{

Void SecurityDomain_obj::__construct()
{
HX_STACK_FRAME("nme.system.SecurityDomain","new",0x496f9a2d,"nme.system.SecurityDomain.new","nme/system/SecurityDomain.hx",10,0x71d8b3c3)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SecurityDomain_obj::~SecurityDomain_obj() { }

Dynamic SecurityDomain_obj::__CreateEmpty() { return  new SecurityDomain_obj; }
hx::ObjectPtr< SecurityDomain_obj > SecurityDomain_obj::__new()
{  hx::ObjectPtr< SecurityDomain_obj > _result_ = new SecurityDomain_obj();
	_result_->__construct();
	return _result_;}

Dynamic SecurityDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SecurityDomain_obj > _result_ = new SecurityDomain_obj();
	_result_->__construct();
	return _result_;}

::nme::_system::SecurityDomain SecurityDomain_obj::currentDomain;


SecurityDomain_obj::SecurityDomain_obj()
{
}

bool SecurityDomain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { outValue = currentDomain; return true;  }
	}
	return false;
}

bool SecurityDomain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=ioValue.Cast< ::nme::_system::SecurityDomain >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nme::_system::SecurityDomain*/ ,(void *) &SecurityDomain_obj::currentDomain,HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SecurityDomain_obj::currentDomain,"currentDomain");
};

#endif

hx::Class SecurityDomain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10"),
	::String(null()) };

void SecurityDomain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.system.SecurityDomain","\xbb","\xff","\x59","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SecurityDomain_obj::__GetStatic;
	__mClass->mSetStaticField = &SecurityDomain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SecurityDomain_obj >;
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

void SecurityDomain_obj::__boot()
{
	currentDomain= ::nme::_system::SecurityDomain_obj::__new();
}

} // end namespace nme
} // end namespace system
