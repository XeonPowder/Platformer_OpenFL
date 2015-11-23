#ifndef INCLUDED_core2_game_entity_type_player_Player
#define INCLUDED_core2_game_entity_type_player_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
HX_DECLARE_CLASS2(core2,game,Game)
HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS4(core2,game,entity,listeners,EntityListener)
HX_DECLARE_CLASS5(core2,game,entity,type,player,Player)
HX_DECLARE_CLASS6(core2,game,entity,type,player,animation,PlayerAnimations)
HX_DECLARE_CLASS6(core2,game,entity,type,player,listeners,PlayerListener)
HX_DECLARE_CLASS6(core2,game,entity,type,player,managers,PlayerManager)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
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


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::core2::game::entity::Entity_obj{
	public:
		typedef ::core2::game::entity::Entity_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct(::core2::game::Game g,int x,int y,int hx,int hy,::String name,::String __o_type,hx::Null< int >  __o_experienceGained);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.type.player.Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Player_obj > __new(::core2::game::Game g,int x,int y,int hx,int hy,::String name,::String __o_type,hx::Null< int >  __o_experienceGained);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c"); }

		::core2::game::entity::type::player::animation::PlayerAnimations playerAnimations;
		::core2::game::entity::type::player::listeners::PlayerListener playerListener;
		::core2::game::entity::type::player::managers::PlayerManager playerManager;
		::openfl::display::Bitmap bitmap;
		::core2::game::Game game;
		virtual Void update( );
		Dynamic update_dyn();

		virtual ::core2::game::entity::type::player::animation::PlayerAnimations getPlayerAnimations( );
		Dynamic getPlayerAnimations_dyn();

		virtual ::core2::game::entity::type::player::managers::PlayerManager getPlayerManager( );
		Dynamic getPlayerManager_dyn();

		virtual ::openfl::display::Bitmap getBitmap( );
		Dynamic getBitmap_dyn();

		virtual ::core2::game::Game getGame( );
		Dynamic getGame_dyn();

		virtual ::core2::game::entity::type::player::listeners::PlayerListener getPlayerListener( );
		Dynamic getPlayerListener_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace type
} // end namespace player

#endif /* INCLUDED_core2_game_entity_type_player_Player */ 
