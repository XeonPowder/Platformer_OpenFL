#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_listeners_EntityListener
#include <core2/game/entity/listeners/EntityListener.h>
#endif
#ifndef INCLUDED_core2_game_entity_movement_managers_EntityMovementManager
#include <core2/game/entity/movement/managers/EntityMovementManager.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
namespace core2{
namespace game{
namespace entity{

Void Entity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::openfl::display::BitmapData graphic)
{
HX_STACK_FRAME("core2.game.entity.Entity","new",0x0caed4bf,"core2.game.entity.Entity.new","core2/game/entity/Entity.hx",24,0xeca0dbd0)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(graphic,"graphic")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	::core2::game::entity::listeners::EntityListener tmp = ::core2::game::entity::listeners::EntityListener_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->entityListener = tmp;
	HX_STACK_LINE(27)
	int tmp1 = this->hashCode();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	this->emmHash = tmp1;
	HX_STACK_LINE(28)
	::core2::game::entity::movement::managers::EntityMovementManager tmp2 = ::core2::game::entity::movement::managers::EntityMovementManager_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	this->entyityMovementManager = tmp2;
	HX_STACK_LINE(29)
	this->set_visible(true);
	HX_STACK_LINE(30)
	this->acceleration = ((Float)0.9);
	HX_STACK_LINE(31)
	::openfl::geom::Point tmp3 = ::openfl::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(31)
	this->velocity = tmp3;
	HX_STACK_LINE(32)
	this->canCollide = true;
	HX_STACK_LINE(33)
	this->followCamera = false;
	HX_STACK_LINE(34)
	Float tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(34)
	this->set_x(tmp4);
	HX_STACK_LINE(35)
	Float tmp5 = y;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(35)
	this->set_y(tmp5);
	HX_STACK_LINE(37)
	int tmp6 = this->hitboxH = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(37)
	this->hitboxW = tmp6;
	HX_STACK_LINE(38)
	this->type = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(39)
	this->set_name(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::openfl::display::BitmapData graphic)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(__o_x,__o_y,graphic);
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int Entity_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.entity.Entity","hashCode",0xba92cf5c,"core2.game.entity.Entity.hashCode","core2/game/entity/Entity.hx",42,0xeca0dbd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,hashCode,return )

Void Entity_obj::setHitbox( int x,int y){
{
		HX_STACK_FRAME("core2.game.entity.Entity","setHitbox",0xbdbc7879,"core2.game.entity.Entity.setHitbox","core2/game/entity/Entity.hx",45,0xeca0dbd0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(46)
		this->hitboxW = x;
		HX_STACK_LINE(47)
		this->hitboxH = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setHitbox,(void))

::core2::game::entity::listeners::EntityListener Entity_obj::getListener( ){
	HX_STACK_FRAME("core2.game.entity.Entity","getListener",0xcababe89,"core2.game.entity.Entity.getListener","core2/game/entity/Entity.hx",49,0xeca0dbd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::core2::game::entity::listeners::EntityListener tmp = this->entityListener;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getListener,return )

::core2::game::entity::movement::managers::EntityMovementManager Entity_obj::getEntyityMovementManager( ){
	HX_STACK_FRAME("core2.game.entity.Entity","getEntyityMovementManager",0x802048f3,"core2.game.entity.Entity.getEntyityMovementManager","core2/game/entity/Entity.hx",52,0xeca0dbd0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	::core2::game::entity::movement::managers::EntityMovementManager tmp = this->entyityMovementManager;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getEntyityMovementManager,return )


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(canCollide,"canCollide");
	HX_MARK_MEMBER_NAME(followCamera,"followCamera");
	HX_MARK_MEMBER_NAME(hitboxW,"hitboxW");
	HX_MARK_MEMBER_NAME(hitboxH,"hitboxH");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(entityListener,"entityListener");
	HX_MARK_MEMBER_NAME(entyityMovementManager,"entyityMovementManager");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(emmHash,"emmHash");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(canCollide,"canCollide");
	HX_VISIT_MEMBER_NAME(followCamera,"followCamera");
	HX_VISIT_MEMBER_NAME(hitboxW,"hitboxW");
	HX_VISIT_MEMBER_NAME(hitboxH,"hitboxH");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(entityListener,"entityListener");
	HX_VISIT_MEMBER_NAME(entyityMovementManager,"entyityMovementManager");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(emmHash,"emmHash");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitboxW") ) { return hitboxW; }
		if (HX_FIELD_EQ(inName,"hitboxH") ) { return hitboxH; }
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		if (HX_FIELD_EQ(inName,"emmHash") ) { return emmHash; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setHitbox") ) { return setHitbox_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"canCollide") ) { return canCollide; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getListener") ) { return getListener_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"followCamera") ) { return followCamera; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"entityListener") ) { return entityListener; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entyityMovementManager") ) { return entyityMovementManager; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getEntyityMovementManager") ) { return getEntyityMovementManager_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hitboxW") ) { hitboxW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitboxH") ) { hitboxH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphic") ) { graphic=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"emmHash") ) { emmHash=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::openfl::geom::Point >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"canCollide") ) { canCollide=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"followCamera") ) { followCamera=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"entityListener") ) { entityListener=inValue.Cast< ::core2::game::entity::listeners::EntityListener >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"entyityMovementManager") ) { entyityMovementManager=inValue.Cast< ::core2::game::entity::movement::managers::EntityMovementManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"));
	outFields->push(HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"));
	outFields->push(HX_HCSTRING("canCollide","\x4e","\x05","\xa7","\x98"));
	outFields->push(HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"));
	outFields->push(HX_HCSTRING("hitboxW","\xbf","\xf7","\xc7","\xeb"));
	outFields->push(HX_HCSTRING("hitboxH","\xb0","\xf7","\xc7","\xeb"));
	outFields->push(HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"));
	outFields->push(HX_HCSTRING("entityListener","\xb7","\x2a","\xcc","\x54"));
	outFields->push(HX_HCSTRING("entyityMovementManager","\x1e","\xf0","\x62","\x96"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("emmHash","\x73","\xc5","\x6c","\xef"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Entity_obj,acceleration),HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Entity_obj,velocity),HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e")},
	{hx::fsBool,(int)offsetof(Entity_obj,canCollide),HX_HCSTRING("canCollide","\x4e","\x05","\xa7","\x98")},
	{hx::fsBool,(int)offsetof(Entity_obj,followCamera),HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d")},
	{hx::fsInt,(int)offsetof(Entity_obj,hitboxW),HX_HCSTRING("hitboxW","\xbf","\xf7","\xc7","\xeb")},
	{hx::fsInt,(int)offsetof(Entity_obj,hitboxH),HX_HCSTRING("hitboxH","\xb0","\xf7","\xc7","\xeb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Entity_obj,graphic),HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74")},
	{hx::fsObject /*::core2::game::entity::listeners::EntityListener*/ ,(int)offsetof(Entity_obj,entityListener),HX_HCSTRING("entityListener","\xb7","\x2a","\xcc","\x54")},
	{hx::fsObject /*::core2::game::entity::movement::managers::EntityMovementManager*/ ,(int)offsetof(Entity_obj,entyityMovementManager),HX_HCSTRING("entyityMovementManager","\x1e","\xf0","\x62","\x96")},
	{hx::fsString,(int)offsetof(Entity_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Entity_obj,emmHash),HX_HCSTRING("emmHash","\x73","\xc5","\x6c","\xef")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("acceleration","\x40","\x00","\x61","\x9a"),
	HX_HCSTRING("velocity","\x1d","\x02","\xfe","\x1e"),
	HX_HCSTRING("canCollide","\x4e","\x05","\xa7","\x98"),
	HX_HCSTRING("followCamera","\xf6","\x76","\x73","\x3d"),
	HX_HCSTRING("hitboxW","\xbf","\xf7","\xc7","\xeb"),
	HX_HCSTRING("hitboxH","\xb0","\xf7","\xc7","\xeb"),
	HX_HCSTRING("graphic","\xa8","\x5a","\x07","\x74"),
	HX_HCSTRING("entityListener","\xb7","\x2a","\xcc","\x54"),
	HX_HCSTRING("entyityMovementManager","\x1e","\xf0","\x62","\x96"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("emmHash","\x73","\xc5","\x6c","\xef"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("setHitbox","\xda","\x62","\xcf","\xb6"),
	HX_HCSTRING("getListener","\x2a","\xc3","\x25","\x5e"),
	HX_HCSTRING("getEntyityMovementManager","\x54","\xc5","\x89","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.Entity","\x4d","\x09","\xe0","\x0c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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
