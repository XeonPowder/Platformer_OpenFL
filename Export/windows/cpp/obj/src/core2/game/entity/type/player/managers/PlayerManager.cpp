#include <hxcpp.h>

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
namespace managers{

Void PlayerManager_obj::__construct(::core2::game::entity::type::player::Player p)
{
HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","new",0x66799419,"core2.game.entity.type.player.managers.PlayerManager.new","core2/game/entity/type/player/managers/PlayerManager.hx",18,0xa4913217)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(19)
	this->manager = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(20)
	::core2::game::entity::type::player::listeners::PlayerListener tmp = p->getPlayerListener();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	this->listener = tmp;
	HX_STACK_LINE(21)
	this->player = p;
	HX_STACK_LINE(22)
	this->health = (int)100;
	HX_STACK_LINE(23)
	this->experience = (int)0;
	HX_STACK_LINE(24)
	this->experienceCap = (int)100;
	HX_STACK_LINE(25)
	this->level = (int)1;
	HX_STACK_LINE(26)
	this->jumpheight = (int)20;
	HX_STACK_LINE(27)
	this->damageGivenToPlayer = (int)0;
}
;
	return null();
}

//PlayerManager_obj::~PlayerManager_obj() { }

Dynamic PlayerManager_obj::__CreateEmpty() { return  new PlayerManager_obj; }
hx::ObjectPtr< PlayerManager_obj > PlayerManager_obj::__new(::core2::game::entity::type::player::Player p)
{  hx::ObjectPtr< PlayerManager_obj > _result_ = new PlayerManager_obj();
	_result_->__construct(p);
	return _result_;}

Dynamic PlayerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerManager_obj > _result_ = new PlayerManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayerManager_obj::update( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","update",0x24e41bf0,"core2.game.entity.type.player.managers.PlayerManager.update","core2/game/entity/type/player/managers/PlayerManager.hx",29,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_LINE(30)
		::core2::game::entity::type::player::listeners::PlayerListener tmp = this->listener;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		tmp->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,update,(void))

int PlayerManager_obj::getHealth( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getHealth",0x6fb9864b,"core2.game.entity.type.player.managers.PlayerManager.getHealth","core2/game/entity/type/player/managers/PlayerManager.hx",32,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	int tmp = this->health;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getHealth,return )

Void PlayerManager_obj::setHealth( int h){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setHealth",0x530a7257,"core2.game.entity.type.player.managers.PlayerManager.setHealth","core2/game/entity/type/player/managers/PlayerManager.hx",36,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(36)
		this->health = h;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setHealth,(void))

int PlayerManager_obj::getDamageGivenToPlayer( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getDamageGivenToPlayer",0x010d04db,"core2.game.entity.type.player.managers.PlayerManager.getDamageGivenToPlayer","core2/game/entity/type/player/managers/PlayerManager.hx",39,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	int tmp = this->damageGivenToPlayer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getDamageGivenToPlayer,return )

Void PlayerManager_obj::setDamageGivenToPlayer( int d){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setDamageGivenToPlayer",0x34b8814f,"core2.game.entity.type.player.managers.PlayerManager.setDamageGivenToPlayer","core2/game/entity/type/player/managers/PlayerManager.hx",43,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(d,"d")
		HX_STACK_LINE(43)
		hx::AddEq(this->damageGivenToPlayer,d);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setDamageGivenToPlayer,(void))

int PlayerManager_obj::getLevel( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getLevel",0x955742b5,"core2.game.entity.type.player.managers.PlayerManager.getLevel","core2/game/entity/type/player/managers/PlayerManager.hx",46,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	int tmp = this->level;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getLevel,return )

Void PlayerManager_obj::setLevel( int l){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setLevel",0x43b49c29,"core2.game.entity.type.player.managers.PlayerManager.setLevel","core2/game/entity/type/player/managers/PlayerManager.hx",50,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(l,"l")
		HX_STACK_LINE(50)
		this->level = l;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setLevel,(void))

Void PlayerManager_obj::levelUp( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","levelUp",0xa65b5d38,"core2.game.entity.type.player.managers.PlayerManager.levelUp","core2/game/entity/type/player/managers/PlayerManager.hx",53,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		(this->level)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,levelUp,(void))

int PlayerManager_obj::getExperience( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getExperience",0xc8b212d9,"core2.game.entity.type.player.managers.PlayerManager.getExperience","core2/game/entity/type/player/managers/PlayerManager.hx",56,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(57)
	int tmp = this->experience;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getExperience,return )

Void PlayerManager_obj::setExperience( int e){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setExperience",0x0db7f4e5,"core2.game.entity.type.player.managers.PlayerManager.setExperience","core2/game/entity/type/player/managers/PlayerManager.hx",60,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(60)
		this->experience = e;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setExperience,(void))

Void PlayerManager_obj::addExperience( int e){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","addExperience",0xd6890024,"core2.game.entity.type.player.managers.PlayerManager.addExperience","core2/game/entity/type/player/managers/PlayerManager.hx",63,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(63)
		hx::AddEq(this->experience,e);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,addExperience,(void))

int PlayerManager_obj::getExperienceCap( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getExperienceCap",0xa807a6b9,"core2.game.entity.type.player.managers.PlayerManager.getExperienceCap","core2/game/entity/type/player/managers/PlayerManager.hx",65,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	int tmp = this->experienceCap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(66)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getExperienceCap,return )

Void PlayerManager_obj::setExperienceCap( int ec){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setExperienceCap",0xfe49942d,"core2.game.entity.type.player.managers.PlayerManager.setExperienceCap","core2/game/entity/type/player/managers/PlayerManager.hx",69,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ec,"ec")
		HX_STACK_LINE(69)
		this->experienceCap = ec;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setExperienceCap,(void))

int PlayerManager_obj::getExperienceGained( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getExperienceGained",0x9f2d5657,"core2.game.entity.type.player.managers.PlayerManager.getExperienceGained","core2/game/entity/type/player/managers/PlayerManager.hx",71,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int tmp = this->experienceGained;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getExperienceGained,return )

Void PlayerManager_obj::setExperienceGained( int eg){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setExperienceGained",0xdbca4963,"core2.game.entity.type.player.managers.PlayerManager.setExperienceGained","core2/game/entity/type/player/managers/PlayerManager.hx",75,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(eg,"eg")
		HX_STACK_LINE(75)
		this->experienceGained = eg;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setExperienceGained,(void))

int PlayerManager_obj::getJumpHeight( ){
	HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","getJumpHeight",0x192f08a4,"core2.game.entity.type.player.managers.PlayerManager.getJumpHeight","core2/game/entity/type/player/managers/PlayerManager.hx",77,0xa4913217)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	int tmp = this->jumpheight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerManager_obj,getJumpHeight,return )

Void PlayerManager_obj::setJumpHeight( int jh){
{
		HX_STACK_FRAME("core2.game.entity.type.player.managers.PlayerManager","setJumpHeight",0x5e34eab0,"core2.game.entity.type.player.managers.PlayerManager.setJumpHeight","core2/game/entity/type/player/managers/PlayerManager.hx",81,0xa4913217)
		HX_STACK_THIS(this)
		HX_STACK_ARG(jh,"jh")
		HX_STACK_LINE(81)
		this->jumpheight = jh;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerManager_obj,setJumpHeight,(void))


PlayerManager_obj::PlayerManager_obj()
{
}

void PlayerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerManager);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(listener,"listener");
	HX_MARK_MEMBER_NAME(health,"health");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(experience,"experience");
	HX_MARK_MEMBER_NAME(experienceCap,"experienceCap");
	HX_MARK_MEMBER_NAME(experienceGained,"experienceGained");
	HX_MARK_MEMBER_NAME(jumpheight,"jumpheight");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(damageGivenToPlayer,"damageGivenToPlayer");
	HX_MARK_END_CLASS();
}

void PlayerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(listener,"listener");
	HX_VISIT_MEMBER_NAME(health,"health");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(experience,"experience");
	HX_VISIT_MEMBER_NAME(experienceCap,"experienceCap");
	HX_VISIT_MEMBER_NAME(experienceGained,"experienceGained");
	HX_VISIT_MEMBER_NAME(jumpheight,"jumpheight");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(damageGivenToPlayer,"damageGivenToPlayer");
}

Dynamic PlayerManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { return health; }
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"levelUp") ) { return levelUp_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { return listener; }
		if (HX_FIELD_EQ(inName,"getLevel") ) { return getLevel_dyn(); }
		if (HX_FIELD_EQ(inName,"setLevel") ) { return setLevel_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHealth") ) { return getHealth_dyn(); }
		if (HX_FIELD_EQ(inName,"setHealth") ) { return setHealth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"experience") ) { return experience; }
		if (HX_FIELD_EQ(inName,"jumpheight") ) { return jumpheight; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"experienceCap") ) { return experienceCap; }
		if (HX_FIELD_EQ(inName,"getExperience") ) { return getExperience_dyn(); }
		if (HX_FIELD_EQ(inName,"setExperience") ) { return setExperience_dyn(); }
		if (HX_FIELD_EQ(inName,"addExperience") ) { return addExperience_dyn(); }
		if (HX_FIELD_EQ(inName,"getJumpHeight") ) { return getJumpHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"setJumpHeight") ) { return setJumpHeight_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"experienceGained") ) { return experienceGained; }
		if (HX_FIELD_EQ(inName,"getExperienceCap") ) { return getExperienceCap_dyn(); }
		if (HX_FIELD_EQ(inName,"setExperienceCap") ) { return setExperienceCap_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"damageGivenToPlayer") ) { return damageGivenToPlayer; }
		if (HX_FIELD_EQ(inName,"getExperienceGained") ) { return getExperienceGained_dyn(); }
		if (HX_FIELD_EQ(inName,"setExperienceGained") ) { return setExperienceGained_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getDamageGivenToPlayer") ) { return getDamageGivenToPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"setDamageGivenToPlayer") ) { return setDamageGivenToPlayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"health") ) { health=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core2::game::entity::type::player::Player >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::core2::game::entity::type::player::managers::PlayerManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=inValue.Cast< ::core2::game::entity::type::player::listeners::PlayerListener >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"experience") ) { experience=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"jumpheight") ) { jumpheight=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"experienceCap") ) { experienceCap=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"experienceGained") ) { experienceGained=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"damageGivenToPlayer") ) { damageGivenToPlayer=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("listener","\x74","\x00","\x32","\x38"));
	outFields->push(HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"));
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("experience","\xaa","\xb1","\x6c","\x79"));
	outFields->push(HX_HCSTRING("experienceCap","\x88","\x60","\x69","\xa1"));
	outFields->push(HX_HCSTRING("experienceGained","\xe8","\x67","\xb8","\xc9"));
	outFields->push(HX_HCSTRING("jumpheight","\x55","\x33","\x55","\x95"));
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("damageGivenToPlayer","\xea","\x83","\xda","\x5b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::type::player::managers::PlayerManager*/ ,(int)offsetof(PlayerManager_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsObject /*::core2::game::entity::type::player::listeners::PlayerListener*/ ,(int)offsetof(PlayerManager_obj,listener),HX_HCSTRING("listener","\x74","\x00","\x32","\x38")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,health),HX_HCSTRING("health","\x9c","\x28","\x06","\xfd")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,experience),HX_HCSTRING("experience","\xaa","\xb1","\x6c","\x79")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,experienceCap),HX_HCSTRING("experienceCap","\x88","\x60","\x69","\xa1")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,experienceGained),HX_HCSTRING("experienceGained","\xe8","\x67","\xb8","\xc9")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,jumpheight),HX_HCSTRING("jumpheight","\x55","\x33","\x55","\x95")},
	{hx::fsObject /*::core2::game::entity::type::player::Player*/ ,(int)offsetof(PlayerManager_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsInt,(int)offsetof(PlayerManager_obj,damageGivenToPlayer),HX_HCSTRING("damageGivenToPlayer","\xea","\x83","\xda","\x5b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("listener","\x74","\x00","\x32","\x38"),
	HX_HCSTRING("health","\x9c","\x28","\x06","\xfd"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("experience","\xaa","\xb1","\x6c","\x79"),
	HX_HCSTRING("experienceCap","\x88","\x60","\x69","\xa1"),
	HX_HCSTRING("experienceGained","\xe8","\x67","\xb8","\xc9"),
	HX_HCSTRING("jumpheight","\x55","\x33","\x55","\x95"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("damageGivenToPlayer","\xea","\x83","\xda","\x5b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getHealth","\xd2","\xb1","\x5c","\x79"),
	HX_HCSTRING("setHealth","\xde","\x9d","\xad","\x5c"),
	HX_HCSTRING("getDamageGivenToPlayer","\xf4","\xf0","\xf1","\x33"),
	HX_HCSTRING("setDamageGivenToPlayer","\x68","\x6d","\x9d","\x67"),
	HX_HCSTRING("getLevel","\x0e","\x25","\x3a","\xd2"),
	HX_HCSTRING("setLevel","\x82","\x7e","\x97","\x80"),
	HX_HCSTRING("levelUp","\xff","\xc8","\x76","\x21"),
	HX_HCSTRING("getExperience","\xe0","\x0d","\xdf","\xd5"),
	HX_HCSTRING("setExperience","\xec","\xef","\xe4","\x1a"),
	HX_HCSTRING("addExperience","\x2b","\xfb","\xb5","\xe3"),
	HX_HCSTRING("getExperienceCap","\x12","\x0a","\x8a","\x0b"),
	HX_HCSTRING("setExperienceCap","\x86","\xf7","\xcb","\x61"),
	HX_HCSTRING("getExperienceGained","\x9e","\xd0","\xde","\x83"),
	HX_HCSTRING("setExperienceGained","\xaa","\xc3","\x7b","\xc0"),
	HX_HCSTRING("getJumpHeight","\xab","\x03","\x5c","\x26"),
	HX_HCSTRING("setJumpHeight","\xb7","\xe5","\x61","\x6b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerManager_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerManager_obj::__mClass;

void PlayerManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.type.player.managers.PlayerManager","\xa7","\x93","\x0d","\xae");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerManager_obj >;
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
} // end namespace managers
