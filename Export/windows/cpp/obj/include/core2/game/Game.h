#ifndef INCLUDED_core2_game_Game
#define INCLUDED_core2_game_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core2,game,Game)
HX_DECLARE_CLASS3(core2,game,engine,Engine)
HX_DECLARE_CLASS3(core2,game,managers,Manager)
HX_DECLARE_CLASS3(core2,game,world,World)
namespace core2{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct(int aRX,int aRY,::String playerName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.Game")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Game_obj > __new(int aRX,int aRY,::String playerName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Game","\x12","\x20","\x38","\x2f"); }

		::core2::game::world::World world;
		Dynamic aspectRatio;
		::core2::game::managers::Manager manager;
		::core2::game::engine::Engine engine;
		::core2::game::Game game;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual int getAspectRatioX( );
		Dynamic getAspectRatioX_dyn();

		virtual int getAspectRatioY( );
		Dynamic getAspectRatioY_dyn();

		virtual ::core2::game::Game getGame( );
		Dynamic getGame_dyn();

		virtual ::core2::game::world::World getWorld( );
		Dynamic getWorld_dyn();

		virtual ::core2::game::engine::Engine getEngine( );
		Dynamic getEngine_dyn();

};

} // end namespace core2
} // end namespace game

#endif /* INCLUDED_core2_game_Game */ 
