#ifndef INCLUDED_core2_game_world_World
#define INCLUDED_core2_game_world_World

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core2,game,Game)
HX_DECLARE_CLASS2(core2,game,GameStage)
HX_DECLARE_CLASS2(core2,game,GameWindow)
HX_DECLARE_CLASS3(core2,game,engine,Engine)
HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS5(core2,game,entity,type,player,Player)
HX_DECLARE_CLASS3(core2,game,world,World)
HX_DECLARE_CLASS4(core2,game,world,maps,Map)
HX_DECLARE_CLASS5(core2,game,world,maps,managers,MapManager)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Window)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core2{
namespace game{
namespace world{


class HXCPP_CLASS_ATTRIBUTES  World_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef World_obj OBJ_;
		World_obj();
		Void __construct(::core2::game::Game g,int w,int h,::core2::game::GameStage s,int aspectratiox,int aspectratioy);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.world.World")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< World_obj > __new(::core2::game::Game g,int w,int h,::core2::game::GameStage s,int aspectratiox,int aspectratioy);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~World_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("World","\x32","\x06","\x92","\x61"); }

		::core2::game::GameWindow window;
		::core2::game::GameStage windowStage;
		::core2::game::world::maps::Map map;
		::core2::game::world::maps::managers::MapManager mapManager;
		::core2::game::Game game;
		::core2::game::entity::type::player::Player player;
		int width;
		int height;
		::core2::game::engine::Engine engine;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::world::World getWorld( );
		Dynamic getWorld_dyn();

		virtual ::core2::game::GameWindow getGameWindow( );
		Dynamic getGameWindow_dyn();

		virtual ::core2::game::world::maps::Map getMap( );
		Dynamic getMap_dyn();

		virtual ::core2::game::world::maps::managers::MapManager getMapManager( );
		Dynamic getMapManager_dyn();

		virtual ::core2::game::Game getGame( );
		Dynamic getGame_dyn();

		virtual ::core2::game::entity::type::player::Player getPlayer( );
		Dynamic getPlayer_dyn();

		virtual Void newPlayer( ::String name);
		Dynamic newPlayer_dyn();

		virtual ::core2::game::engine::Engine getEngine( );
		Dynamic getEngine_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace world

#endif /* INCLUDED_core2_game_world_World */ 
