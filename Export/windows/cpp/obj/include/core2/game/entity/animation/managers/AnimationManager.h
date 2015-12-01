#ifndef INCLUDED_core2_game_entity_animation_managers_AnimationManager
#define INCLUDED_core2_game_entity_animation_managers_AnimationManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS5(core2,game,entity,animation,managers,AnimationManager)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace core2{
namespace game{
namespace entity{
namespace animation{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  AnimationManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationManager_obj OBJ_;
		AnimationManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.animation.managers.AnimationManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationManager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimationManager","\xe9","\x4f","\xae","\x3b"); }

		::haxe::ds::_HashMap::HashMapData list;
		::core2::game::entity::animation::managers::AnimationManager animationManager;
		virtual ::core2::game::entity::animation::managers::AnimationManager getAnimationManager( );
		Dynamic getAnimationManager_dyn();

		virtual ::haxe::ds::_HashMap::HashMapData getList( );
		Dynamic getList_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace animation
} // end namespace managers

#endif /* INCLUDED_core2_game_entity_animation_managers_AnimationManager */ 