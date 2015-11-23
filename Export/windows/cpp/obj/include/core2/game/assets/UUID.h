#ifndef INCLUDED_core2_game_assets_UUID
#define INCLUDED_core2_game_assets_UUID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core2,game,assets,UUID)
namespace core2{
namespace game{
namespace assets{


class HXCPP_CLASS_ATTRIBUTES  UUID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef UUID_obj OBJ_;
		UUID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="core2.game.assets.UUID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< UUID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UUID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("UUID","\x3b","\xe2","\x6f","\x38"); }

		static void __boot();
		static ::String UID_CHARS;
		static ::String UID_NUM;
		static ::String randomChar( Dynamic size);
		static Dynamic randomChar_dyn();

		static int randomNum( Dynamic size);
		static Dynamic randomNum_dyn();

};

} // end namespace core2
} // end namespace game
} // end namespace assets

#endif /* INCLUDED_core2_game_assets_UUID */ 
