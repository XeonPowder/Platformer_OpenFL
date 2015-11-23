#ifndef INCLUDED_core2_game_entity_animation_Animation
#define INCLUDED_core2_game_entity_animation_Animation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,entity,Entity)
HX_DECLARE_CLASS4(core2,game,entity,animation,Animation)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
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
namespace animation{


class HXCPP_CLASS_ATTRIBUTES  Animation_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Animation_obj OBJ_;
		Animation_obj();
		Void __construct(::openfl::display::Bitmap b,Array< ::Dynamic > bd,::String animationName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.entity.animation.Animation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Animation_obj > __new(::openfl::display::Bitmap b,Array< ::Dynamic > bd,::String animationName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animation_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Animation","\xe4","\xce","\x07","\xed"); }

		::core2::game::entity::animation::Animation animation;
		int frames;
		int currentFrame;
		int endFrame;
		::openfl::display::Bitmap bitmap;
		::core2::game::entity::Entity entity;
		::openfl::display::BitmapData newBitmapData;
		::openfl::display::BitmapData previousBitmapData;
		Array< ::Dynamic > bitmapDataArray;
		::String name;
		int id;
		virtual ::core2::game::entity::animation::Animation getAnimation( );
		Dynamic getAnimation_dyn();

		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		virtual int getFrames( );
		Dynamic getFrames_dyn();

		virtual ::openfl::display::Bitmap getBitmap( );
		Dynamic getBitmap_dyn();

		virtual Array< ::Dynamic > getBitmapDataArray( );
		Dynamic getBitmapDataArray_dyn();

		virtual ::openfl::display::BitmapData getBitmapData( int frame);
		Dynamic getBitmapData_dyn();

		virtual Void changeBitmapData( ::openfl::display::Bitmap b,Array< ::Dynamic > bd,int frame);
		Dynamic changeBitmapData_dyn();

		virtual int animate( ::core2::game::entity::animation::Animation a,int frame);
		Dynamic animate_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace entity
} // end namespace animation

#endif /* INCLUDED_core2_game_entity_animation_Animation */ 
