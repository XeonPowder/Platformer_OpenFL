#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_text_AntiAliasType
#include <nme/text/AntiAliasType.h>
#endif
#ifndef INCLUDED_nme_text_GridFitType
#include <nme/text/GridFitType.h>
#endif
#ifndef INCLUDED_nme_text_TextField
#include <nme/text/TextField.h>
#endif
#ifndef INCLUDED_nme_text_TextFieldAutoSize
#include <nme/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_nme_text_TextFieldType
#include <nme/text/TextFieldType.h>
#endif
#ifndef INCLUDED_nme_text_TextFormat
#include <nme/text/TextFormat.h>
#endif
#ifndef INCLUDED_nme_text_TextLineMetrics
#include <nme/text/TextLineMetrics.h>
#endif
namespace nme{
namespace text{

Void TextField_obj::__construct()
{
HX_STACK_FRAME("nme.text.TextField","new",0x7397ecc6,"nme.text.TextField.new","nme/text/TextField.hx",39,0xbed4b9ca)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(40)
	Dynamic tmp = ::nme::text::TextField_obj::nme_text_field_create();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Dynamic handle = tmp;		HX_STACK_VAR(handle,"handle");
	HX_STACK_LINE(41)
	Dynamic tmp1 = handle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(41)
	super::__construct(tmp1,HX_HCSTRING("TextField","\xad","\x04","\x54","\x3b"));
	HX_STACK_LINE(42)
	this->gridFitType = ::nme::text::GridFitType_obj::PIXEL;
	HX_STACK_LINE(43)
	this->sharpness = (int)0;
}
;
	return null();
}

//TextField_obj::~TextField_obj() { }

Dynamic TextField_obj::__CreateEmpty() { return  new TextField_obj; }
hx::ObjectPtr< TextField_obj > TextField_obj::__new()
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Dynamic TextField_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextField_obj > _result_ = new TextField_obj();
	_result_->__construct();
	return _result_;}

Void TextField_obj::appendText( ::String newText){
{
		HX_STACK_FRAME("nme.text.TextField","appendText",0xe6d6ac01,"nme.text.TextField.appendText","nme/text/TextField.hx",47,0xbed4b9ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newText,"newText")
		HX_STACK_LINE(48)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::String tmp2 = ::nme::text::TextField_obj::nme_text_field_get_text(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		::String tmp3 = newText;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(48)
		::nme::text::TextField_obj::nme_text_field_set_text(tmp,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,appendText,(void))

int TextField_obj::getLineOffset( int lineIndex){
	HX_STACK_FRAME("nme.text.TextField","getLineOffset",0xedf7c6c3,"nme.text.TextField.getLineOffset","nme/text/TextField.hx",52,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(53)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	int tmp1 = lineIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	int tmp2 = ::nme::text::TextField_obj::nme_text_field_get_line_offset(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineOffset,return )

::String TextField_obj::getLineText( int lineIndex){
	HX_STACK_FRAME("nme.text.TextField","getLineText",0x7b06cfdd,"nme.text.TextField.getLineText","nme/text/TextField.hx",57,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(58)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	int tmp1 = lineIndex;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::String tmp2 = ::nme::text::TextField_obj::nme_text_field_get_line_text(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(58)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineText,return )

::nme::text::TextLineMetrics TextField_obj::getLineMetrics( int lineIndex){
	HX_STACK_FRAME("nme.text.TextField","getLineMetrics",0xa045bd13,"nme.text.TextField.getLineMetrics","nme/text/TextField.hx",62,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lineIndex,"lineIndex")
	HX_STACK_LINE(63)
	::nme::text::TextLineMetrics tmp = ::nme::text::TextLineMetrics_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	::nme::text::TextLineMetrics result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(64)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	int tmp2 = lineIndex;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	::nme::text::TextLineMetrics tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	::nme::text::TextField_obj::nme_text_field_get_line_metrics(tmp1,tmp2,tmp3);
	HX_STACK_LINE(65)
	::nme::text::TextLineMetrics tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(65)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,getLineMetrics,return )

::nme::text::TextFormat TextField_obj::getTextFormat( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("nme.text.TextField","getTextFormat",0xed8f43e0,"nme.text.TextField.getTextFormat","nme/text/TextField.hx",69,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(70)
		::nme::text::TextFormat tmp = ::nme::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::nme::text::TextFormat result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(71)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		::nme::text::TextFormat tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		int tmp3 = beginIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		int tmp4 = endIndex;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		::nme::text::TextField_obj::nme_text_field_get_text_format(tmp1,tmp2,tmp3,tmp4);
		HX_STACK_LINE(72)
		::nme::text::TextFormat tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		return tmp5;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,getTextFormat,return )

Void TextField_obj::setSelection( int beginIndex,int endIndex){
{
		HX_STACK_FRAME("nme.text.TextField","setSelection",0x796edf24,"nme.text.TextField.setSelection","nme/text/TextField.hx",76,0xbed4b9ca)
		HX_STACK_THIS(this)
		HX_STACK_ARG(beginIndex,"beginIndex")
		HX_STACK_ARG(endIndex,"endIndex")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TextField_obj,setSelection,(void))

Void TextField_obj::setTextFormat( ::nme::text::TextFormat format,hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(-1);
int endIndex = __o_endIndex.Default(-1);
	HX_STACK_FRAME("nme.text.TextField","setTextFormat",0x329525ec,"nme.text.TextField.setTextFormat","nme/text/TextField.hx",81,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(82)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		::nme::text::TextFormat tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		int tmp2 = beginIndex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		int tmp3 = endIndex;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		::nme::text::TextField_obj::nme_text_field_set_text_format(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TextField_obj,setTextFormat,(void))

::nme::text::TextFieldAutoSize TextField_obj::get_autoSize( ){
	HX_STACK_FRAME("nme.text.TextField","get_autoSize",0xab976ab3,"nme.text.TextField.get_autoSize","nme/text/TextField.hx",86,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(86)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_auto_size(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	::nme::text::TextFieldAutoSize tmp2 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::text::TextFieldAutoSize >(),tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_autoSize,return )

::nme::text::TextFieldAutoSize TextField_obj::set_autoSize( ::nme::text::TextFieldAutoSize inVal){
	HX_STACK_FRAME("nme.text.TextField","set_autoSize",0xc0908e27,"nme.text.TextField.set_autoSize","nme/text/TextField.hx",87,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(87)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(87)
	::nme::text::TextField_obj::nme_text_field_set_auto_size(tmp,inVal->__Index());
	HX_STACK_LINE(87)
	::nme::text::TextFieldAutoSize tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(87)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_autoSize,return )

bool TextField_obj::get_background( ){
	HX_STACK_FRAME("nme.text.TextField","get_background",0x49922d91,"nme.text.TextField.get_background","nme/text/TextField.hx",88,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_background(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(88)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_background,return )

bool TextField_obj::set_background( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_background",0x69b21605,"nme.text.TextField.set_background","nme/text/TextField.hx",89,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(89)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(89)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	::nme::text::TextField_obj::nme_text_field_set_background(tmp,tmp1);
	HX_STACK_LINE(89)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(89)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_background,return )

int TextField_obj::get_backgroundColor( ){
	HX_STACK_FRAME("nme.text.TextField","get_backgroundColor",0xabb3e612,"nme.text.TextField.get_backgroundColor","nme/text/TextField.hx",90,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_background_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_backgroundColor,return )

int TextField_obj::set_backgroundColor( int inVal){
	HX_STACK_FRAME("nme.text.TextField","set_backgroundColor",0xe850d91e,"nme.text.TextField.set_backgroundColor","nme/text/TextField.hx",91,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(91)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	int tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	::nme::text::TextField_obj::nme_text_field_set_background_color(tmp,tmp1);
	HX_STACK_LINE(91)
	int tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_backgroundColor,return )

bool TextField_obj::get_border( ){
	HX_STACK_FRAME("nme.text.TextField","get_border",0xe072990f,"nme.text.TextField.get_border","nme/text/TextField.hx",92,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(92)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_border(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_border,return )

bool TextField_obj::set_border( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_border",0xe3f03783,"nme.text.TextField.set_border","nme/text/TextField.hx",93,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(93)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(93)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	::nme::text::TextField_obj::nme_text_field_set_border(tmp,tmp1);
	HX_STACK_LINE(93)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(93)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_border,return )

int TextField_obj::get_borderColor( ){
	HX_STACK_FRAME("nme.text.TextField","get_borderColor",0xb96711d4,"nme.text.TextField.get_borderColor","nme/text/TextField.hx",94,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(94)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_border_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_borderColor,return )

int TextField_obj::set_borderColor( int inVal){
	HX_STACK_FRAME("nme.text.TextField","set_borderColor",0xb5328ee0,"nme.text.TextField.set_borderColor","nme/text/TextField.hx",95,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(95)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	int tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(95)
	::nme::text::TextField_obj::nme_text_field_set_border_color(tmp,tmp1);
	HX_STACK_LINE(95)
	int tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(95)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_borderColor,return )

int TextField_obj::get_bottomScrollV( ){
	HX_STACK_FRAME("nme.text.TextField","get_bottomScrollV",0x95f6c63b,"nme.text.TextField.get_bottomScrollV","nme/text/TextField.hx",96,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(96)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_bottom_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_bottomScrollV,return )

::nme::text::TextFormat TextField_obj::get_defaultTextFormat( ){
	HX_STACK_FRAME("nme.text.TextField","get_defaultTextFormat",0x8f3ff8a2,"nme.text.TextField.get_defaultTextFormat","nme/text/TextField.hx",97,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(97)
	::nme::text::TextFormat tmp = ::nme::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::nme::text::TextFormat result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(97)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(97)
	::nme::text::TextFormat tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(97)
	::nme::text::TextField_obj::nme_text_field_get_def_text_format(tmp1,tmp2);
	HX_STACK_LINE(97)
	::nme::text::TextFormat tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(97)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_defaultTextFormat,return )

::nme::text::TextFormat TextField_obj::set_defaultTextFormat( ::nme::text::TextFormat inFormat){
	HX_STACK_FRAME("nme.text.TextField","set_defaultTextFormat",0xe348c6ae,"nme.text.TextField.set_defaultTextFormat","nme/text/TextField.hx",98,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFormat,"inFormat")
	HX_STACK_LINE(98)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	::nme::text::TextFormat tmp1 = inFormat;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	::nme::text::TextField_obj::nme_text_field_set_def_text_format(tmp,tmp1);
	HX_STACK_LINE(98)
	::nme::text::TextFormat tmp2 = inFormat;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_defaultTextFormat,return )

bool TextField_obj::get_displayAsPassword( ){
	HX_STACK_FRAME("nme.text.TextField","get_displayAsPassword",0x6ef5fbcc,"nme.text.TextField.get_displayAsPassword","nme/text/TextField.hx",99,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(99)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_display_as_password(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_displayAsPassword,return )

bool TextField_obj::set_displayAsPassword( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_displayAsPassword",0xc2fec9d8,"nme.text.TextField.set_displayAsPassword","nme/text/TextField.hx",100,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(100)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	::nme::text::TextField_obj::nme_text_field_set_display_as_password(tmp,tmp1);
	HX_STACK_LINE(100)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_displayAsPassword,return )

bool TextField_obj::get_embedFonts( ){
	HX_STACK_FRAME("nme.text.TextField","get_embedFonts",0xb25660ce,"nme.text.TextField.get_embedFonts","nme/text/TextField.hx",101,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(101)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(101)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_embed_fonts(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(101)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_embedFonts,return )

bool TextField_obj::set_embedFonts( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_embedFonts",0xd2764942,"nme.text.TextField.set_embedFonts","nme/text/TextField.hx",102,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(102)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(102)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(102)
	::nme::text::TextField_obj::nme_text_field_set_embed_fonts(tmp,tmp1);
	HX_STACK_LINE(102)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(102)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_embedFonts,return )

::String TextField_obj::get_htmlText( ){
	HX_STACK_FRAME("nme.text.TextField","get_htmlText",0x8c55fa9b,"nme.text.TextField.get_htmlText","nme/text/TextField.hx",103,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(103)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(103)
	::String tmp1 = ::nme::text::TextField_obj::nme_text_field_get_html_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(103)
	::String tmp2 = ::StringTools_obj::replace(tmp1,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"),HX_HCSTRING("<br/>","\x3b","\x61","\x28","\xcd"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(103)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_htmlText,return )

::String TextField_obj::set_htmlText( ::String inText){
	HX_STACK_FRAME("nme.text.TextField","set_htmlText",0xa14f1e0f,"nme.text.TextField.set_htmlText","nme/text/TextField.hx",104,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inText,"inText")
	HX_STACK_LINE(104)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	::String tmp1 = inText;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(104)
	::nme::text::TextField_obj::nme_text_field_set_html_text(tmp,tmp1);
	HX_STACK_LINE(104)
	::String tmp2 = inText;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(104)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_htmlText,return )

int TextField_obj::get_maxChars( ){
	HX_STACK_FRAME("nme.text.TextField","get_maxChars",0x6beeca7c,"nme.text.TextField.get_maxChars","nme/text/TextField.hx",105,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(105)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(105)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_max_chars(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxChars,return )

int TextField_obj::set_maxChars( int inVal){
	HX_STACK_FRAME("nme.text.TextField","set_maxChars",0x80e7edf0,"nme.text.TextField.set_maxChars","nme/text/TextField.hx",106,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(106)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	int tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	::nme::text::TextField_obj::nme_text_field_set_max_chars(tmp,tmp1);
	HX_STACK_LINE(106)
	int tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(106)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_maxChars,return )

int TextField_obj::get_maxScrollH( ){
	HX_STACK_FRAME("nme.text.TextField","get_maxScrollH",0xbe7146fa,"nme.text.TextField.get_maxScrollH","nme/text/TextField.hx",107,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_max_scroll_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(107)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollH,return )

int TextField_obj::get_maxScrollV( ){
	HX_STACK_FRAME("nme.text.TextField","get_maxScrollV",0xbe714708,"nme.text.TextField.get_maxScrollV","nme/text/TextField.hx",108,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(108)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_max_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(108)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_maxScrollV,return )

bool TextField_obj::get_multiline( ){
	HX_STACK_FRAME("nme.text.TextField","get_multiline",0xbc137eaa,"nme.text.TextField.get_multiline","nme/text/TextField.hx",109,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(109)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_multiline(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_multiline,return )

bool TextField_obj::set_multiline( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_multiline",0x011960b6,"nme.text.TextField.set_multiline","nme/text/TextField.hx",110,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(110)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(110)
	::nme::text::TextField_obj::nme_text_field_set_multiline(tmp,tmp1);
	HX_STACK_LINE(110)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(110)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_multiline,return )

int TextField_obj::get_numLines( ){
	HX_STACK_FRAME("nme.text.TextField","get_numLines",0xae2fccbc,"nme.text.TextField.get_numLines","nme/text/TextField.hx",111,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(111)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_num_lines(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_numLines,return )

int TextField_obj::get_scrollH( ){
	HX_STACK_FRAME("nme.text.TextField","get_scrollH",0x81c28618,"nme.text.TextField.get_scrollH","nme/text/TextField.hx",112,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(112)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_scroll_h(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(112)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollH,return )

int TextField_obj::set_scrollH( int inVal){
	HX_STACK_FRAME("nme.text.TextField","set_scrollH",0x8c2f8d24,"nme.text.TextField.set_scrollH","nme/text/TextField.hx",113,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(113)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(113)
	int tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(113)
	::nme::text::TextField_obj::nme_text_field_set_scroll_h(tmp,tmp1);
	HX_STACK_LINE(113)
	int tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(113)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollH,return )

int TextField_obj::get_scrollV( ){
	HX_STACK_FRAME("nme.text.TextField","get_scrollV",0x81c28626,"nme.text.TextField.get_scrollV","nme/text/TextField.hx",114,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_scroll_v(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_scrollV,return )

int TextField_obj::set_scrollV( int inVal){
	HX_STACK_FRAME("nme.text.TextField","set_scrollV",0x8c2f8d32,"nme.text.TextField.set_scrollV","nme/text/TextField.hx",115,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(115)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(115)
	int tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(115)
	::nme::text::TextField_obj::nme_text_field_set_scroll_v(tmp,tmp1);
	HX_STACK_LINE(115)
	int tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(115)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_scrollV,return )

bool TextField_obj::get_selectable( ){
	HX_STACK_FRAME("nme.text.TextField","get_selectable",0xe79f5039,"nme.text.TextField.get_selectable","nme/text/TextField.hx",116,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(116)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_selectable(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(116)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_selectable,return )

bool TextField_obj::set_selectable( bool inSel){
	HX_STACK_FRAME("nme.text.TextField","set_selectable",0x07bf38ad,"nme.text.TextField.set_selectable","nme/text/TextField.hx",117,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inSel,"inSel")
	HX_STACK_LINE(117)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	bool tmp1 = inSel;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(117)
	::nme::text::TextField_obj::nme_text_field_set_selectable(tmp,tmp1);
	HX_STACK_LINE(117)
	bool tmp2 = inSel;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(117)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_selectable,return )

::String TextField_obj::get_text( ){
	HX_STACK_FRAME("nme.text.TextField","get_text",0xc971ba10,"nme.text.TextField.get_text","nme/text/TextField.hx",118,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(118)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(118)
	::String tmp1 = ::nme::text::TextField_obj::nme_text_field_get_text(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_text,return )

::String TextField_obj::set_text( ::String inText){
	HX_STACK_FRAME("nme.text.TextField","set_text",0x77cf1384,"nme.text.TextField.set_text","nme/text/TextField.hx",119,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inText,"inText")
	HX_STACK_LINE(119)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(119)
	::String tmp1 = inText;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	::nme::text::TextField_obj::nme_text_field_set_text(tmp,tmp1);
	HX_STACK_LINE(119)
	::String tmp2 = inText;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_text,return )

int TextField_obj::get_textColor( ){
	HX_STACK_FRAME("nme.text.TextField","get_textColor",0x014bad33,"nme.text.TextField.get_textColor","nme/text/TextField.hx",120,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(120)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	int tmp1 = ::nme::text::TextField_obj::nme_text_field_get_text_color(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(120)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textColor,return )

int TextField_obj::set_textColor( int inCol){
	HX_STACK_FRAME("nme.text.TextField","set_textColor",0x46518f3f,"nme.text.TextField.set_textColor","nme/text/TextField.hx",121,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inCol,"inCol")
	HX_STACK_LINE(121)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	int tmp1 = inCol;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(121)
	::nme::text::TextField_obj::nme_text_field_set_text_color(tmp,tmp1);
	HX_STACK_LINE(121)
	int tmp2 = inCol;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(121)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_textColor,return )

Float TextField_obj::get_textWidth( ){
	HX_STACK_FRAME("nme.text.TextField","get_textWidth",0x8151f1d6,"nme.text.TextField.get_textWidth","nme/text/TextField.hx",122,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(122)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	Float tmp1 = ::nme::text::TextField_obj::nme_text_field_get_text_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textWidth,return )

Float TextField_obj::get_textHeight( ){
	HX_STACK_FRAME("nme.text.TextField","get_textHeight",0x5cb12217,"nme.text.TextField.get_textHeight","nme/text/TextField.hx",123,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	Float tmp1 = ::nme::text::TextField_obj::nme_text_field_get_text_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_textHeight,return )

::nme::text::TextFieldType TextField_obj::get_type( ){
	HX_STACK_FRAME("nme.text.TextField","get_type",0xc980e01d,"nme.text.TextField.get_type","nme/text/TextField.hx",124,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_type(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	::nme::text::TextFieldType tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(124)
	if ((tmp1)){
		HX_STACK_LINE(124)
		tmp2 = ::nme::text::TextFieldType_obj::INPUT;
	}
	else{
		HX_STACK_LINE(124)
		tmp2 = ::nme::text::TextFieldType_obj::DYNAMIC;
	}
	HX_STACK_LINE(124)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_type,return )

::nme::text::TextFieldType TextField_obj::set_type( ::nme::text::TextFieldType inType){
	HX_STACK_FRAME("nme.text.TextField","set_type",0x77de3991,"nme.text.TextField.set_type","nme/text/TextField.hx",125,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inType,"inType")
	HX_STACK_LINE(125)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	bool tmp1 = (inType == ::nme::text::TextFieldType_obj::INPUT);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	::nme::text::TextField_obj::nme_text_field_set_type(tmp,tmp1);
	HX_STACK_LINE(125)
	::nme::text::TextFieldType tmp2 = inType;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(125)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_type,return )

bool TextField_obj::get_wordWrap( ){
	HX_STACK_FRAME("nme.text.TextField","get_wordWrap",0x7cf8ef97,"nme.text.TextField.get_wordWrap","nme/text/TextField.hx",126,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_LINE(126)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(126)
	bool tmp1 = ::nme::text::TextField_obj::nme_text_field_get_word_wrap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(126)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(TextField_obj,get_wordWrap,return )

bool TextField_obj::set_wordWrap( bool inVal){
	HX_STACK_FRAME("nme.text.TextField","set_wordWrap",0x91f2130b,"nme.text.TextField.set_wordWrap","nme/text/TextField.hx",127,0xbed4b9ca)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(127)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(127)
	::nme::text::TextField_obj::nme_text_field_set_word_wrap(tmp,tmp1);
	HX_STACK_LINE(127)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(127)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(TextField_obj,set_wordWrap,return )

Dynamic TextField_obj::nme_text_field_create;

Dynamic TextField_obj::nme_text_field_get_text;

Dynamic TextField_obj::nme_text_field_set_text;

Dynamic TextField_obj::nme_text_field_get_html_text;

Dynamic TextField_obj::nme_text_field_set_html_text;

Dynamic TextField_obj::nme_text_field_get_text_color;

Dynamic TextField_obj::nme_text_field_set_text_color;

Dynamic TextField_obj::nme_text_field_get_selectable;

Dynamic TextField_obj::nme_text_field_set_selectable;

Dynamic TextField_obj::nme_text_field_get_display_as_password;

Dynamic TextField_obj::nme_text_field_set_display_as_password;

Dynamic TextField_obj::nme_text_field_get_def_text_format;

Dynamic TextField_obj::nme_text_field_set_def_text_format;

Dynamic TextField_obj::nme_text_field_get_auto_size;

Dynamic TextField_obj::nme_text_field_set_auto_size;

Dynamic TextField_obj::nme_text_field_get_type;

Dynamic TextField_obj::nme_text_field_set_type;

Dynamic TextField_obj::nme_text_field_get_multiline;

Dynamic TextField_obj::nme_text_field_set_multiline;

Dynamic TextField_obj::nme_text_field_get_word_wrap;

Dynamic TextField_obj::nme_text_field_set_word_wrap;

Dynamic TextField_obj::nme_text_field_get_border;

Dynamic TextField_obj::nme_text_field_set_border;

Dynamic TextField_obj::nme_text_field_get_border_color;

Dynamic TextField_obj::nme_text_field_set_border_color;

Dynamic TextField_obj::nme_text_field_get_background;

Dynamic TextField_obj::nme_text_field_set_background;

Dynamic TextField_obj::nme_text_field_get_background_color;

Dynamic TextField_obj::nme_text_field_set_background_color;

Dynamic TextField_obj::nme_text_field_get_text_width;

Dynamic TextField_obj::nme_text_field_get_text_height;

Dynamic TextField_obj::nme_text_field_get_text_format;

Dynamic TextField_obj::nme_text_field_set_text_format;

Dynamic TextField_obj::nme_text_field_get_max_scroll_v;

Dynamic TextField_obj::nme_text_field_get_max_scroll_h;

Dynamic TextField_obj::nme_text_field_get_bottom_scroll_v;

Dynamic TextField_obj::nme_text_field_get_scroll_h;

Dynamic TextField_obj::nme_text_field_set_scroll_h;

Dynamic TextField_obj::nme_text_field_get_scroll_v;

Dynamic TextField_obj::nme_text_field_set_scroll_v;

Dynamic TextField_obj::nme_text_field_get_num_lines;

Dynamic TextField_obj::nme_text_field_get_max_chars;

Dynamic TextField_obj::nme_text_field_set_max_chars;

Dynamic TextField_obj::nme_text_field_get_line_text;

Dynamic TextField_obj::nme_text_field_get_line_metrics;

Dynamic TextField_obj::nme_text_field_get_line_offset;

Dynamic TextField_obj::nme_text_field_get_embed_fonts;

Dynamic TextField_obj::nme_text_field_set_embed_fonts;


TextField_obj::TextField_obj()
{
}

void TextField_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextField);
	HX_MARK_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_MARK_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_MARK_MEMBER_NAME(gridFitType,"gridFitType");
	HX_MARK_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_MARK_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_MARK_MEMBER_NAME(numLines,"numLines");
	HX_MARK_MEMBER_NAME(sharpness,"sharpness");
	HX_MARK_MEMBER_NAME(textHeight,"textHeight");
	HX_MARK_MEMBER_NAME(textWidth,"textWidth");
	::nme::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextField_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(antiAliasType,"antiAliasType");
	HX_VISIT_MEMBER_NAME(bottomScrollV,"bottomScrollV");
	HX_VISIT_MEMBER_NAME(gridFitType,"gridFitType");
	HX_VISIT_MEMBER_NAME(maxScrollH,"maxScrollH");
	HX_VISIT_MEMBER_NAME(maxScrollV,"maxScrollV");
	HX_VISIT_MEMBER_NAME(numLines,"numLines");
	HX_VISIT_MEMBER_NAME(sharpness,"sharpness");
	HX_VISIT_MEMBER_NAME(textHeight,"textHeight");
	HX_VISIT_MEMBER_NAME(textWidth,"textWidth");
	::nme::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextField_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp != hx::paccNever) return get_text(); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp != hx::paccNever) return get_type(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp != hx::paccNever) return get_border(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp != hx::paccNever) return get_scrollH(); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp != hx::paccNever) return get_scrollV(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp != hx::paccNever) return get_autoSize(); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp != hx::paccNever) return get_htmlText(); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp != hx::paccNever) return get_maxChars(); }
		if (HX_FIELD_EQ(inName,"numLines") ) { return inCallProp != hx::paccNever ? get_numLines() : numLines; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp != hx::paccNever) return get_wordWrap(); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return get_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		if (HX_FIELD_EQ(inName,"set_type") ) { return set_type_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp != hx::paccNever) return get_multiline(); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { return sharpness; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp != hx::paccNever) return get_textColor(); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { return inCallProp != hx::paccNever ? get_textWidth() : textWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp != hx::paccNever) return get_background(); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp != hx::paccNever) return get_embedFonts(); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { return inCallProp != hx::paccNever ? get_maxScrollH() : maxScrollH; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { return inCallProp != hx::paccNever ? get_maxScrollV() : maxScrollV; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp != hx::paccNever) return get_selectable(); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { return inCallProp != hx::paccNever ? get_textHeight() : textHeight; }
		if (HX_FIELD_EQ(inName,"appendText") ) { return appendText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_border") ) { return get_border_dyn(); }
		if (HX_FIELD_EQ(inName,"set_border") ) { return set_border_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp != hx::paccNever) return get_borderColor(); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { return gridFitType; }
		if (HX_FIELD_EQ(inName,"getLineText") ) { return getLineText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollH") ) { return get_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollH") ) { return set_scrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollV") ) { return get_scrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollV") ) { return set_scrollV_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSelection") ) { return setSelection_dyn(); }
		if (HX_FIELD_EQ(inName,"get_autoSize") ) { return get_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"set_autoSize") ) { return set_autoSize_dyn(); }
		if (HX_FIELD_EQ(inName,"get_htmlText") ) { return get_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"set_htmlText") ) { return set_htmlText_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxChars") ) { return get_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxChars") ) { return set_maxChars_dyn(); }
		if (HX_FIELD_EQ(inName,"get_numLines") ) { return get_numLines_dyn(); }
		if (HX_FIELD_EQ(inName,"get_wordWrap") ) { return get_wordWrap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_wordWrap") ) { return set_wordWrap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { return antiAliasType; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { return inCallProp != hx::paccNever ? get_bottomScrollV() : bottomScrollV; }
		if (HX_FIELD_EQ(inName,"getLineOffset") ) { return getLineOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return getTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextFormat") ) { return setTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_multiline") ) { return get_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"set_multiline") ) { return set_multiline_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textColor") ) { return get_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_textColor") ) { return set_textColor_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textWidth") ) { return get_textWidth_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLineMetrics") ) { return getLineMetrics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_background") ) { return get_background_dyn(); }
		if (HX_FIELD_EQ(inName,"set_background") ) { return set_background_dyn(); }
		if (HX_FIELD_EQ(inName,"get_embedFonts") ) { return get_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"set_embedFonts") ) { return set_embedFonts_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollH") ) { return get_maxScrollH_dyn(); }
		if (HX_FIELD_EQ(inName,"get_maxScrollV") ) { return get_maxScrollV_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectable") ) { return get_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectable") ) { return set_selectable_dyn(); }
		if (HX_FIELD_EQ(inName,"get_textHeight") ) { return get_textHeight_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp != hx::paccNever) return get_backgroundColor(); }
		if (HX_FIELD_EQ(inName,"get_borderColor") ) { return get_borderColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_borderColor") ) { return set_borderColor_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp != hx::paccNever) return get_defaultTextFormat(); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp != hx::paccNever) return get_displayAsPassword(); }
		if (HX_FIELD_EQ(inName,"get_bottomScrollV") ) { return get_bottomScrollV_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_backgroundColor") ) { return get_backgroundColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_defaultTextFormat") ) { return get_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_defaultTextFormat") ) { return set_defaultTextFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_displayAsPassword") ) { return get_displayAsPassword_dyn(); }
		if (HX_FIELD_EQ(inName,"set_displayAsPassword") ) { return set_displayAsPassword_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool TextField_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"nme_text_field_create") ) { outValue = nme_text_field_create; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text") ) { outValue = nme_text_field_get_text; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text") ) { outValue = nme_text_field_set_text; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_type") ) { outValue = nme_text_field_get_type; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_type") ) { outValue = nme_text_field_set_type; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_border") ) { outValue = nme_text_field_get_border; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_border") ) { outValue = nme_text_field_set_border; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_scroll_h") ) { outValue = nme_text_field_get_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_scroll_h") ) { outValue = nme_text_field_set_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_scroll_v") ) { outValue = nme_text_field_get_scroll_v; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_scroll_v") ) { outValue = nme_text_field_set_scroll_v; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_html_text") ) { outValue = nme_text_field_get_html_text; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_html_text") ) { outValue = nme_text_field_set_html_text; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_auto_size") ) { outValue = nme_text_field_get_auto_size; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_auto_size") ) { outValue = nme_text_field_set_auto_size; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_multiline") ) { outValue = nme_text_field_get_multiline; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_multiline") ) { outValue = nme_text_field_set_multiline; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_word_wrap") ) { outValue = nme_text_field_get_word_wrap; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_word_wrap") ) { outValue = nme_text_field_set_word_wrap; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_num_lines") ) { outValue = nme_text_field_get_num_lines; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_chars") ) { outValue = nme_text_field_get_max_chars; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_max_chars") ) { outValue = nme_text_field_set_max_chars; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_text") ) { outValue = nme_text_field_get_line_text; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_color") ) { outValue = nme_text_field_get_text_color; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text_color") ) { outValue = nme_text_field_set_text_color; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_selectable") ) { outValue = nme_text_field_get_selectable; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_selectable") ) { outValue = nme_text_field_set_selectable; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_background") ) { outValue = nme_text_field_get_background; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_background") ) { outValue = nme_text_field_set_background; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_width") ) { outValue = nme_text_field_get_text_width; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_height") ) { outValue = nme_text_field_get_text_height; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_format") ) { outValue = nme_text_field_get_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text_format") ) { outValue = nme_text_field_set_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_offset") ) { outValue = nme_text_field_get_line_offset; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_embed_fonts") ) { outValue = nme_text_field_get_embed_fonts; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_embed_fonts") ) { outValue = nme_text_field_set_embed_fonts; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_border_color") ) { outValue = nme_text_field_get_border_color; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_border_color") ) { outValue = nme_text_field_set_border_color; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_scroll_v") ) { outValue = nme_text_field_get_max_scroll_v; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_scroll_h") ) { outValue = nme_text_field_get_max_scroll_h; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_metrics") ) { outValue = nme_text_field_get_line_metrics; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_def_text_format") ) { outValue = nme_text_field_get_def_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_def_text_format") ) { outValue = nme_text_field_set_def_text_format; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_bottom_scroll_v") ) { outValue = nme_text_field_get_bottom_scroll_v; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_background_color") ) { outValue = nme_text_field_get_background_color; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_background_color") ) { outValue = nme_text_field_set_background_color; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_display_as_password") ) { outValue = nme_text_field_get_display_as_password; return true;  }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_display_as_password") ) { outValue = nme_text_field_set_display_as_password; return true;  }
	}
	return false;
}

Dynamic TextField_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp != hx::paccNever) return set_text(inValue); }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp != hx::paccNever) return set_type(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { if (inCallProp != hx::paccNever) return set_border(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scrollH") ) { if (inCallProp != hx::paccNever) return set_scrollH(inValue); }
		if (HX_FIELD_EQ(inName,"scrollV") ) { if (inCallProp != hx::paccNever) return set_scrollV(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"autoSize") ) { if (inCallProp != hx::paccNever) return set_autoSize(inValue); }
		if (HX_FIELD_EQ(inName,"htmlText") ) { if (inCallProp != hx::paccNever) return set_htmlText(inValue); }
		if (HX_FIELD_EQ(inName,"maxChars") ) { if (inCallProp != hx::paccNever) return set_maxChars(inValue); }
		if (HX_FIELD_EQ(inName,"numLines") ) { numLines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wordWrap") ) { if (inCallProp != hx::paccNever) return set_wordWrap(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"multiline") ) { if (inCallProp != hx::paccNever) return set_multiline(inValue); }
		if (HX_FIELD_EQ(inName,"sharpness") ) { sharpness=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { if (inCallProp != hx::paccNever) return set_textColor(inValue); }
		if (HX_FIELD_EQ(inName,"textWidth") ) { textWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { if (inCallProp != hx::paccNever) return set_background(inValue); }
		if (HX_FIELD_EQ(inName,"embedFonts") ) { if (inCallProp != hx::paccNever) return set_embedFonts(inValue); }
		if (HX_FIELD_EQ(inName,"maxScrollH") ) { maxScrollH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxScrollV") ) { maxScrollV=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectable") ) { if (inCallProp != hx::paccNever) return set_selectable(inValue); }
		if (HX_FIELD_EQ(inName,"textHeight") ) { textHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { if (inCallProp != hx::paccNever) return set_borderColor(inValue); }
		if (HX_FIELD_EQ(inName,"gridFitType") ) { gridFitType=inValue.Cast< ::nme::text::GridFitType >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"antiAliasType") ) { antiAliasType=inValue.Cast< ::nme::text::AntiAliasType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottomScrollV") ) { bottomScrollV=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp != hx::paccNever) return set_backgroundColor(inValue); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultTextFormat") ) { if (inCallProp != hx::paccNever) return set_defaultTextFormat(inValue); }
		if (HX_FIELD_EQ(inName,"displayAsPassword") ) { if (inCallProp != hx::paccNever) return set_displayAsPassword(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TextField_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"nme_text_field_create") ) { nme_text_field_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text") ) { nme_text_field_get_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text") ) { nme_text_field_set_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_type") ) { nme_text_field_get_type=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_type") ) { nme_text_field_set_type=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_border") ) { nme_text_field_get_border=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_border") ) { nme_text_field_set_border=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_scroll_h") ) { nme_text_field_get_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_scroll_h") ) { nme_text_field_set_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_scroll_v") ) { nme_text_field_get_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_scroll_v") ) { nme_text_field_set_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_html_text") ) { nme_text_field_get_html_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_html_text") ) { nme_text_field_set_html_text=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_auto_size") ) { nme_text_field_get_auto_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_auto_size") ) { nme_text_field_set_auto_size=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_multiline") ) { nme_text_field_get_multiline=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_multiline") ) { nme_text_field_set_multiline=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_word_wrap") ) { nme_text_field_get_word_wrap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_word_wrap") ) { nme_text_field_set_word_wrap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_num_lines") ) { nme_text_field_get_num_lines=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_chars") ) { nme_text_field_get_max_chars=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_max_chars") ) { nme_text_field_set_max_chars=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_text") ) { nme_text_field_get_line_text=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_color") ) { nme_text_field_get_text_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text_color") ) { nme_text_field_set_text_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_selectable") ) { nme_text_field_get_selectable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_selectable") ) { nme_text_field_set_selectable=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_background") ) { nme_text_field_get_background=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_background") ) { nme_text_field_set_background=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_width") ) { nme_text_field_get_text_width=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_height") ) { nme_text_field_get_text_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_text_format") ) { nme_text_field_get_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_text_format") ) { nme_text_field_set_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_offset") ) { nme_text_field_get_line_offset=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_embed_fonts") ) { nme_text_field_get_embed_fonts=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_embed_fonts") ) { nme_text_field_set_embed_fonts=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_border_color") ) { nme_text_field_get_border_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_border_color") ) { nme_text_field_set_border_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_scroll_v") ) { nme_text_field_get_max_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_max_scroll_h") ) { nme_text_field_get_max_scroll_h=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_line_metrics") ) { nme_text_field_get_line_metrics=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_def_text_format") ) { nme_text_field_get_def_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_def_text_format") ) { nme_text_field_set_def_text_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_get_bottom_scroll_v") ) { nme_text_field_get_bottom_scroll_v=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_background_color") ) { nme_text_field_get_background_color=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_background_color") ) { nme_text_field_set_background_color=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_text_field_get_display_as_password") ) { nme_text_field_get_display_as_password=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_text_field_set_display_as_password") ) { nme_text_field_set_display_as_password=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void TextField_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"));
	outFields->push(HX_HCSTRING("autoSize","\xd0","\x8f","\x79","\x2f"));
	outFields->push(HX_HCSTRING("background","\xee","\x93","\x1d","\x26"));
	outFields->push(HX_HCSTRING("backgroundColor","\x95","\x4e","\x47","\x0d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	outFields->push(HX_HCSTRING("borderColor","\xd7","\x3c","\xd5","\xd6"));
	outFields->push(HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"));
	outFields->push(HX_HCSTRING("defaultTextFormat","\xe5","\xc7","\xe0","\x0a"));
	outFields->push(HX_HCSTRING("displayAsPassword","\x0f","\xcb","\x96","\xea"));
	outFields->push(HX_HCSTRING("embedFonts","\x2b","\xc7","\xe1","\x8e"));
	outFields->push(HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"));
	outFields->push(HX_HCSTRING("htmlText","\xb8","\x1f","\x38","\x10"));
	outFields->push(HX_HCSTRING("maxChars","\x99","\xef","\xd0","\xef"));
	outFields->push(HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"));
	outFields->push(HX_HCSTRING("multiline","\xed","\xd2","\x11","\x9e"));
	outFields->push(HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"));
	outFields->push(HX_HCSTRING("scrollH","\x9b","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("scrollV","\xa9","\x33","\xd8","\x30"));
	outFields->push(HX_HCSTRING("selectable","\x96","\xb6","\x2a","\xc4"));
	outFields->push(HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	outFields->push(HX_HCSTRING("textColor","\x76","\x01","\x4a","\xe3"));
	outFields->push(HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"));
	outFields->push(HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("wordWrap","\xb4","\x14","\xdb","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::text::AntiAliasType*/ ,(int)offsetof(TextField_obj,antiAliasType),HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7")},
	{hx::fsInt,(int)offsetof(TextField_obj,bottomScrollV),HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b")},
	{hx::fsObject /*::nme::text::GridFitType*/ ,(int)offsetof(TextField_obj,gridFitType),HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollH),HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,maxScrollV),HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a")},
	{hx::fsInt,(int)offsetof(TextField_obj,numLines),HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32")},
	{hx::fsFloat,(int)offsetof(TextField_obj,sharpness),HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textHeight),HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39")},
	{hx::fsFloat,(int)offsetof(TextField_obj,textWidth),HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_create,HX_HCSTRING("nme_text_field_create","\xba","\xb2","\x19","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_text,HX_HCSTRING("nme_text_field_get_text","\x74","\xbf","\xb7","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_text,HX_HCSTRING("nme_text_field_set_text","\xe8","\x18","\x15","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_html_text,HX_HCSTRING("nme_text_field_get_html_text","\x1a","\x6b","\xa1","\x25")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_html_text,HX_HCSTRING("nme_text_field_set_html_text","\x26","\x4d","\xa7","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_text_color,HX_HCSTRING("nme_text_field_get_text_color","\x18","\x87","\x8e","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_text_color,HX_HCSTRING("nme_text_field_set_text_color","\x8c","\x6f","\xae","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_selectable,HX_HCSTRING("nme_text_field_get_selectable","\x9d","\x78","\x19","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_selectable,HX_HCSTRING("nme_text_field_set_selectable","\x11","\x61","\x39","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_display_as_password,HX_HCSTRING("nme_text_field_get_display_as_password","\xa4","\x0f","\xde","\xbc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_display_as_password,HX_HCSTRING("nme_text_field_set_display_as_password","\xb0","\x78","\x3f","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_def_text_format,HX_HCSTRING("nme_text_field_get_def_text_format","\xa8","\xf3","\x6d","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_def_text_format,HX_HCSTRING("nme_text_field_set_def_text_format","\xb4","\xe6","\x0a","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_auto_size,HX_HCSTRING("nme_text_field_get_auto_size","\xaa","\x26","\xbc","\xef")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_auto_size,HX_HCSTRING("nme_text_field_set_auto_size","\xb6","\x08","\xc2","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_type,HX_HCSTRING("nme_text_field_get_type","\x81","\xe5","\xc6","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_type,HX_HCSTRING("nme_text_field_set_type","\xf5","\x3e","\x24","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_multiline,HX_HCSTRING("nme_text_field_get_multiline","\xc6","\x6e","\x8b","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_multiline,HX_HCSTRING("nme_text_field_set_multiline","\xd2","\x50","\x91","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_word_wrap,HX_HCSTRING("nme_text_field_get_word_wrap","\x78","\x33","\xe0","\x02")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_word_wrap,HX_HCSTRING("nme_text_field_set_word_wrap","\x84","\x15","\xe6","\x47")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_border,HX_HCSTRING("nme_text_field_get_border","\x73","\xbf","\x4f","\xe1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_border,HX_HCSTRING("nme_text_field_set_border","\xe7","\x5d","\xcd","\xe4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_border_color,HX_HCSTRING("nme_text_field_get_border_color","\x57","\x10","\x91","\xbe")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_border_color,HX_HCSTRING("nme_text_field_set_border_color","\xcb","\xfd","\xd2","\x14")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_background,HX_HCSTRING("nme_text_field_get_background","\xf5","\x55","\x0c","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_background,HX_HCSTRING("nme_text_field_set_background","\x69","\x3e","\x2c","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_background_color,HX_HCSTRING("nme_text_field_get_background_color","\x59","\x74","\xc8","\xce")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_background_color,HX_HCSTRING("nme_text_field_set_background_color","\xcd","\x2b","\x80","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_text_width,HX_HCSTRING("nme_text_field_get_text_width","\xbb","\xcb","\x94","\xed")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_text_height,HX_HCSTRING("nme_text_field_get_text_height","\x92","\xf0","\xec","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_text_format,HX_HCSTRING("nme_text_field_get_text_format","\xe2","\x77","\x2f","\xa6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_text_format,HX_HCSTRING("nme_text_field_set_text_format","\xee","\xf4","\xfa","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_max_scroll_v,HX_HCSTRING("nme_text_field_get_max_scroll_v","\x86","\x12","\x44","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_max_scroll_h,HX_HCSTRING("nme_text_field_get_max_scroll_h","\x78","\x12","\x44","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_bottom_scroll_v,HX_HCSTRING("nme_text_field_get_bottom_scroll_v","\x31","\xe8","\x52","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_scroll_h,HX_HCSTRING("nme_text_field_get_scroll_h","\xbd","\x6a","\xb1","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_scroll_h,HX_HCSTRING("nme_text_field_set_scroll_h","\x31","\x8e","\xaa","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_scroll_v,HX_HCSTRING("nme_text_field_get_scroll_v","\xcb","\x6a","\xb1","\xd7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_scroll_v,HX_HCSTRING("nme_text_field_set_scroll_v","\x3f","\x8e","\xaa","\xec")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_num_lines,HX_HCSTRING("nme_text_field_get_num_lines","\xdf","\x97","\xcf","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_max_chars,HX_HCSTRING("nme_text_field_get_max_chars","\x9b","\x1d","\x0b","\xe2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_max_chars,HX_HCSTRING("nme_text_field_set_max_chars","\xa7","\xff","\x10","\x27")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_line_text,HX_HCSTRING("nme_text_field_get_line_text","\xf1","\x17","\x52","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_line_metrics,HX_HCSTRING("nme_text_field_get_line_metrics","\x7f","\xb9","\x6f","\x27")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_line_offset,HX_HCSTRING("nme_text_field_get_line_offset","\xd7","\x3b","\xb4","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_get_embed_fonts,HX_HCSTRING("nme_text_field_get_embed_fonts","\xb7","\xf9","\x9c","\x73")},
	{hx::fsObject /*Dynamic*/ ,(void *) &TextField_obj::nme_text_field_set_embed_fonts,HX_HCSTRING("nme_text_field_set_embed_fonts","\xc3","\x76","\x68","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("antiAliasType","\x68","\xc4","\xfa","\xe7"),
	HX_HCSTRING("bottomScrollV","\xfe","\xf7","\x87","\x8b"),
	HX_HCSTRING("gridFitType","\x05","\xf3","\x13","\xb4"),
	HX_HCSTRING("maxScrollH","\x57","\xad","\xfc","\x9a"),
	HX_HCSTRING("maxScrollV","\x65","\xad","\xfc","\x9a"),
	HX_HCSTRING("numLines","\xd9","\xf1","\x11","\x32"),
	HX_HCSTRING("sharpness","\x81","\x22","\x25","\x1b"),
	HX_HCSTRING("textHeight","\x74","\x88","\x3c","\x39"),
	HX_HCSTRING("textWidth","\x19","\x46","\x50","\x63"),
	HX_HCSTRING("appendText","\xa7","\xcf","\x05","\x5b"),
	HX_HCSTRING("getLineOffset","\xdd","\xee","\x59","\x91"),
	HX_HCSTRING("getLineText","\x77","\xdd","\x16","\xb0"),
	HX_HCSTRING("getLineMetrics","\xb9","\xab","\xc6","\xf2"),
	HX_HCSTRING("getTextFormat","\xfa","\x6b","\xf1","\x90"),
	HX_HCSTRING("setSelection","\x4a","\xb8","\x6a","\xb2"),
	HX_HCSTRING("setTextFormat","\x06","\x4e","\xf7","\xd5"),
	HX_HCSTRING("get_autoSize","\xd9","\x43","\x93","\xe4"),
	HX_HCSTRING("set_autoSize","\x4d","\x67","\x8c","\xf9"),
	HX_HCSTRING("get_background","\x37","\x1c","\x13","\x9c"),
	HX_HCSTRING("set_background","\xab","\x04","\x33","\xbc"),
	HX_HCSTRING("get_backgroundColor","\xac","\x1d","\x52","\x98"),
	HX_HCSTRING("set_backgroundColor","\xb8","\x10","\xef","\xd4"),
	HX_HCSTRING("get_border","\xb5","\xbc","\xa1","\x54"),
	HX_HCSTRING("set_border","\x29","\x5b","\x1f","\x58"),
	HX_HCSTRING("get_borderColor","\x6e","\xf4","\xb6","\x97"),
	HX_HCSTRING("set_borderColor","\x7a","\x71","\x82","\x93"),
	HX_HCSTRING("get_bottomScrollV","\x55","\x03","\xf8","\x91"),
	HX_HCSTRING("get_defaultTextFormat","\xbc","\xca","\x8e","\x89"),
	HX_HCSTRING("set_defaultTextFormat","\xc8","\x98","\x97","\xdd"),
	HX_HCSTRING("get_displayAsPassword","\xe6","\xcd","\x44","\x69"),
	HX_HCSTRING("set_displayAsPassword","\xf2","\x9b","\x4d","\xbd"),
	HX_HCSTRING("get_embedFonts","\x74","\x4f","\xd7","\x04"),
	HX_HCSTRING("set_embedFonts","\xe8","\x37","\xf7","\x24"),
	HX_HCSTRING("get_htmlText","\xc1","\xd3","\x51","\xc5"),
	HX_HCSTRING("set_htmlText","\x35","\xf7","\x4a","\xda"),
	HX_HCSTRING("get_maxChars","\xa2","\xa3","\xea","\xa4"),
	HX_HCSTRING("set_maxChars","\x16","\xc7","\xe3","\xb9"),
	HX_HCSTRING("get_maxScrollH","\xa0","\x35","\xf2","\x10"),
	HX_HCSTRING("get_maxScrollV","\xae","\x35","\xf2","\x10"),
	HX_HCSTRING("get_multiline","\xc4","\xa6","\x75","\x5f"),
	HX_HCSTRING("set_multiline","\xd0","\x88","\x7b","\xa4"),
	HX_HCSTRING("get_numLines","\xe2","\xa5","\x2b","\xe7"),
	HX_HCSTRING("get_scrollH","\xb2","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollH","\xbe","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_scrollV","\xc0","\x93","\xd2","\xb6"),
	HX_HCSTRING("set_scrollV","\xcc","\x9a","\x3f","\xc1"),
	HX_HCSTRING("get_selectable","\xdf","\x3e","\x20","\x3a"),
	HX_HCSTRING("set_selectable","\x53","\x27","\x40","\x5a"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("get_textColor","\x4d","\xd5","\xad","\xa4"),
	HX_HCSTRING("set_textColor","\x59","\xb7","\xb3","\xe9"),
	HX_HCSTRING("get_textWidth","\xf0","\x19","\xb4","\x24"),
	HX_HCSTRING("get_textHeight","\xbd","\x10","\x32","\xaf"),
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("set_type","\xb7","\x07","\x21","\x7b"),
	HX_HCSTRING("get_wordWrap","\xbd","\xc8","\xf4","\xb5"),
	HX_HCSTRING("set_wordWrap","\x31","\xec","\xed","\xca"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_create,"nme_text_field_create");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_text,"nme_text_field_get_text");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_text,"nme_text_field_set_text");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_html_text,"nme_text_field_get_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_html_text,"nme_text_field_set_html_text");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_text_color,"nme_text_field_get_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_text_color,"nme_text_field_set_text_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_selectable,"nme_text_field_get_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_selectable,"nme_text_field_set_selectable");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_display_as_password,"nme_text_field_get_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_display_as_password,"nme_text_field_set_display_as_password");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_def_text_format,"nme_text_field_get_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_def_text_format,"nme_text_field_set_def_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_auto_size,"nme_text_field_get_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_auto_size,"nme_text_field_set_auto_size");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_type,"nme_text_field_get_type");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_type,"nme_text_field_set_type");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_multiline,"nme_text_field_get_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_multiline,"nme_text_field_set_multiline");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_word_wrap,"nme_text_field_get_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_word_wrap,"nme_text_field_set_word_wrap");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_border,"nme_text_field_get_border");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_border,"nme_text_field_set_border");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_border_color,"nme_text_field_get_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_border_color,"nme_text_field_set_border_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_background,"nme_text_field_get_background");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_background,"nme_text_field_set_background");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_background_color,"nme_text_field_get_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_background_color,"nme_text_field_set_background_color");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_text_width,"nme_text_field_get_text_width");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_text_height,"nme_text_field_get_text_height");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_text_format,"nme_text_field_get_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_text_format,"nme_text_field_set_text_format");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_max_scroll_v,"nme_text_field_get_max_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_max_scroll_h,"nme_text_field_get_max_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_bottom_scroll_v,"nme_text_field_get_bottom_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_scroll_h,"nme_text_field_get_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_scroll_h,"nme_text_field_set_scroll_h");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_scroll_v,"nme_text_field_get_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_scroll_v,"nme_text_field_set_scroll_v");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_num_lines,"nme_text_field_get_num_lines");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_max_chars,"nme_text_field_get_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_max_chars,"nme_text_field_set_max_chars");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_line_text,"nme_text_field_get_line_text");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_line_metrics,"nme_text_field_get_line_metrics");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_line_offset,"nme_text_field_get_line_offset");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_get_embed_fonts,"nme_text_field_get_embed_fonts");
	HX_MARK_MEMBER_NAME(TextField_obj::nme_text_field_set_embed_fonts,"nme_text_field_set_embed_fonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextField_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_create,"nme_text_field_create");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_text,"nme_text_field_get_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_text,"nme_text_field_set_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_html_text,"nme_text_field_get_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_html_text,"nme_text_field_set_html_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_text_color,"nme_text_field_get_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_text_color,"nme_text_field_set_text_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_selectable,"nme_text_field_get_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_selectable,"nme_text_field_set_selectable");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_display_as_password,"nme_text_field_get_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_display_as_password,"nme_text_field_set_display_as_password");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_def_text_format,"nme_text_field_get_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_def_text_format,"nme_text_field_set_def_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_auto_size,"nme_text_field_get_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_auto_size,"nme_text_field_set_auto_size");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_type,"nme_text_field_get_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_type,"nme_text_field_set_type");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_multiline,"nme_text_field_get_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_multiline,"nme_text_field_set_multiline");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_word_wrap,"nme_text_field_get_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_word_wrap,"nme_text_field_set_word_wrap");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_border,"nme_text_field_get_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_border,"nme_text_field_set_border");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_border_color,"nme_text_field_get_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_border_color,"nme_text_field_set_border_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_background,"nme_text_field_get_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_background,"nme_text_field_set_background");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_background_color,"nme_text_field_get_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_background_color,"nme_text_field_set_background_color");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_text_width,"nme_text_field_get_text_width");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_text_height,"nme_text_field_get_text_height");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_text_format,"nme_text_field_get_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_text_format,"nme_text_field_set_text_format");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_max_scroll_v,"nme_text_field_get_max_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_max_scroll_h,"nme_text_field_get_max_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_bottom_scroll_v,"nme_text_field_get_bottom_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_scroll_h,"nme_text_field_get_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_scroll_h,"nme_text_field_set_scroll_h");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_scroll_v,"nme_text_field_get_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_scroll_v,"nme_text_field_set_scroll_v");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_num_lines,"nme_text_field_get_num_lines");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_max_chars,"nme_text_field_get_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_max_chars,"nme_text_field_set_max_chars");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_line_text,"nme_text_field_get_line_text");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_line_metrics,"nme_text_field_get_line_metrics");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_line_offset,"nme_text_field_get_line_offset");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_get_embed_fonts,"nme_text_field_get_embed_fonts");
	HX_VISIT_MEMBER_NAME(TextField_obj::nme_text_field_set_embed_fonts,"nme_text_field_set_embed_fonts");
};

#endif

hx::Class TextField_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_text_field_create","\xba","\xb2","\x19","\xc8"),
	HX_HCSTRING("nme_text_field_get_text","\x74","\xbf","\xb7","\xe8"),
	HX_HCSTRING("nme_text_field_set_text","\xe8","\x18","\x15","\x97"),
	HX_HCSTRING("nme_text_field_get_html_text","\x1a","\x6b","\xa1","\x25"),
	HX_HCSTRING("nme_text_field_set_html_text","\x26","\x4d","\xa7","\x6a"),
	HX_HCSTRING("nme_text_field_get_text_color","\x18","\x87","\x8e","\x6d"),
	HX_HCSTRING("nme_text_field_set_text_color","\x8c","\x6f","\xae","\x8d"),
	HX_HCSTRING("nme_text_field_get_selectable","\x9d","\x78","\x19","\xe9"),
	HX_HCSTRING("nme_text_field_set_selectable","\x11","\x61","\x39","\x09"),
	HX_HCSTRING("nme_text_field_get_display_as_password","\xa4","\x0f","\xde","\xbc"),
	HX_HCSTRING("nme_text_field_set_display_as_password","\xb0","\x78","\x3f","\xbf"),
	HX_HCSTRING("nme_text_field_get_def_text_format","\xa8","\xf3","\x6d","\xf0"),
	HX_HCSTRING("nme_text_field_set_def_text_format","\xb4","\xe6","\x0a","\x2d"),
	HX_HCSTRING("nme_text_field_get_auto_size","\xaa","\x26","\xbc","\xef"),
	HX_HCSTRING("nme_text_field_set_auto_size","\xb6","\x08","\xc2","\x34"),
	HX_HCSTRING("nme_text_field_get_type","\x81","\xe5","\xc6","\xe8"),
	HX_HCSTRING("nme_text_field_set_type","\xf5","\x3e","\x24","\x97"),
	HX_HCSTRING("nme_text_field_get_multiline","\xc6","\x6e","\x8b","\x43"),
	HX_HCSTRING("nme_text_field_set_multiline","\xd2","\x50","\x91","\x88"),
	HX_HCSTRING("nme_text_field_get_word_wrap","\x78","\x33","\xe0","\x02"),
	HX_HCSTRING("nme_text_field_set_word_wrap","\x84","\x15","\xe6","\x47"),
	HX_HCSTRING("nme_text_field_get_border","\x73","\xbf","\x4f","\xe1"),
	HX_HCSTRING("nme_text_field_set_border","\xe7","\x5d","\xcd","\xe4"),
	HX_HCSTRING("nme_text_field_get_border_color","\x57","\x10","\x91","\xbe"),
	HX_HCSTRING("nme_text_field_set_border_color","\xcb","\xfd","\xd2","\x14"),
	HX_HCSTRING("nme_text_field_get_background","\xf5","\x55","\x0c","\x4b"),
	HX_HCSTRING("nme_text_field_set_background","\x69","\x3e","\x2c","\x6b"),
	HX_HCSTRING("nme_text_field_get_background_color","\x59","\x74","\xc8","\xce"),
	HX_HCSTRING("nme_text_field_set_background_color","\xcd","\x2b","\x80","\x9b"),
	HX_HCSTRING("nme_text_field_get_text_width","\xbb","\xcb","\x94","\xed"),
	HX_HCSTRING("nme_text_field_get_text_height","\x92","\xf0","\xec","\xaa"),
	HX_HCSTRING("nme_text_field_get_text_format","\xe2","\x77","\x2f","\xa6"),
	HX_HCSTRING("nme_text_field_set_text_format","\xee","\xf4","\xfa","\xa1"),
	HX_HCSTRING("nme_text_field_get_max_scroll_v","\x86","\x12","\x44","\x19"),
	HX_HCSTRING("nme_text_field_get_max_scroll_h","\x78","\x12","\x44","\x19"),
	HX_HCSTRING("nme_text_field_get_bottom_scroll_v","\x31","\xe8","\x52","\xb0"),
	HX_HCSTRING("nme_text_field_get_scroll_h","\xbd","\x6a","\xb1","\xd7"),
	HX_HCSTRING("nme_text_field_set_scroll_h","\x31","\x8e","\xaa","\xec"),
	HX_HCSTRING("nme_text_field_get_scroll_v","\xcb","\x6a","\xb1","\xd7"),
	HX_HCSTRING("nme_text_field_set_scroll_v","\x3f","\x8e","\xaa","\xec"),
	HX_HCSTRING("nme_text_field_get_num_lines","\xdf","\x97","\xcf","\x92"),
	HX_HCSTRING("nme_text_field_get_max_chars","\x9b","\x1d","\x0b","\xe2"),
	HX_HCSTRING("nme_text_field_set_max_chars","\xa7","\xff","\x10","\x27"),
	HX_HCSTRING("nme_text_field_get_line_text","\xf1","\x17","\x52","\x59"),
	HX_HCSTRING("nme_text_field_get_line_metrics","\x7f","\xb9","\x6f","\x27"),
	HX_HCSTRING("nme_text_field_get_line_offset","\xd7","\x3b","\xb4","\x6b"),
	HX_HCSTRING("nme_text_field_get_embed_fonts","\xb7","\xf9","\x9c","\x73"),
	HX_HCSTRING("nme_text_field_set_embed_fonts","\xc3","\x76","\x68","\x6f"),
	::String(null()) };

void TextField_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.text.TextField","\xd4","\xd1","\xac","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TextField_obj::__GetStatic;
	__mClass->mSetStaticField = &TextField_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextField_obj >;
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

void TextField_obj::__boot()
{
	nme_text_field_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_create","\xba","\xb2","\x19","\xc8"),(int)0);
	nme_text_field_get_text= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_text","\x74","\xbf","\xb7","\xe8"),(int)1);
	nme_text_field_set_text= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_text","\xe8","\x18","\x15","\x97"),(int)2);
	nme_text_field_get_html_text= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_html_text","\x1a","\x6b","\xa1","\x25"),(int)1);
	nme_text_field_set_html_text= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_html_text","\x26","\x4d","\xa7","\x6a"),(int)2);
	nme_text_field_get_text_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_text_color","\x18","\x87","\x8e","\x6d"),(int)1);
	nme_text_field_set_text_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_text_color","\x8c","\x6f","\xae","\x8d"),(int)2);
	nme_text_field_get_selectable= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_selectable","\x9d","\x78","\x19","\xe9"),(int)1);
	nme_text_field_set_selectable= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_selectable","\x11","\x61","\x39","\x09"),(int)2);
	nme_text_field_get_display_as_password= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_display_as_password","\xa4","\x0f","\xde","\xbc"),(int)1);
	nme_text_field_set_display_as_password= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_display_as_password","\xb0","\x78","\x3f","\xbf"),(int)2);
	nme_text_field_get_def_text_format= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_def_text_format","\xa8","\xf3","\x6d","\xf0"),(int)2);
	nme_text_field_set_def_text_format= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_def_text_format","\xb4","\xe6","\x0a","\x2d"),(int)2);
	nme_text_field_get_auto_size= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_auto_size","\xaa","\x26","\xbc","\xef"),(int)1);
	nme_text_field_set_auto_size= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_auto_size","\xb6","\x08","\xc2","\x34"),(int)2);
	nme_text_field_get_type= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_type","\x81","\xe5","\xc6","\xe8"),(int)1);
	nme_text_field_set_type= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_type","\xf5","\x3e","\x24","\x97"),(int)2);
	nme_text_field_get_multiline= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_multiline","\xc6","\x6e","\x8b","\x43"),(int)1);
	nme_text_field_set_multiline= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_multiline","\xd2","\x50","\x91","\x88"),(int)2);
	nme_text_field_get_word_wrap= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_word_wrap","\x78","\x33","\xe0","\x02"),(int)1);
	nme_text_field_set_word_wrap= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_word_wrap","\x84","\x15","\xe6","\x47"),(int)2);
	nme_text_field_get_border= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_border","\x73","\xbf","\x4f","\xe1"),(int)1);
	nme_text_field_set_border= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_border","\xe7","\x5d","\xcd","\xe4"),(int)2);
	nme_text_field_get_border_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_border_color","\x57","\x10","\x91","\xbe"),(int)1);
	nme_text_field_set_border_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_border_color","\xcb","\xfd","\xd2","\x14"),(int)2);
	nme_text_field_get_background= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_background","\xf5","\x55","\x0c","\x4b"),(int)1);
	nme_text_field_set_background= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_background","\x69","\x3e","\x2c","\x6b"),(int)2);
	nme_text_field_get_background_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_background_color","\x59","\x74","\xc8","\xce"),(int)1);
	nme_text_field_set_background_color= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_background_color","\xcd","\x2b","\x80","\x9b"),(int)2);
	nme_text_field_get_text_width= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_text_width","\xbb","\xcb","\x94","\xed"),(int)1);
	nme_text_field_get_text_height= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_text_height","\x92","\xf0","\xec","\xaa"),(int)1);
	nme_text_field_get_text_format= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_text_format","\xe2","\x77","\x2f","\xa6"),(int)4);
	nme_text_field_set_text_format= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_text_format","\xee","\xf4","\xfa","\xa1"),(int)4);
	nme_text_field_get_max_scroll_v= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_max_scroll_v","\x86","\x12","\x44","\x19"),(int)1);
	nme_text_field_get_max_scroll_h= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_max_scroll_h","\x78","\x12","\x44","\x19"),(int)1);
	nme_text_field_get_bottom_scroll_v= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_bottom_scroll_v","\x31","\xe8","\x52","\xb0"),(int)1);
	nme_text_field_get_scroll_h= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_scroll_h","\xbd","\x6a","\xb1","\xd7"),(int)1);
	nme_text_field_set_scroll_h= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_scroll_h","\x31","\x8e","\xaa","\xec"),(int)2);
	nme_text_field_get_scroll_v= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_scroll_v","\xcb","\x6a","\xb1","\xd7"),(int)1);
	nme_text_field_set_scroll_v= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_scroll_v","\x3f","\x8e","\xaa","\xec"),(int)2);
	nme_text_field_get_num_lines= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_num_lines","\xdf","\x97","\xcf","\x92"),(int)1);
	nme_text_field_get_max_chars= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_max_chars","\x9b","\x1d","\x0b","\xe2"),(int)1);
	nme_text_field_set_max_chars= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_max_chars","\xa7","\xff","\x10","\x27"),(int)2);
	nme_text_field_get_line_text= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_line_text","\xf1","\x17","\x52","\x59"),(int)2);
	nme_text_field_get_line_metrics= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_line_metrics","\x7f","\xb9","\x6f","\x27"),(int)3);
	nme_text_field_get_line_offset= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_line_offset","\xd7","\x3b","\xb4","\x6b"),(int)2);
	nme_text_field_get_embed_fonts= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_get_embed_fonts","\xb7","\xf9","\x9c","\x73"),(int)1);
	nme_text_field_set_embed_fonts= ::nme::Loader_obj::load(HX_HCSTRING("nme_text_field_set_embed_fonts","\xc3","\x76","\x68","\x6f"),(int)2);
}

} // end namespace nme
} // end namespace text
