#ifndef INCLUDED_core2_game_GameWindow
#define INCLUDED_core2_game_GameWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Window
#include <openfl/display/Window.h>
#endif
HX_DECLARE_CLASS2(core2,game,Game)
HX_DECLARE_CLASS2(core2,game,GameWindow)
HX_DECLARE_CLASS2(lime,ui,Window)
HX_DECLARE_CLASS2(openfl,display,Window)
namespace core2{
namespace game{


class HXCPP_CLASS_ATTRIBUTES  GameWindow_obj : public ::openfl::display::Window_obj{
	public:
		typedef ::openfl::display::Window_obj super;
		typedef GameWindow_obj OBJ_;
		GameWindow_obj();
		Void __construct(::core2::game::Game g);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.GameWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GameWindow_obj > __new(::core2::game::Game g);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameWindow_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("GameWindow","\xa2","\x81","\xb3","\x8b"); }

		::core2::game::Game game;
		::core2::game::GameWindow gameWindow;
		virtual ::core2::game::GameWindow getGameWindow( );
		Dynamic getGameWindow_dyn();

};

} // end namespace core2
} // end namespace game

#endif /* INCLUDED_core2_game_GameWindow */ 
