#ifndef INCLUDED_nme_utils__Floats3264_Floats3264_Impl_
#define INCLUDED_nme_utils__Floats3264_Floats3264_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(nme,utils,_Floats3264,Floats3264_Impl_)
namespace nme{
namespace utils{
namespace _Floats3264{


class HXCPP_CLASS_ATTRIBUTES  Floats3264_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Floats3264_Impl__obj OBJ_;
		Floats3264_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.utils._Floats3264.Floats3264_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Floats3264_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Floats3264_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Floats3264_Impl_","\x34","\x04","\x97","\x28"); }

		static Dynamic _new( Dynamic d);
		static Dynamic _new_dyn();

		static Dynamic toDynamic( Dynamic this1);
		static Dynamic toDynamic_dyn();

		static Dynamic fromArrayFloat( Array< Float > f);
		static Dynamic fromArrayFloat_dyn();

		static Dynamic fromArray32Float( Array< ::cpp::Float32 > f);
		static Dynamic fromArray32Float_dyn();

};

} // end namespace nme
} // end namespace utils
} // end namespace _Floats3264

#endif /* INCLUDED_nme_utils__Floats3264_Floats3264_Impl_ */ 
