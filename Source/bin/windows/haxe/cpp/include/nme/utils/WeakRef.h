#ifndef INCLUDED_nme_utils_WeakRef
#define INCLUDED_nme_utils_WeakRef

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,utils,WeakRef)
namespace nme{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  WeakRef_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WeakRef_obj OBJ_;
		WeakRef_obj();
		Void __construct(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.utils.WeakRef")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WeakRef_obj > __new(Dynamic inObject,hx::Null< bool >  __o_inMakeWeak);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WeakRef_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("WeakRef","\x9b","\x77","\xad","\xa4"); }

		Dynamic hardRef;
		Dynamic weakRef;
		virtual Dynamic get( );
		Dynamic get_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nme
} // end namespace utils

#endif /* INCLUDED_nme_utils_WeakRef */ 
