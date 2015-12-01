#include <hxcpp.h>

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_StageVideoAvailabilityEvent
#include <nme/events/StageVideoAvailabilityEvent.h>
#endif
namespace nme{
namespace events{

Void StageVideoAvailabilityEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String inAvailability)
{
HX_STACK_FRAME("nme.events.StageVideoAvailabilityEvent","new",0xf9dbe047,"nme.events.StageVideoAvailabilityEvent.new","nme/events/StageVideoAvailabilityEvent.hx",10,0x59452f29)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(inAvailability,"inAvailability")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(11)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(12)
	this->availability = inAvailability;
}
;
	return null();
}

//StageVideoAvailabilityEvent_obj::~StageVideoAvailabilityEvent_obj() { }

Dynamic StageVideoAvailabilityEvent_obj::__CreateEmpty() { return  new StageVideoAvailabilityEvent_obj; }
hx::ObjectPtr< StageVideoAvailabilityEvent_obj > StageVideoAvailabilityEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,::String inAvailability)
{  hx::ObjectPtr< StageVideoAvailabilityEvent_obj > _result_ = new StageVideoAvailabilityEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,inAvailability);
	return _result_;}

Dynamic StageVideoAvailabilityEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageVideoAvailabilityEvent_obj > _result_ = new StageVideoAvailabilityEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String StageVideoAvailabilityEvent_obj::STAGE_VIDEO_AVAILABILITY;


StageVideoAvailabilityEvent_obj::StageVideoAvailabilityEvent_obj()
{
}

void StageVideoAvailabilityEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StageVideoAvailabilityEvent);
	HX_MARK_MEMBER_NAME(availability,"availability");
	::nme::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StageVideoAvailabilityEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(availability,"availability");
	::nme::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StageVideoAvailabilityEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"availability") ) { return availability; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StageVideoAvailabilityEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"availability") ) { availability=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StageVideoAvailabilityEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("availability","\xdb","\xfc","\xf2","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StageVideoAvailabilityEvent_obj,availability),HX_HCSTRING("availability","\xdb","\xfc","\xf2","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &StageVideoAvailabilityEvent_obj::STAGE_VIDEO_AVAILABILITY,HX_HCSTRING("STAGE_VIDEO_AVAILABILITY","\xc0","\x7a","\xae","\x29")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("availability","\xdb","\xfc","\xf2","\x7f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageVideoAvailabilityEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageVideoAvailabilityEvent_obj::STAGE_VIDEO_AVAILABILITY,"STAGE_VIDEO_AVAILABILITY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageVideoAvailabilityEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageVideoAvailabilityEvent_obj::STAGE_VIDEO_AVAILABILITY,"STAGE_VIDEO_AVAILABILITY");
};

#endif

hx::Class StageVideoAvailabilityEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("STAGE_VIDEO_AVAILABILITY","\xc0","\x7a","\xae","\x29"),
	::String(null()) };

void StageVideoAvailabilityEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.StageVideoAvailabilityEvent","\xd5","\xb0","\xae","\x41");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StageVideoAvailabilityEvent_obj >;
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

void StageVideoAvailabilityEvent_obj::__boot()
{
	STAGE_VIDEO_AVAILABILITY= HX_HCSTRING("stageVideoAvailability","\x58","\x09","\x7a","\x7e");
}

} // end namespace nme
} // end namespace events
