#ifndef INCLUDED_core2_game_entity_type_player_animation_PlayerAnimations
#define INCLUDED_core2_game_entity_type_player_animation_PlayerAnimations

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS4(core2,game,entity,animation,Animation)
HX_DECLARE_CLASS4(core2,game,entity,animation,AnimationList)
HX_DECLARE_CLASS5(core2,game,entity,type,player,Player)
HX_DECLARE_CLASS6(core2,game,entity,type,player,animation,PlayerAnimations)
HX_DECLARE_CLASS7(core2,game,entity,type,player,animation,managers,PlayerAnimationManager)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core2{
namespace game{
namespace entity{
namespace type{
namespace player{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  PlayerAnimations_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlayerAnimations_obj OBJ_;
		PlayerAnimations_obj();
		Void __construct(::core2::game::entity::type::player::Player p);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.type.player.animation.PlayerAnimations")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerAnimations_obj > __new(::core2::game::entity::type::player::Player p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerAnimations_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayerAnimations","\xd0","\x63","\x3b","\xa2"); }

		::core2::game::entity::type::player::Player player;
		::core2::game::entity::type::player::animation::managers::PlayerAnimationManager playerAnimationManager;
		::core2::game::entity::animation::AnimationList animationList;
		int pamHash;
		int leftID;
		int rightID;
		int leftJumpID;
		int rightJumpID;
		int idleID;
		int leftTouchdownID;
		int rightTouchdownID;
		::core2::game::entity::animation::Animation movingLeftAnimation;
		int movingLeftAnimationFrames;
		::core2::game::entity::animation::Animation movingLeftJumpingAnimation;
		int movingLeftJumpingAnimationFrames;
		::core2::game::entity::animation::Animation movingRightAnimation;
		int movingRightAnimationFrames;
		::core2::game::entity::animation::Animation movingRightJumpingAnimation;
		int movingRightJumpingAnimationFrames;
		::core2::game::entity::animation::Animation idleAnimation;
		int idleAnimationFrames;
		::core2::game::entity::animation::Animation leftTouchdownAnimation;
		int leftTouchdownAnimationFrames;
		::core2::game::entity::animation::Animation rightTouchdownAnimation;
		int rightTouchdownAnimationFrames;
		virtual Void generateHashCodes( );
		Dynamic generateHashCodes_dyn();

		virtual ::core2::game::entity::animation::AnimationList compileAnimations( );
		Dynamic compileAnimations_dyn();

		virtual Void createAnimations( );
		Dynamic createAnimations_dyn();

		virtual Void createAnimationFrames( );
		Dynamic createAnimationFrames_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		Array< ::Dynamic > movingLeft_BMD_Array;
		virtual Array< ::Dynamic > getMovingLeftBMDArray( );
		Dynamic getMovingLeftBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getLeft( );
		Dynamic getLeft_dyn();

		Array< ::Dynamic > movingLeft_Jumping_BMD_Array;
		virtual Array< ::Dynamic > getMovingLeftJumpingBMDArray( );
		Dynamic getMovingLeftJumpingBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getLeftJump( );
		Dynamic getLeftJump_dyn();

		Array< ::Dynamic > movingRight_BMD_Array;
		virtual Array< ::Dynamic > getMovingRightBMDArray( );
		Dynamic getMovingRightBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getRight( );
		Dynamic getRight_dyn();

		Array< ::Dynamic > movingRight_Jumping_BMD_Array;
		virtual Array< ::Dynamic > getMovingRightJumpingBMDArray( );
		Dynamic getMovingRightJumpingBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getRightJump( );
		Dynamic getRightJump_dyn();

		Array< ::Dynamic > idle_BMD_Array;
		virtual Array< ::Dynamic > getIdleBMDArray( );
		Dynamic getIdleBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getIdle( );
		Dynamic getIdle_dyn();

		Array< ::Dynamic > left_Touchdown_BMD_Array;
		virtual Array< ::Dynamic > getLeftTouchdownBMDArray( );
		Dynamic getLeftTouchdownBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getLeftTouchdown( );
		Dynamic getLeftTouchdown_dyn();

		Array< ::Dynamic > right_Touchdown_BMD_Array;
		virtual Array< ::Dynamic > getRightTouchdownBMDArray( );
		Dynamic getRightTouchdownBMDArray_dyn();

		virtual ::core2::game::entity::animation::Animation getRightTouchdown( );
		Dynamic getRightTouchdown_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace type
} // end namespace player
} // end namespace animation

#endif /* INCLUDED_core2_game_entity_type_player_animation_PlayerAnimations */ 
