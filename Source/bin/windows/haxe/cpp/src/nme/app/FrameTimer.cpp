#include <hxcpp.h>

#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
#endif
#ifndef INCLUDED_nme_app_FrameTimer
#include <nme/app/FrameTimer.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#ifndef INCLUDED_nme_app_Window
#include <nme/app/Window.h>
#endif
namespace nme{
namespace app{

Void FrameTimer_obj::__construct(::nme::app::Window inWindow,Float inFps)
{
HX_STACK_FRAME("nme.app.FrameTimer","new",0x71397abf,"nme.app.FrameTimer.new","nme/app/FrameTimer.hx",15,0x2031a3cf)
HX_STACK_THIS(this)
HX_STACK_ARG(inWindow,"inWindow")
HX_STACK_ARG(inFps,"inFps")
{
	HX_STACK_LINE(16)
	Float tmp = inFps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->set_fps(tmp);
	HX_STACK_LINE(17)
	this->lastRender = ((Float)0.0);
	HX_STACK_LINE(18)
	this->window = inWindow;
	HX_STACK_LINE(19)
	this->invalid = false;
	HX_STACK_LINE(20)
	this->catchup = false;
	HX_STACK_LINE(21)
	this->offTarget = ((Float)0.0);
	HX_STACK_LINE(22)
	::nme::app::Application_obj::addPollClient(hx::ObjectPtr<OBJ_>(this),true);
}
;
	return null();
}

//FrameTimer_obj::~FrameTimer_obj() { }

Dynamic FrameTimer_obj::__CreateEmpty() { return  new FrameTimer_obj; }
hx::ObjectPtr< FrameTimer_obj > FrameTimer_obj::__new(::nme::app::Window inWindow,Float inFps)
{  hx::ObjectPtr< FrameTimer_obj > _result_ = new FrameTimer_obj();
	_result_->__construct(inWindow,inFps);
	return _result_;}

Dynamic FrameTimer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FrameTimer_obj > _result_ = new FrameTimer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *FrameTimer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::app::IPollClient_obj)) return operator ::nme::app::IPollClient_obj *();
	return super::__ToInterface(inType);
}

FrameTimer_obj::operator ::nme::app::IPollClient_obj *()
	{ return new ::nme::app::IPollClient_delegate_< FrameTimer_obj >(this); }
Float FrameTimer_obj::set_fps( Float inFps){
	HX_STACK_FRAME("nme.app.FrameTimer","set_fps",0x32d7e76b,"nme.app.FrameTimer.set_fps","nme/app/FrameTimer.hx",26,0x2031a3cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFps,"inFps")
	HX_STACK_LINE(27)
	this->fps = inFps;
	HX_STACK_LINE(28)
	Float tmp = this->fps;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	Float tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	if ((tmp1)){
		HX_STACK_LINE(28)
		Float tmp3 = this->fps;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		tmp2 = (Float(((Float)1.0)) / Float(tmp3));
	}
	else{
		HX_STACK_LINE(28)
		tmp2 = ((Float)0.0);
	}
	HX_STACK_LINE(28)
	this->framePeriod = tmp2;
	HX_STACK_LINE(29)
	Float tmp3 = inFps;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(29)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(FrameTimer_obj,set_fps,return )

Void FrameTimer_obj::onPoll( Float timestamp){
{
		HX_STACK_FRAME("nme.app.FrameTimer","onPoll",0xf63261ff,"nme.app.FrameTimer.onPoll","nme/app/FrameTimer.hx",33,0x2031a3cf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(34)
		::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(36)
			bool tmp2 = this->invalid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			bool wasInvalid = tmp2;		HX_STACK_VAR(wasInvalid,"wasInvalid");
			HX_STACK_LINE(37)
			this->invalid = false;
			HX_STACK_LINE(38)
			Float tmp3 = this->fps;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(38)
			bool tmp4 = (tmp3 > (int)0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(38)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(38)
			if ((tmp4)){
				HX_STACK_LINE(38)
				Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				Float tmp7 = this->lastRender;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				Float tmp9 = this->offTarget;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(38)
				Float tmp11 = (tmp8 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(38)
				Float tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				Float tmp13 = this->framePeriod;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(38)
				Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(38)
				Float tmp15 = (tmp12 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(38)
				Float tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(38)
				Float tmp17 = (tmp16 - ((Float)0.0005));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(38)
				Float tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(38)
				tmp5 = (tmp6 >= tmp18);
			}
			else{
				HX_STACK_LINE(38)
				tmp5 = false;
			}
			HX_STACK_LINE(38)
			if ((tmp5)){
				HX_STACK_LINE(40)
				bool tmp6 = this->catchup;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(40)
				if ((tmp6)){
					HX_STACK_LINE(42)
					Float tmp7 = timestamp;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(42)
					Float tmp8 = this->lastRender;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(42)
					Float tmp9 = this->framePeriod;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(42)
					Float tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(42)
					Float tmp11 = (tmp7 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(42)
					this->offTarget = tmp11;
					HX_STACK_LINE(43)
					Float tmp12 = this->offTarget;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(43)
					Float tmp13 = this->framePeriod;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(43)
					bool tmp14 = (tmp12 > tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(43)
					if ((tmp14)){
						HX_STACK_LINE(44)
						Float tmp15 = this->framePeriod;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(44)
						this->offTarget = tmp15;
					}
					HX_STACK_LINE(45)
					Float tmp15 = this->offTarget;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(45)
					Float tmp16 = this->framePeriod;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(45)
					Float tmp17 = -(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(45)
					bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(45)
					if ((tmp18)){
						HX_STACK_LINE(46)
						Float tmp19 = this->framePeriod;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(46)
						Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(46)
						this->offTarget = tmp20;
					}
				}
				else{
					HX_STACK_LINE(49)
					this->offTarget = ((Float)0.0);
				}
				HX_STACK_LINE(51)
				this->lastRender = timestamp;
				HX_STACK_LINE(52)
				::nme::app::Window tmp7 = this->window;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(52)
				tmp7->onNewFrame();
			}
			else{
				HX_STACK_LINE(54)
				bool tmp6 = wasInvalid;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(54)
				if ((tmp6)){
					HX_STACK_LINE(56)
					::nme::app::Window tmp7 = this->window;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(56)
					tmp7->onInvalidFrame();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FrameTimer_obj,onPoll,(void))

Void FrameTimer_obj::invalidate( ){
{
		HX_STACK_FRAME("nme.app.FrameTimer","invalidate",0xe66608fc,"nme.app.FrameTimer.invalidate","nme/app/FrameTimer.hx",64,0x2031a3cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->invalid = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FrameTimer_obj,invalidate,(void))

Float FrameTimer_obj::getNextWake( Float defaultWake,Float timestamp){
	HX_STACK_FRAME("nme.app.FrameTimer","getNextWake",0x15e866cc,"nme.app.FrameTimer.getNextWake","nme/app/FrameTimer.hx",68,0x2031a3cf)
	HX_STACK_THIS(this)
	HX_STACK_ARG(defaultWake,"defaultWake")
	HX_STACK_ARG(timestamp,"timestamp")
	HX_STACK_LINE(69)
	::nme::app::Window tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(69)
	bool tmp1 = tmp->active;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(69)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(70)
		Float tmp3 = defaultWake;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		return tmp3;
	}
	HX_STACK_LINE(72)
	bool tmp3 = this->invalid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	if ((tmp3)){
		HX_STACK_LINE(73)
		return ((Float)0.0);
	}
	HX_STACK_LINE(75)
	Float tmp4 = this->framePeriod;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	bool tmp5 = (tmp4 == ((Float)0.0));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(75)
	if ((tmp5)){
		HX_STACK_LINE(76)
		Float tmp6 = defaultWake;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		return tmp6;
	}
	HX_STACK_LINE(78)
	Float tmp6 = this->lastRender;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(78)
	Float tmp7 = this->framePeriod;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(78)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(78)
	Float tmp9 = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(78)
	Float tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(78)
	Float next = tmp10;		HX_STACK_VAR(next,"next");
	HX_STACK_LINE(79)
	bool tmp11 = (next < defaultWake);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(79)
	if ((tmp11)){
		HX_STACK_LINE(80)
		Float tmp12 = next;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(80)
		return tmp12;
	}
	HX_STACK_LINE(82)
	Float tmp12 = defaultWake;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(82)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC2(FrameTimer_obj,getNextWake,return )


FrameTimer_obj::FrameTimer_obj()
{
}

void FrameTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FrameTimer);
	HX_MARK_MEMBER_NAME(fps,"fps");
	HX_MARK_MEMBER_NAME(lastRender,"lastRender");
	HX_MARK_MEMBER_NAME(framePeriod,"framePeriod");
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(invalid,"invalid");
	HX_MARK_MEMBER_NAME(catchup,"catchup");
	HX_MARK_MEMBER_NAME(offTarget,"offTarget");
	HX_MARK_END_CLASS();
}

void FrameTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fps,"fps");
	HX_VISIT_MEMBER_NAME(lastRender,"lastRender");
	HX_VISIT_MEMBER_NAME(framePeriod,"framePeriod");
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(invalid,"invalid");
	HX_VISIT_MEMBER_NAME(catchup,"catchup");
	HX_VISIT_MEMBER_NAME(offTarget,"offTarget");
}

Dynamic FrameTimer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { return fps; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"onPoll") ) { return onPoll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invalid") ) { return invalid; }
		if (HX_FIELD_EQ(inName,"catchup") ) { return catchup; }
		if (HX_FIELD_EQ(inName,"set_fps") ) { return set_fps_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offTarget") ) { return offTarget; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastRender") ) { return lastRender; }
		if (HX_FIELD_EQ(inName,"invalidate") ) { return invalidate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePeriod") ) { return framePeriod; }
		if (HX_FIELD_EQ(inName,"getNextWake") ) { return getNextWake_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FrameTimer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fps") ) { if (inCallProp != hx::paccNever) return set_fps(inValue);fps=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::nme::app::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"invalid") ) { invalid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"catchup") ) { catchup=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offTarget") ) { offTarget=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastRender") ) { lastRender=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framePeriod") ) { framePeriod=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FrameTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"));
	outFields->push(HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0"));
	outFields->push(HX_HCSTRING("framePeriod","\x0e","\x2d","\x63","\x19"));
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b"));
	outFields->push(HX_HCSTRING("catchup","\x56","\xa7","\xa5","\xe9"));
	outFields->push(HX_HCSTRING("offTarget","\x20","\xb8","\xd4","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FrameTimer_obj,fps),HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00")},
	{hx::fsFloat,(int)offsetof(FrameTimer_obj,lastRender),HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0")},
	{hx::fsFloat,(int)offsetof(FrameTimer_obj,framePeriod),HX_HCSTRING("framePeriod","\x0e","\x2d","\x63","\x19")},
	{hx::fsObject /*::nme::app::Window*/ ,(int)offsetof(FrameTimer_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsBool,(int)offsetof(FrameTimer_obj,invalid),HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b")},
	{hx::fsBool,(int)offsetof(FrameTimer_obj,catchup),HX_HCSTRING("catchup","\x56","\xa7","\xa5","\xe9")},
	{hx::fsFloat,(int)offsetof(FrameTimer_obj,offTarget),HX_HCSTRING("offTarget","\x20","\xb8","\xd4","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"),
	HX_HCSTRING("lastRender","\x4c","\x4e","\x04","\xd0"),
	HX_HCSTRING("framePeriod","\x0e","\x2d","\x63","\x19"),
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("invalid","\xf7","\xda","\x47","\x3b"),
	HX_HCSTRING("catchup","\x56","\xa7","\xa5","\xe9"),
	HX_HCSTRING("offTarget","\x20","\xb8","\xd4","\x8d"),
	HX_HCSTRING("set_fps","\x8c","\x21","\xc4","\x19"),
	HX_HCSTRING("onPoll","\xfe","\x86","\xe6","\xec"),
	HX_HCSTRING("invalidate","\x7b","\x19","\x2a","\x87"),
	HX_HCSTRING("getNextWake","\x6d","\xc5","\xb2","\x20"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FrameTimer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FrameTimer_obj::__mClass,"__mClass");
};

#endif

hx::Class FrameTimer_obj::__mClass;

void FrameTimer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.FrameTimer","\x4d","\xaf","\x9f","\x21");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FrameTimer_obj >;
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

} // end namespace nme
} // end namespace app
