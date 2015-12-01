#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_Loader
#include <nme/display/Loader.h>
#endif
#ifndef INCLUDED_nme_display_LoaderInfo
#include <nme/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
#ifndef INCLUDED_nme_net_URLLoaderDataFormat
#include <nme/net/URLLoaderDataFormat.h>
#endif
#ifndef INCLUDED_nme_net_URLRequest
#include <nme/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{
namespace display{

Void LoaderInfo_obj::__construct()
{
HX_STACK_FRAME("nme.display.LoaderInfo","new",0x8fd2d487,"nme.display.LoaderInfo.new","nme/display/LoaderInfo.hx",32,0xa29af687)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	super::__construct(null());
	HX_STACK_LINE(35)
	this->childAllowsParent = true;
	HX_STACK_LINE(36)
	this->frameRate = (int)0;
	HX_STACK_LINE(37)
	this->dataFormat = ::nme::net::URLLoaderDataFormat_obj::BINARY;
	HX_STACK_LINE(38)
	this->loaderURL = null();
	HX_STACK_LINE(40)
	::String tmp = ::nme::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	Dynamic tmp1 = this->onURLLoaded_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	this->addEventListener(tmp,tmp1,null(),null(),null());
}
;
	return null();
}

//LoaderInfo_obj::~LoaderInfo_obj() { }

Dynamic LoaderInfo_obj::__CreateEmpty() { return  new LoaderInfo_obj; }
hx::ObjectPtr< LoaderInfo_obj > LoaderInfo_obj::__new()
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

Dynamic LoaderInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoaderInfo_obj > _result_ = new LoaderInfo_obj();
	_result_->__construct();
	return _result_;}

Void LoaderInfo_obj::load( ::nme::net::URLRequest request){
{
		HX_STACK_FRAME("nme.display.LoaderInfo","load",0x475c381f,"nme.display.LoaderInfo.load","nme/display/LoaderInfo.hx",58,0xa29af687)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(60)
		this->pendingURL = request->url;
		HX_STACK_LINE(61)
		::String tmp = this->pendingURL;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		int tmp1 = tmp.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		int dot = tmp1;		HX_STACK_VAR(dot,"dot");
		HX_STACK_LINE(62)
		bool tmp2 = (dot > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(62)
		if ((tmp2)){
			HX_STACK_LINE(62)
			::String tmp4 = this->pendingURL;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			int tmp5 = (dot + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(62)
			::String tmp6 = tmp4.substr(tmp5,null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(62)
			tmp3 = tmp6.toLowerCase();
		}
		else{
			HX_STACK_LINE(62)
			tmp3 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		}
		HX_STACK_LINE(62)
		::String extension = tmp3;		HX_STACK_VAR(extension,"extension");
		HX_STACK_LINE(64)
		::String tmp4 = extension;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(64)
		::String tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(64)
		::String _switch_1 = (tmp4);
		if (  ( _switch_1==HX_HCSTRING("swf","\x42","\xab","\x57","\x00"))){
			HX_STACK_LINE(66)
			tmp5 = HX_HCSTRING("application/x-shockwave-flash","\xea","\xf3","\x47","\x4a");
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			HX_STACK_LINE(67)
			tmp5 = HX_HCSTRING("image/jpeg","\x1c","\x8d","\xdb","\xce");
		}
		else if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			HX_STACK_LINE(68)
			tmp5 = HX_HCSTRING("image/png","\xb5","\xcc","\xc1","\x16");
		}
		else if (  ( _switch_1==HX_HCSTRING("gif","\x04","\x84","\x4e","\x00"))){
			HX_STACK_LINE(69)
			tmp5 = HX_HCSTRING("image/gif","\x10","\xf4","\xba","\x16");
		}
		else  {
			HX_STACK_LINE(71)
			::String tmp6 = this->pendingURL;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			::String tmp7 = (HX_HCSTRING("Unrecognized file ","\x93","\xc5","\xa4","\x36") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			HX_STACK_DO_THROW(tmp7);
		}
;
;
		HX_STACK_LINE(64)
		this->contentType = tmp5;
		HX_STACK_LINE(74)
		this->url = null();
		HX_STACK_LINE(76)
		::nme::net::URLRequest tmp6 = request;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(76)
		this->super::load(tmp6);
	}
return null();
}


Void LoaderInfo_obj::onURLLoaded( ::nme::events::Event event){
{
		HX_STACK_FRAME("nme.display.LoaderInfo","onURLLoaded",0x510d6edc,"nme.display.LoaderInfo.onURLLoaded","nme/display/LoaderInfo.hx",81,0xa29af687)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(82)
		::String tmp = this->pendingURL;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		this->url = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,onURLLoaded,(void))

::nme::utils::ByteArray LoaderInfo_obj::get_bytes( ){
	HX_STACK_FRAME("nme.display.LoaderInfo","get_bytes",0x65a08029,"nme.display.LoaderInfo.get_bytes","nme/display/LoaderInfo.hx",87,0xa29af687)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(LoaderInfo_obj,get_bytes,return )

::nme::display::LoaderInfo LoaderInfo_obj::create( ::nme::display::Loader ldr){
	HX_STACK_FRAME("nme.display.LoaderInfo","create",0x24923535,"nme.display.LoaderInfo.create","nme/display/LoaderInfo.hx",44,0xa29af687)
	HX_STACK_ARG(ldr,"ldr")
	HX_STACK_LINE(45)
	::nme::display::LoaderInfo tmp = ::nme::display::LoaderInfo_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	::nme::display::LoaderInfo li = tmp;		HX_STACK_VAR(li,"li");
	HX_STACK_LINE(46)
	li->loader = ldr;
	HX_STACK_LINE(48)
	bool tmp1 = (ldr == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	if ((tmp1)){
		HX_STACK_LINE(50)
		li->url = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	}
	HX_STACK_LINE(54)
	::nme::display::LoaderInfo tmp2 = li;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(54)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LoaderInfo_obj,create,return )


LoaderInfo_obj::LoaderInfo_obj()
{
}

void LoaderInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoaderInfo);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(loader,"loader");
	HX_MARK_MEMBER_NAME(loaderURL,"loaderURL");
	HX_MARK_MEMBER_NAME(parameters,"parameters");
	HX_MARK_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_MARK_MEMBER_NAME(sameDomain,"sameDomain");
	HX_MARK_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(pendingURL,"pendingURL");
	::nme::net::URLLoader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoaderInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(childAllowsParent,"childAllowsParent");
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(loader,"loader");
	HX_VISIT_MEMBER_NAME(loaderURL,"loaderURL");
	HX_VISIT_MEMBER_NAME(parameters,"parameters");
	HX_VISIT_MEMBER_NAME(parentAllowsChild,"parentAllowsChild");
	HX_VISIT_MEMBER_NAME(sameDomain,"sameDomain");
	HX_VISIT_MEMBER_NAME(sharedEvents,"sharedEvents");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(pendingURL,"pendingURL");
	::nme::net::URLLoader_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoaderInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return inCallProp != hx::paccNever ? get_bytes() : bytes; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"loader") ) { return loader; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { return loaderURL; }
		if (HX_FIELD_EQ(inName,"get_bytes") ) { return get_bytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { return parameters; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { return sameDomain; }
		if (HX_FIELD_EQ(inName,"pendingURL") ) { return pendingURL; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		if (HX_FIELD_EQ(inName,"onURLLoaded") ) { return onURLLoaded_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { return sharedEvents; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { return childAllowsParent; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { return parentAllowsChild; }
	}
	return super::__Field(inName,inCallProp);
}

bool LoaderInfo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
	}
	return false;
}

Dynamic LoaderInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::nme::utils::ByteArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loader") ) { loader=inValue.Cast< ::nme::display::Loader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::nme::display::DisplayObject >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loaderURL") ) { loaderURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parameters") ) { parameters=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sameDomain") ) { sameDomain=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pendingURL") ) { pendingURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sharedEvents") ) { sharedEvents=inValue.Cast< ::nme::events::EventDispatcher >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"childAllowsParent") ) { childAllowsParent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parentAllowsChild") ) { parentAllowsChild=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoaderInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	outFields->push(HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"));
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"));
	outFields->push(HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"));
	outFields->push(HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"));
	outFields->push(HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"));
	outFields->push(HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"));
	outFields->push(HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("pendingURL","\x58","\xbf","\xc4","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::utils::ByteArray*/ ,(int)offsetof(LoaderInfo_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,childAllowsParent),HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17")},
	{hx::fsObject /*::nme::display::DisplayObject*/ ,(int)offsetof(LoaderInfo_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsFloat,(int)offsetof(LoaderInfo_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::nme::display::Loader*/ ,(int)offsetof(LoaderInfo_obj,loader),HX_HCSTRING("loader","\x13","\x48","\x6f","\x58")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,loaderURL),HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(LoaderInfo_obj,parameters),HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,parentAllowsChild),HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78")},
	{hx::fsBool,(int)offsetof(LoaderInfo_obj,sameDomain),HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73")},
	{hx::fsObject /*::nme::events::EventDispatcher*/ ,(int)offsetof(LoaderInfo_obj,sharedEvents),HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsInt,(int)offsetof(LoaderInfo_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsString,(int)offsetof(LoaderInfo_obj,pendingURL),HX_HCSTRING("pendingURL","\x58","\xbf","\xc4","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("childAllowsParent","\x50","\xb0","\x90","\x17"),
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("loader","\x13","\x48","\x6f","\x58"),
	HX_HCSTRING("loaderURL","\x1c","\x8d","\x1d","\xfb"),
	HX_HCSTRING("parameters","\xaa","\xbe","\x7e","\x51"),
	HX_HCSTRING("parentAllowsChild","\x68","\x78","\xd5","\x78"),
	HX_HCSTRING("sameDomain","\x4a","\x39","\x74","\x73"),
	HX_HCSTRING("sharedEvents","\x9e","\x2b","\x5a","\x49"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("pendingURL","\x58","\xbf","\xc4","\xc1"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("onURLLoaded","\xb5","\x6b","\x23","\xc2"),
	HX_HCSTRING("get_bytes","\xc2","\x64","\x41","\x01"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoaderInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class LoaderInfo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null()) };

void LoaderInfo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.LoaderInfo","\x15","\x85","\x86","\xd3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoaderInfo_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LoaderInfo_obj >;
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

} // end namespace nme
} // end namespace display
