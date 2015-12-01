#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_TimerPollClient
#include <haxe/TimerPollClient.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
namespace haxe{

Void TimerPollClient_obj::__construct()
{
HX_STACK_FRAME("haxe.TimerPollClient","new",0xb5354e19,"haxe.TimerPollClient.new","haxe/Timer.hx",101,0x1a690682)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//TimerPollClient_obj::~TimerPollClient_obj() { }

Dynamic TimerPollClient_obj::__CreateEmpty() { return  new TimerPollClient_obj; }
hx::ObjectPtr< TimerPollClient_obj > TimerPollClient_obj::__new()
{  hx::ObjectPtr< TimerPollClient_obj > _result_ = new TimerPollClient_obj();
	_result_->__construct();
	return _result_;}

Dynamic TimerPollClient_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimerPollClient_obj > _result_ = new TimerPollClient_obj();
	_result_->__construct();
	return _result_;}

hx::Object *TimerPollClient_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::app::IPollClient_obj)) return operator ::nme::app::IPollClient_obj *();
	return super::__ToInterface(inType);
}

TimerPollClient_obj::operator ::nme::app::IPollClient_obj *()
	{ return new ::nme::app::IPollClient_delegate_< TimerPollClient_obj >(this); }
Void TimerPollClient_obj::onPoll( Float timestamp){
{
		HX_STACK_FRAME("haxe.TimerPollClient","onPoll",0xd499a2e5,"haxe.TimerPollClient.onPoll","haxe/Timer.hx",102,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(102)
		Float tmp = timestamp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(102)
		::haxe::Timer_obj::nmeCheckTimers(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TimerPollClient_obj,onPoll,(void))

Float TimerPollClient_obj::getNextWake( Float defaultWake,Float timestamp){
	HX_STACK_FRAME("haxe.TimerPollClient","getNextWake",0x6f4e2426,"haxe.TimerPollClient.getNextWake","haxe/Timer.hx",104,0x1a690682)
	HX_STACK_THIS(this)
	HX_STACK_ARG(defaultWake,"defaultWake")
	HX_STACK_ARG(timestamp,"timestamp")
	HX_STACK_LINE(104)
	Float tmp = defaultWake;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	Float tmp1 = timestamp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	Float tmp2 = ::haxe::Timer_obj::nmeGetNextWake(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(TimerPollClient_obj,getNextWake,return )


TimerPollClient_obj::TimerPollClient_obj()
{
}

Dynamic TimerPollClient_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onPoll") ) { return onPoll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getNextWake") ) { return getNextWake_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("onPoll","\xfe","\x86","\xe6","\xec"),
	HX_HCSTRING("getNextWake","\x6d","\xc5","\xb2","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimerPollClient_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimerPollClient_obj::__mClass,"__mClass");
};

#endif

hx::Class TimerPollClient_obj::__mClass;

void TimerPollClient_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.TimerPollClient","\xa7","\x4d","\xe4","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TimerPollClient_obj >;
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

} // end namespace haxe
