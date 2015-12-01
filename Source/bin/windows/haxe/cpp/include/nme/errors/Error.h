#ifndef INCLUDED_nme_errors_Error
#define INCLUDED_nme_errors_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,errors,Error)
namespace nme{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  Error_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();
		Void __construct(Dynamic inMessage,Dynamic __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.errors.Error")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Error_obj > __new(Dynamic inMessage,Dynamic __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Error","\xa8","\x3b","\x57","\x06"); }

		int errorID;
		Dynamic message;
		Dynamic name;
		virtual ::String getStackTrace( );
		Dynamic getStackTrace_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

};

} // end namespace nme
} // end namespace errors

#endif /* INCLUDED_nme_errors_Error */ 
