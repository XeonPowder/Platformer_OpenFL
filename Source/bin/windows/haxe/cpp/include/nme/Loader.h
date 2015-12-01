#ifndef INCLUDED_nme_Loader
#define INCLUDED_nme_Loader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,Loader)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  Loader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Loader_obj OBJ_;
		Loader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.Loader")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Loader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Loader_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Loader","\x33","\xbc","\x03","\x8d"); }

		static void __boot();
		static bool foundNdll;
		static bool moduleInit;
		static ::String moduleName;
		static ::String findHaxeLib( ::String inLib);
		static Dynamic findHaxeLib_dyn();

		static Dynamic load( ::String func,int args);
		static Dynamic load_dyn();

		static Void loaderTrace( ::String inStr);
		static Dynamic loaderTrace_dyn();

		static Dynamic sysName( );
		static Dynamic sysName_dyn();

		static Dynamic tryLoad( ::String inName,::String func,int args);
		static Dynamic tryLoad_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_Loader */ 
