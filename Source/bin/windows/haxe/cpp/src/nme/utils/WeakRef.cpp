#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nme_utils_WeakRef
#include <nme/utils/WeakRef.h>
#endif
namespace nme{
namespace utils{

Void WeakRef_obj::__construct(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak)
{
HX_STACK_FRAME("nme.utils.WeakRef","new",0xc61df128,"nme.utils.WeakRef.new","nme/utils/WeakRef.hx",18,0x4996a88a)
HX_STACK_THIS(this)
HX_STACK_ARG(inObject,"inObject")
HX_STACK_ARG(__o_inMakeWeak,"inMakeWeak")
bool inMakeWeak = __o_inMakeWeak.Default(true);
{
	HX_STACK_LINE(19)
	bool tmp = inMakeWeak;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	if ((tmp)){
		HX_STACK_LINE(22)
		Dynamic tmp1 = ::__hxcpp_weak_ref_create(inObject);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		this->weakRef = tmp1;
		HX_STACK_LINE(26)
		this->hardRef = null();
	}
	else{
		HX_STACK_LINE(31)
		this->weakRef = null();
		HX_STACK_LINE(35)
		this->hardRef = inObject;
	}
}
;
	return null();
}

//WeakRef_obj::~WeakRef_obj() { }

Dynamic WeakRef_obj::__CreateEmpty() { return  new WeakRef_obj; }
hx::ObjectPtr< WeakRef_obj > WeakRef_obj::__new(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(inObject,__o_inMakeWeak);
	return _result_;}

Dynamic WeakRef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< WeakRef_obj > _result_ = new WeakRef_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Dynamic WeakRef_obj::get( ){
	HX_STACK_FRAME("nme.utils.WeakRef","get",0xc618a15e,"nme.utils.WeakRef.get","nme/utils/WeakRef.hx",40,0x4996a88a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	Dynamic tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	if ((tmp1)){
		HX_STACK_LINE(42)
		Dynamic tmp2 = this->hardRef;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		return tmp2;
	}
	HX_STACK_LINE(45)
	Dynamic tmp2 = this->weakRef;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	if ((tmp3)){
		HX_STACK_LINE(46)
		return null();
	}
	HX_STACK_LINE(47)
	Dynamic tmp4 = ::__hxcpp_weak_ref_get(this->weakRef);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	Dynamic result = tmp4;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(48)
	bool tmp5 = (result == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	if ((tmp5)){
		HX_STACK_LINE(49)
		this->weakRef = null();
	}
	HX_STACK_LINE(58)
	Dynamic tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(58)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,get,return )

::String WeakRef_obj::toString( ){
	HX_STACK_FRAME("nme.utils.WeakRef","toString",0x9950dae4,"nme.utils.WeakRef.toString","nme/utils/WeakRef.hx",62,0x4996a88a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	Dynamic tmp = this->hardRef;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(63)
	if ((tmp1)){
		HX_STACK_LINE(64)
		Dynamic tmp2 = this->hardRef;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		::String tmp4 = (HX_HCSTRING("","\x00","\x00","\x00","\x00") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		return tmp4;
	}
	HX_STACK_LINE(66)
	Dynamic tmp2 = this->get();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(66)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(66)
	::String tmp4 = (HX_HCSTRING("WeakRef(","\x2d","\x30","\x1b","\x73") + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(66)
	::String tmp5 = (tmp4 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(66)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(WeakRef_obj,toString,return )


WeakRef_obj::WeakRef_obj()
{
}

void WeakRef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(WeakRef);
	HX_MARK_MEMBER_NAME(hardRef,"hardRef");
	HX_MARK_MEMBER_NAME(weakRef,"weakRef");
	HX_MARK_END_CLASS();
}

void WeakRef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(hardRef,"hardRef");
	HX_VISIT_MEMBER_NAME(weakRef,"weakRef");
}

Dynamic WeakRef_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { return hardRef; }
		if (HX_FIELD_EQ(inName,"weakRef") ) { return weakRef; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic WeakRef_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hardRef") ) { hardRef=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weakRef") ) { weakRef=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void WeakRef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"));
	outFields->push(HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakRef_obj,hardRef),HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(WeakRef_obj,weakRef),HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("hardRef","\x28","\x47","\x5c","\x93"),
	HX_HCSTRING("weakRef","\xbb","\x4f","\x5c","\xd7"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WeakRef_obj::__mClass,"__mClass");
};

#endif

hx::Class WeakRef_obj::__mClass;

void WeakRef_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.utils.WeakRef","\x36","\x7d","\x3c","\x2b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WeakRef_obj >;
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
} // end namespace utils
