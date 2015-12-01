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

Void World_obj::__construct(::core2::game::Game g,int w,int h,::core2::game::GameStage s,int aspectratiox,int aspectratioy)
{
HX_STACK_FRAME("core2.game.world.World","new",0xad706ce7,"core2.game.world.World.new","core2/game/world/World.hx",24,0x1f7499ca)
HX_STACK_THIS(this)
HX_STACK_ARG(g,"g")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(s,"s")
HX_STACK_ARG(aspectratiox,"aspectratiox")
HX_STACK_ARG(aspectratioy,"aspectratioy")
{
	HX_STACK_LINE(25)
	this->game = g;
	HX_STACK_LINE(26)
	::core2::game::engine::Engine tmp = ::core2::game::engine::Engine_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->engine = tmp;
	HX_STACK_LINE(27)
	this->width = w;
	HX_STACK_LINE(28)
	this->height = h;
	HX_STACK_LINE(29)
	this->windowStage = s;
	HX_STACK_LINE(30)
	::core2::game::GameStage tmp1 = this->windowStage;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::core2::game::GameWindow tmp2 = tmp1->getGameWindow();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(30)
	this->window = tmp2;
	HX_STACK_LINE(31)
	::core2::game::world::maps::managers::MapManager tmp3 = ::core2::game::world::maps::managers::MapManager_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	this->mapManager = tmp3;
	HX_STACK_LINE(32)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	::core2::game::world::maps::managers::MapManager tmp6 = this->mapManager;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(32)
	int tmp7 = aspectratiox;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(32)
	int tmp8 = aspectratioy;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(32)
	::core2::game::world::maps::Map tmp9 = ::core2::game::world::maps::Map_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5,tmp6,tmp7,tmp8,HX_HCSTRING("NewWorld","\xf2","\x95","\x60","\xcb"),null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(32)
	this->map = tmp9;
	HX_STACK_LINE(33)
	::core2::game::GameStage tmp10 = this->windowStage;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(33)
	::core2::game::world::maps::Map tmp11 = this->map;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(33)
	tmp10->addChild(tmp11);
	HX_STACK_LINE(34)
	::core2::game::GameStage tmp12 = this->windowStage;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(34)
	::String tmp13 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(34)
	::core2::game::Game tmp14 = this->getGame();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	::core2::game::engine::Engine tmp15 = tmp14->getEngine();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(34)
	Dynamic tmp16 = tmp15->tick_dyn();		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(34)
	tmp12->addEventListener(tmp13,tmp16,null(),null(),null());
	HX_STACK_LINE(35)
	::core2::game::GameStage tmp17 = this->windowStage;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(35)
	::String tmp18 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(35)
	::core2::game::Game tmp19 = this->getGame();		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(35)
	::core2::game::engine::Engine tmp20 = tmp19->getEngine();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(35)
	Dynamic tmp21 = tmp20->tick_dyn();		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(35)
	tmp17->addEventListener(tmp18,tmp21,null(),null(),null());
	HX_STACK_LINE(36)
	::core2::game::GameStage tmp22 = this->windowStage;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(36)
	::String tmp23 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(36)
	::core2::game::Game tmp24 = this->getGame();		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(36)
	::core2::game::engine::Engine tmp25 = tmp24->getEngine();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(36)
	Dynamic tmp26 = tmp25->tick_dyn();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(36)
	tmp22->addEventListener(tmp23,tmp26,null(),null(),null());
}
;
	return null();
}

//World_obj::~World_obj() { }

Dynamic World_obj::__CreateEmpty() { return  new World_obj; }
hx::ObjectPtr< World_obj > World_obj::__new(::core2::game::Game g,int w,int h,::core2::game::GameStage s,int aspectratiox,int aspectratioy)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(g,w,h,s,aspectratiox,aspectratioy);
	return _result_;}

Dynamic World_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< World_obj > _result_ = new World_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

int World_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.World","hashCode",0xfb50a634,"core2.game.world.World.hashCode","core2/game/world/World.hx",38,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,hashCode,return )

::core2::game::world::World World_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.world.World","getWorld",0x22173ff5,"core2.game.world.World.getWorld","core2/game/world/World.hx",42,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getWorld,return )

::core2::game::GameWindow World_obj::getGameWindow( ){
	HX_STACK_FRAME("core2.game.world.World","getGameWindow",0x183704ff,"core2.game.world.World.getGameWindow","core2/game/world/World.hx",44,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(45)
	::core2::game::GameWindow tmp = this->window;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getGameWindow,return )

::core2::game::world::maps::Map World_obj::getMap( ){
	HX_STACK_FRAME("core2.game.world.World","getMap",0x860af57f,"core2.game.world.World.getMap","core2/game/world/World.hx",47,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	::core2::game::world::maps::Map tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getMap,return )

::core2::game::world::maps::managers::MapManager World_obj::getMapManager( ){
	HX_STACK_FRAME("core2.game.world.World","getMapManager",0x378702ae,"core2.game.world.World.getMapManager","core2/game/world/World.hx",50,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(51)
	::core2::game::world::maps::managers::MapManager tmp = this->mapManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getMapManager,return )

::core2::game::Game World_obj::getGame( ){
	HX_STACK_FRAME("core2.game.world.World","getGame",0xbf948faf,"core2.game.world.World.getGame","core2/game/world/World.hx",53,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getGame,return )

::core2::game::entity::type::player::Player World_obj::getPlayer( ){
	HX_STACK_FRAME("core2.game.world.World","getPlayer",0x205ab05e,"core2.game.world.World.getPlayer","core2/game/world/World.hx",56,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	::core2::game::entity::type::player::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getPlayer,return )

Void World_obj::newPlayer( ::String name){
{
		HX_STACK_FRAME("core2.game.world.World","newPlayer",0x61b4f3a8,"core2.game.world.World.newPlayer","core2/game/world/World.hx",59,0x1f7499ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(60)
		::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::String tmp1 = name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		::core2::game::entity::type::player::Player tmp2 = ::core2::game::entity::type::player::Player_obj::__new(tmp,(int)0,(int)0,(int)64,(int)32,tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		this->player = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(World_obj,newPlayer,(void))

::core2::game::engine::Engine World_obj::getEngine( ){
	HX_STACK_FRAME("core2.game.world.World","getEngine",0xe5260cbf,"core2.game.world.World.getEngine","core2/game/world/World.hx",62,0x1f7499ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	::core2::game::engine::Engine tmp = this->engine;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(World_obj,getEngine,return )


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
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(engine,"engine");
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
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(engine,"engine");
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
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { return window; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
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
		if (HX_FIELD_EQ(inName,"getEngine") ) { return getEngine_dyn(); }
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
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"window") ) { window=inValue.Cast< ::core2::game::GameWindow >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core2::game::entity::type::player::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::core2::game::engine::Engine >(); return inValue; }
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
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"));
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
	{hx::fsInt,(int)offsetof(World_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(World_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::core2::game::engine::Engine*/ ,(int)offsetof(World_obj,engine),HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc")},
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
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("engine","\xc2","\x47","\x84","\xfc"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	HX_HCSTRING("getGameWindow","\xb8","\xd9","\x74","\xf1"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("getMapManager","\x67","\xd7","\xc4","\x10"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	HX_HCSTRING("getPlayer","\x97","\x74","\x0f","\xb4"),
	HX_HCSTRING("newPlayer","\xe1","\xb7","\x69","\xf5"),
	HX_HCSTRING("getEngine","\xf8","\xd0","\xda","\x78"),
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
