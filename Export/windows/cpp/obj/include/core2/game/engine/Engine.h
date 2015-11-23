#ifndef INCLUDED_core2_game_engine_Engine
#define INCLUDED_core2_game_engine_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,engine,Engine)
HX_DECLARE_CLASS5(core2,game,engine,input,keyboard,KeyboardListener)
HX_DECLARE_CLASS3(core2,game,world,World)
HX_DECLARE_CLASS2(openfl,events,Event)
namespace core2{
namespace game{
namespace engine{


class HXCPP_CLASS_ATTRIBUTES  Engine_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(::core2::game::world::World w);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.engine.Engine")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Engine_obj > __new(::core2::game::world::World w);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Engine_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Engine","\xe2","\xbb","\x18","\x31"); }

		::core2::game::world::World world;
		::core2::game::engine::input::keyboard::KeyboardListener keyboardListener;
		virtual Void tick( ::openfl::events::Event e);
		Dynamic tick_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::engine::input::keyboard::KeyboardListener getKeyboardListener( );
		Dynamic getKeyboardListener_dyn();

		virtual ::core2::game::world::World getWorld( );
		Dynamic getWorld_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace engine

#endif /* INCLUDED_core2_game_engine_Engine */ 
