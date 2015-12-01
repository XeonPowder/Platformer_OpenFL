#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
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
#ifndef INCLUDED_nme_app_Window
#include <nme/app/Window.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
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
#ifndef INCLUDED_nme_display_ManagedStage
#include <nme/display/ManagedStage.h>
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
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_net_URLRequest
#include <nme/net/URLRequest.h>
#endif
namespace nme{

Void Lib_obj::__construct()
{
	return null();
}

//Lib_obj::~Lib_obj() { }

Dynamic Lib_obj::__CreateEmpty() { return  new Lib_obj; }
hx::ObjectPtr< Lib_obj > Lib_obj::__new()
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

Dynamic Lib_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lib_obj > _result_ = new Lib_obj();
	_result_->__construct();
	return _result_;}

::nme::display::MovieClip Lib_obj::nmeCurrent;

::nme::display::Stage Lib_obj::nmeStage;

int Lib_obj::FULLSCREEN;

int Lib_obj::BORDERLESS;

int Lib_obj::RESIZABLE;

int Lib_obj::HARDWARE;

int Lib_obj::VSYNC;

int Lib_obj::HW_AA;

int Lib_obj::HW_AA_HIRES;

int Lib_obj::ALLOW_SHADERS;

int Lib_obj::REQUIRE_SHADERS;

int Lib_obj::DEPTH_BUFFER;

int Lib_obj::STENCIL_BUFFER;

Void Lib_obj::create( Dynamic inOnLoaded,int inWidth,int inHeight,hx::Null< Float >  __o_inFrameRate,hx::Null< int >  __o_inColour,hx::Null< int >  __o_inFlags,::String __o_inTitle,::nme::bare::Surface inIcon,Dynamic inDummy){
Float inFrameRate = __o_inFrameRate.Default(((Float)60.0));
int inColour = __o_inColour.Default(-1);
int inFlags = __o_inFlags.Default(15);
::String inTitle = __o_inTitle.Default(HX_HCSTRING("NME","\x26","\x73","\x3b","\x00"));
	HX_STACK_FRAME("nme.Lib","create",0xe746dd4d,"nme.Lib.create","nme/Lib.hx",60,0xbd3d8ba2)
	HX_STACK_ARG(inOnLoaded,"inOnLoaded")
	HX_STACK_ARG(inWidth,"inWidth")
	HX_STACK_ARG(inHeight,"inHeight")
	HX_STACK_ARG(inFrameRate,"inFrameRate")
	HX_STACK_ARG(inColour,"inColour")
	HX_STACK_ARG(inFlags,"inFlags")
	HX_STACK_ARG(inTitle,"inTitle")
	HX_STACK_ARG(inIcon,"inIcon")
	HX_STACK_ARG(inDummy,"inDummy")
{
		struct _Function_1_1{
			inline static Dynamic Block( ::nme::bare::Surface &inIcon,int &inColour,::String &inTitle,int &inHeight,int &inWidth,int &inFlags){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Lib.hx",61,0xbd3d8ba2)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , inWidth,false);
					__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , inHeight,false);
					__result->Add(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02") , inFlags,false);
					__result->Add(HX_HCSTRING("title","\x98","\x15","\x3b","\x10") , inTitle,false);
					__result->Add(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a") , inColour,false);
					__result->Add(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45") , inIcon,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(61)
		Dynamic tmp = _Function_1_1::Block(inIcon,inColour,inTitle,inHeight,inWidth,inFlags);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		Dynamic params = tmp;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(89)
		Dynamic tmp1 = params;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S4(hx::LocalFunc,_Function_1_2,int,inColour,Dynamic,params,Float,inFrameRate,Dynamic,inOnLoaded)
		int __ArgCount() const { return 1; }
		Void run(::nme::app::Window inWindow){
			HX_STACK_FRAME("*","_Function_1_2",0x5200ed38,"*._Function_1_2","nme/Lib.hx",72,0xbd3d8ba2)
			HX_STACK_ARG(inWindow,"inWindow")
			{
				HX_STACK_LINE(72)
				try
				{
				HX_STACK_CATCHABLE(Dynamic, 0);
				{
					HX_STACK_LINE(74)
					::nme::display::Stage tmp2 = ::nme::display::Stage_obj::__new(inWindow);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(74)
					::nme::Lib_obj::nmeStage = tmp2;
					HX_STACK_LINE(75)
					::nme::display::Stage tmp3 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(75)
					Float tmp4 = inFrameRate;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(75)
					tmp3->set_frameRate(tmp4);
					HX_STACK_LINE(76)
					::nme::display::Stage tmp5 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(76)
					int tmp6 = inColour;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(76)
					tmp5->set_opaqueBackground(tmp6);
					HX_STACK_LINE(78)
					::nme::display::MovieClip tmp7 = ::nme::Lib_obj::nmeCurrent;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(78)
					bool tmp8 = (tmp7 != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(78)
					if ((tmp8)){
						HX_STACK_LINE(79)
						::nme::display::Stage tmp9 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(79)
						::nme::display::MovieClip tmp10 = ::nme::Lib_obj::nmeCurrent;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(79)
						tmp9->addChild(tmp10);
					}
					HX_STACK_LINE(81)
					inOnLoaded().Cast< Void >();
				}
				}
				catch(Dynamic __e){
					{
						HX_STACK_BEGIN_CATCH
						Dynamic e = __e;{
							HX_STACK_LINE(85)
							::String tmp2 = ::haxe::CallStack_obj::toString(::haxe::CallStack_obj::exceptionStack());		HX_STACK_VAR(tmp2,"tmp2");
							HX_STACK_LINE(85)
							::String stack = tmp2;		HX_STACK_VAR(stack,"stack");
							HX_STACK_LINE(86)
							Dynamic tmp3 = params;		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(86)
							::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(86)
							::String tmp5 = (HX_HCSTRING("Error creating window: (","\xa3","\xfa","\xe3","\xb3") + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(86)
							::String tmp6 = (tmp5 + HX_HCSTRING(")\n","\xc1","\x23","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(86)
							Dynamic tmp7 = e;		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(86)
							::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(86)
							::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(86)
							::String tmp10 = stack;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(86)
							::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(86)
							Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("Lib.hx","\xb9","\x80","\x1c","\x19"),86,HX_HCSTRING("nme.Lib","\xfd","\xc9","\x39","\xb9"),HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(86)
							::haxe::Log_obj::trace(tmp11,tmp12);
						}
					}
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(71)
		::nme::app::Application_obj::createWindow( Dynamic(new _Function_1_2(inColour,params,inFrameRate,inOnLoaded)),tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Lib_obj,create,(void))

Dynamic Lib_obj::load( ::String library,::String method,hx::Null< int >  __o_args){
int args = __o_args.Default(0);
	HX_STACK_FRAME("nme.Lib","load",0xe01e2a37,"nme.Lib.load","nme/Lib.hx",93,0xbd3d8ba2)
	HX_STACK_ARG(library,"library")
	HX_STACK_ARG(method,"method")
	HX_STACK_ARG(args,"args")
{
		HX_STACK_LINE(97)
		::String tmp = library;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		::String tmp1 = method;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		return tmp3;
		HX_STACK_LINE(99)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,load,return )

Void Lib_obj::log( ::String str){
{
		HX_STACK_FRAME("nme.Lib","log",0x9f6d3193,"nme.Lib.log","nme/Lib.hx",103,0xbd3d8ba2)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(104)
		::String tmp = str;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(104)
		::nme::Lib_obj::nme_log(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,log,(void))

Void Lib_obj::redirectTrace( ){
{
		HX_STACK_FRAME("nme.Lib","redirectTrace",0xa8cc2798,"nme.Lib.redirectTrace","nme/Lib.hx",109,0xbd3d8ba2)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		int __ArgCount() const { return 2; }
		Void run(Dynamic v,Dynamic infos){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nme/Lib.hx",109,0xbd3d8ba2)
			HX_STACK_ARG(v,"v")
			HX_STACK_ARG(infos,"infos")
			{
				HX_STACK_LINE(110)
				bool tmp = (infos == null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(110)
				if ((tmp)){
					HX_STACK_LINE(111)
					Dynamic tmp1 = v;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(111)
					::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(111)
					::nme::Lib_obj::log(tmp2);
				}
				else{
					HX_STACK_LINE(113)
					::String tmp1 = (infos->__Field(HX_HCSTRING("fileName","\xe7","\x5a","\x43","\x62"), hx::paccDynamic ) + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(113)
					int tmp2 = infos->__Field(HX_HCSTRING("lineNumber","\xdd","\x81","\x22","\x76"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(113)
					::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(113)
					::String tmp4 = (tmp3 + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(113)
					Dynamic tmp5 = v;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(113)
					::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(113)
					::String tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(113)
					::nme::Lib_obj::log(tmp7);
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC2((void))

		HX_STACK_LINE(109)
		::haxe::Log_obj::trace =  Dynamic(new _Function_1_1());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,redirectTrace,(void))

::nme::display::ManagedStage Lib_obj::createManagedStage( int inWidth,int inHeight,hx::Null< int >  __o_inFlags){
int inFlags = __o_inFlags.Default(0);
	HX_STACK_FRAME("nme.Lib","createManagedStage",0x8603b8cc,"nme.Lib.createManagedStage","nme/Lib.hx",119,0xbd3d8ba2)
	HX_STACK_ARG(inWidth,"inWidth")
	HX_STACK_ARG(inHeight,"inHeight")
	HX_STACK_ARG(inFlags,"inFlags")
{
		HX_STACK_LINE(120)
		::nme::app::Application_obj::initWidth = inWidth;
		HX_STACK_LINE(121)
		::nme::app::Application_obj::initHeight = inHeight;
		HX_STACK_LINE(123)
		::nme::display::ManagedStage tmp = ::nme::display::ManagedStage_obj::__new(inWidth,inHeight,inFlags);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		::nme::display::ManagedStage result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(124)
		::nme::Lib_obj::nmeStage = result;
		HX_STACK_LINE(126)
		::nme::display::ManagedStage tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(126)
		return tmp1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,createManagedStage,return )

Void Lib_obj::getURL( ::nme::net::URLRequest url,::String target){
{
		HX_STACK_FRAME("nme.Lib","getURL",0x0e5fbeca,"nme.Lib.getURL","nme/Lib.hx",133,0xbd3d8ba2)
		HX_STACK_ARG(url,"url")
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(133)
		url->launchBrowser();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

int Lib_obj::getTimer( ){
	HX_STACK_FRAME("nme.Lib","getTimer",0xb0cb3be0,"nme.Lib.getTimer","nme/Lib.hx",137,0xbd3d8ba2)
	HX_STACK_LINE(139)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(139)
	Float tmp1 = (tmp * ((Float)1000.0));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

::nme::display::MovieClip Lib_obj::get_current( ){
	HX_STACK_FRAME("nme.Lib","get_current",0x5ec3005f,"nme.Lib.get_current","nme/Lib.hx",145,0xbd3d8ba2)
	HX_STACK_LINE(146)
	::nme::display::MovieClip tmp = ::nme::Lib_obj::nmeCurrent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(148)
		::nme::display::MovieClip tmp2 = ::nme::display::MovieClip_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(148)
		::nme::Lib_obj::nmeCurrent = tmp2;
		HX_STACK_LINE(150)
		::nme::display::Stage tmp3 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		if ((tmp4)){
			HX_STACK_LINE(151)
			::nme::display::Stage tmp5 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(151)
			::nme::display::MovieClip tmp6 = ::nme::Lib_obj::nmeCurrent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(151)
			tmp5->addChild(tmp6);
		}
	}
	HX_STACK_LINE(154)
	::nme::display::MovieClip tmp2 = ::nme::Lib_obj::nmeCurrent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )

::nme::display::Stage Lib_obj::get_stage( ){
	HX_STACK_FRAME("nme.Lib","get_stage",0x2d955964,"nme.Lib.get_stage","nme/Lib.hx",158,0xbd3d8ba2)
	HX_STACK_LINE(159)
	::nme::display::Stage tmp = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(159)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(159)
	if ((tmp1)){
		HX_STACK_LINE(160)
		HX_STACK_DO_THROW(HX_HCSTRING("Error : stage can't be accessed until init is called","\x88","\x52","\xb6","\x4f"));
	}
	HX_STACK_LINE(162)
	::nme::display::Stage tmp2 = ::nme::Lib_obj::nmeStage;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(162)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_stage,return )

Void Lib_obj::nmeSetCurrentStage( ::nme::display::Stage inStage){
{
		HX_STACK_FRAME("nme.Lib","nmeSetCurrentStage",0x36929db2,"nme.Lib.nmeSetCurrentStage","nme/Lib.hx",167,0xbd3d8ba2)
		HX_STACK_ARG(inStage,"inStage")
		HX_STACK_LINE(167)
		::nme::Lib_obj::nmeStage = inStage;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,nmeSetCurrentStage,(void))

Dynamic Lib_obj::close;

Dynamic Lib_obj::exit;

Dynamic Lib_obj::forceClose;

Dynamic Lib_obj::pause;

Dynamic Lib_obj::postUICallback;

Dynamic Lib_obj::resume;

Dynamic Lib_obj::setPackage;

Dynamic Lib_obj::setIcon;

int Lib_obj::get_initWidth( ){
	HX_STACK_FRAME("nme.Lib","get_initWidth",0x7a920a7c,"nme.Lib.get_initWidth","nme/Lib.hx",182,0xbd3d8ba2)
	HX_STACK_LINE(182)
	int tmp = ::nme::app::Application_obj::initWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(182)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_initWidth,return )

int Lib_obj::get_initHeight( ){
	HX_STACK_FRAME("nme.Lib","get_initHeight",0x7b869ab1,"nme.Lib.get_initHeight","nme/Lib.hx",183,0xbd3d8ba2)
	HX_STACK_LINE(183)
	int tmp = ::nme::app::Application_obj::initHeight;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(183)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_initHeight,return )

::String Lib_obj::get_company( ){
	HX_STACK_FRAME("nme.Lib","get_company",0x16487963,"nme.Lib.get_company","nme/Lib.hx",185,0xbd3d8ba2)
	HX_STACK_LINE(185)
	::String tmp = ::nme::app::Application_obj::company;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_company,return )

::String Lib_obj::get_version( ){
	HX_STACK_FRAME("nme.Lib","get_version",0x0fd14b3e,"nme.Lib.get_version","nme/Lib.hx",186,0xbd3d8ba2)
	HX_STACK_LINE(186)
	::String tmp = ::nme::app::Application_obj::version;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_version,return )

::String Lib_obj::get_packageName( ){
	HX_STACK_FRAME("nme.Lib","get_packageName",0xe6487417,"nme.Lib.get_packageName","nme/Lib.hx",187,0xbd3d8ba2)
	HX_STACK_LINE(187)
	::String tmp = ::nme::app::Application_obj::packageName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_packageName,return )

::String Lib_obj::get_file( ){
	HX_STACK_FRAME("nme.Lib","get_file",0x0434f696,"nme.Lib.get_file","nme/Lib.hx",188,0xbd3d8ba2)
	HX_STACK_LINE(188)
	::String tmp = ::nme::app::Application_obj::file;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_file,return )

::String Lib_obj::get_build( ){
	HX_STACK_FRAME("nme.Lib","get_build",0x6474c9d4,"nme.Lib.get_build","nme/Lib.hx",190,0xbd3d8ba2)
	HX_STACK_LINE(190)
	::String tmp = ::nme::app::Application_obj::get_build();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_build,return )

int Lib_obj::get_ndllVersion( ){
	HX_STACK_FRAME("nme.Lib","get_ndllVersion",0xc7a7d8a8,"nme.Lib.get_ndllVersion","nme/Lib.hx",191,0xbd3d8ba2)
	HX_STACK_LINE(191)
	int tmp = ::nme::app::Application_obj::get_ndllVersion();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_ndllVersion,return )

::String Lib_obj::get_nmeStateVersion( ){
	HX_STACK_FRAME("nme.Lib","get_nmeStateVersion",0x1633db93,"nme.Lib.get_nmeStateVersion","nme/Lib.hx",192,0xbd3d8ba2)
	HX_STACK_LINE(192)
	::String tmp = ::nme::app::Application_obj::get_nmeStateVersion();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_nmeStateVersion,return )

int Lib_obj::get_bits( ){
	HX_STACK_FRAME("nme.Lib","get_bits",0x01902320,"nme.Lib.get_bits","nme/Lib.hx",193,0xbd3d8ba2)
	HX_STACK_LINE(193)
	int tmp = ::nme::app::Application_obj::get_bits();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_bits,return )

bool Lib_obj::get_silentRecreate( ){
	HX_STACK_FRAME("nme.Lib","get_silentRecreate",0x58f76f3e,"nme.Lib.get_silentRecreate","nme/Lib.hx",195,0xbd3d8ba2)
	HX_STACK_LINE(195)
	bool tmp = ::nme::app::Application_obj::silentRecreate;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_silentRecreate,return )

bool Lib_obj::set_silentRecreate( bool inVal){
	HX_STACK_FRAME("nme.Lib","set_silentRecreate",0x35a6a1b2,"nme.Lib.set_silentRecreate","nme/Lib.hx",196,0xbd3d8ba2)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(196)
	::nme::app::Application_obj::silentRecreate = inVal;
	HX_STACK_LINE(196)
	bool tmp = inVal;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,set_silentRecreate,return )

Dynamic Lib_obj::nme_get_frame_stage;

Dynamic Lib_obj::nme_log;


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { outValue = log_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { if (inCallProp != hx::paccNever) { outValue = get_file(); return true; } }
		if (HX_FIELD_EQ(inName,"bits") ) { if (inCallProp != hx::paccNever) { outValue = get_bits(); return true; } }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { if (inCallProp != hx::paccNever) { outValue = get_stage(); return true; } }
		if (HX_FIELD_EQ(inName,"VSYNC") ) { outValue = VSYNC; return true;  }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { outValue = HW_AA; return true;  }
		if (HX_FIELD_EQ(inName,"build") ) { if (inCallProp != hx::paccNever) { outValue = get_build(); return true; } }
		if (HX_FIELD_EQ(inName,"close") ) { outValue = close; return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp != hx::paccNever) { outValue = get_current(); return true; } }
		if (HX_FIELD_EQ(inName,"company") ) { if (inCallProp != hx::paccNever) { outValue = get_company(); return true; } }
		if (HX_FIELD_EQ(inName,"version") ) { if (inCallProp != hx::paccNever) { outValue = get_version(); return true; } }
		if (HX_FIELD_EQ(inName,"setIcon") ) { outValue = setIcon; return true;  }
		if (HX_FIELD_EQ(inName,"nme_log") ) { outValue = nme_log; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeStage") ) { outValue = nmeStage; return true;  }
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { outValue = HARDWARE; return true;  }
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_file") ) { outValue = get_file_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_bits") ) { outValue = get_bits_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { outValue = RESIZABLE; return true;  }
		if (HX_FIELD_EQ(inName,"initWidth") ) { if (inCallProp != hx::paccNever) { outValue = get_initWidth(); return true; } }
		if (HX_FIELD_EQ(inName,"get_stage") ) { outValue = get_stage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_build") ) { outValue = get_build_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeCurrent") ) { outValue = nmeCurrent; return true;  }
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { outValue = FULLSCREEN; return true;  }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { outValue = BORDERLESS; return true;  }
		if (HX_FIELD_EQ(inName,"initHeight") ) { if (inCallProp != hx::paccNever) { outValue = get_initHeight(); return true; } }
		if (HX_FIELD_EQ(inName,"forceClose") ) { outValue = forceClose; return true;  }
		if (HX_FIELD_EQ(inName,"setPackage") ) { outValue = setPackage; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { outValue = HW_AA_HIRES; return true;  }
		if (HX_FIELD_EQ(inName,"packageName") ) { if (inCallProp != hx::paccNever) { outValue = get_packageName(); return true; } }
		if (HX_FIELD_EQ(inName,"ndllVersion") ) { if (inCallProp != hx::paccNever) { outValue = get_ndllVersion(); return true; } }
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_company") ) { outValue = get_company_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_version") ) { outValue = get_version_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { outValue = DEPTH_BUFFER; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { outValue = ALLOW_SHADERS; return true;  }
		if (HX_FIELD_EQ(inName,"redirectTrace") ) { outValue = redirectTrace_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_initWidth") ) { outValue = get_initWidth_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { outValue = STENCIL_BUFFER; return true;  }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { if (inCallProp != hx::paccNever) { outValue = get_silentRecreate(); return true; } }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback; return true;  }
		if (HX_FIELD_EQ(inName,"get_initHeight") ) { outValue = get_initHeight_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { outValue = REQUIRE_SHADERS; return true;  }
		if (HX_FIELD_EQ(inName,"nmeStateVersion") ) { if (inCallProp != hx::paccNever) { outValue = get_nmeStateVersion(); return true; } }
		if (HX_FIELD_EQ(inName,"get_packageName") ) { outValue = get_packageName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ndllVersion") ) { outValue = get_ndllVersion_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createManagedStage") ) { outValue = createManagedStage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nmeSetCurrentStage") ) { outValue = nmeSetCurrentStage_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_silentRecreate") ) { outValue = get_silentRecreate_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_silentRecreate") ) { outValue = set_silentRecreate_dyn(); return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_nmeStateVersion") ) { outValue = get_nmeStateVersion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { outValue = nme_get_frame_stage; return true;  }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { exit=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"VSYNC") ) { VSYNC=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HW_AA") ) { HW_AA=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"close") ) { close=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"pause") ) { pause=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { resume=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setIcon") ) { setIcon=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_log") ) { nme_log=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"nmeStage") ) { nmeStage=ioValue.Cast< ::nme::display::Stage >(); return true; }
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RESIZABLE") ) { RESIZABLE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"nmeCurrent") ) { nmeCurrent=ioValue.Cast< ::nme::display::MovieClip >(); return true; }
		if (HX_FIELD_EQ(inName,"FULLSCREEN") ) { FULLSCREEN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BORDERLESS") ) { BORDERLESS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"forceClose") ) { forceClose=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"setPackage") ) { setPackage=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"HW_AA_HIRES") ) { HW_AA_HIRES=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER") ) { DEPTH_BUFFER=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ALLOW_SHADERS") ) { ALLOW_SHADERS=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER") ) { STENCIL_BUFFER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { if (inCallProp != hx::paccNever)  ioValue = set_silentRecreate(ioValue); }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { postUICallback=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"REQUIRE_SHADERS") ) { REQUIRE_SHADERS=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { nme_get_frame_stage=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nme::display::MovieClip*/ ,(void *) &Lib_obj::nmeCurrent,HX_HCSTRING("nmeCurrent","\x93","\x01","\xe5","\x9a")},
	{hx::fsObject /*::nme::display::Stage*/ ,(void *) &Lib_obj::nmeStage,HX_HCSTRING("nmeStage","\x98","\xe5","\x94","\xc1")},
	{hx::fsInt,(void *) &Lib_obj::FULLSCREEN,HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb")},
	{hx::fsInt,(void *) &Lib_obj::BORDERLESS,HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09")},
	{hx::fsInt,(void *) &Lib_obj::RESIZABLE,HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4")},
	{hx::fsInt,(void *) &Lib_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &Lib_obj::VSYNC,HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb")},
	{hx::fsInt,(void *) &Lib_obj::HW_AA,HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae")},
	{hx::fsInt,(void *) &Lib_obj::HW_AA_HIRES,HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95")},
	{hx::fsInt,(void *) &Lib_obj::ALLOW_SHADERS,HX_HCSTRING("ALLOW_SHADERS","\x78","\x9c","\xd4","\x9c")},
	{hx::fsInt,(void *) &Lib_obj::REQUIRE_SHADERS,HX_HCSTRING("REQUIRE_SHADERS","\x54","\xb7","\x32","\x63")},
	{hx::fsInt,(void *) &Lib_obj::DEPTH_BUFFER,HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89")},
	{hx::fsInt,(void *) &Lib_obj::STENCIL_BUFFER,HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::close,HX_HCSTRING("close","\xb8","\x17","\x63","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::exit,HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::forceClose,HX_HCSTRING("forceClose","\xcd","\x01","\x38","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::pause,HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::postUICallback,HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::resume,HX_HCSTRING("resume","\xad","\x69","\x84","\x08")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::setPackage,HX_HCSTRING("setPackage","\x04","\x50","\x90","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::setIcon,HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::nme_get_frame_stage,HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Lib_obj::nme_log,HX_HCSTRING("nme_log","\xcb","\x8b","\xb5","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Lib_obj::nmeCurrent,"nmeCurrent");
	HX_MARK_MEMBER_NAME(Lib_obj::nmeStage,"nmeStage");
	HX_MARK_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_MARK_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Lib_obj::close,"close");
	HX_MARK_MEMBER_NAME(Lib_obj::exit,"exit");
	HX_MARK_MEMBER_NAME(Lib_obj::forceClose,"forceClose");
	HX_MARK_MEMBER_NAME(Lib_obj::pause,"pause");
	HX_MARK_MEMBER_NAME(Lib_obj::postUICallback,"postUICallback");
	HX_MARK_MEMBER_NAME(Lib_obj::resume,"resume");
	HX_MARK_MEMBER_NAME(Lib_obj::setPackage,"setPackage");
	HX_MARK_MEMBER_NAME(Lib_obj::setIcon,"setIcon");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_MARK_MEMBER_NAME(Lib_obj::nme_log,"nme_log");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Lib_obj::nmeCurrent,"nmeCurrent");
	HX_VISIT_MEMBER_NAME(Lib_obj::nmeStage,"nmeStage");
	HX_VISIT_MEMBER_NAME(Lib_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Lib_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Lib_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Lib_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Lib_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Lib_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Lib_obj::ALLOW_SHADERS,"ALLOW_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::REQUIRE_SHADERS,"REQUIRE_SHADERS");
	HX_VISIT_MEMBER_NAME(Lib_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Lib_obj::close,"close");
	HX_VISIT_MEMBER_NAME(Lib_obj::exit,"exit");
	HX_VISIT_MEMBER_NAME(Lib_obj::forceClose,"forceClose");
	HX_VISIT_MEMBER_NAME(Lib_obj::pause,"pause");
	HX_VISIT_MEMBER_NAME(Lib_obj::postUICallback,"postUICallback");
	HX_VISIT_MEMBER_NAME(Lib_obj::resume,"resume");
	HX_VISIT_MEMBER_NAME(Lib_obj::setPackage,"setPackage");
	HX_VISIT_MEMBER_NAME(Lib_obj::setIcon,"setIcon");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Lib_obj::nme_log,"nme_log");
};

#endif

hx::Class Lib_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nmeCurrent","\x93","\x01","\xe5","\x9a"),
	HX_HCSTRING("nmeStage","\x98","\xe5","\x94","\xc1"),
	HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb"),
	HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09"),
	HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb"),
	HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae"),
	HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95"),
	HX_HCSTRING("ALLOW_SHADERS","\x78","\x9c","\xd4","\x9c"),
	HX_HCSTRING("REQUIRE_SHADERS","\x54","\xb7","\x32","\x63"),
	HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89"),
	HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("redirectTrace","\xc9","\xc1","\x92","\xd5"),
	HX_HCSTRING("createManagedStage","\xfb","\x8c","\x8b","\xd8"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("getTimer","\x4f","\xcf","\x0c","\x70"),
	HX_HCSTRING("get_current","\x50","\xfc","\xdd","\x51"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("nmeSetCurrentStage","\xe1","\x71","\x1a","\x89"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("forceClose","\xcd","\x01","\x38","\xdf"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setPackage","\x04","\x50","\x90","\x94"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("get_initWidth","\xad","\xa4","\x58","\xa7"),
	HX_HCSTRING("get_initHeight","\x60","\xeb","\x86","\x7c"),
	HX_HCSTRING("get_company","\x54","\x75","\x63","\x09"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	HX_HCSTRING("get_packageName","\x88","\xbc","\x8e","\xc5"),
	HX_HCSTRING("get_file","\x05","\x8a","\x76","\xc3"),
	HX_HCSTRING("get_build","\x85","\x37","\x94","\xfe"),
	HX_HCSTRING("get_ndllVersion","\x19","\x21","\xee","\xa6"),
	HX_HCSTRING("get_nmeStateVersion","\x84","\xb0","\x85","\xfa"),
	HX_HCSTRING("get_bits","\x8f","\xb6","\xd1","\xc0"),
	HX_HCSTRING("get_silentRecreate","\x6d","\x43","\x7f","\xab"),
	HX_HCSTRING("set_silentRecreate","\xe1","\x75","\x2e","\x88"),
	HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),
	HX_HCSTRING("nme_log","\xcb","\x8b","\xb5","\xd9"),
	::String(null()) };

void Lib_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Lib","\xfd","\xc9","\x39","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Lib_obj >;
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

void Lib_obj::__boot()
{
	nmeCurrent= null();
	nmeStage= null();
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	ALLOW_SHADERS= (int)0;
	REQUIRE_SHADERS= (int)0;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
	close= ::nme::app::Application_obj::close_dyn();
	exit= ::nme::app::Application_obj::exit_dyn();
	forceClose= ::nme::app::Application_obj::forceClose_dyn();
	pause= ::nme::app::Application_obj::pause_dyn();
	postUICallback= ::nme::app::Application_obj::postUICallback_dyn();
	resume= ::nme::app::Application_obj::resume_dyn();
	setPackage= ::nme::app::Application_obj::setPackage_dyn();
	setIcon= ::nme::app::Application_obj::setIcon_dyn();
	nme_get_frame_stage= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),(int)1);
	nme_log= ::nme::Loader_obj::load(HX_HCSTRING("nme_log","\xcb","\x8b","\xb5","\xd9"),(int)1);
}

} // end namespace nme
