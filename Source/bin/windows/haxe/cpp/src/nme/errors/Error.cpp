#include <hxcpp.h>

#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
namespace nme{
namespace errors{

Void Error_obj::__construct(Dynamic inMessage,Dynamic __o_id)
{
HX_STACK_FRAME("nme.errors.Error","new",0x8168983f,"nme.errors.Error.new","nme/errors/Error.hx",12,0x7e030631)
HX_STACK_THIS(this)
HX_STACK_ARG(inMessage,"inMessage")
HX_STACK_ARG(__o_id,"id")
Dynamic id = __o_id.Default(0);
{
	HX_STACK_LINE(13)
	this->message = inMessage;
	HX_STACK_LINE(14)
	this->errorID = id;
}
;
	return null();
}

//Error_obj::~Error_obj() { }

Dynamic Error_obj::__CreateEmpty() { return  new Error_obj; }
hx::ObjectPtr< Error_obj > Error_obj::__new(Dynamic inMessage,Dynamic __o_id)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(inMessage,__o_id);
	return _result_;}

Dynamic Error_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Error_obj > _result_ = new Error_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::String Error_obj::getStackTrace( ){
	HX_STACK_FRAME("nme.errors.Error","getStackTrace",0xcee382f2,"nme.errors.Error.getStackTrace","nme/errors/Error.hx",19,0x7e030631)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,getStackTrace,return )

::String Error_obj::toString( ){
	HX_STACK_FRAME("nme.errors.Error","toString",0x7d3e206d,"nme.errors.Error.toString","nme/errors/Error.hx",23,0x7e030631)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	Dynamic tmp = this->message;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Error_obj,toString,return )


Error_obj::Error_obj()
{
}

void Error_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Error);
	HX_MARK_MEMBER_NAME(errorID,"errorID");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Error_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(errorID,"errorID");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Error_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { return errorID; }
		if (HX_FIELD_EQ(inName,"message") ) { return message; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStackTrace") ) { return getStackTrace_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Error_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"errorID") ) { errorID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Error_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"));
	outFields->push(HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Error_obj,errorID),HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Error_obj,message),HX_HCSTRING("message","\xc7","\x35","\x11","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Error_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("errorID","\xa3","\x8d","\x0a","\xea"),
	HX_HCSTRING("message","\xc7","\x35","\x11","\x9a"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("getStackTrace","\x53","\x8e","\xb0","\x85"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Error_obj::__mClass,"__mClass");
};

#endif

hx::Class Error_obj::__mClass;

void Error_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.errors.Error","\xcd","\x0c","\x92","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Error_obj >;
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
