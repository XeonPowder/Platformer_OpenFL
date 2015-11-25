#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack_hscript_Token
#include <haxe/ds/GenericStack_hscript_Token.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_BytesOutput
#include <haxe/io/BytesOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_StringInput
#include <haxe/io/StringInput.h>
#endif
#ifndef INCLUDED_hscript_CType
#include <hscript/CType.h>
#endif
#ifndef INCLUDED_hscript_Const
#include <hscript/Const.h>
#endif
#ifndef INCLUDED_hscript_Error
#include <hscript/Error.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif
namespace hscript{

Void Parser_obj::__construct()
{
HX_STACK_FRAME("hscript.Parser","new",0x4b9f158c,"hscript.Parser.new","hscript/Parser.hx",46,0x98735743)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(77)
	this->uid = (int)0;
	HX_STACK_LINE(101)
	this->line = (int)1;
	HX_STACK_LINE(102)
	this->opChars = HX_HCSTRING("+*/-=!><&|^%~","\xe2","\xec","\xc4","\xdc");
	HX_STACK_LINE(103)
	this->identChars = HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_","\xe0","\xb5","\x3b","\x15");
	HX_STACK_LINE(104)
	Array< ::Dynamic > priorities = Array_obj< ::Dynamic >::__new().Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("%","\x25","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("*","\x2a","\x00","\x00","\x00")).Add(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("+","\x2b","\x00","\x00","\x00")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("<<","\x80","\x34","\x00","\x00")).Add(HX_HCSTRING(">>","\x40","\x36","\x00","\x00")).Add(HX_HCSTRING(">>>","\xfe","\x41","\x2f","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("|","\x7c","\x00","\x00","\x00")).Add(HX_HCSTRING("&","\x26","\x00","\x00","\x00")).Add(HX_HCSTRING("^","\x5e","\x00","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("==","\x60","\x35","\x00","\x00")).Add(HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00")).Add(HX_HCSTRING(">","\x3e","\x00","\x00","\x00")).Add(HX_HCSTRING("<","\x3c","\x00","\x00","\x00")).Add(HX_HCSTRING(">=","\x3f","\x36","\x00","\x00")).Add(HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("&&","\x40","\x21","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("||","\x80","\x6c","\x00","\x00"))).Add(Array_obj< ::String >::__new().Add(HX_HCSTRING("=","\x3d","\x00","\x00","\x00")).Add(HX_HCSTRING("+=","\xb2","\x25","\x00","\x00")).Add(HX_HCSTRING("-=","\x70","\x27","\x00","\x00")).Add(HX_HCSTRING("*=","\xd3","\x24","\x00","\x00")).Add(HX_HCSTRING("/=","\x2e","\x29","\x00","\x00")).Add(HX_HCSTRING("%=","\x78","\x20","\x00","\x00")).Add(HX_HCSTRING("<<=","\xbd","\xbb","\x2d","\x00")).Add(HX_HCSTRING(">>=","\xfd","\x41","\x2f","\x00")).Add(HX_HCSTRING(">>>=","\x7f","\x7c","\x2a","\x29")).Add(HX_HCSTRING("|=","\x41","\x6c","\x00","\x00")).Add(HX_HCSTRING("&=","\x57","\x21","\x00","\x00")).Add(HX_HCSTRING("^=","\x1f","\x52","\x00","\x00")));		HX_STACK_VAR(priorities,"priorities");
	HX_STACK_LINE(117)
	::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	{
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(117)
		::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(117)
		tmp = tmp2;
	}
	HX_STACK_LINE(117)
	this->opPriority = tmp;
	HX_STACK_LINE(118)
	::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		tmp1 = tmp3;
	}
	HX_STACK_LINE(118)
	this->opRightAssoc = tmp1;
	HX_STACK_LINE(119)
	::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		tmp2 = tmp4;
	}
	HX_STACK_LINE(119)
	this->unops = tmp2;
	HX_STACK_LINE(125)
	{
		HX_STACK_LINE(125)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(125)
		int _g = priorities->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			bool tmp3 = (_g1 < _g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			if ((tmp4)){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(125)
			int tmp5 = (_g1)++;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(125)
			int i = tmp5;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(126)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(126)
			Array< ::String > _g3 = priorities->__get(i).StaticCast< Array< ::String > >();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(126)
			while((true)){
				HX_STACK_LINE(126)
				bool tmp6 = (_g2 < _g3->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(126)
				if ((tmp7)){
					HX_STACK_LINE(126)
					break;
				}
				HX_STACK_LINE(126)
				::String tmp8 = _g3->__get(_g2);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(126)
				::String x = tmp8;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(126)
				++(_g2);
				HX_STACK_LINE(127)
				::haxe::ds::StringMap tmp9 = this->opPriority;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(127)
				::String tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(127)
				int tmp11 = i;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(127)
				tmp9->set(tmp10,tmp11);
				HX_STACK_LINE(128)
				bool tmp12 = (i == (int)9);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(128)
				if ((tmp12)){
					HX_STACK_LINE(128)
					::haxe::ds::StringMap tmp13 = this->opRightAssoc;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(128)
					::String tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(128)
					tmp13->set(tmp14,true);
				}
			}
		}
	}
	HX_STACK_LINE(130)
	{
		HX_STACK_LINE(130)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		Array< ::String > _g1 = Array_obj< ::String >::__new().Add(HX_HCSTRING("!","\x21","\x00","\x00","\x00")).Add(HX_HCSTRING("++","\xa0","\x25","\x00","\x00")).Add(HX_HCSTRING("--","\x60","\x27","\x00","\x00")).Add(HX_HCSTRING("-","\x2d","\x00","\x00","\x00")).Add(HX_HCSTRING("~","\x7e","\x00","\x00","\x00"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(130)
		while((true)){
			HX_STACK_LINE(130)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(130)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			if ((tmp4)){
				HX_STACK_LINE(130)
				break;
			}
			HX_STACK_LINE(130)
			::String tmp5 = _g1->__get(_g);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(130)
			::String x = tmp5;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(130)
			++(_g);
			HX_STACK_LINE(131)
			::haxe::ds::StringMap tmp6 = this->unops;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(131)
			::String tmp7 = x;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(131)
			bool tmp8 = (x == HX_HCSTRING("++","\xa0","\x25","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(131)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(131)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(131)
			if ((tmp9)){
				HX_STACK_LINE(131)
				tmp10 = (x == HX_HCSTRING("--","\x60","\x27","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(131)
				tmp10 = true;
			}
			HX_STACK_LINE(131)
			tmp6->set(tmp7,tmp10);
		}
	}
}
;
	return null();
}

//Parser_obj::~Parser_obj() { }

Dynamic Parser_obj::__CreateEmpty() { return  new Parser_obj; }
hx::ObjectPtr< Parser_obj > Parser_obj::__new()
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

Dynamic Parser_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Parser_obj > _result_ = new Parser_obj();
	_result_->__construct();
	return _result_;}

Void Parser_obj::error( ::hscript::Error err,int pmin,int pmax){
{
		HX_STACK_FRAME("hscript.Parser","error",0x9bb1b3f4,"hscript.Parser.error","hscript/Parser.hx",134,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(err,"err")
		HX_STACK_ARG(pmin,"pmin")
		HX_STACK_ARG(pmax,"pmax")
		HX_STACK_LINE(138)
		::hscript::Error tmp = err;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		HX_STACK_DO_THROW(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,error,(void))

Void Parser_obj::invalidChar( int c){
{
		HX_STACK_FRAME("hscript.Parser","invalidChar",0x0ae4fe99,"hscript.Parser.invalidChar","hscript/Parser.hx",143,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(c,"c")
		HX_STACK_LINE(143)
		int tmp = c;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(143)
		::hscript::Error tmp1 = ::hscript::Error_obj::EInvalidChar(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(143)
		::hscript::Error err = tmp1;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(143)
		::hscript::Error tmp2 = err;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(143)
		HX_STACK_DO_THROW(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,invalidChar,(void))

::hscript::Expr Parser_obj::parseString( ::String s){
	HX_STACK_FRAME("hscript.Parser","parseString",0xed832690,"hscript.Parser.parseString","hscript/Parser.hx",146,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(147)
	this->line = (int)1;
	HX_STACK_LINE(148)
	this->uid = (int)0;
	HX_STACK_LINE(149)
	::haxe::io::StringInput tmp = ::haxe::io::StringInput_obj::__new(s);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	::hscript::Expr tmp1 = this->parse(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseString,return )

::hscript::Expr Parser_obj::parse( ::haxe::io::Input s){
	HX_STACK_FRAME("hscript.Parser","parse",0xe5dd785f,"hscript.Parser.parse","hscript/Parser.hx",152,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(159)
	::haxe::ds::GenericStack_hscript_Token tmp = ::haxe::ds::GenericStack_hscript_Token_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	this->tokens = tmp;
	HX_STACK_LINE(163)
	this->_char = (int)-1;
	HX_STACK_LINE(164)
	this->input = s;
	HX_STACK_LINE(165)
	this->ops = Array_obj< bool >::__new();
	HX_STACK_LINE(166)
	this->idents = Array_obj< bool >::__new();
	HX_STACK_LINE(167)
	{
		HX_STACK_LINE(167)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(167)
		::String tmp1 = this->opChars;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		int _g = tmp1.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(167)
		while((true)){
			HX_STACK_LINE(167)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(167)
			if ((tmp3)){
				HX_STACK_LINE(167)
				break;
			}
			HX_STACK_LINE(167)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(167)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(168)
			::String tmp5 = this->opChars;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			Dynamic tmp7 = tmp5.charCodeAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			this->ops[tmp7] = true;
		}
	}
	HX_STACK_LINE(169)
	{
		HX_STACK_LINE(169)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(169)
		::String tmp1 = this->identChars;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(169)
		int _g = tmp1.length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(169)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			if ((tmp3)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(170)
			::String tmp5 = this->identChars;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(170)
			int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(170)
			Dynamic tmp7 = tmp5.charCodeAt(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(170)
			this->idents[tmp7] = true;
		}
	}
	HX_STACK_LINE(171)
	Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(172)
	while((true)){
		HX_STACK_LINE(173)
		::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(173)
		::hscript::Token tk = tmp1;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(174)
		bool tmp2 = (tk == ::hscript::Token_obj::TEof);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(174)
		if ((tmp2)){
			HX_STACK_LINE(174)
			break;
		}
		HX_STACK_LINE(175)
		{
			HX_STACK_LINE(175)
			::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(175)
			::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(175)
			::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(175)
			_this->head = tmp4;
		}
		HX_STACK_LINE(176)
		::hscript::Expr tmp3 = this->parseFullExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		a->push(tmp3);
	}
	HX_STACK_LINE(178)
	bool tmp1 = (a->length == (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	if ((tmp1)){
		HX_STACK_LINE(178)
		tmp2 = a->__get((int)0).StaticCast< ::hscript::Expr >();
	}
	else{
		HX_STACK_LINE(178)
		::hscript::Expr tmp3 = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(178)
		::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(178)
		tmp2 = e;
	}
	HX_STACK_LINE(178)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parse,return )

Dynamic Parser_obj::unexpected( ::hscript::Token tk){
	HX_STACK_FRAME("hscript.Parser","unexpected",0xb7770e25,"hscript.Parser.unexpected","hscript/Parser.hx",181,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tk,"tk")
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		::hscript::Token tmp = tk;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(182)
		::String tmp1 = this->tokenString(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(182)
		::hscript::Error tmp2 = ::hscript::Error_obj::EUnexpected(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		::hscript::Error err = tmp2;		HX_STACK_VAR(err,"err");
		HX_STACK_LINE(182)
		::hscript::Error tmp3 = err;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(183)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,unexpected,return )

Void Parser_obj::push( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","push",0xe0f2532e,"hscript.Parser.push","hscript/Parser.hx",192,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(192)
		::haxe::ds::GenericStack_hscript_Token tmp = this->tokens;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(192)
		::haxe::ds::GenericStack_hscript_Token _this = tmp;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(192)
		::haxe::ds::GenericCell_hscript_Token tmp1 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		_this->head = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,push,(void))

Void Parser_obj::ensure( ::hscript::Token tk){
{
		HX_STACK_FRAME("hscript.Parser","ensure",0x52df3412,"hscript.Parser.ensure","hscript/Parser.hx",196,0x98735743)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tk,"tk")
		HX_STACK_LINE(197)
		::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(197)
		::hscript::Token t = tmp;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(198)
		bool tmp1 = (t != tk);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(198)
			::hscript::Token tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(198)
			this->unexpected(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,ensure,(void))

::hscript::Expr Parser_obj::expr( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","expr",0xd9af3e89,"hscript.Parser.expr","hscript/Parser.hx",201,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(205)
	::hscript::Expr tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(205)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,expr,return )

int Parser_obj::pmin( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmin",0xe0ec3876,"hscript.Parser.pmin","hscript/Parser.hx",213,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(213)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmin,return )

int Parser_obj::pmax( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","pmax",0xe0ec3188,"hscript.Parser.pmax","hscript/Parser.hx",221,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(221)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,pmax,return )

::hscript::Expr Parser_obj::mk( ::hscript::Expr e,Dynamic pmin,Dynamic pmax){
	HX_STACK_FRAME("hscript.Parser","mk",0xd828e3b2,"hscript.Parser.mk","hscript/Parser.hx",225,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_ARG(pmin,"pmin")
	HX_STACK_ARG(pmax,"pmax")
	HX_STACK_LINE(231)
	::hscript::Expr tmp = e;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(231)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,mk,return )

bool Parser_obj::isBlock( ::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","isBlock",0x99f5642f,"hscript.Parser.isBlock","hscript/Parser.hx",235,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(236)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	switch( (int)(e->__Index())){
		case (int)4: case (int)21: case (int)23: {
			HX_STACK_LINE(237)
			tmp = true;
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(238)
				tmp = this->isBlock(tmp2);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				bool tmp2 = (e1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(239)
				if ((tmp2)){
					HX_STACK_LINE(239)
					::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(239)
					::hscript::Expr tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(239)
					tmp = this->isBlock(tmp4);
				}
				else{
					HX_STACK_LINE(239)
					tmp = false;
				}
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(236)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp2;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				bool tmp3 = (e2 != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(240)
				if ((tmp3)){
					HX_STACK_LINE(240)
					::hscript::Expr tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					tmp = this->isBlock(tmp4);
				}
				else{
					HX_STACK_LINE(240)
					::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(240)
					tmp = this->isBlock(tmp4);
				}
			}
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(241)
				tmp = this->isBlock(tmp2);
			}
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(236)
			bool tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(236)
			bool prefix = tmp2;		HX_STACK_VAR(prefix,"prefix");
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				bool tmp3 = prefix;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(242)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(242)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(242)
				if ((tmp5)){
					HX_STACK_LINE(242)
					::hscript::Expr tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(242)
					::hscript::Expr tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(242)
					tmp = this->isBlock(tmp7);
				}
				else{
					HX_STACK_LINE(242)
					tmp = false;
				}
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(243)
				tmp = this->isBlock(tmp2);
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(244)
				tmp = this->isBlock(tmp2);
			}
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(236)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(236)
			::hscript::Expr e1 = tmp1;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				bool tmp2 = (e1 != null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				if ((tmp2)){
					HX_STACK_LINE(245)
					::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(245)
					::hscript::Expr tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(245)
					tmp = this->isBlock(tmp4);
				}
				else{
					HX_STACK_LINE(245)
					tmp = false;
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(246)
			tmp = false;
		}
	}
	HX_STACK_LINE(236)
	return tmp;
	HX_STACK_LINE(236)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,isBlock,return )

::hscript::Expr Parser_obj::parseFullExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseFullExpr",0x2c8eb1e3,"hscript.Parser.parseFullExpr","hscript/Parser.hx",250,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(251)
	::hscript::Expr tmp = this->parseExpr();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	::hscript::Expr e = tmp;		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(252)
	::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(252)
	::hscript::Token tk = tmp1;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(253)
	bool tmp2 = (tk != ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(253)
	if ((tmp2)){
		HX_STACK_LINE(253)
		tmp3 = (tk != ::hscript::Token_obj::TEof);
	}
	else{
		HX_STACK_LINE(253)
		tmp3 = false;
	}
	HX_STACK_LINE(253)
	if ((tmp3)){
		HX_STACK_LINE(254)
		::hscript::Expr tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(254)
		bool tmp5 = this->isBlock(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(254)
		if ((tmp5)){
			HX_STACK_LINE(255)
			::haxe::ds::GenericStack_hscript_Token tmp6 = this->tokens;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(255)
			::haxe::ds::GenericStack_hscript_Token _this = tmp6;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(255)
			::haxe::ds::GenericCell_hscript_Token tmp7 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(255)
			_this->head = tmp7;
		}
		else{
			HX_STACK_LINE(257)
			::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(257)
			this->unexpected(tmp6);
		}
	}
	HX_STACK_LINE(259)
	::hscript::Expr tmp4 = e;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(259)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseFullExpr,return )

::hscript::Expr Parser_obj::parseObject( Dynamic p1){
	HX_STACK_FRAME("hscript.Parser","parseObject",0xf1927c7e,"hscript.Parser.parseObject","hscript/Parser.hx",262,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p1,"p1")
	HX_STACK_LINE(264)
	cpp::ArrayBase fl = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(fl,"fl");
	HX_STACK_LINE(265)
	while((true)){
		HX_STACK_LINE(266)
		::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(267)
		::String id = null();		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(268)
		int _switch_1 = (tk->__Index());
		if (  ( _switch_1==(int)2)){
			HX_STACK_LINE(268)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(268)
			::String i = tmp1;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(269)
			id = i;
		}
		else if (  ( _switch_1==(int)1)){
			HX_STACK_LINE(268)
			::hscript::Const tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(268)
			::hscript::Const c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(271)
				bool tmp2 = this->allowJSON;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(271)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(271)
				if ((tmp3)){
					HX_STACK_LINE(272)
					::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(272)
					this->unexpected(tmp4);
				}
				HX_STACK_LINE(273)
				switch( (int)(c->__Index())){
					case (int)2: {
						HX_STACK_LINE(273)
						::String tmp4 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(273)
						::String s = tmp4;		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(274)
						id = s;
					}
					;break;
					default: {
						HX_STACK_LINE(275)
						::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(275)
						this->unexpected(tmp4);
					}
				}
			}
		}
		else if (  ( _switch_1==(int)7)){
			HX_STACK_LINE(278)
			break;
		}
		else  {
			HX_STACK_LINE(280)
			::hscript::Token tmp1 = tk;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(280)
			this->unexpected(tmp1);
		}
;
;
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(282)
			::hscript::Token t = tmp1;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(282)
			bool tmp2 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(282)
			if ((tmp2)){
				HX_STACK_LINE(282)
				::hscript::Token tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(282)
				this->unexpected(tmp3);
			}
		}
		HX_STACK_LINE(283)
		::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(283)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ::hscript::Expr &tmp2,::String &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",283,0x98735743)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp1,false);
					__result->Add(HX_HCSTRING("e","\x65","\x00","\x00","\x00") , tmp2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(283)
		Dynamic tmp3 = _Function_2_1::Block(tmp2,tmp1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		fl->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
		HX_STACK_LINE(284)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(284)
		tk = tmp4;
		HX_STACK_LINE(285)
		int _switch_2 = (tk->__Index());
		if (  ( _switch_2==(int)7)){
			HX_STACK_LINE(287)
			break;
		}
		else if (  ( _switch_2==(int)9)){
		}
		else  {
			HX_STACK_LINE(290)
			::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(290)
			this->unexpected(tmp5);
		}
;
;
	}
	HX_STACK_LINE(293)
	::hscript::Expr tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(293)
	{
		HX_STACK_LINE(293)
		::hscript::Expr tmp1 = ::hscript::Expr_obj::EObject(fl);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(293)
		::hscript::Expr e = tmp1;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(293)
		tmp = e;
	}
	HX_STACK_LINE(293)
	::hscript::Expr tmp1 = this->parseExprNext(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(293)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseObject,return )

::hscript::Expr Parser_obj::parseExpr( ){
	HX_STACK_FRAME("hscript.Parser","parseExpr",0x8f01bd34,"hscript.Parser.parseExpr","hscript/Parser.hx",296,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(297)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(297)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(301)
	switch( (int)(tk->__Index())){
		case (int)2: {
			HX_STACK_LINE(301)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			::String id = tmp1;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(302)
			{
				HX_STACK_LINE(303)
				::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(303)
				::hscript::Expr tmp3 = this->parseStructure(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(303)
				::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(304)
				bool tmp4 = (e == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(304)
				if ((tmp4)){
					HX_STACK_LINE(305)
					::hscript::Expr tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(305)
					{
						HX_STACK_LINE(305)
						::String tmp6 = id;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(305)
						::hscript::Expr tmp7 = ::hscript::Expr_obj::EIdent(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(305)
						::hscript::Expr e1 = tmp7;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(305)
						tmp5 = e1;
					}
					HX_STACK_LINE(305)
					e = tmp5;
				}
				HX_STACK_LINE(306)
				::hscript::Expr tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(306)
				::hscript::Expr tmp6 = this->parseExprNext(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(306)
				return tmp6;
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(301)
			::hscript::Const tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			::hscript::Const c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(307)
			{
				HX_STACK_LINE(308)
				::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(308)
				{
					HX_STACK_LINE(308)
					::hscript::Const tmp3 = c;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(308)
					::hscript::Expr tmp4 = ::hscript::Expr_obj::EConst(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(308)
					::hscript::Expr e = tmp4;		HX_STACK_VAR(e,"e");
					HX_STACK_LINE(308)
					tmp2 = e;
				}
				HX_STACK_LINE(308)
				::hscript::Expr tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(308)
				return tmp3;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(310)
			::hscript::Expr tmp1 = this->parseExpr();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(310)
			::hscript::Expr e = tmp1;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(311)
			{
				HX_STACK_LINE(311)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(311)
				::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(311)
				bool tmp3 = (t != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(311)
				if ((tmp3)){
					HX_STACK_LINE(311)
					::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(311)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(312)
			::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(312)
			{
				HX_STACK_LINE(312)
				::hscript::Expr tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(312)
				::hscript::Expr tmp4 = ::hscript::Expr_obj::EParent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(312)
				::hscript::Expr e1 = tmp4;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(312)
				tmp2 = e1;
			}
			HX_STACK_LINE(312)
			::hscript::Expr tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(312)
			return tmp3;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(314)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(314)
			tk = tmp1;
			HX_STACK_LINE(315)
			switch( (int)(tk->__Index())){
				case (int)7: {
					HX_STACK_LINE(317)
					::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(317)
					{
						HX_STACK_LINE(317)
						::hscript::Expr tmp3 = ::hscript::Expr_obj::EObject(cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(317)
						::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(317)
						tmp2 = e;
					}
					HX_STACK_LINE(317)
					::hscript::Expr tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(317)
					return tmp3;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(319)
					::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(319)
					::hscript::Token tk2 = tmp2;		HX_STACK_VAR(tk2,"tk2");
					HX_STACK_LINE(320)
					{
						HX_STACK_LINE(320)
						::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(320)
						::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(320)
						::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(320)
						_this->head = tmp4;
					}
					HX_STACK_LINE(321)
					{
						HX_STACK_LINE(321)
						::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(321)
						::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(321)
						::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(321)
						_this->head = tmp4;
					}
					HX_STACK_LINE(322)
					switch( (int)(tk2->__Index())){
						case (int)14: {
							HX_STACK_LINE(324)
							::hscript::Expr tmp3 = this->parseObject((int)0);		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(324)
							::hscript::Expr tmp4 = this->parseExprNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(324)
							return tmp4;
						}
						;break;
						default: {
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(315)
					::hscript::Const tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(315)
					::hscript::Const c = tmp2;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(327)
					{
						HX_STACK_LINE(328)
						bool tmp3 = this->allowJSON;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(328)
						if ((tmp3)){
							HX_STACK_LINE(329)
							switch( (int)(c->__Index())){
								case (int)2: {
									HX_STACK_LINE(331)
									::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(331)
									::hscript::Token tk2 = tmp4;		HX_STACK_VAR(tk2,"tk2");
									HX_STACK_LINE(332)
									{
										HX_STACK_LINE(332)
										::haxe::ds::GenericStack_hscript_Token tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
										HX_STACK_LINE(332)
										::haxe::ds::GenericStack_hscript_Token _this = tmp5;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(332)
										::haxe::ds::GenericCell_hscript_Token tmp6 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk2,_this->head);		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(332)
										_this->head = tmp6;
									}
									HX_STACK_LINE(333)
									{
										HX_STACK_LINE(333)
										::haxe::ds::GenericStack_hscript_Token tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
										HX_STACK_LINE(333)
										::haxe::ds::GenericStack_hscript_Token _this = tmp5;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(333)
										::haxe::ds::GenericCell_hscript_Token tmp6 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(333)
										_this->head = tmp6;
									}
									HX_STACK_LINE(334)
									switch( (int)(tk2->__Index())){
										case (int)14: {
											HX_STACK_LINE(336)
											::hscript::Expr tmp5 = this->parseObject((int)0);		HX_STACK_VAR(tmp5,"tmp5");
											HX_STACK_LINE(336)
											::hscript::Expr tmp6 = this->parseExprNext(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
											HX_STACK_LINE(336)
											return tmp6;
										}
										;break;
										default: {
										}
									}
								}
								;break;
								default: {
									HX_STACK_LINE(340)
									::haxe::ds::GenericStack_hscript_Token tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(340)
									::haxe::ds::GenericStack_hscript_Token _this = tmp4;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(340)
									::haxe::ds::GenericCell_hscript_Token tmp5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(340)
									_this->head = tmp5;
								}
							}
						}
						else{
							HX_STACK_LINE(343)
							::haxe::ds::GenericStack_hscript_Token tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(343)
							::haxe::ds::GenericStack_hscript_Token _this = tmp4;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(343)
							::haxe::ds::GenericCell_hscript_Token tmp5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(343)
							_this->head = tmp5;
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(345)
					::haxe::ds::GenericStack_hscript_Token tmp2 = this->tokens;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(345)
					::haxe::ds::GenericStack_hscript_Token _this = tmp2;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(345)
					::haxe::ds::GenericCell_hscript_Token tmp3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(345)
					_this->head = tmp3;
				}
			}
			HX_STACK_LINE(347)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(348)
			while((true)){
				HX_STACK_LINE(349)
				::hscript::Expr tmp2 = this->parseFullExpr();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(349)
				a->push(tmp2);
				HX_STACK_LINE(350)
				::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				tk = tmp3;
				HX_STACK_LINE(351)
				bool tmp4 = (tk == ::hscript::Token_obj::TBrClose);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(351)
				if ((tmp4)){
					HX_STACK_LINE(352)
					break;
				}
				HX_STACK_LINE(353)
				{
					HX_STACK_LINE(353)
					::haxe::ds::GenericStack_hscript_Token tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(353)
					::haxe::ds::GenericStack_hscript_Token _this = tmp5;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(353)
					::haxe::ds::GenericCell_hscript_Token tmp6 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(353)
					_this->head = tmp6;
				}
			}
			HX_STACK_LINE(355)
			::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(355)
			{
				HX_STACK_LINE(355)
				::hscript::Expr tmp3 = ::hscript::Expr_obj::EBlock(a);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(355)
				::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(355)
				tmp2 = e;
			}
			HX_STACK_LINE(355)
			return tmp2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(301)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(301)
			::String op = tmp1;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(356)
			{
				HX_STACK_LINE(357)
				::haxe::ds::StringMap tmp2 = this->unops;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(357)
				::String tmp3 = op;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(357)
				bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(357)
				if ((tmp4)){
					HX_STACK_LINE(358)
					::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(358)
					::hscript::Expr tmp6 = this->parseExpr();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(358)
					::hscript::Expr tmp7 = this->makeUnop(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(358)
					return tmp7;
				}
				HX_STACK_LINE(359)
				::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(359)
				Dynamic tmp6 = this->unexpected(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(359)
				return tmp6;
			}
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(361)
			Array< ::Dynamic > a = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(362)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(362)
			tk = tmp1;
			HX_STACK_LINE(363)
			while((true)){
				HX_STACK_LINE(363)
				bool tmp2 = (tk != ::hscript::Token_obj::TBkClose);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(363)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(363)
				if ((tmp3)){
					HX_STACK_LINE(363)
					break;
				}
				HX_STACK_LINE(364)
				{
					HX_STACK_LINE(364)
					::haxe::ds::GenericStack_hscript_Token tmp4 = this->tokens;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(364)
					::haxe::ds::GenericStack_hscript_Token _this = tmp4;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(364)
					::haxe::ds::GenericCell_hscript_Token tmp5 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(364)
					_this->head = tmp5;
				}
				HX_STACK_LINE(365)
				::hscript::Expr tmp4 = this->parseExpr();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(365)
				a->push(tmp4);
				HX_STACK_LINE(366)
				::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(366)
				tk = tmp5;
				HX_STACK_LINE(367)
				bool tmp6 = (tk == ::hscript::Token_obj::TComma);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(367)
				if ((tmp6)){
					HX_STACK_LINE(368)
					::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(368)
					tk = tmp7;
				}
			}
			HX_STACK_LINE(370)
			bool tmp2 = (a->length == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			if ((tmp2)){
				HX_STACK_LINE(371)
				{
					HX_STACK_LINE(371)
					::hscript::Expr tmp3 = a->__get((int)0).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(371)
					::hscript::Expr _g = tmp3;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(371)
					switch( (int)(_g->__Index())){
						case (int)11: case (int)10: {
							HX_STACK_LINE(373)
							int tmp4 = (this->uid)++;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(373)
							::String tmp5 = (HX_HCSTRING("__a_","\xfe","\xaf","\x13","\x3f") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(373)
							::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(374)
							::hscript::Expr tmp7;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(375)
								::hscript::Expr tmp8;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(375)
								{
									HX_STACK_LINE(375)
									::String tmp9 = tmp6;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(375)
									::hscript::Expr tmp10;		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(375)
									{
										HX_STACK_LINE(375)
										::hscript::Expr tmp11 = ::hscript::Expr_obj::EArrayDecl(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(375)
										::hscript::Expr e = tmp11;		HX_STACK_VAR(e,"e");
										HX_STACK_LINE(375)
										tmp10 = e;
									}
									HX_STACK_LINE(375)
									::hscript::Expr tmp11 = ::hscript::Expr_obj::EVar(tmp9,null(),tmp10);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(375)
									::hscript::Expr e = tmp11;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(375)
									tmp8 = e;
								}
								HX_STACK_LINE(376)
								::String tmp9 = tmp6;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(376)
								::hscript::Expr tmp10 = a->__get((int)0).StaticCast< ::hscript::Expr >();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(376)
								::hscript::Expr tmp11 = this->mapCompr(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(377)
								::hscript::Expr tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(377)
								{
									HX_STACK_LINE(377)
									::String tmp13 = tmp6;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(377)
									::hscript::Expr tmp14 = ::hscript::Expr_obj::EIdent(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(377)
									::hscript::Expr e = tmp14;		HX_STACK_VAR(e,"e");
									HX_STACK_LINE(377)
									tmp12 = e;
								}
								HX_STACK_LINE(374)
								::hscript::Expr tmp13 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new().Add(tmp8).Add(tmp11).Add(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(374)
								::hscript::Expr e = tmp13;		HX_STACK_VAR(e,"e");
								HX_STACK_LINE(374)
								tmp7 = e;
							}
							HX_STACK_LINE(374)
							::hscript::Expr e = tmp7;		HX_STACK_VAR(e,"e");
							HX_STACK_LINE(379)
							::hscript::Expr tmp8 = e;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(379)
							::hscript::Expr tmp9 = this->parseExprNext(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(379)
							return tmp9;
						}
						;break;
						default: {
						}
					}
				}
			}
			HX_STACK_LINE(382)
			::hscript::Expr tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(382)
			{
				HX_STACK_LINE(382)
				::hscript::Expr tmp4 = ::hscript::Expr_obj::EArrayDecl(a);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(382)
				::hscript::Expr e = tmp4;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(382)
				tmp3 = e;
			}
			HX_STACK_LINE(382)
			::hscript::Expr tmp4 = this->parseExprNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(382)
			return tmp4;
		}
		;break;
		default: {
			HX_STACK_LINE(384)
			::hscript::Token tmp1 = tk;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(384)
			Dynamic tmp2 = this->unexpected(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(384)
			return tmp2;
		}
	}
	HX_STACK_LINE(301)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseExpr,return )

::hscript::Expr Parser_obj::mapCompr( ::String tmp,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","mapCompr",0xde0e1f9b,"hscript.Parser.mapCompr","hscript/Parser.hx",388,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tmp,"tmp")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(389)
	::hscript::Expr tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(389)
	switch( (int)(e->__Index())){
		case (int)11: {
			HX_STACK_LINE(389)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::hscript::Expr it = tmp3;		HX_STACK_VAR(it,"it");
			HX_STACK_LINE(389)
			::String tmp4 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			::String v = tmp4;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(390)
			{
				HX_STACK_LINE(391)
				::String tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(391)
				::hscript::Expr tmp6 = it;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(391)
				::String tmp7 = tmp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(391)
				::hscript::Expr tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(391)
				::hscript::Expr tmp9 = this->mapCompr(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(391)
				tmp1 = ::hscript::Expr_obj::EFor(tmp5,tmp6,tmp9);
			}
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(389)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::hscript::Expr cond = tmp3;		HX_STACK_VAR(cond,"cond");
			HX_STACK_LINE(392)
			{
				HX_STACK_LINE(393)
				::hscript::Expr tmp4 = cond;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(393)
				::String tmp5 = tmp;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(393)
				::hscript::Expr tmp6 = e2;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(393)
				::hscript::Expr tmp7 = this->mapCompr(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(393)
				tmp1 = ::hscript::Expr_obj::EWhile(tmp4,tmp7);
			}
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(389)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(389)
			::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(389)
			::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(389)
			::hscript::Expr tmp4 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(389)
			::hscript::Expr cond = tmp4;		HX_STACK_VAR(cond,"cond");
			HX_STACK_LINE(394)
			bool tmp5 = (e2 == null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(394)
			if ((tmp5)){
				HX_STACK_LINE(395)
				::hscript::Expr tmp6 = cond;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(395)
				::String tmp7 = tmp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(395)
				::hscript::Expr tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(395)
				::hscript::Expr tmp9 = this->mapCompr(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(395)
				tmp1 = ::hscript::Expr_obj::EIf(tmp6,tmp9,null());
			}
			else{
				HX_STACK_LINE(401)
				::hscript::Expr tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::hscript::Expr tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::String tmp8 = tmp;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(401)
						::hscript::Expr tmp9 = ::hscript::Expr_obj::EIdent(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(401)
						::hscript::Expr e3 = tmp9;		HX_STACK_VAR(e3,"e3");
						HX_STACK_LINE(401)
						tmp7 = e3;
					}
					HX_STACK_LINE(401)
					::hscript::Expr tmp8 = ::hscript::Expr_obj::EField(tmp7,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(401)
					::hscript::Expr e3 = tmp8;		HX_STACK_VAR(e3,"e3");
					HX_STACK_LINE(401)
					tmp6 = e3;
				}
				HX_STACK_LINE(401)
				tmp1 = ::hscript::Expr_obj::ECall(tmp6,Array_obj< ::Dynamic >::__new().Add(e));
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(389)
			int tmp2 = (::hscript::Expr(e))->__Param(0)->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			switch( (int)(tmp2)){
				case (int)1: {
					HX_STACK_LINE(389)
					::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(0)->__GetItem((int)0);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(389)
					::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(396)
					{
						HX_STACK_LINE(397)
						::String tmp4 = tmp;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(397)
						::hscript::Expr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(397)
						::hscript::Expr tmp6 = this->mapCompr(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(397)
						tmp1 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new().Add(tmp6));
					}
				}
				;break;
				default: {
					HX_STACK_LINE(401)
					::hscript::Expr tmp3;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(401)
					{
						HX_STACK_LINE(401)
						::hscript::Expr tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							::String tmp5 = tmp;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(401)
							::hscript::Expr tmp6 = ::hscript::Expr_obj::EIdent(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(401)
							::hscript::Expr e1 = tmp6;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(401)
							tmp4 = e1;
						}
						HX_STACK_LINE(401)
						::hscript::Expr tmp5 = ::hscript::Expr_obj::EField(tmp4,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(401)
						::hscript::Expr e1 = tmp5;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(401)
						tmp3 = e1;
					}
					HX_STACK_LINE(401)
					tmp1 = ::hscript::Expr_obj::ECall(tmp3,Array_obj< ::Dynamic >::__new().Add(e));
				}
			}
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(389)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(389)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(398)
			{
				HX_STACK_LINE(399)
				::String tmp3 = tmp;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(399)
				::hscript::Expr tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(399)
				::hscript::Expr tmp5 = this->mapCompr(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(399)
				tmp1 = ::hscript::Expr_obj::EParent(tmp5);
			}
		}
		;break;
		default: {
			HX_STACK_LINE(401)
			::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(401)
			{
				HX_STACK_LINE(401)
				::hscript::Expr tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(401)
				{
					HX_STACK_LINE(401)
					::String tmp4 = tmp;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(401)
					::hscript::Expr tmp5 = ::hscript::Expr_obj::EIdent(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(401)
					::hscript::Expr e1 = tmp5;		HX_STACK_VAR(e1,"e1");
					HX_STACK_LINE(401)
					tmp3 = e1;
				}
				HX_STACK_LINE(401)
				::hscript::Expr tmp4 = ::hscript::Expr_obj::EField(tmp3,HX_HCSTRING("push","\xda","\x11","\x61","\x4a"));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(401)
				::hscript::Expr e1 = tmp4;		HX_STACK_VAR(e1,"e1");
				HX_STACK_LINE(401)
				tmp2 = e1;
			}
			HX_STACK_LINE(401)
			tmp1 = ::hscript::Expr_obj::ECall(tmp2,Array_obj< ::Dynamic >::__new().Add(e));
		}
	}
	HX_STACK_LINE(389)
	::hscript::Expr edef = tmp1;		HX_STACK_VAR(edef,"edef");
	HX_STACK_LINE(403)
	::hscript::Expr tmp2 = edef;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(403)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,mapCompr,return )

::hscript::Expr Parser_obj::makeUnop( ::String op,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeUnop",0x60b6401c,"hscript.Parser.makeUnop","hscript/Parser.hx",406,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(407)
	::hscript::Expr tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(407)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(407)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(407)
			::hscript::Expr e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(407)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			::hscript::Expr e1 = tmp2;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(407)
			::String tmp3 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			::String bop = tmp3;		HX_STACK_VAR(bop,"bop");
			HX_STACK_LINE(408)
			{
				HX_STACK_LINE(408)
				::String tmp4 = bop;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(408)
				::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(408)
				::hscript::Expr tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(408)
				::hscript::Expr tmp7 = this->makeUnop(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(408)
				::hscript::Expr tmp8 = e2;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(408)
				::hscript::Expr tmp9 = ::hscript::Expr_obj::EBinop(tmp4,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(408)
				::hscript::Expr e3 = tmp9;		HX_STACK_VAR(e3,"e3");
				HX_STACK_LINE(408)
				tmp = e3;
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(407)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(407)
			::hscript::Expr e3 = tmp1;		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(407)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(407)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(407)
			::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(407)
			::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(409)
			{
				HX_STACK_LINE(409)
				::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(409)
				::hscript::Expr tmp5 = e1;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(409)
				::hscript::Expr tmp6 = this->makeUnop(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(409)
				::hscript::Expr tmp7 = e2;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(409)
				::hscript::Expr tmp8 = e3;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(409)
				::hscript::Expr tmp9 = ::hscript::Expr_obj::ETernary(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(409)
				::hscript::Expr e4 = tmp9;		HX_STACK_VAR(e4,"e4");
				HX_STACK_LINE(409)
				tmp = e4;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(410)
			::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(410)
			::hscript::Expr tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(410)
			::hscript::Expr tmp3 = ::hscript::Expr_obj::EUnop(tmp1,true,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(410)
			::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(410)
			tmp = e1;
		}
	}
	HX_STACK_LINE(407)
	return tmp;
	HX_STACK_LINE(407)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,makeUnop,return )

::hscript::Expr Parser_obj::makeBinop( ::String op,::hscript::Expr e1,::hscript::Expr e){
	HX_STACK_FRAME("hscript.Parser","makeBinop",0x4ad5ff06,"hscript.Parser.makeBinop","hscript/Parser.hx",414,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(e1,"e1")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(415)
	::hscript::Expr tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(415)
	switch( (int)(e->__Index())){
		case (int)6: {
			HX_STACK_LINE(415)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			::hscript::Expr e3 = tmp1;		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(415)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			::hscript::Expr e2 = tmp2;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(415)
			::String tmp3 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			::String op2 = tmp3;		HX_STACK_VAR(op2,"op2");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(417)
				::haxe::ds::StringMap tmp4 = this->opPriority;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(417)
				::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(417)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(417)
				Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(417)
				::haxe::ds::StringMap tmp8 = this->opPriority;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(417)
				::String tmp9 = op2;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(417)
				Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(417)
				Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(417)
				bool tmp12 = (tmp7 <= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(417)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(417)
				if ((tmp12)){
					HX_STACK_LINE(417)
					::haxe::ds::StringMap tmp14 = this->opRightAssoc;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(417)
					::haxe::ds::StringMap tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(417)
					::String tmp16 = op;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(417)
					::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(417)
					bool tmp18 = tmp15->exists(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(417)
					bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(417)
					bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(417)
					tmp13 = !(tmp20);
				}
				else{
					HX_STACK_LINE(417)
					tmp13 = false;
				}
				HX_STACK_LINE(417)
				if ((tmp13)){
					HX_STACK_LINE(418)
					::String tmp14 = op2;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(418)
					::String tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(418)
					::hscript::Expr tmp16 = e1;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(418)
					::hscript::Expr tmp17 = e2;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(418)
					::hscript::Expr tmp18 = this->makeBinop(tmp15,tmp16,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(418)
					::hscript::Expr tmp19 = e3;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(418)
					::hscript::Expr tmp20 = ::hscript::Expr_obj::EBinop(tmp14,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(418)
					::hscript::Expr e4 = tmp20;		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(418)
					tmp = e4;
				}
				else{
					HX_STACK_LINE(420)
					::String tmp14 = op;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(420)
					::hscript::Expr tmp15 = e1;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(420)
					::hscript::Expr tmp16 = e;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(420)
					::hscript::Expr tmp17 = ::hscript::Expr_obj::EBinop(tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(420)
					::hscript::Expr e4 = tmp17;		HX_STACK_VAR(e4,"e4");
					HX_STACK_LINE(420)
					tmp = e4;
				}
			}
		}
		;break;
		case (int)22: {
			HX_STACK_LINE(415)
			::hscript::Expr tmp1 = (::hscript::Expr(e))->__Param(2);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(415)
			::hscript::Expr e4 = tmp1;		HX_STACK_VAR(e4,"e4");
			HX_STACK_LINE(415)
			::hscript::Expr tmp2 = (::hscript::Expr(e))->__Param(1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(415)
			::hscript::Expr e3 = tmp2;		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(415)
			::hscript::Expr tmp3 = (::hscript::Expr(e))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(415)
			::hscript::Expr e2 = tmp3;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(421)
			{
				HX_STACK_LINE(422)
				::haxe::ds::StringMap tmp4 = this->opRightAssoc;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(422)
				::String tmp5 = op;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				bool tmp6 = tmp4->exists(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(422)
				if ((tmp6)){
					HX_STACK_LINE(423)
					::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(423)
					::hscript::Expr tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(423)
					::hscript::Expr tmp9 = e;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(423)
					::hscript::Expr tmp10 = ::hscript::Expr_obj::EBinop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(423)
					::hscript::Expr e5 = tmp10;		HX_STACK_VAR(e5,"e5");
					HX_STACK_LINE(423)
					tmp = e5;
				}
				else{
					HX_STACK_LINE(425)
					::String tmp7 = op;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(425)
					::hscript::Expr tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(425)
					::hscript::Expr tmp9 = e2;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(425)
					::hscript::Expr tmp10 = this->makeBinop(tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(425)
					::hscript::Expr tmp11 = e3;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(425)
					::hscript::Expr tmp12 = e4;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(425)
					::hscript::Expr tmp13 = ::hscript::Expr_obj::ETernary(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(425)
					::hscript::Expr e5 = tmp13;		HX_STACK_VAR(e5,"e5");
					HX_STACK_LINE(425)
					tmp = e5;
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(427)
			::String tmp1 = op;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(427)
			::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(427)
			::hscript::Expr tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(427)
			::hscript::Expr tmp4 = ::hscript::Expr_obj::EBinop(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(427)
			::hscript::Expr e2 = tmp4;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(427)
			tmp = e2;
		}
	}
	HX_STACK_LINE(415)
	return tmp;
	HX_STACK_LINE(415)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Parser_obj,makeBinop,return )

::hscript::Expr Parser_obj::parseStructure( ::String id){
	HX_STACK_FRAME("hscript.Parser","parseStructure",0x237837d4,"hscript.Parser.parseStructure","hscript/Parser.hx",431,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(435)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(435)
	::hscript::Expr tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(435)
	::String _switch_3 = (tmp);
	if (  ( _switch_3==HX_HCSTRING("if","\xdd","\x5b","\x00","\x00"))){
		HX_STACK_LINE(437)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(437)
		::hscript::Expr cond = tmp2;		HX_STACK_VAR(cond,"cond");
		HX_STACK_LINE(438)
		::hscript::Expr tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(438)
		::hscript::Expr e1 = tmp3;		HX_STACK_VAR(e1,"e1");
		HX_STACK_LINE(439)
		::hscript::Expr e2 = null();		HX_STACK_VAR(e2,"e2");
		HX_STACK_LINE(440)
		bool semic = false;		HX_STACK_VAR(semic,"semic");
		HX_STACK_LINE(441)
		::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(441)
		::hscript::Token tk = tmp4;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(442)
		bool tmp5 = (tk == ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(442)
		if ((tmp5)){
			HX_STACK_LINE(443)
			semic = true;
			HX_STACK_LINE(444)
			::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(444)
			tk = tmp6;
		}
		HX_STACK_LINE(446)
		::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(446)
		::hscript::Token tmp7 = ::hscript::Token_obj::TId(HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(446)
		bool tmp8 = ::Type_obj::enumEq(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(446)
		if ((tmp8)){
			HX_STACK_LINE(447)
			::hscript::Expr tmp9 = this->parseExpr();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(447)
			e2 = tmp9;
		}
		else{
			HX_STACK_LINE(449)
			{
				HX_STACK_LINE(449)
				::haxe::ds::GenericStack_hscript_Token tmp9 = this->tokens;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(449)
				::haxe::ds::GenericStack_hscript_Token _this = tmp9;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(449)
				::haxe::ds::GenericCell_hscript_Token tmp10 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(449)
				_this->head = tmp10;
			}
			HX_STACK_LINE(450)
			bool tmp9 = semic;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(450)
			if ((tmp9)){
				HX_STACK_LINE(450)
				::haxe::ds::GenericStack_hscript_Token tmp10 = this->tokens;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(450)
				::haxe::ds::GenericStack_hscript_Token _this = tmp10;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(450)
				::haxe::ds::GenericCell_hscript_Token tmp11 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(::hscript::Token_obj::TSemicolon,_this->head);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(450)
				_this->head = tmp11;
			}
		}
		HX_STACK_LINE(452)
		{
			HX_STACK_LINE(452)
			::hscript::Expr tmp9 = cond;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(452)
			::hscript::Expr tmp10 = e1;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(452)
			::hscript::Expr tmp11 = e2;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(452)
			::hscript::Expr tmp12 = ::hscript::Expr_obj::EIf(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(452)
			::hscript::Expr e = tmp12;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(452)
			tmp1 = e;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("var","\xe7","\xde","\x59","\x00"))){
		HX_STACK_LINE(454)
		::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(454)
		::hscript::Token tk = tmp2;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(455)
		::String ident = null();		HX_STACK_VAR(ident,"ident");
		HX_STACK_LINE(456)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(456)
				::String tmp3 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(456)
				::String id1 = tmp3;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(457)
				ident = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(458)
				::hscript::Token tmp3 = tk;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(458)
				this->unexpected(tmp3);
			}
		}
		HX_STACK_LINE(460)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(460)
		tk = tmp3;
		HX_STACK_LINE(461)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(462)
		bool tmp4 = (tk == ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(462)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(462)
		if ((tmp4)){
			HX_STACK_LINE(462)
			tmp5 = this->allowTypes;
		}
		else{
			HX_STACK_LINE(462)
			tmp5 = false;
		}
		HX_STACK_LINE(462)
		if ((tmp5)){
			HX_STACK_LINE(463)
			::hscript::CType tmp6 = this->parseType();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(463)
			t = tmp6;
			HX_STACK_LINE(464)
			::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(464)
			tk = tmp7;
		}
		HX_STACK_LINE(466)
		::hscript::Expr e = null();		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(467)
		::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(467)
		::hscript::Token tmp7 = ::hscript::Token_obj::TOp(HX_HCSTRING("=","\x3d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(467)
		bool tmp8 = ::Type_obj::enumEq(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(467)
		if ((tmp8)){
			HX_STACK_LINE(468)
			::hscript::Expr tmp9 = this->parseExpr();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(468)
			e = tmp9;
		}
		else{
			HX_STACK_LINE(470)
			::haxe::ds::GenericStack_hscript_Token tmp9 = this->tokens;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(470)
			::haxe::ds::GenericStack_hscript_Token _this = tmp9;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(470)
			::haxe::ds::GenericCell_hscript_Token tmp10 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(470)
			_this->head = tmp10;
		}
		HX_STACK_LINE(471)
		{
			HX_STACK_LINE(471)
			::String tmp9 = ident;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(471)
			::hscript::CType tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(471)
			::hscript::Expr tmp11 = e;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(471)
			::hscript::Expr tmp12 = ::hscript::Expr_obj::EVar(tmp9,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(471)
			::hscript::Expr e1 = tmp12;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(471)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("while","\xb1","\x43","\xbd","\xc9"))){
		HX_STACK_LINE(473)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(473)
		::hscript::Expr econd = tmp2;		HX_STACK_VAR(econd,"econd");
		HX_STACK_LINE(474)
		::hscript::Expr tmp3 = this->parseExpr();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(474)
		::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			::hscript::Expr tmp4 = econd;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(475)
			::hscript::Expr tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(475)
			::hscript::Expr tmp6 = ::hscript::Expr_obj::EWhile(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(475)
			::hscript::Expr e1 = tmp6;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(475)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("for","\x09","\xc7","\x4d","\x00"))){
		HX_STACK_LINE(477)
		{
			HX_STACK_LINE(477)
			::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(477)
			::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(477)
			bool tmp3 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			if ((tmp3)){
				HX_STACK_LINE(477)
				::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(477)
				this->unexpected(tmp4);
			}
		}
		HX_STACK_LINE(478)
		::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(478)
		::hscript::Token tk = tmp2;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(479)
		::String vname = null();		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(480)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(480)
				::String tmp3 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(480)
				::String id1 = tmp3;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(481)
				vname = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(482)
				::hscript::Token tmp3 = tk;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(482)
				this->unexpected(tmp3);
			}
		}
		HX_STACK_LINE(484)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(484)
		tk = tmp3;
		HX_STACK_LINE(485)
		::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(485)
		::hscript::Token tmp5 = ::hscript::Token_obj::TId(HX_HCSTRING("in","\xe5","\x5b","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(485)
		bool tmp6 = ::Type_obj::enumEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(485)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(485)
		if ((tmp7)){
			HX_STACK_LINE(485)
			::hscript::Token tmp8 = tk;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(485)
			this->unexpected(tmp8);
		}
		HX_STACK_LINE(486)
		::hscript::Expr tmp8 = this->parseExpr();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(486)
		::hscript::Expr eiter = tmp8;		HX_STACK_VAR(eiter,"eiter");
		HX_STACK_LINE(487)
		{
			HX_STACK_LINE(487)
			::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(487)
			::hscript::Token t = tmp9;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(487)
			bool tmp10 = (t != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(487)
			if ((tmp10)){
				HX_STACK_LINE(487)
				::hscript::Token tmp11 = t;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(487)
				this->unexpected(tmp11);
			}
		}
		HX_STACK_LINE(488)
		::hscript::Expr tmp9 = this->parseExpr();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(488)
		::hscript::Expr e = tmp9;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(489)
		{
			HX_STACK_LINE(489)
			::String tmp10 = vname;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(489)
			::hscript::Expr tmp11 = eiter;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(489)
			::hscript::Expr tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(489)
			::hscript::Expr tmp13 = ::hscript::Expr_obj::EFor(tmp10,tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(489)
			::hscript::Expr e1 = tmp13;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(489)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("break","\xbf","\x24","\xec","\xb8"))){
		HX_STACK_LINE(490)
		tmp1 = ::hscript::Expr_obj::EBreak;
	}
	else if (  ( _switch_3==HX_HCSTRING("continue","\x67","\xe0","\xc8","\x31"))){
		HX_STACK_LINE(491)
		tmp1 = ::hscript::Expr_obj::EContinue;
	}
	else if (  ( _switch_3==HX_HCSTRING("else","\xb9","\xe4","\x14","\x43"))){
		HX_STACK_LINE(492)
		::String tmp2 = id;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(492)
		::hscript::Token tmp3 = ::hscript::Token_obj::TId(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(492)
		tmp1 = this->unexpected(tmp3);
	}
	else if (  ( _switch_3==HX_HCSTRING("function","\x18","\xab","\x52","\x14"))){
		HX_STACK_LINE(494)
		::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(494)
		::hscript::Token tk = tmp2;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(495)
		::String name = null();		HX_STACK_VAR(name,"name");
		HX_STACK_LINE(496)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(496)
				::String tmp3 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(496)
				::String id1 = tmp3;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(497)
				name = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(498)
				::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(498)
				::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(498)
				::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(498)
				_this->head = tmp4;
			}
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(500)
			::hscript::Token t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(500)
			bool tmp4 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(500)
			if ((tmp4)){
				HX_STACK_LINE(500)
				::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(500)
				this->unexpected(tmp5);
			}
		}
		HX_STACK_LINE(501)
		cpp::ArrayBase args = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(502)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(502)
		tk = tmp3;
		HX_STACK_LINE(503)
		bool tmp4 = (tk != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(503)
		if ((tmp4)){
			HX_STACK_LINE(504)
			bool done = false;		HX_STACK_VAR(done,"done");
			HX_STACK_LINE(505)
			while((true)){
				HX_STACK_LINE(505)
				bool tmp5 = done;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(505)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(505)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(505)
				if ((tmp7)){
					HX_STACK_LINE(505)
					break;
				}
				HX_STACK_LINE(506)
				::String name1 = null();		HX_STACK_VAR(name1,"name1");
				HX_STACK_LINE(506)
				bool opt = false;		HX_STACK_VAR(opt,"opt");
				HX_STACK_LINE(507)
				switch( (int)(tk->__Index())){
					case (int)13: {
						HX_STACK_LINE(509)
						opt = true;
						HX_STACK_LINE(510)
						::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(510)
						tk = tmp8;
					}
					;break;
					default: {
					}
				}
				HX_STACK_LINE(513)
				switch( (int)(tk->__Index())){
					case (int)2: {
						HX_STACK_LINE(513)
						::String tmp8 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(513)
						::String id1 = tmp8;		HX_STACK_VAR(id1,"id1");
						HX_STACK_LINE(514)
						name1 = id1;
					}
					;break;
					default: {
						HX_STACK_LINE(515)
						::hscript::Token tmp8 = tk;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(515)
						this->unexpected(tmp8);
					}
				}
				HX_STACK_LINE(517)
				::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(517)
				tk = tmp8;
				struct _Function_4_1{
					inline static Dynamic Block( ::String &name1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",518,0x98735743)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , name1,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(518)
				Dynamic tmp9 = _Function_4_1::Block(name1);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(518)
				Dynamic arg = tmp9;		HX_STACK_VAR(arg,"arg");
				HX_STACK_LINE(519)
				Dynamic tmp10 = arg;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(519)
				args->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp10);
				HX_STACK_LINE(520)
				bool tmp11 = opt;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(520)
				if ((tmp11)){
					HX_STACK_LINE(520)
					arg->__FieldRef(HX_HCSTRING("opt","\x33","\x9c","\x54","\x00")) = true;
				}
				HX_STACK_LINE(521)
				bool tmp12 = (tk == ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(521)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(521)
				if ((tmp12)){
					HX_STACK_LINE(521)
					tmp13 = this->allowTypes;
				}
				else{
					HX_STACK_LINE(521)
					tmp13 = false;
				}
				HX_STACK_LINE(521)
				if ((tmp13)){
					HX_STACK_LINE(522)
					::hscript::CType tmp14 = this->parseType();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(522)
					arg->__FieldRef(HX_HCSTRING("t","\x74","\x00","\x00","\x00")) = tmp14;
					HX_STACK_LINE(523)
					::hscript::Token tmp15 = this->token();		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(523)
					tk = tmp15;
				}
				HX_STACK_LINE(525)
				switch( (int)(tk->__Index())){
					case (int)9: {
						HX_STACK_LINE(527)
						::hscript::Token tmp14 = this->token();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(527)
						tk = tmp14;
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(529)
						done = true;
					}
					;break;
					default: {
						HX_STACK_LINE(531)
						::hscript::Token tmp14 = tk;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(531)
						this->unexpected(tmp14);
					}
				}
			}
		}
		HX_STACK_LINE(535)
		::hscript::CType ret = null();		HX_STACK_VAR(ret,"ret");
		HX_STACK_LINE(536)
		bool tmp5 = this->allowTypes;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(536)
		if ((tmp5)){
			HX_STACK_LINE(537)
			::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(537)
			tk = tmp6;
			HX_STACK_LINE(538)
			bool tmp7 = (tk != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(538)
			if ((tmp7)){
				HX_STACK_LINE(539)
				::haxe::ds::GenericStack_hscript_Token tmp8 = this->tokens;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(539)
				::haxe::ds::GenericStack_hscript_Token _this = tmp8;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(539)
				::haxe::ds::GenericCell_hscript_Token tmp9 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(539)
				_this->head = tmp9;
			}
			else{
				HX_STACK_LINE(541)
				::hscript::CType tmp8 = this->parseType();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(541)
				ret = tmp8;
			}
		}
		HX_STACK_LINE(543)
		::hscript::Expr tmp6 = this->parseExpr();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(543)
		::hscript::Expr body = tmp6;		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(544)
		{
			HX_STACK_LINE(544)
			::hscript::Expr tmp7 = body;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(544)
			::String tmp8 = name;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(544)
			::hscript::CType tmp9 = ret;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(544)
			::hscript::Expr tmp10 = ::hscript::Expr_obj::EFunction(args,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(544)
			::hscript::Expr e = tmp10;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(544)
			tmp1 = e;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("return","\xb0","\xa4","\x2d","\x09"))){
		HX_STACK_LINE(546)
		::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(546)
		::hscript::Token tk = tmp2;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(547)
		{
			HX_STACK_LINE(547)
			::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(547)
			::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(547)
			::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(547)
			_this->head = tmp4;
		}
		HX_STACK_LINE(548)
		bool tmp3 = (tk == ::hscript::Token_obj::TSemicolon);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(548)
		::hscript::Expr tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(548)
		if ((tmp3)){
			HX_STACK_LINE(548)
			tmp4 = null();
		}
		else{
			HX_STACK_LINE(548)
			tmp4 = this->parseExpr();
		}
		HX_STACK_LINE(548)
		::hscript::Expr e = tmp4;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(549)
		{
			HX_STACK_LINE(549)
			::hscript::Expr tmp5 = e;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(549)
			::hscript::Expr tmp6 = ::hscript::Expr_obj::EReturn(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(549)
			::hscript::Expr e1 = tmp6;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(549)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("new","\x60","\xd0","\x53","\x00"))){
		HX_STACK_LINE(551)
		Array< ::String > a = Array_obj< ::String >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(552)
		::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		::hscript::Token tk = tmp2;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(553)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(553)
				::String tmp3 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(553)
				::String id1 = tmp3;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(554)
				{
					HX_STACK_LINE(554)
					::String tmp4 = id1;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(554)
					a->push(tmp4);
				}
			}
			;break;
			default: {
				HX_STACK_LINE(555)
				::hscript::Token tmp3 = tk;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(555)
				this->unexpected(tmp3);
			}
		}
		HX_STACK_LINE(557)
		bool next = true;		HX_STACK_VAR(next,"next");
		HX_STACK_LINE(558)
		while((true)){
			HX_STACK_LINE(558)
			bool tmp3 = next;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(558)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(558)
			if ((tmp4)){
				HX_STACK_LINE(558)
				break;
			}
			HX_STACK_LINE(559)
			::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(559)
			tk = tmp5;
			HX_STACK_LINE(560)
			switch( (int)(tk->__Index())){
				case (int)8: {
					HX_STACK_LINE(562)
					::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(562)
					tk = tmp6;
					HX_STACK_LINE(563)
					switch( (int)(tk->__Index())){
						case (int)2: {
							HX_STACK_LINE(563)
							::String tmp7 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(563)
							::String id1 = tmp7;		HX_STACK_VAR(id1,"id1");
							HX_STACK_LINE(564)
							{
								HX_STACK_LINE(564)
								::String tmp8 = id1;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(564)
								a->push(tmp8);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(565)
							::hscript::Token tmp7 = tk;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(565)
							this->unexpected(tmp7);
						}
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(568)
					next = false;
				}
				;break;
				default: {
					HX_STACK_LINE(570)
					::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(570)
					this->unexpected(tmp6);
				}
			}
		}
		HX_STACK_LINE(573)
		Array< ::Dynamic > args = this->parseExprList(::hscript::Token_obj::TPClose);		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(574)
		{
			HX_STACK_LINE(574)
			::String tmp3 = a->join(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(574)
			::hscript::Expr tmp4 = ::hscript::Expr_obj::ENew(tmp3,args);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(574)
			::hscript::Expr e = tmp4;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(574)
			tmp1 = e;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("throw","\x26","\x5d","\x90","\x0f"))){
		HX_STACK_LINE(576)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(576)
		::hscript::Expr e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(577)
		{
			HX_STACK_LINE(577)
			::hscript::Expr tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(577)
			::hscript::Expr tmp4 = ::hscript::Expr_obj::EThrow(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(577)
			::hscript::Expr e1 = tmp4;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(577)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("try","\x3b","\x69","\x58","\x00"))){
		HX_STACK_LINE(579)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(579)
		::hscript::Expr e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(580)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(580)
		::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
		HX_STACK_LINE(581)
		::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(581)
		::hscript::Token tmp5 = ::hscript::Token_obj::TId(HX_HCSTRING("catch","\x3b","\x7c","\x21","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(581)
		bool tmp6 = ::Type_obj::enumEq(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(581)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(581)
		if ((tmp7)){
			HX_STACK_LINE(581)
			::hscript::Token tmp8 = tk;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(581)
			this->unexpected(tmp8);
		}
		HX_STACK_LINE(582)
		{
			HX_STACK_LINE(582)
			::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(582)
			::hscript::Token t = tmp8;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(582)
			bool tmp9 = (t != ::hscript::Token_obj::TPOpen);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(582)
			if ((tmp9)){
				HX_STACK_LINE(582)
				::hscript::Token tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(582)
				this->unexpected(tmp10);
			}
		}
		HX_STACK_LINE(583)
		::hscript::Token tmp8 = this->token();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(583)
		tk = tmp8;
		HX_STACK_LINE(584)
		::String tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(584)
		switch( (int)(tk->__Index())){
			case (int)2: {
				HX_STACK_LINE(584)
				::String tmp10 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(584)
				::String id1 = tmp10;		HX_STACK_VAR(id1,"id1");
				HX_STACK_LINE(585)
				tmp9 = id1;
			}
			;break;
			default: {
				HX_STACK_LINE(586)
				::hscript::Token tmp10 = tk;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(586)
				tmp9 = this->unexpected(tmp10);
			}
		}
		HX_STACK_LINE(584)
		::String vname = tmp9;		HX_STACK_VAR(vname,"vname");
		HX_STACK_LINE(588)
		{
			HX_STACK_LINE(588)
			::hscript::Token tmp10 = this->token();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(588)
			::hscript::Token t = tmp10;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(588)
			bool tmp11 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(588)
			if ((tmp11)){
				HX_STACK_LINE(588)
				::hscript::Token tmp12 = t;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(588)
				this->unexpected(tmp12);
			}
		}
		HX_STACK_LINE(589)
		::hscript::CType t = null();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(590)
		bool tmp10 = this->allowTypes;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(590)
		if ((tmp10)){
			HX_STACK_LINE(591)
			::hscript::CType tmp11 = this->parseType();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(591)
			t = tmp11;
		}
		else{
			HX_STACK_LINE(593)
			::hscript::Token tmp11 = this->token();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(593)
			tk = tmp11;
			HX_STACK_LINE(594)
			::hscript::Token tmp12 = tk;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(594)
			::hscript::Token tmp13 = ::hscript::Token_obj::TId(HX_HCSTRING("Dynamic","\x5f","\xc7","\x66","\x03"));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(594)
			bool tmp14 = ::Type_obj::enumEq(tmp12,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(594)
			bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(594)
			if ((tmp15)){
				HX_STACK_LINE(594)
				::hscript::Token tmp16 = tk;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(594)
				this->unexpected(tmp16);
			}
		}
		HX_STACK_LINE(596)
		{
			HX_STACK_LINE(596)
			::hscript::Token tmp11 = this->token();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(596)
			::hscript::Token t1 = tmp11;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(596)
			bool tmp12 = (t1 != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(596)
			if ((tmp12)){
				HX_STACK_LINE(596)
				::hscript::Token tmp13 = t1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(596)
				this->unexpected(tmp13);
			}
		}
		HX_STACK_LINE(597)
		::hscript::Expr tmp11 = this->parseExpr();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(597)
		::hscript::Expr ec = tmp11;		HX_STACK_VAR(ec,"ec");
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			::hscript::Expr tmp12 = e;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(598)
			::String tmp13 = vname;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(598)
			::hscript::CType tmp14 = t;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(598)
			::hscript::Expr tmp15 = ec;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(598)
			::hscript::Expr tmp16 = ::hscript::Expr_obj::ETry(tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(598)
			::hscript::Expr e1 = tmp16;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(598)
			tmp1 = e1;
		}
	}
	else if (  ( _switch_3==HX_HCSTRING("switch","\xf4","\x49","\x79","\xc5"))){
		HX_STACK_LINE(600)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(600)
		::hscript::Expr e = tmp2;		HX_STACK_VAR(e,"e");
		HX_STACK_LINE(601)
		::hscript::Expr def = null();		HX_STACK_VAR(def,"def");
		HX_STACK_LINE(601)
		cpp::ArrayBase cases = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(cases,"cases");
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(602)
			::hscript::Token t = tmp3;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(602)
			bool tmp4 = (t != ::hscript::Token_obj::TBrOpen);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(602)
			if ((tmp4)){
				HX_STACK_LINE(602)
				::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(602)
				this->unexpected(tmp5);
			}
		}
		HX_STACK_LINE(603)
		while((true)){
			HX_STACK_LINE(604)
			::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(604)
			::hscript::Token tk = tmp3;		HX_STACK_VAR(tk,"tk");
			HX_STACK_LINE(605)
			int _switch_4 = (tk->__Index());
			if (  ( _switch_4==(int)2)){
				HX_STACK_LINE(605)
				::String tmp4 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(605)
				::String _switch_5 = (tmp4);
				if (  ( _switch_5==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41"))){
					struct _Function_5_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",607,0x98735743)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f") , Array_obj< ::Dynamic >::__new(),false);
								__result->Add(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43") , null(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(607)
					Dynamic tmp5 = _Function_5_1::Block();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(607)
					Dynamic c = tmp5;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(608)
					Dynamic tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(608)
					cases->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
					HX_STACK_LINE(609)
					while((true)){
						HX_STACK_LINE(610)
						::hscript::Expr tmp7 = this->parseExpr();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(610)
						::hscript::Expr e1 = tmp7;		HX_STACK_VAR(e1,"e1");
						HX_STACK_LINE(611)
						::hscript::Expr tmp8 = e1;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(611)
						c->__Field(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"), hx::paccDynamic )->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp8);
						HX_STACK_LINE(612)
						::hscript::Token tmp9 = this->token();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(612)
						tk = tmp9;
						HX_STACK_LINE(613)
						int _switch_6 = (tk->__Index());
						if (  ( _switch_6==(int)9)){
						}
						else if (  ( _switch_6==(int)14)){
							HX_STACK_LINE(617)
							break;
						}
						else  {
							HX_STACK_LINE(619)
							::hscript::Token tmp10 = tk;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(619)
							this->unexpected(tmp10);
						}
;
;
					}
					HX_STACK_LINE(622)
					Array< ::Dynamic > exprs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(623)
					while((true)){
						HX_STACK_LINE(624)
						::hscript::Token tmp7 = this->token();		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(624)
						tk = tmp7;
						HX_STACK_LINE(625)
						{
							HX_STACK_LINE(625)
							::haxe::ds::GenericStack_hscript_Token tmp8 = this->tokens;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(625)
							::haxe::ds::GenericStack_hscript_Token _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(625)
							::haxe::ds::GenericCell_hscript_Token tmp9 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(625)
							_this->head = tmp9;
						}
						HX_STACK_LINE(626)
						int _switch_7 = (tk->__Index());
						if (  ( _switch_7==(int)2)){
							HX_STACK_LINE(626)
							::String tmp8 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(626)
							::String _switch_8 = (tmp8);
							if (  ( _switch_8==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41")) ||  ( _switch_8==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
								HX_STACK_LINE(628)
								break;
							}
							else  {
								HX_STACK_LINE(630)
								::hscript::Expr tmp9 = this->parseFullExpr();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(630)
								exprs->push(tmp9);
							}
;
;
						}
						else if (  ( _switch_7==(int)7)){
							HX_STACK_LINE(628)
							break;
						}
						else  {
							HX_STACK_LINE(630)
							::hscript::Expr tmp8 = this->parseFullExpr();		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(630)
							exprs->push(tmp8);
						}
;
;
					}
					HX_STACK_LINE(633)
					bool tmp7 = (exprs->length == (int)1);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(633)
					::hscript::Expr tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(633)
					if ((tmp7)){
						HX_STACK_LINE(634)
						tmp8 = exprs->__get((int)0).StaticCast< ::hscript::Expr >();
					}
					else{
						HX_STACK_LINE(635)
						bool tmp9 = (exprs->length == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(635)
						if ((tmp9)){
							HX_STACK_LINE(636)
							::hscript::Expr tmp10 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(636)
							::hscript::Expr e1 = tmp10;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(636)
							tmp8 = e1;
						}
						else{
							HX_STACK_LINE(638)
							::hscript::Expr tmp10 = ::hscript::Expr_obj::EBlock(exprs);		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(638)
							::hscript::Expr e1 = tmp10;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(638)
							tmp8 = e1;
						}
					}
					HX_STACK_LINE(633)
					c->__FieldRef(HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43")) = tmp8;
				}
				else if (  ( _switch_5==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
					HX_STACK_LINE(640)
					bool tmp5 = (def != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(640)
					if ((tmp5)){
						HX_STACK_LINE(640)
						::hscript::Token tmp6 = tk;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(640)
						this->unexpected(tmp6);
					}
					HX_STACK_LINE(641)
					{
						HX_STACK_LINE(641)
						::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(641)
						::hscript::Token t = tmp6;		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(641)
						bool tmp7 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(641)
						if ((tmp7)){
							HX_STACK_LINE(641)
							::hscript::Token tmp8 = t;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(641)
							this->unexpected(tmp8);
						}
					}
					HX_STACK_LINE(642)
					Array< ::Dynamic > exprs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(exprs,"exprs");
					HX_STACK_LINE(643)
					while((true)){
						HX_STACK_LINE(644)
						::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(644)
						tk = tmp6;
						HX_STACK_LINE(645)
						{
							HX_STACK_LINE(645)
							::haxe::ds::GenericStack_hscript_Token tmp7 = this->tokens;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(645)
							::haxe::ds::GenericStack_hscript_Token _this = tmp7;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(645)
							::haxe::ds::GenericCell_hscript_Token tmp8 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(645)
							_this->head = tmp8;
						}
						HX_STACK_LINE(646)
						int _switch_9 = (tk->__Index());
						if (  ( _switch_9==(int)2)){
							HX_STACK_LINE(646)
							::String tmp7 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(646)
							::String _switch_10 = (tmp7);
							if (  ( _switch_10==HX_HCSTRING("case","\xb0","\x1e","\xba","\x41")) ||  ( _switch_10==HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"))){
								HX_STACK_LINE(648)
								break;
							}
							else  {
								HX_STACK_LINE(650)
								::hscript::Expr tmp8 = this->parseFullExpr();		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(650)
								exprs->push(tmp8);
							}
;
;
						}
						else if (  ( _switch_9==(int)7)){
							HX_STACK_LINE(648)
							break;
						}
						else  {
							HX_STACK_LINE(650)
							::hscript::Expr tmp7 = this->parseFullExpr();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(650)
							exprs->push(tmp7);
						}
;
;
					}
					HX_STACK_LINE(653)
					bool tmp6 = (exprs->length == (int)1);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(653)
					::hscript::Expr tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(653)
					if ((tmp6)){
						HX_STACK_LINE(654)
						tmp7 = exprs->__get((int)0).StaticCast< ::hscript::Expr >();
					}
					else{
						HX_STACK_LINE(655)
						bool tmp8 = (exprs->length == (int)0);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(655)
						if ((tmp8)){
							HX_STACK_LINE(656)
							::hscript::Expr tmp9 = ::hscript::Expr_obj::EBlock(Array_obj< ::Dynamic >::__new());		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(656)
							::hscript::Expr e1 = tmp9;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(656)
							tmp7 = e1;
						}
						else{
							HX_STACK_LINE(658)
							::hscript::Expr tmp9 = ::hscript::Expr_obj::EBlock(exprs);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(658)
							::hscript::Expr e1 = tmp9;		HX_STACK_VAR(e1,"e1");
							HX_STACK_LINE(658)
							tmp7 = e1;
						}
					}
					HX_STACK_LINE(653)
					def = tmp7;
				}
				else  {
					HX_STACK_LINE(662)
					::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(662)
					this->unexpected(tmp5);
				}
;
;
			}
			else if (  ( _switch_4==(int)7)){
				HX_STACK_LINE(660)
				break;
			}
			else  {
				HX_STACK_LINE(662)
				::hscript::Token tmp4 = tk;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(662)
				this->unexpected(tmp4);
			}
;
;
		}
		HX_STACK_LINE(665)
		{
			HX_STACK_LINE(665)
			::hscript::Expr tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(665)
			::hscript::Expr tmp4 = def;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(665)
			::hscript::Expr tmp5 = ::hscript::Expr_obj::ESwitch(tmp3,cases,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(665)
			::hscript::Expr e1 = tmp5;		HX_STACK_VAR(e1,"e1");
			HX_STACK_LINE(665)
			tmp1 = e1;
		}
	}
	else  {
		HX_STACK_LINE(667)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(435)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseStructure,return )

::hscript::Expr Parser_obj::parseExprNext( ::hscript::Expr e1){
	HX_STACK_FRAME("hscript.Parser","parseExprNext",0x83d61847,"hscript.Parser.parseExprNext","hscript/Parser.hx",671,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e1,"e1")
	HX_STACK_LINE(672)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(672)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(673)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(673)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(673)
			::String op = tmp1;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(674)
			{
				HX_STACK_LINE(675)
				::haxe::ds::StringMap tmp2 = this->unops;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(675)
				::String tmp3 = op;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(675)
				Dynamic tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(675)
				Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(675)
				if ((tmp5)){
					HX_STACK_LINE(676)
					::hscript::Expr tmp6 = e1;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(676)
					::hscript::Expr tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(676)
					bool tmp8 = this->isBlock(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(676)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(676)
					bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(676)
					if ((tmp9)){
						HX_STACK_LINE(676)
						switch( (int)(e1->__Index())){
							case (int)3: {
								HX_STACK_LINE(676)
								tmp10 = true;
							}
							;break;
							default: {
								HX_STACK_LINE(676)
								tmp10 = false;
							}
						}
					}
					else{
						HX_STACK_LINE(676)
						tmp10 = true;
					}
					HX_STACK_LINE(676)
					if ((tmp10)){
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							::haxe::ds::GenericStack_hscript_Token tmp11 = this->tokens;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(677)
							::haxe::ds::GenericStack_hscript_Token _this = tmp11;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(677)
							::haxe::ds::GenericCell_hscript_Token tmp12 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(677)
							_this->head = tmp12;
						}
						HX_STACK_LINE(678)
						::hscript::Expr tmp11 = e1;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(678)
						return tmp11;
					}
					HX_STACK_LINE(680)
					::hscript::Expr tmp11;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(680)
						::String tmp12 = op;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(680)
						::hscript::Expr tmp13 = e1;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(680)
						::hscript::Expr tmp14 = ::hscript::Expr_obj::EUnop(tmp12,false,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(680)
						::hscript::Expr e = tmp14;		HX_STACK_VAR(e,"e");
						HX_STACK_LINE(680)
						tmp11 = e;
					}
					HX_STACK_LINE(680)
					::hscript::Expr tmp12 = this->parseExprNext(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(680)
					return tmp12;
				}
				HX_STACK_LINE(682)
				::String tmp6 = op;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(682)
				::hscript::Expr tmp7 = e1;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(682)
				::hscript::Expr tmp8 = this->parseExpr();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(682)
				::hscript::Expr tmp9 = this->makeBinop(tmp6,tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(682)
				return tmp9;
			}
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(684)
			::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(684)
			tk = tmp1;
			HX_STACK_LINE(685)
			::String field = null();		HX_STACK_VAR(field,"field");
			HX_STACK_LINE(686)
			switch( (int)(tk->__Index())){
				case (int)2: {
					HX_STACK_LINE(686)
					::String tmp2 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(686)
					::String id = tmp2;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(687)
					field = id;
				}
				;break;
				default: {
					HX_STACK_LINE(688)
					::hscript::Token tmp2 = tk;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(688)
					this->unexpected(tmp2);
				}
			}
			HX_STACK_LINE(690)
			::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(690)
			{
				HX_STACK_LINE(690)
				::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(690)
				::String tmp4 = field;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(690)
				::hscript::Expr tmp5 = ::hscript::Expr_obj::EField(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(690)
				::hscript::Expr e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(690)
				tmp2 = e;
			}
			HX_STACK_LINE(690)
			::hscript::Expr tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(690)
			return tmp3;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(692)
			::hscript::Expr tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(692)
			{
				HX_STACK_LINE(692)
				::hscript::Expr tmp2 = e1;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(692)
				::hscript::Expr tmp3 = ::hscript::Expr_obj::ECall(tmp2,this->parseExprList(::hscript::Token_obj::TPClose));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(692)
				::hscript::Expr e = tmp3;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(692)
				tmp1 = e;
			}
			HX_STACK_LINE(692)
			::hscript::Expr tmp2 = this->parseExprNext(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(692)
			return tmp2;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(694)
			::hscript::Expr tmp1 = this->parseExpr();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(694)
			::hscript::Expr e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(695)
			{
				HX_STACK_LINE(695)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(695)
				::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(695)
				bool tmp3 = (t != ::hscript::Token_obj::TBkClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(695)
				if ((tmp3)){
					HX_STACK_LINE(695)
					::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(695)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(696)
			::hscript::Expr tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(696)
			{
				HX_STACK_LINE(696)
				::hscript::Expr tmp3 = e1;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(696)
				::hscript::Expr tmp4 = e2;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(696)
				::hscript::Expr tmp5 = ::hscript::Expr_obj::EArray(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(696)
				::hscript::Expr e = tmp5;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(696)
				tmp2 = e;
			}
			HX_STACK_LINE(696)
			::hscript::Expr tmp3 = this->parseExprNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(696)
			return tmp3;
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(698)
			::hscript::Expr tmp1 = this->parseExpr();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(698)
			::hscript::Expr e2 = tmp1;		HX_STACK_VAR(e2,"e2");
			HX_STACK_LINE(699)
			{
				HX_STACK_LINE(699)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(699)
				::hscript::Token t = tmp2;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(699)
				bool tmp3 = (t != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(699)
				if ((tmp3)){
					HX_STACK_LINE(699)
					::hscript::Token tmp4 = t;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(699)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(700)
			::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(700)
			::hscript::Expr e3 = tmp2;		HX_STACK_VAR(e3,"e3");
			HX_STACK_LINE(701)
			::hscript::Expr tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(701)
			{
				HX_STACK_LINE(701)
				::hscript::Expr tmp4 = e1;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(701)
				::hscript::Expr tmp5 = e2;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(701)
				::hscript::Expr tmp6 = e3;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(701)
				::hscript::Expr tmp7 = ::hscript::Expr_obj::ETernary(tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(701)
				::hscript::Expr e = tmp7;		HX_STACK_VAR(e,"e");
				HX_STACK_LINE(701)
				tmp3 = e;
			}
			HX_STACK_LINE(701)
			return tmp3;
		}
		;break;
		default: {
			HX_STACK_LINE(703)
			{
				HX_STACK_LINE(703)
				::haxe::ds::GenericStack_hscript_Token tmp1 = this->tokens;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(703)
				::haxe::ds::GenericStack_hscript_Token _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(703)
				::haxe::ds::GenericCell_hscript_Token tmp2 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(703)
				_this->head = tmp2;
			}
			HX_STACK_LINE(704)
			::hscript::Expr tmp1 = e1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(704)
			return tmp1;
		}
	}
	HX_STACK_LINE(673)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprNext,return )

::hscript::CType Parser_obj::parseType( ){
	HX_STACK_FRAME("hscript.Parser","parseType",0x98ecb2b9,"hscript.Parser.parseType","hscript/Parser.hx",708,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(709)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(709)
	::hscript::Token t = tmp;		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(710)
	switch( (int)(t->__Index())){
		case (int)2: {
			HX_STACK_LINE(710)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(710)
			::String v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(711)
			{
				HX_STACK_LINE(712)
				Array< ::String > path = Array_obj< ::String >::__new().Add(v);		HX_STACK_VAR(path,"path");
				HX_STACK_LINE(713)
				while((true)){
					HX_STACK_LINE(714)
					::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(714)
					t = tmp2;
					HX_STACK_LINE(715)
					bool tmp3 = (t != ::hscript::Token_obj::TDot);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(715)
					if ((tmp3)){
						HX_STACK_LINE(716)
						break;
					}
					HX_STACK_LINE(717)
					::hscript::Token tmp4 = this->token();		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(717)
					t = tmp4;
					HX_STACK_LINE(718)
					switch( (int)(t->__Index())){
						case (int)2: {
							HX_STACK_LINE(718)
							::String tmp5 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(718)
							::String v1 = tmp5;		HX_STACK_VAR(v1,"v1");
							HX_STACK_LINE(719)
							{
								HX_STACK_LINE(720)
								::String tmp6 = v1;		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(720)
								path->push(tmp6);
							}
						}
						;break;
						default: {
							HX_STACK_LINE(722)
							::hscript::Token tmp5 = t;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(722)
							this->unexpected(tmp5);
						}
					}
				}
				HX_STACK_LINE(725)
				Array< ::Dynamic > params = null();		HX_STACK_VAR(params,"params");
				HX_STACK_LINE(726)
				switch( (int)(t->__Index())){
					case (int)3: {
						HX_STACK_LINE(726)
						::String tmp2 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(726)
						::String op = tmp2;		HX_STACK_VAR(op,"op");
						HX_STACK_LINE(727)
						{
							HX_STACK_LINE(728)
							bool tmp3 = (op == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(728)
							if ((tmp3)){
								HX_STACK_LINE(729)
								params = Array_obj< ::Dynamic >::__new();
								HX_STACK_LINE(730)
								while((true)){
									HX_STACK_LINE(731)
									::hscript::CType tmp4 = this->parseType();		HX_STACK_VAR(tmp4,"tmp4");
									HX_STACK_LINE(731)
									params->push(tmp4);
									HX_STACK_LINE(732)
									::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
									HX_STACK_LINE(732)
									t = tmp5;
									HX_STACK_LINE(733)
									int _switch_11 = (t->__Index());
									if (  ( _switch_11==(int)9)){
										HX_STACK_LINE(734)
										continue;
									}
									else if (  ( _switch_11==(int)3)){
										HX_STACK_LINE(733)
										::String tmp6 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp6,"tmp6");
										HX_STACK_LINE(733)
										::String op1 = tmp6;		HX_STACK_VAR(op1,"op1");
										HX_STACK_LINE(735)
										{
											HX_STACK_LINE(735)
											bool tmp7 = (op1 == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
											HX_STACK_LINE(735)
											if ((tmp7)){
												HX_STACK_LINE(735)
												break;
											}
										}
									}
									else  {
									}
;
;
									HX_STACK_LINE(738)
									::hscript::Token tmp6 = t;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(738)
									this->unexpected(tmp6);
								}
							}
						}
					}
					;break;
					default: {
						HX_STACK_LINE(742)
						::haxe::ds::GenericStack_hscript_Token tmp2 = this->tokens;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(742)
						::haxe::ds::GenericStack_hscript_Token _this = tmp2;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(742)
						::haxe::ds::GenericCell_hscript_Token tmp3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(t,_this->head);		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(742)
						_this->head = tmp3;
					}
				}
				HX_STACK_LINE(744)
				::hscript::CType tmp2 = ::hscript::CType_obj::CTPath(path,params);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(744)
				::hscript::CType tmp3 = this->parseTypeNext(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(744)
				return tmp3;
			}
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(746)
			::hscript::CType tmp1 = this->parseType();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(746)
			::hscript::CType t1 = tmp1;		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(747)
			{
				HX_STACK_LINE(747)
				::hscript::Token tmp2 = this->token();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(747)
				::hscript::Token t2 = tmp2;		HX_STACK_VAR(t2,"t2");
				HX_STACK_LINE(747)
				bool tmp3 = (t2 != ::hscript::Token_obj::TPClose);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(747)
				if ((tmp3)){
					HX_STACK_LINE(747)
					::hscript::Token tmp4 = t2;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(747)
					this->unexpected(tmp4);
				}
			}
			HX_STACK_LINE(748)
			::hscript::CType tmp2 = t1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(748)
			::hscript::CType tmp3 = ::hscript::CType_obj::CTParent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(748)
			::hscript::CType tmp4 = this->parseTypeNext(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(748)
			return tmp4;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(750)
			cpp::ArrayBase fields = cpp::ArrayBase_obj::__new();		HX_STACK_VAR(fields,"fields");
			HX_STACK_LINE(751)
			while((true)){
				HX_STACK_LINE(752)
				::hscript::Token tmp1 = this->token();		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(752)
				t = tmp1;
				HX_STACK_LINE(753)
				int _switch_12 = (t->__Index());
				if (  ( _switch_12==(int)7)){
					HX_STACK_LINE(754)
					break;
				}
				else if (  ( _switch_12==(int)2)){
					HX_STACK_LINE(753)
					::String tmp2 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(753)
					::String name = tmp2;		HX_STACK_VAR(name,"name");
					HX_STACK_LINE(755)
					{
						HX_STACK_LINE(756)
						{
							HX_STACK_LINE(756)
							::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(756)
							::hscript::Token t1 = tmp3;		HX_STACK_VAR(t1,"t1");
							HX_STACK_LINE(756)
							bool tmp4 = (t1 != ::hscript::Token_obj::TDoubleDot);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(756)
							if ((tmp4)){
								HX_STACK_LINE(756)
								::hscript::Token tmp5 = t1;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(756)
								this->unexpected(tmp5);
							}
						}
						HX_STACK_LINE(757)
						::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(757)
						::hscript::CType tmp4 = this->parseType();		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_5_1{
							inline static Dynamic Block( ::hscript::CType &tmp4,::String &tmp3){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","hscript/Parser.hx",757,0x98735743)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
									__result->Add(HX_HCSTRING("t","\x74","\x00","\x00","\x00") , tmp4,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(757)
						Dynamic tmp5 = _Function_5_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(757)
						fields->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp5);
						HX_STACK_LINE(758)
						::hscript::Token tmp6 = this->token();		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(758)
						t = tmp6;
						HX_STACK_LINE(759)
						int _switch_13 = (t->__Index());
						if (  ( _switch_13==(int)9)){
						}
						else if (  ( _switch_13==(int)7)){
							HX_STACK_LINE(761)
							break;
						}
						else  {
							HX_STACK_LINE(762)
							::hscript::Token tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(762)
							this->unexpected(tmp7);
						}
;
;
					}
				}
				else  {
					HX_STACK_LINE(765)
					::hscript::Token tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(765)
					this->unexpected(tmp2);
				}
;
;
			}
			HX_STACK_LINE(768)
			::hscript::CType tmp1 = ::hscript::CType_obj::CTAnon(fields);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(768)
			::hscript::CType tmp2 = this->parseTypeNext(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(768)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(770)
			::hscript::Token tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(770)
			Dynamic tmp2 = this->unexpected(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(770)
			return tmp2;
		}
	}
	HX_STACK_LINE(710)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,parseType,return )

::hscript::CType Parser_obj::parseTypeNext( ::hscript::CType t){
	HX_STACK_FRAME("hscript.Parser","parseTypeNext",0x8b2ab44c,"hscript.Parser.parseTypeNext","hscript/Parser.hx",774,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(775)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(775)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(776)
	switch( (int)(tk->__Index())){
		case (int)3: {
			HX_STACK_LINE(776)
			::String tmp1 = (::hscript::Token(tk))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(776)
			::String op = tmp1;		HX_STACK_VAR(op,"op");
			HX_STACK_LINE(777)
			{
				HX_STACK_LINE(778)
				bool tmp2 = (op != HX_HCSTRING("->","\x71","\x27","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(778)
				if ((tmp2)){
					HX_STACK_LINE(779)
					{
						HX_STACK_LINE(779)
						::haxe::ds::GenericStack_hscript_Token tmp3 = this->tokens;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(779)
						::haxe::ds::GenericStack_hscript_Token _this = tmp3;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(779)
						::haxe::ds::GenericCell_hscript_Token tmp4 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(779)
						_this->head = tmp4;
					}
					HX_STACK_LINE(780)
					::hscript::CType tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(780)
					return tmp3;
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(783)
			{
				HX_STACK_LINE(783)
				::haxe::ds::GenericStack_hscript_Token tmp1 = this->tokens;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(783)
				::haxe::ds::GenericStack_hscript_Token _this = tmp1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(783)
				::haxe::ds::GenericCell_hscript_Token tmp2 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(783)
				_this->head = tmp2;
			}
			HX_STACK_LINE(784)
			::hscript::CType tmp1 = t;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(784)
			return tmp1;
		}
	}
	HX_STACK_LINE(786)
	::hscript::CType tmp1 = this->parseType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(786)
	::hscript::CType t2 = tmp1;		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(787)
	switch( (int)(t2->__Index())){
		case (int)1: {
			HX_STACK_LINE(787)
			Array< ::Dynamic > args = (::hscript::CType(t2))->__Param(0);		HX_STACK_VAR(args,"args");
			HX_STACK_LINE(788)
			{
				HX_STACK_LINE(789)
				::hscript::CType tmp2 = t;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(789)
				args->unshift(tmp2);
				HX_STACK_LINE(790)
				::hscript::CType tmp3 = t2;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(790)
				return tmp3;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(792)
			::hscript::CType tmp2 = t2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(792)
			::hscript::CType tmp3 = ::hscript::CType_obj::CTFun(Array_obj< ::Dynamic >::__new().Add(t),tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(792)
			return tmp3;
		}
	}
	HX_STACK_LINE(787)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseTypeNext,return )

Array< ::Dynamic > Parser_obj::parseExprList( ::hscript::Token etk){
	HX_STACK_FRAME("hscript.Parser","parseExprList",0x8286afb2,"hscript.Parser.parseExprList","hscript/Parser.hx",796,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(etk,"etk")
	HX_STACK_LINE(797)
	Array< ::Dynamic > args = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(args,"args");
	HX_STACK_LINE(798)
	::hscript::Token tmp = this->token();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(798)
	::hscript::Token tk = tmp;		HX_STACK_VAR(tk,"tk");
	HX_STACK_LINE(799)
	bool tmp1 = (tk == etk);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(799)
	if ((tmp1)){
		HX_STACK_LINE(800)
		return args;
	}
	HX_STACK_LINE(801)
	{
		HX_STACK_LINE(801)
		::haxe::ds::GenericStack_hscript_Token tmp2 = this->tokens;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(801)
		::haxe::ds::GenericStack_hscript_Token _this = tmp2;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(801)
		::haxe::ds::GenericCell_hscript_Token tmp3 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(801)
		_this->head = tmp3;
	}
	HX_STACK_LINE(802)
	while((true)){
		HX_STACK_LINE(803)
		::hscript::Expr tmp2 = this->parseExpr();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(803)
		args->push(tmp2);
		HX_STACK_LINE(804)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(804)
		tk = tmp3;
		HX_STACK_LINE(805)
		int _switch_14 = (tk->__Index());
		if (  ( _switch_14==(int)9)){
		}
		else  {
			HX_STACK_LINE(808)
			bool tmp4 = (tk == etk);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(808)
			if ((tmp4)){
				HX_STACK_LINE(808)
				break;
			}
			HX_STACK_LINE(809)
			::hscript::Token tmp5 = tk;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(809)
			this->unexpected(tmp5);
		}
;
;
	}
	HX_STACK_LINE(812)
	return args;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,parseExprList,return )

Void Parser_obj::incPos( ){
{
		HX_STACK_FRAME("hscript.Parser","incPos",0xe19d25aa,"hscript.Parser.incPos","hscript/Parser.hx",815,0x98735743)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,incPos,(void))

int Parser_obj::readChar( ){
	HX_STACK_FRAME("hscript.Parser","readChar",0x8625b4a0,"hscript.Parser.readChar","hscript/Parser.hx",821,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(823)
	int tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(823)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(823)
		::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(823)
		tmp = tmp1->readByte();
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(823)
				tmp = (int)0;
			}
		}
	}
	HX_STACK_LINE(823)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,readChar,return )

::String Parser_obj::readString( int until){
	HX_STACK_FRAME("hscript.Parser","readString",0xfc2f051b,"hscript.Parser.readString","hscript/Parser.hx",826,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(until,"until")
	HX_STACK_LINE(827)
	int c = (int)0;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(828)
	::haxe::io::BytesOutput tmp = ::haxe::io::BytesOutput_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(828)
	::haxe::io::BytesOutput b = tmp;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(829)
	bool esc = false;		HX_STACK_VAR(esc,"esc");
	HX_STACK_LINE(830)
	int tmp1 = this->line;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(830)
	int old = tmp1;		HX_STACK_VAR(old,"old");
	HX_STACK_LINE(831)
	::haxe::io::Input tmp2 = this->input;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(831)
	::haxe::io::Input s = tmp2;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(835)
	while((true)){
		HX_STACK_LINE(836)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(838)
			int tmp3 = s->readByte();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(838)
			c = tmp3;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(840)
					this->line = old;
					HX_STACK_LINE(841)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
				}
			}
		}
		HX_STACK_LINE(843)
		bool tmp3 = esc;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(843)
		if ((tmp3)){
			HX_STACK_LINE(844)
			esc = false;
			HX_STACK_LINE(845)
			int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(845)
			switch( (int)(tmp4)){
				case (int)110: {
					HX_STACK_LINE(846)
					b->writeByte((int)10);
				}
				;break;
				case (int)114: {
					HX_STACK_LINE(847)
					b->writeByte((int)13);
				}
				;break;
				case (int)116: {
					HX_STACK_LINE(848)
					b->writeByte((int)9);
				}
				;break;
				case (int)39: case (int)34: case (int)92: {
					HX_STACK_LINE(849)
					int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(849)
					b->writeByte(tmp5);
				}
				;break;
				case (int)47: {
					HX_STACK_LINE(850)
					bool tmp5 = this->allowJSON;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(850)
					if ((tmp5)){
						HX_STACK_LINE(850)
						int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(850)
						b->writeByte(tmp6);
					}
					else{
						HX_STACK_LINE(850)
						int tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(850)
						this->invalidChar(tmp6);
					}
				}
				;break;
				case (int)117: {
					HX_STACK_LINE(852)
					bool tmp5 = this->allowJSON;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(852)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(852)
					if ((tmp6)){
						HX_STACK_LINE(852)
						int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(852)
						HX_STACK_DO_THROW(this->invalidChar(tmp7));
					}
					HX_STACK_LINE(853)
					::String code = null();		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(854)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(859)
						::String tmp7 = s->readString((int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(859)
						code = tmp7;
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(861)
								this->line = old;
								HX_STACK_LINE(862)
								HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedString);
							}
						}
					}
					HX_STACK_LINE(864)
					int k = (int)0;		HX_STACK_VAR(k,"k");
					HX_STACK_LINE(865)
					{
						HX_STACK_LINE(865)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(865)
						while((true)){
							HX_STACK_LINE(865)
							bool tmp7 = (_g < (int)4);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(865)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(865)
							if ((tmp8)){
								HX_STACK_LINE(865)
								break;
							}
							HX_STACK_LINE(865)
							int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(865)
							int i = tmp9;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(866)
							hx::ShlEq(k,(int)4);
							HX_STACK_LINE(867)
							int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(867)
							Dynamic tmp11 = code.charCodeAt(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(867)
							Dynamic _char = tmp11;		HX_STACK_VAR(_char,"char");
							HX_STACK_LINE(868)
							bool tmp12 = (_char != null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(868)
							if ((tmp12)){
								HX_STACK_LINE(868)
								Dynamic tmp13 = _char;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(868)
								switch( (int)(tmp13)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(870)
										int tmp14 = (_char - (int)48);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(870)
										hx::AddEq(k,tmp14);
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(872)
										int tmp14 = (_char - (int)55);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(872)
										hx::AddEq(k,tmp14);
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(874)
										int tmp14 = (_char - (int)87);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(874)
										hx::AddEq(k,tmp14);
									}
									;break;
									default: {
										HX_STACK_LINE(876)
										Dynamic tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(876)
										this->invalidChar(tmp14);
									}
								}
							}
							else{
								HX_STACK_LINE(876)
								Dynamic tmp13 = _char;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(876)
								this->invalidChar(tmp13);
							}
						}
					}
					HX_STACK_LINE(880)
					bool tmp7 = (k <= (int)127);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(880)
					if ((tmp7)){
						HX_STACK_LINE(881)
						int tmp8 = k;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(881)
						b->writeByte(tmp8);
					}
					else{
						HX_STACK_LINE(882)
						bool tmp8 = (k <= (int)2047);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(882)
						if ((tmp8)){
							HX_STACK_LINE(883)
							int tmp9 = (int(k) >> int((int)6));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(883)
							int tmp10 = (int((int)192) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(883)
							b->writeByte(tmp10);
							HX_STACK_LINE(884)
							int tmp11 = (int(k) & int((int)63));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(884)
							int tmp12 = (int((int)128) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(884)
							b->writeByte(tmp12);
						}
						else{
							HX_STACK_LINE(886)
							int tmp9 = (int(k) >> int((int)12));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(886)
							int tmp10 = (int((int)224) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(886)
							b->writeByte(tmp10);
							HX_STACK_LINE(887)
							int tmp11 = (int(k) >> int((int)6));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(887)
							int tmp12 = (int(tmp11) & int((int)63));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(887)
							int tmp13 = (int((int)128) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(887)
							b->writeByte(tmp13);
							HX_STACK_LINE(888)
							int tmp14 = (int(k) & int((int)63));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(888)
							int tmp15 = (int((int)128) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(888)
							b->writeByte(tmp15);
						}
					}
				}
				;break;
				default: {
					HX_STACK_LINE(890)
					int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(890)
					this->invalidChar(tmp5);
				}
			}
		}
		else{
			HX_STACK_LINE(892)
			bool tmp4 = (c == (int)92);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(892)
			if ((tmp4)){
				HX_STACK_LINE(893)
				esc = true;
			}
			else{
				HX_STACK_LINE(894)
				bool tmp5 = (c == until);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(894)
				if ((tmp5)){
					HX_STACK_LINE(895)
					break;
				}
				else{
					HX_STACK_LINE(897)
					bool tmp6 = (c == (int)10);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(897)
					if ((tmp6)){
						HX_STACK_LINE(897)
						(this->line)++;
					}
					HX_STACK_LINE(898)
					int tmp7 = c;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(898)
					b->writeByte(tmp7);
				}
			}
		}
	}
	HX_STACK_LINE(901)
	::haxe::io::Bytes tmp3 = b->getBytes();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(901)
	::String tmp4 = tmp3->toString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(901)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,readString,return )

::hscript::Token Parser_obj::token( ){
	HX_STACK_FRAME("hscript.Parser","token",0x3cb36b25,"hscript.Parser.token","hscript/Parser.hx",904,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_LINE(922)
	::haxe::ds::GenericStack_hscript_Token tmp = this->tokens;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(922)
	::haxe::ds::GenericCell_hscript_Token tmp1 = tmp->head;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(922)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(922)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(922)
	if ((tmp3)){
		HX_STACK_LINE(923)
		::hscript::Token tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(923)
		{
			HX_STACK_LINE(923)
			::haxe::ds::GenericStack_hscript_Token tmp5 = this->tokens;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(923)
			::haxe::ds::GenericStack_hscript_Token _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(923)
			::haxe::ds::GenericCell_hscript_Token k = _this->head;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(923)
			bool tmp6 = (k == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(923)
			if ((tmp6)){
				HX_STACK_LINE(923)
				tmp4 = null();
			}
			else{
				HX_STACK_LINE(923)
				_this->head = k->next;
				HX_STACK_LINE(923)
				tmp4 = k->elt;
			}
		}
		HX_STACK_LINE(923)
		return tmp4;
	}
	HX_STACK_LINE(925)
	int _char;		HX_STACK_VAR(_char,"char");
	HX_STACK_LINE(926)
	int tmp4 = this->_char;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(926)
	bool tmp5 = (tmp4 < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(926)
	if ((tmp5)){
		HX_STACK_LINE(927)
		int tmp6 = this->readChar();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(927)
		_char = tmp6;
	}
	else{
		HX_STACK_LINE(929)
		int tmp6 = this->_char;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(929)
		_char = tmp6;
		HX_STACK_LINE(930)
		this->_char = (int)-1;
	}
	HX_STACK_LINE(932)
	while((true)){
		HX_STACK_LINE(933)
		int tmp6 = _char;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(933)
		switch( (int)(tmp6)){
			case (int)0: {
				HX_STACK_LINE(934)
				return ::hscript::Token_obj::TEof;
			}
			;break;
			case (int)32: case (int)9: case (int)13: {
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(939)
				(this->line)++;
			}
			;break;
			case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
				HX_STACK_LINE(944)
				int tmp7 = (_char - (int)48);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(944)
				Float tmp8 = (tmp7 * ((Float)1.0));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(944)
				Float n = tmp8;		HX_STACK_VAR(n,"n");
				HX_STACK_LINE(945)
				Float exp = ((Float)0.);		HX_STACK_VAR(exp,"exp");
				HX_STACK_LINE(946)
				while((true)){
					HX_STACK_LINE(947)
					int tmp9 = this->readChar();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(947)
					_char = tmp9;
					HX_STACK_LINE(948)
					hx::MultEq(exp,(int)10);
					HX_STACK_LINE(949)
					int tmp10 = _char;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(949)
					switch( (int)(tmp10)){
						case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
							HX_STACK_LINE(951)
							Float tmp11 = (n * (int)10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(951)
							int tmp12 = (_char - (int)48);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(951)
							Float tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(951)
							n = tmp13;
						}
						;break;
						case (int)46: {
							HX_STACK_LINE(953)
							bool tmp11 = (exp > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(953)
							if ((tmp11)){
								HX_STACK_LINE(955)
								bool tmp12 = (exp == (int)10);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(955)
								bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(955)
								if ((tmp12)){
									HX_STACK_LINE(955)
									int tmp14 = this->readChar();		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(955)
									int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(955)
									tmp13 = (tmp15 == (int)46);
								}
								else{
									HX_STACK_LINE(955)
									tmp13 = false;
								}
								HX_STACK_LINE(955)
								if ((tmp13)){
									HX_STACK_LINE(956)
									{
										HX_STACK_LINE(956)
										::hscript::Token tmp14 = ::hscript::Token_obj::TOp(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(956)
										::hscript::Token tk = tmp14;		HX_STACK_VAR(tk,"tk");
										HX_STACK_LINE(956)
										{
											HX_STACK_LINE(956)
											::haxe::ds::GenericStack_hscript_Token tmp15 = this->tokens;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(956)
											::haxe::ds::GenericStack_hscript_Token _this = tmp15;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(956)
											::haxe::ds::GenericCell_hscript_Token tmp16 = ::haxe::ds::GenericCell_hscript_Token_obj::__new(tk,_this->head);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(956)
											_this->head = tmp16;
										}
									}
									HX_STACK_LINE(957)
									Float tmp14 = n;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(957)
									int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(957)
									int i = tmp15;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(958)
									bool tmp16 = (i == n);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(958)
									::hscript::Const tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(958)
									if ((tmp16)){
										HX_STACK_LINE(958)
										int tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(958)
										tmp17 = ::hscript::Const_obj::CInt(tmp18);
									}
									else{
										HX_STACK_LINE(958)
										Float tmp18 = n;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(958)
										tmp17 = ::hscript::Const_obj::CFloat(tmp18);
									}
									HX_STACK_LINE(958)
									::hscript::Token tmp18 = ::hscript::Token_obj::TConst(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(958)
									return tmp18;
								}
								HX_STACK_LINE(960)
								int tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(960)
								this->invalidChar(tmp14);
							}
							HX_STACK_LINE(962)
							exp = ((Float)1.);
						}
						;break;
						case (int)120: {
							HX_STACK_LINE(964)
							bool tmp11 = (n > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(964)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(964)
							bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(964)
							if ((tmp12)){
								HX_STACK_LINE(964)
								tmp13 = (exp > (int)0);
							}
							else{
								HX_STACK_LINE(964)
								tmp13 = true;
							}
							HX_STACK_LINE(964)
							if ((tmp13)){
								HX_STACK_LINE(965)
								int tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(965)
								this->invalidChar(tmp14);
							}
							HX_STACK_LINE(968)
							int n1 = (int)0;		HX_STACK_VAR(n1,"n1");
							HX_STACK_LINE(969)
							while((true)){
								HX_STACK_LINE(970)
								int tmp14 = this->readChar();		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(970)
								_char = tmp14;
								HX_STACK_LINE(971)
								int tmp15 = _char;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(971)
								switch( (int)(tmp15)){
									case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
										HX_STACK_LINE(973)
										int tmp16 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(973)
										int tmp17 = _char;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(973)
										int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(973)
										int tmp19 = (tmp18 - (int)48);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(973)
										n1 = tmp19;
									}
									;break;
									case (int)65: case (int)66: case (int)67: case (int)68: case (int)69: case (int)70: {
										HX_STACK_LINE(975)
										int tmp16 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(975)
										int tmp17 = (_char - (int)55);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(975)
										int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(975)
										n1 = tmp18;
									}
									;break;
									case (int)97: case (int)98: case (int)99: case (int)100: case (int)101: case (int)102: {
										HX_STACK_LINE(977)
										int tmp16 = (int(n1) << int((int)4));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(977)
										int tmp17 = (_char - (int)87);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(977)
										int tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(977)
										n1 = tmp18;
									}
									;break;
									default: {
										HX_STACK_LINE(979)
										this->_char = _char;
										HX_STACK_LINE(980)
										int tmp16 = n1;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(980)
										::hscript::Const tmp17 = ::hscript::Const_obj::CInt(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(980)
										::hscript::Token tmp18 = ::hscript::Token_obj::TConst(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(980)
										return tmp18;
									}
								}
							}
						}
						;break;
						default: {
							HX_STACK_LINE(1005)
							this->_char = _char;
							HX_STACK_LINE(1006)
							Float tmp11 = n;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1006)
							int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1006)
							int i = tmp12;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1007)
							bool tmp13 = (exp > (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1007)
							::hscript::Const tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1007)
							if ((tmp13)){
								HX_STACK_LINE(1007)
								Float tmp15 = (n * (int)10);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1007)
								Float tmp16 = exp;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1007)
								Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1007)
								tmp14 = ::hscript::Const_obj::CFloat(tmp17);
							}
							else{
								HX_STACK_LINE(1007)
								bool tmp15 = (i == n);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1007)
								if ((tmp15)){
									HX_STACK_LINE(1007)
									int tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1007)
									tmp14 = ::hscript::Const_obj::CInt(tmp16);
								}
								else{
									HX_STACK_LINE(1007)
									Float tmp16 = n;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1007)
									tmp14 = ::hscript::Const_obj::CFloat(tmp16);
								}
							}
							HX_STACK_LINE(1007)
							::hscript::Token tmp15 = ::hscript::Token_obj::TConst(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1007)
							return tmp15;
						}
					}
				}
			}
			;break;
			case (int)59: {
				HX_STACK_LINE(1010)
				return ::hscript::Token_obj::TSemicolon;
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(1011)
				return ::hscript::Token_obj::TPOpen;
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(1012)
				return ::hscript::Token_obj::TPClose;
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(1013)
				return ::hscript::Token_obj::TComma;
			}
			;break;
			case (int)46: {
				HX_STACK_LINE(1015)
				int tmp7 = this->readChar();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1015)
				_char = tmp7;
				HX_STACK_LINE(1016)
				int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1016)
				switch( (int)(tmp8)){
					case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
						HX_STACK_LINE(1018)
						int tmp9 = (_char - (int)48);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1018)
						int n = tmp9;		HX_STACK_VAR(n,"n");
						HX_STACK_LINE(1019)
						int exp = (int)1;		HX_STACK_VAR(exp,"exp");
						HX_STACK_LINE(1020)
						while((true)){
							HX_STACK_LINE(1021)
							int tmp10 = this->readChar();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(1021)
							_char = tmp10;
							HX_STACK_LINE(1022)
							hx::MultEq(exp,(int)10);
							HX_STACK_LINE(1023)
							int tmp11 = _char;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1023)
							switch( (int)(tmp11)){
								case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
									HX_STACK_LINE(1025)
									int tmp12 = (n * (int)10);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1025)
									int tmp13 = (_char - (int)48);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1025)
									int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1025)
									n = tmp14;
								}
								;break;
								default: {
									HX_STACK_LINE(1027)
									this->_char = _char;
									HX_STACK_LINE(1028)
									Float tmp12 = (Float(n) / Float(exp));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1028)
									::hscript::Const tmp13 = ::hscript::Const_obj::CFloat(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1028)
									::hscript::Token tmp14 = ::hscript::Token_obj::TConst(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1028)
									return tmp14;
								}
							}
						}
					}
					;break;
					case (int)46: {
						HX_STACK_LINE(1032)
						int tmp9 = this->readChar();		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(1032)
						_char = tmp9;
						HX_STACK_LINE(1033)
						bool tmp10 = (_char != (int)46);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1033)
						if ((tmp10)){
							HX_STACK_LINE(1034)
							int tmp11 = _char;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(1034)
							this->invalidChar(tmp11);
						}
						HX_STACK_LINE(1035)
						::hscript::Token tmp11 = ::hscript::Token_obj::TOp(HX_HCSTRING("...","\xee","\x0f","\x23","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1035)
						return tmp11;
					}
					;break;
					default: {
						HX_STACK_LINE(1037)
						this->_char = _char;
						HX_STACK_LINE(1038)
						return ::hscript::Token_obj::TDot;
					}
				}
			}
			;break;
			case (int)123: {
				HX_STACK_LINE(1040)
				return ::hscript::Token_obj::TBrOpen;
			}
			;break;
			case (int)125: {
				HX_STACK_LINE(1041)
				return ::hscript::Token_obj::TBrClose;
			}
			;break;
			case (int)91: {
				HX_STACK_LINE(1042)
				return ::hscript::Token_obj::TBkOpen;
			}
			;break;
			case (int)93: {
				HX_STACK_LINE(1043)
				return ::hscript::Token_obj::TBkClose;
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(1044)
				::String tmp7 = this->readString((int)39);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1044)
				::hscript::Const tmp8 = ::hscript::Const_obj::CString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1044)
				::hscript::Token tmp9 = ::hscript::Token_obj::TConst(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1044)
				return tmp9;
			}
			;break;
			case (int)34: {
				HX_STACK_LINE(1045)
				::String tmp7 = this->readString((int)34);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1045)
				::hscript::Const tmp8 = ::hscript::Const_obj::CString(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1045)
				::hscript::Token tmp9 = ::hscript::Token_obj::TConst(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1045)
				return tmp9;
			}
			;break;
			case (int)63: {
				HX_STACK_LINE(1046)
				return ::hscript::Token_obj::TQuestion;
			}
			;break;
			case (int)58: {
				HX_STACK_LINE(1047)
				return ::hscript::Token_obj::TDoubleDot;
			}
			;break;
			default: {
				HX_STACK_LINE(1049)
				bool tmp7 = this->ops->__get(_char);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1049)
				if ((tmp7)){
					HX_STACK_LINE(1050)
					int tmp8 = _char;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1050)
					::String tmp9 = ::String::fromCharCode(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1050)
					::String op = tmp9;		HX_STACK_VAR(op,"op");
					HX_STACK_LINE(1051)
					while((true)){
						HX_STACK_LINE(1052)
						int tmp10 = this->readChar();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1052)
						_char = tmp10;
						HX_STACK_LINE(1053)
						bool tmp11 = this->ops->__get(_char);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1053)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1053)
						if ((tmp12)){
							HX_STACK_LINE(1054)
							Dynamic tmp13 = op.charCodeAt((int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1054)
							bool tmp14 = (tmp13 == (int)47);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1054)
							if ((tmp14)){
								HX_STACK_LINE(1055)
								::String tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1055)
								int tmp16 = _char;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1055)
								::hscript::Token tmp17 = this->tokenComment(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1055)
								return tmp17;
							}
							HX_STACK_LINE(1056)
							this->_char = _char;
							HX_STACK_LINE(1057)
							::String tmp15 = op;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1057)
							::hscript::Token tmp16 = ::hscript::Token_obj::TOp(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1057)
							return tmp16;
						}
						HX_STACK_LINE(1059)
						int tmp13 = _char;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1059)
						::String tmp14 = ::String::fromCharCode(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1059)
						hx::AddEq(op,tmp14);
					}
				}
				HX_STACK_LINE(1062)
				bool tmp8 = this->idents->__get(_char);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1062)
				if ((tmp8)){
					HX_STACK_LINE(1063)
					int tmp9 = _char;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1063)
					::String tmp10 = ::String::fromCharCode(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1063)
					::String id = tmp10;		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(1064)
					while((true)){
						HX_STACK_LINE(1065)
						int tmp11 = this->readChar();		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1065)
						_char = tmp11;
						HX_STACK_LINE(1066)
						bool tmp12 = this->idents->__get(_char);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(1066)
						bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1066)
						if ((tmp13)){
							HX_STACK_LINE(1067)
							this->_char = _char;
							HX_STACK_LINE(1068)
							::String tmp14 = id;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1068)
							::hscript::Token tmp15 = ::hscript::Token_obj::TId(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1068)
							return tmp15;
						}
						HX_STACK_LINE(1070)
						int tmp14 = _char;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1070)
						::String tmp15 = ::String::fromCharCode(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(1070)
						hx::AddEq(id,tmp15);
					}
				}
				HX_STACK_LINE(1073)
				int tmp9 = _char;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1073)
				this->invalidChar(tmp9);
			}
		}
		HX_STACK_LINE(1075)
		int tmp7 = this->readChar();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1075)
		_char = tmp7;
	}
	HX_STACK_LINE(1077)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Parser_obj,token,return )

::hscript::Token Parser_obj::tokenComment( ::String op,int _char){
	HX_STACK_FRAME("hscript.Parser","tokenComment",0xb86c15ba,"hscript.Parser.tokenComment","hscript/Parser.hx",1080,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(op,"op")
	HX_STACK_ARG(_char,"char")
	HX_STACK_LINE(1081)
	Dynamic tmp = op.charCodeAt((int)1);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1081)
	Dynamic c = tmp;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(1082)
	::haxe::io::Input tmp1 = this->input;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1082)
	::haxe::io::Input s = tmp1;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(1083)
	bool tmp2 = (c == (int)47);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1083)
	if ((tmp2)){
		HX_STACK_LINE(1084)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1085)
			while((true)){
				HX_STACK_LINE(1085)
				bool tmp3 = (_char != (int)10);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1085)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1085)
				if ((tmp3)){
					HX_STACK_LINE(1085)
					tmp4 = (_char != (int)13);
				}
				else{
					HX_STACK_LINE(1085)
					tmp4 = false;
				}
				HX_STACK_LINE(1085)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1085)
				if ((tmp5)){
					HX_STACK_LINE(1085)
					break;
				}
				HX_STACK_LINE(1087)
				int tmp6 = s->readByte();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1087)
				_char = tmp6;
			}
			HX_STACK_LINE(1089)
			this->_char = _char;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
				}
			}
		}
		HX_STACK_LINE(1092)
		::hscript::Token tmp3 = this->token();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1092)
		return tmp3;
	}
	HX_STACK_LINE(1094)
	bool tmp3 = (c == (int)42);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1094)
	if ((tmp3)){
		HX_STACK_LINE(1095)
		int tmp4 = this->line;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1095)
		int old = tmp4;		HX_STACK_VAR(old,"old");
		HX_STACK_LINE(1096)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(1097)
			while((true)){
				HX_STACK_LINE(1098)
				while((true)){
					HX_STACK_LINE(1098)
					bool tmp5 = (_char != (int)42);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1098)
					bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(1098)
					if ((tmp6)){
						HX_STACK_LINE(1098)
						break;
					}
					HX_STACK_LINE(1099)
					bool tmp7 = (_char == (int)10);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1099)
					if ((tmp7)){
						HX_STACK_LINE(1099)
						(this->line)++;
					}
					HX_STACK_LINE(1101)
					int tmp8 = s->readByte();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1101)
					_char = tmp8;
				}
				HX_STACK_LINE(1104)
				int tmp5 = s->readByte();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1104)
				_char = tmp5;
				HX_STACK_LINE(1105)
				bool tmp6 = (_char == (int)47);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1105)
				if ((tmp6)){
					HX_STACK_LINE(1106)
					break;
				}
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(1109)
					this->line = old;
					HX_STACK_LINE(1110)
					HX_STACK_DO_THROW(::hscript::Error_obj::EUnterminatedComment);
				}
			}
		}
		HX_STACK_LINE(1112)
		::hscript::Token tmp5 = this->token();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1112)
		return tmp5;
	}
	HX_STACK_LINE(1114)
	this->_char = _char;
	HX_STACK_LINE(1115)
	::String tmp4 = op;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1115)
	::hscript::Token tmp5 = ::hscript::Token_obj::TOp(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1115)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(Parser_obj,tokenComment,return )

::String Parser_obj::constString( ::hscript::Const c){
	HX_STACK_FRAME("hscript.Parser","constString",0x0a4693c0,"hscript.Parser.constString","hscript/Parser.hx",1118,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c,"c")
	HX_STACK_LINE(1119)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1119)
	switch( (int)(c->__Index())){
		case (int)0: {
			HX_STACK_LINE(1119)
			int tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1119)
			int v = tmp1;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(1120)
			{
				HX_STACK_LINE(1120)
				int tmp2 = v;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1120)
				tmp = ::Std_obj::string(tmp2);
			}
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1119)
			Float tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1119)
			Float f = tmp1;		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(1121)
			{
				HX_STACK_LINE(1121)
				Float tmp2 = f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1121)
				tmp = ::Std_obj::string(tmp2);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1119)
			::String tmp1 = (::hscript::Const(c))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1119)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1122)
			tmp = s;
		}
		;break;
	}
	HX_STACK_LINE(1119)
	return tmp;
	HX_STACK_LINE(1119)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,constString,return )

::String Parser_obj::tokenString( ::hscript::Token t){
	HX_STACK_FRAME("hscript.Parser","tokenString",0x05f471d6,"hscript.Parser.tokenString","hscript/Parser.hx",1129,0x98735743)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(1130)
	::String tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1130)
	switch( (int)(t->__Index())){
		case (int)0: {
			HX_STACK_LINE(1131)
			tmp = HX_HCSTRING("<eof>","\x3e","\xee","\x21","\xcf");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(1130)
			::hscript::Const tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1130)
			::hscript::Const c = tmp1;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(1132)
			{
				HX_STACK_LINE(1132)
				::hscript::Const tmp2 = c;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1132)
				tmp = this->constString(tmp2);
			}
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(1130)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1130)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1133)
			tmp = s;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(1130)
			::String tmp1 = (::hscript::Token(t))->__Param(0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1130)
			::String s = tmp1;		HX_STACK_VAR(s,"s");
			HX_STACK_LINE(1134)
			tmp = s;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(1135)
			tmp = HX_HCSTRING("(","\x28","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(1136)
			tmp = HX_HCSTRING(")","\x29","\x00","\x00","\x00");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(1137)
			tmp = HX_HCSTRING("{","\x7b","\x00","\x00","\x00");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(1138)
			tmp = HX_HCSTRING("}","\x7d","\x00","\x00","\x00");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(1139)
			tmp = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(1140)
			tmp = HX_HCSTRING(",","\x2c","\x00","\x00","\x00");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(1141)
			tmp = HX_HCSTRING(";","\x3b","\x00","\x00","\x00");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(1142)
			tmp = HX_HCSTRING("[","\x5b","\x00","\x00","\x00");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(1143)
			tmp = HX_HCSTRING("]","\x5d","\x00","\x00","\x00");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(1144)
			tmp = HX_HCSTRING("?","\x3f","\x00","\x00","\x00");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(1145)
			tmp = HX_HCSTRING(":","\x3a","\x00","\x00","\x00");
		}
		;break;
	}
	HX_STACK_LINE(1130)
	return tmp;
	HX_STACK_LINE(1130)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Parser_obj,tokenString,return )

int Parser_obj::p1;

int Parser_obj::readPos;

int Parser_obj::tokenMin;

int Parser_obj::tokenMax;


Parser_obj::Parser_obj()
{
}

void Parser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Parser);
	HX_MARK_MEMBER_NAME(line,"line");
	HX_MARK_MEMBER_NAME(opChars,"opChars");
	HX_MARK_MEMBER_NAME(identChars,"identChars");
	HX_MARK_MEMBER_NAME(opPriority,"opPriority");
	HX_MARK_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_MARK_MEMBER_NAME(unops,"unops");
	HX_MARK_MEMBER_NAME(allowJSON,"allowJSON");
	HX_MARK_MEMBER_NAME(allowTypes,"allowTypes");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(_char,"char");
	HX_MARK_MEMBER_NAME(ops,"ops");
	HX_MARK_MEMBER_NAME(idents,"idents");
	HX_MARK_MEMBER_NAME(uid,"uid");
	HX_MARK_MEMBER_NAME(tokens,"tokens");
	HX_MARK_END_CLASS();
}

void Parser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(line,"line");
	HX_VISIT_MEMBER_NAME(opChars,"opChars");
	HX_VISIT_MEMBER_NAME(identChars,"identChars");
	HX_VISIT_MEMBER_NAME(opPriority,"opPriority");
	HX_VISIT_MEMBER_NAME(opRightAssoc,"opRightAssoc");
	HX_VISIT_MEMBER_NAME(unops,"unops");
	HX_VISIT_MEMBER_NAME(allowJSON,"allowJSON");
	HX_VISIT_MEMBER_NAME(allowTypes,"allowTypes");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(_char,"char");
	HX_VISIT_MEMBER_NAME(ops,"ops");
	HX_VISIT_MEMBER_NAME(idents,"idents");
	HX_VISIT_MEMBER_NAME(uid,"uid");
	HX_VISIT_MEMBER_NAME(tokens,"tokens");
}

Dynamic Parser_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mk") ) { return mk_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { return ops; }
		if (HX_FIELD_EQ(inName,"uid") ) { return uid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line; }
		if (HX_FIELD_EQ(inName,"char") ) { return _char; }
		if (HX_FIELD_EQ(inName,"push") ) { return push_dyn(); }
		if (HX_FIELD_EQ(inName,"expr") ) { return expr_dyn(); }
		if (HX_FIELD_EQ(inName,"pmin") ) { return pmin_dyn(); }
		if (HX_FIELD_EQ(inName,"pmax") ) { return pmax_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { return unops; }
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"parse") ) { return parse_dyn(); }
		if (HX_FIELD_EQ(inName,"token") ) { return token_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { return idents; }
		if (HX_FIELD_EQ(inName,"tokens") ) { return tokens; }
		if (HX_FIELD_EQ(inName,"ensure") ) { return ensure_dyn(); }
		if (HX_FIELD_EQ(inName,"incPos") ) { return incPos_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { return opChars; }
		if (HX_FIELD_EQ(inName,"isBlock") ) { return isBlock_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapCompr") ) { return mapCompr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeUnop") ) { return makeUnop_dyn(); }
		if (HX_FIELD_EQ(inName,"readChar") ) { return readChar_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { return allowJSON; }
		if (HX_FIELD_EQ(inName,"parseExpr") ) { return parseExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"makeBinop") ) { return makeBinop_dyn(); }
		if (HX_FIELD_EQ(inName,"parseType") ) { return parseType_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { return identChars; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { return opPriority; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { return allowTypes; }
		if (HX_FIELD_EQ(inName,"unexpected") ) { return unexpected_dyn(); }
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return invalidChar_dyn(); }
		if (HX_FIELD_EQ(inName,"parseString") ) { return parseString_dyn(); }
		if (HX_FIELD_EQ(inName,"parseObject") ) { return parseObject_dyn(); }
		if (HX_FIELD_EQ(inName,"constString") ) { return constString_dyn(); }
		if (HX_FIELD_EQ(inName,"tokenString") ) { return tokenString_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { return opRightAssoc; }
		if (HX_FIELD_EQ(inName,"tokenComment") ) { return tokenComment_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseFullExpr") ) { return parseFullExpr_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprNext") ) { return parseExprNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseTypeNext") ) { return parseTypeNext_dyn(); }
		if (HX_FIELD_EQ(inName,"parseExprList") ) { return parseExprList_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"parseStructure") ) { return parseStructure_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Parser_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ops") ) { ops=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uid") ) { uid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { line=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"char") ) { _char=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unops") ) { unops=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"idents") ) { idents=inValue.Cast< Array< bool > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tokens") ) { tokens=inValue.Cast< ::haxe::ds::GenericStack_hscript_Token >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opChars") ) { opChars=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"allowJSON") ) { allowJSON=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"identChars") ) { identChars=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opPriority") ) { opPriority=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowTypes") ) { allowTypes=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"opRightAssoc") ) { opRightAssoc=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Parser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"));
	outFields->push(HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"));
	outFields->push(HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"));
	outFields->push(HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"));
	outFields->push(HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"));
	outFields->push(HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"));
	outFields->push(HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"));
	outFields->push(HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"));
	outFields->push(HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"));
	outFields->push(HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"));
	outFields->push(HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"));
	outFields->push(HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"));
	outFields->push(HX_HCSTRING("uid","\x90","\x23","\x59","\x00"));
	outFields->push(HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Parser_obj,line),HX_HCSTRING("line","\xf4","\x17","\xb3","\x47")},
	{hx::fsString,(int)offsetof(Parser_obj,opChars),HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8")},
	{hx::fsString,(int)offsetof(Parser_obj,identChars),HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opPriority),HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,opRightAssoc),HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Parser_obj,unops),HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowJSON),HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1")},
	{hx::fsBool,(int)offsetof(Parser_obj,allowTypes),HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Parser_obj,input),HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe")},
	{hx::fsInt,(int)offsetof(Parser_obj,_char),HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,ops),HX_HCSTRING("ops","\x32","\x9c","\x54","\x00")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Parser_obj,idents),HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2")},
	{hx::fsInt,(int)offsetof(Parser_obj,uid),HX_HCSTRING("uid","\x90","\x23","\x59","\x00")},
	{hx::fsObject /*::haxe::ds::GenericStack_hscript_Token*/ ,(int)offsetof(Parser_obj,tokens),HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Parser_obj::p1,HX_HCSTRING("p1","\xc1","\x61","\x00","\x00")},
	{hx::fsInt,(void *) &Parser_obj::readPos,HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02")},
	{hx::fsInt,(void *) &Parser_obj::tokenMin,HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b")},
	{hx::fsInt,(void *) &Parser_obj::tokenMax,HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("line","\xf4","\x17","\xb3","\x47"),
	HX_HCSTRING("opChars","\xfc","\xf3","\xa7","\xa8"),
	HX_HCSTRING("identChars","\xcd","\x23","\x3f","\xee"),
	HX_HCSTRING("opPriority","\xa5","\x21","\xd8","\x3e"),
	HX_HCSTRING("opRightAssoc","\x9a","\xd1","\xfe","\x02"),
	HX_HCSTRING("unops","\x79","\xf3","\xeb","\xa6"),
	HX_HCSTRING("allowJSON","\x31","\x27","\x44","\xb1"),
	HX_HCSTRING("allowTypes","\x30","\x2b","\x97","\x45"),
	HX_HCSTRING("input","\x0a","\xc4","\x1d","\xbe"),
	HX_HCSTRING("char","\xd6","\x5e","\xbf","\x41"),
	HX_HCSTRING("ops","\x32","\x9c","\x54","\x00"),
	HX_HCSTRING("idents","\x83","\x4f","\xa1","\xd2"),
	HX_HCSTRING("uid","\x90","\x23","\x59","\x00"),
	HX_HCSTRING("tokens","\x5a","\x17","\xe7","\x91"),
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("invalidChar","\x6d","\xad","\xce","\xa9"),
	HX_HCSTRING("parseString","\x64","\xd5","\x6c","\x8c"),
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	HX_HCSTRING("unexpected","\xd1","\x15","\xf4","\xc5"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("ensure","\xbe","\xf5","\x7b","\x04"),
	HX_HCSTRING("expr","\x35","\xfd","\x1d","\x43"),
	HX_HCSTRING("pmin","\x22","\xf7","\x5a","\x4a"),
	HX_HCSTRING("pmax","\x34","\xf0","\x5a","\x4a"),
	HX_HCSTRING("mk","\x5e","\x5f","\x00","\x00"),
	HX_HCSTRING("isBlock","\x03","\x19","\x82","\x51"),
	HX_HCSTRING("parseFullExpr","\xb7","\xbd","\x60","\x9c"),
	HX_HCSTRING("parseObject","\x52","\x2b","\x7c","\x90"),
	HX_HCSTRING("parseExpr","\x08","\x4f","\xc4","\xca"),
	HX_HCSTRING("mapCompr","\x47","\xa4","\x9f","\xc1"),
	HX_HCSTRING("makeUnop","\xc8","\xc4","\x47","\x44"),
	HX_HCSTRING("makeBinop","\xda","\x90","\x98","\x86"),
	HX_HCSTRING("parseStructure","\x80","\x85","\x70","\x8b"),
	HX_HCSTRING("parseExprNext","\x1b","\x24","\xa8","\xf3"),
	HX_HCSTRING("parseType","\x8d","\x44","\xaf","\xd4"),
	HX_HCSTRING("parseTypeNext","\x20","\xc0","\xfc","\xfa"),
	HX_HCSTRING("parseExprList","\x86","\xbb","\x58","\xf2"),
	HX_HCSTRING("incPos","\x56","\xe7","\x39","\x93"),
	HX_HCSTRING("readChar","\x4c","\x39","\xb7","\x69"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	HX_HCSTRING("token","\xf9","\x82","\x2b","\x14"),
	HX_HCSTRING("tokenComment","\x66","\x60","\xfb","\x25"),
	HX_HCSTRING("constString","\x94","\x42","\x30","\xa9"),
	HX_HCSTRING("tokenString","\xaa","\x20","\xde","\xa4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_MARK_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_MARK_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Parser_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Parser_obj::p1,"p1");
	HX_VISIT_MEMBER_NAME(Parser_obj::readPos,"readPos");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMin,"tokenMin");
	HX_VISIT_MEMBER_NAME(Parser_obj::tokenMax,"tokenMax");
};

#endif

hx::Class Parser_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("p1","\xc1","\x61","\x00","\x00"),
	HX_HCSTRING("readPos","\xde","\x03","\xcf","\x02"),
	HX_HCSTRING("tokenMin","\x19","\xa8","\x42","\x2b"),
	HX_HCSTRING("tokenMax","\x2b","\xa1","\x42","\x2b"),
	::String(null()) };

void Parser_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("hscript.Parser","\x9a","\x9f","\xf2","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Parser_obj >;
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

void Parser_obj::__boot()
{
	p1= (int)0;
	readPos= (int)0;
	tokenMin= (int)0;
	tokenMax= (int)0;
}

} // end namespace hscript
