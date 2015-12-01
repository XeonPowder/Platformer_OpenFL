#include <hxcpp.h>

#ifndef INCLUDED_nme_events_EventPhase
#include <nme/events/EventPhase.h>
#endif
namespace nme{
namespace events{

Void EventPhase_obj::__construct()
{
	return null();
}

//EventPhase_obj::~EventPhase_obj() { }

Dynamic EventPhase_obj::__CreateEmpty() { return  new EventPhase_obj; }
hx::ObjectPtr< EventPhase_obj > EventPhase_obj::__new()
{  hx::ObjectPtr< EventPhase_obj > _result_ = new EventPhase_obj();
	_result_->__construct();
	return _result_;}

Dynamic EventPhase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventPhase_obj > _result_ = new EventPhase_obj();
	_result_->__construct();
	return _result_;}

int EventPhase_obj::CAPTURING_PHASE;

int EventPhase_obj::AT_TARGET;

int EventPhase_obj::BUBBLING_PHASE;


EventPhase_obj::EventPhase_obj()
{
}

bool EventPhase_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"AT_TARGET") ) { outValue = AT_TARGET; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUBBLING_PHASE") ) { outValue = BUBBLING_PHASE; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CAPTURING_PHASE") ) { outValue = CAPTURING_PHASE; return true;  }
	}
	return false;
}

bool EventPhase_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"AT_TARGET") ) { AT_TARGET=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BUBBLING_PHASE") ) { BUBBLING_PHASE=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"CAPTURING_PHASE") ) { CAPTURING_PHASE=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &EventPhase_obj::CAPTURING_PHASE,HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84")},
	{hx::fsInt,(void *) &EventPhase_obj::AT_TARGET,HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb")},
	{hx::fsInt,(void *) &EventPhase_obj::BUBBLING_PHASE,HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventPhase_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EventPhase_obj::CAPTURING_PHASE,"CAPTURING_PHASE");
	HX_MARK_MEMBER_NAME(EventPhase_obj::AT_TARGET,"AT_TARGET");
	HX_MARK_MEMBER_NAME(EventPhase_obj::BUBBLING_PHASE,"BUBBLING_PHASE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventPhase_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::CAPTURING_PHASE,"CAPTURING_PHASE");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::AT_TARGET,"AT_TARGET");
	HX_VISIT_MEMBER_NAME(EventPhase_obj::BUBBLING_PHASE,"BUBBLING_PHASE");
};

#endif

hx::Class EventPhase_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CAPTURING_PHASE","\xbf","\x7a","\xf0","\x84"),
	HX_HCSTRING("AT_TARGET","\x5d","\xcc","\xbf","\xfb"),
	HX_HCSTRING("BUBBLING_PHASE","\xe5","\xf7","\xce","\xf4"),
	::String(null()) };

void EventPhase_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.EventPhase","\xee","\x4d","\xe6","\xa5");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventPhase_obj::__GetStatic;
	__mClass->mSetStaticField = &EventPhase_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< EventPhase_obj >;
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

void EventPhase_obj::__boot()
{
	CAPTURING_PHASE= (int)0;
	AT_TARGET= (int)1;
	BUBBLING_PHASE= (int)2;
}

} // end namespace nme
} // end namespace events
