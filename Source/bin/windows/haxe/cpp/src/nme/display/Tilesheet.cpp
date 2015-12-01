#include <hxcpp.h>

#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_Tilesheet
#include <nme/display/Tilesheet.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
namespace nme{
namespace display{

Void Tilesheet_obj::__construct(::nme::display::BitmapData inImage)
{
HX_STACK_FRAME("nme.display.Tilesheet","new",0xae339baf,"nme.display.Tilesheet.new","nme/display/Tilesheet.hx",35,0xc9b592a3)
HX_STACK_THIS(this)
HX_STACK_ARG(inImage,"inImage")
{
	HX_STACK_LINE(36)
	this->nmeBitmap = inImage;
	HX_STACK_LINE(37)
	Dynamic tmp = inImage->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Dynamic tmp1 = ::nme::display::Tilesheet_obj::nme_tilesheet_create(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	this->nmeHandle = tmp1;
}
;
	return null();
}

//Tilesheet_obj::~Tilesheet_obj() { }

Dynamic Tilesheet_obj::__CreateEmpty() { return  new Tilesheet_obj; }
hx::ObjectPtr< Tilesheet_obj > Tilesheet_obj::__new(::nme::display::BitmapData inImage)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(inImage);
	return _result_;}

Dynamic Tilesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tilesheet_obj > _result_ = new Tilesheet_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

int Tilesheet_obj::addTileRect( ::nme::geom::Rectangle rectangle,::nme::geom::Point centerPoint){
	HX_STACK_FRAME("nme.display.Tilesheet","addTileRect",0x62abdd02,"nme.display.Tilesheet.addTileRect","nme/display/Tilesheet.hx",41,0xc9b592a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rectangle,"rectangle")
	HX_STACK_ARG(centerPoint,"centerPoint")
	HX_STACK_LINE(42)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	::nme::geom::Rectangle tmp1 = rectangle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	::nme::geom::Point tmp2 = centerPoint;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	int tmp3 = ::nme::display::Tilesheet_obj::nme_tilesheet_add_rect(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Tilesheet_obj,addTileRect,return )

Void Tilesheet_obj::drawTiles( ::nme::display::Graphics graphics,Dynamic tileData,hx::Null< bool >  __o_smooth,hx::Null< int >  __o_flags,hx::Null< int >  __o_count){
bool smooth = __o_smooth.Default(false);
int flags = __o_flags.Default(0);
int count = __o_count.Default(-1);
	HX_STACK_FRAME("nme.display.Tilesheet","drawTiles",0x11a9e370,"nme.display.Tilesheet.drawTiles","nme/display/Tilesheet.hx",46,0xc9b592a3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(graphics,"graphics")
	HX_STACK_ARG(tileData,"tileData")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(count,"count")
{
		HX_STACK_LINE(47)
		Dynamic tmp = tileData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(47)
		bool tmp1 = smooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		int tmp2 = flags;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(47)
		int tmp3 = count;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(47)
		graphics->drawTiles(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Tilesheet_obj,drawTiles,(void))

int Tilesheet_obj::TILE_SCALE;

int Tilesheet_obj::TILE_ROTATION;

int Tilesheet_obj::TILE_RGB;

int Tilesheet_obj::TILE_ALPHA;

int Tilesheet_obj::TILE_TRANS_2x2;

int Tilesheet_obj::TILE_RECT;

int Tilesheet_obj::TILE_ORIGIN;

int Tilesheet_obj::TILE_NO_ID;

int Tilesheet_obj::TILE_BLEND_NORMAL;

int Tilesheet_obj::TILE_BLEND_ADD;

int Tilesheet_obj::TILE_BLEND_SCREEN;

int Tilesheet_obj::TILE_BLEND_MULTIPLY;

int Tilesheet_obj::TILE_BLEND_SUBTRACT;

Dynamic Tilesheet_obj::nme_tilesheet_create;

Dynamic Tilesheet_obj::nme_tilesheet_add_rect;


Tilesheet_obj::Tilesheet_obj()
{
}

void Tilesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tilesheet);
	HX_MARK_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_END_CLASS();
}

void Tilesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeBitmap,"nmeBitmap");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
}

Dynamic Tilesheet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { return nmeBitmap; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Tilesheet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { outValue = nme_tilesheet_create; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { outValue = nme_tilesheet_add_rect; return true;  }
	}
	return false;
}

Dynamic Tilesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeBitmap") ) { nmeBitmap=inValue.Cast< ::nme::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Tilesheet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 20:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_create") ) { nme_tilesheet_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_tilesheet_add_rect") ) { nme_tilesheet_add_rect=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Tilesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nmeBitmap","\xd5","\x13","\xce","\x8b"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::display::BitmapData*/ ,(int)offsetof(Tilesheet_obj,nmeBitmap),HX_HCSTRING("nmeBitmap","\xd5","\x13","\xce","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Tilesheet_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_NO_ID,HX_HCSTRING("TILE_NO_ID","\x48","\xe1","\x31","\x89")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SCREEN,HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_MULTIPLY,HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2")},
	{hx::fsInt,(void *) &Tilesheet_obj::TILE_BLEND_SUBTRACT,HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Tilesheet_obj::nme_tilesheet_create,HX_HCSTRING("nme_tilesheet_create","\x63","\x18","\x2c","\xd2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Tilesheet_obj::nme_tilesheet_add_rect,HX_HCSTRING("nme_tilesheet_add_rect","\x69","\x38","\xa1","\x80")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nmeBitmap","\xd5","\x13","\xce","\x8b"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("addTileRect","\xb3","\xaa","\x09","\xb7"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_NO_ID,"TILE_NO_ID");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_MARK_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_NO_ID,"TILE_NO_ID");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SCREEN,"TILE_BLEND_SCREEN");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_MULTIPLY,"TILE_BLEND_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::TILE_BLEND_SUBTRACT,"TILE_BLEND_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_create,"nme_tilesheet_create");
	HX_VISIT_MEMBER_NAME(Tilesheet_obj::nme_tilesheet_add_rect,"nme_tilesheet_add_rect");
};

#endif

hx::Class Tilesheet_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_NO_ID","\x48","\xe1","\x31","\x89"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("TILE_BLEND_SCREEN","\xeb","\xcb","\x55","\x43"),
	HX_HCSTRING("TILE_BLEND_MULTIPLY","\x63","\xb4","\x29","\xf2"),
	HX_HCSTRING("TILE_BLEND_SUBTRACT","\x53","\x47","\xae","\x4f"),
	HX_HCSTRING("nme_tilesheet_create","\x63","\x18","\x2c","\xd2"),
	HX_HCSTRING("nme_tilesheet_add_rect","\x69","\x38","\xa1","\x80"),
	::String(null()) };

void Tilesheet_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Tilesheet","\x3d","\x98","\xda","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Tilesheet_obj::__GetStatic;
	__mClass->mSetStaticField = &Tilesheet_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tilesheet_obj >;
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

void Tilesheet_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_NO_ID= (int)128;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	TILE_BLEND_SCREEN= (int)0;
	TILE_BLEND_MULTIPLY= (int)0;
	TILE_BLEND_SUBTRACT= (int)0;
	nme_tilesheet_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_tilesheet_create","\x63","\x18","\x2c","\xd2"),(int)1);
	nme_tilesheet_add_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_tilesheet_add_rect","\x69","\x38","\xa1","\x80"),(int)3);
}

} // end namespace nme
} // end namespace display
