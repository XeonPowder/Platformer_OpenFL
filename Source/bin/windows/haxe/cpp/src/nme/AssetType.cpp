#include <hxcpp.h>

#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
namespace nme{

::nme::AssetType AssetType_obj::BINARY;

::nme::AssetType AssetType_obj::FONT;

::nme::AssetType AssetType_obj::IMAGE;

::nme::AssetType AssetType_obj::MUSIC;

::nme::AssetType AssetType_obj::SOUND;

::nme::AssetType AssetType_obj::TEXT;

HX_DEFINE_CREATE_ENUM(AssetType_obj)

int AssetType_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return 0;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return 1;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 2;
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return 3;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return 4;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 5;
	return super::__FindIndex(inName);
}

int AssetType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return 0;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return 0;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return 0;
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return 0;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return 0;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic AssetType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f")) return BINARY;
	if (inName==HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e")) return FONT;
	if (inName==HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b")) return IMAGE;
	if (inName==HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e")) return MUSIC;
	if (inName==HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe")) return SOUND;
	if (inName==HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37")) return TEXT;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),
	HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),
	HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),
	HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"),
	HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),
	HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_MARK_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_MARK_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_MARK_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_MARK_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetType_obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(AssetType_obj::FONT,"FONT");
	HX_VISIT_MEMBER_NAME(AssetType_obj::IMAGE,"IMAGE");
	HX_VISIT_MEMBER_NAME(AssetType_obj::MUSIC,"MUSIC");
	HX_VISIT_MEMBER_NAME(AssetType_obj::SOUND,"SOUND");
	HX_VISIT_MEMBER_NAME(AssetType_obj::TEXT,"TEXT");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class AssetType_obj::__mClass;

Dynamic __Create_AssetType_obj() { return new AssetType_obj; }

void AssetType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("nme.AssetType","\x82","\x95","\xdb","\xaf"), hx::TCanCast< AssetType_obj >,sStaticFields,sMemberFields,
	&__Create_AssetType_obj, &__Create,
	&super::__SGetClass(), &CreateAssetType_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void AssetType_obj::__boot()
{
hx::Static(BINARY) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"),0);
hx::Static(FONT) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("FONT","\xcf","\x25","\x81","\x2e"),1);
hx::Static(IMAGE) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("IMAGE","\x3b","\x57","\x57","\x3b"),2);
hx::Static(MUSIC) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"),3);
hx::Static(SOUND) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"),4);
hx::Static(TEXT) = hx::CreateEnum< AssetType_obj >(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"),5);
}


} // end namespace nme
