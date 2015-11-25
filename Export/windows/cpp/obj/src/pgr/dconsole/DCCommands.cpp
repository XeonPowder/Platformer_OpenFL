#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Expr
#include <hscript/Expr.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ALIAS_TYPE
#include <pgr/dconsole/ALIAS_TYPE.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCCommands
#include <pgr/dconsole/DCCommands.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCInterp
#include <pgr/dconsole/DCInterp.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCUtil
#include <pgr/dconsole/DCUtil.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
namespace pgr{
namespace dconsole{

Void DCCommands_obj::__construct(::pgr::dconsole::DConsole console)
{
HX_STACK_FRAME("pgr.dconsole.DCCommands","new",0xe7b883a1,"pgr.dconsole.DCCommands.new","pgr/dconsole/DCCommands.hx",30,0x5c05a70f)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(38)
	this->printErrorStack = false;
	struct _Function_1_1{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",35,0x5c05a70f)
			{
				HX_STACK_LINE(35)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(35)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(35)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(35)
	this->classMap = _Function_1_1::Block();
	struct _Function_1_2{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",34,0x5c05a70f)
			{
				HX_STACK_LINE(34)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(34)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(34)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(34)
	this->commandsMap = _Function_1_2::Block();
	struct _Function_1_3{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",33,0x5c05a70f)
			{
				HX_STACK_LINE(33)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(33)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(33)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(33)
	this->objectsMap = _Function_1_3::Block();
	struct _Function_1_4{
		inline static ::haxe::ds::StringMap Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",32,0x5c05a70f)
			{
				HX_STACK_LINE(32)
				::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(32)
				::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(32)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(32)
	this->functionsMap = _Function_1_4::Block();
	HX_STACK_LINE(44)
	this->_console = console;
	HX_STACK_LINE(46)
	::hscript::Parser tmp = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(46)
	this->hScriptParser = tmp;
	HX_STACK_LINE(47)
	::hscript::Parser tmp1 = this->hScriptParser;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	tmp1->allowTypes = true;
	HX_STACK_LINE(48)
	::hscript::Parser tmp2 = this->hScriptParser;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	tmp2->allowJSON = true;
	HX_STACK_LINE(49)
	::pgr::dconsole::DCInterp tmp3 = ::pgr::dconsole::DCInterp_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	this->hScriptInterp = tmp3;
	HX_STACK_LINE(50)
	::pgr::dconsole::DCInterp tmp4 = this->hScriptInterp;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	::haxe::ds::StringMap tmp5 = this->objectsMap;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(50)
	tmp4->variables->set(HX_HCSTRING("objectsMap","\x28","\x96","\x9d","\xe3"),tmp5);
	HX_STACK_LINE(51)
	this->registerClass(hx::ClassOf< ::Math >(),HX_HCSTRING("Math","\xe8","\x6d","\x2f","\x33"));
}
;
	return null();
}

//DCCommands_obj::~DCCommands_obj() { }

Dynamic DCCommands_obj::__CreateEmpty() { return  new DCCommands_obj; }
hx::ObjectPtr< DCCommands_obj > DCCommands_obj::__new(::pgr::dconsole::DConsole console)
{  hx::ObjectPtr< DCCommands_obj > _result_ = new DCCommands_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic DCCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCCommands_obj > _result_ = new DCCommands_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DCCommands_obj::registerClass( ::hx::Class cls,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","registerClass",0x079ce956,"pgr.dconsole.DCCommands.registerClass","pgr/dconsole/DCCommands.hx",54,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cls,"cls")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(55)
		::pgr::dconsole::DCInterp tmp = this->hScriptInterp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(55)
		::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		bool tmp2 = tmp->variables->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(55)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(55)
		if ((tmp4)){
			HX_STACK_LINE(55)
			tmp5 = (cls != null());
		}
		else{
			HX_STACK_LINE(55)
			tmp5 = false;
		}
		HX_STACK_LINE(55)
		if ((tmp5)){
			HX_STACK_LINE(56)
			::pgr::dconsole::DCInterp tmp6 = this->hScriptInterp;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(56)
			::String tmp7 = alias;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(56)
			::hx::Class tmp8 = cls;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(56)
			tmp6->variables->set(tmp7,tmp8);
			HX_STACK_LINE(57)
			::haxe::ds::StringMap tmp9 = this->classMap;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(57)
			::String tmp10 = alias;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(57)
			::hx::Class tmp11 = cls;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(57)
			tmp9->set(tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DCCommands_obj,registerClass,(void))

Void DCCommands_obj::evaluate( ::String input){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","evaluate",0xae354178,"pgr.dconsole.DCCommands.evaluate","pgr/dconsole/DCCommands.hx",67,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(input,"input")
		HX_STACK_LINE(69)
		Array< ::String > args = input.split(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(args,"args");
		HX_STACK_LINE(70)
		::String tmp = args->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::String tmp1 = tmp.toLowerCase();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::String commandName = tmp1;		HX_STACK_VAR(commandName,"commandName");
		HX_STACK_LINE(71)
		bool tmp2 = (commandName != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		if ((tmp2)){
			HX_STACK_LINE(71)
			tmp3 = (commandName != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(71)
			tmp3 = false;
		}
		HX_STACK_LINE(71)
		if ((tmp3)){
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp4 = this->commandsMap;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(72)
			Dynamic tmp5 = tmp4->iterator();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp5);  __it->hasNext(); ){
				Dynamic command = __it->next();
				{
					HX_STACK_LINE(73)
					bool tmp6 = (commandName == command->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic ));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(73)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(73)
					bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(73)
					if ((tmp7)){
						HX_STACK_LINE(73)
						tmp8 = (commandName == command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic ));
					}
					else{
						HX_STACK_LINE(73)
						tmp8 = true;
					}
					HX_STACK_LINE(73)
					if ((tmp8)){
						HX_STACK_LINE(76)
						args->shift();
						HX_STACK_LINE(77)
						command->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic )(args);
						HX_STACK_LINE(78)
						return null();
					}
				}
;
			}
		}
		HX_STACK_LINE(84)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(85)
			::String tmp4 = input;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			::String tmp5 = ::StringTools_obj::trim(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			bool tmp6 = ::StringTools_obj::endsWith(tmp5,HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(85)
			bool tmp7 = (tmp6 == false);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(85)
			if ((tmp7)){
				HX_STACK_LINE(86)
				::String tmp8 = input;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(86)
				::String tmp9 = ::StringTools_obj::trim(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(86)
				::String tmp10 = (tmp9 + HX_HCSTRING(";","\x3b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(86)
				input = tmp10;
			}
			HX_STACK_LINE(88)
			::hscript::Parser tmp8 = this->hScriptParser;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(88)
			::String tmp9 = input;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(88)
			::hscript::Expr tmp10 = tmp8->parseString(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(88)
			::hscript::Expr program = tmp10;		HX_STACK_VAR(program,"program");
			HX_STACK_LINE(90)
			::pgr::dconsole::DCInterp tmp11 = this->hScriptInterp;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(90)
			::hscript::Expr tmp12 = program;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(90)
			Dynamic tmp13 = tmp11->exprReturn(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(90)
			Dynamic result = tmp13;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(91)
			Dynamic tmp14 = result;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(91)
			Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(91)
			bool tmp16 = ::Std_obj::is(tmp15,hx::ClassOf< ::Float >());		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(91)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(91)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(91)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			if ((tmp18)){
				HX_STACK_LINE(91)
				Dynamic tmp20 = result;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(91)
				Dynamic tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(91)
				Dynamic tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(91)
				tmp19 = ::Std_obj::is(tmp22,hx::ClassOf< ::Bool >());
			}
			else{
				HX_STACK_LINE(91)
				tmp19 = true;
			}
			HX_STACK_LINE(91)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(91)
			if ((tmp20)){
				HX_STACK_LINE(91)
				tmp21 = (result != null());
			}
			else{
				HX_STACK_LINE(91)
				tmp21 = true;
			}
			HX_STACK_LINE(91)
			if ((tmp21)){
				HX_STACK_LINE(92)
				::pgr::dconsole::DConsole tmp22 = this->_console;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(92)
				Dynamic tmp23 = result;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(92)
				tmp22->logConfirmation(tmp23);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(97)
					bool tmp4 = this->printErrorStack;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(97)
					if ((tmp4)){
						HX_STACK_LINE(98)
						Array< ::Dynamic > stack = ::haxe::CallStack_obj::exceptionStack();		HX_STACK_VAR(stack,"stack");
						HX_STACK_LINE(99)
						{
							HX_STACK_LINE(99)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(99)
							while((true)){
								HX_STACK_LINE(99)
								bool tmp5 = (_g < stack->length);		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(99)
								bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(99)
								if ((tmp6)){
									HX_STACK_LINE(99)
									break;
								}
								HX_STACK_LINE(99)
								::haxe::StackItem tmp7 = stack->__get(_g).StaticCast< ::haxe::StackItem >();		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(99)
								::haxe::StackItem entry = tmp7;		HX_STACK_VAR(entry,"entry");
								HX_STACK_LINE(99)
								++(_g);
								HX_STACK_LINE(100)
								::pgr::dconsole::DConsole tmp8 = this->_console;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(100)
								::haxe::StackItem tmp9 = entry;		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(100)
								tmp8->log(tmp9,null());
							}
						}
					}
					HX_STACK_LINE(103)
					::pgr::dconsole::DConsole tmp5 = this->_console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(103)
					Dynamic tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(103)
					::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(103)
					tmp5->logError(tmp7);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,evaluate,(void))

Void DCCommands_obj::registerCommand( Dynamic Function,::String alias,::String __o_shortcut,::String __o_description,::String __o_help){
::String shortcut = __o_shortcut.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String description = __o_description.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
::String help = __o_help.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	HX_STACK_FRAME("pgr.dconsole.DCCommands","registerCommand",0xef86e5e9,"pgr.dconsole.DCCommands.registerCommand","pgr/dconsole/DCCommands.hx",113,0x5c05a70f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Function,"Function")
	HX_STACK_ARG(alias,"alias")
	HX_STACK_ARG(shortcut,"shortcut")
	HX_STACK_ARG(description,"description")
	HX_STACK_ARG(help,"help")
{
		HX_STACK_LINE(114)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		bool tmp1 = ::Reflect_obj::isFunction(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(114)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		if ((tmp2)){
			HX_STACK_LINE(115)
			::pgr::dconsole::DConsole tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(115)
			Dynamic tmp4 = Function;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(115)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(115)
			::String tmp6 = (HX_HCSTRING("Command function ","\xd3","\xe2","\x05","\xb9") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(115)
			::String tmp7 = (tmp6 + HX_HCSTRING(" is not valid.","\x75","\x0b","\x4e","\x1a"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(115)
			tmp3->logError(tmp7);
			HX_STACK_LINE(116)
			return null();
		}
		HX_STACK_LINE(119)
		::String tmp3 = alias;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		::String tmp4 = ::pgr::dconsole::DCUtil_obj::formatAlias(hx::ObjectPtr<OBJ_>(this),tmp3,::pgr::dconsole::ALIAS_TYPE_obj::COMMAND);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		alias = tmp4;
		HX_STACK_LINE(120)
		bool tmp5 = (alias == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		if ((tmp5)){
			HX_STACK_LINE(121)
			::pgr::dconsole::DConsole tmp6 = this->_console;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(121)
			tmp6->log(HX_HCSTRING("Failed to register command, make sure alias or shortcut is correct","\x9e","\xa2","\xd2","\xc4"),null());
			HX_STACK_LINE(122)
			return null();
		}
		HX_STACK_LINE(125)
		bool tmp6 = (shortcut != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(125)
		if ((tmp6)){
			HX_STACK_LINE(126)
			::String tmp7 = shortcut;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			::String tmp8 = ::pgr::dconsole::DCUtil_obj::formatAlias(hx::ObjectPtr<OBJ_>(this),tmp7,::pgr::dconsole::ALIAS_TYPE_obj::COMMAND);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(126)
			shortcut = tmp8;
			HX_STACK_LINE(128)
			bool tmp9 = (shortcut == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			if ((tmp9)){
				HX_STACK_LINE(129)
				shortcut = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ::String &help,::String &description,::String &shortcut,Dynamic &Function,::String &alias){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",133,0x5c05a70f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f") , Function,false);
					__result->Add(HX_HCSTRING("alias","\x90","\x51","\x91","\x21") , alias,false);
					__result->Add(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8") , shortcut,false);
					__result->Add(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f") , description,false);
					__result->Add(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45") , help,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(133)
		Dynamic tmp7 = _Function_1_1::Block(help,description,shortcut,Function,alias);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(133)
		Dynamic command = tmp7;		HX_STACK_VAR(command,"command");
		HX_STACK_LINE(141)
		::haxe::ds::StringMap tmp8 = this->commandsMap;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(141)
		::String tmp9 = alias;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(141)
		Dynamic tmp10 = command;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(141)
		tmp8->set(tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(DCCommands_obj,registerCommand,(void))

Void DCCommands_obj::registerFunction( Dynamic Function,::String alias,::String description){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","registerFunction",0xfc7f40ba,"pgr.dconsole.DCCommands.registerFunction","pgr/dconsole/DCCommands.hx",145,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Function,"Function")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_ARG(description,"description")
		HX_STACK_LINE(147)
		Dynamic tmp = Function;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		bool tmp1 = ::Reflect_obj::isFunction(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(147)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(147)
		if ((tmp2)){
			HX_STACK_LINE(148)
			::pgr::dconsole::DConsole tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(148)
			Dynamic tmp4 = Function;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			::String tmp5 = ::Std_obj::string(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			::String tmp6 = (HX_HCSTRING("Function ","\xe8","\xe9","\xd5","\x55") + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			::String tmp7 = (tmp6 + HX_HCSTRING(" is not valid.","\x75","\x0b","\x4e","\x1a"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(148)
			tmp3->logError(tmp7);
			HX_STACK_LINE(149)
			return null();
		}
		HX_STACK_LINE(152)
		::String tmp3 = alias;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(152)
		::String tmp4 = ::pgr::dconsole::DCUtil_obj::formatAlias(hx::ObjectPtr<OBJ_>(this),tmp3,::pgr::dconsole::ALIAS_TYPE_obj::FUNCTION);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(152)
		alias = tmp4;
		HX_STACK_LINE(153)
		bool tmp5 = (alias == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(153)
		if ((tmp5)){
			HX_STACK_LINE(154)
			::pgr::dconsole::DConsole tmp6 = this->_console;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(154)
			Dynamic tmp7 = Function;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(154)
			::String tmp9 = (HX_HCSTRING("Function ","\xe8","\xe9","\xd5","\x55") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(154)
			::String tmp10 = (tmp9 + HX_HCSTRING(" alias not valid","\x7f","\x6f","\xa9","\x32"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(154)
			tmp6->logError(tmp10);
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(158)
		::haxe::ds::StringMap tmp6 = this->functionsMap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(158)
		::String tmp7 = alias;		HX_STACK_VAR(tmp7,"tmp7");
		struct _Function_1_1{
			inline static Dynamic Block( ::String &description,Dynamic &Function){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCCommands.hx",158,0x5c05a70f)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f") , Function,false);
					__result->Add(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f") , description,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(158)
		Dynamic tmp8 = _Function_1_1::Block(description,Function);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(158)
		tmp6->set(tmp7,tmp8);
		HX_STACK_LINE(159)
		{
			HX_STACK_LINE(159)
			Dynamic value = Function;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(159)
			::pgr::dconsole::DCInterp tmp9 = this->hScriptInterp;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(159)
			::String tmp10 = alias;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(159)
			Dynamic tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(159)
			tmp9->variables->set(tmp10,tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DCCommands_obj,registerFunction,(void))

Void DCCommands_obj::registerObject( Dynamic object,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","registerObject",0xb1de07e1,"pgr.dconsole.DCCommands.registerObject","pgr/dconsole/DCCommands.hx",163,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(165)
		Dynamic tmp = object;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		bool tmp1 = ::Reflect_obj::isObject(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		if ((tmp2)){
			HX_STACK_LINE(166)
			::pgr::dconsole::DConsole tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			tmp3->logError(HX_HCSTRING("dynamic passed is not an object.","\xd0","\xd1","\xda","\x1e"));
			HX_STACK_LINE(167)
			return null();
		}
		HX_STACK_LINE(170)
		bool tmp3 = (alias == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(170)
		if ((tmp3)){
			HX_STACK_LINE(171)
			Dynamic tmp4 = object;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(171)
			::hx::Class tmp5 = ::Type_obj::getClass(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(171)
			::String tmp6 = ::Type_obj::getClassName(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			::String tmp7 = tmp6.toLowerCase();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(171)
			::String tmp8 = ::StringTools_obj::replace(tmp7,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),HX_HCSTRING("_","\x5f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			::String tmp9 = ::pgr::dconsole::DCUtil_obj::formatAlias(hx::ObjectPtr<OBJ_>(this),tmp8,::pgr::dconsole::ALIAS_TYPE_obj::OBJECT);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			alias = tmp9;
		}
		else{
			HX_STACK_LINE(173)
			::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(173)
			::String tmp5 = ::pgr::dconsole::DCUtil_obj::formatAlias(hx::ObjectPtr<OBJ_>(this),tmp4,::pgr::dconsole::ALIAS_TYPE_obj::OBJECT);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(173)
			alias = tmp5;
		}
		HX_STACK_LINE(176)
		bool tmp4 = (alias == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		if ((tmp4)){
			HX_STACK_LINE(177)
			::pgr::dconsole::DConsole tmp5 = this->_console;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			Dynamic tmp6 = object;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			::hx::Class tmp7 = ::Type_obj::getClass(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(177)
			::String tmp8 = ::Type_obj::getClassName(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(177)
			::String tmp9 = (HX_HCSTRING("failed to register object ","\x26","\x74","\x69","\xe8") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(177)
			::String tmp10 = (tmp9 + HX_HCSTRING(" make sure object alias is correct","\x4c","\xe6","\xf7","\x6c"));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(177)
			tmp5->logError(tmp10);
			HX_STACK_LINE(178)
			return null();
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			Dynamic value = object;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(181)
			::haxe::ds::StringMap tmp5 = this->objectsMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(181)
			::String tmp6 = alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(181)
			Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(181)
			tmp5->set(tmp6,tmp7);
		}
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			Dynamic value = object;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(182)
			::pgr::dconsole::DCInterp tmp5 = this->hScriptInterp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(182)
			::String tmp6 = alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(182)
			Dynamic tmp7 = value;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(182)
			tmp5->variables->set(tmp6,tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DCCommands_obj,registerObject,(void))

Void DCCommands_obj::unregisterFunction( ::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","unregisterFunction",0x089d2ed3,"pgr.dconsole.DCCommands.unregisterFunction","pgr/dconsole/DCCommands.hx",187,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(189)
		::haxe::ds::StringMap tmp = this->functionsMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(189)
		::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(189)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		if ((tmp2)){
			HX_STACK_LINE(190)
			::haxe::ds::StringMap tmp3 = this->functionsMap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(190)
			::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(190)
			tmp3->remove(tmp4);
			HX_STACK_LINE(191)
			::pgr::dconsole::DCInterp tmp5 = this->hScriptInterp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(191)
			::String tmp6 = alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(191)
			tmp5->variables->remove(tmp6);
			HX_STACK_LINE(192)
			::pgr::dconsole::DConsole tmp7 = this->_console;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(192)
			::String tmp8 = (alias + HX_HCSTRING(" unregistered.","\x93","\x16","\xce","\x8e"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(192)
			tmp7->logInfo(tmp8);
		}
		HX_STACK_LINE(194)
		::pgr::dconsole::DConsole tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		::String tmp4 = (alias + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(194)
		tmp3->logError(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,unregisterFunction,(void))

Void DCCommands_obj::unregisterObject( ::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","unregisterObject",0xd20c0dba,"pgr.dconsole.DCCommands.unregisterObject","pgr/dconsole/DCCommands.hx",198,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(alias,"alias")
		HX_STACK_LINE(200)
		::haxe::ds::StringMap tmp = this->objectsMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(200)
		::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(200)
		bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(200)
		if ((tmp2)){
			HX_STACK_LINE(201)
			::haxe::ds::StringMap tmp3 = this->objectsMap;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(201)
			::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(201)
			tmp3->remove(tmp4);
			HX_STACK_LINE(202)
			::pgr::dconsole::DCInterp tmp5 = this->hScriptInterp;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(202)
			::String tmp6 = alias;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(202)
			tmp5->variables->remove(tmp6);
			HX_STACK_LINE(203)
			::pgr::dconsole::DConsole tmp7 = this->_console;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(203)
			::String tmp8 = (alias + HX_HCSTRING(" unregistered.","\x93","\x16","\xce","\x8e"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(203)
			tmp7->logInfo(tmp8);
		}
		HX_STACK_LINE(205)
		::pgr::dconsole::DConsole tmp3 = this->_console;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(205)
		::String tmp4 = (alias + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(205)
		tmp3->logError(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,unregisterObject,(void))

Void DCCommands_obj::clearRegistry( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","clearRegistry",0xcdd862eb,"pgr.dconsole.DCCommands.clearRegistry","pgr/dconsole/DCCommands.hx",209,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		{
			HX_STACK_LINE(210)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(210)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(210)
			tmp = tmp2;
		}
		HX_STACK_LINE(210)
		this->functionsMap = tmp;
		HX_STACK_LINE(211)
		::haxe::ds::StringMap tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		{
			HX_STACK_LINE(211)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::haxe::ds::StringMap tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(211)
			tmp1 = tmp3;
		}
		HX_STACK_LINE(211)
		this->objectsMap = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCCommands_obj,clearRegistry,(void))

Void DCCommands_obj::showHelp( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","showHelp",0x5976d77d,"pgr.dconsole.DCCommands.showHelp","pgr/dconsole/DCCommands.hx",218,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(219)
		::String output = HX_HCSTRING("\n","\x0a","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(221)
		bool tmp = (args->length > (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(221)
		if ((tmp)){
			HX_STACK_LINE(224)
			::String tmp1 = args->__get((int)0);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(224)
			::String tmp2 = tmp1.toLowerCase();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(224)
			::String commandName = tmp2;		HX_STACK_VAR(commandName,"commandName");
			HX_STACK_LINE(225)
			bool tmp3 = (commandName != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(225)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(225)
			if ((tmp3)){
				HX_STACK_LINE(225)
				tmp4 = (commandName != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(225)
				tmp4 = false;
			}
			HX_STACK_LINE(225)
			if ((tmp4)){
				HX_STACK_LINE(226)
				::haxe::ds::StringMap tmp5 = this->commandsMap;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(226)
				Dynamic tmp6 = tmp5->iterator();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(226)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp6);  __it->hasNext(); ){
					Dynamic command = __it->next();
					{
						HX_STACK_LINE(227)
						bool tmp7 = (commandName == command->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic ));		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(227)
						bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(227)
						bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(227)
						if ((tmp8)){
							HX_STACK_LINE(227)
							tmp9 = (commandName == command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic ));
						}
						else{
							HX_STACK_LINE(227)
							tmp9 = true;
						}
						HX_STACK_LINE(227)
						if ((tmp9)){
							HX_STACK_LINE(228)
							::String tmp10 = command->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"), hx::paccDynamic )();		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(228)
							::String tmp11 = (HX_HCSTRING("command: ","\xb1","\xcc","\xa4","\xcc") + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(228)
							::String tmp12 = (tmp11 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(228)
							hx::AddEq(output,tmp12);
							HX_STACK_LINE(229)
							bool tmp13 = (command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic ) != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(229)
							if ((tmp13)){
								HX_STACK_LINE(230)
								::String tmp14 = HX_HCSTRING("shortcut: ","\xac","\x56","\xb4","\x14");		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(230)
								::String tmp15 = command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic )->__Field(HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"), hx::paccDynamic )();		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(230)
								::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(230)
								::String tmp17 = (tmp16 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(230)
								hx::AddEq(output,tmp17);
							}
							HX_STACK_LINE(231)
							::String tmp14 = (command->__Field(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"), hx::paccDynamic ) + HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(231)
							hx::AddEq(output,tmp14);
							HX_STACK_LINE(232)
							::String tmp15 = (command->__Field(HX_HCSTRING("help","\xc1","\x32","\x0b","\x45"), hx::paccDynamic ) + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(232)
							hx::AddEq(output,tmp15);
							HX_STACK_LINE(233)
							::pgr::dconsole::DConsole tmp16 = this->_console;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(233)
							::String tmp17 = output;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(233)
							tmp16->logInfo(tmp17);
							HX_STACK_LINE(234)
							return null();
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(238)
				::pgr::dconsole::DConsole tmp5 = this->_console;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(238)
				tmp5->logWarning(HX_HCSTRING("Command name not found","\xb5","\xb8","\x71","\xe0"));
				HX_STACK_LINE(239)
				return null();
			}
		}
		else{
			HX_STACK_LINE(244)
			hx::AddEq(output,HX_HCSTRING("Type COMMANDS to view available commands\n","\xe3","\x50","\xa7","\xd1"));
			HX_STACK_LINE(245)
			hx::AddEq(output,HX_HCSTRING("'PAGEUP' or 'PAGEDOWN' keys to scroll text\n","\xa1","\x9f","\x0f","\xa3"));
			HX_STACK_LINE(246)
			hx::AddEq(output,HX_HCSTRING("'UP' or 'DOWN' keys to navigate history\n","\xcc","\x05","\x14","\xcf"));
			HX_STACK_LINE(247)
			::pgr::dconsole::DConsole tmp1 = this->_console;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			::String tmp2 = output;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			tmp1->logInfo(tmp2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,showHelp,(void))

Void DCCommands_obj::showCommands( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","showCommands",0xdab86384,"pgr.dconsole.DCCommands.showCommands","pgr/dconsole/DCCommands.hx",252,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(253)
		::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(255)
		::haxe::ds::StringMap tmp = this->commandsMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		Dynamic tmp1 = tmp->iterator();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp1);  __it->hasNext(); ){
			Dynamic command = __it->next();
			{
				HX_STACK_LINE(256)
				::String tmp2 = command->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic )->__Field(HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"), hx::paccDynamic )();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(256)
				::String line = tmp2;		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(257)
				bool tmp3 = (command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic ) != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(257)
				if ((tmp3)){
					HX_STACK_LINE(258)
					::String tmp4 = HX_HCSTRING(" (","\x08","\x1c","\x00","\x00");		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(258)
					::String tmp5 = command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic )->__Field(HX_HCSTRING("toUpperCase","\x37","\x30","\xfd","\x38"), hx::paccDynamic )();		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(258)
					::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(258)
					::String tmp7 = (tmp6 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(258)
					hx::AddEq(line,tmp7);
				}
				HX_STACK_LINE(259)
				::String tmp4 = line;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(259)
				::String tmp5 = ::StringTools_obj::rpad(tmp4,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),(int)20);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(259)
				line = tmp5;
				HX_STACK_LINE(260)
				::String tmp6 = (command->__Field(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"), hx::paccDynamic ) + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(260)
				hx::AddEq(line,tmp6);
				HX_STACK_LINE(261)
				hx::AddEq(output,line);
			}
;
		}
		HX_STACK_LINE(264)
		::pgr::dconsole::DConsole tmp2 = this->_console;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(264)
		::String tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		tmp2->logInfo(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,showCommands,(void))

Void DCCommands_obj::listFunctions( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","listFunctions",0x8a13009e,"pgr.dconsole.DCCommands.listFunctions","pgr/dconsole/DCCommands.hx",268,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(269)
		::String list = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(270)
		::haxe::ds::StringMap tmp = this->functionsMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(271)
				::String line = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(line,"line");
				HX_STACK_LINE(272)
				hx::AddEq(line,key);
				HX_STACK_LINE(273)
				::String tmp2 = line;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(273)
				::String tmp3 = ::StringTools_obj::rpad(tmp2,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),(int)20);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(273)
				line = tmp3;
				HX_STACK_LINE(274)
				::haxe::ds::StringMap tmp4 = this->functionsMap;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(274)
				::String tmp5 = key;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(274)
				Dynamic tmp6 = tmp4->get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(274)
				::String tmp7 = tmp6->__Field(HX_HCSTRING("description","\xfc","\x08","\x1d","\x5f"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(274)
				::String tmp8 = (tmp7 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(274)
				hx::AddEq(line,tmp8);
				HX_STACK_LINE(275)
				hx::AddEq(list,line);
			}
;
		}
		HX_STACK_LINE(278)
		::String tmp2 = list.toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		bool tmp3 = (tmp2 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		if ((tmp3)){
			HX_STACK_LINE(279)
			::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			tmp4->logInfo(HX_HCSTRING("no functions registered.","\x08","\x34","\xa4","\xee"));
			HX_STACK_LINE(280)
			return null();
		}
		HX_STACK_LINE(283)
		::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(283)
		::String tmp5 = list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(283)
		tmp4->logConfirmation(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,listFunctions,(void))

Void DCCommands_obj::listObjects( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","listObjects",0x806a3857,"pgr.dconsole.DCCommands.listObjects","pgr/dconsole/DCCommands.hx",287,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(288)
		::String list = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(289)
		::haxe::ds::StringMap tmp = this->objectsMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(289)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(290)
				::String tmp2 = (key + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(290)
				hx::AddEq(list,tmp2);
			}
;
		}
		HX_STACK_LINE(293)
		::String tmp2 = list.toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(293)
		bool tmp3 = (tmp2 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(293)
		if ((tmp3)){
			HX_STACK_LINE(294)
			::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			tmp4->logInfo(HX_HCSTRING("no objects registered.","\xc1","\x39","\x94","\x32"));
			HX_STACK_LINE(295)
			return null();
		}
		HX_STACK_LINE(298)
		::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(298)
		::String tmp5 = list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(298)
		tmp4->logConfirmation(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,listObjects,(void))

Void DCCommands_obj::listClasses( Array< ::String > args){
{
		HX_STACK_FRAME("pgr.dconsole.DCCommands","listClasses",0x67ac1e29,"pgr.dconsole.DCCommands.listClasses","pgr/dconsole/DCCommands.hx",302,0x5c05a70f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(args,"args")
		HX_STACK_LINE(303)
		::String list = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(304)
		::haxe::ds::StringMap tmp = this->classMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(304)
		Dynamic tmp1 = tmp->keys();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(304)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp1);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(305)
				::String tmp2 = (key + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(305)
				hx::AddEq(list,tmp2);
			}
;
		}
		HX_STACK_LINE(308)
		::String tmp2 = list.toString();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(308)
		bool tmp3 = (tmp2 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(308)
		if ((tmp3)){
			HX_STACK_LINE(309)
			::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(309)
			tmp4->logInfo(HX_HCSTRING("no classes registered.","\x93","\x92","\x80","\xdf"));
			HX_STACK_LINE(310)
			return null();
		}
		HX_STACK_LINE(313)
		::pgr::dconsole::DConsole tmp4 = this->_console;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		::String tmp5 = list;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		tmp4->logConfirmation(tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,listClasses,(void))

Dynamic DCCommands_obj::getFunction( ::String alias){
	HX_STACK_FRAME("pgr.dconsole.DCCommands","getFunction",0x8161ca0f,"pgr.dconsole.DCCommands.getFunction","pgr/dconsole/DCCommands.hx",319,0x5c05a70f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alias,"alias")
	HX_STACK_LINE(320)
	::haxe::ds::StringMap tmp = this->functionsMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(320)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(320)
	if ((tmp2)){
		HX_STACK_LINE(321)
		::haxe::ds::StringMap tmp3 = this->functionsMap;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(321)
		::String tmp4 = alias;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(321)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(321)
		Dynamic tmp6 = tmp5->__Field(HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(321)
		return tmp6;
	}
	HX_STACK_LINE(323)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,getFunction,return )

Dynamic DCCommands_obj::getObject( ::String alias){
	HX_STACK_FRAME("pgr.dconsole.DCCommands","getObject",0x2cf621f6,"pgr.dconsole.DCCommands.getObject","pgr/dconsole/DCCommands.hx",327,0x5c05a70f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alias,"alias")
	HX_STACK_LINE(328)
	::haxe::ds::StringMap tmp = this->objectsMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(328)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,getObject,return )

Dynamic DCCommands_obj::getCommand( ::String alias){
	HX_STACK_FRAME("pgr.dconsole.DCCommands","getCommand",0x29859e34,"pgr.dconsole.DCCommands.getCommand","pgr/dconsole/DCCommands.hx",331,0x5c05a70f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alias,"alias")
	HX_STACK_LINE(332)
	::String tmp = alias.toLowerCase();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(332)
	alias = tmp;
	HX_STACK_LINE(333)
	::haxe::ds::StringMap tmp1 = this->commandsMap;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(333)
	Dynamic tmp2 = tmp1->iterator();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(333)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(tmp2);  __it->hasNext(); ){
		Dynamic command = __it->next();
		{
			HX_STACK_LINE(334)
			bool tmp3 = (command->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic ) == alias);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(334)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(334)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(334)
			if ((tmp4)){
				HX_STACK_LINE(334)
				tmp5 = (command->__Field(HX_HCSTRING("shortcut","\x86","\xf6","\xa4","\xe8"), hx::paccDynamic ) == alias);
			}
			else{
				HX_STACK_LINE(334)
				tmp5 = true;
			}
			HX_STACK_LINE(334)
			if ((tmp5)){
				HX_STACK_LINE(335)
				Dynamic tmp6 = command;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(335)
				return tmp6;
			}
		}
;
	}
	HX_STACK_LINE(338)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,getCommand,return )

::hx::Class DCCommands_obj::getClass( ::String alias){
	HX_STACK_FRAME("pgr.dconsole.DCCommands","getClass",0x551468e1,"pgr.dconsole.DCCommands.getClass","pgr/dconsole/DCCommands.hx",341,0x5c05a70f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(alias,"alias")
	HX_STACK_LINE(342)
	::haxe::ds::StringMap tmp = this->classMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(342)
	::String tmp1 = alias;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(342)
	::hx::Class tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(342)
	::hx::Class tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(342)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DCCommands_obj,getClass,return )


DCCommands_obj::DCCommands_obj()
{
}

void DCCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCCommands);
	HX_MARK_MEMBER_NAME(functionsMap,"functionsMap");
	HX_MARK_MEMBER_NAME(objectsMap,"objectsMap");
	HX_MARK_MEMBER_NAME(commandsMap,"commandsMap");
	HX_MARK_MEMBER_NAME(classMap,"classMap");
	HX_MARK_MEMBER_NAME(hScriptParser,"hScriptParser");
	HX_MARK_MEMBER_NAME(hScriptInterp,"hScriptInterp");
	HX_MARK_MEMBER_NAME(printErrorStack,"printErrorStack");
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_END_CLASS();
}

void DCCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(functionsMap,"functionsMap");
	HX_VISIT_MEMBER_NAME(objectsMap,"objectsMap");
	HX_VISIT_MEMBER_NAME(commandsMap,"commandsMap");
	HX_VISIT_MEMBER_NAME(classMap,"classMap");
	HX_VISIT_MEMBER_NAME(hScriptParser,"hScriptParser");
	HX_VISIT_MEMBER_NAME(hScriptInterp,"hScriptInterp");
	HX_VISIT_MEMBER_NAME(printErrorStack,"printErrorStack");
	HX_VISIT_MEMBER_NAME(_console,"_console");
}

Dynamic DCCommands_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"classMap") ) { return classMap; }
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		if (HX_FIELD_EQ(inName,"evaluate") ) { return evaluate_dyn(); }
		if (HX_FIELD_EQ(inName,"showHelp") ) { return showHelp_dyn(); }
		if (HX_FIELD_EQ(inName,"getClass") ) { return getClass_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getObject") ) { return getObject_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectsMap") ) { return objectsMap; }
		if (HX_FIELD_EQ(inName,"getCommand") ) { return getCommand_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"commandsMap") ) { return commandsMap; }
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		if (HX_FIELD_EQ(inName,"listClasses") ) { return listClasses_dyn(); }
		if (HX_FIELD_EQ(inName,"getFunction") ) { return getFunction_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionsMap") ) { return functionsMap; }
		if (HX_FIELD_EQ(inName,"showCommands") ) { return showCommands_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hScriptParser") ) { return hScriptParser; }
		if (HX_FIELD_EQ(inName,"hScriptInterp") ) { return hScriptInterp; }
		if (HX_FIELD_EQ(inName,"registerClass") ) { return registerClass_dyn(); }
		if (HX_FIELD_EQ(inName,"clearRegistry") ) { return clearRegistry_dyn(); }
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"registerObject") ) { return registerObject_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"printErrorStack") ) { return printErrorStack; }
		if (HX_FIELD_EQ(inName,"registerCommand") ) { return registerCommand_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerFunction") ) { return registerFunction_dyn(); }
		if (HX_FIELD_EQ(inName,"unregisterObject") ) { return unregisterObject_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"unregisterFunction") ) { return unregisterFunction_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"classMap") ) { classMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"objectsMap") ) { objectsMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"commandsMap") ) { commandsMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"functionsMap") ) { functionsMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hScriptParser") ) { hScriptParser=inValue.Cast< ::hscript::Parser >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hScriptInterp") ) { hScriptInterp=inValue.Cast< ::pgr::dconsole::DCInterp >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"printErrorStack") ) { printErrorStack=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("functionsMap","\x01","\x63","\x60","\x48"));
	outFields->push(HX_HCSTRING("objectsMap","\x28","\x96","\x9d","\xe3"));
	outFields->push(HX_HCSTRING("commandsMap","\xb4","\xbe","\xc5","\xfe"));
	outFields->push(HX_HCSTRING("classMap","\x44","\x3d","\x81","\xf5"));
	outFields->push(HX_HCSTRING("hScriptParser","\xd2","\x41","\x5d","\xa3"));
	outFields->push(HX_HCSTRING("hScriptInterp","\xc7","\x1e","\x5b","\x54"));
	outFields->push(HX_HCSTRING("printErrorStack","\xed","\x8c","\x02","\x10"));
	outFields->push(HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DCCommands_obj,functionsMap),HX_HCSTRING("functionsMap","\x01","\x63","\x60","\x48")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DCCommands_obj,objectsMap),HX_HCSTRING("objectsMap","\x28","\x96","\x9d","\xe3")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DCCommands_obj,commandsMap),HX_HCSTRING("commandsMap","\xb4","\xbe","\xc5","\xfe")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DCCommands_obj,classMap),HX_HCSTRING("classMap","\x44","\x3d","\x81","\xf5")},
	{hx::fsObject /*::hscript::Parser*/ ,(int)offsetof(DCCommands_obj,hScriptParser),HX_HCSTRING("hScriptParser","\xd2","\x41","\x5d","\xa3")},
	{hx::fsObject /*::pgr::dconsole::DCInterp*/ ,(int)offsetof(DCCommands_obj,hScriptInterp),HX_HCSTRING("hScriptInterp","\xc7","\x1e","\x5b","\x54")},
	{hx::fsBool,(int)offsetof(DCCommands_obj,printErrorStack),HX_HCSTRING("printErrorStack","\xed","\x8c","\x02","\x10")},
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCCommands_obj,_console),HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("functionsMap","\x01","\x63","\x60","\x48"),
	HX_HCSTRING("objectsMap","\x28","\x96","\x9d","\xe3"),
	HX_HCSTRING("commandsMap","\xb4","\xbe","\xc5","\xfe"),
	HX_HCSTRING("classMap","\x44","\x3d","\x81","\xf5"),
	HX_HCSTRING("hScriptParser","\xd2","\x41","\x5d","\xa3"),
	HX_HCSTRING("hScriptInterp","\xc7","\x1e","\x5b","\x54"),
	HX_HCSTRING("printErrorStack","\xed","\x8c","\x02","\x10"),
	HX_HCSTRING("_console","\xd8","\x44","\x8e","\x52"),
	HX_HCSTRING("registerClass","\xd5","\x3a","\xc1","\x3d"),
	HX_HCSTRING("evaluate","\x59","\x60","\x50","\x01"),
	HX_HCSTRING("registerCommand","\x28","\xd5","\x81","\x34"),
	HX_HCSTRING("registerFunction","\x9b","\xa8","\x15","\x13"),
	HX_HCSTRING("registerObject","\x82","\x05","\x81","\xdb"),
	HX_HCSTRING("unregisterFunction","\xf4","\x10","\x86","\xbf"),
	HX_HCSTRING("unregisterObject","\x9b","\x75","\xa2","\xe8"),
	HX_HCSTRING("clearRegistry","\x6a","\xb4","\xfc","\x03"),
	HX_HCSTRING("showHelp","\x5e","\xf6","\x91","\xac"),
	HX_HCSTRING("showCommands","\xe5","\x06","\xe3","\xe9"),
	HX_HCSTRING("listFunctions","\x1d","\x52","\x37","\xc0"),
	HX_HCSTRING("listObjects","\x16","\xdc","\x4e","\x39"),
	HX_HCSTRING("listClasses","\xe8","\xc1","\x90","\x20"),
	HX_HCSTRING("getFunction","\xce","\x6d","\x46","\x3a"),
	HX_HCSTRING("getObject","\xf5","\x07","\x96","\x91"),
	HX_HCSTRING("getCommand","\x55","\xf7","\xce","\xd0"),
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCCommands_obj::__mClass,"__mClass");
};

#endif

hx::Class DCCommands_obj::__mClass;

void DCCommands_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCCommands","\x2f","\x1f","\x2c","\x47");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCCommands_obj >;
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

} // end namespace pgr
} // end namespace dconsole
