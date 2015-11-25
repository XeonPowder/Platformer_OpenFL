#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCInput
#include <pgr/dconsole/input/DCInput.h>
#endif
#ifndef INCLUDED_pgr_dconsole_input_DCOpenflInput
#include <pgr/dconsole/input/DCOpenflInput.h>
#endif
namespace pgr{
namespace dconsole{
namespace input{

Void DCOpenflInput_obj::__construct()
{
HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","new",0x35b72d61,"pgr.dconsole.input.DCOpenflInput.new","pgr/dconsole/input/DCOpenflInput.hx",16,0x50ba8b10)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DCOpenflInput_obj::~DCOpenflInput_obj() { }

Dynamic DCOpenflInput_obj::__CreateEmpty() { return  new DCOpenflInput_obj; }
hx::ObjectPtr< DCOpenflInput_obj > DCOpenflInput_obj::__new()
{  hx::ObjectPtr< DCOpenflInput_obj > _result_ = new DCOpenflInput_obj();
	_result_->__construct();
	return _result_;}

Dynamic DCOpenflInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCOpenflInput_obj > _result_ = new DCOpenflInput_obj();
	_result_->__construct();
	return _result_;}

hx::Object *DCOpenflInput_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::pgr::dconsole::input::DCInput_obj)) return operator ::pgr::dconsole::input::DCInput_obj *();
	return super::__ToInterface(inType);
}

DCOpenflInput_obj::operator ::pgr::dconsole::input::DCInput_obj *()
	{ return new ::pgr::dconsole::input::DCInput_delegate_< DCOpenflInput_obj >(this); }
Void DCOpenflInput_obj::init( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","init",0xc7493eef,"pgr.dconsole.input.DCOpenflInput.init","pgr/dconsole/input/DCOpenflInput.hx",19,0x50ba8b10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		this->enable();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInput_obj,init,(void))

Void DCOpenflInput_obj::enable( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","enable",0x7c85a822,"pgr.dconsole.input.DCOpenflInput.enable","pgr/dconsole/input/DCOpenflInput.hx",22,0x50ba8b10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(24)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		::String tmp1 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(24)
		Dynamic tmp2 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(24)
		tmp->stage->removeEventListener(tmp1,tmp2,false);
		HX_STACK_LINE(25)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(25)
		::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(25)
		Dynamic tmp5 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(25)
		tmp3->stage->removeEventListener(tmp4,tmp5,false);
		HX_STACK_LINE(26)
		::openfl::display::MovieClip tmp6 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		::String tmp7 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(26)
		Dynamic tmp8 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(26)
		tmp6->stage->addEventListener(tmp7,tmp8,false,null(),null());
		HX_STACK_LINE(27)
		::openfl::display::MovieClip tmp9 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(27)
		::String tmp10 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(27)
		Dynamic tmp11 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(27)
		tmp9->stage->addEventListener(tmp10,tmp11,false,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInput_obj,enable,(void))

Void DCOpenflInput_obj::disable( ){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","disable",0xab94db69,"pgr.dconsole.input.DCOpenflInput.disable","pgr/dconsole/input/DCOpenflInput.hx",31,0x50ba8b10)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::String tmp1 = ::openfl::events::KeyboardEvent_obj::KEY_UP;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		Dynamic tmp2 = this->onKeyUp_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		tmp->stage->removeEventListener(tmp1,tmp2,false);
		HX_STACK_LINE(33)
		::openfl::display::MovieClip tmp3 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		::String tmp4 = ::openfl::events::KeyboardEvent_obj::KEY_DOWN;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		Dynamic tmp5 = this->onKeyDown_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		tmp3->stage->removeEventListener(tmp4,tmp5,false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInput_obj,disable,(void))

Void DCOpenflInput_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","onKeyDown",0xcb4eb603,"pgr.dconsole.input.DCOpenflInput.onKeyDown","pgr/dconsole/input/DCOpenflInput.hx",37,0x50ba8b10)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInput_obj,onKeyDown,(void))

Void DCOpenflInput_obj::onKeyUp( ::openfl::events::KeyboardEvent e){
{
		HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","onKeyUp",0x6f78c9bc,"pgr.dconsole.input.DCOpenflInput.onKeyUp","pgr/dconsole/input/DCOpenflInput.hx",46,0x50ba8b10)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(48)
		::pgr::dconsole::DConsole tmp = this->console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(48)
		Dynamic tmp1 = tmp->monitorKey;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		::openfl::events::KeyboardEvent tmp2 = e;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(48)
		bool tmp3 = this->matchesKey(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(48)
		if ((tmp3)){
			HX_STACK_LINE(49)
			::pgr::dconsole::DConsole tmp4 = this->console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(49)
			tmp4->toggleMonitor(null());
			HX_STACK_LINE(50)
			return null();
		}
		else{
			HX_STACK_LINE(55)
			::pgr::dconsole::DConsole tmp4 = this->console;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(55)
			Dynamic tmp5 = tmp4->profilerKey;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(55)
			::openfl::events::KeyboardEvent tmp6 = e;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(55)
			bool tmp7 = this->matchesKey(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(55)
			if ((tmp7)){
				HX_STACK_LINE(56)
				::pgr::dconsole::DConsole tmp8 = this->console;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(56)
				tmp8->toggleProfiler(null());
				HX_STACK_LINE(57)
				return null();
			}
			else{
				HX_STACK_LINE(62)
				::pgr::dconsole::DConsole tmp8 = this->console;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(62)
				Dynamic tmp9 = tmp8->consoleKey;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(62)
				::openfl::events::KeyboardEvent tmp10 = e;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(62)
				bool tmp11 = this->matchesKey(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(62)
				if ((tmp11)){
					HX_STACK_LINE(63)
					::pgr::dconsole::DConsole tmp12 = this->console;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(63)
					bool tmp13 = tmp12->visible;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(63)
					if ((tmp13)){
						HX_STACK_LINE(64)
						::pgr::dconsole::DConsole tmp14 = this->console;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(64)
						tmp14->hideConsole();
					}
					else{
						HX_STACK_LINE(66)
						::pgr::dconsole::DConsole tmp14 = this->console;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(66)
						tmp14->showConsole();
					}
					HX_STACK_LINE(68)
					return null();
				}
				else{
					HX_STACK_LINE(73)
					::pgr::dconsole::DConsole tmp12 = this->console;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(73)
					bool tmp13 = tmp12->visible;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(73)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(73)
					if ((tmp14)){
						HX_STACK_LINE(74)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g = e->keyCode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(77)
			switch( (int)(tmp4)){
				case (int)13: {
					HX_STACK_LINE(78)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(78)
					tmp5->processInputLine();
				}
				;break;
				case (int)34: {
					HX_STACK_LINE(79)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(79)
					tmp5->scrollDown();
				}
				;break;
				case (int)33: {
					HX_STACK_LINE(80)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(80)
					tmp5->scrollUp();
				}
				;break;
				case (int)38: {
					HX_STACK_LINE(81)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(81)
					tmp5->nextHistory();
				}
				;break;
				case (int)40: {
					HX_STACK_LINE(82)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(82)
					tmp5->prevHistory();
				}
				;break;
				default: {
					HX_STACK_LINE(83)
					::pgr::dconsole::DConsole tmp5 = this->console;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(83)
					tmp5->resetHistoryIndex();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInput_obj,onKeyUp,(void))

bool DCOpenflInput_obj::matchesKey( Dynamic key,::openfl::events::KeyboardEvent e){
	HX_STACK_FRAME("pgr.dconsole.input.DCOpenflInput","matchesKey",0xef4e138b,"pgr.dconsole.input.DCOpenflInput.matchesKey","pgr/dconsole/input/DCOpenflInput.hx",91,0x50ba8b10)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(92)
	int tmp = key->__Field(HX_HCSTRING("keycode","\x4c","\xf6","\xc4","\xb0"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(92)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	tmp1 = hx::TCast< ::Int >::cast(e->keyCode);
	HX_STACK_LINE(92)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	if ((tmp3)){
		HX_STACK_LINE(93)
		tmp4 = (key->__Field(HX_HCSTRING("altKey","\xf6","\xa7","\xca","\x44"), hx::paccDynamic ) == e->altKey);
	}
	else{
		HX_STACK_LINE(92)
		tmp4 = false;
	}
	HX_STACK_LINE(92)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(92)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(92)
	if ((tmp5)){
		HX_STACK_LINE(94)
		tmp6 = (key->__Field(HX_HCSTRING("ctrlKey","\xb4","\x35","\x7d","\x61"), hx::paccDynamic ) == e->ctrlKey);
	}
	else{
		HX_STACK_LINE(92)
		tmp6 = false;
	}
	HX_STACK_LINE(92)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(92)
	if ((tmp6)){
		HX_STACK_LINE(95)
		tmp7 = (key->__Field(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"), hx::paccDynamic ) == e->shiftKey);
	}
	else{
		HX_STACK_LINE(92)
		tmp7 = false;
	}
	HX_STACK_LINE(92)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(DCOpenflInput_obj,matchesKey,return )


DCOpenflInput_obj::DCOpenflInput_obj()
{
}

void DCOpenflInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCOpenflInput);
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_END_CLASS();
}

void DCOpenflInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(console,"console");
}

Dynamic DCOpenflInput_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"matchesKey") ) { return matchesKey_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCOpenflInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCOpenflInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCOpenflInput_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("matchesKey","\x6c","\x5e","\xa9","\xd5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCOpenflInput_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCOpenflInput_obj::__mClass,"__mClass");
};

#endif

hx::Class DCOpenflInput_obj::__mClass;

void DCOpenflInput_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.input.DCOpenflInput","\xef","\xe8","\xa2","\x8a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCOpenflInput_obj >;
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
} // end namespace input
