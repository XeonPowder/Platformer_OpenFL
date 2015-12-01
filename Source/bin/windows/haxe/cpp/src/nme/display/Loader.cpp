#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_Bitmap
#include <nme/display/Bitmap.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
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
#ifndef INCLUDED_nme_display_PixelSnapping
#include <nme/display/PixelSnapping.h>
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
#ifndef INCLUDED_nme_net_URLRequest
#include <nme/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_system_LoaderContext
#include <nme/system/LoaderContext.h>
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

Void Loader_obj::__construct()
{
HX_STACK_FRAME("nme.display.Loader","new",0xc1adc179,"nme.display.Loader.new","nme/display/Loader.hx",27,0x6c3b36d5)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(30)
	::nme::display::LoaderInfo tmp = ::nme::display::LoaderInfo_obj::create(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	this->contentLoaderInfo = tmp;
	HX_STACK_LINE(32)
	Dynamic tmp1 = this->doLoad_dyn();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	::nme::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(32)
	tmp2->nmeOnComplete = tmp1;
}
;
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

bool Loader_obj::doLoad( ::nme::utils::ByteArray inBytes){
	HX_STACK_FRAME("nme.display.Loader","doLoad",0x50f443d8,"nme.display.Loader.doLoad","nme/display/Loader.hx",36,0x6c3b36d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_LINE(37)
	bool tmp = (inBytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	if ((tmp)){
		HX_STACK_LINE(38)
		return false;
	}
	HX_STACK_LINE(40)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(42)
		::nme::utils::ByteArray tmp1 = inBytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(42)
		::nme::display::BitmapData tmp2 = ::nme::display::BitmapData_obj::loadFromBytes(tmp1,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(42)
		this->nmeImage = tmp2;
		HX_STACK_LINE(43)
		::nme::display::BitmapData tmp3 = this->nmeImage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(43)
		::nme::display::Bitmap tmp4 = ::nme::display::Bitmap_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(43)
		::nme::display::Bitmap bmp = tmp4;		HX_STACK_VAR(bmp,"bmp");
		HX_STACK_LINE(44)
		this->content = bmp;
		HX_STACK_LINE(45)
		::nme::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		tmp5->content = bmp;
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			int tmp6 = this->get_numChildren();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(47)
			bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(47)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(47)
			if ((tmp8)){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(49)
			this->removeChildAt((int)0);
		}
		HX_STACK_LINE(52)
		::nme::display::Bitmap tmp6 = bmp;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		this->addChild(tmp6);
		HX_STACK_LINE(53)
		return true;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(58)
				return false;
			}
		}
	}
	HX_STACK_LINE(40)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,doLoad,return )

Void Loader_obj::load( ::nme::net::URLRequest request,::nme::_system::LoaderContext context){
{
		HX_STACK_FRAME("nme.display.Loader","load",0xb5109eed,"nme.display.Loader.load","nme/display/Loader.hx",63,0x6c3b36d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(65)
		::nme::display::LoaderInfo tmp = this->contentLoaderInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		::nme::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		tmp->load(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,(void))

Void Loader_obj::loadBytes( ::nme::utils::ByteArray bytes,::nme::_system::LoaderContext context){
{
		HX_STACK_FRAME("nme.display.Loader","loadBytes",0x674c9e3e,"nme.display.Loader.loadBytes","nme/display/Loader.hx",69,0x6c3b36d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(context,"context")
		HX_STACK_LINE(71)
		::nme::utils::ByteArray tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		bool tmp1 = this->doLoad(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		if ((tmp1)){
			HX_STACK_LINE(72)
			::String tmp2 = ::nme::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(72)
			::nme::events::Event tmp3 = ::nme::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(72)
			::nme::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(73)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(74)
			::nme::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(74)
			::nme::events::Event tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(74)
			tmp4->dispatchEvent(tmp5);
		}
		else{
			HX_STACK_LINE(76)
			::nme::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(76)
			tmp2->DispatchIOErrorEvent();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,loadBytes,(void))

Void Loader_obj::unload( ){
{
		HX_STACK_FRAME("nme.display.Loader","unload",0x9ec5a586,"nme.display.Loader.unload","nme/display/Loader.hx",81,0x6c3b36d5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		int tmp = this->get_numChildren();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(82)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(82)
		if ((tmp1)){
			HX_STACK_LINE(84)
			while((true)){
				HX_STACK_LINE(84)
				int tmp2 = this->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(84)
				bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(84)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(84)
				if ((tmp4)){
					HX_STACK_LINE(84)
					break;
				}
				HX_STACK_LINE(86)
				this->removeChildAt((int)0);
			}
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(91)
				::nme::display::LoaderInfo tmp2 = this->contentLoaderInfo;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(91)
				tmp2->url = null();
				HX_STACK_LINE(92)
				::nme::display::LoaderInfo tmp3 = this->contentLoaderInfo;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(92)
				tmp3->contentType = null();
				HX_STACK_LINE(93)
				::nme::display::LoaderInfo tmp4 = this->contentLoaderInfo;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(93)
				tmp4->content = null();
				HX_STACK_LINE(94)
				::nme::display::LoaderInfo tmp5 = this->contentLoaderInfo;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(94)
				int tmp6 = tmp5->bytesTotal = (int)0;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(94)
				::nme::display::LoaderInfo tmp7 = this->contentLoaderInfo;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(94)
				tmp7->bytesLoaded = tmp6;
				HX_STACK_LINE(95)
				::nme::display::LoaderInfo tmp8 = this->contentLoaderInfo;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(95)
				tmp8->width = (int)0;
				HX_STACK_LINE(96)
				::nme::display::LoaderInfo tmp9 = this->contentLoaderInfo;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(96)
				tmp9->height = (int)0;
			}
			HX_STACK_LINE(98)
			::String tmp2 = ::nme::events::Event_obj::UNLOAD;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			::nme::events::Event tmp3 = ::nme::events::Event_obj::__new(tmp2,null(),null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(98)
			::nme::events::Event event = tmp3;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(99)
			event->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(100)
			::nme::events::Event tmp4 = event;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,unload,(void))

Void Loader_obj::onData( ::nme::events::Event event){
{
		HX_STACK_FRAME("nme.display.Loader","onData",0x1e266370,"nme.display.Loader.onData","nme/display/Loader.hx",106,0x6c3b36d5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(107)
		event->stopImmediatePropagation();
		HX_STACK_LINE(108)
		::nme::display::LoaderInfo tmp = this->contentLoaderInfo;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(108)
		::nme::utils::ByteArray tmp1 = tmp->get_bytes();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(108)
		this->doLoad(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,onData,(void))


Loader_obj::Loader_obj()
{
}

void Loader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Loader);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_MARK_MEMBER_NAME(nmeImage,"nmeImage");
	::nme::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Loader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(contentLoaderInfo,"contentLoaderInfo");
	HX_VISIT_MEMBER_NAME(nmeImage,"nmeImage");
	::nme::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Loader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doLoad") ) { return doLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"unload") ) { return unload_dyn(); }
		if (HX_FIELD_EQ(inName,"onData") ) { return onData_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return content; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeImage") ) { return nmeImage; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { return contentLoaderInfo; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Loader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::nme::display::DisplayObject >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeImage") ) { nmeImage=inValue.Cast< ::nme::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"contentLoaderInfo") ) { contentLoaderInfo=inValue.Cast< ::nme::display::LoaderInfo >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Loader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("content","\x39","\x8d","\x77","\x19"));
	outFields->push(HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"));
	outFields->push(HX_HCSTRING("nmeImage","\x35","\x9a","\xf2","\xfa"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::display::DisplayObject*/ ,(int)offsetof(Loader_obj,content),HX_HCSTRING("content","\x39","\x8d","\x77","\x19")},
	{hx::fsObject /*::nme::display::LoaderInfo*/ ,(int)offsetof(Loader_obj,contentLoaderInfo),HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14")},
	{hx::fsObject /*::nme::display::BitmapData*/ ,(int)offsetof(Loader_obj,nmeImage),HX_HCSTRING("nmeImage","\x35","\x9a","\xf2","\xfa")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("content","\x39","\x8d","\x77","\x19"),
	HX_HCSTRING("contentLoaderInfo","\xba","\x64","\x65","\x14"),
	HX_HCSTRING("nmeImage","\x35","\x9a","\xf2","\xfa"),
	HX_HCSTRING("doLoad","\x51","\x3f","\xbb","\x17"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("unload","\xff","\xa0","\x8c","\x65"),
	HX_HCSTRING("onData","\xe9","\x5e","\xed","\xe4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
};

#endif

hx::Class Loader_obj::__mClass;

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Loader","\x07","\x91","\x87","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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
