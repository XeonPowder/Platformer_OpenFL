#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_animation_Animation
#include <core2/game/entity/animation/Animation.h>
#endif
#ifndef INCLUDED_core2_game_entity_animation_AnimationList
#include <core2/game/entity/animation/AnimationList.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_Player
#include <core2/game/entity/type/player/Player.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_animation_PlayerAnimations
#include <core2/game/entity/type/player/animation/PlayerAnimations.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_animation_managers_PlayerAnimationManager
#include <core2/game/entity/type/player/animation/managers/PlayerAnimationManager.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
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
namespace animation{

Void PlayerAnimations_obj::__construct(::core2::game::entity::type::player::Player p)
{
HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","new",0xb100552f,"core2.game.entity.type.player.animation.PlayerAnimations.new","core2/game/entity/type/player/animation/PlayerAnimations.hx",12,0x3305b3df)
HX_STACK_THIS(this)
HX_STACK_ARG(p,"p")
{
	struct _Function_1_1{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",238,0x3305b3df)
			{
				HX_STACK_LINE(238)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right_touchdown.png","\x33","\x9b","\x94","\x83"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(239)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right_touchdown.png","\x33","\x9b","\x94","\x83"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(238)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(238)
	this->right_Touchdown_BMD_Array = _Function_1_1::Block();
	struct _Function_1_2{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",214,0x3305b3df)
			{
				HX_STACK_LINE(214)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left_touchdown.png","\x99","\x0c","\xa7","\x09"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(215)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left_touchdown.png","\x99","\x0c","\xa7","\x09"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(214)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(214)
	this->left_Touchdown_BMD_Array = _Function_1_2::Block();
	struct _Function_1_3{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",189,0x3305b3df)
			{
				HX_STACK_LINE(189)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/idle/idle.png","\x17","\xca","\x42","\x4a"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(190)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/idle/idle.png","\x17","\xca","\x42","\x4a"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(189)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(189)
	this->idle_BMD_Array = _Function_1_3::Block();
	struct _Function_1_4{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",164,0x3305b3df)
			{
				HX_STACK_LINE(164)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right_jump.png","\xb2","\xa2","\xca","\x2e"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(165)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right_jump.png","\xb2","\xa2","\xca","\x2e"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(164)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(164)
	this->movingRight_Jumping_BMD_Array = _Function_1_4::Block();
	struct _Function_1_5{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",141,0x3305b3df)
			{
				HX_STACK_LINE(141)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right.png","\x51","\xb3","\xb3","\x9a"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(142)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/right/right.png","\x51","\xb3","\xb3","\x9a"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(141)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(141)
	this->movingRight_BMD_Array = _Function_1_5::Block();
	struct _Function_1_6{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",118,0x3305b3df)
			{
				HX_STACK_LINE(118)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left_jump.png","\x0c","\xab","\x59","\xd9"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(119)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left_jump.png","\x0c","\xab","\x59","\xd9"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(118)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(118)
	this->movingLeft_Jumping_BMD_Array = _Function_1_6::Block();
	struct _Function_1_7{
		inline static Array< ::Dynamic > Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core2/game/entity/type/player/animation/PlayerAnimations.hx",95,0x3305b3df)
			{
				HX_STACK_LINE(95)
				::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left.png","\x37","\x89","\x75","\xae"),null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(96)
				::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("assests/player/movement/left/left.png","\x37","\x89","\x75","\xae"),null());		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(95)
				return Array_obj< ::Dynamic >::__new().Add(tmp).Add(tmp1);
			}
			return null();
		}
	};
	HX_STACK_LINE(95)
	this->movingLeft_BMD_Array = _Function_1_7::Block();
	HX_STACK_LINE(40)
	this->rightTouchdownAnimationFrames = (int)0;
	HX_STACK_LINE(39)
	this->rightTouchdownAnimation = null();
	HX_STACK_LINE(38)
	this->leftTouchdownAnimationFrames = (int)0;
	HX_STACK_LINE(37)
	this->leftTouchdownAnimation = null();
	HX_STACK_LINE(36)
	this->idleAnimationFrames = (int)0;
	HX_STACK_LINE(35)
	this->idleAnimation = null();
	HX_STACK_LINE(34)
	this->movingRightJumpingAnimationFrames = (int)0;
	HX_STACK_LINE(33)
	this->movingRightJumpingAnimation = null();
	HX_STACK_LINE(32)
	this->movingRightAnimationFrames = (int)0;
	HX_STACK_LINE(31)
	this->movingRightAnimation = null();
	HX_STACK_LINE(30)
	this->movingLeftJumpingAnimationFrames = (int)0;
	HX_STACK_LINE(29)
	this->movingLeftJumpingAnimation = null();
	HX_STACK_LINE(28)
	this->movingLeftAnimationFrames = (int)0;
	HX_STACK_LINE(27)
	this->movingLeftAnimation = null();
	HX_STACK_LINE(43)
	this->player = p;
	HX_STACK_LINE(44)
	this->createAnimations();
	HX_STACK_LINE(45)
	this->createAnimationFrames();
	HX_STACK_LINE(46)
	this->generateHashCodes();
	HX_STACK_LINE(47)
	::core2::game::entity::animation::AnimationList tmp = this->compileAnimations();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	this->animationList = tmp;
	HX_STACK_LINE(48)
	::core2::game::entity::type::player::animation::managers::PlayerAnimationManager tmp1 = ::core2::game::entity::type::player::animation::managers::PlayerAnimationManager_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	this->playerAnimationManager = tmp1;
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::core2::game::entity::type::player::animation::managers::PlayerAnimationManager tmp2 = this->playerAnimationManager;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		::haxe::ds::_HashMap::HashMapData tmp3 = tmp2->getList();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(49)
		::haxe::ds::_HashMap::HashMapData this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(49)
		::core2::game::entity::animation::AnimationList tmp4 = this->animationList;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(49)
		::core2::game::entity::animation::AnimationList k = tmp4;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(49)
		::haxe::ds::IntMap tmp5 = this1->keys;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(49)
		int tmp6 = k->hashCode();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(49)
		::core2::game::entity::animation::AnimationList tmp7 = k;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(49)
		tmp5->set(tmp6,tmp7);
		HX_STACK_LINE(49)
		::haxe::ds::IntMap tmp8 = this1->values;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(49)
		int tmp9 = k->hashCode();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(49)
		int tmp10 = this->pamHash;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(49)
		tmp8->set(tmp9,tmp10);
	}
}
;
	return null();
}

//PlayerAnimations_obj::~PlayerAnimations_obj() { }

Dynamic PlayerAnimations_obj::__CreateEmpty() { return  new PlayerAnimations_obj; }
hx::ObjectPtr< PlayerAnimations_obj > PlayerAnimations_obj::__new(::core2::game::entity::type::player::Player p)
{  hx::ObjectPtr< PlayerAnimations_obj > _result_ = new PlayerAnimations_obj();
	_result_->__construct(p);
	return _result_;}

Dynamic PlayerAnimations_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerAnimations_obj > _result_ = new PlayerAnimations_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayerAnimations_obj::generateHashCodes( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","generateHashCodes",0xb04eaf12,"core2.game.entity.type.player.animation.PlayerAnimations.generateHashCodes","core2/game/entity/type/player/animation/PlayerAnimations.hx",51,0x3305b3df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		::core2::game::entity::animation::Animation tmp = this->movingLeftAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		::core2::game::entity::animation::Animation tmp1 = tmp->getAnimation();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = tmp1->hashCode();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		this->leftID = tmp2;
		HX_STACK_LINE(53)
		::core2::game::entity::animation::Animation tmp3 = this->movingRightAnimation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::core2::game::entity::animation::Animation tmp4 = tmp3->getAnimation();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		int tmp5 = tmp4->hashCode();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		this->rightID = tmp5;
		HX_STACK_LINE(54)
		::core2::game::entity::animation::Animation tmp6 = this->movingLeftJumpingAnimation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(54)
		::core2::game::entity::animation::Animation tmp7 = tmp6->getAnimation();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		int tmp8 = tmp7->hashCode();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		this->leftJumpID = tmp8;
		HX_STACK_LINE(55)
		::core2::game::entity::animation::Animation tmp9 = this->movingRightJumpingAnimation;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		::core2::game::entity::animation::Animation tmp10 = tmp9->getAnimation();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		int tmp11 = tmp10->hashCode();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(55)
		this->rightJumpID = tmp11;
		HX_STACK_LINE(56)
		::core2::game::entity::animation::Animation tmp12 = this->idleAnimation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		::core2::game::entity::animation::Animation tmp13 = tmp12->getAnimation();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(56)
		int tmp14 = tmp13->hashCode();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(56)
		this->idleID = tmp14;
		HX_STACK_LINE(57)
		::core2::game::entity::animation::Animation tmp15 = this->leftTouchdownAnimation;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(57)
		::core2::game::entity::animation::Animation tmp16 = tmp15->getAnimation();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(57)
		int tmp17 = tmp16->hashCode();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(57)
		this->leftTouchdownID = tmp17;
		HX_STACK_LINE(58)
		::core2::game::entity::animation::Animation tmp18 = this->rightTouchdownAnimation;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(58)
		::core2::game::entity::animation::Animation tmp19 = tmp18->getAnimation();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(58)
		int tmp20 = tmp19->hashCode();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(58)
		this->rightTouchdownID = tmp20;
		HX_STACK_LINE(59)
		::core2::game::entity::type::player::animation::managers::PlayerAnimationManager tmp21 = this->playerAnimationManager;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(59)
		::core2::game::entity::type::player::animation::managers::PlayerAnimationManager tmp22 = tmp21->getPlayerAnimationManager();		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(59)
		int tmp23 = tmp22->hashCode();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(59)
		this->pamHash = tmp23;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,generateHashCodes,(void))

::core2::game::entity::animation::AnimationList PlayerAnimations_obj::compileAnimations( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","compileAnimations",0x82e87d51,"core2.game.entity.type.player.animation.PlayerAnimations.compileAnimations","core2/game/entity/type/player/animation/PlayerAnimations.hx",61,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::core2::game::entity::animation::AnimationList tmp = ::core2::game::entity::animation::AnimationList_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	::core2::game::entity::animation::AnimationList al = tmp;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(63)
	{
		HX_STACK_LINE(63)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(63)
		::core2::game::entity::animation::Animation tmp2 = this->getLeft();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(63)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(63)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(63)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(63)
		int tmp8 = this->leftID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(64)
	{
		HX_STACK_LINE(64)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(64)
		::core2::game::entity::animation::Animation tmp2 = this->getRight();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(64)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(64)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = this->rightID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(65)
	{
		HX_STACK_LINE(65)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(65)
		::core2::game::entity::animation::Animation tmp2 = this->getLeftJump();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(65)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(65)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(65)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(65)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(65)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(65)
		int tmp8 = this->leftJumpID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(66)
	{
		HX_STACK_LINE(66)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(66)
		::core2::game::entity::animation::Animation tmp2 = this->getRightJump();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(66)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(66)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(66)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		int tmp8 = this->rightJumpID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(66)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(67)
		::core2::game::entity::animation::Animation tmp2 = this->getIdle();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(67)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(67)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(67)
		int tmp8 = this->idleID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(67)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(68)
		::core2::game::entity::animation::Animation tmp2 = this->getLeftTouchdown();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(68)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(68)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(68)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(68)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(68)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		int tmp8 = this->leftTouchdownID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		::haxe::ds::_HashMap::HashMapData tmp1 = al->getList();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		::haxe::ds::_HashMap::HashMapData this1 = tmp1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(69)
		::core2::game::entity::animation::Animation tmp2 = this->getRightTouchdown();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		::core2::game::entity::animation::Animation k = tmp2;		HX_STACK_VAR(k,"k");
		HX_STACK_LINE(69)
		::haxe::ds::IntMap tmp3 = this1->keys;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		int tmp4 = k->hashCode();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		::core2::game::entity::animation::Animation tmp5 = k;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		tmp3->set(tmp4,tmp5);
		HX_STACK_LINE(69)
		::haxe::ds::IntMap tmp6 = this1->values;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		int tmp7 = k->hashCode();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(69)
		int tmp8 = this->rightTouchdownID;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(69)
		tmp6->set(tmp7,tmp8);
	}
	HX_STACK_LINE(70)
	::core2::game::entity::animation::AnimationList tmp1 = al;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,compileAnimations,return )

Void PlayerAnimations_obj::createAnimations( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","createAnimations",0xd54118dc,"core2.game.entity.type.player.animation.PlayerAnimations.createAnimations","core2/game/entity/type/player/animation/PlayerAnimations.hx",72,0x3305b3df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		::core2::game::entity::type::player::Player tmp = this->player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::openfl::display::Bitmap tmp1 = tmp->getBitmap();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(73)
		::core2::game::entity::animation::Animation tmp2 = ::core2::game::entity::animation::Animation_obj::__new(tmp1,this->getMovingLeftBMDArray(),HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(73)
		this->movingLeftAnimation = tmp2;
		HX_STACK_LINE(74)
		::core2::game::entity::type::player::Player tmp3 = this->player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(74)
		::openfl::display::Bitmap tmp4 = tmp3->getBitmap();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(74)
		::core2::game::entity::animation::Animation tmp5 = ::core2::game::entity::animation::Animation_obj::__new(tmp4,this->getMovingLeftJumpingBMDArray(),HX_HCSTRING("left_jump","\x66","\x5f","\x2d","\x7b"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		this->movingLeftJumpingAnimation = tmp5;
		HX_STACK_LINE(75)
		::core2::game::entity::type::player::Player tmp6 = this->player;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(75)
		::openfl::display::Bitmap tmp7 = tmp6->getBitmap();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(75)
		::core2::game::entity::animation::Animation tmp8 = ::core2::game::entity::animation::Animation_obj::__new(tmp7,this->getMovingRightBMDArray(),HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(75)
		this->movingRightAnimation = tmp8;
		HX_STACK_LINE(76)
		::core2::game::entity::type::player::Player tmp9 = this->player;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		::openfl::display::Bitmap tmp10 = tmp9->getBitmap();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		::core2::game::entity::animation::Animation tmp11 = ::core2::game::entity::animation::Animation_obj::__new(tmp10,this->getMovingRightJumpingBMDArray(),HX_HCSTRING("right_jump","\x71","\x57","\x12","\x69"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(76)
		this->movingRightJumpingAnimation = tmp11;
		HX_STACK_LINE(77)
		::core2::game::entity::type::player::Player tmp12 = this->player;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(77)
		::openfl::display::Bitmap tmp13 = tmp12->getBitmap();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(77)
		::core2::game::entity::animation::Animation tmp14 = ::core2::game::entity::animation::Animation_obj::__new(tmp13,this->getIdleBMDArray(),HX_HCSTRING("idle","\x14","\xa7","\xb3","\x45"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(77)
		this->idleAnimation = tmp14;
		HX_STACK_LINE(78)
		::core2::game::entity::type::player::Player tmp15 = this->player;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(78)
		::openfl::display::Bitmap tmp16 = tmp15->getBitmap();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(78)
		::core2::game::entity::animation::Animation tmp17 = ::core2::game::entity::animation::Animation_obj::__new(tmp16,this->getLeftTouchdownBMDArray(),HX_HCSTRING("left_touchdown","\x29","\xce","\xc2","\xb5"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(78)
		this->leftTouchdownAnimation = tmp17;
		HX_STACK_LINE(79)
		::core2::game::entity::type::player::Player tmp18 = this->player;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(79)
		::openfl::display::Bitmap tmp19 = tmp18->getBitmap();		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(79)
		::core2::game::entity::animation::Animation tmp20 = ::core2::game::entity::animation::Animation_obj::__new(tmp19,this->getRightTouchdownBMDArray(),HX_HCSTRING("right_touchdown","\x3e","\xce","\xc7","\xd4"));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(79)
		this->rightTouchdownAnimation = tmp20;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,createAnimations,(void))

Void PlayerAnimations_obj::createAnimationFrames( ){
{
		HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","createAnimationFrames",0xec5aeebd,"core2.game.entity.type.player.animation.PlayerAnimations.createAnimationFrames","core2/game/entity/type/player/animation/PlayerAnimations.hx",82,0x3305b3df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(83)
		::core2::game::entity::animation::Animation tmp = this->movingLeftAnimation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		int tmp1 = tmp->getFrames();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		this->movingLeftAnimationFrames = tmp1;
		HX_STACK_LINE(84)
		::core2::game::entity::animation::Animation tmp2 = this->movingLeftJumpingAnimation;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		int tmp3 = tmp2->getFrames();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		this->movingLeftJumpingAnimationFrames = tmp3;
		HX_STACK_LINE(85)
		::core2::game::entity::animation::Animation tmp4 = this->movingRightAnimation;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		int tmp5 = tmp4->getFrames();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		this->movingRightAnimationFrames = tmp5;
		HX_STACK_LINE(86)
		::core2::game::entity::animation::Animation tmp6 = this->movingRightJumpingAnimation;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(86)
		int tmp7 = tmp6->getFrames();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(86)
		this->movingRightJumpingAnimationFrames = tmp7;
		HX_STACK_LINE(87)
		::core2::game::entity::animation::Animation tmp8 = this->idleAnimation;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(87)
		int tmp9 = tmp8->getFrames();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(87)
		this->idleAnimationFrames = tmp9;
		HX_STACK_LINE(88)
		::core2::game::entity::animation::Animation tmp10 = this->leftTouchdownAnimation;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(88)
		int tmp11 = tmp10->getFrames();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(88)
		this->leftTouchdownAnimationFrames = tmp11;
		HX_STACK_LINE(89)
		::core2::game::entity::animation::Animation tmp12 = this->rightTouchdownAnimation;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(89)
		int tmp13 = tmp12->getFrames();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(89)
		this->rightTouchdownAnimationFrames = tmp13;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,createAnimationFrames,(void))

int PlayerAnimations_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","hashCode",0x46c9b8ec,"core2.game.entity.type.player.animation.PlayerAnimations.hashCode","core2/game/entity/type/player/animation/PlayerAnimations.hx",91,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,hashCode,return )

Array< ::Dynamic > PlayerAnimations_obj::getMovingLeftBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getMovingLeftBMDArray",0x76ffb43a,"core2.game.entity.type.player.animation.PlayerAnimations.getMovingLeftBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",110,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(110)
	return this->movingLeft_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getMovingLeftBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getLeft( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getLeft",0xa563500c,"core2.game.entity.type.player.animation.PlayerAnimations.getLeft","core2/game/entity/type/player/animation/PlayerAnimations.hx",113,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::core2::game::entity::animation::Animation tmp = this->movingLeftAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getLeft,return )

Array< ::Dynamic > PlayerAnimations_obj::getMovingLeftJumpingBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getMovingLeftJumpingBMDArray",0x3f44511a,"core2.game.entity.type.player.animation.PlayerAnimations.getMovingLeftJumpingBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",133,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	return this->movingLeft_Jumping_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getMovingLeftJumpingBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getLeftJump( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getLeftJump",0xbb5d371a,"core2.game.entity.type.player.animation.PlayerAnimations.getLeftJump","core2/game/entity/type/player/animation/PlayerAnimations.hx",136,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::core2::game::entity::animation::Animation tmp = this->movingLeftJumpingAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getLeftJump,return )

Array< ::Dynamic > PlayerAnimations_obj::getMovingRightBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getMovingRightBMDArray",0x0058b4c9,"core2.game.entity.type.player.animation.PlayerAnimations.getMovingRightBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",156,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(156)
	return this->movingRight_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getMovingRightBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getRight( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getRight",0x888fc837,"core2.game.entity.type.player.animation.PlayerAnimations.getRight","core2/game/entity/type/player/animation/PlayerAnimations.hx",159,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(160)
	::core2::game::entity::animation::Animation tmp = this->movingRightAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(160)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getRight,return )

Array< ::Dynamic > PlayerAnimations_obj::getMovingRightJumpingBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getMovingRightJumpingBMDArray",0x7639106b,"core2.game.entity.type.player.animation.PlayerAnimations.getMovingRightJumpingBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",179,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(179)
	return this->movingRight_Jumping_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getMovingRightJumpingBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getRightJump( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getRightJump",0x7c60a0c5,"core2.game.entity.type.player.animation.PlayerAnimations.getRightJump","core2/game/entity/type/player/animation/PlayerAnimations.hx",182,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	::core2::game::entity::animation::Animation tmp = this->movingRightJumpingAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getRightJump,return )

Array< ::Dynamic > PlayerAnimations_obj::getIdleBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getIdleBMDArray",0x9df8bad9,"core2.game.entity.type.player.animation.PlayerAnimations.getIdleBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",204,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(204)
	return this->idle_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getIdleBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getIdle( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getIdle",0xa366ef19,"core2.game.entity.type.player.animation.PlayerAnimations.getIdle","core2/game/entity/type/player/animation/PlayerAnimations.hx",207,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(208)
	::core2::game::entity::animation::Animation tmp = this->idleAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getIdle,return )

Array< ::Dynamic > PlayerAnimations_obj::getLeftTouchdownBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getLeftTouchdownBMDArray",0xfe3691b5,"core2.game.entity.type.player.animation.PlayerAnimations.getLeftTouchdownBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",229,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(229)
	return this->left_Touchdown_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getLeftTouchdownBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getLeftTouchdown( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getLeftTouchdown",0x1e0489f5,"core2.game.entity.type.player.animation.PlayerAnimations.getLeftTouchdown","core2/game/entity/type/player/animation/PlayerAnimations.hx",232,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(233)
	::core2::game::entity::animation::Animation tmp = this->leftTouchdownAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(233)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getLeftTouchdown,return )

Array< ::Dynamic > PlayerAnimations_obj::getRightTouchdownBMDArray( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getRightTouchdownBMDArray",0xb84c392a,"core2.game.entity.type.player.animation.PlayerAnimations.getRightTouchdownBMDArray","core2/game/entity/type/player/animation/PlayerAnimations.hx",254,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(254)
	return this->right_Touchdown_BMD_Array;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getRightTouchdownBMDArray,return )

::core2::game::entity::animation::Animation PlayerAnimations_obj::getRightTouchdown( ){
	HX_STACK_FRAME("core2.game.entity.type.player.animation.PlayerAnimations","getRightTouchdown",0xaa0b346a,"core2.game.entity.type.player.animation.PlayerAnimations.getRightTouchdown","core2/game/entity/type/player/animation/PlayerAnimations.hx",257,0x3305b3df)
	HX_STACK_THIS(this)
	HX_STACK_LINE(258)
	::core2::game::entity::animation::Animation tmp = this->rightTouchdownAnimation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(258)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerAnimations_obj,getRightTouchdown,return )


PlayerAnimations_obj::PlayerAnimations_obj()
{
}

void PlayerAnimations_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerAnimations);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(playerAnimationManager,"playerAnimationManager");
	HX_MARK_MEMBER_NAME(animationList,"animationList");
	HX_MARK_MEMBER_NAME(pamHash,"pamHash");
	HX_MARK_MEMBER_NAME(leftID,"leftID");
	HX_MARK_MEMBER_NAME(rightID,"rightID");
	HX_MARK_MEMBER_NAME(leftJumpID,"leftJumpID");
	HX_MARK_MEMBER_NAME(rightJumpID,"rightJumpID");
	HX_MARK_MEMBER_NAME(idleID,"idleID");
	HX_MARK_MEMBER_NAME(leftTouchdownID,"leftTouchdownID");
	HX_MARK_MEMBER_NAME(rightTouchdownID,"rightTouchdownID");
	HX_MARK_MEMBER_NAME(movingLeftAnimation,"movingLeftAnimation");
	HX_MARK_MEMBER_NAME(movingLeftAnimationFrames,"movingLeftAnimationFrames");
	HX_MARK_MEMBER_NAME(movingLeftJumpingAnimation,"movingLeftJumpingAnimation");
	HX_MARK_MEMBER_NAME(movingLeftJumpingAnimationFrames,"movingLeftJumpingAnimationFrames");
	HX_MARK_MEMBER_NAME(movingRightAnimation,"movingRightAnimation");
	HX_MARK_MEMBER_NAME(movingRightAnimationFrames,"movingRightAnimationFrames");
	HX_MARK_MEMBER_NAME(movingRightJumpingAnimation,"movingRightJumpingAnimation");
	HX_MARK_MEMBER_NAME(movingRightJumpingAnimationFrames,"movingRightJumpingAnimationFrames");
	HX_MARK_MEMBER_NAME(idleAnimation,"idleAnimation");
	HX_MARK_MEMBER_NAME(idleAnimationFrames,"idleAnimationFrames");
	HX_MARK_MEMBER_NAME(leftTouchdownAnimation,"leftTouchdownAnimation");
	HX_MARK_MEMBER_NAME(leftTouchdownAnimationFrames,"leftTouchdownAnimationFrames");
	HX_MARK_MEMBER_NAME(rightTouchdownAnimation,"rightTouchdownAnimation");
	HX_MARK_MEMBER_NAME(rightTouchdownAnimationFrames,"rightTouchdownAnimationFrames");
	HX_MARK_MEMBER_NAME(movingLeft_BMD_Array,"movingLeft_BMD_Array");
	HX_MARK_MEMBER_NAME(movingLeft_Jumping_BMD_Array,"movingLeft_Jumping_BMD_Array");
	HX_MARK_MEMBER_NAME(movingRight_BMD_Array,"movingRight_BMD_Array");
	HX_MARK_MEMBER_NAME(movingRight_Jumping_BMD_Array,"movingRight_Jumping_BMD_Array");
	HX_MARK_MEMBER_NAME(idle_BMD_Array,"idle_BMD_Array");
	HX_MARK_MEMBER_NAME(left_Touchdown_BMD_Array,"left_Touchdown_BMD_Array");
	HX_MARK_MEMBER_NAME(right_Touchdown_BMD_Array,"right_Touchdown_BMD_Array");
	HX_MARK_END_CLASS();
}

void PlayerAnimations_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(playerAnimationManager,"playerAnimationManager");
	HX_VISIT_MEMBER_NAME(animationList,"animationList");
	HX_VISIT_MEMBER_NAME(pamHash,"pamHash");
	HX_VISIT_MEMBER_NAME(leftID,"leftID");
	HX_VISIT_MEMBER_NAME(rightID,"rightID");
	HX_VISIT_MEMBER_NAME(leftJumpID,"leftJumpID");
	HX_VISIT_MEMBER_NAME(rightJumpID,"rightJumpID");
	HX_VISIT_MEMBER_NAME(idleID,"idleID");
	HX_VISIT_MEMBER_NAME(leftTouchdownID,"leftTouchdownID");
	HX_VISIT_MEMBER_NAME(rightTouchdownID,"rightTouchdownID");
	HX_VISIT_MEMBER_NAME(movingLeftAnimation,"movingLeftAnimation");
	HX_VISIT_MEMBER_NAME(movingLeftAnimationFrames,"movingLeftAnimationFrames");
	HX_VISIT_MEMBER_NAME(movingLeftJumpingAnimation,"movingLeftJumpingAnimation");
	HX_VISIT_MEMBER_NAME(movingLeftJumpingAnimationFrames,"movingLeftJumpingAnimationFrames");
	HX_VISIT_MEMBER_NAME(movingRightAnimation,"movingRightAnimation");
	HX_VISIT_MEMBER_NAME(movingRightAnimationFrames,"movingRightAnimationFrames");
	HX_VISIT_MEMBER_NAME(movingRightJumpingAnimation,"movingRightJumpingAnimation");
	HX_VISIT_MEMBER_NAME(movingRightJumpingAnimationFrames,"movingRightJumpingAnimationFrames");
	HX_VISIT_MEMBER_NAME(idleAnimation,"idleAnimation");
	HX_VISIT_MEMBER_NAME(idleAnimationFrames,"idleAnimationFrames");
	HX_VISIT_MEMBER_NAME(leftTouchdownAnimation,"leftTouchdownAnimation");
	HX_VISIT_MEMBER_NAME(leftTouchdownAnimationFrames,"leftTouchdownAnimationFrames");
	HX_VISIT_MEMBER_NAME(rightTouchdownAnimation,"rightTouchdownAnimation");
	HX_VISIT_MEMBER_NAME(rightTouchdownAnimationFrames,"rightTouchdownAnimationFrames");
	HX_VISIT_MEMBER_NAME(movingLeft_BMD_Array,"movingLeft_BMD_Array");
	HX_VISIT_MEMBER_NAME(movingLeft_Jumping_BMD_Array,"movingLeft_Jumping_BMD_Array");
	HX_VISIT_MEMBER_NAME(movingRight_BMD_Array,"movingRight_BMD_Array");
	HX_VISIT_MEMBER_NAME(movingRight_Jumping_BMD_Array,"movingRight_Jumping_BMD_Array");
	HX_VISIT_MEMBER_NAME(idle_BMD_Array,"idle_BMD_Array");
	HX_VISIT_MEMBER_NAME(left_Touchdown_BMD_Array,"left_Touchdown_BMD_Array");
	HX_VISIT_MEMBER_NAME(right_Touchdown_BMD_Array,"right_Touchdown_BMD_Array");
}

Dynamic PlayerAnimations_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"leftID") ) { return leftID; }
		if (HX_FIELD_EQ(inName,"idleID") ) { return idleID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pamHash") ) { return pamHash; }
		if (HX_FIELD_EQ(inName,"rightID") ) { return rightID; }
		if (HX_FIELD_EQ(inName,"getLeft") ) { return getLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"getIdle") ) { return getIdle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getRight") ) { return getRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftJumpID") ) { return leftJumpID; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightJumpID") ) { return rightJumpID; }
		if (HX_FIELD_EQ(inName,"getLeftJump") ) { return getLeftJump_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getRightJump") ) { return getRightJump_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationList") ) { return animationList; }
		if (HX_FIELD_EQ(inName,"idleAnimation") ) { return idleAnimation; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"idle_BMD_Array") ) { return idle_BMD_Array; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftTouchdownID") ) { return leftTouchdownID; }
		if (HX_FIELD_EQ(inName,"getIdleBMDArray") ) { return getIdleBMDArray_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rightTouchdownID") ) { return rightTouchdownID; }
		if (HX_FIELD_EQ(inName,"createAnimations") ) { return createAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"getLeftTouchdown") ) { return getLeftTouchdown_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"generateHashCodes") ) { return generateHashCodes_dyn(); }
		if (HX_FIELD_EQ(inName,"compileAnimations") ) { return compileAnimations_dyn(); }
		if (HX_FIELD_EQ(inName,"getRightTouchdown") ) { return getRightTouchdown_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"movingLeftAnimation") ) { return movingLeftAnimation; }
		if (HX_FIELD_EQ(inName,"idleAnimationFrames") ) { return idleAnimationFrames; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"movingRightAnimation") ) { return movingRightAnimation; }
		if (HX_FIELD_EQ(inName,"movingLeft_BMD_Array") ) { return movingLeft_BMD_Array; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAnimationFrames") ) { return createAnimationFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getMovingLeftBMDArray") ) { return getMovingLeftBMDArray_dyn(); }
		if (HX_FIELD_EQ(inName,"movingRight_BMD_Array") ) { return movingRight_BMD_Array; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerAnimationManager") ) { return playerAnimationManager; }
		if (HX_FIELD_EQ(inName,"leftTouchdownAnimation") ) { return leftTouchdownAnimation; }
		if (HX_FIELD_EQ(inName,"getMovingRightBMDArray") ) { return getMovingRightBMDArray_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rightTouchdownAnimation") ) { return rightTouchdownAnimation; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"left_Touchdown_BMD_Array") ) { return left_Touchdown_BMD_Array; }
		if (HX_FIELD_EQ(inName,"getLeftTouchdownBMDArray") ) { return getLeftTouchdownBMDArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"movingLeftAnimationFrames") ) { return movingLeftAnimationFrames; }
		if (HX_FIELD_EQ(inName,"right_Touchdown_BMD_Array") ) { return right_Touchdown_BMD_Array; }
		if (HX_FIELD_EQ(inName,"getRightTouchdownBMDArray") ) { return getRightTouchdownBMDArray_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"movingLeftJumpingAnimation") ) { return movingLeftJumpingAnimation; }
		if (HX_FIELD_EQ(inName,"movingRightAnimationFrames") ) { return movingRightAnimationFrames; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"movingRightJumpingAnimation") ) { return movingRightJumpingAnimation; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"leftTouchdownAnimationFrames") ) { return leftTouchdownAnimationFrames; }
		if (HX_FIELD_EQ(inName,"movingLeft_Jumping_BMD_Array") ) { return movingLeft_Jumping_BMD_Array; }
		if (HX_FIELD_EQ(inName,"getMovingLeftJumpingBMDArray") ) { return getMovingLeftJumpingBMDArray_dyn(); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"rightTouchdownAnimationFrames") ) { return rightTouchdownAnimationFrames; }
		if (HX_FIELD_EQ(inName,"movingRight_Jumping_BMD_Array") ) { return movingRight_Jumping_BMD_Array; }
		if (HX_FIELD_EQ(inName,"getMovingRightJumpingBMDArray") ) { return getMovingRightJumpingBMDArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"movingLeftJumpingAnimationFrames") ) { return movingLeftJumpingAnimationFrames; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"movingRightJumpingAnimationFrames") ) { return movingRightJumpingAnimationFrames; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerAnimations_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::core2::game::entity::type::player::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftID") ) { leftID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleID") ) { idleID=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pamHash") ) { pamHash=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rightID") ) { rightID=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"leftJumpID") ) { leftJumpID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rightJumpID") ) { rightJumpID=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"animationList") ) { animationList=inValue.Cast< ::core2::game::entity::animation::AnimationList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleAnimation") ) { idleAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"idle_BMD_Array") ) { idle_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"leftTouchdownID") ) { leftTouchdownID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"rightTouchdownID") ) { rightTouchdownID=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"movingLeftAnimation") ) { movingLeftAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"idleAnimationFrames") ) { idleAnimationFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"movingRightAnimation") ) { movingRightAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movingLeft_BMD_Array") ) { movingLeft_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"movingRight_BMD_Array") ) { movingRight_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"playerAnimationManager") ) { playerAnimationManager=inValue.Cast< ::core2::game::entity::type::player::animation::managers::PlayerAnimationManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leftTouchdownAnimation") ) { leftTouchdownAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"rightTouchdownAnimation") ) { rightTouchdownAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"left_Touchdown_BMD_Array") ) { left_Touchdown_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"movingLeftAnimationFrames") ) { movingLeftAnimationFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right_Touchdown_BMD_Array") ) { right_Touchdown_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"movingLeftJumpingAnimation") ) { movingLeftJumpingAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movingRightAnimationFrames") ) { movingRightAnimationFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"movingRightJumpingAnimation") ) { movingRightJumpingAnimation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"leftTouchdownAnimationFrames") ) { leftTouchdownAnimationFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movingLeft_Jumping_BMD_Array") ) { movingLeft_Jumping_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"rightTouchdownAnimationFrames") ) { rightTouchdownAnimationFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"movingRight_Jumping_BMD_Array") ) { movingRight_Jumping_BMD_Array=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"movingLeftJumpingAnimationFrames") ) { movingLeftJumpingAnimationFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"movingRightJumpingAnimationFrames") ) { movingRightJumpingAnimationFrames=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerAnimations_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));
	outFields->push(HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3"));
	outFields->push(HX_HCSTRING("animationList","\x82","\x09","\xff","\x39"));
	outFields->push(HX_HCSTRING("pamHash","\x4a","\x8b","\x90","\xec"));
	outFields->push(HX_HCSTRING("leftID","\xa2","\x97","\xc7","\x99"));
	outFields->push(HX_HCSTRING("rightID","\xb7","\xfa","\x63","\x13"));
	outFields->push(HX_HCSTRING("leftJumpID","\xb0","\x57","\x28","\x37"));
	outFields->push(HX_HCSTRING("rightJumpID","\x45","\x69","\x9c","\x71"));
	outFields->push(HX_HCSTRING("idleID","\xef","\xd3","\x3a","\xd7"));
	outFields->push(HX_HCSTRING("leftTouchdownID","\xf5","\x14","\xf4","\x86"));
	outFields->push(HX_HCSTRING("rightTouchdownID","\x40","\x27","\x4f","\x8c"));
	outFields->push(HX_HCSTRING("movingLeftAnimation","\x8f","\x6a","\xf5","\x93"));
	outFields->push(HX_HCSTRING("movingLeftAnimationFrames","\x95","\x63","\x78","\x78"));
	outFields->push(HX_HCSTRING("movingLeftJumpingAnimation","\x85","\x63","\x81","\x35"));
	outFields->push(HX_HCSTRING("movingLeftJumpingAnimationFrames","\x0b","\x79","\xee","\x14"));
	outFields->push(HX_HCSTRING("movingRightAnimation","\xb6","\x0a","\x25","\x56"));
	outFields->push(HX_HCSTRING("movingRightAnimationFrames","\xfc","\x1a","\xe5","\x47"));
	outFields->push(HX_HCSTRING("movingRightJumpingAnimation","\x3e","\x26","\x35","\xe5"));
	outFields->push(HX_HCSTRING("movingRightJumpingAnimationFrames","\x84","\x8c","\xe2","\x5d"));
	outFields->push(HX_HCSTRING("idleAnimation","\x50","\xa5","\xf8","\x72"));
	outFields->push(HX_HCSTRING("idleAnimationFrames","\x16","\xa5","\x51","\x32"));
	outFields->push(HX_HCSTRING("leftTouchdownAnimation","\x0a","\x31","\x88","\x42"));
	outFields->push(HX_HCSTRING("leftTouchdownAnimationFrames","\x50","\xb8","\x33","\xf5"));
	outFields->push(HX_HCSTRING("rightTouchdownAnimation","\x1f","\xce","\x5a","\xbc"));
	outFields->push(HX_HCSTRING("rightTouchdownAnimationFrames","\x25","\xd3","\x9c","\xab"));
	outFields->push(HX_HCSTRING("movingLeft_BMD_Array","\x49","\x2b","\x5e","\x1b"));
	outFields->push(HX_HCSTRING("movingLeft_Jumping_BMD_Array","\x9e","\x06","\x65","\xd5"));
	outFields->push(HX_HCSTRING("movingRight_BMD_Array","\x42","\xad","\xda","\x42"));
	outFields->push(HX_HCSTRING("movingRight_Jumping_BMD_Array","\x97","\xa9","\x99","\xab"));
	outFields->push(HX_HCSTRING("idle_BMD_Array","\x68","\x59","\x2e","\x5f"));
	outFields->push(HX_HCSTRING("left_Touchdown_BMD_Array","\x9d","\x84","\xf0","\xea"));
	outFields->push(HX_HCSTRING("right_Touchdown_BMD_Array","\xf2","\x50","\x74","\x74"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::type::player::Player*/ ,(int)offsetof(PlayerAnimations_obj,player),HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::core2::game::entity::type::player::animation::managers::PlayerAnimationManager*/ ,(int)offsetof(PlayerAnimations_obj,playerAnimationManager),HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3")},
	{hx::fsObject /*::core2::game::entity::animation::AnimationList*/ ,(int)offsetof(PlayerAnimations_obj,animationList),HX_HCSTRING("animationList","\x82","\x09","\xff","\x39")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,pamHash),HX_HCSTRING("pamHash","\x4a","\x8b","\x90","\xec")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,leftID),HX_HCSTRING("leftID","\xa2","\x97","\xc7","\x99")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,rightID),HX_HCSTRING("rightID","\xb7","\xfa","\x63","\x13")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,leftJumpID),HX_HCSTRING("leftJumpID","\xb0","\x57","\x28","\x37")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,rightJumpID),HX_HCSTRING("rightJumpID","\x45","\x69","\x9c","\x71")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,idleID),HX_HCSTRING("idleID","\xef","\xd3","\x3a","\xd7")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,leftTouchdownID),HX_HCSTRING("leftTouchdownID","\xf5","\x14","\xf4","\x86")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,rightTouchdownID),HX_HCSTRING("rightTouchdownID","\x40","\x27","\x4f","\x8c")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,movingLeftAnimation),HX_HCSTRING("movingLeftAnimation","\x8f","\x6a","\xf5","\x93")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,movingLeftAnimationFrames),HX_HCSTRING("movingLeftAnimationFrames","\x95","\x63","\x78","\x78")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,movingLeftJumpingAnimation),HX_HCSTRING("movingLeftJumpingAnimation","\x85","\x63","\x81","\x35")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,movingLeftJumpingAnimationFrames),HX_HCSTRING("movingLeftJumpingAnimationFrames","\x0b","\x79","\xee","\x14")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,movingRightAnimation),HX_HCSTRING("movingRightAnimation","\xb6","\x0a","\x25","\x56")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,movingRightAnimationFrames),HX_HCSTRING("movingRightAnimationFrames","\xfc","\x1a","\xe5","\x47")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,movingRightJumpingAnimation),HX_HCSTRING("movingRightJumpingAnimation","\x3e","\x26","\x35","\xe5")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,movingRightJumpingAnimationFrames),HX_HCSTRING("movingRightJumpingAnimationFrames","\x84","\x8c","\xe2","\x5d")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,idleAnimation),HX_HCSTRING("idleAnimation","\x50","\xa5","\xf8","\x72")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,idleAnimationFrames),HX_HCSTRING("idleAnimationFrames","\x16","\xa5","\x51","\x32")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,leftTouchdownAnimation),HX_HCSTRING("leftTouchdownAnimation","\x0a","\x31","\x88","\x42")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,leftTouchdownAnimationFrames),HX_HCSTRING("leftTouchdownAnimationFrames","\x50","\xb8","\x33","\xf5")},
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(PlayerAnimations_obj,rightTouchdownAnimation),HX_HCSTRING("rightTouchdownAnimation","\x1f","\xce","\x5a","\xbc")},
	{hx::fsInt,(int)offsetof(PlayerAnimations_obj,rightTouchdownAnimationFrames),HX_HCSTRING("rightTouchdownAnimationFrames","\x25","\xd3","\x9c","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,movingLeft_BMD_Array),HX_HCSTRING("movingLeft_BMD_Array","\x49","\x2b","\x5e","\x1b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,movingLeft_Jumping_BMD_Array),HX_HCSTRING("movingLeft_Jumping_BMD_Array","\x9e","\x06","\x65","\xd5")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,movingRight_BMD_Array),HX_HCSTRING("movingRight_BMD_Array","\x42","\xad","\xda","\x42")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,movingRight_Jumping_BMD_Array),HX_HCSTRING("movingRight_Jumping_BMD_Array","\x97","\xa9","\x99","\xab")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,idle_BMD_Array),HX_HCSTRING("idle_BMD_Array","\x68","\x59","\x2e","\x5f")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,left_Touchdown_BMD_Array),HX_HCSTRING("left_Touchdown_BMD_Array","\x9d","\x84","\xf0","\xea")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayerAnimations_obj,right_Touchdown_BMD_Array),HX_HCSTRING("right_Touchdown_BMD_Array","\xf2","\x50","\x74","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("playerAnimationManager","\x4a","\xcd","\x8f","\xd3"),
	HX_HCSTRING("animationList","\x82","\x09","\xff","\x39"),
	HX_HCSTRING("pamHash","\x4a","\x8b","\x90","\xec"),
	HX_HCSTRING("leftID","\xa2","\x97","\xc7","\x99"),
	HX_HCSTRING("rightID","\xb7","\xfa","\x63","\x13"),
	HX_HCSTRING("leftJumpID","\xb0","\x57","\x28","\x37"),
	HX_HCSTRING("rightJumpID","\x45","\x69","\x9c","\x71"),
	HX_HCSTRING("idleID","\xef","\xd3","\x3a","\xd7"),
	HX_HCSTRING("leftTouchdownID","\xf5","\x14","\xf4","\x86"),
	HX_HCSTRING("rightTouchdownID","\x40","\x27","\x4f","\x8c"),
	HX_HCSTRING("movingLeftAnimation","\x8f","\x6a","\xf5","\x93"),
	HX_HCSTRING("movingLeftAnimationFrames","\x95","\x63","\x78","\x78"),
	HX_HCSTRING("movingLeftJumpingAnimation","\x85","\x63","\x81","\x35"),
	HX_HCSTRING("movingLeftJumpingAnimationFrames","\x0b","\x79","\xee","\x14"),
	HX_HCSTRING("movingRightAnimation","\xb6","\x0a","\x25","\x56"),
	HX_HCSTRING("movingRightAnimationFrames","\xfc","\x1a","\xe5","\x47"),
	HX_HCSTRING("movingRightJumpingAnimation","\x3e","\x26","\x35","\xe5"),
	HX_HCSTRING("movingRightJumpingAnimationFrames","\x84","\x8c","\xe2","\x5d"),
	HX_HCSTRING("idleAnimation","\x50","\xa5","\xf8","\x72"),
	HX_HCSTRING("idleAnimationFrames","\x16","\xa5","\x51","\x32"),
	HX_HCSTRING("leftTouchdownAnimation","\x0a","\x31","\x88","\x42"),
	HX_HCSTRING("leftTouchdownAnimationFrames","\x50","\xb8","\x33","\xf5"),
	HX_HCSTRING("rightTouchdownAnimation","\x1f","\xce","\x5a","\xbc"),
	HX_HCSTRING("rightTouchdownAnimationFrames","\x25","\xd3","\x9c","\xab"),
	HX_HCSTRING("generateHashCodes","\x03","\xfe","\xcc","\x74"),
	HX_HCSTRING("compileAnimations","\x42","\xcc","\x66","\x47"),
	HX_HCSTRING("createAnimations","\x0b","\xb3","\x49","\xb8"),
	HX_HCSTRING("createAnimationFrames","\x2e","\x0a","\xaa","\xcc"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("movingLeft_BMD_Array","\x49","\x2b","\x5e","\x1b"),
	HX_HCSTRING("getMovingLeftBMDArray","\xab","\xcf","\x4e","\x57"),
	HX_HCSTRING("getLeft","\xbd","\xb7","\x32","\x1a"),
	HX_HCSTRING("movingLeft_Jumping_BMD_Array","\x9e","\x06","\x65","\xd5"),
	HX_HCSTRING("getMovingLeftJumpingBMDArray","\xc9","\xf5","\x22","\x28"),
	HX_HCSTRING("getLeftJump","\x4b","\xcb","\x58","\x73"),
	HX_HCSTRING("movingRight_BMD_Array","\x42","\xad","\xda","\x42"),
	HX_HCSTRING("getMovingRightBMDArray","\x38","\x9c","\x41","\x65"),
	HX_HCSTRING("getRight","\x66","\x1b","\x3b","\x49"),
	HX_HCSTRING("movingRight_Jumping_BMD_Array","\x97","\xa9","\x99","\xab"),
	HX_HCSTRING("getMovingRightJumpingBMDArray","\xdc","\x84","\x2a","\x50"),
	HX_HCSTRING("getRightJump","\x74","\xb7","\x86","\xc0"),
	HX_HCSTRING("idle_BMD_Array","\x68","\x59","\x2e","\x5f"),
	HX_HCSTRING("getIdleBMDArray","\x8a","\xbb","\xf0","\xf3"),
	HX_HCSTRING("getIdle","\xca","\x56","\x36","\x18"),
	HX_HCSTRING("left_Touchdown_BMD_Array","\x9d","\x84","\xf0","\xea"),
	HX_HCSTRING("getLeftTouchdownBMDArray","\xe4","\x72","\xbb","\x1c"),
	HX_HCSTRING("getLeftTouchdown","\x24","\x24","\x0d","\x01"),
	HX_HCSTRING("right_Touchdown_BMD_Array","\xf2","\x50","\x74","\x74"),
	HX_HCSTRING("getRightTouchdownBMDArray","\x1b","\x61","\x0c","\x4e"),
	HX_HCSTRING("getRightTouchdown","\x5b","\x83","\x89","\x6e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerAnimations_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerAnimations_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayerAnimations_obj::__mClass;

void PlayerAnimations_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.type.player.animation.PlayerAnimations","\xbd","\x91","\x6c","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayerAnimations_obj >;
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
} // end namespace animation
