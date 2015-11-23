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
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_Player
#include <core2/game/entity/type/player/Player.h>
#endif
#ifndef INCLUDED_core2_game_world_World
#include <core2/game/world/World.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_Map
#include <core2/game/world/maps/Map.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_managers_MapManager
#include <core2/game/world/maps/managers/MapManager.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
namespace core2{
namespace game{
namespace world{

Void World_obj::__construct(::core2::game::Game g,::core2::game::GameStage s,int aspectratiox,int aspectratioy)
{
HX_STACK_FRAME("core2.game.world.World","new",0xad706ce7,"core2.game.world.World.new","core2/game/world/World.hx",19,0x1f7499ca)
HX_STACK_THIS(this)
HX_STACK_ARG(g,"g")
HX_STACK_ARG(s,"s")
HX_STACK_ARG(aspectratiox,"aspectratiox")
HX_STACK_ARG(aspectratioy,"aspectratioy")
{
	HX_STACK_LINE(20)
	this->game = g;
	HX_STACK_LINE(21)
	this->windowStage = s;
	HX_STACK_LINE(22)
	::core2::game::GameStage tmp = this->windowStage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::core2::game::GameWindow tmp1 = tmp->getGameWindow();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	this->window = tmp1;
	HX_STACK_LINE(23)
	::core2::game::world::maps::managers::MapManager tmp2 = ::core2::game::world::maps::managers::MapManager_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->mapManager = tmp2;
	HX_STACK_LINE(24)
	int tmp3 = aspectratiox;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	int tmp4 = aspectratioy;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(24)
	this->newMap(HX_HCSTRING("NewWorld","\xf2","\x95","\x60","\xcb"),tmp3,tmp4);
	HX_STACK_LINE(25)
	::core2::game::GameStage tmp5 = this->windowStage;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	::core2::game::world::maps::Map tmp6 = this->map;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	tmp5->addChild(tmp6);
	HX_STACK_LINE(26)
	::core2::game::GameStage tmp7 = this->windowStage;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	::String tmp8 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	::core2::game::Game tmp9 = this->getGame();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(26)
	::core2::game::engine::Engine tmp10 = tmp9->getEngine();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(26)
	Dynamic tmp11 = tmp10->tick_dyn();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(26)
	tmp7->addEventListener(tmp8,tmp11,null(),null(),null());
	HX_STACK_LINE(27)
	::core2::game::GameStage tmp12 = this->windowStage;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(27)
	::String tmp13 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(27)
	::core2::game::Game tmp14 = this->getGame();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(27)
	::core2::game::engine::Engine tmp15 = tmp14->getEngine();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(27)
	Dynamic tmp16 = tmp15->tick_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(27)
	tmp12->addEventListener(tmp13,tmp16,null(),null(),null());
	HX_STACK_LINE(28)
	::core2::game::GameStage tmp17 = this->windowStage;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(28)
	::String tmp18 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(28)
	::core2::game::Game tmp19 = this->getGame();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(28)
	::core2::game::engine::Engine tmp20 = tmp19->getEngine();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(28)
	Dynamic tmp21 = tmp20->tick_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(28)
	tmp17->addEventListener(tmp18,tmp21,null(),null(),null());
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new(::core2::game::Game g,::core2::game::GameStage s,int aspectratiox,int aspectratioy)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(g,s,aspectratiox,aspectratioy);
	return _result_;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

int World_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.World","hashCode",0xfb50a634,"core2.game.world.World.hashCode","core2/game/world/World.hx",31,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,hashCode,return )

::core2::game::world::World World_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.world.World","getWorld",0x22173ff5,"core2.game.world.World.getWorld","core2/game/world/World.hx",35,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getWorld,return )

::core2::game::GameWindow World_obj::getGameWindow( ){
	HX_STACK_FRAME("core2.game.world.World","getGameWindow",0x183704ff,"core2.game.world.World.getGameWindow","core2/game/world/World.hx",37,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::core2::game::GameWindow tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getGameWindow,return )

::core2::game::world::maps::Map World_obj::getMap( ){
	HX_STACK_FRAME("core2.game.world.World","getMap",0x860af57f,"core2.game.world.World.getMap","core2/game/world/World.hx",40,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::core2::game::world::maps::Map tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getMap,return )

::core2::game::world::maps::managers::MapManager World_obj::getMapManager( ){
	HX_STACK_FRAME("core2.game.world.World","getMapManager",0x378702ae,"core2.game.world.World.getMapManager","core2/game/world/World.hx",43,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::core2::game::world::maps::managers::MapManager tmp = this->mapManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getMapManager,return )

Void World_obj::newMap( ::String mapName,int ax,int ay){
{
		HX_STACK_FRAME("core2.game.world.World","newMap",0x54861ff5,"core2.game.world.World.newMap","core2/game/world/World.hx",46,0x1f7499ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mapName,"mapName")
		HX_STACK_ARG(ax,"ax")
		HX_STACK_ARG(ay,"ay")
		HX_STACK_LINE(47)
		::core2::game::world::maps::managers::MapManager tmp = this->mapManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		int tmp1 = ax;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		int tmp2 = ay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		::String tmp3 = mapName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		::core2::game::world::maps::Map tmp4 = ::core2::game::world::maps::Map_obj::__new(tmp,tmp1,tmp2,tmp3,null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(47)
		this->map = tmp4;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(World_obj,newMap,(void))

::core2::game::Game World_obj::getGame( ){
	HX_STACK_FRAME("core2.game.world.World","getGame",0xbf948faf,"core2.game.world.World.getGame","core2/game/world/World.hx",49,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getGame,return )

::core2::game::entity::type::player::Player World_obj::getPlayer( ){
	HX_STACK_FRAME("core2.game.world.World","getPlayer",0x205ab05e,"core2.game.world.World.getPlayer","core2/game/world/World.hx",52,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::core2::game::entity::type::player::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getPlayer,return )

Void World_obj::newPlayer( ::String name){
{
		HX_STACK_FRAME("core2.game.world.World","newPlayer",0x61b4f3a8,"core2.game.world.World.newPlayer","core2/game/world/World.hx",55,0x1f7499ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(56)
		::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(56)
		::core2::game::entity::type::player::Player tmp2 = ::core2::game::entity::type::player::Player_obj::__new(tmp,(int)0,(int)0,(int)64,(int)32,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(56)
		this->player = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,newPlayer,(void))


World_obj::World_obj()
{
}

void World_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(World);
	HX_MARK_MEMBER_NAME(window,"window");
	HX_MARK_MEMBER_NAME(windowStage,"windowStage");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(mapManager,"mapManager");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_END_CLASS();
}

void World_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(window,"window");
	HX_VISIT_MEMBER_NAME(windowStage,"windowStage");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(mapManager,"mapManager");
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(player,"player");
}

Dynamic World_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		if (HX_FIELD_EQ(inName,"newMap") ) { return newMap_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getGame") ) { return getGame_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getPlayer") ) { return getPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"newPlayer") ) { return newPlayer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { return mapManager; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowStage") ) { return windowStage; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGameWindow") ) { return getGameWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"getMapManager") ) { return getMapManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic World_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::core2::game::world::maps::Map >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::core2::game::GameWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core2::game::entity::type::player::Player >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mapManager") ) { mapManager=inValue.Cast< ::core2::game::world::maps::managers::MapManager >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowStage") ) { windowStage=inValue.Cast< ::core2::game::GameStage >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void World_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"));
	outFields->push(HX_HCSTRING("windowStage","\xae","\x00","\xde","\x74"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"));
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::GameWindow*/ ,(int)offsetof(World_obj,window),HX_HCSTRING("window","\xf0","\x93","\x8c","\x52")},
	{hx::fsObject /*::core2::game::GameStage*/ ,(int)offsetof(World_obj,windowStage),HX_HCSTRING("windowStage","\xae","\x00","\xde","\x74")},
	{hx::fsObject /*::core2::game::world::maps::Map*/ ,(int)offsetof(World_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::core2::game::world::maps::managers::MapManager*/ ,(int)offsetof(World_obj,mapManager),HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4")},
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(World_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{hx::fsObject /*::core2::game::entity::type::player::Player*/ ,(int)offsetof(World_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("window","\xf0","\x93","\x8c","\x52"),
	HX_HCSTRING("windowStage","\xae","\x00","\xde","\x74"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("mapManager","\x31","\x7b","\x52","\xb4"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	HX_HCSTRING("getGameWindow","\xb8","\xd9","\x74","\xf1"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("getMapManager","\x67","\xd7","\xc4","\x10"),
	HX_HCSTRING("newMap","\x1c","\x6e","\x9d","\x71"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	HX_HCSTRING("getPlayer","\x97","\x74","\x0f","\xb4"),
	HX_HCSTRING("newPlayer","\xe1","\xb7","\x69","\xf5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(World_obj::__mClass,"__mClass");
};

#endif

hx::Class World_obj::__mClass;

void World_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.World","\x75","\x6d","\x98","\xd7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< World_obj >;
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
} // end namespace world
