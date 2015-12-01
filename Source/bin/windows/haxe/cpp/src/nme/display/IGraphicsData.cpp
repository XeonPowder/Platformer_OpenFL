#include <hxcpp.h>

#ifndef INCLUDED_nme_display_IGraphicsData
#include <nme/display/IGraphicsData.h>
#endif
namespace nme{
namespace display{

Void IGraphicsData_obj::__construct(Dynamic inHandle)
{
HX_STACK_FRAME("nme.display.IGraphicsData","new",0xa0c37e1c,"nme.display.IGraphicsData.new","nme/display/IGraphicsData.hx",9,0xd99dc5d6)
HX_STACK_THIS(this)
HX_STACK_ARG(inHandle,"inHandle")
{
	HX_STACK_LINE(9)
	this->nmeHandle = inHandle;
}
;
	return null();
}

//IGraphicsData_obj::~IGraphicsData_obj() { }

Dynamic IGraphicsData_obj::__CreateEmpty() { return  new IGraphicsData_obj; }
hx::ObjectPtr< IGraphicsData_obj > IGraphicsData_obj::__new(Dynamic inHandle)
{  hx::ObjectPtr< IGraphicsData_obj > _result_ = new IGraphicsData_obj();
	_result_->__construct(inHandle);
	return _result_;}

Dynamic IGraphicsData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< IGraphicsData_obj > _result_ = new IGraphicsData_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


IGraphicsData_obj::IGraphicsData_obj()
{
}

void IGraphicsData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IGraphicsData);
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_END_CLASS();
}

void IGraphicsData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
}

Dynamic IGraphicsData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic IGraphicsData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IGraphicsData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(IGraphicsData_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IGraphicsData_obj::__mClass,"__mClass");
};

#endif

hx::Class IGraphicsData_obj::__mClass;

void IGraphicsData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.IGraphicsData","\x2a","\x80","\x73","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IGraphicsData_obj >;
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
} // end namespace display
