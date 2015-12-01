#ifndef INCLUDED_core2_game_display_BMD
#define INCLUDED_core2_game_display_BMD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,display,BMD)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
namespace core2{
namespace game{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  BMD_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BMD_obj OBJ_;
		BMD_obj();
		Void __construct(::openfl::display::BitmapData bmd,int w,int h);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.display.BMD")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BMD_obj > __new(::openfl::display::BitmapData bmd,int w,int h);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BMD_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BMD","\x19","\x58","\x32","\x00"); }

		int id;
		::openfl::display::BitmapData bmd_copy;
		int width;
		int height;
		virtual int hashCode( );
		Dynamic hashCode_dyn();

		virtual ::core2::game::display::BMD getBMD( );
		Dynamic getBMD_dyn();

		virtual ::openfl::display::BitmapData getData( );
		Dynamic getData_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace display

#endif /* INCLUDED_core2_game_display_BMD */ 
