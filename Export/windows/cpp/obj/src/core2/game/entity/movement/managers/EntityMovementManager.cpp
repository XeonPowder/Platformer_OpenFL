#include <hxcpp.h>

#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_movement_managers_EntityMovementManager
#include <core2/game/entity/movement/managers/EntityMovementManager.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace core2{
namespace game{
namespace entity{
namespace movement{
namespace managers{

Void EntityMovementManager_obj::__construct(::core2::game::entity::Entity e)
{
HX_STACK_FRAME("core2.game.entity.movement.managers.EntityMovementManager","new",0xb04781fa,"core2.game.entity.movement.managers.EntityMovementManager.new","core2/game/entity/movement/managers/EntityMovementManager.hx",9,0x332fb977)
HX_STACK_THIS(this)
HX_STACK_ARG(e,"e")
{
	HX_STACK_LINE(9)
	this->entity = e;
}
;
	return null();
}

//EntityMovementManager_obj::~EntityMovementManager_obj() { }

Dynamic EntityMovementManager_obj::__CreateEmpty() { return  new EntityMovementManager_obj; }
hx::ObjectPtr< EntityMovementManager_obj > EntityMovementManager_obj::__new(::core2::game::entity::Entity e)
{  hx::ObjectPtr< EntityMovementManager_obj > _result_ = new EntityMovementManager_obj();
	_result_->__construct(e);
	return _result_;}

Dynamic EntityMovementManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EntityMovementManager_obj > _result_ = new EntityMovementManager_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void EntityMovementManager_obj::moveBy( int x,int y){
{
		HX_STACK_FRAME("core2.game.entity.movement.managers.EntityMovementManager","moveBy",0xbb288dee,"core2.game.entity.movement.managers.EntityMovementManager.moveBy","core2/game/entity/movement/managers/EntityMovementManager.hx",11,0x332fb977)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(12)
		{
			HX_STACK_LINE(12)
			::core2::game::entity::Entity tmp = this->entity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(12)
			::core2::game::entity::Entity _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(12)
			Float tmp1 = _g->get_x();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(12)
			int tmp2 = x;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(12)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(12)
			_g->set_x(tmp3);
		}
		HX_STACK_LINE(13)
		{
			HX_STACK_LINE(13)
			::core2::game::entity::Entity tmp = this->entity;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(13)
			::core2::game::entity::Entity _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(13)
			Float tmp1 = _g->get_y();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(13)
			int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(13)
			Float tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(13)
			_g->set_y(tmp3);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(EntityMovementManager_obj,moveBy,(void))


EntityMovementManager_obj::EntityMovementManager_obj()
{
}

void EntityMovementManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EntityMovementManager);
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_END_CLASS();
}

void EntityMovementManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(entity,"entity");
}

Dynamic EntityMovementManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EntityMovementManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::core2::game::entity::Entity >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EntityMovementManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::Entity*/ ,(int)offsetof(EntityMovementManager_obj,entity),HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("moveBy","\x48","\xc3","\xac","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EntityMovementManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EntityMovementManager_obj::__mClass,"__mClass");
};

#endif

hx::Class EntityMovementManager_obj::__mClass;

void EntityMovementManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.movement.managers.EntityMovementManager","\x08","\xbd","\xb4","\xd0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EntityMovementManager_obj >;
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
} // end namespace entity
} // end namespace movement
} // end namespace managers
