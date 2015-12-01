#ifndef INCLUDED_nme_AssetData
#define INCLUDED_nme_AssetData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,AssetData)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  AssetData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetData_obj OBJ_;
		AssetData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.AssetData")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("AssetData","\x1a","\x84","\xdc","\x48"); }

		static Void create( );
		static Dynamic create_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_AssetData */ 
