#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_core3_Manager
#include <core3/Manager.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Main_obj::__construct()
{
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",7,0x087e5c05)
		HX_STACK_LINE(8)
		::String pName = HX_HCSTRING("NewPlayer","\xc1","\x97","\x3c","\x97");		HX_STACK_VAR(pName,"pName");
		HX_STACK_LINE(9)
		::String wString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(wString,"wString");
		HX_STACK_LINE(10)
		::String hString = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(hString,"hString");
		HX_STACK_LINE(11)
		int arX = (int)16;		HX_STACK_VAR(arX,"arX");
		HX_STACK_LINE(12)
		int arY = (int)9;		HX_STACK_VAR(arY,"arY");
		HX_STACK_LINE(13)
		int w = (int)0;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(14)
		int h = (int)0;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(15)
		::Sys_obj::print(HX_HCSTRING("Enter Player's name: ","\x1c","\xc2","\x11","\xf3"));
		HX_STACK_LINE(16)
		::haxe::io::Input tmp = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		::String tmp1 = tmp->readLine();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(16)
		pName = tmp1;
		HX_STACK_LINE(17)
		::String tmp2 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + pName);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),17,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(21)
		::Sys_obj::print(HX_HCSTRING("Enter Tile Pixel Width: ","\x28","\x64","\x9c","\x58"));
		HX_STACK_LINE(22)
		::haxe::io::Input tmp4 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(22)
		::String tmp5 = tmp4->readLine();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(22)
		wString = tmp5;
		HX_STACK_LINE(23)
		::String tmp6 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + wString);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(23)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),23,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(23)
		::haxe::Log_obj::trace(tmp6,tmp7);
		HX_STACK_LINE(24)
		::String tmp8 = wString;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(24)
		Dynamic tmp9 = ::Std_obj::parseInt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(24)
		arX = tmp9;
		HX_STACK_LINE(25)
		::Sys_obj::print(HX_HCSTRING("Enter Tile Pixel Height: ","\xd1","\x10","\xb0","\xb3"));
		HX_STACK_LINE(26)
		::haxe::io::Input tmp10 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(26)
		::String tmp11 = tmp10->readLine();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(26)
		hString = tmp11;
		HX_STACK_LINE(27)
		::String tmp12 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + hString);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(27)
		Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),27,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace(tmp12,tmp13);
		HX_STACK_LINE(28)
		::String tmp14 = hString;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(28)
		Dynamic tmp15 = ::Std_obj::parseInt(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(28)
		arY = tmp15;
		HX_STACK_LINE(32)
		::Sys_obj::print(HX_HCSTRING("Enter Game Pixel Width: ","\xec","\xdb","\x1a","\x19"));
		HX_STACK_LINE(33)
		::haxe::io::Input tmp16 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(33)
		::String tmp17 = tmp16->readLine();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(33)
		wString = tmp17;
		HX_STACK_LINE(34)
		::String tmp18 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + wString);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(34)
		Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),34,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(34)
		::haxe::Log_obj::trace(tmp18,tmp19);
		HX_STACK_LINE(35)
		::String tmp20 = wString;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(35)
		Dynamic tmp21 = ::Std_obj::parseInt(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(35)
		w = tmp21;
		HX_STACK_LINE(36)
		::Sys_obj::print(HX_HCSTRING("Enter Game Pixel Height: ","\x8d","\x64","\xda","\x61"));
		HX_STACK_LINE(37)
		::haxe::io::Input tmp22 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(37)
		::String tmp23 = tmp22->readLine();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(37)
		hString = tmp23;
		HX_STACK_LINE(38)
		::String tmp24 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + hString);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(38)
		Dynamic tmp25 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),38,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(38)
		::haxe::Log_obj::trace(tmp24,tmp25);
		HX_STACK_LINE(39)
		::String tmp26 = hString;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(39)
		Dynamic tmp27 = ::Std_obj::parseInt(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(39)
		h = tmp27;
		HX_STACK_LINE(40)
		::openfl::display::MovieClip tmp28 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(40)
		int tmp29 = arX;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(40)
		int tmp30 = arY;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(40)
		int tmp31 = w;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(40)
		int tmp32 = h;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(40)
		::String tmp33 = pName;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(40)
		::core3::Manager_obj::__new(tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	::String(null()) };

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
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

