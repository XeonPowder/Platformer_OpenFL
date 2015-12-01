#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_pgr_dconsole_DC
#include <pgr/dconsole/DC.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
namespace core2{
namespace game{

Void Game_obj::__construct(int aRX,int aRY,int width,int height,::String playerName)
{
HX_STACK_FRAME("core2.game.Game","new",0xff6c6245,"core2.game.Game.new","core2/game/Game.hx",20,0x6b6e3c6b)
HX_STACK_THIS(this)
HX_STACK_ARG(aRX,"aRX")
HX_STACK_ARG(aRY,"aRY")
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(playerName,"playerName")
{
	HX_STACK_LINE(21)
	this->game = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(22)
	int tmp = width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	this->gameWindowWidth = tmp1;
	HX_STACK_LINE(23)
	int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	this->gameWindowHeight = tmp3;
	HX_STACK_LINE(24)
	::pgr::dconsole::DC_obj::init(null(),null(),null(),null(),null());
	HX_STACK_LINE(25)
	::pgr::dconsole::DC_obj::log(HX_HCSTRING("Buff Console","\x0a","\x38","\x52","\x8f"),null());
	HX_STACK_LINE(26)
	::core2::game::Game tmp4 = this->game;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::pgr::dconsole::DC_obj::registerObject(tmp4,HX_HCSTRING("game_console","\xca","\x7a","\xcd","\xb3"));
	HX_STACK_LINE(27)
	::pgr::dconsole::DC_obj::registerClass(hx::ClassOf< ::core2::game::Game >(),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	HX_STACK_LINE(28)
	::core2::game::managers::Manager tmp5 = ::core2::game::managers::Manager_obj::__new();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	this->manager = tmp5;
	HX_STACK_LINE(29)
	this->aspectRatioX = aRX;
	HX_STACK_LINE(30)
	this->aspectRatioY = aRY;
	HX_STACK_LINE(31)
	::core2::game::Game tmp6 = this->game;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(31)
	int tmp7 = this->gameWindowWidth;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(31)
	int tmp8 = this->gameWindowHeight;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(31)
	::core2::game::Game tmp9 = this->game;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(31)
	::core2::game::Game tmp10 = this->game;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(31)
	::core2::game::GameWindow tmp11 = ::core2::game::GameWindow_obj::__new(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(31)
	::core2::game::GameStage tmp12 = ::core2::game::GameStage_obj::__new(tmp9,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(31)
	int tmp13 = aRX;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(31)
	int tmp14 = aRY;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(31)
	::core2::game::world::World tmp15 = ::core2::game::world::World_obj::__new(tmp6,tmp7,tmp8,tmp12,tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(31)
	this->world = tmp15;
	HX_STACK_LINE(32)
	::core2::game::world::World tmp16 = this->world;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(32)
	::String tmp17 = playerName;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(32)
	tmp16->newPlayer(tmp17);
	HX_STACK_LINE(33)
	::core2::game::world::World tmp18 = this->world;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(33)
	::core2::game::engine::Engine tmp19 = tmp18->getEngine();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(33)
	this->engine = tmp19;
}
;
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new(int aRX,int aRY,int width,int height,::String playerName)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(aRX,aRY,width,height,playerName);
	return _result_;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > _result_ = new Game_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

int Game_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.Game","hashCode",0xa0687c16,"core2.game.Game.hashCode","core2/game/Game.hx",35,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(36)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,hashCode,return )

int Game_obj::getAspectRatioX( ){
	HX_STACK_FRAME("core2.game.Game","getAspectRatioX",0xdfe8dc00,"core2.game.Game.getAspectRatioX","core2/game/Game.hx",38,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	int tmp = this->aspectRatioX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAspectRatioX,return )

int Game_obj::getAspectRatioY( ){
	HX_STACK_FRAME("core2.game.Game","getAspectRatioY",0xdfe8dc01,"core2.game.Game.getAspectRatioY","core2/game/Game.hx",41,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	int tmp = this->aspectRatioY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getAspectRatioY,return )

::core2::game::Game Game_obj::getGame( ){
	HX_STACK_FRAME("core2.game.Game","getGame",0x76d98c0d,"core2.game.Game.getGame","core2/game/Game.hx",44,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getGame,return )

::core2::game::world::World Game_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.Game","getWorld",0xc72f15d7,"core2.game.Game.getWorld","core2/game/Game.hx",47,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::core2::game::world::World tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getWorld,return )

::core2::game::engine::Engine Game_obj::getEngine( ){
	HX_STACK_FRAME("core2.game.Game","getEngine",0xb4e95c9d,"core2.game.Game.getEngine","core2/game/Game.hx",50,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::core2::game::engine::Engine tmp = this->engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getEngine,return )

int Game_obj::getWidth( ){
	HX_STACK_FRAME("core2.game.Game","getWidth",0xc32d358b,"core2.game.Game.getWidth","core2/game/Game.hx",53,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	int tmp = this->gameWindowWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getWidth,return )

int Game_obj::getHeight( ){
	HX_STACK_FRAME("core2.game.Game","getHeight",0xbab11cc2,"core2.game.Game.getHeight","core2/game/Game.hx",56,0x6b6e3c6b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	int tmp = this->gameWindowHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Game_obj,getHeight,return )


Game_obj::Game_obj()
{
}

void Game_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Game);
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(aspectRatioX,"aspectRatioX");
	HX_MARK_MEMBER_NAME(aspectRatioY,"aspectRatioY");
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(engine,"engine");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(gameWindowWidth,"gameWindowWidth");
	HX_MARK_MEMBER_NAME(gameWindowHeight,"gameWindowHeight");
	HX_MARK_END_CLASS();
}

void Game_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(aspectRatioX,"aspectRatioX");
	HX_VISIT_MEMBER_NAME(aspectRatioY,"aspectRatioY");
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(engine,"engine");
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(gameWindowWidth,"gameWindowWidth");
	HX_VISIT_MEMBER_NAME(gameWindowHeight,"gameWindowHeight");
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
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getEngine") ) { return getEngine_dyn(); }
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aspectRatioX") ) { return aspectRatioX; }
		if (HX_FIELD_EQ(inName,"aspectRatioY") ) { return aspectRatioY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gameWindowWidth") ) { return gameWindowWidth; }
		if (HX_FIELD_EQ(inName,"getAspectRatioX") ) { return getAspectRatioX_dyn(); }
		if (HX_FIELD_EQ(inName,"getAspectRatioY") ) { return getAspectRatioY_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gameWindowHeight") ) { return gameWindowHeight; }
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
	case 12:
		if (HX_FIELD_EQ(inName,"aspectRatioX") ) { aspectRatioX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aspectRatioY") ) { aspectRatioY=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"gameWindowWidth") ) { gameWindowWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"gameWindowHeight") ) { gameWindowHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d"));
	outFields->push(HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d"));
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"));
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("gameWindowWidth","\x24","\x71","\xcd","\xf7"));
	outFields->push(HX_HCSTRING("gameWindowHeight","\x09","\x07","\x45","\x92"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::world::World*/ ,(int)offsetof(Game_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsInt,(int)offsetof(Game_obj,aspectRatioX),HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d")},
	{hx::fsInt,(int)offsetof(Game_obj,aspectRatioY),HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d")},
	{hx::fsObject /*::core2::game::managers::Manager*/ ,(int)offsetof(Game_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsObject /*::core2::game::engine::Engine*/ ,(int)offsetof(Game_obj,engine),HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc")},
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(Game_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsInt,(int)offsetof(Game_obj,gameWindowWidth),HX_HCSTRING("gameWindowWidth","\x24","\x71","\xcd","\xf7")},
	{hx::fsInt,(int)offsetof(Game_obj,gameWindowHeight),HX_HCSTRING("gameWindowHeight","\x09","\x07","\x45","\x92")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("aspectRatioX","\xe5","\x30","\xa0","\x0d"),
	HX_HCSTRING("aspectRatioY","\xe6","\x30","\xa0","\x0d"),
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("gameWindowWidth","\x24","\x71","\xcd","\xf7"),
	HX_HCSTRING("gameWindowHeight","\x09","\x07","\x45","\x92"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getAspectRatioX","\x9b","\x86","\x8a","\x30"),
	HX_HCSTRING("getAspectRatioY","\x9c","\x86","\x8a","\x30"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	HX_HCSTRING("getEngine","\xf8","\xd0","\xda","\x78"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
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
