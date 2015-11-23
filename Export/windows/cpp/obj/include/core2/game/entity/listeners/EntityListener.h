#ifndef INCLUDED_core2_game_entity_listeners_EntityListener
#define INCLUDED_core2_game_entity_listeners_EntityListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core2,game,entity,listeners,EntityListener)
namespace core2{
namespace game{
namespace entity{
namespace listeners{


class HXCPP_CLASS_ATTRIBUTES  EntityListener_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EntityListener_obj OBJ_;
		EntityListener_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="core2.game.entity.listeners.EntityListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EntityListener_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EntityListener_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EntityListener","\xd7","\xbe","\x21","\xff"); }

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace listeners

#endif /* INCLUDED_core2_game_entity_listeners_EntityListener */ 
