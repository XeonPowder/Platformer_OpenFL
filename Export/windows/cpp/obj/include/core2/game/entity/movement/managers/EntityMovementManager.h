#ifndef INCLUDED_core2_game_entity_movement_managers_EntityMovementManager
#define INCLUDED_core2_game_entity_movement_managers_EntityMovementManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS5(core2,game,entity,movement,managers,EntityMovementManager)
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
namespace movement{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  EntityMovementManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EntityMovementManager_obj OBJ_;
		EntityMovementManager_obj();
		Void __construct(::core2::game::entity::Entity e);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.movement.managers.EntityMovementManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EntityMovementManager_obj > __new(::core2::game::entity::Entity e);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EntityMovementManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("EntityMovementManager","\xfb","\xec","\x6e","\x2f"); }

		::core2::game::entity::Entity entity;
		virtual Void moveBy( int x,int y);
		Dynamic moveBy_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace movement
} // end namespace managers

#endif /* INCLUDED_core2_game_entity_movement_managers_EntityMovementManager */ 
