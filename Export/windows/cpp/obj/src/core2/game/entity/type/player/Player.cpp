#include <hxcpp.h>

#ifndef INCLUDED_core2_game_Game
#include <core2/game/Game.h>
#endif
#ifndef INCLUDED_core2_game_engine_Engine
#include <core2/game/engine/Engine.h>
#endif
#ifndef INCLUDED_core2_game_engine_input_keyboard_KeyboardListener
#include <core2/game/engine/input/keyboard/KeyboardListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_listeners_EntityListener
#include <core2/game/entity/listeners/EntityListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_Player
#include <core2/game/entity/type/player/Player.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_animation_PlayerAnimations
#include <core2/game/entity/type/player/animation/PlayerAnimations.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_listeners_PlayerListener
#include <core2/game/entity/type/player/listeners/PlayerListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_managers_PlayerManager
#include <core2/game/entity/type/player/managers/PlayerManager.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
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
namespace core2{
namespace game{
namespace entity{
namespace type{
namespace player{

Void Player_obj::__construct(::core2::game::Game g,int x,int y,int hx,int hy,::String name,::String __o_type,hx::Null< int >  __o_experienceGained)
{
HX_STACK_FRAME("core2.game.entity.type.player.Player","new",0x20bae436,"core2.game.entity.type.player.Player.new","core2/game/entity/type/player/Player.hx",20,0xdab2d499)
HX_STACK_THIS(this)
HX_STACK_ARG(g,"g")
HX_STACK_ARG(x,"x")
HX_STACK_ARG(y,"y")
HX_STACK_ARG(hx,"hx")
HX_STACK_ARG(hy,"hy")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(__o_type,"type")
HX_STACK_ARG(__o_experienceGained,"experienceGained")
::String type = __o_type.Default(HX_HCSTRING("unit","\x84","\xca","\xa9","\x4d"));
int experienceGained = __o_experienceGained.Default(0);
{
	HX_STACK_LINE(21)
	int tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	int tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(22)
	this->game = g;
	HX_STACK_LINE(23)
	::openfl::display::BitmapData tmp2 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("Assets/Sprites/player/movement/right/right.png","\x25","\x76","\x8c","\x86"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	this->graphic = tmp2;
	HX_STACK_LINE(25)
	::core2::game::Game tmp3 = this->getGame();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(25)
	::core2::game::engine::Engine tmp4 = tmp3->getEngine();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::core2::game::engine::input::keyboard::KeyboardListener tmp5 = tmp4->getKeyboardListener();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	::core2::game::entity::type::player::listeners::PlayerListener tmp6 = ::core2::game::entity::type::player::listeners::PlayerListener_obj::__new(hx::ObjectPtr<OBJ_>(this),tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(25)
	this->playerListener = tmp6;
	HX_STACK_LINE(26)
	int tmp7 = hx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	int tmp8 = hy;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(26)
	this->setHitbox(tmp7,tmp8);
	HX_STACK_LINE(27)
	::openfl::display::BitmapData tmp9 = this->graphic;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	::openfl::display::Bitmap tmp10 = ::openfl::display::Bitmap_obj::__new(tmp9,null(),null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	this->bitmap = tmp10;
	HX_STACK_LINE(28)
	::openfl::display::Bitmap tmp11 = this->bitmap;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	this->addChild(tmp11);
	HX_STACK_LINE(29)
	::core2::game::entity::type::player::managers::PlayerManager tmp12 = ::core2::game::entity::type::player::managers::PlayerManager_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(29)
	this->playerManager = tmp12;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(::core2::game::Game g,int x,int y,int hx,int hy,::String name,::String __o_type,hx::Null< int >  __o_experienceGained)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(g,x,y,hx,hy,name,__o_type,__o_experienceGained);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.Player","update",0x7d7ffbf3,"core2.game.entity.type.player.Player.update","core2/game/entity/type/player/Player.hx",31,0xdab2d499)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::core2::game::entity::type::player::listeners::PlayerListener tmp = this->playerListener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		tmp->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,update,(void))

::core2::game::entity::type::player::animation::PlayerAnimations Player_obj::getPlayerAnimations( ){
	HX_STACK_FRAME("core2.game.entity.type.player.Player","getPlayerAnimations",0x7135903c,"core2.game.entity.type.player.Player.getPlayerAnimations","core2/game/entity/type/player/Player.hx",34,0xdab2d499)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	::core2::game::entity::type::player::animation::PlayerAnimations tmp = this->playerAnimations;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getPlayerAnimations,return )

::core2::game::entity::type::player::managers::PlayerManager Player_obj::getPlayerManager( ){
	HX_STACK_FRAME("core2.game.entity.type.player.Player","getPlayerManager",0xfaa7d500,"core2.game.entity.type.player.Player.getPlayerManager","core2/game/entity/type/player/Player.hx",37,0xdab2d499)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	::core2::game::entity::type::player::managers::PlayerManager tmp = this->playerManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getPlayerManager,return )

::openfl::display::Bitmap Player_obj::getBitmap( ){
	HX_STACK_FRAME("core2.game.entity.type.player.Player","getBitmap",0x2fcb317b,"core2.game.entity.type.player.Player.getBitmap","core2/game/entity/type/player/Player.hx",40,0xdab2d499)
	HX_STACK_THIS(this)
	HX_STACK_LINE(41)
	::openfl::display::Bitmap tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getBitmap,return )

::core2::game::Game Player_obj::getGame( ){
	HX_STACK_FRAME("core2.game.entity.type.player.Player","getGame",0xcb8e5a7e,"core2.game.entity.type.player.Player.getGame","core2/game/entity/type/player/Player.hx",43,0xdab2d499)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::core2::game::Game tmp = this->game;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getGame,return )

::core2::game::entity::type::player::listeners::PlayerListener Player_obj::getPlayerListener( ){
	HX_STACK_FRAME("core2.game.entity.type.player.Player","getPlayerListener",0x5ac5fe81,"core2.game.entity.type.player.Player.getPlayerListener","core2/game/entity/type/player/Player.hx",46,0xdab2d499)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::core2::game::entity::type::player::listeners::PlayerListener tmp = this->playerListener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,getPlayerListener,return )


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(playerAnimations,"playerAnimations");
	HX_MARK_MEMBER_NAME(playerListener,"playerListener");
	HX_MARK_MEMBER_NAME(playerManager,"playerManager");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(game,"game");
	::core2::game::entity::Entity_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playerAnimations,"playerAnimations");
	HX_VISIT_MEMBER_NAME(playerListener,"playerListener");
	HX_VISIT_MEMBER_NAME(playerManager,"playerManager");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(game,"game");
	::core2::game::entity::Entity_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getGame") ) { return getGame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playerManager") ) { return playerManager; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playerListener") ) { return playerListener; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"playerAnimations") ) { return playerAnimations; }
		if (HX_FIELD_EQ(inName,"getPlayerManager") ) { return getPlayerManager_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getPlayerListener") ) { return getPlayerListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getPlayerAnimations") ) { return getPlayerAnimations_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::core2::game::Game >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"playerManager") ) { playerManager=inValue.Cast< ::core2::game::entity::type::player::managers::PlayerManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"playerListener") ) { playerListener=inValue.Cast< ::core2::game::entity::type::player::listeners::PlayerListener >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"playerAnimations") ) { playerAnimations=inValue.Cast< ::core2::game::entity::type::player::animation::PlayerAnimations >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("playerAnimations","\xb0","\x87","\x40","\x88"));
	outFields->push(HX_HCSTRING("playerListener","\xf5","\x70","\x78","\x4a"));
	outFields->push(HX_HCSTRING("playerManager","\x0c","\x6d","\x3a","\x8b"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::type::player::animation::PlayerAnimations*/ ,(int)offsetof(Player_obj,playerAnimations),HX_HCSTRING("playerAnimations","\xb0","\x87","\x40","\x88")},
	{hx::fsObject /*::core2::game::entity::type::player::listeners::PlayerListener*/ ,(int)offsetof(Player_obj,playerListener),HX_HCSTRING("playerListener","\xf5","\x70","\x78","\x4a")},
	{hx::fsObject /*::core2::game::entity::type::player::managers::PlayerManager*/ ,(int)offsetof(Player_obj,playerManager),HX_HCSTRING("playerManager","\x0c","\x6d","\x3a","\x8b")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Player_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::core2::game::Game*/ ,(int)offsetof(Player_obj,game),HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("playerAnimations","\xb0","\x87","\x40","\x88"),
	HX_HCSTRING("playerListener","\xf5","\x70","\x78","\x4a"),
	HX_HCSTRING("playerManager","\x0c","\x6d","\x3a","\x8b"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("game","\xf2","\xf3","\x5e","\x44"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getPlayerAnimations","\x66","\xf0","\x66","\x42"),
	HX_HCSTRING("getPlayerManager","\x96","\x16","\x5b","\xf5"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	HX_HCSTRING("getGame","\xa8","\xa3","\xe1","\x16"),
	HX_HCSTRING("getPlayerListener","\x2b","\x20","\xec","\xbc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.type.player.Player","\x44","\x51","\x43","\x88");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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
} // end namespace entity
} // end namespace type
} // end namespace player
