#ifndef INCLUDED_core2_game_entity_Entity
#define INCLUDED_core2_game_entity_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS4(core2,game,entity,listeners,EntityListener)
HX_DECLARE_CLASS5(core2,game,entity,movement,managers,EntityMovementManager)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace core2{
namespace game{
namespace entity{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::openfl::display::BitmapData graphic);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::openfl::display::BitmapData graphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Entity_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Entity","\x43","\x87","\xb0","\x39"); }

		Float acceleration;
		::openfl::geom::Point velocity;
		bool canCollide;
		bool followCamera;
		int hitboxW;
		int hitboxH;
		::openfl::display::BitmapData graphic;
		::core2::game::entity::listeners::EntityListener entityListener;
		::core2::game::entity::movement::managers::EntityMovementManager entyityMovementManager;
		::String type;
		int emmHash;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual Void setHitbox( int x,int y);
		Dynamic setHitbox_dyn();

		virtual ::core2::game::entity::listeners::EntityListener getListener( );
		Dynamic getListener_dyn();

		virtual ::core2::game::entity::movement::managers::EntityMovementManager getEntyityMovementManager( );
		Dynamic getEntyityMovementManager_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity

#endif /* INCLUDED_core2_game_entity_Entity */ 
