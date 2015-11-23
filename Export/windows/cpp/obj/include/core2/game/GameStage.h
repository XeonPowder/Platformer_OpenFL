#ifndef INCLUDED_core2_game_GameStage
#define INCLUDED_core2_game_GameStage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
HX_DECLARE_CLASS2(core2,game,Game)
HX_DECLARE_CLASS2(core2,game,GameStage)
HX_DECLARE_CLASS2(core2,game,GameWindow)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Window)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core2{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  GameStage_obj : public ::openfl::display::Stage_obj{
	public:
		typedef ::openfl::display::Stage_obj super;
		typedef GameStage_obj OBJ_;
		GameStage_obj();
		Void __construct(::core2::game::Game g,::core2::game::GameWindow gw);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.GameStage")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameStage_obj > __new(::core2::game::Game g,::core2::game::GameWindow gw);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameStage_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameStage","\x4c","\x39","\xf9","\x5a"); }

		::core2::game::GameWindow gameWindow;
		::core2::game::GameStage gameStage;
		::core2::game::Game game;
		virtual ::core2::game::GameStage getGameStage( );
		Dynamic getGameStage_dyn();

		virtual ::core2::game::GameWindow getGameWindow( );
		Dynamic getGameWindow_dyn();

};

} // end namespace core2
} // end namespace game

#endif /* INCLUDED_core2_game_GameStage */ 
