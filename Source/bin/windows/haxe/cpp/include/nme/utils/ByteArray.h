#ifndef INCLUDED_nme_utils_ByteArray
#define INCLUDED_nme_utils_ByteArray

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(nme,Loader)
HX_DECLARE_CLASS2(nme,utils,ByteArray)
HX_DECLARE_CLASS2(nme,utils,CompressionAlgorithm)
HX_DECLARE_CLASS2(nme,utils,IDataInput)
HX_DECLARE_CLASS2(nme,utils,IDataOutput)
HX_DECLARE_CLASS2(nme,utils,IMemoryRange)
namespace nme{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES  ByteArray_obj : public ::haxe::io::Bytes_obj{
	public:
		typedef ::haxe::io::Bytes_obj super;
		typedef ByteArray_obj OBJ_;
		ByteArray_obj();
		Void __construct(hx::Null< int >  __o_inSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.utils.ByteArray")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ByteArray_obj > __new(hx::Null< int >  __o_inSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArray_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::nme::utils::IDataInput_obj *();
		operator ::nme::utils::IDataOutput_obj *();
		operator ::nme::utils::IMemoryRange_obj *();
		static void __init__();

		::String __ToString() const { return HX_HCSTRING("ByteArray","\x51","\x21","\x97","\x5d"); }

		static void __boot();
		typedef int __array_access;
		static ::nme::utils::ByteArray fromBytes( ::haxe::io::Bytes inBytes);
		static Dynamic fromBytes_dyn();

		static ::nme::utils::ByteArray readFile( ::String inString);
		static Dynamic readFile_dyn();

		static Dynamic _double_bytes;
		static Dynamic &_double_bytes_dyn() { return _double_bytes;}
		static Dynamic _double_of_bytes;
		static Dynamic &_double_of_bytes_dyn() { return _double_of_bytes;}
		static Dynamic _float_bytes;
		static Dynamic &_float_bytes_dyn() { return _float_bytes;}
		static Dynamic _float_of_bytes;
		static Dynamic &_float_of_bytes_dyn() { return _float_of_bytes;}
		static Dynamic nme_byte_array_overwrite_file;
		static Dynamic &nme_byte_array_overwrite_file_dyn() { return nme_byte_array_overwrite_file;}
		static Dynamic nme_byte_array_read_file;
		static Dynamic &nme_byte_array_read_file_dyn() { return nme_byte_array_read_file;}
		static Dynamic nme_lzma_encode;
		static Dynamic &nme_lzma_encode_dyn() { return nme_lzma_encode;}
		static Dynamic nme_lzma_decode;
		static Dynamic &nme_lzma_decode_dyn() { return nme_lzma_decode;}
		bool bigEndian;
		int bytesAvailable;
		int position;
		int byteLength;
		virtual int __get( int pos);
		Dynamic __get_dyn();

		virtual Void __set( int pos,int v);
		Dynamic __set_dyn();

		virtual ::String asString( );
		Dynamic asString_dyn();

		virtual Void checkData( int inLength);
		Dynamic checkData_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void compress( ::nme::utils::CompressionAlgorithm algorithm);
		Dynamic compress_dyn();

		virtual Void deflate( );
		Dynamic deflate_dyn();

		virtual Void ensureElem( int inSize,bool inUpdateLenght);
		Dynamic ensureElem_dyn();

		virtual int getLength( );
		Dynamic getLength_dyn();

		virtual ::nme::utils::ByteArray getByteBuffer( );
		Dynamic getByteBuffer_dyn();

		virtual int getStart( );
		Dynamic getStart_dyn();

		virtual Void inflate( );
		Dynamic inflate_dyn();

		virtual Void nmeFromBytes( ::haxe::io::Bytes inBytes);
		Dynamic nmeFromBytes_dyn();

		virtual bool readBoolean( );
		Dynamic readBoolean_dyn();

		virtual int readByte( );
		Dynamic readByte_dyn();

		virtual Void readBytes( ::nme::utils::ByteArray outData,hx::Null< int >  inOffset,hx::Null< int >  inLen);
		Dynamic readBytes_dyn();

		virtual Float readDouble( );
		Dynamic readDouble_dyn();

		virtual Float readFloat( );
		Dynamic readFloat_dyn();

		virtual int readInt( );
		Dynamic readInt_dyn();

		virtual ::String readMultiByte( int inLen,::String charSet);
		Dynamic readMultiByte_dyn();

		virtual int readShort( );
		Dynamic readShort_dyn();

		virtual int readUnsignedByte( );
		Dynamic readUnsignedByte_dyn();

		virtual int readUnsignedInt( );
		Dynamic readUnsignedInt_dyn();

		virtual int readUnsignedShort( );
		Dynamic readUnsignedShort_dyn();

		virtual ::String readUTF( );
		Dynamic readUTF_dyn();

		virtual ::String readUTFBytes( int inLen);
		Dynamic readUTFBytes_dyn();

		virtual Void setLength( int inLength);
		Dynamic setLength_dyn();

		virtual ::nme::utils::ByteArray slice( int inBegin,Dynamic inEnd);
		Dynamic slice_dyn();

		virtual int ThrowEOFi( );
		Dynamic ThrowEOFi_dyn();

		virtual Void uncompress( ::nme::utils::CompressionAlgorithm algorithm);
		Dynamic uncompress_dyn();

		virtual Void write_uncheck( int inByte);
		Dynamic write_uncheck_dyn();

		virtual Void writeBoolean( bool value);
		Dynamic writeBoolean_dyn();

		virtual Void writeByte( int value);
		Dynamic writeByte_dyn();

		virtual Void writeBytes( Dynamic bytes,hx::Null< int >  inOffset,hx::Null< int >  inLength);
		Dynamic writeBytes_dyn();

		virtual Void writeHaxeBytes( ::haxe::io::Bytes bytes,int inOffset,int inLength);
		Dynamic writeHaxeBytes_dyn();

		virtual Void writeDouble( Float x);
		Dynamic writeDouble_dyn();

		virtual Void writeFile( ::String inString);
		Dynamic writeFile_dyn();

		virtual Void writeFloat( Float x);
		Dynamic writeFloat_dyn();

		virtual Void writeInt( int value);
		Dynamic writeInt_dyn();

		virtual Void writeShort( int value);
		Dynamic writeShort_dyn();

		virtual Void writeUnsignedInt( int value);
		Dynamic writeUnsignedInt_dyn();

		virtual Void writeUTF( ::String s);
		Dynamic writeUTF_dyn();

		virtual Void writeUTFBytes( ::String s);
		Dynamic writeUTFBytes_dyn();

		virtual int get_bytesAvailable( );
		Dynamic get_bytesAvailable_dyn();

		virtual int get_byteLength( );
		Dynamic get_byteLength_dyn();

		virtual ::String get_endian( );
		Dynamic get_endian_dyn();

		virtual ::String set_endian( ::String s);
		Dynamic set_endian_dyn();

};

} // end namespace nme
} // end namespace utils

#endif /* INCLUDED_nme_utils_ByteArray */ 
