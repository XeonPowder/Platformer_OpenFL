#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_engine_Engine
#include <core2/game/engine/Engine.h>
#endif
#ifndef INCLUDED_core2_game_engine_input_keyboard_KeyboardListener
#include <core2/game/engine/input/keyboard/KeyboardListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_Player
#include <core2/game/entity/type/player/Player.h>
#endif
#ifndef INCLUDED_core2_game_entity_type_player_managers_PlayerManager
#include <core2/game/entity/type/player/managers/PlayerManager.h>
#endif
#ifndef INCLUDED_core2_game_world_World
#include <core2/game/world/World.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_Map
#include <core2/game/world/maps/Map.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
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
namespace core2{
namespace game{
namespace engine{

Void Engine_obj::__construct(::core2::game::world::World w)
{
HX_STACK_FRAME("core2.game.engine.Engine","new",0xe4b8a69f,"core2.game.engine.Engine.new","core2/game/engine/Engine.hx",119,0xcfbfe5f0)
HX_STACK_THIS(this)
HX_STACK_ARG(w,"w")
{
	HX_STACK_LINE(120)
	this->world = w;
	HX_STACK_LINE(121)
	::core2::game::engine::input::keyboard::KeyboardListener tmp = ::core2::game::engine::input::keyboard::KeyboardListener_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(121)
	this->keyboardListener = tmp;
}
;
	return null();
}

//Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(::core2::game::world::World w)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(w);
	return _result_;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > _result_ = new Engine_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Engine_obj::tick( ::openfl::events::Event e){
{
		HX_STACK_FRAME("core2.game.engine.Engine","tick",0x40d3643e,"core2.game.engine.Engine.tick","core2/game/engine/Engine.hx",123,0xcfbfe5f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(124)
		bool tmp = (e->type == HX_HCSTRING("ENTER_FRAME","\x46","\xa6","\xab","\xc6"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(125)
			::core2::game::world::World tmp1 = this->world;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(125)
			::core2::game::world::maps::Map tmp2 = tmp1->getMap();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(125)
			tmp2->update();
			HX_STACK_LINE(126)
			::core2::game::world::World tmp3 = this->world;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(126)
			::core2::game::entity::type::player::Player tmp4 = tmp3->getPlayer();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(126)
			::core2::game::entity::type::player::managers::PlayerManager tmp5 = tmp4->getPlayerManager();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(126)
			tmp5->update();
		}
		else{
			HX_STACK_LINE(127)
			bool tmp1 = (e->type == HX_HCSTRING("KEY_DOWN","\x62","\x6a","\x13","\x6d"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(127)
			if ((tmp1)){
				HX_STACK_LINE(128)
				::core2::game::engine::input::keyboard::KeyboardListener tmp2 = this->keyboardListener;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(128)
				::openfl::events::KeyboardEvent tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(128)
				tmp3 = hx::TCast< ::openfl::events::KeyboardEvent >::cast(e);
				HX_STACK_LINE(128)
				tmp2->keyDown(tmp3);
			}
			else{
				HX_STACK_LINE(129)
				bool tmp2 = (e->type == HX_HCSTRING("KEY_UP","\x5b","\x74","\x86","\xf2"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(129)
				if ((tmp2)){
					HX_STACK_LINE(130)
					::core2::game::engine::input::keyboard::KeyboardListener tmp3 = this->keyboardListener;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(130)
					::openfl::events::KeyboardEvent tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(130)
					tmp4 = hx::TCast< ::openfl::events::KeyboardEvent >::cast(e);
					HX_STACK_LINE(130)
					tmp3->keyUp(tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,tick,(void))

int Engine_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.engine.Engine","hashCode",0x4844317c,"core2.game.engine.Engine.hashCode","core2/game/engine/Engine.hx",133,0xcfbfe5f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(134)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(134)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,hashCode,return )

::core2::game::engine::input::keyboard::KeyboardListener Engine_obj::getKeyboardListener( ){
	HX_STACK_FRAME("core2.game.engine.Engine","getKeyboardListener",0xe1bce530,"core2.game.engine.Engine.getKeyboardListener","core2/game/engine/Engine.hx",136,0xcfbfe5f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::core2::game::engine::input::keyboard::KeyboardListener tmp = this->keyboardListener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getKeyboardListener,return )

::core2::game::world::World Engine_obj::getWorld( ){
	HX_STACK_FRAME("core2.game.engine.Engine","getWorld",0x6f0acb3d,"core2.game.engine.Engine.getWorld","core2/game/engine/Engine.hx",139,0xcfbfe5f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::core2::game::world::World tmp = this->world;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,getWorld,return )


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(keyboardListener,"keyboardListener");
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(keyboardListener,"keyboardListener");
}

Dynamic Engine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { return tick_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { return world; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyboardListener") ) { return keyboardListener; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getKeyboardListener") ) { return getKeyboardListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::core2::game::world::World >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyboardListener") ) { keyboardListener=inValue.Cast< ::core2::game::engine::input::keyboard::KeyboardListener >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("world","\x52","\x96","\x64","\xce"));
	outFields->push(HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::world::World*/ ,(int)offsetof(Engine_obj,world),HX_HCSTRING("world","\x52","\x96","\x64","\xce")},
	{hx::fsObject /*::core2::game::engine::input::keyboard::KeyboardListener*/ ,(int)offsetof(Engine_obj,keyboardListener),HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("world","\x52","\x96","\x64","\xce"),
	HX_HCSTRING("keyboardListener","\x3b","\xf8","\xa4","\x2f"),
	HX_HCSTRING("tick","\x5d","\xc3","\xfc","\x4c"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getKeyboardListener","\xf1","\x60","\xcb","\xe9"),
	HX_HCSTRING("getWorld","\xdc","\xa5","\x3b","\x2e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

#endif

hx::Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.engine.Engine","\x2d","\x6b","\x63","\x0f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Engine_obj >;
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
