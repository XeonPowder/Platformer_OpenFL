#include <hxcpp.h>

#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_TimerPollClient
#include <haxe/TimerPollClient.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
namespace haxe{

Void Timer_obj::__construct(Float inTimeMs)
{
HX_STACK_FRAME("haxe.Timer","new",0x4136b0cf,"haxe.Timer.new","haxe/Timer.hx",119,0x1a690682)
HX_STACK_THIS(this)
HX_STACK_ARG(inTimeMs,"inTimeMs")
{
	HX_STACK_LINE(120)
	bool tmp = (::haxe::Timer_obj::sRunningTimers == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(122)
		::haxe::Timer_obj::sRunningTimers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(123)
		::haxe::TimerPollClient tmp1 = ::haxe::TimerPollClient_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		::haxe::Timer_obj::sPollClient = tmp1;
		HX_STACK_LINE(124)
		::nme::app::IPollClient tmp2 = ::haxe::Timer_obj::sPollClient;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::nme::app::Application_obj::addPollClient(tmp2,null());
	}
	HX_STACK_LINE(128)
	Float tmp1 = (inTimeMs * ((Float)0.001));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(128)
	this->mTime = tmp1;
	HX_STACK_LINE(129)
	::haxe::Timer_obj::sRunningTimers->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(130)
	Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(130)
	Float tmp3 = this->mTime;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(130)
	Float tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(130)
	this->mFireAt = tmp4;
	HX_STACK_LINE(131)
	this->mRunning = true;
}
;
	return null();
}

//Timer_obj::~Timer_obj() { }

Dynamic Timer_obj::__CreateEmpty() { return  new Timer_obj; }
hx::ObjectPtr< Timer_obj > Timer_obj::__new(Float inTimeMs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inTimeMs);
	return _result_;}

Dynamic Timer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Timer_obj > _result_ = new Timer_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

HX_BEGIN_DEFAULT_FUNC(__default_run,Timer_obj)
Void run(){
{
		HX_STACK_FRAME("haxe.Timer","run",0x4139c7ba,"haxe.Timer.run","haxe/Timer.hx",143,0x1a690682)
		HX_STACK_THIS(this)
	}
return null();
}
HX_END_LOCAL_FUNC0((void))
HX_END_DEFAULT_FUNC

Void Timer_obj::stop( ){
{
		HX_STACK_FRAME("haxe.Timer","stop",0xd1fd70b3,"haxe.Timer.stop","haxe/Timer.hx",147,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_LINE(147)
		this->mRunning = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stop,(void))

Void Timer_obj::nmeCheck( Float inTime){
{
		HX_STACK_FRAME("haxe.Timer","nmeCheck",0x218e40d3,"haxe.Timer.nmeCheck","haxe/Timer.hx",173,0x1a690682)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTime,"inTime")
		HX_STACK_LINE(174)
		Float tmp = inTime;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(174)
		Float tmp1 = this->mFireAt;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(174)
		bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		if ((tmp2)){
			HX_STACK_LINE(176)
			Float tmp3 = this->mTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			hx::AddEq(this->mFireAt,tmp3);
			HX_STACK_LINE(177)
			this->run();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeCheck,(void))

Array< ::Dynamic > Timer_obj::sRunningTimers;

::nme::app::IPollClient Timer_obj::sPollClient;

Dynamic Timer_obj::measure( Dynamic f,Dynamic pos){
	HX_STACK_FRAME("haxe.Timer","measure",0x42373f4d,"haxe.Timer.measure","haxe/Timer.hx",135,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(136)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(136)
	Float t0 = tmp;		HX_STACK_VAR(t0,"t0");
	HX_STACK_LINE(137)
	Dynamic tmp1 = f();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	Dynamic r = tmp1;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(138)
	Float tmp2 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(138)
	Float tmp3 = t0;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(138)
	Float tmp4 = (tmp2 - tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(138)
	::String tmp5 = (tmp4 + HX_HCSTRING("s","\x73","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(138)
	Dynamic tmp6 = pos;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(138)
	::haxe::Log_obj::trace(tmp5,tmp6);
	HX_STACK_LINE(139)
	Dynamic tmp7 = r;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(139)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,measure,return )

Float Timer_obj::nmeGetNextWake( Float inDefaultWake,Float inStamp){
	HX_STACK_FRAME("haxe.Timer","nmeGetNextWake",0xd72487b8,"haxe.Timer.nmeGetNextWake","haxe/Timer.hx",154,0x1a690682)
	HX_STACK_ARG(inDefaultWake,"inDefaultWake")
	HX_STACK_ARG(inStamp,"inStamp")
	HX_STACK_LINE(155)
	Float wake = inDefaultWake;		HX_STACK_VAR(wake,"wake");
	HX_STACK_LINE(156)
	{
		HX_STACK_LINE(156)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(156)
		Array< ::Dynamic > _g1 = ::haxe::Timer_obj::sRunningTimers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(156)
		while((true)){
			HX_STACK_LINE(156)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(156)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(156)
			if ((tmp1)){
				HX_STACK_LINE(156)
				break;
			}
			HX_STACK_LINE(156)
			::haxe::Timer tmp2 = _g1->__get(_g).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(156)
			::haxe::Timer timer = tmp2;		HX_STACK_VAR(timer,"timer");
			HX_STACK_LINE(156)
			++(_g);
			HX_STACK_LINE(158)
			bool tmp3 = timer->mRunning;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(158)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(158)
			if ((tmp4)){
				HX_STACK_LINE(159)
				continue;
			}
			HX_STACK_LINE(160)
			Float tmp5 = (timer->mFireAt - inStamp);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(160)
			Float sleep = tmp5;		HX_STACK_VAR(sleep,"sleep");
			HX_STACK_LINE(161)
			bool tmp6 = (sleep < wake);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(161)
			if ((tmp6)){
				HX_STACK_LINE(163)
				wake = sleep;
				HX_STACK_LINE(164)
				bool tmp7 = (wake < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(164)
				if ((tmp7)){
					HX_STACK_LINE(165)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(168)
	Float tmp = wake;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(168)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,nmeGetNextWake,return )

Void Timer_obj::nmeCheckTimers( Float inStamp){
{
		HX_STACK_FRAME("haxe.Timer","nmeCheckTimers",0xb755a241,"haxe.Timer.nmeCheckTimers","haxe/Timer.hx",185,0x1a690682)
		HX_STACK_ARG(inStamp,"inStamp")
		HX_STACK_LINE(186)
		bool tmp = (::haxe::Timer_obj::sRunningTimers != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(186)
		if ((tmp)){
			HX_STACK_LINE(188)
			int tmp1 = ::haxe::Timer_obj::sRunningTimers->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(188)
			int timerCount = tmp1;		HX_STACK_VAR(timerCount,"timerCount");
			HX_STACK_LINE(189)
			int origTimerCount = timerCount;		HX_STACK_VAR(origTimerCount,"origTimerCount");
			HX_STACK_LINE(191)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(192)
			while((true)){
				HX_STACK_LINE(192)
				bool tmp2 = (i < timerCount);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(192)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(192)
				if ((tmp3)){
					HX_STACK_LINE(192)
					break;
				}
				HX_STACK_LINE(194)
				::haxe::Timer tmp4 = ::haxe::Timer_obj::sRunningTimers->__get(i).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(194)
				::haxe::Timer timer = tmp4;		HX_STACK_VAR(timer,"timer");
				HX_STACK_LINE(195)
				bool tmp5 = timer->mRunning;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(195)
				if ((tmp5)){
					HX_STACK_LINE(196)
					Float tmp6 = inStamp;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(196)
					timer->nmeCheck(tmp6);
				}
				HX_STACK_LINE(198)
				bool tmp6 = timer->mRunning;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(198)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(198)
				if ((tmp7)){
					HX_STACK_LINE(200)
					int tmp8 = (timerCount - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(200)
					::haxe::Timer tmp9 = ::haxe::Timer_obj::sRunningTimers->__get(tmp8).StaticCast< ::haxe::Timer >();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(200)
					::haxe::Timer_obj::sRunningTimers[i] = tmp9;
					HX_STACK_LINE(201)
					(timerCount)--;
				}
				else{
					HX_STACK_LINE(204)
					(i)++;
				}
			}
			HX_STACK_LINE(206)
			bool tmp2 = (timerCount < origTimerCount);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(206)
			if ((tmp2)){
				HX_STACK_LINE(207)
				int tmp3 = timerCount;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(207)
				int tmp4 = (origTimerCount - timerCount);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(207)
				::haxe::Timer_obj::sRunningTimers->slice(tmp3,tmp4);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Timer_obj,nmeCheckTimers,(void))

::haxe::Timer Timer_obj::delay( Dynamic f,int time){
	HX_STACK_FRAME("haxe.Timer","delay",0x3ed5f1b2,"haxe.Timer.delay","haxe/Timer.hx",213,0x1a690682)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(214)
	::haxe::Timer tmp = ::haxe::Timer_obj::__new(time);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	::haxe::Timer t = tmp;		HX_STACK_VAR(t,"t");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::haxe::Timer,t,Dynamic,f)
	int __ArgCount() const { return 0; }
	Void run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","haxe/Timer.hx",217,0x1a690682)
		{
			HX_STACK_LINE(218)
			t->stop();
			HX_STACK_LINE(219)
			f().Cast< Void >();
		}
		return null();
	}
	HX_END_LOCAL_FUNC0((void))

	HX_STACK_LINE(216)
	t->run =  Dynamic(new _Function_1_1(t,f));
	HX_STACK_LINE(222)
	::haxe::Timer tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Timer_obj,delay,return )

Float Timer_obj::stamp( ){
	HX_STACK_FRAME("haxe.Timer","stamp",0xebba8a32,"haxe.Timer.stamp","haxe/Timer.hx",226,0x1a690682)
	HX_STACK_LINE(227)
	Float tmp = ::haxe::Timer_obj::nme_time_stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Timer_obj,stamp,return )

Dynamic Timer_obj::nme_time_stamp;


Timer_obj::Timer_obj()
{
	run = new __default_run(this);
}

void Timer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Timer);
	HX_MARK_MEMBER_NAME(mTime,"mTime");
	HX_MARK_MEMBER_NAME(mFireAt,"mFireAt");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(run,"run");
	HX_MARK_END_CLASS();
}

void Timer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mTime,"mTime");
	HX_VISIT_MEMBER_NAME(mFireAt,"mFireAt");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(run,"run");
}

Dynamic Timer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { return run; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { return mTime; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { return mFireAt; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
		if (HX_FIELD_EQ(inName,"nmeCheck") ) { return nmeCheck_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Timer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { outValue = delay_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stamp") ) { outValue = stamp_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"measure") ) { outValue = measure_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sPollClient") ) { outValue = sPollClient; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { outValue = sRunningTimers; return true;  }
		if (HX_FIELD_EQ(inName,"nmeGetNextWake") ) { outValue = nmeGetNextWake_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nmeCheckTimers") ) { outValue = nmeCheckTimers_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { outValue = nme_time_stamp; return true;  }
	}
	return false;
}

Dynamic Timer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { run=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mTime") ) { mTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFireAt") ) { mFireAt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Timer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"sPollClient") ) { sPollClient=ioValue.Cast< ::nme::app::IPollClient >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"sRunningTimers") ) { sRunningTimers=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_time_stamp") ) { nme_time_stamp=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Timer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"));
	outFields->push(HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"));
	outFields->push(HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Timer_obj,mTime),HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa")},
	{hx::fsFloat,(int)offsetof(Timer_obj,mFireAt),HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72")},
	{hx::fsBool,(int)offsetof(Timer_obj,mRunning),HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Timer_obj,run),HX_HCSTRING("run","\x4b","\xe7","\x56","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Timer_obj::sRunningTimers,HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe")},
	{hx::fsObject /*::nme::app::IPollClient*/ ,(void *) &Timer_obj::sPollClient,HX_HCSTRING("sPollClient","\x3d","\xa8","\x16","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Timer_obj::nme_time_stamp,HX_HCSTRING("nme_time_stamp","\xaa","\xda","\xa6","\x05")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mTime","\x1a","\x33","\x83","\xfa"),
	HX_HCSTRING("mFireAt","\x96","\xea","\x58","\x72"),
	HX_HCSTRING("mRunning","\x12","\x2d","\x35","\x13"),
	HX_HCSTRING("run","\x4b","\xe7","\x56","\x00"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("nmeCheck","\xa2","\x13","\x40","\x83"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_MARK_MEMBER_NAME(Timer_obj::sPollClient,"sPollClient");
	HX_MARK_MEMBER_NAME(Timer_obj::nme_time_stamp,"nme_time_stamp");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Timer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Timer_obj::sRunningTimers,"sRunningTimers");
	HX_VISIT_MEMBER_NAME(Timer_obj::sPollClient,"sPollClient");
	HX_VISIT_MEMBER_NAME(Timer_obj::nme_time_stamp,"nme_time_stamp");
};

#endif

hx::Class Timer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sRunningTimers","\xfa","\xbb","\xcd","\xfe"),
	HX_HCSTRING("sPollClient","\x3d","\xa8","\x16","\x5d"),
	HX_HCSTRING("measure","\x5e","\xfb","\xe9","\x3c"),
	HX_HCSTRING("nmeGetNextWake","\xc7","\xdf","\xda","\x4e"),
	HX_HCSTRING("nmeCheckTimers","\x50","\xfa","\x0b","\x2f"),
	HX_HCSTRING("delay","\x83","\xd7","\x26","\xd7"),
	HX_HCSTRING("stamp","\x03","\x70","\x0b","\x84"),
	HX_HCSTRING("nme_time_stamp","\xaa","\xda","\xa6","\x05"),
	::String(null()) };

void Timer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Timer","\x5d","\x9d","\x24","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Timer_obj::__GetStatic;
	__mClass->mSetStaticField = &Timer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Timer_obj >;
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

void Timer_obj::__boot()
{
	sRunningTimers= null();
	sPollClient= null();
	nme_time_stamp= ::nme::Loader_obj::load(HX_HCSTRING("nme_time_stamp","\xaa","\xda","\xa6","\x05"),(int)0);
}

} // end namespace haxe
