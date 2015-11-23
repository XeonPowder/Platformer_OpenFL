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
#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_engine_Engine
#include <core2/game/engine/Engine.h>
#endif
#ifndef INCLUDED_core2_game_managers_Manager
#include <core2/game/managers/Manager.h>
#endif
#ifndef INCLUDED_core2_game_world_World
#include <core2/game/world/World.h>
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

Void Game_obj::__construct(int aRX,int aRY,::String playerName)
{
HX_STACK_FRAME("core2.game.Game","new",0xff6c6245,"core2.game.Game.new","core2/game/Game.hx",18,0x6b6e3c6b)
HX_STACK_THIS(this)
HX_STACK_ARG(aRX,"aRX")
HX_STACK_ARG(aRY,"aRY")
HX_STACK_ARG(playerName,"playerName")
{
	HX_STACK_LINE(19)
	this->game = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(20)
	::core2::game::managers::Manager tmp = ::core2::game::managers::Manager_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->manager = tmp;
	HX_STACK_LINE(21)
	Dynamic tmp1 = this->aspectRatio;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	tmp1->__FieldRef(HX_HCSTRING("x","\x78","\x00","\x00","\x00")) = aRX;
	HX_STACK_LINE(22)
	Dynamic tmp2 = this->aspectRatio;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	tmp2->__FieldRef(HX_HCSTRING("y","\x79","\x00","\x00","\x00")) = aRY;
	HX_STACK_LINE(23)
	::core2::game::Game tmp3 = this->game;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::core2::game::Game tmp4 = this->game;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	::core2::game::Game tmp5 = this->game;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	::core2::game::GameWindow tmp6 = ::core2::game::GameWindow_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(23)
	::core2::game::GameStage tmp7 = ::core2::game::GameStage_obj::__new(tmp4,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(23)
	int tmp8 = aRX;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(23)
	int tmp9 = aRY;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(23)
	::core2::game::world::World tmp10 = ::core2::game::world::World_obj::__new(tmp3,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(23)
	this->world = tmp10;
	HX_STACK_LINE(24)
	::core2::game::world::World tmp11 = this->world;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(24)
	::String tmp12 = playerName;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(24)
	tmp11->newPlayer(tmp12);
	HX_STACK_LINE(25)
	::core2::game::world::World tmp13 = this->world;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(25)
	::core2::game::engine::Engine tmp14 = ::core2::game::engine::Engine_obj::__new(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(25)
	this->engine = tmp14;
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(int aRX,int aRY,::String playerName)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(aRX,aRY,playerName);
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int Game_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.Game","hashCode",0xa0687c16,"core2.game.Game.hashCode","core2/game/Game.hx",27,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,hashCode,return )

int Game_obj::getAspectRatioX( ){
	HX_STACK_FRAME("core2.game.Game","getAspectRatioX",0xdfe8dc00,"core2.game.Game.getAspectRatioX","core2/game/Game.hx",30,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	Dynamic tmp = this->aspectRatio;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	int tmp1 = tmp->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(31)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAspectRatioX,return )

int Game_obj::getAspectRatioY( ){
	HX_STACK_FRAME("core2.game.Game","getAspectRatioY",0xdfe8dc01,"core2.game.Game.getAspectRatioY","core2/game/Game.hx",33,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	Dynamic tmp = this->aspectRatio;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	int tmp1 = tmp->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAspectRatioY,return )

::core2::game::Game Game_obj::getGame( ){
	HX_STACK_FRAME("core2.game.Game","getGame",0x76d98c0d,"core2.game.Game.getGame","core2/game/Game.hx",36,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getGame,return )

::core2::game::world::World Game_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.Game","getWorld",0xc72f15d7,"core2.game.Game.getWorld","core2/game/Game.hx",39,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	::core2::game::world::World tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getWorld,return )

::core2::game::engine::Engine Game_obj::getEngine( ){
	HX_STACK_FRAME("core2.game.Game","getEngine",0xb4e95c9d,"core2.game.Game.getEngine","core2/game/Game.hx",42,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::core2::game::engine::Engine tmp = this->engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getEngine,return )


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(aspectRatio,"aspectRatio");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(aspectRatio,"aspectRatio");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(game,"game");
}

Dynamic Game_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"getGame") ) { return getGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEngine") ) { return getEngine_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { return aspectRatio; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getAspectRatioX") ) { return getAspectRatioX_dyn(); }
		if (HX_FIELD_EQ(inName,"getAspectRatioY") ) { return getAspectRatioY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::core2::game::world::World >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::core2::game::engine::Engine >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::core2::game::managers::Manager >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"aspectRatio") ) { aspectRatio=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("aspectRatio","\x13","\xe0","\xc3","\xfd"));
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"));
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::world::World*/ ,(int)offsetof(Game_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Game_obj,aspectRatio),HX_HCSTRING("aspectRatio","\x13","\xe0","\xc3","\xfd")},
	{hx::fsObject /*::core2::game::managers::Manager*/ ,(int)offsetof(Game_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsObject /*::core2::game::engine::Engine*/ ,(int)offsetof(Game_obj,engine),HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc")},
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(Game_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("aspectRatio","\x13","\xe0","\xc3","\xfd"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getAspectRatioX","\x9b","\x86","\x8a","\x30"),
	HX_HCSTRING("getAspectRatioY","\x9c","\x86","\x8a","\x30"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	HX_HCSTRING("getEngine","\xf8","\xd0","\xda","\x78"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
};

#endif

hx::Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.Game","\xd3","\xdb","\x1a","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Game_obj >;
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
