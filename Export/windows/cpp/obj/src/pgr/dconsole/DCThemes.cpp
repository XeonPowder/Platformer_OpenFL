#include <hxcpp.h>

#ifndef INCLUDED_pgr_dconsole_DCThemes
#include <pgr/dconsole/DCThemes.h>
#endif
namespace pgr{
namespace dconsole{

Void DCThemes_obj::__construct()
{
HX_STACK_FRAME("pgr.dconsole.DCThemes","new",0x0f536e63,"pgr.dconsole.DCThemes.new","pgr/dconsole/DCThemes.hx",77,0xe894828d)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DCThemes_obj::~DCThemes_obj() { }

Dynamic DCThemes_obj::__CreateEmpty() { return  new DCThemes_obj; }
hx::ObjectPtr< DCThemes_obj > DCThemes_obj::__new()
{  hx::ObjectPtr< DCThemes_obj > _result_ = new DCThemes_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCThemes_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCThemes_obj > _result_ = new DCThemes_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCThemes_obj::current;

Dynamic DCThemes_obj::LIGHT;

Dynamic DCThemes_obj::DARK;


DCThemes_obj::DCThemes_obj()
{
}

bool DCThemes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DARK") ) { outValue = DARK; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { outValue = LIGHT; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { outValue = current; return true;  }
	}
	return false;
}

bool DCThemes_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"DARK") ) { DARK=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LIGHT") ) { LIGHT=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DCThemes_obj::current,HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DCThemes_obj::LIGHT,HX_HCSTRING("LIGHT","\xb6","\xc8","\xea","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DCThemes_obj::DARK,HX_HCSTRING("DARK","\x76","\x1c","\x24","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCThemes_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DCThemes_obj::current,"current");
	HX_MARK_MEMBER_NAME(DCThemes_obj::LIGHT,"LIGHT");
	HX_MARK_MEMBER_NAME(DCThemes_obj::DARK,"DARK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCThemes_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DCThemes_obj::current,"current");
	HX_VISIT_MEMBER_NAME(DCThemes_obj::LIGHT,"LIGHT");
	HX_VISIT_MEMBER_NAME(DCThemes_obj::DARK,"DARK");
};

#endif

hx::Class DCThemes_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("current","\x39","\x9c","\xe3","\xcb"),
	HX_HCSTRING("LIGHT","\xb6","\xc8","\xea","\xf2"),
	HX_HCSTRING("DARK","\x76","\x1c","\x24","\x2d"),
	::String(null()) };

void DCThemes_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCThemes","\xf1","\x00","\x06","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DCThemes_obj::__GetStatic;
	__mClass->mSetStaticField = &DCThemes_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DCThemes_obj >;
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

void DCThemes_obj::__boot()
{
struct _Function_0_1{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCThemes.hx",37,0xe894828d)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_HCSTRING("CON_C","\xa6","\x3b","\x4c","\xc8") , (int)12961221,false);
			__result->Add(HX_HCSTRING("CON_TXT_C","\x37","\xba","\x44","\x1b") , (int)0,false);
			__result->Add(HX_HCSTRING("CON_A","\xa4","\x3b","\x4c","\xc8") , ((Float).7),false);
			__result->Add(HX_HCSTRING("CON_TXT_A","\x35","\xba","\x44","\x1b") , ((Float)((int)1)),false);
			__result->Add(HX_HCSTRING("PRM_C","\xcf","\xa7","\x7c","\x46") , (int)12961221,false);
			__result->Add(HX_HCSTRING("PRM_TXT_C","\xe0","\xee","\x88","\x53") , (int)0,false);
			__result->Add(HX_HCSTRING("MON_C","\xb0","\x08","\x4e","\x8a") , (int)0,false);
			__result->Add(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58") , (int)16777215,false);
			__result->Add(HX_HCSTRING("MON_A","\xae","\x08","\x4e","\x8a") , ((Float).7),false);
			__result->Add(HX_HCSTRING("MON_TXT_A","\x3f","\xd4","\xb2","\x58") , ((Float).7),false);
			__result->Add(HX_HCSTRING("LOG_WAR","\x6d","\x74","\x11","\x0f") , (int)6710784,false);
			__result->Add(HX_HCSTRING("LOG_ERR","\xaa","\xda","\x03","\x0f") , (int)7798784,false);
			__result->Add(HX_HCSTRING("LOG_INF","\x26","\xe0","\x06","\x0f") , (int)26214,false);
			__result->Add(HX_HCSTRING("LOG_CON","\x87","\x53","\x02","\x0f") , (int)30464,false);
			return __result;
		}
		return null();
	}
};
	LIGHT= _Function_0_1::Block();
struct _Function_0_2{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCThemes.hx",57,0xe894828d)
		{
			hx::Anon __result = hx::Anon_obj::Create();
			__result->Add(HX_HCSTRING("CON_C","\xa6","\x3b","\x4c","\xc8") , (int)3487029,false);
			__result->Add(HX_HCSTRING("CON_TXT_C","\x37","\xba","\x44","\x1b") , (int)16777215,false);
			__result->Add(HX_HCSTRING("CON_A","\xa4","\x3b","\x4c","\xc8") , ((Float).7),false);
			__result->Add(HX_HCSTRING("CON_TXT_A","\x35","\xba","\x44","\x1b") , ((Float)((int)1)),false);
			__result->Add(HX_HCSTRING("PRM_C","\xcf","\xa7","\x7c","\x46") , (int)4539717,false);
			__result->Add(HX_HCSTRING("PRM_TXT_C","\xe0","\xee","\x88","\x53") , (int)16777215,false);
			__result->Add(HX_HCSTRING("MON_C","\xb0","\x08","\x4e","\x8a") , (int)0,false);
			__result->Add(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58") , (int)16777215,false);
			__result->Add(HX_HCSTRING("MON_A","\xae","\x08","\x4e","\x8a") , ((Float).7),false);
			__result->Add(HX_HCSTRING("MON_TXT_A","\x3f","\xd4","\xb2","\x58") , ((Float).7),false);
			__result->Add(HX_HCSTRING("LOG_WAR","\x6d","\x74","\x11","\x0f") , (int)16776960,false);
			__result->Add(HX_HCSTRING("LOG_ERR","\xaa","\xda","\x03","\x0f") , (int)16711680,false);
			__result->Add(HX_HCSTRING("LOG_INF","\x26","\xe0","\x06","\x0f") , (int)65535,false);
			__result->Add(HX_HCSTRING("LOG_CON","\x87","\x53","\x02","\x0f") , (int)65280,false);
			return __result;
		}
		return null();
	}
};
	DARK= _Function_0_2::Block();
}

} // end namespace pgr
} // end namespace dconsole
