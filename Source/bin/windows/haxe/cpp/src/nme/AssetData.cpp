#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

//AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > _result_ = new AssetData_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > _result_ = new AssetData_obj();
	_result_->__construct();
	return _result_;}

Void AssetData_obj::create( ){
{
		HX_STACK_FRAME("nme.AssetData","create",0x8093a6f8,"nme.AssetData.create","nme/AssetData.hx",16,0x9cae6a8d)
		HX_STACK_LINE(17)
		::haxe::ds::StringMap tmp = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		::haxe::ds::StringMap info = tmp;		HX_STACK_VAR(info,"info");
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,create,(void))


AssetData_obj::AssetData_obj()
{
}

bool AssetData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void AssetData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.AssetData","\xf2","\xf8","\x35","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetData_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetData_obj >;
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
