#ifndef INCLUDED_core3_Entity
#define INCLUDED_core3_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core3,Entity)
HX_DECLARE_CLASS1(core3,Manager)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core3{


class HXCPP_CLASS_ATTRIBUTES  Entity_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core3.Entity")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Entity_obj > __new();
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

		::core3::Manager man;
		::openfl::display::Sprite sprite;
		int cx;
		int cy;
		Float xr;
		Float yr;
		Float dx;
		Float dy;
		Float xx;
		Float yy;
		virtual Void setCoordinates( Float x,Float y);
		Dynamic setCoordinates_dyn();

		virtual bool hasCollision( int cx,int cy);
		Dynamic hasCollision_dyn();

		virtual bool onGround( );
		Dynamic onGround_dyn();

		virtual Void update( );
		Dynamic update_dyn();

};

} // end namespace core3

#endif /* INCLUDED_core3_Entity */ 
