#include <hxcpp.h>

#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCEmptyInput
#include <pgr/dconsole/input/DCEmptyInput.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
namespace pgr{
namespace dconsole{
namespace input{

Void DCEmptyInput_obj::__construct()
{
HX_STACK_FRAME("pgr.dconsole.input.DCEmptyInput","new",0xeeeda63a,"pgr.dconsole.input.DCEmptyInput.new","pgr/dconsole/input/DCEmptyInput.hx",12,0x699ee3b5)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DCEmptyInput_obj::~DCEmptyInput_obj() { }

Dynamic DCEmptyInput_obj::__CreateEmpty() { return  new DCEmptyInput_obj; }
hx::ObjectPtr< DCEmptyInput_obj > DCEmptyInput_obj::__new()
{  hx::ObjectPtr< DCEmptyInput_obj > _result_ = new DCEmptyInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCEmptyInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCEmptyInput_obj > _result_ = new DCEmptyInput_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DCEmptyInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::pgr::dconsole::input::DCInput_obj)) return operator ::pgr::dconsole::input::DCInput_obj *();
	return super::__ToInterface(inType);
}

DCEmptyInput_obj::operator ::pgr::dconsole::input::DCInput_obj *()
	{ return new ::pgr::dconsole::input::DCInput_delegate_< DCEmptyInput_obj >(this); }
Void DCEmptyInput_obj::init( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCEmptyInput","init",0x1dbc83f6,"pgr.dconsole.input.DCEmptyInput.init","pgr/dconsole/input/DCEmptyInput.hx",13,0x699ee3b5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmptyInput_obj,init,(void))

Void DCEmptyInput_obj::enable( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCEmptyInput","enable",0xca197ce9,"pgr.dconsole.input.DCEmptyInput.enable","pgr/dconsole/input/DCEmptyInput.hx",14,0x699ee3b5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmptyInput_obj,enable,(void))

Void DCEmptyInput_obj::disable( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCEmptyInput","disable",0x3f5b34c2,"pgr.dconsole.input.DCEmptyInput.disable","pgr/dconsole/input/DCEmptyInput.hx",15,0x699ee3b5)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCEmptyInput_obj,disable,(void))


DCEmptyInput_obj::DCEmptyInput_obj()
{
}

void DCEmptyInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCEmptyInput);
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_END_CLASS();
}

void DCEmptyInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(console,"console");
}

Dynamic DCEmptyInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCEmptyInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCEmptyInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCEmptyInput_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCEmptyInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCEmptyInput_obj::__mClass,"__mClass");
};

#endif

hx::Class DCEmptyInput_obj::__mClass;

void DCEmptyInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.input.DCEmptyInput","\x48","\xc1","\xe3","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCEmptyInput_obj >;
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
} // end namespace input
