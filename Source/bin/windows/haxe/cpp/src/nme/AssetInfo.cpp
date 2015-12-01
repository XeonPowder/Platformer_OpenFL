#include <hxcpp.h>

#ifndef INCLUDED_nme_AssetInfo
#include <nme/AssetInfo.h>
#endif
#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
#ifndef INCLUDED_nme_text_Font
#include <nme/text/Font.h>
#endif
#ifndef INCLUDED_nme_text_FontStyle
#include <nme/text/FontStyle.h>
#endif
#ifndef INCLUDED_nme_text_FontType
#include <nme/text/FontType.h>
#endif
#ifndef INCLUDED_nme_utils_WeakRef
#include <nme/utils/WeakRef.h>
#endif
namespace nme{

Void AssetInfo_obj::__construct(::String inPath,::nme::AssetType inType,bool inIsResource,::String inClassName)
{
HX_STACK_FRAME("nme.AssetInfo","new",0x6a764f28,"nme.AssetInfo.new","nme/AssetInfo.hx",15,0x98e24ac9)
HX_STACK_THIS(this)
HX_STACK_ARG(inPath,"inPath")
HX_STACK_ARG(inType,"inType")
HX_STACK_ARG(inIsResource,"inIsResource")
HX_STACK_ARG(inClassName,"inClassName")
{
	HX_STACK_LINE(16)
	this->path = inPath;
	HX_STACK_LINE(17)
	this->type = inType;
	HX_STACK_LINE(18)
	this->className = inClassName;
	HX_STACK_LINE(19)
	this->isResource = inIsResource;
	HX_STACK_LINE(21)
	::nme::AssetType tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	bool tmp1 = (tmp == ::nme::AssetType_obj::FONT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(21)
	if ((tmp1)){
		HX_STACK_LINE(21)
		tmp2 = this->isResource;
	}
	else{
		HX_STACK_LINE(21)
		tmp2 = false;
	}
	HX_STACK_LINE(21)
	if ((tmp2)){
		HX_STACK_LINE(22)
		::String tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		::nme::text::Font_obj::__new(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),null(),tmp3);
	}
}
;
	return null();
}

//AssetInfo_obj::~AssetInfo_obj() { }

Dynamic AssetInfo_obj::__CreateEmpty() { return  new AssetInfo_obj; }
hx::ObjectPtr< AssetInfo_obj > AssetInfo_obj::__new(::String inPath,::nme::AssetType inType,bool inIsResource,::String inClassName)
{  hx::ObjectPtr< AssetInfo_obj > _result_ = new AssetInfo_obj();
	_result_->__construct(inPath,inType,inIsResource,inClassName);
	return _result_;}

Dynamic AssetInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetInfo_obj > _result_ = new AssetInfo_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void AssetInfo_obj::uncache( ){
{
		HX_STACK_FRAME("nme.AssetInfo","uncache",0x06031411,"nme.AssetInfo.uncache","nme/AssetInfo.hx",28,0x98e24ac9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->cache = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AssetInfo_obj,uncache,(void))

Dynamic AssetInfo_obj::getCache( ){
	HX_STACK_FRAME("nme.AssetInfo","getCache",0x2a609604,"nme.AssetInfo.getCache","nme/AssetInfo.hx",32,0x98e24ac9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	::nme::utils::WeakRef tmp = this->cache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	if ((tmp1)){
		HX_STACK_LINE(34)
		return null();
	}
	HX_STACK_LINE(35)
	::nme::utils::WeakRef tmp2 = this->cache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	Dynamic tmp3 = tmp2->get();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(35)
	Dynamic val = tmp3;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(36)
	bool tmp4 = (val == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(36)
	if ((tmp4)){
		HX_STACK_LINE(37)
		this->cache = null();
	}
	HX_STACK_LINE(38)
	Dynamic tmp5 = val;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(38)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(AssetInfo_obj,getCache,return )

Void AssetInfo_obj::setCache( Dynamic inVal,bool inWeak){
{
		HX_STACK_FRAME("nme.AssetInfo","setCache",0xd8bdef78,"nme.AssetInfo.setCache","nme/AssetInfo.hx",42,0x98e24ac9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVal,"inVal")
		HX_STACK_ARG(inWeak,"inWeak")
		HX_STACK_LINE(43)
		::nme::utils::WeakRef tmp = ::nme::utils::WeakRef_obj::__new(inVal,inWeak);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(43)
		this->cache = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AssetInfo_obj,setCache,(void))


AssetInfo_obj::AssetInfo_obj()
{
}

void AssetInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetInfo);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(isResource,"isResource");
	HX_MARK_END_CLASS();
}

void AssetInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(isResource,"isResource");
}

Dynamic AssetInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return cache; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uncache") ) { return uncache_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getCache") ) { return getCache_dyn(); }
		if (HX_FIELD_EQ(inName,"setCache") ) { return setCache_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isResource") ) { return isResource; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::nme::AssetType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::nme::utils::WeakRef >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isResource") ) { isResource=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"));
	outFields->push(HX_HCSTRING("isResource","\xd8","\x6e","\x4f","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AssetInfo_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsString,(int)offsetof(AssetInfo_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::nme::AssetType*/ ,(int)offsetof(AssetInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::nme::utils::WeakRef*/ ,(int)offsetof(AssetInfo_obj,cache),HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsBool,(int)offsetof(AssetInfo_obj,isResource),HX_HCSTRING("isResource","\xd8","\x6e","\x4f","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("isResource","\xd8","\x6e","\x4f","\x8d"),
	HX_HCSTRING("uncache","\x49","\x91","\xa5","\x3d"),
	HX_HCSTRING("getCache","\xcc","\xa9","\xeb","\xa0"),
	HX_HCSTRING("setCache","\x40","\x03","\x49","\x4f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetInfo_obj::__mClass;

void AssetInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.AssetInfo","\x36","\xdb","\x8d","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetInfo_obj >;
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
