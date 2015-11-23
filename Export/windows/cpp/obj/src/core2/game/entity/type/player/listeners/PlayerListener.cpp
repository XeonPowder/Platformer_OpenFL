#include <hxcpp.h>

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
#ifndef INCLUDED_core2_game_entity_type_player_listeners_PlayerListener
#include <core2/game/entity/type/player/listeners/PlayerListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_managers_PlayerManager
#include <core2/game/entity/type/player/managers/PlayerManager.h>
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
namespace listeners{

Void PlayerListener_obj::__construct(::core2::game::entity::type::player::Player p,::core2::game::engine::input::keyboard::KeyboardListener kl)
{
HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","new",0x42a7fa19,"core2.game.entity.type.player.listeners.PlayerListener.new","core2/game/entity/type/player/listeners/PlayerListener.hx",8,0x4f41ceb5)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
HX_STACK_ARG(kl,"kl")
{
	HX_STACK_LINE(15)
	this->keyRIGHT = (int)39;
	HX_STACK_LINE(14)
	this->keyLEFT = (int)37;
	HX_STACK_LINE(13)
	this->keyDOWN = (int)40;
	HX_STACK_LINE(12)
	this->keyUP = (int)38;
	HX_STACK_LINE(17)
	super::__construct();
	HX_STACK_LINE(18)
	this->player = p;
	HX_STACK_LINE(19)
	::core2::game::entity::type::player::managers::PlayerManager tmp = p->getPlayerManager();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	this->pManager = tmp;
	HX_STACK_LINE(20)
	this->keyboardListener = kl;
}
;
	return null();
}

//PlayerListener_obj::~PlayerListener_obj() { }

Dynamic PlayerListener_obj::__CreateEmpty() { return  new PlayerListener_obj; }
hx::ObjectPtr< PlayerListener_obj > PlayerListener_obj::__new(::core2::game::entity::type::player::Player p,::core2::game::engine::input::keyboard::KeyboardListener kl)
{  hx::ObjectPtr< PlayerListener_obj > _result_ = new PlayerListener_obj();
	_result_->__construct(p,kl);
	return _result_;}

Dynamic PlayerListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerListener_obj > _result_ = new PlayerListener_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void PlayerListener_obj::update( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","update",0x053975f0,"core2.game.entity.type.player.listeners.PlayerListener.update","core2/game/entity/type/player/listeners/PlayerListener.hx",22,0x4f41ceb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		this->checkKeyStates();
		HX_STACK_LINE(24)
		this->checkDamageRecieved();
		HX_STACK_LINE(25)
		this->checkExperienceRecieved();
		HX_STACK_LINE(26)
		this->checkLevelUp();
	}
return null();
}


Void PlayerListener_obj::checkKeyStates( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","checkKeyStates",0x26caf540,"core2.game.entity.type.player.listeners.PlayerListener.checkKeyStates","core2/game/entity/type/player/listeners/PlayerListener.hx",28,0x4f41ceb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(29)
		::core2::game::engine::input::keyboard::KeyboardListener tmp = this->keyboardListener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		int tmp1 = this->keyUP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(29)
		bool tmp2 = tmp->getKeyState(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(29)
		bool jump = tmp2;		HX_STACK_VAR(jump,"jump");
		HX_STACK_LINE(30)
		::core2::game::engine::input::keyboard::KeyboardListener tmp3 = this->keyboardListener;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		int tmp4 = this->keyDOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		bool tmp5 = tmp3->getKeyState(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(30)
		bool duck = tmp5;		HX_STACK_VAR(duck,"duck");
		HX_STACK_LINE(31)
		::core2::game::engine::input::keyboard::KeyboardListener tmp6 = this->keyboardListener;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(31)
		int tmp7 = this->keyLEFT;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(31)
		bool tmp8 = tmp6->getKeyState(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(31)
		bool left = tmp8;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(32)
		::core2::game::engine::input::keyboard::KeyboardListener tmp9 = this->keyboardListener;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(32)
		int tmp10 = this->keyRIGHT;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(32)
		bool tmp11 = tmp9->getKeyState(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(32)
		bool right = tmp11;		HX_STACK_VAR(right,"right");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerListener_obj,checkKeyStates,(void))

Void PlayerListener_obj::checkDamageRecieved( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","checkDamageRecieved",0xd26976d9,"core2.game.entity.type.player.listeners.PlayerListener.checkDamageRecieved","core2/game/entity/type/player/listeners/PlayerListener.hx",35,0x4f41ceb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::core2::game::entity::type::player::managers::PlayerManager tmp = this->pManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::core2::game::entity::type::player::managers::PlayerManager tmp1 = this->pManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		int tmp2 = tmp1->getHealth();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		::core2::game::entity::type::player::managers::PlayerManager tmp3 = this->pManager;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		int tmp4 = tmp3->getDamageGivenToPlayer();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		int tmp5 = (tmp2 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(36)
		tmp->setHealth(tmp5);
		HX_STACK_LINE(37)
		::core2::game::entity::type::player::managers::PlayerManager tmp6 = this->pManager;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		int tmp7 = tmp6->getHealth();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		bool tmp8 = (tmp7 <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(37)
		if ((tmp8)){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerListener_obj,checkDamageRecieved,(void))

Void PlayerListener_obj::checkExperienceRecieved( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","checkExperienceRecieved",0x5c8c2f94,"core2.game.entity.type.player.listeners.PlayerListener.checkExperienceRecieved","core2/game/entity/type/player/listeners/PlayerListener.hx",41,0x4f41ceb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::core2::game::entity::type::player::managers::PlayerManager tmp = this->pManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(42)
		::core2::game::entity::type::player::managers::PlayerManager tmp1 = this->pManager;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		int tmp2 = tmp1->getExperienceGained();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		tmp->setExperience(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerListener_obj,checkExperienceRecieved,(void))

Void PlayerListener_obj::checkLevelUp( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.listeners.PlayerListener","checkLevelUp",0xc52cd83e,"core2.game.entity.type.player.listeners.PlayerListener.checkLevelUp","core2/game/entity/type/player/listeners/PlayerListener.hx",44,0x4f41ceb5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::core2::game::entity::type::player::managers::PlayerManager tmp = this->pManager;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		int tmp1 = tmp->getExperience();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(45)
		::core2::game::entity::type::player::managers::PlayerManager tmp2 = this->pManager;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(45)
		int tmp3 = tmp2->getExperienceCap();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(45)
		bool tmp4 = (tmp1 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		if ((tmp4)){
			HX_STACK_LINE(46)
			::core2::game::entity::type::player::managers::PlayerManager tmp5 = this->pManager;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(46)
			tmp5->setExperience((int)0);
			HX_STACK_LINE(47)
			::core2::game::entity::type::player::managers::PlayerManager tmp6 = this->pManager;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			tmp6->levelUp();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerListener_obj,checkLevelUp,(void))


PlayerListener_obj::PlayerListener_obj()
{
}

void PlayerListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerListener);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(pManager,"pManager");
	HX_MARK_MEMBER_NAME(keyboardListener,"keyboardListener");
	HX_MARK_MEMBER_NAME(keyUP,"keyUP");
	HX_MARK_MEMBER_NAME(keyDOWN,"keyDOWN");
	HX_MARK_MEMBER_NAME(keyLEFT,"keyLEFT");
	HX_MARK_MEMBER_NAME(keyRIGHT,"keyRIGHT");
	HX_MARK_END_CLASS();
}

void PlayerListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(pManager,"pManager");
	HX_VISIT_MEMBER_NAME(keyboardListener,"keyboardListener");
	HX_VISIT_MEMBER_NAME(keyUP,"keyUP");
	HX_VISIT_MEMBER_NAME(keyDOWN,"keyDOWN");
	HX_VISIT_MEMBER_NAME(keyLEFT,"keyLEFT");
	HX_VISIT_MEMBER_NAME(keyRIGHT,"keyRIGHT");
}

Dynamic PlayerListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"keyUP") ) { return keyUP; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyDOWN") ) { return keyDOWN; }
		if (HX_FIELD_EQ(inName,"keyLEFT") ) { return keyLEFT; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pManager") ) { return pManager; }
		if (HX_FIELD_EQ(inName,"keyRIGHT") ) { return keyRIGHT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLevelUp") ) { return checkLevelUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkKeyStates") ) { return checkKeyStates_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyboardListener") ) { return keyboardListener; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"checkDamageRecieved") ) { return checkDamageRecieved_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"checkExperienceRecieved") ) { return checkExperienceRecieved_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"keyUP") ) { keyUP=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core2::game::entity::type::player::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyDOWN") ) { keyDOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyLEFT") ) { keyLEFT=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"pManager") ) { pManager=inValue.Cast< ::core2::game::entity::type::player::managers::PlayerManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keyRIGHT") ) { keyRIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyboardListener") ) { keyboardListener=inValue.Cast< ::core2::game::engine::input::keyboard::KeyboardListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("pManager","\xdd","\xa7","\x24","\xe7"));
	outFields->push(HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f"));
	outFields->push(HX_HCSTRING("keyUP","\xba","\xb9","\xfe","\xde"));
	outFields->push(HX_HCSTRING("keyDOWN","\x81","\x05","\x2f","\x9c"));
	outFields->push(HX_HCSTRING("keyLEFT","\x26","\x15","\x71","\xa1"));
	outFields->push(HX_HCSTRING("keyRIGHT","\xbd","\x79","\x8e","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::type::player::Player*/ ,(int)offsetof(PlayerListener_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::core2::game::entity::type::player::managers::PlayerManager*/ ,(int)offsetof(PlayerListener_obj,pManager),HX_HCSTRING("pManager","\xdd","\xa7","\x24","\xe7")},
	{hx::fsObject /*::core2::game::engine::input::keyboard::KeyboardListener*/ ,(int)offsetof(PlayerListener_obj,keyboardListener),HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f")},
	{hx::fsInt,(int)offsetof(PlayerListener_obj,keyUP),HX_HCSTRING("keyUP","\xba","\xb9","\xfe","\xde")},
	{hx::fsInt,(int)offsetof(PlayerListener_obj,keyDOWN),HX_HCSTRING("keyDOWN","\x81","\x05","\x2f","\x9c")},
	{hx::fsInt,(int)offsetof(PlayerListener_obj,keyLEFT),HX_HCSTRING("keyLEFT","\x26","\x15","\x71","\xa1")},
	{hx::fsInt,(int)offsetof(PlayerListener_obj,keyRIGHT),HX_HCSTRING("keyRIGHT","\xbd","\x79","\x8e","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("pManager","\xdd","\xa7","\x24","\xe7"),
	HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f"),
	HX_HCSTRING("keyUP","\xba","\xb9","\xfe","\xde"),
	HX_HCSTRING("keyDOWN","\x81","\x05","\x2f","\x9c"),
	HX_HCSTRING("keyLEFT","\x26","\x15","\x71","\xa1"),
	HX_HCSTRING("keyRIGHT","\xbd","\x79","\x8e","\x18"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("checkKeyStates","\x59","\x46","\xba","\x04"),
	HX_HCSTRING("checkDamageRecieved","\x20","\x8b","\x40","\xf9"),
	HX_HCSTRING("checkExperienceRecieved","\x5b","\x73","\xf0","\x1f"),
	HX_HCSTRING("checkLevelUp","\x17","\x81","\xfd","\x0e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerListener_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerListener_obj::__mClass;

void PlayerListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.type.player.listeners.PlayerListener","\xa7","\xf9","\x90","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerListener_obj >;
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
} // end namespace listeners
