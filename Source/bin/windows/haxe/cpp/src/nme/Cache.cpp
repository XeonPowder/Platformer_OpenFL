#include <hxcpp.h>

#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
#ifndef INCLUDED_nme_Cache
#include <nme/Cache.h>
#endif
namespace nme{

Void Cache_obj::__construct()
{
HX_STACK_FRAME("nme.Cache","new",0x2dc3d8ec,"nme.Cache.new","nme/Assets.hx",34,0x846abab2)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Cache_obj::~Cache_obj() { }

Dynamic Cache_obj::__CreateEmpty() { return  new Cache_obj; }
hx::ObjectPtr< Cache_obj > Cache_obj::__new()
{  hx::ObjectPtr< Cache_obj > _result_ = new Cache_obj();
	_result_->__construct();
	return _result_;}

Dynamic Cache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cache_obj > _result_ = new Cache_obj();
	_result_->__construct();
	return _result_;}

Void Cache_obj::removeBitmapData( ::String inId){
{
		HX_STACK_FRAME("nme.Cache","removeBitmapData",0xfb5e6311,"nme.Cache.removeBitmapData","nme/Assets.hx",35,0x846abab2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inId,"inId")
		HX_STACK_LINE(35)
		::String tmp = inId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		::nme::Assets_obj::removeBitmapData(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Cache_obj,removeBitmapData,(void))


Cache_obj::Cache_obj()
{
}

Dynamic Cache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return removeBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cache_obj::__mClass,"__mClass");
};

#endif

hx::Class Cache_obj::__mClass;

void Cache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Cache","\xfa","\x32","\xda","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Cache_obj >;
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
