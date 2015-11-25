#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ALIAS_TYPE
#include <pgr/dconsole/ALIAS_TYPE.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCCommands
#include <pgr/dconsole/DCCommands.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCUtil
#include <pgr/dconsole/DCUtil.h>
#endif
namespace pgr{
namespace dconsole{

Void DCUtil_obj::__construct()
{
	return null();
}

//DCUtil_obj::~DCUtil_obj() { }

Dynamic DCUtil_obj::__CreateEmpty() { return  new DCUtil_obj; }
hx::ObjectPtr< DCUtil_obj > DCUtil_obj::__new()
{  hx::ObjectPtr< DCUtil_obj > _result_ = new DCUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCUtil_obj > _result_ = new DCUtil_obj();
	_result_->__construct();
	return _result_;}

::String DCUtil_obj::formatAlias( ::pgr::dconsole::DCCommands commands,::String alias,::pgr::dconsole::ALIAS_TYPE type){
	HX_STACK_FRAME("pgr.dconsole.DCUtil","formatAlias",0x65795dd4,"pgr.dconsole.DCUtil.formatAlias","pgr/dconsole/DCUtil.hx",12,0x1b377f95)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(alias,"alias")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(13)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(16)
	bool tmp = (alias == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(16)
	if ((tmp1)){
		HX_STACK_LINE(16)
		tmp2 = (alias == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
	else{
		HX_STACK_LINE(16)
		tmp2 = true;
	}
	HX_STACK_LINE(16)
	if ((tmp2)){
		HX_STACK_LINE(17)
		return null();
	}
	HX_STACK_LINE(22)
	::EReg tmp3 = ::EReg_obj::__new(HX_HCSTRING("^[a-zA-Z_\\x7f-\\xff][a-zA-Z0-9_\\x7f-\\xff]*","\xae","\x3c","\xa6","\x92"),HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	::EReg r = tmp3;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(23)
	::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	bool tmp5 = r->match(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	if ((tmp6)){
		HX_STACK_LINE(24)
		return null();
	}
	HX_STACK_LINE(27)
	bool tmp7 = (type == ::pgr::dconsole::ALIAS_TYPE_obj::COMMAND);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	if ((tmp7)){
		HX_STACK_LINE(28)
		::String tmp8 = alias.toLowerCase();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		alias = tmp8;
	}
	HX_STACK_LINE(31)
	::String aux = alias;		HX_STACK_VAR(aux,"aux");
	HX_STACK_LINE(35)
	while((true)){
		HX_STACK_LINE(35)
		::String tmp8 = alias;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(35)
		Dynamic tmp9 = commands->getCommand(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(35)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(35)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(35)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(35)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(35)
		if ((tmp12)){
			HX_STACK_LINE(36)
			::String tmp14 = alias;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(36)
			::String tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(36)
			::String tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(36)
			Dynamic tmp17 = commands->getObject(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(36)
			Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(36)
			Dynamic tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(36)
			tmp13 = (tmp19 != null());
		}
		else{
			HX_STACK_LINE(35)
			tmp13 = true;
		}
		HX_STACK_LINE(35)
		bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(35)
		bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(35)
		bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(35)
		if ((tmp15)){
			HX_STACK_LINE(37)
			::String tmp17 = alias;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(37)
			::String tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(37)
			::String tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(37)
			Dynamic tmp20 = commands->getFunction(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(37)
			Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(37)
			Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(37)
			tmp16 = (tmp22 != null());
		}
		else{
			HX_STACK_LINE(35)
			tmp16 = true;
		}
		HX_STACK_LINE(35)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(35)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(35)
		if ((tmp17)){
			HX_STACK_LINE(38)
			::String tmp19 = alias;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(38)
			::String tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(38)
			::hx::Class tmp21 = commands->getClass(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(38)
			::hx::Class tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(38)
			tmp18 = (tmp22 != null());
		}
		else{
			HX_STACK_LINE(35)
			tmp18 = true;
		}
		HX_STACK_LINE(35)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(35)
		if ((tmp19)){
			HX_STACK_LINE(35)
			break;
		}
		HX_STACK_LINE(40)
		switch( (int)(type->__Index())){
			case (int)0: {
				HX_STACK_LINE(43)
				::String tmp20 = (HX_HCSTRING("c","\x63","\x00","\x00","\x00") + alias);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(43)
				alias = tmp20;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(46)
				::String tmp20 = (HX_HCSTRING("f","\x66","\x00","\x00","\x00") + alias);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(46)
				alias = tmp20;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(49)
				::String tmp20 = aux;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(49)
				int tmp21 = i;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(49)
				::String tmp22 = ::Std_obj::string(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(49)
				::String tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(49)
				alias = tmp23;
				HX_STACK_LINE(50)
				(i)++;
			}
			;break;
		}
	}
	HX_STACK_LINE(54)
	::String tmp8 = alias;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(54)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(DCUtil_obj,formatAlias,return )


DCUtil_obj::DCUtil_obj()
{
}

bool DCUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"formatAlias") ) { outValue = formatAlias_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCUtil_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCUtil_obj::__mClass,"__mClass");
};

#endif

hx::Class DCUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("formatAlias","\xd9","\xaa","\xaa","\xda"),
	::String(null()) };

void DCUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCUtil","\xe9","\xc6","\xa5","\xf9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DCUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DCUtil_obj >;
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

} // end namespace pgr
} // end namespace dconsole
