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

Void BMD_obj::__construct(::openfl::display::BitmapData bmd,int w,int h)
{
HX_STACK_FRAME("core2.game.display.BMD","new",0x9193013e,"core2.game.display.BMD.new","core2/game/display/BMD.hx",12,0x98692b13)
HX_STACK_THIS(this)
HX_STACK_ARG(bmd,"bmd")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
{
	HX_STACK_LINE(13)
	this->bmd_copy = bmd;
	HX_STACK_LINE(14)
	this->width = w;
	HX_STACK_LINE(15)
	this->height = h;
	HX_STACK_LINE(16)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	this->id = tmp;
}
;
	return null();
}

//BMD_obj::~BMD_obj() { }

Dynamic BMD_obj::__CreateEmpty() { return  new BMD_obj; }
hx::ObjectPtr< BMD_obj > BMD_obj::__new(::openfl::display::BitmapData bmd,int w,int h)
{  hx::ObjectPtr< BMD_obj > _result_ = new BMD_obj();
	_result_->__construct(bmd,w,h);
	return _result_;}

Dynamic BMD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMD_obj > _result_ = new BMD_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

int BMD_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.display.BMD","hashCode",0x7661f67d,"core2.game.display.BMD.hashCode","core2/game/display/BMD.hx",18,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,hashCode,return )

::core2::game::display::BMD BMD_obj::getBMD( ){
	HX_STACK_FRAME("core2.game.display.BMD","getBMD",0x70360725,"core2.game.display.BMD.getBMD","core2/game/display/BMD.hx",22,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,getBMD,return )

::openfl::display::BitmapData BMD_obj::getData( ){
	HX_STACK_FRAME("core2.game.display.BMD","getData",0xc071fdbe,"core2.game.display.BMD.getData","core2/game/display/BMD.hx",24,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::openfl::display::BitmapData tmp = this->bmd_copy;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,getData,return )

int BMD_obj::getHeight( ){
	HX_STACK_FRAME("core2.game.display.BMD","getHeight",0x1f02bc7b,"core2.game.display.BMD.getHeight","core2/game/display/BMD.hx",27,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	int tmp = this->height;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,getHeight,return )

int BMD_obj::getWidth( ){
	HX_STACK_FRAME("core2.game.display.BMD","getWidth",0x9926aff2,"core2.game.display.BMD.getWidth","core2/game/display/BMD.hx",30,0x98692b13)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(BMD_obj,getWidth,return )


BMD_obj::BMD_obj()
{
}

void BMD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMD);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(bmd_copy,"bmd_copy");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void BMD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(bmd_copy,"bmd_copy");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic BMD_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"getBMD") ) { return getBMD_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bmd_copy") ) { return bmd_copy; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return getWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return getHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BMD_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bmd_copy") ) { bmd_copy=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("bmd_copy","\xbb","\x2c","\x79","\x8a"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BMD_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(BMD_obj,bmd_copy),HX_HCSTRING("bmd_copy","\xbb","\x2c","\x79","\x8a")},
	{hx::fsInt,(int)offsetof(BMD_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsInt,(int)offsetof(BMD_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("bmd_copy","\xbb","\x2c","\x79","\x8a"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getBMD","\x43","\xd9","\x19","\xa3"),
	HX_HCSTRING("getData","\xe0","\x05","\xe6","\x14"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
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
