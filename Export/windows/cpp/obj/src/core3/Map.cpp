#include <hxcpp.h>

#ifndef INCLUDED_core3_Map
#include <core3/Map.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace core3{

Void Map_obj::__construct(Array< Float > _tileData,::openfl::display::Tilesheet sheet)
{
HX_STACK_FRAME("core3.Map","new",0xef35dcf4,"core3.Map.new","core3/Map.hx",9,0x1ce173bd)
HX_STACK_THIS(this)
HX_STACK_ARG(_tileData,"_tileData")
HX_STACK_ARG(sheet,"sheet")
{
	HX_STACK_LINE(10)
	super::__construct();
	HX_STACK_LINE(11)
	this->tileData = _tileData;
	HX_STACK_LINE(12)
	this->set_x((int)0);
	HX_STACK_LINE(13)
	this->set_y((int)0);
	HX_STACK_LINE(14)
	::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	this->sprite = tmp;
	HX_STACK_LINE(15)
	::openfl::display::MovieClip tmp1 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::openfl::display::Sprite tmp2 = this->sprite;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(15)
	tmp1->addChild(tmp2);
	HX_STACK_LINE(16)
	this->sheet = sheet;
}
;
	return null();
}

//Map_obj::~Map_obj() { }

Dynamic Map_obj::__CreateEmpty() { return  new Map_obj; }
hx::ObjectPtr< Map_obj > Map_obj::__new(Array< Float > _tileData,::openfl::display::Tilesheet sheet)
{  hx::ObjectPtr< Map_obj > _result_ = new Map_obj();
	_result_->__construct(_tileData,sheet);
	return _result_;}

Dynamic Map_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_obj > _result_ = new Map_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Map_obj::draw( ){
{
		HX_STACK_FRAME("core3.Map","draw",0x595920f0,"core3.Map.draw","core3/Map.hx",21,0x1ce173bd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		::openfl::display::Sprite tmp = this->sprite;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(22)
		::openfl::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(22)
		tmp1->clear();
		HX_STACK_LINE(23)
		::openfl::display::Tilesheet tmp2 = this->sheet;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		::openfl::display::Sprite tmp3 = this->sprite;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		::openfl::display::Graphics tmp4 = tmp3->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(23)
		tmp2->drawTiles(tmp4,this->tileData,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,draw,(void))


Map_obj::Map_obj()
{
}

void Map_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Map);
	HX_MARK_MEMBER_NAME(sheet,"sheet");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(tileData,"tileData");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Map_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sheet,"sheet");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(tileData,"tileData");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Map_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sheet") ) { return sheet; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { return tileData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Map_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sheet") ) { sheet=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileData") ) { tileData=inValue.Cast< Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Map_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("sheet","\x9f","\xe2","\x1f","\x7c"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Tilesheet*/ ,(int)offsetof(Map_obj,sheet),HX_HCSTRING("sheet","\x9f","\xe2","\x1f","\x7c")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Map_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Map_obj,tileData),HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("sheet","\x9f","\xe2","\x1f","\x7c"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("tileData","\x78","\x7c","\x69","\x7c"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#endif

hx::Class Map_obj::__mClass;

void Map_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core3.Map","\x02","\x93","\xe7","\xc2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Map_obj >;
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

} // end namespace core3
