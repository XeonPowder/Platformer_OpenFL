#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCInterp
#include <pgr/dconsole/DCInterp.h>
#endif
namespace pgr{
namespace dconsole{

Void DCInterp_obj::__construct()
{
HX_STACK_FRAME("pgr.dconsole.DCInterp","new",0x4381aaed,"pgr.dconsole.DCInterp.new","pgr/dconsole/DCInterp.hx",10,0xe684a543)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct();
	HX_STACK_LINE(12)
	this->declared = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(13)
	this->depth = (int)0;
}
;
	return null();
}

//DCInterp_obj::~DCInterp_obj() { }

Dynamic DCInterp_obj::__CreateEmpty() { return  new DCInterp_obj; }
hx::ObjectPtr< DCInterp_obj > DCInterp_obj::__new()
{  hx::ObjectPtr< DCInterp_obj > _result_ = new DCInterp_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCInterp_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCInterp_obj > _result_ = new DCInterp_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCInterp_obj::get( Dynamic o,::String f){
	HX_STACK_FRAME("pgr.dconsole.DCInterp","get",0x437c5b23,"pgr.dconsole.DCInterp.get","pgr/dconsole/DCInterp.hx",16,0xe684a543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(17)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	if ((tmp)){
		HX_STACK_LINE(17)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(18)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	Dynamic tmp3 = ::Reflect_obj::getProperty(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(18)
	return tmp3;
}


Dynamic DCInterp_obj::set( Dynamic o,::String f,Dynamic v){
	HX_STACK_FRAME("pgr.dconsole.DCInterp","set",0x4385762f,"pgr.dconsole.DCInterp.set","pgr/dconsole/DCInterp.hx",21,0xe684a543)
	HX_STACK_THIS(this)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(22)
	bool tmp = (o == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	if ((tmp)){
		HX_STACK_LINE(22)
		::String tmp1 = f;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		::hscript::Error tmp2 = ::hscript::Error_obj::EInvalidAccess(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(22)
		HX_STACK_DO_THROW(tmp2);
	}
	HX_STACK_LINE(23)
	Dynamic tmp1 = o;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	::String tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	Dynamic tmp3 = v;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::Reflect_obj::setProperty(tmp1,tmp2,tmp3);
	HX_STACK_LINE(24)
	Dynamic tmp4 = v;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	return tmp4;
}



DCInterp_obj::DCInterp_obj()
{
}

Dynamic DCInterp_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCInterp_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCInterp_obj::__mClass,"__mClass");
};

#endif

hx::Class DCInterp_obj::__mClass;

void DCInterp_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCInterp","\x7b","\xb0","\x64","\xca");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCInterp_obj >;
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
