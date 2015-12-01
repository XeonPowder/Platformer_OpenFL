#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_text_Font
#include <nme/text/Font.h>
#endif
#ifndef INCLUDED_nme_text_FontStyle
#include <nme/text/FontStyle.h>
#endif
#ifndef INCLUDED_nme_text_FontType
#include <nme/text/FontType.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
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
namespace text{

Void Font_obj::__construct(::String __o_inFilename,::nme::text::FontStyle inStyle,::nme::text::FontType inType,::String resourceName)
{
HX_STACK_FRAME("nme.text.Font","new",0x63e3a31a,"nme.text.Font.new","nme/text/Font.hx",22,0xe0f9ad36)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inFilename,"inFilename")
HX_STACK_ARG(inStyle,"inStyle")
HX_STACK_ARG(inType,"inType")
HX_STACK_ARG(resourceName,"resourceName")
::String inFilename = __o_inFilename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
{
	HX_STACK_LINE(23)
	bool tmp = (inFilename == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(25)
		::hx::Class tmp1 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		::hx::Class fontClass = tmp1;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(26)
		bool tmp2 = (resourceName != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(26)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(26)
		if ((tmp2)){
			HX_STACK_LINE(26)
			tmp3 = resourceName;
		}
		else{
			HX_STACK_LINE(27)
			::hx::Class tmp4 = fontClass;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(27)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(27)
			if ((tmp5)){
				HX_STACK_LINE(27)
				::hx::Class tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(27)
				tmp3 = ::Reflect_obj::field(tmp6,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));
			}
			else{
				HX_STACK_LINE(28)
				tmp3 = null();
			}
		}
		HX_STACK_LINE(26)
		::String name = tmp3;		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(29)
		bool tmp4 = (name != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(29)
		if ((tmp4)){
			HX_STACK_LINE(31)
			::String tmp5 = name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			::haxe::io::Bytes tmp6 = ::haxe::Resource_obj::getBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(31)
			::nme::utils::ByteArray tmp7 = ::nme::utils::ByteArray_obj::fromBytes(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(31)
			::nme::utils::ByteArray bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(32)
			::nme::utils::ByteArray tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(32)
			Dynamic tmp9 = ::nme::text::Font_obj::loadBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(32)
			Dynamic details = tmp9;		HX_STACK_VAR(details,"details");
			HX_STACK_LINE(33)
			this->fontName = details->__Field(HX_HCSTRING("family_name","\x06","\xfc","\x9d","\x63"), hx::paccDynamic );
			HX_STACK_LINE(34)
			bool tmp10 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(34)
			bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(34)
			if ((tmp10)){
				HX_STACK_LINE(34)
				tmp11 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(34)
				tmp11 = false;
			}
			HX_STACK_LINE(34)
			if ((tmp11)){
				HX_STACK_LINE(36)
				this->fontStyle = ::nme::text::FontStyle_obj::BOLD_ITALIC;
			}
			else{
				HX_STACK_LINE(38)
				bool tmp12 = details->__Field(HX_HCSTRING("is_bold","\x3a","\xd1","\x84","\xfd"), hx::paccDynamic );		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(38)
				if ((tmp12)){
					HX_STACK_LINE(40)
					this->fontStyle = ::nme::text::FontStyle_obj::BOLD;
				}
				else{
					HX_STACK_LINE(42)
					bool tmp13 = details->__Field(HX_HCSTRING("is_italic","\xe5","\x95","\x88","\xab"), hx::paccDynamic );		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(42)
					if ((tmp13)){
						HX_STACK_LINE(44)
						this->fontStyle = ::nme::text::FontStyle_obj::ITALIC;
					}
					else{
						HX_STACK_LINE(48)
						this->fontStyle = ::nme::text::FontStyle_obj::REGULAR;
					}
				}
			}
			HX_STACK_LINE(50)
			this->fontType = ::nme::text::FontType_obj::EMBEDDED;
			HX_STACK_LINE(51)
			bool tmp12 = (resourceName != null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(51)
			if ((tmp12)){
				HX_STACK_LINE(52)
				::nme::utils::ByteArray tmp13 = bytes;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(52)
				::nme::text::Font_obj::registerFontData(hx::ObjectPtr<OBJ_>(this),tmp13);
			}
		}
		else{
			HX_STACK_LINE(56)
			::hx::Class tmp5 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(56)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::String className = tmp6;		HX_STACK_VAR(className,"className");
			HX_STACK_LINE(57)
			::String tmp7 = className.split(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"))->pop();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(57)
			this->fontName = tmp7;
			HX_STACK_LINE(58)
			this->fontStyle = ::nme::text::FontStyle_obj::REGULAR;
			HX_STACK_LINE(59)
			this->fontType = ::nme::text::FontType_obj::EMBEDDED;
		}
	}
	else{
		HX_STACK_LINE(64)
		this->fontName = inFilename;
		HX_STACK_LINE(65)
		bool tmp1 = (inStyle == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		::nme::text::FontStyle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(65)
			tmp2 = ::nme::text::FontStyle_obj::REGULAR;
		}
		else{
			HX_STACK_LINE(65)
			tmp2 = inStyle;
		}
		HX_STACK_LINE(65)
		this->fontStyle = tmp2;
		HX_STACK_LINE(66)
		bool tmp3 = (inType == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		::nme::text::FontType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		if ((tmp3)){
			HX_STACK_LINE(66)
			tmp4 = ::nme::text::FontType_obj::EMBEDDED;
		}
		else{
			HX_STACK_LINE(66)
			tmp4 = inType;
		}
		HX_STACK_LINE(66)
		this->fontType = tmp4;
	}
}
;
	return null();
}

//Font_obj::~Font_obj() { }

Dynamic Font_obj::__CreateEmpty() { return  new Font_obj; }
hx::ObjectPtr< Font_obj > Font_obj::__new(::String __o_inFilename,::nme::text::FontStyle inStyle,::nme::text::FontType inType,::String resourceName)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(__o_inFilename,inStyle,inType,resourceName);
	return _result_;}

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Font_obj > _result_ = new Font_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

::String Font_obj::toString( ){
	HX_STACK_FRAME("nme.text.Font","toString",0xdea6dbb2,"nme.text.Font.toString","nme/text/Font.hx",71,0xe0f9ad36)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	::String tmp = this->fontName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	::String tmp1 = (HX_HCSTRING("{ name=","\x2d","\x2a","\xc0","\x5c") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::String tmp2 = (tmp1 + HX_HCSTRING(", style=","\x60","\x5b","\x2d","\x1d"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(72)
	::nme::text::FontStyle tmp3 = this->fontStyle;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	::String tmp5 = (tmp2 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(72)
	::String tmp6 = (tmp5 + HX_HCSTRING(", type=","\x4f","\x65","\xe7","\x0b"));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(72)
	::nme::text::FontType tmp7 = this->fontType;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(72)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(72)
	::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(72)
	::String tmp10 = (tmp9 + HX_HCSTRING(" }","\x5d","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(72)
	return tmp10;
}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,toString,return )

Array< ::Dynamic > Font_obj::nmeRegisteredFonts;

Array< ::Dynamic > Font_obj::nmeDeviceFonts;

Array< ::Dynamic > Font_obj::enumerateFonts( hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
	HX_STACK_FRAME("nme.text.Font","enumerateFonts",0x829f5d86,"nme.text.Font.enumerateFonts","nme/text/Font.hx",76,0xe0f9ad36)
	HX_STACK_ARG(enumerateDeviceFonts,"enumerateDeviceFonts")
{
		HX_STACK_LINE(77)
		Array< ::Dynamic > result = ::nme::text::Font_obj::nmeRegisteredFonts->copy();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(78)
		bool tmp = enumerateDeviceFonts;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(78)
		if ((tmp)){
			HX_STACK_LINE(80)
			bool tmp1 = (::nme::text::Font_obj::nmeDeviceFonts == null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(80)
			if ((tmp1)){
				HX_STACK_LINE(82)
				::nme::text::Font_obj::nmeDeviceFonts = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(83)
				Array< ::Dynamic > styles = Array_obj< ::Dynamic >::__new().Add(::nme::text::FontStyle_obj::BOLD).Add(::nme::text::FontStyle_obj::BOLD_ITALIC).Add(::nme::text::FontStyle_obj::ITALIC).Add(::nme::text::FontStyle_obj::REGULAR);		HX_STACK_VAR(styles,"styles");

				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_3_1,Array< ::Dynamic >,styles)
				int __ArgCount() const { return 2; }
				Void run(::String name,int style){
					HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","nme/text/Font.hx",84,0xe0f9ad36)
					HX_STACK_ARG(name,"name")
					HX_STACK_ARG(style,"style")
					{
						HX_STACK_LINE(84)
						::String tmp2 = name;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(84)
						::nme::text::FontStyle tmp3 = styles->__get(style).StaticCast< ::nme::text::FontStyle >();		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(84)
						::nme::text::Font tmp4 = ::nme::text::Font_obj::__new(tmp2,tmp3,::nme::text::FontType_obj::DEVICE,null());		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(84)
						::nme::text::Font_obj::nmeDeviceFonts->push(tmp4);
					}
					return null();
				}
				HX_END_LOCAL_FUNC2((void))

				HX_STACK_LINE(84)
				::nme::text::Font_obj::nme_font_iterate_device_fonts( Dynamic(new _Function_3_1(styles)));
			}
			HX_STACK_LINE(86)
			result = result->concat(::nme::text::Font_obj::nmeDeviceFonts);
		}
		HX_STACK_LINE(89)
		return result;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

Dynamic Font_obj::load( ::String inFilename){
	HX_STACK_FRAME("nme.text.Font","load",0x02002a2c,"nme.text.Font.load","nme/text/Font.hx",93,0xe0f9ad36)
	HX_STACK_ARG(inFilename,"inFilename")
	HX_STACK_LINE(94)
	::String tmp = inFilename;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = (int)20480;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	Dynamic tmp2 = ::nme::text::Font_obj::freetype_import_font(tmp,null(),tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	Dynamic result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(95)
	Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,load,return )

Dynamic Font_obj::loadBytes( ::nme::utils::ByteArray inBytes){
	HX_STACK_FRAME("nme.text.Font","loadBytes",0xa3a0ee9f,"nme.text.Font.loadBytes","nme/text/Font.hx",99,0xe0f9ad36)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_LINE(100)
	int tmp = (int)20480;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	::nme::utils::ByteArray tmp1 = inBytes;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	Dynamic tmp2 = ::nme::text::Font_obj::freetype_import_font(HX_HCSTRING("","\x00","\x00","\x00","\x00"),null(),tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	Dynamic result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(101)
	Dynamic tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(101)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadBytes,return )

Void Font_obj::registerFontData( ::nme::text::Font instance,::nme::utils::ByteArray inBytes){
{
		HX_STACK_FRAME("nme.text.Font","registerFontData",0xb307f222,"nme.text.Font.registerFontData","nme/text/Font.hx",106,0xe0f9ad36)
		HX_STACK_ARG(instance,"instance")
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(107)
		::nme::text::Font tmp = instance;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(107)
		::String tmp2 = (HX_HCSTRING("Register ","\x3d","\xd0","\xe4","\x5c") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		Dynamic tmp3 = hx::SourceInfo(HX_HCSTRING("Font.hx","\x2f","\x58","\x5f","\x63"),107,HX_HCSTRING("nme.text.Font","\x28","\xce","\x21","\x0d"),HX_HCSTRING("registerFontData","\x1c","\x71","\xa4","\xc3"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(107)
		::haxe::Log_obj::trace(tmp2,tmp3);
		HX_STACK_LINE(108)
		::String tmp4 = instance->fontName;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(108)
		::nme::utils::ByteArray tmp5 = inBytes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(108)
		::nme::text::Font_obj::nme_font_register_font(tmp4,tmp5);
		HX_STACK_LINE(109)
		::nme::text::Font tmp6 = instance;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(109)
		::nme::text::Font_obj::nmeRegisteredFonts->push(tmp6);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Font_obj,registerFontData,(void))

Void Font_obj::registerFont( ::hx::Class font){
{
		HX_STACK_FRAME("nme.text.Font","registerFont",0xbeb0a3d8,"nme.text.Font.registerFont","nme/text/Font.hx",114,0xe0f9ad36)
		HX_STACK_ARG(font,"font")
		HX_STACK_LINE(115)
		::hx::Class tmp = font;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(115)
		::nme::text::Font tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00")).Add(null()).Add(null()));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(115)
		::nme::text::Font instance = tmp1;		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(116)
		bool tmp2 = (instance != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(118)
			::hx::Class tmp3 = font;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(118)
			bool tmp4 = ::Reflect_obj::hasField(tmp3,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(118)
			if ((tmp4)){
				HX_STACK_LINE(119)
				::String tmp5 = instance->fontName;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(119)
				::hx::Class tmp6 = font;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(119)
				Dynamic tmp7 = ::Reflect_obj::field(tmp6,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(119)
				::haxe::io::Bytes tmp8 = ::haxe::Resource_obj::getBytes(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(119)
				::nme::utils::ByteArray tmp9 = ::nme::utils::ByteArray_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(119)
				::nme::text::Font_obj::nme_font_register_font(tmp5,tmp9);
			}
			HX_STACK_LINE(121)
			::nme::text::Font tmp5 = instance;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(121)
			::nme::text::Font_obj::nmeRegisteredFonts->push(tmp5);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

bool Font_obj::get_useNative( ){
	HX_STACK_FRAME("nme.text.Font","get_useNative",0xbbef6c4f,"nme.text.Font.get_useNative","nme/text/Font.hx",125,0xe0f9ad36)
	HX_STACK_LINE(125)
	bool tmp = ::nme::text::Font_obj::nme_font_get_use_native();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Font_obj,get_useNative,return )

bool Font_obj::set_useNative( bool inVal){
	HX_STACK_FRAME("nme.text.Font","set_useNative",0x00f54e5b,"nme.text.Font.set_useNative","nme/text/Font.hx",126,0xe0f9ad36)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(126)
	bool tmp = inVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	bool tmp1 = ::nme::text::Font_obj::nme_font_set_use_native(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,set_useNative,return )

Dynamic Font_obj::nme_font_set_use_native;

Dynamic Font_obj::nme_font_get_use_native;

Dynamic Font_obj::freetype_import_font;

Dynamic Font_obj::nme_font_register_font;

Dynamic Font_obj::nme_font_iterate_device_fonts;


Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
}

Dynamic Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return fontName; }
		if (HX_FIELD_EQ(inName,"fontType") ) { return fontType; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return fontStyle; }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"useNative") ) { if (inCallProp != hx::paccNever) { outValue = get_useNative(); return true; } }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { outValue = registerFont_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_useNative") ) { outValue = get_useNative_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_useNative") ) { outValue = set_useNative_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeDeviceFonts") ) { outValue = nmeDeviceFonts; return true;  }
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { outValue = enumerateFonts_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFontData") ) { outValue = registerFontData_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeRegisteredFonts") ) { outValue = nmeRegisteredFonts; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { outValue = freetype_import_font; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_font_register_font") ) { outValue = nme_font_register_font; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_font_set_use_native") ) { outValue = nme_font_set_use_native; return true;  }
		if (HX_FIELD_EQ(inName,"nme_font_get_use_native") ) { outValue = nme_font_get_use_native; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_font_iterate_device_fonts") ) { outValue = nme_font_iterate_device_fonts; return true;  }
	}
	return false;
}

Dynamic Font_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast< ::nme::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast< ::nme::text::FontStyle >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"useNative") ) { if (inCallProp != hx::paccNever)  ioValue = set_useNative(ioValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeDeviceFonts") ) { nmeDeviceFonts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nmeRegisteredFonts") ) { nmeRegisteredFonts=ioValue.Cast< Array< ::Dynamic > >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { freetype_import_font=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_font_register_font") ) { nme_font_register_font=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_font_set_use_native") ) { nme_font_set_use_native=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_font_get_use_native") ) { nme_font_get_use_native=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_font_iterate_device_fonts") ) { nme_font_iterate_device_fonts=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"));
	outFields->push(HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Font_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsObject /*::nme::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f")},
	{hx::fsObject /*::nme::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::nmeRegisteredFonts,HX_HCSTRING("nmeRegisteredFonts","\x3c","\xa2","\x77","\x80")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::nmeDeviceFonts,HX_HCSTRING("nmeDeviceFonts","\xa8","\x05","\xfa","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::nme_font_set_use_native,HX_HCSTRING("nme_font_set_use_native","\x83","\x87","\xad","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::nme_font_get_use_native,HX_HCSTRING("nme_font_get_use_native","\x0f","\x9f","\x8d","\xcb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::freetype_import_font,HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::nme_font_register_font,HX_HCSTRING("nme_font_register_font","\x54","\x17","\xcc","\x90")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::nme_font_iterate_device_fonts,HX_HCSTRING("nme_font_iterate_device_fonts","\xf7","\x28","\x23","\x2e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"),
	HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::nmeRegisteredFonts,"nmeRegisteredFonts");
	HX_MARK_MEMBER_NAME(Font_obj::nmeDeviceFonts,"nmeDeviceFonts");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_set_use_native,"nme_font_set_use_native");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_get_use_native,"nme_font_get_use_native");
	HX_MARK_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_register_font,"nme_font_register_font");
	HX_MARK_MEMBER_NAME(Font_obj::nme_font_iterate_device_fonts,"nme_font_iterate_device_fonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::nmeRegisteredFonts,"nmeRegisteredFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::nmeDeviceFonts,"nmeDeviceFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_set_use_native,"nme_font_set_use_native");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_get_use_native,"nme_font_get_use_native");
	HX_VISIT_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_register_font,"nme_font_register_font");
	HX_VISIT_MEMBER_NAME(Font_obj::nme_font_iterate_device_fonts,"nme_font_iterate_device_fonts");
};

#endif

hx::Class Font_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nmeRegisteredFonts","\x3c","\xa2","\x77","\x80"),
	HX_HCSTRING("nmeDeviceFonts","\xa8","\x05","\xfa","\x21"),
	HX_HCSTRING("enumerateFonts","\x00","\x4a","\xcc","\xfc"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("registerFontData","\x1c","\x71","\xa4","\xc3"),
	HX_HCSTRING("registerFont","\xd2","\x9d","\xaf","\xbf"),
	HX_HCSTRING("get_useNative","\x15","\x2d","\x0b","\x9a"),
	HX_HCSTRING("set_useNative","\x21","\x0f","\x11","\xdf"),
	HX_HCSTRING("nme_font_set_use_native","\x83","\x87","\xad","\xeb"),
	HX_HCSTRING("nme_font_get_use_native","\x0f","\x9f","\x8d","\xcb"),
	HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69"),
	HX_HCSTRING("nme_font_register_font","\x54","\x17","\xcc","\x90"),
	HX_HCSTRING("nme_font_iterate_device_fonts","\xf7","\x28","\x23","\x2e"),
	::String(null()) };

void Font_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.text.Font","\x28","\xce","\x21","\x0d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
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

void Font_obj::__boot()
{
	nmeRegisteredFonts= Array_obj< ::Dynamic >::__new();
	nme_font_set_use_native= ::nme::Loader_obj::load(HX_HCSTRING("nme_font_set_use_native","\x83","\x87","\xad","\xeb"),(int)1);
	nme_font_get_use_native= ::nme::Loader_obj::load(HX_HCSTRING("nme_font_get_use_native","\x0f","\x9f","\x8d","\xcb"),(int)0);
	freetype_import_font= ::nme::Loader_obj::load(HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69"),(int)4);
	nme_font_register_font= ::nme::Loader_obj::load(HX_HCSTRING("nme_font_register_font","\x54","\x17","\xcc","\x90"),(int)2);
	nme_font_iterate_device_fonts= ::nme::Loader_obj::load(HX_HCSTRING("nme_font_iterate_device_fonts","\xf7","\x28","\x23","\x2e"),(int)1);
}

} // end namespace nme
} // end namespace text
