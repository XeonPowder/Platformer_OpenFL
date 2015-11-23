#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_core2_game_Game
#include <core2/game/Game.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
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

::core2::game::Game Main_obj::getGame( ){
	HX_STACK_FRAME("Main","getGame",0x7b130a93,"Main.getGame","Main.hx",16,0x087e5c05)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,getGame,return )

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",7,0x087e5c05)
		HX_STACK_LINE(8)
		::String pName = HX_HCSTRING("NewPlayer","\xc1","\x97","\x3c","\x97");		HX_STACK_VAR(pName,"pName");
		HX_STACK_LINE(9)
		::Sys_obj::print(HX_HCSTRING("Enter Player's name: ","\x1c","\xc2","\x11","\xf3"));
		HX_STACK_LINE(10)
		::haxe::io::Input tmp = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(10)
		::String tmp1 = tmp->readLine();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(10)
		pName = tmp1;
		HX_STACK_LINE(11)
		int arX = (int)16;		HX_STACK_VAR(arX,"arX");
		HX_STACK_LINE(12)
		int arY = (int)9;		HX_STACK_VAR(arY,"arY");
		HX_STACK_LINE(13)
		::core2::game::Game tmp2 = ::core2::game::Game_obj::__new(arX,arY,pName);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(13)
		::core2::game::Game game = tmp2;		HX_STACK_VAR(game,"game");
		HX_STACK_LINE(14)
		::String tmp3 = (HX_HCSTRING("Name: ","\xd1","\x81","\x0d","\x52") + pName);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Main.hx","\x05","\x5c","\x7e","\x08"),14,HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"),HX_HCSTRING("main","\x39","\x38","\x56","\x48"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		::haxe::Log_obj::trace(tmp3,tmp4);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getGame") ) { return getGame_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
	}
	return false;
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(Main_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	::String(null()) };

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
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
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

