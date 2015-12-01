#include <hxcpp.h>

#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_MovieClip
#include <nme/display/MovieClip.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
namespace nme{
namespace display{

Void MovieClip_obj::__construct()
{
HX_STACK_FRAME("nme.display.MovieClip","new",0xfbb1f11e,"nme.display.MovieClip.new","nme/display/MovieClip.hx",15,0xc5770014)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
	HX_STACK_LINE(18)
	this->mCurrentFrame = (int)0;
	HX_STACK_LINE(19)
	this->mTotalFrames = (int)0;
}
;
	return null();
}

//MovieClip_obj::~MovieClip_obj() { }

Dynamic MovieClip_obj::__CreateEmpty() { return  new MovieClip_obj; }
hx::ObjectPtr< MovieClip_obj > MovieClip_obj::__new()
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Dynamic MovieClip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MovieClip_obj > _result_ = new MovieClip_obj();
	_result_->__construct();
	return _result_;}

Void MovieClip_obj::gotoAndPlay( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("nme.display.MovieClip","gotoAndPlay",0x352e73c6,"nme.display.MovieClip.gotoAndPlay","nme/display/MovieClip.hx",23,0xc5770014)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndPlay,(void))

Void MovieClip_obj::gotoAndStop( Dynamic frame,::String scene){
{
		HX_STACK_FRAME("nme.display.MovieClip","gotoAndStop",0x373035d4,"nme.display.MovieClip.gotoAndStop","nme/display/MovieClip.hx",27,0xc5770014)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_ARG(scene,"scene")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(MovieClip_obj,gotoAndStop,(void))

Void MovieClip_obj::nextFrame( ){
{
		HX_STACK_FRAME("nme.display.MovieClip","nextFrame",0x0f6cd578,"nme.display.MovieClip.nextFrame","nme/display/MovieClip.hx",31,0xc5770014)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,nextFrame,(void))

::String MovieClip_obj::nmeGetType( ){
	HX_STACK_FRAME("nme.display.MovieClip","nmeGetType",0xfca39acc,"nme.display.MovieClip.nmeGetType","nme/display/MovieClip.hx",35,0xc5770014)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return HX_HCSTRING("MovieClip","\x80","\xe2","\xed","\xb9");
}


Void MovieClip_obj::play( ){
{
		HX_STACK_FRAME("nme.display.MovieClip","play",0x4158b376,"nme.display.MovieClip.play","nme/display/MovieClip.hx",39,0xc5770014)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,play,(void))

Void MovieClip_obj::prevFrame( ){
{
		HX_STACK_FRAME("nme.display.MovieClip","prevFrame",0x537e5b78,"nme.display.MovieClip.prevFrame","nme/display/MovieClip.hx",43,0xc5770014)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,prevFrame,(void))

Void MovieClip_obj::stop( ){
{
		HX_STACK_FRAME("nme.display.MovieClip","stop",0x435a7584,"nme.display.MovieClip.stop","nme/display/MovieClip.hx",47,0xc5770014)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,stop,(void))

int MovieClip_obj::get_currentFrame( ){
	HX_STACK_FRAME("nme.display.MovieClip","get_currentFrame",0x3b200a3f,"nme.display.MovieClip.get_currentFrame","nme/display/MovieClip.hx",51,0xc5770014)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	int tmp = this->mCurrentFrame;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_currentFrame,return )

int MovieClip_obj::get_framesLoaded( ){
	HX_STACK_FRAME("nme.display.MovieClip","get_framesLoaded",0xfbf25956,"nme.display.MovieClip.get_framesLoaded","nme/display/MovieClip.hx",52,0xc5770014)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	int tmp = this->mTotalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_framesLoaded,return )

int MovieClip_obj::get_totalFrames( ){
	HX_STACK_FRAME("nme.display.MovieClip","get_totalFrames",0x98889fdf,"nme.display.MovieClip.get_totalFrames","nme/display/MovieClip.hx",53,0xc5770014)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	int tmp = this->mTotalFrames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(MovieClip_obj,get_totalFrames,return )


MovieClip_obj::MovieClip_obj()
{
}

Dynamic MovieClip_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { return enabled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nextFrame") ) { return nextFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"prevFrame") ) { return prevFrame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeGetType") ) { return nmeGetType_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return inCallProp != hx::paccNever ? get_totalFrames() : totalFrames; }
		if (HX_FIELD_EQ(inName,"gotoAndPlay") ) { return gotoAndPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAndStop") ) { return gotoAndStop_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return inCallProp != hx::paccNever ? get_currentFrame() : currentFrame; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { return inCallProp != hx::paccNever ? get_framesLoaded() : framesLoaded; }
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { return mTotalFrames; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { return mCurrentFrame; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_totalFrames") ) { return get_totalFrames_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_currentFrame") ) { return get_currentFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"get_framesLoaded") ) { return get_framesLoaded_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MovieClip_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesLoaded") ) { framesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mTotalFrames") ) { mTotalFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mCurrentFrame") ) { mCurrentFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MovieClip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"));
	outFields->push(HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"));
	outFields->push(HX_HCSTRING("mCurrentFrame","\x41","\x19","\x97","\xc8"));
	outFields->push(HX_HCSTRING("mTotalFrames","\x1d","\xe7","\x6f","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(MovieClip_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{hx::fsBool,(int)offsetof(MovieClip_obj,enabled),HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,framesLoaded),HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,totalFrames),HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,mCurrentFrame),HX_HCSTRING("mCurrentFrame","\x41","\x19","\x97","\xc8")},
	{hx::fsInt,(int)offsetof(MovieClip_obj,mTotalFrames),HX_HCSTRING("mTotalFrames","\x1d","\xe7","\x6f","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"),
	HX_HCSTRING("framesLoaded","\x4b","\xac","\x61","\x0e"),
	HX_HCSTRING("totalFrames","\x8a","\xa2","\xbb","\x72"),
	HX_HCSTRING("mCurrentFrame","\x41","\x19","\x97","\xc8"),
	HX_HCSTRING("mTotalFrames","\x1d","\xe7","\x6f","\x55"),
	HX_HCSTRING("gotoAndPlay","\x08","\x65","\x84","\xef"),
	HX_HCSTRING("gotoAndStop","\x16","\x27","\x86","\xf1"),
	HX_HCSTRING("nextFrame","\x3a","\x92","\xc8","\xad"),
	HX_HCSTRING("nmeGetType","\xca","\x07","\x8d","\xee"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("prevFrame","\x3a","\x18","\xda","\xf1"),
	HX_HCSTRING("stop","\x02","\xf0","\x5b","\x4c"),
	HX_HCSTRING("get_currentFrame","\xbd","\x49","\x2e","\x52"),
	HX_HCSTRING("get_framesLoaded","\xd4","\x98","\x00","\x13"),
	HX_HCSTRING("get_totalFrames","\x21","\x5a","\x9d","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MovieClip_obj::__mClass,"__mClass");
};

#endif

hx::Class MovieClip_obj::__mClass;

void MovieClip_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.MovieClip","\x2c","\xca","\xa7","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MovieClip_obj >;
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
} // end namespace display
