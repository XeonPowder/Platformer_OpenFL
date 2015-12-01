#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_zip_Compress
#include <haxe/zip/Compress.h>
#endif
#ifndef INCLUDED_haxe_zip_Uncompress
#include <haxe/zip/Uncompress.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_errors_EOFError
#include <nme/errors/EOFError.h>
#endif
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_CompressionAlgorithm
#include <nme/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{
namespace utils{

Void ByteArray_obj::__construct(hx::Null< int >  __o_inSize)
{
HX_STACK_FRAME("nme.utils.ByteArray","new",0xe50bea9e,"nme.utils.ByteArray.new","nme/utils/ByteArray.hx",37,0x607e6454)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inSize,"inSize")
int inSize = __o_inSize.Default(0);
{
	HX_STACK_LINE(38)
	this->bigEndian = true;
	HX_STACK_LINE(39)
	this->position = (int)0;
	HX_STACK_LINE(41)
	bool tmp = (inSize >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(48)
		Array< unsigned char > data = Array_obj< unsigned char >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(49)
		bool tmp1 = (inSize > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(50)
			int tmp2 = (inSize - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			data[tmp2] = (int)0;
		}
		HX_STACK_LINE(51)
		int tmp2 = inSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		super::__construct(tmp2,data);
	}
}
;
	return null();
}

//ByteArray_obj::~ByteArray_obj() { }

Dynamic ByteArray_obj::__CreateEmpty() { return  new ByteArray_obj; }
hx::ObjectPtr< ByteArray_obj > ByteArray_obj::__new(hx::Null< int >  __o_inSize)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(__o_inSize);
	return _result_;}

Dynamic ByteArray_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArray_obj > _result_ = new ByteArray_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *ByteArray_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::utils::IDataInput_obj)) return operator ::nme::utils::IDataInput_obj *();
	if (inType==typeid( ::nme::utils::IDataOutput_obj)) return operator ::nme::utils::IDataOutput_obj *();
	if (inType==typeid( ::nme::utils::IMemoryRange_obj)) return operator ::nme::utils::IMemoryRange_obj *();
	return super::__ToInterface(inType);
}

ByteArray_obj::operator ::nme::utils::IDataInput_obj *()
	{ return new ::nme::utils::IDataInput_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::nme::utils::IDataOutput_obj *()
	{ return new ::nme::utils::IDataOutput_delegate_< ByteArray_obj >(this); }
ByteArray_obj::operator ::nme::utils::IMemoryRange_obj *()
	{ return new ::nme::utils::IMemoryRange_delegate_< ByteArray_obj >(this); }
void ByteArray_obj::__init__() {
HX_STACK_FRAME("nme.utils.ByteArray","__init__",0x5145e252,"nme.utils.ByteArray.__init__","nme/utils/ByteArray.hx",69,0x607e6454)
{

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::nme::utils::ByteArray run(int inLen){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nme/utils/ByteArray.hx",70,0x607e6454)
		HX_STACK_ARG(inLen,"inLen")
		{
			HX_STACK_LINE(70)
			::nme::utils::ByteArray tmp = ::nme::utils::ByteArray_obj::__new(inLen);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			return tmp;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(70)
	Dynamic factory =  Dynamic(new _Function_1_1());		HX_STACK_VAR(factory,"factory");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_2)
	int __ArgCount() const { return 2; }
	Void run(::nme::utils::ByteArray inArray,int inLen){
		HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","nme/utils/ByteArray.hx",72,0x607e6454)
		HX_STACK_ARG(inArray,"inArray")
		HX_STACK_ARG(inLen,"inLen")
		{
			HX_STACK_LINE(73)
			bool tmp = (inLen > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(73)
			if ((tmp)){
				HX_STACK_LINE(74)
				int tmp1 = (inLen - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(74)
				inArray->__Field(HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"), hx::paccDynamic )(tmp1,true);
			}
			HX_STACK_LINE(75)
			inArray->__FieldRef(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")) = inLen;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2((void))

	HX_STACK_LINE(71)
	Dynamic resize =  Dynamic(new _Function_1_2());		HX_STACK_VAR(resize,"resize");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_3)
	int __ArgCount() const { return 1; }
	Array< unsigned char > run(::nme::utils::ByteArray inArray){
		HX_STACK_FRAME("*","_Function_1_3",0x5200ed39,"*._Function_1_3","nme/utils/ByteArray.hx",79,0x607e6454)
		HX_STACK_ARG(inArray,"inArray")
		{
			HX_STACK_LINE(79)
			bool tmp = (inArray == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(79)
			if ((tmp)){
				HX_STACK_LINE(79)
				return null();
			}
			else{
				HX_STACK_LINE(79)
				return inArray->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic );
			}
			HX_STACK_LINE(79)
			return null();
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(79)
	Dynamic bytes =  Dynamic(new _Function_1_3());		HX_STACK_VAR(bytes,"bytes");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_4)
	int __ArgCount() const { return 1; }
	int run(::nme::utils::ByteArray inArray){
		HX_STACK_FRAME("*","_Function_1_4",0x5200ed3a,"*._Function_1_4","nme/utils/ByteArray.hx",80,0x607e6454)
		HX_STACK_ARG(inArray,"inArray")
		{
			HX_STACK_LINE(80)
			bool tmp = (inArray == null());		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(80)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			if ((tmp)){
				HX_STACK_LINE(80)
				tmp1 = (int)0;
			}
			else{
				HX_STACK_LINE(80)
				tmp1 = inArray->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );
			}
			HX_STACK_LINE(80)
			return tmp1;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(80)
	Dynamic slen =  Dynamic(new _Function_1_4());		HX_STACK_VAR(slen,"slen");
	HX_STACK_LINE(82)
	Dynamic tmp = ::nme::Loader_obj::load(HX_HCSTRING("nme_byte_array_init","\x94","\xff","\x90","\x5f"),(int)4);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Dynamic init = tmp;		HX_STACK_VAR(init,"init");
	HX_STACK_LINE(83)
	bool tmp1 = (init != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(83)
	if ((tmp1)){
		HX_STACK_LINE(84)
		Dynamic tmp2 = factory;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(84)
		Dynamic tmp3 = slen;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(84)
		Dynamic tmp4 = resize;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(84)
		Dynamic tmp5 = bytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		init(tmp2,tmp3,tmp4,tmp5);
	}
}
}

int ByteArray_obj::__get( int pos){
	HX_STACK_FRAME("nme.utils.ByteArray","__get",0x88cc8734,"nme.utils.ByteArray.__get","nme/utils/ByteArray.hx",58,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(62)
	int tmp = this->b->__get(pos);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,__get,return )

Void ByteArray_obj::__set( int pos,int v){
{
		HX_STACK_FRAME("nme.utils.ByteArray","__set",0x88d5a240,"nme.utils.ByteArray.__set","nme/utils/ByteArray.hx",90,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(93)
		int tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this->b[pos] = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,__set,(void))

::String ByteArray_obj::asString( ){
	HX_STACK_FRAME("nme.utils.ByteArray","asString",0xb1d03865,"nme.utils.ByteArray.asString","nme/utils/ByteArray.hx",100,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,asString,return )

Void ByteArray_obj::checkData( int inLength){
{
		HX_STACK_FRAME("nme.utils.ByteArray","checkData",0x153d7bd0,"nme.utils.ByteArray.checkData","nme/utils/ByteArray.hx",105,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inLength,"inLength")
		HX_STACK_LINE(106)
		int tmp = inLength;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		if ((tmp4)){
			HX_STACK_LINE(107)
			this->ThrowEOFi();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,checkData,(void))

Void ByteArray_obj::clear( ){
{
		HX_STACK_FRAME("nme.utils.ByteArray","clear",0xdefd174b,"nme.utils.ByteArray.clear","nme/utils/ByteArray.hx",111,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->position = (int)0;
		HX_STACK_LINE(113)
		this->length = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,clear,(void))

Void ByteArray_obj::compress( ::nme::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("nme.utils.ByteArray","compress",0x95894ca4,"nme.utils.ByteArray.compress","nme/utils/ByteArray.hx",117,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(121)
		::nme::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(124)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(126)
		bool tmp = (algorithm == ::nme::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(126)
		if ((tmp)){
			HX_STACK_LINE(128)
			::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::nme_lzma_encode(src->b));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(128)
			result = tmp1;
		}
		else{
			HX_STACK_LINE(132)
			bool tmp1 = (algorithm != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(132)
			int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			if ((tmp1)){
				HX_STACK_LINE(132)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(134)
						tmp2 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(135)
						tmp2 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(136)
						tmp2 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(136)
				tmp2 = (int)15;
			}
			HX_STACK_LINE(132)
			int windowBits = tmp2;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(142)
			::nme::utils::ByteArray tmp3 = src;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(142)
			::haxe::io::Bytes tmp4 = ::haxe::zip::Compress_obj::run(tmp3,(int)8);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(142)
			result = tmp4;
		}
		HX_STACK_LINE(146)
		this->b = result->b;
		HX_STACK_LINE(147)
		this->length = result->length;
		HX_STACK_LINE(148)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		this->position = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,compress,(void))

Void ByteArray_obj::deflate( ){
{
		HX_STACK_FRAME("nme.utils.ByteArray","deflate",0x619f1ca9,"nme.utils.ByteArray.deflate","nme/utils/ByteArray.hx",156,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_LINE(156)
		this->compress(::nme::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,deflate,(void))

Void ByteArray_obj::ensureElem( int inSize,bool inUpdateLenght){
{
		HX_STACK_FRAME("nme.utils.ByteArray","ensureElem",0xba417aef,"nme.utils.ByteArray.ensureElem","nme/utils/ByteArray.hx",159,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inSize,"inSize")
		HX_STACK_ARG(inUpdateLenght,"inUpdateLenght")
		HX_STACK_LINE(160)
		int tmp = (inSize + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		int len = tmp;		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(171)
		int tmp1 = this->b->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(171)
		int tmp2 = len;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(171)
		bool tmp3 = (tmp1 < tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(171)
		if ((tmp3)){
			HX_STACK_LINE(172)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(172)
			this->b->__SetSize(tmp4);
		}
		HX_STACK_LINE(175)
		bool tmp4 = inUpdateLenght;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(175)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(175)
		if ((tmp4)){
			HX_STACK_LINE(175)
			int tmp6 = this->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(175)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(175)
			int tmp8 = len;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(175)
			tmp5 = (tmp7 < tmp8);
		}
		else{
			HX_STACK_LINE(175)
			tmp5 = false;
		}
		HX_STACK_LINE(175)
		if ((tmp5)){
			HX_STACK_LINE(176)
			this->length = len;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,ensureElem,(void))

int ByteArray_obj::getLength( ){
	HX_STACK_FRAME("nme.utils.ByteArray","getLength",0x9a587ada,"nme.utils.ByteArray.getLength","nme/utils/ByteArray.hx",186,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getLength,return )

::nme::utils::ByteArray ByteArray_obj::getByteBuffer( ){
	HX_STACK_FRAME("nme.utils.ByteArray","getByteBuffer",0xcc86361c,"nme.utils.ByteArray.getByteBuffer","nme/utils/ByteArray.hx",189,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(189)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getByteBuffer,return )

int ByteArray_obj::getStart( ){
	HX_STACK_FRAME("nme.utils.ByteArray","getStart",0xf5ac88ee,"nme.utils.ByteArray.getStart","nme/utils/ByteArray.hx",190,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,getStart,return )

Void ByteArray_obj::inflate( ){
{
		HX_STACK_FRAME("nme.utils.ByteArray","inflate",0xcac0adc5,"nme.utils.ByteArray.inflate","nme/utils/ByteArray.hx",194,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_LINE(194)
		this->uncompress(::nme::utils::CompressionAlgorithm_obj::DEFLATE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,inflate,(void))

Void ByteArray_obj::nmeFromBytes( ::haxe::io::Bytes inBytes){
{
		HX_STACK_FRAME("nme.utils.ByteArray","nmeFromBytes",0xf6c7907d,"nme.utils.ByteArray.nmeFromBytes","nme/utils/ByteArray.hx",198,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(199)
		this->b = inBytes->b;
		HX_STACK_LINE(200)
		this->length = inBytes->length;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,nmeFromBytes,(void))

bool ByteArray_obj::readBoolean( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readBoolean",0xc8c40630,"nme.utils.ByteArray.readBoolean","nme/utils/ByteArray.hx",208,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(209)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(209)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(209)
	if ((tmp2)){
		HX_STACK_LINE(209)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			int tmp5 = (this->position)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(209)
			int pos = tmp5;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(209)
			tmp4 = this->b->__get(pos);
		}
		HX_STACK_LINE(209)
		tmp3 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(209)
		int tmp4 = this->ThrowEOFi();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(209)
		tmp3 = (tmp4 != (int)0);
	}
	HX_STACK_LINE(209)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readBoolean,return )

int ByteArray_obj::readByte( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readByte",0x7ae4fe80,"nme.utils.ByteArray.readByte","nme/utils/ByteArray.hx",213,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(214)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(214)
	if ((tmp2)){
		HX_STACK_LINE(214)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(214)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(214)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(214)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(214)
	int val = tmp3;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(215)
	int tmp4 = (int(val) & int((int)128));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(215)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(215)
	if ((tmp5)){
		HX_STACK_LINE(215)
		tmp6 = (val - (int)256);
	}
	else{
		HX_STACK_LINE(215)
		tmp6 = val;
	}
	HX_STACK_LINE(215)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readByte,return )

Void ByteArray_obj::readBytes( ::nme::utils::ByteArray outData,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLen){
int inOffset = __o_inOffset.Default(0);
int inLen = __o_inLen.Default(0);
	HX_STACK_FRAME("nme.utils.ByteArray","readBytes",0x0d79b1f3,"nme.utils.ByteArray.readBytes","nme/utils/ByteArray.hx",219,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(outData,"outData")
	HX_STACK_ARG(inOffset,"inOffset")
	HX_STACK_ARG(inLen,"inLen")
{
		HX_STACK_LINE(220)
		bool tmp = (inLen == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(220)
		if ((tmp)){
			HX_STACK_LINE(221)
			int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(221)
			int tmp2 = this->position;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(221)
			int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(221)
			inLen = tmp3;
		}
		HX_STACK_LINE(223)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(223)
		int tmp2 = inLen;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(223)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(223)
		if ((tmp5)){
			HX_STACK_LINE(224)
			this->ThrowEOFi();
		}
		HX_STACK_LINE(226)
		int tmp6 = outData->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(226)
		int tmp7 = (inOffset + inLen);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		if ((tmp8)){
			HX_STACK_LINE(227)
			int tmp9 = (inOffset + inLen);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(227)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(227)
			outData->ensureElem(tmp10,true);
		}
		HX_STACK_LINE(232)
		Array< unsigned char > b1 = this->b;		HX_STACK_VAR(b1,"b1");
		HX_STACK_LINE(233)
		Array< unsigned char > b2 = outData->b;		HX_STACK_VAR(b2,"b2");
		HX_STACK_LINE(234)
		int tmp9 = this->position;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(234)
		int p = tmp9;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(235)
			while((true)){
				HX_STACK_LINE(235)
				bool tmp10 = (_g < inLen);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(235)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(235)
				if ((tmp11)){
					HX_STACK_LINE(235)
					break;
				}
				HX_STACK_LINE(235)
				int tmp12 = (_g)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(235)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(236)
				int tmp13 = (inOffset + i);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(236)
				int tmp14 = (p + i);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(236)
				unsigned char tmp15 = b1->__get(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(236)
				b2[tmp13] = tmp15;
			}
		}
		HX_STACK_LINE(239)
		hx::AddEq(this->position,inLen);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,readBytes,(void))

Float ByteArray_obj::readDouble( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readDouble",0xc85dd889,"nme.utils.ByteArray.readDouble","nme/utils/ByteArray.hx",243,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(244)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(244)
	int tmp1 = (tmp + (int)8);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(244)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(244)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(244)
	if ((tmp3)){
		HX_STACK_LINE(245)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(250)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(250)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(250)
	int tmp6 = (tmp5 + (int)8);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(250)
	::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::__new((int)8,this->b->slice(tmp4,tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(250)
	::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(253)
	hx::AddEq(this->position,(int)8);
	HX_STACK_LINE(254)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(254)
	Float tmp9 = ::nme::utils::ByteArray_obj::_double_of_bytes(bytes->b,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(254)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readDouble,return )

Float ByteArray_obj::readFloat( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readFloat",0x52786f24,"nme.utils.ByteArray.readFloat","nme/utils/ByteArray.hx",265,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(266)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(266)
	int tmp1 = (tmp + (int)4);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(266)
	int tmp2 = this->length;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(266)
	bool tmp3 = (tmp1 > tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(266)
	if ((tmp3)){
		HX_STACK_LINE(267)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(272)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(272)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(272)
	int tmp6 = (tmp5 + (int)4);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(272)
	::haxe::io::Bytes tmp7 = ::haxe::io::Bytes_obj::__new((int)4,this->b->slice(tmp4,tmp6));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(272)
	::haxe::io::Bytes bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(275)
	hx::AddEq(this->position,(int)4);
	HX_STACK_LINE(276)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(276)
	Float tmp9 = ::nme::utils::ByteArray_obj::_float_of_bytes(bytes->b,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(276)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readFloat,return )

int ByteArray_obj::readInt( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readInt",0xc16ec477,"nme.utils.ByteArray.readInt","nme/utils/ByteArray.hx",280,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(281)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(281)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(281)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(281)
	if ((tmp2)){
		HX_STACK_LINE(281)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(281)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(281)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(281)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(281)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(282)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(282)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(282)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(282)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(282)
	if ((tmp6)){
		HX_STACK_LINE(282)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(282)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(282)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(282)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(282)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(283)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(283)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(283)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(283)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(283)
	if ((tmp10)){
		HX_STACK_LINE(283)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(283)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(283)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(283)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(284)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(284)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(284)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(284)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(284)
	if ((tmp14)){
		HX_STACK_LINE(284)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(284)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(284)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(284)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(284)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(286)
	bool tmp16 = this->bigEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(286)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(286)
	if ((tmp16)){
		HX_STACK_LINE(286)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(286)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(286)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(286)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(286)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(286)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(286)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(286)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(286)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(286)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(286)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(286)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(286)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(286)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(286)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readInt,return )

::String ByteArray_obj::readMultiByte( int inLen,::String charSet){
	HX_STACK_FRAME("nme.utils.ByteArray","readMultiByte",0xdd4413a9,"nme.utils.ByteArray.readMultiByte","nme/utils/ByteArray.hx",290,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inLen,"inLen")
	HX_STACK_ARG(charSet,"charSet")
	HX_STACK_LINE(292)
	int tmp = inLen;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(292)
	::String tmp1 = this->readUTFBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(292)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,readMultiByte,return )

int ByteArray_obj::readShort( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readShort",0xcc092e04,"nme.utils.ByteArray.readShort","nme/utils/ByteArray.hx",296,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(297)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(297)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(297)
	if ((tmp2)){
		HX_STACK_LINE(297)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(297)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(297)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(297)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(297)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(298)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(298)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(298)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(298)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(298)
	if ((tmp6)){
		HX_STACK_LINE(298)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(298)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(298)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(298)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(298)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(300)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(300)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(300)
	if ((tmp8)){
		HX_STACK_LINE(300)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(300)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(300)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(300)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	HX_STACK_LINE(300)
	int val = tmp9;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(302)
	int tmp10 = (int(val) & int((int)32768));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(302)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(302)
	int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(302)
	if ((tmp11)){
		HX_STACK_LINE(302)
		tmp12 = (val - (int)65536);
	}
	else{
		HX_STACK_LINE(302)
		tmp12 = val;
	}
	HX_STACK_LINE(302)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readShort,return )

int ByteArray_obj::readUnsignedByte( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readUnsignedByte",0xe487e215,"nme.utils.ByteArray.readUnsignedByte","nme/utils/ByteArray.hx",306,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(307)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(307)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(307)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(307)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(307)
	if ((tmp2)){
		HX_STACK_LINE(307)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(307)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(307)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(307)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(307)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedByte,return )

int ByteArray_obj::readUnsignedInt( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readUnsignedInt",0x8f652a82,"nme.utils.ByteArray.readUnsignedInt","nme/utils/ByteArray.hx",311,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(312)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(312)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(312)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	if ((tmp2)){
		HX_STACK_LINE(312)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(312)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(312)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(312)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(312)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(313)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(313)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(313)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(313)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(313)
	if ((tmp6)){
		HX_STACK_LINE(313)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(313)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(313)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(313)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(313)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(314)
	int tmp8 = this->position;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(314)
	int tmp9 = this->length;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(314)
	bool tmp10 = (tmp8 < tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(314)
	int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(314)
	if ((tmp10)){
		HX_STACK_LINE(314)
		int tmp12 = (this->position)++;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(314)
		int pos = tmp12;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(314)
		tmp11 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(314)
		tmp11 = this->ThrowEOFi();
	}
	HX_STACK_LINE(314)
	int ch3 = tmp11;		HX_STACK_VAR(ch3,"ch3");
	HX_STACK_LINE(315)
	int tmp12 = this->position;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(315)
	int tmp13 = this->length;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(315)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(315)
	int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(315)
	if ((tmp14)){
		HX_STACK_LINE(315)
		int tmp16 = (this->position)++;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(315)
		int pos = tmp16;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(315)
		tmp15 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(315)
		tmp15 = this->ThrowEOFi();
	}
	HX_STACK_LINE(315)
	int ch4 = tmp15;		HX_STACK_VAR(ch4,"ch4");
	HX_STACK_LINE(317)
	bool tmp16 = this->bigEndian;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(317)
	int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(317)
	if ((tmp16)){
		HX_STACK_LINE(317)
		int tmp18 = (int(ch1) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(317)
		int tmp19 = (int(ch2) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(317)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(317)
		int tmp21 = (int(ch3) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(317)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(317)
		int tmp23 = ch4;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(317)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	else{
		HX_STACK_LINE(317)
		int tmp18 = (int(ch4) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(317)
		int tmp19 = (int(ch3) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(317)
		int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(317)
		int tmp21 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(317)
		int tmp22 = (int(tmp20) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(317)
		int tmp23 = ch1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(317)
		tmp17 = (int(tmp22) | int(tmp23));
	}
	HX_STACK_LINE(317)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedInt,return )

int ByteArray_obj::readUnsignedShort( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readUnsignedShort",0xd0ed6ccf,"nme.utils.ByteArray.readUnsignedShort","nme/utils/ByteArray.hx",321,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(322)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(322)
	int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(322)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(322)
	if ((tmp2)){
		HX_STACK_LINE(322)
		int tmp4 = (this->position)++;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(322)
		int pos = tmp4;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(322)
		tmp3 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(322)
		tmp3 = this->ThrowEOFi();
	}
	HX_STACK_LINE(322)
	int ch1 = tmp3;		HX_STACK_VAR(ch1,"ch1");
	HX_STACK_LINE(323)
	int tmp4 = this->position;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(323)
	int tmp5 = this->length;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(323)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(323)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(323)
	if ((tmp6)){
		HX_STACK_LINE(323)
		int tmp8 = (this->position)++;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(323)
		int pos = tmp8;		HX_STACK_VAR(pos,"pos");
		HX_STACK_LINE(323)
		tmp7 = this->b->__get(pos);
	}
	else{
		HX_STACK_LINE(323)
		tmp7 = this->ThrowEOFi();
	}
	HX_STACK_LINE(323)
	int ch2 = tmp7;		HX_STACK_VAR(ch2,"ch2");
	HX_STACK_LINE(325)
	bool tmp8 = this->bigEndian;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(325)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(325)
	if ((tmp8)){
		HX_STACK_LINE(325)
		int tmp10 = (int(ch1) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(325)
		int tmp11 = ch2;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		tmp9 = (int(tmp10) | int(tmp11));
	}
	else{
		HX_STACK_LINE(325)
		int tmp10 = (int(ch2) << int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(325)
		int tmp11 = ch1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(325)
		tmp9 = (tmp10 + tmp11);
	}
	HX_STACK_LINE(325)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUnsignedShort,return )

::String ByteArray_obj::readUTF( ){
	HX_STACK_FRAME("nme.utils.ByteArray","readUTF",0xc177c8af,"nme.utils.ByteArray.readUTF","nme/utils/ByteArray.hx",329,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(330)
	int tmp = this->readUnsignedShort();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(330)
	int len = tmp;		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(331)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(331)
	::String tmp2 = this->readUTFBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(331)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,readUTF,return )

::String ByteArray_obj::readUTFBytes( int inLen){
	HX_STACK_FRAME("nme.utils.ByteArray","readUTFBytes",0x388cd53c,"nme.utils.ByteArray.readUTFBytes","nme/utils/ByteArray.hx",335,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inLen,"inLen")
	HX_STACK_LINE(336)
	int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(336)
	int tmp1 = inLen;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(336)
	int tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	int tmp3 = this->length;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(336)
	bool tmp4 = (tmp2 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(336)
	if ((tmp4)){
		HX_STACK_LINE(337)
		this->ThrowEOFi();
	}
	HX_STACK_LINE(339)
	int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(339)
	int p = tmp5;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(340)
	hx::AddEq(this->position,inLen);
	HX_STACK_LINE(345)
	::String result = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(346)
	::__hxcpp_string_of_bytes(this->b,result,p,inLen);
	HX_STACK_LINE(347)
	::String tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(347)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readUTFBytes,return )

Void ByteArray_obj::setLength( int inLength){
{
		HX_STACK_FRAME("nme.utils.ByteArray","setLength",0x7da966e6,"nme.utils.ByteArray.setLength","nme/utils/ByteArray.hx",352,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inLength,"inLength")
		HX_STACK_LINE(353)
		bool tmp = (inLength > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		if ((tmp)){
			HX_STACK_LINE(354)
			int tmp1 = (inLength - (int)1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			this->ensureElem(tmp1,false);
		}
		HX_STACK_LINE(355)
		this->length = inLength;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,setLength,(void))

::nme::utils::ByteArray ByteArray_obj::slice( int inBegin,Dynamic inEnd){
	HX_STACK_FRAME("nme.utils.ByteArray","slice",0x15696a10,"nme.utils.ByteArray.slice","nme/utils/ByteArray.hx",360,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBegin,"inBegin")
	HX_STACK_ARG(inEnd,"inEnd")
	HX_STACK_LINE(361)
	int begin = inBegin;		HX_STACK_VAR(begin,"begin");
	HX_STACK_LINE(363)
	bool tmp = (begin < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	if ((tmp)){
		HX_STACK_LINE(365)
		int tmp1 = this->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(365)
		hx::AddEq(begin,tmp1);
		HX_STACK_LINE(366)
		bool tmp2 = (begin < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		if ((tmp2)){
			HX_STACK_LINE(367)
			begin = (int)0;
		}
	}
	HX_STACK_LINE(370)
	bool tmp1 = (inEnd == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	if ((tmp1)){
		HX_STACK_LINE(370)
		tmp2 = this->length;
	}
	else{
		HX_STACK_LINE(370)
		tmp2 = inEnd;
	}
	HX_STACK_LINE(370)
	int end = tmp2;		HX_STACK_VAR(end,"end");
	HX_STACK_LINE(372)
	bool tmp3 = (end < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(372)
	if ((tmp3)){
		HX_STACK_LINE(374)
		int tmp4 = this->length;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(374)
		hx::AddEq(end,tmp4);
		HX_STACK_LINE(376)
		bool tmp5 = (end < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(376)
		if ((tmp5)){
			HX_STACK_LINE(377)
			end = (int)0;
		}
	}
	HX_STACK_LINE(380)
	bool tmp4 = (begin >= end);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(380)
	if ((tmp4)){
		HX_STACK_LINE(381)
		::nme::utils::ByteArray tmp5 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(381)
		return tmp5;
	}
	HX_STACK_LINE(383)
	int tmp5 = (end - begin);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(383)
	::nme::utils::ByteArray tmp6 = ::nme::utils::ByteArray_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(383)
	::nme::utils::ByteArray result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(385)
	int tmp7 = this->position;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(385)
	int opos = tmp7;		HX_STACK_VAR(opos,"opos");
	HX_STACK_LINE(386)
	int tmp8 = begin;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(386)
	int tmp9 = (end - begin);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(386)
	result->blit((int)0,hx::ObjectPtr<OBJ_>(this),tmp8,tmp9);
	HX_STACK_LINE(388)
	::nme::utils::ByteArray tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(388)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC2(ByteArray_obj,slice,return )

int ByteArray_obj::ThrowEOFi( ){
	HX_STACK_FRAME("nme.utils.ByteArray","ThrowEOFi",0x8b620d11,"nme.utils.ByteArray.ThrowEOFi","nme/utils/ByteArray.hx",391,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(392)
	::nme::errors::EOFError tmp = ::nme::errors::EOFError_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(392)
	HX_STACK_DO_THROW(tmp);
	HX_STACK_LINE(393)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,ThrowEOFi,return )

Void ByteArray_obj::uncompress( ::nme::utils::CompressionAlgorithm algorithm){
{
		HX_STACK_FRAME("nme.utils.ByteArray","uncompress",0xa599f87d,"nme.utils.ByteArray.uncompress","nme/utils/ByteArray.hx",397,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(algorithm,"algorithm")
		HX_STACK_LINE(398)
		bool tmp = (algorithm == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(398)
		if ((tmp)){
			HX_STACK_LINE(398)
			algorithm = ::nme::utils::CompressionAlgorithm_obj::GZIP;
		}
		HX_STACK_LINE(403)
		::nme::utils::ByteArray src = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(406)
		::haxe::io::Bytes result;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(408)
		bool tmp1 = (algorithm == ::nme::utils::CompressionAlgorithm_obj::LZMA);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(408)
		if ((tmp1)){
			HX_STACK_LINE(410)
			::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::nme_lzma_decode(src->b));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			result = tmp2;
		}
		else{
			HX_STACK_LINE(414)
			bool tmp2 = (algorithm != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(414)
			int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(414)
			if ((tmp2)){
				HX_STACK_LINE(414)
				switch( (int)(algorithm->__Index())){
					case (int)0: {
						HX_STACK_LINE(416)
						tmp3 = (int)-15;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(417)
						tmp3 = (int)31;
					}
					;break;
					default: {
						HX_STACK_LINE(418)
						tmp3 = (int)15;
					}
				}
			}
			else{
				HX_STACK_LINE(418)
				tmp3 = (int)15;
			}
			HX_STACK_LINE(414)
			int windowBits = tmp3;		HX_STACK_VAR(windowBits,"windowBits");
			HX_STACK_LINE(424)
			::nme::utils::ByteArray tmp4 = src;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(424)
			::haxe::io::Bytes tmp5 = ::haxe::zip::Uncompress_obj::run(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(424)
			result = tmp5;
		}
		HX_STACK_LINE(428)
		this->b = result->b;
		HX_STACK_LINE(429)
		this->length = result->length;
		HX_STACK_LINE(430)
		this->position = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,uncompress,(void))

Void ByteArray_obj::write_uncheck( int inByte){
{
		HX_STACK_FRAME("nme.utils.ByteArray","write_uncheck",0x2d6a60ed,"nme.utils.ByteArray.write_uncheck","nme/utils/ByteArray.hx",436,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inByte,"inByte")
		HX_STACK_LINE(438)
		int tmp = (this->position)++;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(438)
		int tmp1 = inByte;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(438)
		this->b->__unsafe_set(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,write_uncheck,(void))

Void ByteArray_obj::writeBoolean( bool value){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeBoolean",0x29ab3d8b,"nme.utils.ByteArray.writeBoolean","nme/utils/ByteArray.hx",446,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(446)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(446)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(446)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(446)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(446)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(446)
		if ((tmp2)){
			HX_STACK_LINE(446)
			tmp3 = (int)1;
		}
		else{
			HX_STACK_LINE(446)
			tmp3 = (int)0;
		}
		HX_STACK_LINE(446)
		this->b[tmp1] = tmp3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeBoolean,(void))

Void ByteArray_obj::writeByte( int value){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeByte",0xc8d17045,"nme.utils.ByteArray.writeByte","nme/utils/ByteArray.hx",450,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(451)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(451)
		this->ensureElem(tmp,true);
		HX_STACK_LINE(454)
		int tmp1 = (this->position)++;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(454)
		unsigned char tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		this->b[tmp1] = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeByte,(void))

Void ByteArray_obj::writeBytes( Dynamic bytes,hx::Null< int >  __o_inOffset,hx::Null< int >  __o_inLength){
int inOffset = __o_inOffset.Default(0);
int inLength = __o_inLength.Default(0);
	HX_STACK_FRAME("nme.utils.ByteArray","writeBytes",0xee70cc8e,"nme.utils.ByteArray.writeBytes","nme/utils/ByteArray.hx",464,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(inOffset,"inOffset")
	HX_STACK_ARG(inLength,"inLength")
{
		HX_STACK_LINE(465)
		Dynamic tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(465)
		int tmp1 = inOffset;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(465)
		int tmp2 = inLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(465)
		this->writeHaxeBytes(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeBytes,(void))

Void ByteArray_obj::writeHaxeBytes( ::haxe::io::Bytes bytes,int inOffset,int inLength){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeHaxeBytes",0xbca18c08,"nme.utils.ByteArray.writeHaxeBytes","nme/utils/ByteArray.hx",469,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(inOffset,"inOffset")
		HX_STACK_ARG(inLength,"inLength")
		HX_STACK_LINE(470)
		bool tmp = (inLength == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(470)
		if ((tmp)){
			HX_STACK_LINE(470)
			int tmp1 = (bytes->length - inOffset);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(470)
			inLength = tmp1;
		}
		HX_STACK_LINE(471)
		int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(471)
		int tmp2 = inLength;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(471)
		int tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(471)
		int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(471)
		this->ensureElem(tmp4,true);
		HX_STACK_LINE(472)
		int tmp5 = this->position;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(472)
		int opos = tmp5;		HX_STACK_VAR(opos,"opos");
		HX_STACK_LINE(473)
		hx::AddEq(this->position,inLength);
		HX_STACK_LINE(474)
		int tmp6 = opos;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(474)
		::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(474)
		int tmp8 = inOffset;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(474)
		int tmp9 = inLength;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(474)
		this->blit(tmp6,tmp7,tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ByteArray_obj,writeHaxeBytes,(void))

Void ByteArray_obj::writeDouble( Float x){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeDouble",0xbf9e058e,"nme.utils.ByteArray.writeDouble","nme/utils/ByteArray.hx",479,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(483)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(483)
		bool tmp1 = this->bigEndian;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(483)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::_double_bytes(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(483)
		::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(486)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(486)
		this->writeHaxeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeDouble,(void))

Void ByteArray_obj::writeFile( ::String inString){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeFile",0xcb6a1fb9,"nme.utils.ByteArray.writeFile","nme/utils/ByteArray.hx",491,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inString,"inString")
		HX_STACK_LINE(492)
		::String tmp = inString;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(492)
		::nme::utils::ByteArray_obj::nme_byte_array_overwrite_file(tmp,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFile,(void))

Void ByteArray_obj::writeFloat( Float x){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeFloat",0x336f89bf,"nme.utils.ByteArray.writeFloat","nme/utils/ByteArray.hx",497,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(501)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(501)
		bool tmp1 = this->bigEndian;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(501)
		::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::ofData(::nme::utils::ByteArray_obj::_float_bytes(tmp,tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(501)
		::haxe::io::Bytes bytes = tmp2;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(504)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(504)
		this->writeHaxeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeFloat,(void))

Void ByteArray_obj::writeInt( int value){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeInt",0x35ba7252,"nme.utils.ByteArray.writeInt","nme/utils/ByteArray.hx",508,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(509)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(509)
		int tmp1 = (tmp + (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(509)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(511)
		bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(511)
		if ((tmp2)){
			HX_STACK_LINE(513)
			{
				HX_STACK_LINE(513)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(513)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(513)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(514)
			{
				HX_STACK_LINE(514)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(514)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(514)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(515)
			{
				HX_STACK_LINE(515)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(515)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(515)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(516)
			{
				HX_STACK_LINE(516)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(516)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(516)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(520)
			{
				HX_STACK_LINE(520)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(520)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(520)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(521)
			{
				HX_STACK_LINE(521)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(521)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(521)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(522)
			{
				HX_STACK_LINE(522)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(522)
				int tmp4 = (int(value) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(522)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(523)
			{
				HX_STACK_LINE(523)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(523)
				int tmp4 = (int(value) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(523)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeInt,(void))

Void ByteArray_obj::writeShort( int value){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeShort",0xad00489f,"nme.utils.ByteArray.writeShort","nme/utils/ByteArray.hx",530,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(531)
		int tmp = this->position;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(531)
		int tmp1 = (tmp + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(531)
		this->ensureElem(tmp1,true);
		HX_STACK_LINE(533)
		bool tmp2 = this->bigEndian;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(533)
		if ((tmp2)){
			HX_STACK_LINE(535)
			{
				HX_STACK_LINE(535)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(535)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(535)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(536)
			{
				HX_STACK_LINE(536)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(536)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(536)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
		else{
			HX_STACK_LINE(540)
			{
				HX_STACK_LINE(540)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(540)
				int tmp4 = value;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(540)
				this->b->__unsafe_set(tmp3,tmp4);
			}
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				int tmp3 = (this->position)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(541)
				int tmp4 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(541)
				this->b->__unsafe_set(tmp3,tmp4);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeShort,(void))

Void ByteArray_obj::writeUnsignedInt( int value){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeUnsignedInt",0x5f2aab5d,"nme.utils.ByteArray.writeUnsignedInt","nme/utils/ByteArray.hx",546,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(547)
		int tmp = value;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(547)
		this->writeInt(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUnsignedInt,(void))

Void ByteArray_obj::writeUTF( ::String s){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeUTF",0x35c3768a,"nme.utils.ByteArray.writeUTF","nme/utils/ByteArray.hx",551,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(555)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(555)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(555)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(558)
		int tmp2 = bytes->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(558)
		this->writeShort(tmp2);
		HX_STACK_LINE(559)
		::haxe::io::Bytes tmp3 = bytes;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(559)
		this->writeHaxeBytes(tmp3,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTF,(void))

Void ByteArray_obj::writeUTFBytes( ::String s){
{
		HX_STACK_FRAME("nme.utils.ByteArray","writeUTFBytes",0xa1f60d81,"nme.utils.ByteArray.writeUTFBytes","nme/utils/ByteArray.hx",563,0x607e6454)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(567)
		::String tmp = s;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(567)
		::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::ofString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(567)
		::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(570)
		::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(570)
		this->writeHaxeBytes(tmp2,(int)0,(int)0);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,writeUTFBytes,(void))

int ByteArray_obj::get_bytesAvailable( ){
	HX_STACK_FRAME("nme.utils.ByteArray","get_bytesAvailable",0x83564829,"nme.utils.ByteArray.get_bytesAvailable","nme/utils/ByteArray.hx",574,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(574)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(574)
	int tmp1 = this->position;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(574)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(574)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_bytesAvailable,return )

int ByteArray_obj::get_byteLength( ){
	HX_STACK_FRAME("nme.utils.ByteArray","get_byteLength",0xb0c858d9,"nme.utils.ByteArray.get_byteLength","nme/utils/ByteArray.hx",575,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(575)
	int tmp = this->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(575)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_byteLength,return )

::String ByteArray_obj::get_endian( ){
	HX_STACK_FRAME("nme.utils.ByteArray","get_endian",0x8726d1e6,"nme.utils.ByteArray.get_endian","nme/utils/ByteArray.hx",576,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_LINE(576)
	bool tmp = this->bigEndian;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(576)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(576)
	if ((tmp)){
		HX_STACK_LINE(576)
		tmp1 = HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20");
	}
	else{
		HX_STACK_LINE(576)
		tmp1 = HX_HCSTRING("littleEndian","\x31","\x2e","\x7b","\x07");
	}
	HX_STACK_LINE(576)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArray_obj,get_endian,return )

::String ByteArray_obj::set_endian( ::String s){
	HX_STACK_FRAME("nme.utils.ByteArray","set_endian",0x8aa4705a,"nme.utils.ByteArray.set_endian","nme/utils/ByteArray.hx",577,0x607e6454)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(577)
	bool tmp = (s == HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	this->bigEndian = tmp;
	HX_STACK_LINE(577)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(577)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,set_endian,return )

::nme::utils::ByteArray ByteArray_obj::fromBytes( ::haxe::io::Bytes inBytes){
	HX_STACK_FRAME("nme.utils.ByteArray","fromBytes",0xf11b4f5f,"nme.utils.ByteArray.fromBytes","nme/utils/ByteArray.hx",180,0x607e6454)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_LINE(181)
	::nme::utils::ByteArray tmp = ::nme::utils::ByteArray_obj::__new((int)-1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(181)
	::nme::utils::ByteArray result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		result->b = inBytes->b;
		HX_STACK_LINE(182)
		result->length = inBytes->length;
	}
	HX_STACK_LINE(183)
	::nme::utils::ByteArray tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(183)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,fromBytes,return )

::nme::utils::ByteArray ByteArray_obj::readFile( ::String inString){
	HX_STACK_FRAME("nme.utils.ByteArray","readFile",0x7d7dadf4,"nme.utils.ByteArray.readFile","nme/utils/ByteArray.hx",259,0x607e6454)
	HX_STACK_ARG(inString,"inString")
	HX_STACK_LINE(260)
	::String tmp = inString;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	::nme::utils::ByteArray tmp1 = ::nme::utils::ByteArray_obj::nme_byte_array_read_file(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(260)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ByteArray_obj,readFile,return )

Dynamic ByteArray_obj::_double_bytes;

Dynamic ByteArray_obj::_double_of_bytes;

Dynamic ByteArray_obj::_float_bytes;

Dynamic ByteArray_obj::_float_of_bytes;

Dynamic ByteArray_obj::nme_byte_array_overwrite_file;

Dynamic ByteArray_obj::nme_byte_array_read_file;

Dynamic ByteArray_obj::nme_lzma_encode;

Dynamic ByteArray_obj::nme_lzma_decode;


ByteArray_obj::ByteArray_obj()
{
}

Dynamic ByteArray_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return __get_dyn(); }
		if (HX_FIELD_EQ(inName,"__set") ) { return __set_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"slice") ) { return slice_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp != hx::paccNever) return get_endian(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"deflate") ) { return deflate_dyn(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"readInt") ) { return readInt_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTF") ) { return readUTF_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { return position; }
		if (HX_FIELD_EQ(inName,"asString") ) { return asString_dyn(); }
		if (HX_FIELD_EQ(inName,"compress") ) { return compress_dyn(); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return getStart_dyn(); }
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeInt") ) { return writeInt_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTF") ) { return writeUTF_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return bigEndian; }
		if (HX_FIELD_EQ(inName,"checkData") ) { return checkData_dyn(); }
		if (HX_FIELD_EQ(inName,"getLength") ) { return getLength_dyn(); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return readFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"readShort") ) { return readShort_dyn(); }
		if (HX_FIELD_EQ(inName,"setLength") ) { return setLength_dyn(); }
		if (HX_FIELD_EQ(inName,"ThrowEOFi") ) { return ThrowEOFi_dyn(); }
		if (HX_FIELD_EQ(inName,"writeByte") ) { return writeByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFile") ) { return writeFile_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { return inCallProp != hx::paccNever ? get_byteLength() : byteLength; }
		if (HX_FIELD_EQ(inName,"ensureElem") ) { return ensureElem_dyn(); }
		if (HX_FIELD_EQ(inName,"readDouble") ) { return readDouble_dyn(); }
		if (HX_FIELD_EQ(inName,"uncompress") ) { return uncompress_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBytes") ) { return writeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeFloat") ) { return writeFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"writeShort") ) { return writeShort_dyn(); }
		if (HX_FIELD_EQ(inName,"get_endian") ) { return get_endian_dyn(); }
		if (HX_FIELD_EQ(inName,"set_endian") ) { return set_endian_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"readBoolean") ) { return readBoolean_dyn(); }
		if (HX_FIELD_EQ(inName,"writeDouble") ) { return writeDouble_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeFromBytes") ) { return nmeFromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"readUTFBytes") ) { return readUTFBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"writeBoolean") ) { return writeBoolean_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return getByteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"readMultiByte") ) { return readMultiByte_dyn(); }
		if (HX_FIELD_EQ(inName,"write_uncheck") ) { return write_uncheck_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUTFBytes") ) { return writeUTFBytes_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { return inCallProp != hx::paccNever ? get_bytesAvailable() : bytesAvailable; }
		if (HX_FIELD_EQ(inName,"writeHaxeBytes") ) { return writeHaxeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"get_byteLength") ) { return get_byteLength_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"readUnsignedInt") ) { return readUnsignedInt_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"readUnsignedByte") ) { return readUnsignedByte_dyn(); }
		if (HX_FIELD_EQ(inName,"writeUnsignedInt") ) { return writeUnsignedInt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"readUnsignedShort") ) { return readUnsignedShort_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_bytesAvailable") ) { return get_bytesAvailable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ByteArray_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"readFile") ) { outValue = readFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { outValue = _float_bytes; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { outValue = _double_bytes; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { outValue = _float_of_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"nme_lzma_encode") ) { outValue = nme_lzma_encode; return true;  }
		if (HX_FIELD_EQ(inName,"nme_lzma_decode") ) { outValue = nme_lzma_decode; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { outValue = _double_of_bytes; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { outValue = nme_byte_array_read_file; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { outValue = nme_byte_array_overwrite_file; return true;  }
	}
	return false;
}

Dynamic ByteArray_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"endian") ) { if (inCallProp != hx::paccNever) return set_endian(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"position") ) { position=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bytesAvailable") ) { bytesAvailable=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ByteArray_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"_float_bytes") ) { _float_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_double_bytes") ) { _double_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_float_of_bytes") ) { _float_of_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_lzma_encode") ) { nme_lzma_encode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_lzma_decode") ) { nme_lzma_decode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_double_of_bytes") ) { _double_of_bytes=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_byte_array_read_file") ) { nme_byte_array_read_file=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_byte_array_overwrite_file") ) { nme_byte_array_overwrite_file=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void ByteArray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"));
	outFields->push(HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"));
	outFields->push(HX_HCSTRING("endian","\x9b","\x98","\x88","\xfa"));
	outFields->push(HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ByteArray_obj,bigEndian),HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,bytesAvailable),HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,position),HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca")},
	{hx::fsInt,(int)offsetof(ByteArray_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_double_bytes,HX_HCSTRING("_double_bytes","\x5c","\x30","\xd8","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_double_of_bytes,HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_float_bytes,HX_HCSTRING("_float_bytes","\x49","\xe0","\x15","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::_float_of_bytes,HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::nme_byte_array_overwrite_file,HX_HCSTRING("nme_byte_array_overwrite_file","\xf4","\x88","\xb6","\x2e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::nme_byte_array_read_file,HX_HCSTRING("nme_byte_array_read_file","\x41","\x24","\x66","\x10")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::nme_lzma_encode,HX_HCSTRING("nme_lzma_encode","\xda","\xac","\x7a","\xb9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ByteArray_obj::nme_lzma_decode,HX_HCSTRING("nme_lzma_decode","\xf2","\x17","\x84","\x24")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bigEndian","\x7b","\xd5","\x5a","\x20"),
	HX_HCSTRING("bytesAvailable","\xde","\x4b","\x9d","\x9b"),
	HX_HCSTRING("position","\xa9","\xa0","\xfa","\xca"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	HX_HCSTRING("asString","\x63","\x33","\x06","\xa0"),
	HX_HCSTRING("checkData","\x12","\x1f","\x43","\x96"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("compress","\xa2","\x47","\xbf","\x83"),
	HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"),
	HX_HCSTRING("ensureElem","\x6d","\xb1","\x2a","\x1e"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("nmeFromBytes","\x7b","\xe2","\x49","\x10"),
	HX_HCSTRING("readBoolean","\xf2","\x7d","\xea","\xd0"),
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("readDouble","\x07","\x0f","\x47","\x2c"),
	HX_HCSTRING("readFloat","\x66","\x12","\x7e","\xd3"),
	HX_HCSTRING("readInt","\x39","\xb3","\xc9","\x02"),
	HX_HCSTRING("readMultiByte","\xeb","\x7f","\xc9","\x15"),
	HX_HCSTRING("readShort","\x46","\xd1","\x0e","\x4d"),
	HX_HCSTRING("readUnsignedByte","\x13","\x0b","\xce","\x9b"),
	HX_HCSTRING("readUnsignedInt","\x44","\xab","\x4f","\x05"),
	HX_HCSTRING("readUnsignedShort","\x11","\x22","\x0b","\x77"),
	HX_HCSTRING("readUTF","\x71","\xb7","\xd2","\x02"),
	HX_HCSTRING("readUTFBytes","\x3a","\x27","\x0f","\x52"),
	HX_HCSTRING("setLength","\x28","\x0a","\xaf","\xfe"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("ThrowEOFi","\x53","\xb0","\x67","\x0c"),
	HX_HCSTRING("uncompress","\xfb","\x2e","\x83","\x09"),
	HX_HCSTRING("write_uncheck","\x2f","\xcd","\xef","\x65"),
	HX_HCSTRING("writeBoolean","\x89","\x8f","\x2d","\x43"),
	HX_HCSTRING("writeByte","\x87","\x13","\xd7","\x49"),
	HX_HCSTRING("writeBytes","\x0c","\x03","\x5a","\x52"),
	HX_HCSTRING("writeHaxeBytes","\x86","\xd9","\xda","\xf8"),
	HX_HCSTRING("writeDouble","\x50","\x7d","\xc4","\xc7"),
	HX_HCSTRING("writeFile","\xfb","\xc2","\x6f","\x4c"),
	HX_HCSTRING("writeFloat","\x3d","\xc0","\x58","\x97"),
	HX_HCSTRING("writeInt","\x50","\x6d","\xf0","\x23"),
	HX_HCSTRING("writeShort","\x1d","\x7f","\xe9","\x10"),
	HX_HCSTRING("writeUnsignedInt","\x5b","\xd4","\x70","\x16"),
	HX_HCSTRING("writeUTF","\x88","\x71","\xf9","\x23"),
	HX_HCSTRING("writeUTFBytes","\xc3","\x79","\x7b","\xda"),
	HX_HCSTRING("get_bytesAvailable","\xa7","\x2c","\x37","\x37"),
	HX_HCSTRING("get_byteLength","\x57","\xa6","\x01","\xed"),
	HX_HCSTRING("get_endian","\x64","\x08","\x10","\xeb"),
	HX_HCSTRING("set_endian","\xd8","\xa6","\x8d","\xee"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_overwrite_file,"nme_byte_array_overwrite_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_byte_array_read_file,"nme_byte_array_read_file");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_lzma_encode,"nme_lzma_encode");
	HX_MARK_MEMBER_NAME(ByteArray_obj::nme_lzma_decode,"nme_lzma_decode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArray_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_bytes,"_double_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_double_of_bytes,"_double_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_bytes,"_float_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::_float_of_bytes,"_float_of_bytes");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_byte_array_overwrite_file,"nme_byte_array_overwrite_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_byte_array_read_file,"nme_byte_array_read_file");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_lzma_encode,"nme_lzma_encode");
	HX_VISIT_MEMBER_NAME(ByteArray_obj::nme_lzma_decode,"nme_lzma_decode");
};

#endif

hx::Class ByteArray_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("readFile","\xf2","\xa8","\xb3","\x6b"),
	HX_HCSTRING("_double_bytes","\x5c","\x30","\xd8","\x56"),
	HX_HCSTRING("_double_of_bytes","\xb2","\xc0","\x4a","\x2d"),
	HX_HCSTRING("_float_bytes","\x49","\xe0","\x15","\x92"),
	HX_HCSTRING("_float_of_bytes","\xe5","\x02","\x2c","\x1f"),
	HX_HCSTRING("nme_byte_array_overwrite_file","\xf4","\x88","\xb6","\x2e"),
	HX_HCSTRING("nme_byte_array_read_file","\x41","\x24","\x66","\x10"),
	HX_HCSTRING("nme_lzma_encode","\xda","\xac","\x7a","\xb9"),
	HX_HCSTRING("nme_lzma_decode","\xf2","\x17","\x84","\x24"),
	::String(null()) };

void ByteArray_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.utils.ByteArray","\xac","\x03","\x27","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ByteArray_obj::__GetStatic;
	__mClass->mSetStaticField = &ByteArray_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ByteArray_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void ByteArray_obj::__boot()
{
	_double_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("double_bytes","\x7d","\x9d","\x69","\x74"),(int)2);
	_double_of_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("double_of_bytes","\x31","\x7e","\x6b","\x42"),(int)2);
	_float_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("float_bytes","\x48","\x32","\x0c","\x2c"),(int)2);
	_float_of_bytes= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("float_of_bytes","\x46","\xba","\xcb","\xd5"),(int)2);
	nme_byte_array_overwrite_file= ::nme::Loader_obj::load(HX_HCSTRING("nme_byte_array_overwrite_file","\xf4","\x88","\xb6","\x2e"),(int)2);
	nme_byte_array_read_file= ::nme::Loader_obj::load(HX_HCSTRING("nme_byte_array_read_file","\x41","\x24","\x66","\x10"),(int)1);
	nme_lzma_encode= ::nme::Loader_obj::load(HX_HCSTRING("nme_lzma_encode","\xda","\xac","\x7a","\xb9"),(int)1);
	nme_lzma_decode= ::nme::Loader_obj::load(HX_HCSTRING("nme_lzma_decode","\xf2","\x17","\x84","\x24"),(int)1);
}

} // end namespace nme
} // end namespace utils
