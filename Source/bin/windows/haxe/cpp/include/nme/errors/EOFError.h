#ifndef INCLUDED_nme_errors_EOFError
#define INCLUDED_nme_errors_EOFError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
HX_DECLARE_CLASS2(nme,errors,EOFError)
HX_DECLARE_CLASS2(nme,errors,Error)
namespace nme{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  EOFError_obj : public ::nme::errors::Error_obj{
	public:
		typedef ::nme::errors::Error_obj super;
		typedef EOFError_obj OBJ_;
		EOFError_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.errors.EOFError")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EOFError_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EOFError_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EOFError","\x8c","\xe5","\x0a","\x43"); }

};

} // end namespace nme
} // end namespace errors

#endif /* INCLUDED_nme_errors_EOFError */ 
