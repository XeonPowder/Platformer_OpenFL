#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_entity_Entity
#include <core2/game/entity/Entity.h>
#endif
#ifndef INCLUDED_core2_game_entity_animation_Animation
#include <core2/game/entity/animation/Animation.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
namespace core2{
namespace game{
namespace entity{
namespace animation{

Void Animation_obj::__construct(::openfl::display::Bitmap b,Array< ::Dynamic > bd,::String animationName)
{
HX_STACK_FRAME("core2.game.entity.animation.Animation","new",0xc4b0eda2,"core2.game.entity.animation.Animation.new","core2/game/entity/animation/Animation.hx",22,0xfd7b09f0)
HX_STACK_THIS(this)
HX_STACK_ARG(b,"b")
HX_STACK_ARG(bd,"bd")
HX_STACK_ARG(animationName,"animationName")
{
	HX_STACK_LINE(23)
	this->animation = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(24)
	this->bitmap = b;
	HX_STACK_LINE(25)
	this->bitmapDataArray = bd;
	HX_STACK_LINE(26)
	int tmp = this->bitmapDataArray->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	this->frames = tmp;
	HX_STACK_LINE(27)
	this->name = animationName;
	HX_STACK_LINE(28)
	int tmp1 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	this->id = tmp1;
}
;
	return null();
}

//Animation_obj::~Animation_obj() { }

Dynamic Animation_obj::__CreateEmpty() { return  new Animation_obj; }
hx::ObjectPtr< Animation_obj > Animation_obj::__new(::openfl::display::Bitmap b,Array< ::Dynamic > bd,::String animationName)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(b,bd,animationName);
	return _result_;}

Dynamic Animation_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animation_obj > _result_ = new Animation_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

::core2::game::entity::animation::Animation Animation_obj::getAnimation( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getAnimation",0xa555b60c,"core2.game.entity.animation.Animation.getAnimation","core2/game/entity/animation/Animation.hx",30,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	::core2::game::entity::animation::Animation tmp = this->animation;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getAnimation,return )

int Animation_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","hashCode",0x0efc9f99,"core2.game.entity.animation.Animation.hashCode","core2/game/entity/animation/Animation.hx",33,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,hashCode,return )

::String Animation_obj::getName( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getName",0x71a40843,"core2.game.entity.animation.Animation.getName","core2/game/entity/animation/Animation.hx",36,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getName,return )

int Animation_obj::getFrames( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getFrames",0xb7f5b39e,"core2.game.entity.animation.Animation.getFrames","core2/game/entity/animation/Animation.hx",39,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	int tmp = this->frames;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getFrames,return )

::openfl::display::Bitmap Animation_obj::getBitmap( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getBitmap",0xfc7c13e7,"core2.game.entity.animation.Animation.getBitmap","core2/game/entity/animation/Animation.hx",42,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	::openfl::display::Bitmap tmp = this->bitmap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getBitmap,return )

Array< ::Dynamic > Animation_obj::getBitmapDataArray( ){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getBitmapDataArray",0xab6d8628,"core2.game.entity.animation.Animation.getBitmapDataArray","core2/game/entity/animation/Animation.hx",46,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(46)
	return this->bitmapDataArray;
}


HX_DEFINE_DYNAMIC_FUNC0(Animation_obj,getBitmapDataArray,return )

::openfl::display::BitmapData Animation_obj::getBitmapData( int frame){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","getBitmapData",0xb64e15b1,"core2.game.entity.animation.Animation.getBitmapData","core2/game/entity/animation/Animation.hx",48,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(49)
	Array< ::Dynamic > bmda = this->getBitmapDataArray();		HX_STACK_VAR(bmda,"bmda");
	HX_STACK_LINE(50)
	::openfl::display::BitmapData tmp = bmda->__get(frame).StaticCast< ::openfl::display::BitmapData >();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Animation_obj,getBitmapData,return )

Void Animation_obj::changeBitmapData( ::openfl::display::Bitmap b,Array< ::Dynamic > bd,int frame){
{
		HX_STACK_FRAME("core2.game.entity.animation.Animation","changeBitmapData",0x9916b8c7,"core2.game.entity.animation.Animation.changeBitmapData","core2/game/entity/animation/Animation.hx",52,0xfd7b09f0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(bd,"bd")
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(53)
		::openfl::display::BitmapData tmp = this->newBitmapData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		bd[frame] = tmp;
		HX_STACK_LINE(54)
		this->previousBitmapData = b->bitmapData;
		HX_STACK_LINE(55)
		::openfl::display::BitmapData tmp1 = this->newBitmapData;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		b->bitmapData = tmp1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Animation_obj,changeBitmapData,(void))

int Animation_obj::animate( ::core2::game::entity::animation::Animation a,int frame){
	HX_STACK_FRAME("core2.game.entity.animation.Animation","animate",0xd06ec0e3,"core2.game.entity.animation.Animation.animate","core2/game/entity/animation/Animation.hx",58,0xfd7b09f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(frame,"frame")
	HX_STACK_LINE(59)
	::openfl::display::Bitmap tmp = a->getBitmap();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	int tmp1 = frame;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	this->changeBitmapData(tmp,a->getBitmapDataArray(),tmp1);
	HX_STACK_LINE(60)
	int tmp2 = (frame + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(60)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC2(Animation_obj,animate,return )


Animation_obj::Animation_obj()
{
}

void Animation_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animation);
	HX_MARK_MEMBER_NAME(animation,"animation");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(currentFrame,"currentFrame");
	HX_MARK_MEMBER_NAME(endFrame,"endFrame");
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(entity,"entity");
	HX_MARK_MEMBER_NAME(newBitmapData,"newBitmapData");
	HX_MARK_MEMBER_NAME(previousBitmapData,"previousBitmapData");
	HX_MARK_MEMBER_NAME(bitmapDataArray,"bitmapDataArray");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Animation_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animation,"animation");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(currentFrame,"currentFrame");
	HX_VISIT_MEMBER_NAME(endFrame,"endFrame");
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(entity,"entity");
	HX_VISIT_MEMBER_NAME(newBitmapData,"newBitmapData");
	HX_VISIT_MEMBER_NAME(previousBitmapData,"previousBitmapData");
	HX_VISIT_MEMBER_NAME(bitmapDataArray,"bitmapDataArray");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic Animation_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endFrame") ) { return endFrame; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { return animation; }
		if (HX_FIELD_EQ(inName,"getFrames") ) { return getFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { return currentFrame; }
		if (HX_FIELD_EQ(inName,"getAnimation") ) { return getAnimation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"newBitmapData") ) { return newBitmapData; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bitmapDataArray") ) { return bitmapDataArray; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"changeBitmapData") ) { return changeBitmapData_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"previousBitmapData") ) { return previousBitmapData; }
		if (HX_FIELD_EQ(inName,"getBitmapDataArray") ) { return getBitmapDataArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animation_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::core2::game::entity::Entity >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endFrame") ) { endFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"animation") ) { animation=inValue.Cast< ::core2::game::entity::animation::Animation >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentFrame") ) { currentFrame=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"newBitmapData") ) { newBitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"bitmapDataArray") ) { bitmapDataArray=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"previousBitmapData") ) { previousBitmapData=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animation_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"));
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"));
	outFields->push(HX_HCSTRING("endFrame","\x52","\x0a","\x81","\x04"));
	outFields->push(HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"));
	outFields->push(HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"));
	outFields->push(HX_HCSTRING("newBitmapData","\x39","\xc2","\x11","\xfb"));
	outFields->push(HX_HCSTRING("previousBitmapData","\xd0","\x80","\xae","\xd0"));
	outFields->push(HX_HCSTRING("bitmapDataArray","\x20","\xc9","\x51","\x7d"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core2::game::entity::animation::Animation*/ ,(int)offsetof(Animation_obj,animation),HX_HCSTRING("animation","\x04","\xef","\x34","\x4b")},
	{hx::fsInt,(int)offsetof(Animation_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsInt,(int)offsetof(Animation_obj,currentFrame),HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d")},
	{hx::fsInt,(int)offsetof(Animation_obj,endFrame),HX_HCSTRING("endFrame","\x52","\x0a","\x81","\x04")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Animation_obj,bitmap),HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1")},
	{hx::fsObject /*::core2::game::entity::Entity*/ ,(int)offsetof(Animation_obj,entity),HX_HCSTRING("entity","\x23","\x13","\x1c","\x05")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Animation_obj,newBitmapData),HX_HCSTRING("newBitmapData","\x39","\xc2","\x11","\xfb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Animation_obj,previousBitmapData),HX_HCSTRING("previousBitmapData","\xd0","\x80","\xae","\xd0")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animation_obj,bitmapDataArray),HX_HCSTRING("bitmapDataArray","\x20","\xc9","\x51","\x7d")},
	{hx::fsString,(int)offsetof(Animation_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(Animation_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("animation","\x04","\xef","\x34","\x4b"),
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("currentFrame","\x34","\x5d","\x8f","\x4d"),
	HX_HCSTRING("endFrame","\x52","\x0a","\x81","\x04"),
	HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1"),
	HX_HCSTRING("entity","\x23","\x13","\x1c","\x05"),
	HX_HCSTRING("newBitmapData","\x39","\xc2","\x11","\xfb"),
	HX_HCSTRING("previousBitmapData","\xd0","\x80","\xae","\xd0"),
	HX_HCSTRING("bitmapDataArray","\x20","\xc9","\x51","\x7d"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("getAnimation","\x8e","\x8b","\x8b","\x5a"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getName","\x01","\x22","\x82","\x1b"),
	HX_HCSTRING("getFrames","\xdc","\x38","\xdc","\x28"),
	HX_HCSTRING("getBitmap","\x25","\x99","\x62","\x6d"),
	HX_HCSTRING("getBitmapDataArray","\x2a","\x69","\x17","\x30"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("changeBitmapData","\x49","\x77","\x72","\xc0"),
	HX_HCSTRING("animate","\xa1","\xda","\x4c","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animation_obj::__mClass,"__mClass");
};

#endif

hx::Class Animation_obj::__mClass;

void Animation_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.entity.animation.Animation","\xb0","\x34","\xc5","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Animation_obj >;
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
} // end namespace animation
