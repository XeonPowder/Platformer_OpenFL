#ifndef INCLUDED_nme_utils_CompressionAlgorithm
#define INCLUDED_nme_utils_CompressionAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,utils,CompressionAlgorithm)
namespace nme{
namespace utils{


class CompressionAlgorithm_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompressionAlgorithm_obj OBJ_;

	public:
		CompressionAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("nme.utils.CompressionAlgorithm","\xce","\x79","\xa1","\x1c"); }
		::String __ToString() const { return HX_HCSTRING("CompressionAlgorithm.","\xc5","\x9b","\x61","\x8f") + tag; }

		static ::nme::utils::CompressionAlgorithm DEFLATE;
		static inline ::nme::utils::CompressionAlgorithm DEFLATE_dyn() { return DEFLATE; }
		static ::nme::utils::CompressionAlgorithm GZIP;
		static inline ::nme::utils::CompressionAlgorithm GZIP_dyn() { return GZIP; }
		static ::nme::utils::CompressionAlgorithm LZMA;
		static inline ::nme::utils::CompressionAlgorithm LZMA_dyn() { return LZMA; }
		static ::nme::utils::CompressionAlgorithm ZLIB;
		static inline ::nme::utils::CompressionAlgorithm ZLIB_dyn() { return ZLIB; }
};

} // end namespace nme
} // end namespace utils

#endif /* INCLUDED_nme_utils_CompressionAlgorithm */ 
