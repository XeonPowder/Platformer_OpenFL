#ifndef INCLUDED_core2_game_entity_type_player_animation_managers_PlayerAnimationManager
#define INCLUDED_core2_game_entity_type_player_animation_managers_PlayerAnimationManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS7(core2,game,entity,type,player,animation,managers,PlayerAnimationManager)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace core2{
namespace game{
namespace entity{
namespace type{
namespace player{
namespace animation{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  PlayerAnimationManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlayerAnimationManager_obj OBJ_;
		PlayerAnimationManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.type.player.animation.managers.PlayerAnimationManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerAnimationManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerAnimationManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayerAnimationManager","\x6a","\x81","\xc6","\x49"); }

		::haxe::ds::_HashMap::HashMapData list;
		::core2::game::entity::type::player::animation::managers::PlayerAnimationManager playerAnimationManager;
		int id;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::entity::type::player::animation::managers::PlayerAnimationManager getPlayerAnimationManager( );
		Dynamic getPlayerAnimationManager_dyn();

		virtual ::haxe::ds::_HashMap::HashMapData getList( );
		Dynamic getList_dyn();

		virtual int getID( );
		Dynamic getID_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace type
} // end namespace player
} // end namespace animation
} // end namespace managers

#endif /* INCLUDED_core2_game_entity_type_player_animation_managers_PlayerAnimationManager */ 
