#include <hxcpp.h>

#ifndef INCLUDED_core2_game_engine_input_keyboard_KeyboardListener
#include <core2/game/engine/input/keyboard/KeyboardListener.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
namespace core2{
namespace game{
namespace engine{
namespace input{
namespace keyboard{

Void KeyboardListener_obj::__construct()
{
HX_STACK_FRAME("core2.game.engine.input.keyboard.KeyboardListener","new",0xd9d4fe65,"core2.game.engine.input.keyboard.KeyboardListener.new","core2/game/engine/input/keyboard/KeyboardListener.hx",9,0x2bc386ac)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	this->keys = Array_obj< bool >::__new();
}
;
	return null();
}

//KeyboardListener_obj::~KeyboardListener_obj() { }

Dynamic KeyboardListener_obj::__CreateEmpty() { return  new KeyboardListener_obj; }
hx::ObjectPtr< KeyboardListener_obj > KeyboardListener_obj::__new()
{  hx::ObjectPtr< KeyboardListener_obj > _result_ = new KeyboardListener_obj();
	_result_->__construct();
	return _result_;}

Dynamic KeyboardListener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< KeyboardListener_obj > _result_ = new KeyboardListener_obj();
	_result_->__construct();
	return _result_;}

Void KeyboardListener_obj::keyDown( ::openfl::events::KeyboardEvent e){
{
		HX_STACK_FRAME("core2.game.engine.input.keyboard.KeyboardListener","keyDown",0x19f87e26,"core2.game.engine.input.keyboard.KeyboardListener.keyDown","core2/game/engine/input/keyboard/KeyboardListener.hx",12,0x2bc386ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(12)
		this->keys[e->keyCode] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardListener_obj,keyDown,(void))

Void KeyboardListener_obj::keyUp( ::openfl::events::KeyboardEvent e){
{
		HX_STACK_FRAME("core2.game.engine.input.keyboard.KeyboardListener","keyUp",0xfdab331f,"core2.game.engine.input.keyboard.KeyboardListener.keyUp","core2/game/engine/input/keyboard/KeyboardListener.hx",15,0x2bc386ac)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(15)
		this->keys[e->keyCode] = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardListener_obj,keyUp,(void))

bool KeyboardListener_obj::getKeyState( int x){
	HX_STACK_FRAME("core2.game.engine.input.keyboard.KeyboardListener","getKeyState",0x307f19ad,"core2.game.engine.input.keyboard.KeyboardListener.getKeyState","core2/game/engine/input/keyboard/KeyboardListener.hx",17,0x2bc386ac)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(18)
	bool tmp = this->keys->__get(x);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(KeyboardListener_obj,getKeyState,return )

::core2::game::engine::input::keyboard::KeyboardListener KeyboardListener_obj::getKeyboardListener( ){
	HX_STACK_FRAME("core2.game.engine.input.keyboard.KeyboardListener","getKeyboardListener",0xf3cba8f6,"core2.game.engine.input.keyboard.KeyboardListener.getKeyboardListener","core2/game/engine/input/keyboard/KeyboardListener.hx",21,0x2bc386ac)
	HX_STACK_THIS(this)
	HX_STACK_LINE(21)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(KeyboardListener_obj,getKeyboardListener,return )


KeyboardListener_obj::KeyboardListener_obj()
{
}

void KeyboardListener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KeyboardListener);
	HX_MARK_MEMBER_NAME(keys,"keys");
	HX_MARK_END_CLASS();
}

void KeyboardListener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keys,"keys");
}

Dynamic KeyboardListener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getKeyState") ) { return getKeyState_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getKeyboardListener") ) { return getKeyboardListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic KeyboardListener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KeyboardListener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(KeyboardListener_obj,keys),HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keys","\xf4","\xe1","\x06","\x47"),
	HX_HCSTRING("keyDown","\xa1","\x69","\x47","\x9c"),
	HX_HCSTRING("keyUp","\xda","\xb9","\xfe","\xde"),
	HX_HCSTRING("getKeyState","\xa8","\xde","\x68","\xee"),
	HX_HCSTRING("getKeyboardListener","\xf1","\x60","\xcb","\xe9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(KeyboardListener_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(KeyboardListener_obj::__mClass,"__mClass");
};

#endif

hx::Class KeyboardListener_obj::__mClass;

void KeyboardListener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.engine.input.keyboard.KeyboardListener","\xf3","\xe7","\xba","\xdb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< KeyboardListener_obj >;
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

} // end namespace core2
} // end namespace game
} // end namespace engine
} // end namespace input
} // end namespace keyboard
