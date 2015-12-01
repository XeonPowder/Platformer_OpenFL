#include <hxcpp.h>

#ifndef INCLUDED_core3_Key
#include <core3/Key.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
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
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_KeyboardEvent
#include <nme/events/KeyboardEvent.h>
#endif
namespace core3{

Void Key_obj::__construct()
{
	return null();
}

//Key_obj::~Key_obj() { }

Dynamic Key_obj::__CreateEmpty() { return  new Key_obj; }
hx::ObjectPtr< Key_obj > Key_obj::__new()
{  hx::ObjectPtr< Key_obj > _result_ = new Key_obj();
	_result_->__construct();
	return _result_;}

Dynamic Key_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Key_obj > _result_ = new Key_obj();
	_result_->__construct();
	return _result_;}

bool Key_obj::fl_initDone;

Array< ::Dynamic > Key_obj::kcodes;

int Key_obj::ktime;

Void Key_obj::init( ){
{
		HX_STACK_FRAME("core3.Key","init",0x29cb6619,"core3.Key.init","core3/Key.hx",9,0xa3b7f89a)
		HX_STACK_LINE(10)
		bool tmp = ::core3::Key_obj::fl_initDone;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		if ((tmp)){
			HX_STACK_LINE(11)
			::nme::display::MovieClip tmp1 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(11)
			::String tmp2 = ::nme::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(11)
			Dynamic tmp3 = ::core3::Key_obj::onEnterFrame_dyn();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(11)
			tmp1->removeEventListener(tmp2,tmp3,null());
			HX_STACK_LINE(12)
			::nme::display::MovieClip tmp4 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(12)
			::String tmp5 = ::nme::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(12)
			Dynamic tmp6 = ::core3::Key_obj::onEnterFrame_dyn();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(12)
			tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
			HX_STACK_LINE(13)
			return null();
		}
		HX_STACK_LINE(15)
		::core3::Key_obj::fl_initDone = true;
		HX_STACK_LINE(18)
		::nme::display::MovieClip tmp1 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		::String tmp2 = ::nme::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		Dynamic tmp3 = ::core3::Key_obj::onKey_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		Dynamic tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			Dynamic f = tmp3;		HX_STACK_VAR(f,"f");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::nme::events::KeyboardEvent e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","core3/Key.hx",18,0xa3b7f89a)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(18)
					bool tmp5 = true;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(18)
					::nme::events::KeyboardEvent tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(18)
					f(tmp5,tmp6).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(18)
			tmp4 =  Dynamic(new _Function_2_1(f));
		}
		HX_STACK_LINE(18)
		tmp1->addEventListener(tmp2,tmp4,null(),null(),null());
		HX_STACK_LINE(19)
		::nme::display::MovieClip tmp5 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		::String tmp6 = ::nme::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		Dynamic tmp7 = ::core3::Key_obj::onKey_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(19)
		{
			HX_STACK_LINE(19)
			Dynamic f = tmp7;		HX_STACK_VAR(f,"f");

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,Dynamic,f)
			int __ArgCount() const { return 1; }
			Void run(::nme::events::KeyboardEvent e){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","core3/Key.hx",19,0xa3b7f89a)
				HX_STACK_ARG(e,"e")
				{
					HX_STACK_LINE(19)
					bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(19)
					::nme::events::KeyboardEvent tmp10 = e;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(19)
					f(tmp9,tmp10).Cast< Void >();
				}
				return null();
			}
			HX_END_LOCAL_FUNC1((void))

			HX_STACK_LINE(19)
			tmp8 =  Dynamic(new _Function_2_1(f));
		}
		HX_STACK_LINE(19)
		tmp5->addEventListener(tmp6,tmp8,null(),null(),null());
		HX_STACK_LINE(20)
		::nme::display::MovieClip tmp9 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(20)
		::String tmp10 = ::nme::events::Event_obj::DEACTIVATE;		HX_STACK_VAR(tmp10,"tmp10");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 1; }
		Void run(Dynamic _){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","core3/Key.hx",20,0xa3b7f89a)
			HX_STACK_ARG(_,"_")
			{
				HX_STACK_LINE(20)
				::core3::Key_obj::kcodes = Array_obj< ::Dynamic >::__new();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(20)
		tmp9->addEventListener(tmp10, Dynamic(new _Function_1_1()),null(),null(),null());
		HX_STACK_LINE(21)
		::nme::display::MovieClip tmp11 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(21)
		::String tmp12 = ::nme::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(21)
		Dynamic tmp13 = ::core3::Key_obj::onEnterFrame_dyn();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(21)
		tmp11->addEventListener(tmp12,tmp13,null(),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Key_obj,init,(void))

Void Key_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("core3.Key","onEnterFrame",0x45c381fd,"core3.Key.onEnterFrame","core3/Key.hx",25,0xa3b7f89a)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(25)
		(::core3::Key_obj::ktime)++;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,onEnterFrame,(void))

Void Key_obj::onKey( bool down,::nme::events::KeyboardEvent e){
{
		HX_STACK_FRAME("core3.Key","onKey",0xdc7e9a97,"core3.Key.onKey","core3/Key.hx",28,0xa3b7f89a)
		HX_STACK_ARG(down,"down")
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(29)
		int tmp = e->keyCode;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		bool tmp1 = down;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		::core3::Key_obj::event(tmp,tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Key_obj,onKey,(void))

Void Key_obj::event( int code,bool down){
{
		HX_STACK_FRAME("core3.Key","event",0x1fda44f1,"core3.Key.event","core3/Key.hx",32,0xa3b7f89a)
		HX_STACK_ARG(code,"code")
		HX_STACK_ARG(down,"down")
		HX_STACK_LINE(33)
		bool tmp = down;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp)){
			HX_STACK_LINE(33)
			tmp1 = ::core3::Key_obj::ktime;
		}
		else{
			HX_STACK_LINE(33)
			tmp1 = null();
		}
		HX_STACK_LINE(33)
		::core3::Key_obj::kcodes[code] = tmp1;
		HX_STACK_LINE(35)
		bool tmp2 = (code == (int)18);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		if ((tmp2)){
			HX_STACK_LINE(35)
			bool tmp4 = down;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(35)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(35)
			tmp3 = !(tmp5);
		}
		else{
			HX_STACK_LINE(35)
			tmp3 = false;
		}
		HX_STACK_LINE(35)
		if ((tmp3)){
			HX_STACK_LINE(36)
			::core3::Key_obj::kcodes[(int)17] = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Key_obj,event,(void))

bool Key_obj::isDown( int c){
	HX_STACK_FRAME("core3.Key","isDown",0x888c7cb5,"core3.Key.isDown","core3/Key.hx",40,0xa3b7f89a)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(41)
	Dynamic tmp = ::core3::Key_obj::kcodes->__get(c);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,isDown,return )

bool Key_obj::isToggled( int c){
	HX_STACK_FRAME("core3.Key","isToggled",0x23ac93dd,"core3.Key.isToggled","core3/Key.hx",44,0xa3b7f89a)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(45)
	Dynamic tmp = ::core3::Key_obj::kcodes->__get(c);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = ::core3::Key_obj::ktime;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,isToggled,return )


Key_obj::Key_obj()
{
}

bool Key_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ktime") ) { outValue = ktime; return true;  }
		if (HX_FIELD_EQ(inName,"onKey") ) { outValue = onKey_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"event") ) { outValue = event_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kcodes") ) { outValue = kcodes; return true;  }
		if (HX_FIELD_EQ(inName,"isDown") ) { outValue = isDown_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isToggled") ) { outValue = isToggled_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fl_initDone") ) { outValue = fl_initDone; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { outValue = onEnterFrame_dyn(); return true;  }
	}
	return false;
}

bool Key_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ktime") ) { ktime=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"kcodes") ) { kcodes=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"fl_initDone") ) { fl_initDone=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Key_obj::fl_initDone,HX_HCSTRING("fl_initDone","\x0b","\x65","\xc4","\x06")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Key_obj::kcodes,HX_HCSTRING("kcodes","\x5b","\xf2","\x85","\x12")},
	{hx::fsInt,(void *) &Key_obj::ktime,HX_HCSTRING("ktime","\xf8","\xdd","\xdc","\xe8")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Key_obj::fl_initDone,"fl_initDone");
	HX_MARK_MEMBER_NAME(Key_obj::kcodes,"kcodes");
	HX_MARK_MEMBER_NAME(Key_obj::ktime,"ktime");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::fl_initDone,"fl_initDone");
	HX_VISIT_MEMBER_NAME(Key_obj::kcodes,"kcodes");
	HX_VISIT_MEMBER_NAME(Key_obj::ktime,"ktime");
};

#endif

hx::Class Key_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fl_initDone","\x0b","\x65","\xc4","\x06"),
	HX_HCSTRING("kcodes","\x5b","\xf2","\x85","\x12"),
	HX_HCSTRING("ktime","\xf8","\xdd","\xdc","\xe8"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onEnterFrame","\xf4","\xa5","\x93","\xda"),
	HX_HCSTRING("onKey","\xc0","\x1d","\x69","\x32"),
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("isDown","\x6c","\xbd","\xd4","\x5f"),
	HX_HCSTRING("isToggled","\x86","\x5f","\x02","\xd0"),
	::String(null()) };

void Key_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core3.Key","\x05","\x12","\xe6","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Key_obj::__GetStatic;
	__mClass->mSetStaticField = &Key_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Key_obj >;
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

void Key_obj::__boot()
{
	fl_initDone= false;
	kcodes= Array_obj< ::Dynamic >::__new();
	ktime= (int)0;
}

} // end namespace core3
