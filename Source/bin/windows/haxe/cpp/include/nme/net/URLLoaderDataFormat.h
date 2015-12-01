#ifndef INCLUDED_nme_net_URLLoaderDataFormat
#define INCLUDED_nme_net_URLLoaderDataFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,net,URLLoaderDataFormat)
namespace nme{
namespace net{


class URLLoaderDataFormat_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef URLLoaderDataFormat_obj OBJ_;

	public:
		URLLoaderDataFormat_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.net.URLLoaderDataFormat","\xaa","\xe8","\xb4","\xf2"); }
		::String __ToString() const { return HX_HCSTRING("URLLoaderDataFormat.","\x6b","\x4e","\x13","\xa2") + tag; }

		static ::nme::net::URLLoaderDataFormat BINARY;
		static inline ::nme::net::URLLoaderDataFormat BINARY_dyn() { return BINARY; }
		static ::nme::net::URLLoaderDataFormat TEXT;
		static inline ::nme::net::URLLoaderDataFormat TEXT_dyn() { return TEXT; }
		static ::nme::net::URLLoaderDataFormat VARIABLES;
		static inline ::nme::net::URLLoaderDataFormat VARIABLES_dyn() { return VARIABLES; }
};

} // end namespace nme
} // end namespace net

#endif /* INCLUDED_nme_net_URLLoaderDataFormat */ 
