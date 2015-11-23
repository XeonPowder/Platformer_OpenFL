#ifndef INCLUDED_core2_game_entity_animation_AnimationList
#define INCLUDED_core2_game_entity_animation_AnimationList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(core2,game,entity,animation,AnimationList)
HX_DECLARE_CLASS3(haxe,ds,_HashMap,HashMapData)
namespace core2{
namespace game{
namespace entity{
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  AnimationList_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AnimationList_obj OBJ_;
		AnimationList_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.animation.AnimationList")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AnimationList_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimationList_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AnimationList","\x62","\x59","\xef","\x81"); }

		::haxe::ds::_HashMap::HashMapData list;
		::core2::game::entity::animation::AnimationList animationList;
		int id;
		virtual ::core2::game::entity::animation::AnimationList getAnimationList( );
		Dynamic getAnimationList_dyn();

		virtual ::haxe::ds::_HashMap::HashMapData getList( );
		Dynamic getList_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace animation

#endif /* INCLUDED_core2_game_entity_animation_AnimationList */ 
