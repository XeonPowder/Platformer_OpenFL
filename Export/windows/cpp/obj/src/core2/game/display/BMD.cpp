#include <hxcpp.h>

#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_display_BMD
#include <core2/game/display/BMD.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
namespace core2{
namespace game{
namespace display{

Void BMD_obj::__construct(::openfl::display::BitmapData openFLBMD)
{
HX_STACK_FRAME("core2.game.display.BMD","new",0x9193013e,"core2.game.display.BMD.new","core2/game/display/BMD.hx",9,0x98692b13)
HX_STACK_THIS(this)
HX_STACK_ARG(openFLBMD,"openFLBMD")
{
	HX_STACK_LINE(10)
	::core2::game::display::BMD tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	tmp = hx::TCast< ::core2::game::display::BMD >::cast(openFLBMD);
	HX_STACK_LINE(10)
	this->bmd = tmp;
	HX_STACK_LINE(11)
	::core2::game::display::BMD tmp1 = this->bmd;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	int tmp2 = tmp1->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(11)
	::core2::game::display::BMD tmp3 = this->bmd;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(11)
	int tmp4 = tmp3->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(11)
	super::__construct(tmp2,tmp4,null(),null());
	HX_STACK_LINE(12)
	int tmp5 = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(12)
	this->id = tmp5;
}
;
	return null();
}

//BMD_obj::~BMD_obj() { }

Dynamic BMD_obj::__CreateEmpty() { return  new BMD_obj; }
hx::ObjectPtr< BMD_obj > BMD_obj::__new(::openfl::display::BitmapData openFLBMD)
{  hx::ObjectPtr< BMD_obj > _result_ = new BMD_obj();
	_result_->__construct(openFLBMD);
	return _result_;}

Dynamic BMD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMD_obj > _result_ = new BMD_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int BMD_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.display.BMD","hashCode",0x7661f67d,"core2.game.display.BMD.hashCode","core2/game/display/BMD.hx",14,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(15)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,hashCode,return )

::core2::game::display::BMD BMD_obj::getBMD( ){
	HX_STACK_FRAME("core2.game.display.BMD","getBMD",0x70360725,"core2.game.display.BMD.getBMD","core2/game/display/BMD.hx",18,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,getBMD,return )


BMD_obj::BMD_obj()
{
}

void BMD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMD);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(bmd,"bmd");
	::openfl::display::BitmapData_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BMD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(bmd,"bmd");
	::openfl::display::BitmapData_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BMD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { return bmd; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getBMD") ) { return getBMD_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BMD_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"bmd") ) { bmd=inValue.Cast< ::core2::game::display::BMD >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BMD_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::core2::game::display::BMD*/ ,(int)offsetof(BMD_obj,bmd),HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("bmd","\x39","\xbc","\x4a","\x00"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getBMD","\x43","\xd9","\x19","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMD_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMD_obj::__mClass,"__mClass");
};

#endif

hx::Class BMD_obj::__mClass;

void BMD_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.display.BMD","\x4c","\x4a","\x76","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BMD_obj >;
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
} // end namespace display
