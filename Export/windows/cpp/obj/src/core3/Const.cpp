#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_core3_Const
#include <core3/Const.h>
#endif
namespace core3{

Void Const_obj::__construct()
{
	return null();
}

//Const_obj::~Const_obj() { }

Dynamic Const_obj::__CreateEmpty() { return  new Const_obj; }
hx::ObjectPtr< Const_obj > Const_obj::__new()
{  hx::ObjectPtr< Const_obj > _result_ = new Const_obj();
	_result_->__construct();
	return _result_;}

Dynamic Const_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Const_obj > _result_ = new Const_obj();
	_result_->__construct();
	return _result_;}

int Const_obj::GRID;

::String Const_obj::VERSION;

int Const_obj::compareString( ::String s0,::String s1){
	HX_STACK_FRAME("core3.Const","compareString",0x97a2ef71,"core3.Const.compareString","core3/Const.hx",6,0x2ecdb816)
	HX_STACK_ARG(s0,"s0")
	HX_STACK_ARG(s1,"s1")
	HX_STACK_LINE(7)
	Dynamic cc0;		HX_STACK_VAR(cc0,"cc0");
	HX_STACK_LINE(7)
	Dynamic cc1;		HX_STACK_VAR(cc1,"cc1");
	HX_STACK_LINE(8)
	{
		HX_STACK_LINE(8)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(8)
		int tmp = s0.length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(8)
		int tmp1 = s1.length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(8)
		Float tmp2 = ::Math_obj::min(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(8)
		int _g = ((int)(tmp2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8)
		while((true)){
			HX_STACK_LINE(8)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(8)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(8)
			if ((tmp4)){
				HX_STACK_LINE(8)
				break;
			}
			HX_STACK_LINE(8)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(8)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(9)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(9)
			Dynamic tmp7 = s0.charCodeAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(9)
			cc0 = tmp7;
			HX_STACK_LINE(10)
			int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(10)
			Dynamic tmp9 = s1.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(10)
			cc1 = tmp9;
			HX_STACK_LINE(11)
			bool tmp10 = (cc0 != cc1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(11)
			if ((tmp10)){
				HX_STACK_LINE(11)
				int tmp11 = (cc0 - cc1);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(11)
				return tmp11;
			}
		}
	}
	HX_STACK_LINE(13)
	int tmp = (s0.length - s1.length);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Const_obj,compareString,return )


Const_obj::Const_obj()
{
}

bool Const_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GRID") ) { outValue = GRID; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = VERSION; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"compareString") ) { outValue = compareString_dyn(); return true;  }
	}
	return false;
}

bool Const_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"GRID") ) { GRID=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Const_obj::GRID,HX_HCSTRING("GRID","\xc6","\x9e","\x2c","\x2f")},
	{hx::fsString,(void *) &Const_obj::VERSION,HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Const_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Const_obj::GRID,"GRID");
	HX_MARK_MEMBER_NAME(Const_obj::VERSION,"VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Const_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Const_obj::GRID,"GRID");
	HX_VISIT_MEMBER_NAME(Const_obj::VERSION,"VERSION");
};

#endif

hx::Class Const_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("GRID","\xc6","\x9e","\x2c","\x2f"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("compareString","\x56","\x3f","\x65","\x8e"),
	::String(null()) };

void Const_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core3.Const","\x49","\xe7","\x71","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Const_obj::__GetStatic;
	__mClass->mSetStaticField = &Const_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Const_obj >;
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

void Const_obj::__boot()
{
	GRID= (int)32;
	VERSION= HX_HCSTRING("1.0.0","\xb5","\xd1","\x2e","\x55");
}

} // end namespace core3
