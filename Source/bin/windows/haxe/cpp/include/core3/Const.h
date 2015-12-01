#ifndef INCLUDED_core3_Const
#define INCLUDED_core3_Const

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(core3,Const)
namespace core3{


class HXCPP_CLASS_ATTRIBUTES  Const_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Const_obj OBJ_;
		Const_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="core3.Const")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Const_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Const_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Const","\x43","\x69","\x8b","\xdd"); }

		static void __boot();
		static int GRID;
		static ::String VERSION;
		static int compareString( ::String s0,::String s1);
		static Dynamic compareString_dyn();

};

} // end namespace core3

#endif /* INCLUDED_core3_Const */ 
