#ifndef INCLUDED_nme_errors_ArgumentError
#define INCLUDED_nme_errors_ArgumentError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
HX_DECLARE_CLASS2(nme,errors,ArgumentError)
HX_DECLARE_CLASS2(nme,errors,Error)
namespace nme{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  ArgumentError_obj : public ::nme::errors::Error_obj{
	public:
		typedef ::nme::errors::Error_obj super;
		typedef ArgumentError_obj OBJ_;
		ArgumentError_obj();
		Void __construct(Dynamic inMessage,Dynamic id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.errors.ArgumentError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ArgumentError_obj > __new(Dynamic inMessage,Dynamic id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArgumentError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ArgumentError","\xeb","\x77","\x4b","\x60"); }

};

} // end namespace nme
} // end namespace errors

#endif /* INCLUDED_nme_errors_ArgumentError */ 
