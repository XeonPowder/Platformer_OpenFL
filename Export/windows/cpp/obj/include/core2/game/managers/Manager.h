#ifndef INCLUDED_core2_game_managers_Manager
#define INCLUDED_core2_game_managers_Manager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,managers,Manager)
namespace core2{
namespace game{
namespace managers{


class HXCPP_CLASS_ATTRIBUTES  Manager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Manager_obj OBJ_;
		Manager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="core2.game.managers.Manager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Manager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Manager_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Manager","\x4d","\xba","\x12","\xe1"); }

		::core2::game::managers::Manager manager;
		virtual ::core2::game::managers::Manager getManager( );
		Dynamic getManager_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace managers

#endif /* INCLUDED_core2_game_managers_Manager */ 
