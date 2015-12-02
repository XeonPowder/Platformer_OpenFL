#ifndef INCLUDED_core3_Manager
#define INCLUDED_core3_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core3,Entity)
HX_DECLARE_CLASS1(core3,Manager)
HX_DECLARE_CLASS1(core3,Map)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,display,Tilesheet)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
namespace core3{


class HXCPP_CLASS_ATTRIBUTES  Manager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Manager_obj OBJ_;
		Manager_obj();
		Void __construct(int arX,int arY,int w,int h,::String pName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core3.Manager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Manager_obj > __new(int arX,int arY,int w,int h,::String pName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Manager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1"); }

		static ::core3::Manager ME;
		::core3::Map map;
		::openfl::display::Tilesheet mapTS;
		::core3::Entity hero;
		bool init;
		Array< ::Dynamic > level;
		Array< ::Dynamic > levelCollision;
		Array< int > tileIDList;
		Array< Float > tilesheetData;
		virtual Void update( ::openfl::events::Event e);
		Dynamic update_dyn();

		virtual ::openfl::display::Sprite getMap( );
		Dynamic getMap_dyn();

		virtual ::openfl::display::Tilesheet getMapTS( );
		Dynamic getMapTS_dyn();

};

} // end namespace core3

#endif /* INCLUDED_core3_Manager */ 
