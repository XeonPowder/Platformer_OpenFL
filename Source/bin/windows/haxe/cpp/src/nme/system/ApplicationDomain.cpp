#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_nme_system_ApplicationDomain
#include <nme/system/ApplicationDomain.h>
#endif
namespace nme{
namespace _system{

Void ApplicationDomain_obj::__construct(::nme::_system::ApplicationDomain parentDomain)
{
HX_STACK_FRAME("nme.system.ApplicationDomain","new",0x1e9838ef,"nme.system.ApplicationDomain.new","nme/system/ApplicationDomain.hx",11,0x9c5abb81)
HX_STACK_THIS(this)
HX_STACK_ARG(parentDomain,"parentDomain")
{
	HX_STACK_LINE(12)
	bool tmp = (parentDomain != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	if ((tmp)){
		HX_STACK_LINE(14)
		this->parentDomain = parentDomain;
	}
	else{
		HX_STACK_LINE(18)
		::nme::_system::ApplicationDomain tmp1 = ::nme::_system::ApplicationDomain_obj::currentDomain;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		this->parentDomain = tmp1;
	}
}
;
	return null();
}

//ApplicationDomain_obj::~ApplicationDomain_obj() { }

Dynamic ApplicationDomain_obj::__CreateEmpty() { return  new ApplicationDomain_obj; }
hx::ObjectPtr< ApplicationDomain_obj > ApplicationDomain_obj::__new(::nme::_system::ApplicationDomain parentDomain)
{  hx::ObjectPtr< ApplicationDomain_obj > _result_ = new ApplicationDomain_obj();
	_result_->__construct(parentDomain);
	return _result_;}

Dynamic ApplicationDomain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationDomain_obj > _result_ = new ApplicationDomain_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Dynamic ApplicationDomain_obj::getDefinition( ::String name){
	HX_STACK_FRAME("nme.system.ApplicationDomain","getDefinition",0xbb948318,"nme.system.ApplicationDomain.getDefinition","nme/system/ApplicationDomain.hx",23,0x9c5abb81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(24)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,getDefinition,return )

bool ApplicationDomain_obj::hasDefinition( ::String name){
	HX_STACK_FRAME("nme.system.ApplicationDomain","hasDefinition",0x7978dedc,"nme.system.ApplicationDomain.hasDefinition","nme/system/ApplicationDomain.hx",28,0x9c5abb81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(29)
	::String tmp = name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(ApplicationDomain_obj,hasDefinition,return )

::nme::_system::ApplicationDomain ApplicationDomain_obj::currentDomain;


ApplicationDomain_obj::ApplicationDomain_obj()
{
}

void ApplicationDomain_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ApplicationDomain);
	HX_MARK_MEMBER_NAME(parentDomain,"parentDomain");
	HX_MARK_END_CLASS();
}

void ApplicationDomain_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parentDomain,"parentDomain");
}

Dynamic ApplicationDomain_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { return parentDomain; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"hasDefinition") ) { return hasDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ApplicationDomain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { outValue = currentDomain; return true;  }
	}
	return false;
}

Dynamic ApplicationDomain_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"parentDomain") ) { parentDomain=inValue.Cast< ::nme::_system::ApplicationDomain >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ApplicationDomain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"currentDomain") ) { currentDomain=ioValue.Cast< ::nme::_system::ApplicationDomain >(); return true; }
	}
	return false;
}

void ApplicationDomain_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::_system::ApplicationDomain*/ ,(int)offsetof(ApplicationDomain_obj,parentDomain),HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nme::_system::ApplicationDomain*/ ,(void *) &ApplicationDomain_obj::currentDomain,HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("parentDomain","\x0e","\x66","\xea","\x3f"),
	HX_HCSTRING("getDefinition","\xc9","\x31","\x80","\x48"),
	HX_HCSTRING("hasDefinition","\x8d","\x8d","\x64","\x06"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationDomain_obj::currentDomain,"currentDomain");
};

#endif

hx::Class ApplicationDomain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("currentDomain","\x5d","\x32","\xdd","\x10"),
	::String(null()) };

void ApplicationDomain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.system.ApplicationDomain","\x7d","\x95","\xd7","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationDomain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationDomain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplicationDomain_obj >;
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

void ApplicationDomain_obj::__boot()
{
	currentDomain= ::nme::_system::ApplicationDomain_obj::__new(null());
}

} // end namespace nme
} // end namespace system
