#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_FocusEvent
#include <nme/events/FocusEvent.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
namespace nme{
namespace events{

Void FocusEvent_obj::__construct(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::nme::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode,::String __o_direction)
{
HX_STACK_FRAME("nme.events.FocusEvent","new",0x0a5279c1,"nme.events.FocusEvent.new","nme/events/FocusEvent.hx",19,0x7f4c72af)
HX_STACK_THIS(this)
HX_STACK_ARG(inType,"inType")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(relatedObject,"relatedObject")
HX_STACK_ARG(__o_shiftKey,"shiftKey")
HX_STACK_ARG(__o_keyCode,"keyCode")
HX_STACK_ARG(__o_direction,"direction")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
int keyCode = __o_keyCode.Default(0);
::String direction = __o_direction.Default(HX_HCSTRING("none","\xb8","\x12","\x0a","\x49"));
{
	HX_STACK_LINE(20)
	::String tmp = inType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(22)
	this->relatedObject = relatedObject;
	HX_STACK_LINE(23)
	this->keyCode = keyCode;
	HX_STACK_LINE(24)
	this->shiftKey = shiftKey;
}
;
	return null();
}

//FocusEvent_obj::~FocusEvent_obj() { }

Dynamic FocusEvent_obj::__CreateEmpty() { return  new FocusEvent_obj; }
hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String inType,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::nme::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode,::String __o_direction)
{  hx::ObjectPtr< FocusEvent_obj > _result_ = new FocusEvent_obj();
	_result_->__construct(inType,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode,__o_direction);
	return _result_;}

Dynamic FocusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FocusEvent_obj > _result_ = new FocusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::nme::events::Event FocusEvent_obj::clone( ){
	HX_STACK_FRAME("nme.events.FocusEvent","clone",0xce6796fe,"nme.events.FocusEvent.clone","nme/events/FocusEvent.hx",28,0x7f4c72af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(29)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(29)
	::nme::display::InteractiveObject tmp3 = this->relatedObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	bool tmp4 = this->shiftKey;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	int tmp5 = this->keyCode;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	::nme::events::FocusEvent tmp6 = ::nme::events::FocusEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(29)
	return tmp6;
}


::String FocusEvent_obj::toString( ){
	HX_STACK_FRAME("nme.events.FocusEvent","toString",0x4e4987ab,"nme.events.FocusEvent.toString","nme/events/FocusEvent.hx",33,0x7f4c72af)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	::String tmp = this->get_type();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::String tmp1 = (HX_HCSTRING("[FocusEvent type=","\x40","\x6d","\x12","\x39") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	::String tmp2 = (tmp1 + HX_HCSTRING(" bubbles=","\x16","\x5f","\xba","\x28"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(34)
	bool tmp3 = this->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(34)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(34)
	::String tmp6 = (tmp5 + HX_HCSTRING(" cancelable=","\x89","\x25","\xe0","\x5d"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	bool tmp7 = this->get_cancelable();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(34)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(34)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(34)
	::String tmp10 = (tmp9 + HX_HCSTRING(" relatedObject=","\x13","\x62","\xef","\x68"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(34)
	::nme::display::InteractiveObject tmp11 = this->relatedObject;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(34)
	::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	::String tmp13 = (tmp10 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(34)
	::String tmp14 = (tmp13 + HX_HCSTRING(" shiftKey=","\x40","\x5f","\x4f","\xdb"));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	bool tmp15 = this->shiftKey;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(34)
	::String tmp16 = ::Std_obj::string(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(34)
	::String tmp17 = (tmp14 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(34)
	::String tmp18 = (tmp17 + HX_HCSTRING(" keyCode=","\x71","\x1c","\xed","\xec"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(34)
	int tmp19 = this->keyCode;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(34)
	::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(34)
	::String tmp21 = (tmp20 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(34)
	return tmp21;
}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	::nme::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	::nme::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FocusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return keyCode; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return shiftKey; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return relatedObject; }
	}
	return super::__Field(inName,inCallProp);
}

bool FocusEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { outValue = FOCUS_IN; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { outValue = FOCUS_OUT; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { outValue = KEY_FOCUS_CHANGE; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { outValue = MOUSE_FOCUS_CHANGE; return true;  }
	}
	return false;
}

Dynamic FocusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast< ::nme::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FocusEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"FOCUS_IN") ) { FOCUS_IN=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"FOCUS_OUT") ) { FOCUS_OUT=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"KEY_FOCUS_CHANGE") ) { KEY_FOCUS_CHANGE=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"MOUSE_FOCUS_CHANGE") ) { MOUSE_FOCUS_CHANGE=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsObject /*::nme::display::InteractiveObject*/ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_IN,HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b")},
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_OUT,HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c")},
	{hx::fsString,(void *) &FocusEvent_obj::KEY_FOCUS_CHANGE,HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94")},
	{hx::fsString,(void *) &FocusEvent_obj::MOUSE_FOCUS_CHANGE,HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#endif

hx::Class FocusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b"),
	HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c"),
	HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94"),
	HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d"),
	::String(null()) };

void FocusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.FocusEvent","\x4f","\x85","\xc8","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FocusEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &FocusEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusEvent_obj >;
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

void FocusEvent_obj::__boot()
{
	FOCUS_IN= HX_HCSTRING("focusIn","\xdd","\x45","\x83","\x41");
	FOCUS_OUT= HX_HCSTRING("focusOut","\x96","\x6f","\x5e","\x11");
	KEY_FOCUS_CHANGE= HX_HCSTRING("keyFocusChange","\x09","\x9c","\x8e","\xe5");
	MOUSE_FOCUS_CHANGE= HX_HCSTRING("mouseFocusChange","\x43","\xf1","\x81","\x96");
}

} // end namespace nme
} // end namespace events
