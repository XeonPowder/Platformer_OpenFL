#ifndef INCLUDED_core2_game_entity_type_player_managers_PlayerManager
#define INCLUDED_core2_game_entity_type_player_managers_PlayerManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

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
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  PlayerManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PlayerManager_obj OBJ_;
		PlayerManager_obj();
		Void __construct(::core2::game::entity::type::player::Player p);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.type.player.managers.PlayerManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< PlayerManager_obj > __new(::core2::game::entity::type::player::Player p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("PlayerManager","\xec","\xbc","\x2a","\xd3"); }

		::core2::game::entity::type::player::managers::PlayerManager manager;
		::core2::game::entity::type::player::listeners::PlayerListener listener;
		int health;
		int level;
		int experience;
		int experienceCap;
		int experienceGained;
		int jumpheight;
		::core2::game::entity::type::player::Player player;
		int damageGivenToPlayer;
		virtual Void update( );
		Dynamic update_dyn();

		virtual int getHealth( );
		Dynamic getHealth_dyn();

		virtual Void setHealth( int h);
		Dynamic setHealth_dyn();

		virtual int getDamageGivenToPlayer( );
		Dynamic getDamageGivenToPlayer_dyn();

		virtual Void setDamageGivenToPlayer( int d);
		Dynamic setDamageGivenToPlayer_dyn();

		virtual int getLevel( );
		Dynamic getLevel_dyn();

		virtual Void setLevel( int l);
		Dynamic setLevel_dyn();

		virtual Void levelUp( );
		Dynamic levelUp_dyn();

		virtual int getExperience( );
		Dynamic getExperience_dyn();

		virtual Void setExperience( int e);
		Dynamic setExperience_dyn();

		virtual Void addExperience( int e);
		Dynamic addExperience_dyn();

		virtual int getExperienceCap( );
		Dynamic getExperienceCap_dyn();

		virtual Void setExperienceCap( int ec);
		Dynamic setExperienceCap_dyn();

		virtual int getExperienceGained( );
		Dynamic getExperienceGained_dyn();

		virtual Void setExperienceGained( int eg);
		Dynamic setExperienceGained_dyn();

		virtual int getJumpHeight( );
		Dynamic getJumpHeight_dyn();

		virtual Void setJumpHeight( int jh);
		Dynamic setJumpHeight_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace type
} // end namespace player
} // end namespace managers

#endif /* INCLUDED_core2_game_entity_type_player_managers_PlayerManager */ 
