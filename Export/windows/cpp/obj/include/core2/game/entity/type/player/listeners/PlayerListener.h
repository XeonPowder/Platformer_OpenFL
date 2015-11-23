#ifndef INCLUDED_core2_game_entity_type_player_listeners_PlayerListener
#define INCLUDED_core2_game_entity_type_player_listeners_PlayerListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_core2_game_entity_listeners_EntityListener
#include <core2/game/entity/listeners/EntityListener.h>
#endif
HX_DECLARE_CLASS5(core2,game,engine,input,keyboard,KeyboardListener)
HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS4(core2,game,entity,listeners,EntityListener)
HX_DECLARE_CLASS5(core2,game,entity,type,player,Player)
HX_DECLARE_CLASS6(core2,game,entity,type,player,listeners,PlayerListener)
HX_DECLARE_CLASS6(core2,game,entity,type,player,managers,PlayerManager)
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
namespace listeners{


class HXCPP_CLASS_ATTRIBUTES  PlayerListener_obj : public ::core2::game::entity::listeners::EntityListener_obj{
	public:
		typedef ::core2::game::entity::listeners::EntityListener_obj super;
		typedef PlayerListener_obj OBJ_;
		PlayerListener_obj();
		Void __construct(::core2::game::entity::type::player::Player p,::core2::game::engine::input::keyboard::KeyboardListener kl);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.type.player.listeners.PlayerListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerListener_obj > __new(::core2::game::entity::type::player::Player p,::core2::game::engine::input::keyboard::KeyboardListener kl);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerListener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayerListener","\x15","\x05","\xce","\xf4"); }

		::core2::game::entity::type::player::Player player;
		::core2::game::entity::type::player::managers::PlayerManager pManager;
		::core2::game::engine::input::keyboard::KeyboardListener keyboardListener;
		int keyUP;
		int keyDOWN;
		int keyLEFT;
		int keyRIGHT;
		virtual Void update( );

		virtual Void checkKeyStates( );
		Dynamic checkKeyStates_dyn();

		virtual Void checkDamageRecieved( );
		Dynamic checkDamageRecieved_dyn();

		virtual Void checkExperienceRecieved( );
		Dynamic checkExperienceRecieved_dyn();

		virtual Void checkLevelUp( );
		Dynamic checkLevelUp_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace type
} // end namespace player
} // end namespace listeners

#endif /* INCLUDED_core2_game_entity_type_player_listeners_PlayerListener */ 
