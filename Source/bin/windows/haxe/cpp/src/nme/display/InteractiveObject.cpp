#include <hxcpp.h>

#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
namespace nme{
namespace display{

Void InteractiveObject_obj::__construct(Dynamic inHandle,::String inType)
{
HX_STACK_FRAME("nme.display.InteractiveObject","new",0xfdae053f,"nme.display.InteractiveObject.new","nme/display/InteractiveObject.hx",16,0x2fbb5d13)
HX_STACK_THIS(this)
HX_STACK_ARG(inHandle,"inHandle")
HX_STACK_ARG(inType,"inType")
{
	HX_STACK_LINE(17)
	this->doubleClickEnabled = false;
	HX_STACK_LINE(18)
	this->nmeMouseEnabled = true;
	HX_STACK_LINE(20)
	Dynamic tmp = inHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1 = inType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//InteractiveObject_obj::~InteractiveObject_obj() { }

Dynamic InteractiveObject_obj::__CreateEmpty() { return  new InteractiveObject_obj; }
hx::ObjectPtr< InteractiveObject_obj > InteractiveObject_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct(inHandle,inType);
	return _result_;}

Dynamic InteractiveObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InteractiveObject_obj > _result_ = new InteractiveObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nme::display::InteractiveObject InteractiveObject_obj::nmeAsInteractiveObject( ){
	HX_STACK_FRAME("nme.display.InteractiveObject","nmeAsInteractiveObject",0xda3d37ca,"nme.display.InteractiveObject.nmeAsInteractiveObject","nme/display/InteractiveObject.hx",24,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return hx::ObjectPtr<OBJ_>(this);
}


bool InteractiveObject_obj::requestSoftKeyboard( ){
	HX_STACK_FRAME("nme.display.InteractiveObject","requestSoftKeyboard",0x3f10187f,"nme.display.InteractiveObject.requestSoftKeyboard","nme/display/InteractiveObject.hx",28,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = ::nme::display::InteractiveObject_obj::nme_display_object_request_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,requestSoftKeyboard,return )

bool InteractiveObject_obj::get_mouseEnabled( ){
	HX_STACK_FRAME("nme.display.InteractiveObject","get_mouseEnabled",0x60c62d26,"nme.display.InteractiveObject.get_mouseEnabled","nme/display/InteractiveObject.hx",33,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	bool tmp = this->nmeMouseEnabled;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_mouseEnabled,return )

bool InteractiveObject_obj::set_mouseEnabled( bool inVal){
	HX_STACK_FRAME("nme.display.InteractiveObject","set_mouseEnabled",0xb7081a9a,"nme.display.InteractiveObject.set_mouseEnabled","nme/display/InteractiveObject.hx",35,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(36)
	this->nmeMouseEnabled = inVal;
	HX_STACK_LINE(37)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	::nme::display::InteractiveObject_obj::nme_display_object_set_mouse_enabled(tmp,tmp1);
	HX_STACK_LINE(38)
	bool tmp2 = this->nmeMouseEnabled;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_mouseEnabled,return )

bool InteractiveObject_obj::set_moveForSoftKeyboard( bool inVal){
	HX_STACK_FRAME("nme.display.InteractiveObject","set_moveForSoftKeyboard",0x94935a4b,"nme.display.InteractiveObject.set_moveForSoftKeyboard","nme/display/InteractiveObject.hx",42,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(43)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(43)
	::nme::display::InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard(tmp,tmp1);
	HX_STACK_LINE(44)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(44)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_moveForSoftKeyboard,return )

bool InteractiveObject_obj::get_moveForSoftKeyboard( ){
	HX_STACK_FRAME("nme.display.InteractiveObject","get_moveForSoftKeyboard",0x9231f13f,"nme.display.InteractiveObject.get_moveForSoftKeyboard","nme/display/InteractiveObject.hx",48,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(49)
	bool tmp1 = ::nme::display::InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_moveForSoftKeyboard,return )

bool InteractiveObject_obj::set_needsSoftKeyboard( bool inVal){
	HX_STACK_FRAME("nme.display.InteractiveObject","set_needsSoftKeyboard",0xe6b5f430,"nme.display.InteractiveObject.set_needsSoftKeyboard","nme/display/InteractiveObject.hx",53,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(54)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(54)
	::nme::display::InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard(tmp,tmp1);
	HX_STACK_LINE(55)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(55)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(InteractiveObject_obj,set_needsSoftKeyboard,return )

bool InteractiveObject_obj::get_needsSoftKeyboard( ){
	HX_STACK_FRAME("nme.display.InteractiveObject","get_needsSoftKeyboard",0x92ad2624,"nme.display.InteractiveObject.get_needsSoftKeyboard","nme/display/InteractiveObject.hx",59,0x2fbb5d13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(60)
	bool tmp1 = ::nme::display::InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(InteractiveObject_obj,get_needsSoftKeyboard,return )

Dynamic InteractiveObject_obj::nme_display_object_set_mouse_enabled;

Dynamic InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard;

Dynamic InteractiveObject_obj::nme_display_object_request_soft_keyboard;


InteractiveObject_obj::InteractiveObject_obj()
{
}

Dynamic InteractiveObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp != hx::paccNever) return get_mouseEnabled(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeMouseEnabled") ) { return nmeMouseEnabled; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_mouseEnabled") ) { return get_mouseEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseEnabled") ) { return set_mouseEnabled_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp != hx::paccNever) return get_needsSoftKeyboard(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { return doubleClickEnabled; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp != hx::paccNever) return get_moveForSoftKeyboard(); }
		if (HX_FIELD_EQ(inName,"requestSoftKeyboard") ) { return requestSoftKeyboard_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"set_needsSoftKeyboard") ) { return set_needsSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"get_needsSoftKeyboard") ) { return get_needsSoftKeyboard_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeAsInteractiveObject") ) { return nmeAsInteractiveObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_moveForSoftKeyboard") ) { return set_moveForSoftKeyboard_dyn(); }
		if (HX_FIELD_EQ(inName,"get_moveForSoftKeyboard") ) { return get_moveForSoftKeyboard_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool InteractiveObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mouse_enabled") ) { outValue = nme_display_object_set_mouse_enabled; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_display_object_request_soft_keyboard") ) { outValue = nme_display_object_request_soft_keyboard; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_needs_soft_keyboard") ) { outValue = nme_display_object_set_needs_soft_keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_needs_soft_keyboard") ) { outValue = nme_display_object_get_needs_soft_keyboard; return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_moves_for_soft_keyboard") ) { outValue = nme_display_object_set_moves_for_soft_keyboard; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_moves_for_soft_keyboard") ) { outValue = nme_display_object_get_moves_for_soft_keyboard; return true;  }
	}
	return false;
}

Dynamic InteractiveObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"mouseEnabled") ) { if (inCallProp != hx::paccNever) return set_mouseEnabled(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeMouseEnabled") ) { nmeMouseEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"needsSoftKeyboard") ) { if (inCallProp != hx::paccNever) return set_needsSoftKeyboard(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"doubleClickEnabled") ) { doubleClickEnabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"moveForSoftKeyboard") ) { if (inCallProp != hx::paccNever) return set_moveForSoftKeyboard(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool InteractiveObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 36:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mouse_enabled") ) { nme_display_object_set_mouse_enabled=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_display_object_request_soft_keyboard") ) { nme_display_object_request_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_needs_soft_keyboard") ) { nme_display_object_set_needs_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_needs_soft_keyboard") ) { nme_display_object_get_needs_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_set_moves_for_soft_keyboard") ) { nme_display_object_set_moves_for_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_moves_for_soft_keyboard") ) { nme_display_object_get_moves_for_soft_keyboard=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void InteractiveObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"));
	outFields->push(HX_HCSTRING("mouseEnabled","\xdc","\x54","\xd6","\x5f"));
	outFields->push(HX_HCSTRING("moveForSoftKeyboard","\x49","\xcc","\x61","\xee"));
	outFields->push(HX_HCSTRING("needsSoftKeyboard","\xae","\x4a","\xa3","\xa9"));
	outFields->push(HX_HCSTRING("nmeMouseEnabled","\x42","\x49","\xc5","\x94"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,doubleClickEnabled),HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6")},
	{hx::fsBool,(int)offsetof(InteractiveObject_obj,nmeMouseEnabled),HX_HCSTRING("nmeMouseEnabled","\x42","\x49","\xc5","\x94")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_set_mouse_enabled,HX_HCSTRING("nme_display_object_set_mouse_enabled","\x00","\x8d","\x7f","\x35")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard,HX_HCSTRING("nme_display_object_set_needs_soft_keyboard","\xd3","\x0e","\x79","\xc7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard,HX_HCSTRING("nme_display_object_get_needs_soft_keyboard","\xc7","\xa5","\x17","\xc5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard,HX_HCSTRING("nme_display_object_set_moves_for_soft_keyboard","\x82","\x7d","\xfd","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard,HX_HCSTRING("nme_display_object_get_moves_for_soft_keyboard","\x76","\x9e","\x64","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &InteractiveObject_obj::nme_display_object_request_soft_keyboard,HX_HCSTRING("nme_display_object_request_soft_keyboard","\x22","\x81","\x10","\xba")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("doubleClickEnabled","\xca","\x95","\x95","\xe6"),
	HX_HCSTRING("nmeMouseEnabled","\x42","\x49","\xc5","\x94"),
	HX_HCSTRING("nmeAsInteractiveObject","\x49","\x85","\x3b","\x34"),
	HX_HCSTRING("requestSoftKeyboard","\xa0","\xf5","\xa9","\xd4"),
	HX_HCSTRING("get_mouseEnabled","\x65","\x41","\x75","\x64"),
	HX_HCSTRING("set_mouseEnabled","\xd9","\x2e","\xb7","\xba"),
	HX_HCSTRING("set_moveForSoftKeyboard","\xec","\xdb","\x18","\xf9"),
	HX_HCSTRING("get_moveForSoftKeyboard","\xe0","\x72","\xb7","\xf6"),
	HX_HCSTRING("set_needsSoftKeyboard","\x91","\x1b","\x5a","\x7c"),
	HX_HCSTRING("get_needsSoftKeyboard","\x85","\x4d","\x51","\x28"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_mouse_enabled,"nme_display_object_set_mouse_enabled");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard,"nme_display_object_set_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard,"nme_display_object_get_needs_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard,"nme_display_object_set_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard,"nme_display_object_get_moves_for_soft_keyboard");
	HX_MARK_MEMBER_NAME(InteractiveObject_obj::nme_display_object_request_soft_keyboard,"nme_display_object_request_soft_keyboard");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_mouse_enabled,"nme_display_object_set_mouse_enabled");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_needs_soft_keyboard,"nme_display_object_set_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_needs_soft_keyboard,"nme_display_object_get_needs_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_set_moves_for_soft_keyboard,"nme_display_object_set_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_get_moves_for_soft_keyboard,"nme_display_object_get_moves_for_soft_keyboard");
	HX_VISIT_MEMBER_NAME(InteractiveObject_obj::nme_display_object_request_soft_keyboard,"nme_display_object_request_soft_keyboard");
};

#endif

hx::Class InteractiveObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_display_object_set_mouse_enabled","\x00","\x8d","\x7f","\x35"),
	HX_HCSTRING("nme_display_object_set_needs_soft_keyboard","\xd3","\x0e","\x79","\xc7"),
	HX_HCSTRING("nme_display_object_get_needs_soft_keyboard","\xc7","\xa5","\x17","\xc5"),
	HX_HCSTRING("nme_display_object_set_moves_for_soft_keyboard","\x82","\x7d","\xfd","\x3d"),
	HX_HCSTRING("nme_display_object_get_moves_for_soft_keyboard","\x76","\x9e","\x64","\xfb"),
	HX_HCSTRING("nme_display_object_request_soft_keyboard","\x22","\x81","\x10","\xba"),
	::String(null()) };

void InteractiveObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.InteractiveObject","\xcd","\xf9","\x5c","\x31");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InteractiveObject_obj::__GetStatic;
	__mClass->mSetStaticField = &InteractiveObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< InteractiveObject_obj >;
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

void InteractiveObject_obj::__boot()
{
	nme_display_object_set_mouse_enabled= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_mouse_enabled","\x00","\x8d","\x7f","\x35"),(int)2);
	nme_display_object_set_needs_soft_keyboard= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_needs_soft_keyboard","\xd3","\x0e","\x79","\xc7"),(int)2);
	nme_display_object_get_needs_soft_keyboard= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_needs_soft_keyboard","\xc7","\xa5","\x17","\xc5"),(int)1);
	nme_display_object_set_moves_for_soft_keyboard= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_moves_for_soft_keyboard","\x82","\x7d","\xfd","\x3d"),(int)2);
	nme_display_object_get_moves_for_soft_keyboard= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_moves_for_soft_keyboard","\x76","\x9e","\x64","\xfb"),(int)1);
	nme_display_object_request_soft_keyboard= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_request_soft_keyboard","\x22","\x81","\x10","\xba"),(int)1);
}

} // end namespace nme
} // end namespace display
