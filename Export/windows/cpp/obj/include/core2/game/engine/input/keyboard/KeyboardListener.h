#ifndef INCLUDED_core2_game_engine_input_keyboard_KeyboardListener
#define INCLUDED_core2_game_engine_input_keyboard_KeyboardListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(core2,game,engine,input,keyboard,KeyboardListener)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
namespace core2{
namespace game{
namespace engine{
namespace input{
namespace keyboard{


class HXCPP_CLASS_ATTRIBUTES  KeyboardListener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef KeyboardListener_obj OBJ_;
		KeyboardListener_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.engine.input.keyboard.KeyboardListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< KeyboardListener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~KeyboardListener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("KeyboardListener","\x5b","\xd4","\x9f","\x49"); }

		Dynamic keyStates;
		virtual Void keyDown( ::openfl::events::KeyboardEvent e);
		Dynamic keyDown_dyn();

		virtual Void keyUp( ::openfl::events::KeyboardEvent e);
		Dynamic keyUp_dyn();

		virtual bool getKeyState( int x);
		Dynamic getKeyState_dyn();

		virtual ::core2::game::engine::input::keyboard::KeyboardListener getKeyboardListener( );
		Dynamic getKeyboardListener_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace engine
} // end namespace input
} // end namespace keyboard

#endif /* INCLUDED_core2_game_engine_input_keyboard_KeyboardListener */ 
