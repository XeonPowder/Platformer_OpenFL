#include <hxcpp.h>

#ifndef INCLUDED_core2_game_Game
#include <core2/game/Game.h>
#endif
#ifndef INCLUDED_core2_game_GameWindow
#include <core2/game/GameWindow.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
namespace core2{
namespace game{

Void GameWindow_obj::__construct(::core2::game::Game g)
{
HX_STACK_FRAME("core2.game.GameWindow","new",0x6416f295,"core2.game.GameWindow.new","core2/game/GameWindow.hx",8,0xb1379e1b)
HX_STACK_THIS(this)
HX_STACK_ARG(g,"g")
{
	HX_STACK_LINE(9)
	super::__construct(null());
	HX_STACK_LINE(10)
	this->game = g;
	HX_STACK_LINE(11)
	this->gameWindow = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//GameWindow_obj::~GameWindow_obj() { }

Dynamic GameWindow_obj::__CreateEmpty() { return  new GameWindow_obj; }
hx::ObjectPtr< GameWindow_obj > GameWindow_obj::__new(::core2::game::Game g)
{  hx::ObjectPtr< GameWindow_obj > _result_ = new GameWindow_obj();
	_result_->__construct(g);
	return _result_;}

Dynamic GameWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameWindow_obj > _result_ = new GameWindow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::core2::game::GameWindow GameWindow_obj::getGameWindow( ){
	HX_STACK_FRAME("core2.game.GameWindow","getGameWindow",0xff42b02d,"core2.game.GameWindow.getGameWindow","core2/game/GameWindow.hx",13,0xb1379e1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	::core2::game::GameWindow tmp = this->gameWindow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GameWindow_obj,getGameWindow,return )


GameWindow_obj::GameWindow_obj()
{
}

void GameWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameWindow);
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(gameWindow,"gameWindow");
	::lime::ui::Window_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(gameWindow,"gameWindow");
	::lime::ui::Window_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameWindow") ) { return gameWindow; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGameWindow") ) { return getGameWindow_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameWindow") ) { gameWindow=inValue.Cast< ::core2::game::GameWindow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(GameWindow_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*::core2::game::GameWindow*/ ,(int)offsetof(GameWindow_obj,gameWindow),HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95"),
	HX_HCSTRING("getGameWindow","\xb8","\xd9","\x74","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class GameWindow_obj::__mClass;

void GameWindow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.GameWindow","\x23","\x04","\x83","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameWindow_obj >;
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

} // end namespace core2
} // end namespace game
