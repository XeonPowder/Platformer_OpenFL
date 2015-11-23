#include <hxcpp.h>

#ifndef INCLUDED_core2_game_Game
#include <core2/game/Game.h>
#endif
#ifndef INCLUDED_core2_game_GameStage
#include <core2/game/GameStage.h>
#endif
#ifndef INCLUDED_core2_game_GameWindow
#include <core2/game/GameWindow.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace core2{
namespace game{

Void GameStage_obj::__construct(::core2::game::Game g,::core2::game::GameWindow gw)
{
HX_STACK_FRAME("core2.game.GameStage","new",0x374bb45d,"core2.game.GameStage.new","core2/game/GameStage.hx",10,0x2dea3213)
HX_STACK_THIS(this)
HX_STACK_ARG(g,"g")
HX_STACK_ARG(gw,"gw")
{
	HX_STACK_LINE(11)
	::core2::game::GameWindow tmp = gw;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	super::__construct(tmp,null());
	HX_STACK_LINE(12)
	this->game = g;
	HX_STACK_LINE(13)
	this->gameWindow = gw;
	HX_STACK_LINE(14)
	this->gameStage = hx::ObjectPtr<OBJ_>(this);
}
;
	return null();
}

//GameStage_obj::~GameStage_obj() { }

Dynamic GameStage_obj::__CreateEmpty() { return  new GameStage_obj; }
hx::ObjectPtr< GameStage_obj > GameStage_obj::__new(::core2::game::Game g,::core2::game::GameWindow gw)
{  hx::ObjectPtr< GameStage_obj > _result_ = new GameStage_obj();
	_result_->__construct(g,gw);
	return _result_;}

Dynamic GameStage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameStage_obj > _result_ = new GameStage_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::core2::game::GameStage GameStage_obj::getGameStage( ){
	HX_STACK_FRAME("core2.game.GameStage","getGameStage",0x8c892a59,"core2.game.GameStage.getGameStage","core2/game/GameStage.hx",17,0x2dea3213)
	HX_STACK_THIS(this)
	HX_STACK_LINE(17)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(GameStage_obj,getGameStage,return )

::core2::game::GameWindow GameStage_obj::getGameWindow( ){
	HX_STACK_FRAME("core2.game.GameStage","getGameWindow",0xb8167bf5,"core2.game.GameStage.getGameWindow","core2/game/GameStage.hx",19,0x2dea3213)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	::core2::game::GameWindow tmp = this->gameWindow;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(GameStage_obj,getGameWindow,return )


GameStage_obj::GameStage_obj()
{
}

void GameStage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameStage);
	HX_MARK_MEMBER_NAME(gameWindow,"gameWindow");
	HX_MARK_MEMBER_NAME(gameStage,"gameStage");
	HX_MARK_MEMBER_NAME(game,"game");
	::openfl::display::Stage_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameStage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gameWindow,"gameWindow");
	HX_VISIT_MEMBER_NAME(gameStage,"gameStage");
	HX_VISIT_MEMBER_NAME(game,"game");
	::openfl::display::Stage_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameStage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameStage") ) { return gameStage; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameWindow") ) { return gameWindow; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getGameStage") ) { return getGameStage_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGameWindow") ) { return getGameWindow_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameStage_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"gameStage") ) { gameStage=inValue.Cast< ::core2::game::GameStage >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameWindow") ) { gameWindow=inValue.Cast< ::core2::game::GameWindow >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameStage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95"));
	outFields->push(HX_HCSTRING("gameStage","\x6c","\x59","\x26","\xb9"));
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::GameWindow*/ ,(int)offsetof(GameStage_obj,gameWindow),HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95")},
	{hx::fsObject /*::core2::game::GameStage*/ ,(int)offsetof(GameStage_obj,gameStage),HX_HCSTRING("gameStage","\x6c","\x59","\x26","\xb9")},
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(GameStage_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("gameWindow","\x82","\x7d","\x02","\x95"),
	HX_HCSTRING("gameStage","\x6c","\x59","\x26","\xb9"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("getGameStage","\xf6","\xf5","\x7c","\xc8"),
	HX_HCSTRING("getGameWindow","\xb8","\xd9","\x74","\xf1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameStage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameStage_obj::__mClass,"__mClass");
};

#endif

hx::Class GameStage_obj::__mClass;

void GameStage_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.GameStage","\xeb","\x41","\x31","\xd1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameStage_obj >;
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
