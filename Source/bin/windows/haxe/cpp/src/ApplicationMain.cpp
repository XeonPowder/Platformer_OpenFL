#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_nme_AssetInfo
#include <nme/AssetInfo.h>
#endif
#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
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
#ifndef INCLUDED_nme_display_MovieClip
#include <nme/display/MovieClip.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_display_StageAlign
#include <nme/display/StageAlign.h>
#endif
#ifndef INCLUDED_nme_display_StageScaleMode
#include <nme/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_media_Sound
#include <nme/media/Sound.h>
#endif
#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
#ifndef INCLUDED_nme_text_Font
#include <nme/text/Font.h>
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

    


Void ApplicationMain_obj::__construct()
{
	return null();
}

//ApplicationMain_obj::~ApplicationMain_obj() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return  new ApplicationMain_obj; }
hx::ObjectPtr< ApplicationMain_obj > ApplicationMain_obj::__new()
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ApplicationMain_obj > _result_ = new ApplicationMain_obj();
	_result_->__construct();
	return _result_;}

Dynamic ApplicationMain_obj::keepMe( ){
	HX_STACK_FRAME("ApplicationMain","keepMe",0xe62e4982,"ApplicationMain.keepMe","ApplicationMain.hx",193,0x0780ded5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	Dynamic tmp = ::Reflect_obj::callMethod_dyn();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,keepMe,return )

cpp::ArrayBase ApplicationMain_obj::engines;

Float ApplicationMain_obj::winWidth;

Float ApplicationMain_obj::winHeight;

int ApplicationMain_obj::winBackground;

Dynamic ApplicationMain_obj::onLoaded;

Void ApplicationMain_obj::main( ){
{
		HX_STACK_FRAME("ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",48,0x0780ded5)
		HX_STACK_LINE(62)
		::nme::app::Application_obj::setPackage(HX_HCSTRING("fiveamigos","\x20","\x74","\xe9","\xb8"),HX_HCSTRING("Buffy","\x26","\xff","\x15","\x4e"),HX_HCSTRING("org.fiveamigos.platformer","\x64","\xe9","\xd8","\x42"),HX_HCSTRING("1.0.0","\xb5","\xd1","\x2e","\x55"));
		HX_STACK_LINE(63)
		::nme::text::Font_obj::set_useNative(true);
		HX_STACK_LINE(65)
		::nme::AssetData_obj::create();
		HX_STACK_LINE(69)
		::nme::app::Application_obj::setFixedOrientation((int)8);
		HX_STACK_LINE(147)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		tmp = (int)8;
		HX_STACK_LINE(148)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		tmp1 = (int)0;
		HX_STACK_LINE(147)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(149)
		int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		tmp3 = (int)0;
		HX_STACK_LINE(147)
		int tmp4 = (int(tmp2) | int(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		tmp5 = (int)0;
		HX_STACK_LINE(147)
		int tmp6 = (int(tmp4) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(151)
		int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(151)
		tmp7 = (int)0;
		HX_STACK_LINE(147)
		int tmp8 = (int(tmp6) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(152)
		int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(152)
		tmp9 = (int)0;
		HX_STACK_LINE(147)
		int tmp10 = (int(tmp8) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(153)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(153)
		tmp11 = (int)0;
		HX_STACK_LINE(147)
		int tmp12 = (int(tmp10) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(154)
		bool tmp13 = false;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(154)
		int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(154)
		if ((tmp13)){
			HX_STACK_LINE(154)
			tmp14 = (int)96;
		}
		else{
			HX_STACK_LINE(154)
			tmp14 = (int)0;
		}
		HX_STACK_LINE(147)
		int tmp15 = (int(tmp12) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(155)
		bool tmp16 = false;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(155)
		int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(155)
		if ((tmp16)){
			HX_STACK_LINE(155)
			tmp17 = (int)32;
		}
		else{
			HX_STACK_LINE(155)
			tmp17 = (int)0;
		}
		HX_STACK_LINE(147)
		int tmp18 = (int(tmp15) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(147)
		int flags = tmp18;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(184)
		int tmp19 = flags;		HX_STACK_VAR(tmp19,"tmp19");

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","ApplicationMain.hx",175,0x0780ded5)
			{
				HX_STACK_LINE(176)
				::nme::display::MovieClip tmp20 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(176)
				::nme::display::Stage tmp21 = tmp20->get_stage();		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(176)
				tmp21->set_align(::nme::display::StageAlign_obj::TOP_LEFT);
				HX_STACK_LINE(177)
				::nme::display::MovieClip tmp22 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(177)
				::nme::display::Stage tmp23 = tmp22->get_stage();		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(177)
				tmp23->set_scaleMode(::nme::display::StageScaleMode_obj::NO_SCALE);
				HX_STACK_LINE(178)
				::nme::display::LoaderInfo tmp24 = ::nme::display::LoaderInfo_obj::create(null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(178)
				::nme::display::MovieClip tmp25 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(178)
				tmp25->loaderInfo = tmp24;
				HX_STACK_LINE(179)
				::Main_obj::main();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(175)
		::nme::Lib_obj::create( Dynamic(new _Function_1_1()),(int)320,(int)320,(int)60,(int)255,tmp19,HX_HCSTRING("Buffy","\x26","\xff","\x15","\x4e"),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

Void ApplicationMain_obj::setAndroidViewHaxeObject( Dynamic inObj){
{
		HX_STACK_FRAME("ApplicationMain","setAndroidViewHaxeObject",0x0241965c,"ApplicationMain.setAndroidViewHaxeObject","ApplicationMain.hx",196,0x0780ded5)
		HX_STACK_ARG(inObj,"inObj")
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,setAndroidViewHaxeObject,(void))

Dynamic ApplicationMain_obj::getAsset( ::String inName){
	HX_STACK_FRAME("ApplicationMain","getAsset",0xa9599eff,"ApplicationMain.getAsset","ApplicationMain.hx",210,0x0780ded5)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(211)
	::haxe::ds::StringMap tmp = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	::String tmp1 = inName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	::nme::AssetInfo tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	::nme::AssetInfo i = tmp2;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(212)
	bool tmp3 = (i == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(212)
	if ((tmp3)){
		HX_STACK_LINE(213)
		::String tmp4 = (HX_HCSTRING("Asset does not exist: ","\x79","\x63","\x7b","\xbc") + inName);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(213)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(214)
	Dynamic tmp4 = i->getCache();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(214)
	Dynamic cached = tmp4;		HX_STACK_VAR(cached,"cached");
	HX_STACK_LINE(215)
	bool tmp5 = (cached != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(215)
	if ((tmp5)){
		HX_STACK_LINE(216)
		Dynamic tmp6 = cached;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(216)
		return tmp6;
	}
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		::nme::AssetType _g = i->type;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		switch( (int)(_g->__Index())){
			case (int)0: case (int)5: {
				HX_STACK_LINE(219)
				::String tmp6 = inName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(219)
				::nme::utils::ByteArray tmp7 = ::nme::Assets_obj::getBytes(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(219)
				return tmp7;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(220)
				::String tmp6 = inName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(220)
				::nme::text::Font tmp7 = ::nme::Assets_obj::getFont(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(220)
				return tmp7;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(221)
				::String tmp6 = inName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(221)
				::nme::display::BitmapData tmp7 = ::nme::Assets_obj::getBitmapData(tmp6,null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(221)
				return tmp7;
			}
			;break;
			case (int)3: case (int)4: {
				HX_STACK_LINE(222)
				::String tmp6 = inName;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(222)
				::nme::media::Sound tmp7 = ::nme::Assets_obj::getSound(tmp6,null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(222)
				return tmp7;
			}
			;break;
		}
	}
	HX_STACK_LINE(225)
	::nme::AssetType tmp6 = i->type;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(225)
	::String tmp8 = (HX_HCSTRING("Unknown asset type: ","\x86","\x5e","\xdb","\xf9") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(225)
	HX_STACK_DO_THROW(tmp8);
	HX_STACK_LINE(226)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,getAsset,return )


ApplicationMain_obj::ApplicationMain_obj()
{
}

Dynamic ApplicationMain_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"keepMe") ) { return keepMe_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { outValue = engines; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"winWidth") ) { outValue = winWidth; return true;  }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { outValue = onLoaded; return true;  }
		if (HX_FIELD_EQ(inName,"getAsset") ) { outValue = getAsset_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"winHeight") ) { outValue = winHeight; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"winBackground") ) { outValue = winBackground; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setAndroidViewHaxeObject") ) { outValue = setAndroidViewHaxeObject_dyn(); return true;  }
	}
	return false;
}

bool ApplicationMain_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"engines") ) { engines=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"winWidth") ) { winWidth=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { onLoaded=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"winHeight") ) { winHeight=ioValue.Cast< Float >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"winBackground") ) { winBackground=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &ApplicationMain_obj::engines,HX_HCSTRING("engines","\x71","\x82","\x3a","\xf7")},
	{hx::fsFloat,(void *) &ApplicationMain_obj::winWidth,HX_HCSTRING("winWidth","\x4a","\x98","\x92","\xfd")},
	{hx::fsFloat,(void *) &ApplicationMain_obj::winHeight,HX_HCSTRING("winHeight","\x23","\x21","\x02","\x99")},
	{hx::fsInt,(void *) &ApplicationMain_obj::winBackground,HX_HCSTRING("winBackground","\x2a","\xfb","\x5e","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ApplicationMain_obj::onLoaded,HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("keepMe","\x3d","\xff","\xbf","\x32"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::engines,"engines");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::winWidth,"winWidth");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::winHeight,"winHeight");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::winBackground,"winBackground");
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::onLoaded,"onLoaded");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::engines,"engines");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::winWidth,"winWidth");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::winHeight,"winHeight");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::winBackground,"winBackground");
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::onLoaded,"onLoaded");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("engines","\x71","\x82","\x3a","\xf7"),
	HX_HCSTRING("winWidth","\x4a","\x98","\x92","\xfd"),
	HX_HCSTRING("winHeight","\x23","\x21","\x02","\x99"),
	HX_HCSTRING("winBackground","\x2a","\xfb","\x5e","\xe0"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("setAndroidViewHaxeObject","\xd7","\x56","\xf2","\xb6"),
	HX_HCSTRING("getAsset","\x7a","\x79","\x10","\x86"),
	::String(null()) };

void ApplicationMain_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &ApplicationMain_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
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

void ApplicationMain_obj::__boot()
{
	engines= cpp::ArrayBase_obj::__new();
	winWidth= ((Float)320);
	winHeight= ((Float)320);
	winBackground= (int)255;
}

