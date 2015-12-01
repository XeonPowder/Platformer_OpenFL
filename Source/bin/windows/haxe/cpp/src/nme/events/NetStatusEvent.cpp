#include <hxcpp.h>

#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_NetStatusEvent
#include <nme/events/NetStatusEvent.h>
#endif
namespace nme{
namespace events{

Void NetStatusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic inInfo)
{
HX_STACK_FRAME("nme.events.NetStatusEvent","new",0xb12bb9ca,"nme.events.NetStatusEvent.new","nme/events/NetStatusEvent.hx",13,0x01cf36c6)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(inInfo,"inInfo")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(14)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1,tmp2);
	HX_STACK_LINE(15)
	this->info = inInfo;
}
;
	return null();
}

//NetStatusEvent_obj::~NetStatusEvent_obj() { }

Dynamic NetStatusEvent_obj::__CreateEmpty() { return  new NetStatusEvent_obj; }
hx::ObjectPtr< NetStatusEvent_obj > NetStatusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,Dynamic inInfo)
{  hx::ObjectPtr< NetStatusEvent_obj > _result_ = new NetStatusEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,inInfo);
	return _result_;}

Dynamic NetStatusEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetStatusEvent_obj > _result_ = new NetStatusEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String NetStatusEvent_obj::NET_STATUS;


NetStatusEvent_obj::NetStatusEvent_obj()
{
}

void NetStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStatusEvent);
	HX_MARK_MEMBER_NAME(info,"info");
	::nme::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	::nme::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NetStatusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return info; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NetStatusEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetStatusEvent_obj,info),HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &NetStatusEvent_obj::NET_STATUS,HX_HCSTRING("NET_STATUS","\x34","\xea","\x44","\x5d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStatusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStatusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#endif

hx::Class NetStatusEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NET_STATUS","\x34","\xea","\x44","\x5d"),
	::String(null()) };

void NetStatusEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.NetStatusEvent","\xd8","\xcc","\x8c","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetStatusEvent_obj >;
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

void NetStatusEvent_obj::__boot()
{
	NET_STATUS= HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46");
}

} // end namespace nme
} // end namespace events
