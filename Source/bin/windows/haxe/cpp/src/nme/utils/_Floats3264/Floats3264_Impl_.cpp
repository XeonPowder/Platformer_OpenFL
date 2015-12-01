#include <hxcpp.h>

#ifndef INCLUDED_nme_utils__Floats3264_Floats3264_Impl_
#include <nme/utils/_Floats3264/Floats3264_Impl_.h>
#endif
namespace nme{
namespace utils{
namespace _Floats3264{

Void Floats3264_Impl__obj::__construct()
{
	return null();
}

//Floats3264_Impl__obj::~Floats3264_Impl__obj() { }

Dynamic Floats3264_Impl__obj::__CreateEmpty() { return  new Floats3264_Impl__obj; }
hx::ObjectPtr< Floats3264_Impl__obj > Floats3264_Impl__obj::__new()
{  hx::ObjectPtr< Floats3264_Impl__obj > _result_ = new Floats3264_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Floats3264_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Floats3264_Impl__obj > _result_ = new Floats3264_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Floats3264_Impl__obj::_new( Dynamic d){
	HX_STACK_FRAME("nme.utils._Floats3264.Floats3264_Impl_","_new",0x5c53483b,"nme.utils._Floats3264.Floats3264_Impl_._new","nme/utils/Floats3264.hx",6,0xf18f5a83)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(6)
	Dynamic tmp = d;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(6)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Floats3264_Impl__obj,_new,return )

Dynamic Floats3264_Impl__obj::toDynamic( Dynamic this1){
	HX_STACK_FRAME("nme.utils._Floats3264.Floats3264_Impl_","toDynamic",0xedcd0e2a,"nme.utils._Floats3264.Floats3264_Impl_.toDynamic","nme/utils/Floats3264.hx",7,0xf18f5a83)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(7)
	Dynamic tmp = this1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(7)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Floats3264_Impl__obj,toDynamic,return )

Dynamic Floats3264_Impl__obj::fromArrayFloat( Array< Float > f){
	HX_STACK_FRAME("nme.utils._Floats3264.Floats3264_Impl_","fromArrayFloat",0x497e36a7,"nme.utils._Floats3264.Floats3264_Impl_.fromArrayFloat","nme/utils/Floats3264.hx",9,0xf18f5a83)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(9)
	Dynamic tmp = ((Dynamic)(f));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(9)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Floats3264_Impl__obj,fromArrayFloat,return )

Dynamic Floats3264_Impl__obj::fromArray32Float( Array< ::cpp::Float32 > f){
	HX_STACK_FRAME("nme.utils._Floats3264.Floats3264_Impl_","fromArray32Float",0x737fca68,"nme.utils._Floats3264.Floats3264_Impl_.fromArray32Float","nme/utils/Floats3264.hx",12,0xf18f5a83)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(12)
	Dynamic tmp = ((Dynamic)(f));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(12)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Floats3264_Impl__obj,fromArray32Float,return )


Floats3264_Impl__obj::Floats3264_Impl__obj()
{
}

bool Floats3264_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"toDynamic") ) { outValue = toDynamic_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromArrayFloat") ) { outValue = fromArrayFloat_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromArray32Float") ) { outValue = fromArray32Float_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Floats3264_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Floats3264_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Floats3264_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("toDynamic","\x44","\xd7","\xa9","\x65"),
	HX_HCSTRING("fromArrayFloat","\x4d","\x2f","\xf0","\xf4"),
	HX_HCSTRING("fromArray32Float","\x8e","\xb8","\xdd","\x59"),
	::String(null()) };

void Floats3264_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.utils._Floats3264.Floats3264_Impl_","\xd4","\x1b","\x01","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Floats3264_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Floats3264_Impl__obj >;
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
} // end namespace _Floats3264
