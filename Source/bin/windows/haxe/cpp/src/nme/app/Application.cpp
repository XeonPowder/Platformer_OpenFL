#include <hxcpp.h>

#ifndef INCLUDED_cpp_vm_Mutex
#include <cpp/vm/Mutex.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_app_Application
#include <nme/app/Application.h>
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
namespace nme{
namespace app{

Void Application_obj::__construct()
{
	return null();
}

//Application_obj::~Application_obj() { }

Dynamic Application_obj::__CreateEmpty() { return  new Application_obj; }
hx::ObjectPtr< Application_obj > Application_obj::__new()
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

Dynamic Application_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Application_obj > _result_ = new Application_obj();
	_result_->__construct();
	return _result_;}

int Application_obj::OrientationPortrait;

int Application_obj::OrientationPortraitUpsideDown;

int Application_obj::OrientationLandscapeRight;

int Application_obj::OrientationLandscapeLeft;

int Application_obj::OrientationFaceUp;

int Application_obj::OrientationFaceDown;

int Application_obj::OrientationPortraitAny;

int Application_obj::OrientationLandscapeAny;

int Application_obj::OrientationAny;

int Application_obj::FULLSCREEN;

int Application_obj::BORDERLESS;

int Application_obj::RESIZABLE;

int Application_obj::HARDWARE;

int Application_obj::VSYNC;

int Application_obj::HW_AA;

int Application_obj::HW_AA_HIRES;

int Application_obj::DEPTH_BUFFER;

int Application_obj::STENCIL_BUFFER;

Dynamic Application_obj::nmeFrameHandle;

::nme::app::Window Application_obj::nmeWindow;

bool Application_obj::silentRecreate;

bool Application_obj::sIsInit;

int Application_obj::initHeight;

int Application_obj::initWidth;

Float Application_obj::initFrameRate;

::String Application_obj::company;

::String Application_obj::version;

::String Application_obj::packageName;

::String Application_obj::file;

::String Application_obj::build;

int Application_obj::ndllVersion;

::String Application_obj::nmeStateVersion;

int Application_obj::bits;

Dynamic Application_obj::onQuit;

bool Application_obj::nmeQuitting;

Array< ::nme::app::IPollClient > Application_obj::pollClientList;

cpp::ArrayBase Application_obj::mainThreadJobs;

::cpp::vm::Mutex Application_obj::mainThreadJobMutex;

Void Application_obj::createWindow( Dynamic inOnLoaded,Dynamic inParams){
{
		HX_STACK_FRAME("nme.app.Application","createWindow",0x45ba019f,"nme.app.Application.createWindow","nme/app/Application.hx",80,0xcbe016e5)
		HX_STACK_ARG(inOnLoaded,"inOnLoaded")
		HX_STACK_ARG(inParams,"inParams")
		HX_STACK_LINE(81)
		bool tmp = ::nme::app::Application_obj::sIsInit;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		if ((tmp)){
			HX_STACK_LINE(83)
			bool tmp1 = ::nme::app::Application_obj::silentRecreate;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(83)
			if ((tmp1)){
				HX_STACK_LINE(85)
				::nme::app::Window tmp2 = ::nme::app::Application_obj::nmeWindow;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(85)
				inOnLoaded(tmp2).Cast< Void >();
				HX_STACK_LINE(86)
				return null();
			}
			HX_STACK_LINE(89)
			HX_STACK_DO_THROW(HX_HCSTRING("nme.app.Application.createWindow called multiple times. This function is automatically called by the project code.","\x42","\x8f","\x00","\xb7"));
		}
		HX_STACK_LINE(92)
		::nme::app::Application_obj::sIsInit = true;
		HX_STACK_LINE(93)
		bool tmp1 = (inParams->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(93)
		int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		if ((tmp1)){
			HX_STACK_LINE(93)
			tmp2 = (int)640;
		}
		else{
			HX_STACK_LINE(93)
			tmp2 = inParams->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic );
		}
		HX_STACK_LINE(93)
		::nme::app::Application_obj::initWidth = tmp2;
		HX_STACK_LINE(94)
		bool tmp3 = (inParams->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(94)
		if ((tmp3)){
			HX_STACK_LINE(94)
			tmp4 = (int)480;
		}
		else{
			HX_STACK_LINE(94)
			tmp4 = inParams->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic );
		}
		HX_STACK_LINE(94)
		::nme::app::Application_obj::initHeight = tmp4;
		HX_STACK_LINE(95)
		bool tmp5 = (inParams->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		Float tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(95)
		if ((tmp5)){
			HX_STACK_LINE(95)
			tmp6 = (int)60;
		}
		else{
			HX_STACK_LINE(95)
			tmp6 = inParams->__Field(HX_HCSTRING("fps","\xe9","\xc7","\x4d","\x00"), hx::paccDynamic );
		}
		HX_STACK_LINE(95)
		::nme::app::Application_obj::initFrameRate = tmp6;
		HX_STACK_LINE(96)
		bool tmp7 = (inParams->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		if ((tmp7)){
			HX_STACK_LINE(96)
			tmp8 = (int)15;
		}
		else{
			HX_STACK_LINE(96)
			tmp8 = inParams->__Field(HX_HCSTRING("flags","\x47","\x2b","\x8c","\x02"), hx::paccDynamic );
		}
		HX_STACK_LINE(96)
		Dynamic flags = tmp8;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(97)
		bool tmp9 = (inParams->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		::String tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		if ((tmp9)){
			HX_STACK_LINE(97)
			tmp10 = HX_HCSTRING("NME","\x26","\x73","\x3b","\x00");
		}
		else{
			HX_STACK_LINE(97)
			tmp10 = inParams->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );
		}
		HX_STACK_LINE(97)
		::String title = tmp10;		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(98)
		bool tmp11 = (inParams->__Field(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"), hx::paccDynamic ) == null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		Dynamic tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(98)
		if ((tmp11)){
			HX_STACK_LINE(98)
			tmp12 = null();
		}
		else{
			HX_STACK_LINE(98)
			tmp12 = inParams->__Field(HX_HCSTRING("icon","\x79","\xe7","\xb2","\x45"), hx::paccDynamic )->__Field(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"), hx::paccDynamic );
		}
		HX_STACK_LINE(98)
		Dynamic icon = tmp12;		HX_STACK_VAR(icon,"icon");
		HX_STACK_LINE(100)
		Dynamic tmp13 = ::nme::Loader_obj::load(HX_HCSTRING("nme_create_main_frame","\x91","\x3d","\x39","\x26"),(int)-1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		Dynamic create_main_frame = tmp13;		HX_STACK_VAR(create_main_frame,"create_main_frame");
		HX_STACK_LINE(108)
		int tmp14 = ::nme::app::Application_obj::initWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(108)
		int tmp15 = ::nme::app::Application_obj::initHeight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(108)
		Dynamic tmp16 = flags;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(108)
		::String tmp17 = title;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(108)
		Dynamic tmp18 = icon;		HX_STACK_VAR(tmp18,"tmp18");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,Dynamic,inParams,Dynamic,inOnLoaded)
		int __ArgCount() const { return 1; }
		Void run(Dynamic inFrameHandle){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","nme/app/Application.hx",102,0xcbe016e5)
			HX_STACK_ARG(inFrameHandle,"inFrameHandle")
			{
				HX_STACK_LINE(103)
				Dynamic tmp19 = ::nme::app::Application_obj::close_dyn();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(103)
				::nme::app::Application_obj::onQuit = tmp19;
				HX_STACK_LINE(104)
				::nme::app::Application_obj::nmeFrameHandle = inFrameHandle;
				HX_STACK_LINE(105)
				Dynamic tmp20 = ::nme::app::Application_obj::nmeFrameHandle;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(105)
				int tmp21 = ::nme::app::Application_obj::initWidth;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(105)
				int tmp22 = ::nme::app::Application_obj::initHeight;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(105)
				::nme::app::Window tmp23 = ::nme::app::Window_obj::__new(tmp20,tmp21,tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(105)
				::nme::app::Application_obj::nmeWindow = tmp23;
				HX_STACK_LINE(106)
				::nme::app::Window tmp24 = ::nme::app::Application_obj::nmeWindow;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(106)
				Dynamic tmp25 = inParams->__Field(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(106)
				tmp24->setBackground(tmp25);
				HX_STACK_LINE(107)
				::nme::app::Window tmp26 = ::nme::app::Application_obj::nmeWindow;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(107)
				inOnLoaded(tmp26).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(102)
		create_main_frame( Dynamic(new _Function_1_1(inParams,inOnLoaded)),tmp14,tmp15,tmp16,tmp17,tmp18);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Application_obj,createWindow,(void))

Void Application_obj::close( ){
{
		HX_STACK_FRAME("nme.app.Application","close",0xc2e275c5,"nme.app.Application.close","nme/app/Application.hx",112,0xcbe016e5)
		HX_STACK_LINE(113)
		::nme::app::Application_obj::nmeQuitting = true;
		HX_STACK_LINE(114)
		Dynamic tmp = ::nme::Loader_obj::load(HX_HCSTRING("nme_close","\xbf","\xee","\x77","\xaa"),(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(114)
		Dynamic close = tmp;		HX_STACK_VAR(close,"close");
		HX_STACK_LINE(115)
		close();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,close,(void))

Void Application_obj::addPollClient( ::nme::app::IPollClient client,hx::Null< bool >  __o_inAtEnd){
bool inAtEnd = __o_inAtEnd.Default(false);
	HX_STACK_FRAME("nme.app.Application","addPollClient",0xd9147278,"nme.app.Application.addPollClient","nme/app/Application.hx",119,0xcbe016e5)
	HX_STACK_ARG(client,"client")
	HX_STACK_ARG(inAtEnd,"inAtEnd")
{
		HX_STACK_LINE(120)
		bool tmp = (::nme::app::Application_obj::pollClientList == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		if ((tmp)){
			HX_STACK_LINE(121)
			::nme::app::Application_obj::pollClientList = Array_obj< ::nme::app::IPollClient >::__new();
		}
		HX_STACK_LINE(123)
		bool tmp1 = inAtEnd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(124)
			::nme::app::IPollClient tmp2 = client;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			::nme::app::Application_obj::pollClientList->push(tmp2);
		}
		else{
			HX_STACK_LINE(126)
			::nme::app::IPollClient tmp2 = client;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(126)
			::nme::app::Application_obj::pollClientList->insert((int)0,tmp2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Application_obj,addPollClient,(void))

Void Application_obj::pollThreadJobs( ){
{
		HX_STACK_FRAME("nme.app.Application","pollThreadJobs",0x972e6132,"nme.app.Application.pollThreadJobs","nme/app/Application.hx",131,0xcbe016e5)
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp = ::nme::app::Application_obj::nmeQuitting;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(131)
			bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(131)
			if ((tmp2)){
				HX_STACK_LINE(131)
				int tmp4 = ::nme::app::Application_obj::mainThreadJobs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(131)
				int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(131)
				tmp3 = (tmp5 > (int)0);
			}
			else{
				HX_STACK_LINE(131)
				tmp3 = false;
			}
			HX_STACK_LINE(131)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(131)
			if ((tmp4)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(133)
			Dynamic job = null();		HX_STACK_VAR(job,"job");
			HX_STACK_LINE(135)
			::cpp::vm::Mutex tmp5 = ::nme::app::Application_obj::mainThreadJobMutex;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			tmp5->acquire();
			HX_STACK_LINE(136)
			Dynamic tmp6 = ::nme::app::Application_obj::mainThreadJobs->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(136)
			job = tmp6;
			HX_STACK_LINE(137)
			::cpp::vm::Mutex tmp7 = ::nme::app::Application_obj::mainThreadJobMutex;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			tmp7->release();
			HX_STACK_LINE(141)
			bool tmp8 = (job != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(141)
			if ((tmp8)){
				HX_STACK_LINE(142)
				job().Cast< Void >();
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,pollThreadJobs,(void))

Void Application_obj::pollClients( Float timestamp){
{
		HX_STACK_FRAME("nme.app.Application","pollClients",0x8b7c9d16,"nme.app.Application.pollClients","nme/app/Application.hx",147,0xcbe016e5)
		HX_STACK_ARG(timestamp,"timestamp")
		HX_STACK_LINE(148)
		int tmp = ::nme::app::Application_obj::mainThreadJobs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(148)
		if ((tmp1)){
			HX_STACK_LINE(149)
			::nme::app::Application_obj::pollThreadJobs();
		}
		HX_STACK_LINE(150)
		bool tmp2 = (::nme::app::Application_obj::pollClientList != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(150)
			bool tmp4 = ::nme::app::Application_obj::nmeQuitting;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(150)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(150)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(150)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(150)
			tmp3 = false;
		}
		HX_STACK_LINE(150)
		if ((tmp3)){
			HX_STACK_LINE(152)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			Array< ::nme::app::IPollClient > _g1 = ::nme::app::Application_obj::pollClientList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(152)
			while((true)){
				HX_STACK_LINE(152)
				bool tmp4 = (_g < _g1->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(152)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(152)
				if ((tmp5)){
					HX_STACK_LINE(152)
					break;
				}
				HX_STACK_LINE(152)
				::nme::app::IPollClient tmp6 = _g1->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(152)
				::nme::app::IPollClient client = tmp6;		HX_STACK_VAR(client,"client");
				HX_STACK_LINE(152)
				++(_g);
				HX_STACK_LINE(153)
				Float tmp7 = timestamp;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(153)
				client->onPoll(tmp7);
			}
		}
		HX_STACK_LINE(155)
		int tmp4 = ::nme::app::Application_obj::mainThreadJobs->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		bool tmp5 = (tmp4 > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		if ((tmp5)){
			HX_STACK_LINE(156)
			::nme::app::Application_obj::pollThreadJobs();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,pollClients,(void))

Float Application_obj::getNextWake( Float timestamp){
	HX_STACK_FRAME("nme.app.Application","getNextWake",0x02a3ab3a,"nme.app.Application.getNextWake","nme/app/Application.hx",161,0xcbe016e5)
	HX_STACK_ARG(timestamp,"timestamp")
	HX_STACK_LINE(162)
	Float nextWake = ((Float)1e30);		HX_STACK_VAR(nextWake,"nextWake");
	HX_STACK_LINE(164)
	bool tmp = (::nme::app::Application_obj::pollClientList != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(164)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(164)
	if ((tmp)){
		HX_STACK_LINE(164)
		bool tmp2 = ::nme::app::Application_obj::nmeQuitting;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(164)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(164)
		tmp1 = !(tmp4);
	}
	else{
		HX_STACK_LINE(164)
		tmp1 = false;
	}
	HX_STACK_LINE(164)
	if ((tmp1)){
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Array< ::nme::app::IPollClient > _g1 = ::nme::app::Application_obj::pollClientList;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(166)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(166)
			if ((tmp3)){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			::nme::app::IPollClient tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			::nme::app::IPollClient client = tmp4;		HX_STACK_VAR(client,"client");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(168)
			Float tmp5 = nextWake;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(168)
			Float tmp6 = timestamp;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(168)
			Float tmp7 = client->getNextWake(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(168)
			Float wake = tmp7;		HX_STACK_VAR(wake,"wake");
			HX_STACK_LINE(169)
			bool tmp8 = (wake <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(169)
			if ((tmp8)){
				HX_STACK_LINE(170)
				return (int)0;
			}
			HX_STACK_LINE(171)
			bool tmp9 = (wake < nextWake);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(171)
			if ((tmp9)){
				HX_STACK_LINE(172)
				nextWake = wake;
			}
		}
	}
	HX_STACK_LINE(175)
	Float tmp2 = nextWake;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,getNextWake,return )

Void Application_obj::setFixedOrientation( int inOrientation){
{
		HX_STACK_FRAME("nme.app.Application","setFixedOrientation",0xf680304b,"nme.app.Application.setFixedOrientation","nme/app/Application.hx",179,0xcbe016e5)
		HX_STACK_ARG(inOrientation,"inOrientation")
		HX_STACK_LINE(180)
		int tmp = inOrientation;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		::nme::app::Application_obj::nme_stage_set_fixed_orientation(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,setFixedOrientation,(void))

Void Application_obj::exit( ){
{
		HX_STACK_FRAME("nme.app.Application","exit",0xdea4d9b1,"nme.app.Application.exit","nme/app/Application.hx",184,0xcbe016e5)
		HX_STACK_LINE(185)
		Dynamic tmp = ::nme::app::Application_obj::onQuit_dyn();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		if ((tmp1)){
			HX_STACK_LINE(194)
			::nme::app::Application_obj::onQuit();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,exit,(void))

Void Application_obj::forceClose( ){
{
		HX_STACK_FRAME("nme.app.Application","forceClose",0xb6e794a0,"nme.app.Application.forceClose","nme/app/Application.hx",199,0xcbe016e5)
		HX_STACK_LINE(201)
		Dynamic tmp = ::nme::Loader_obj::load(HX_HCSTRING("nme_terminate","\xe8","\x98","\x6c","\x28"),(int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(201)
		Dynamic terminate = tmp;		HX_STACK_VAR(terminate,"terminate");
		HX_STACK_LINE(202)
		terminate();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,forceClose,(void))

Void Application_obj::pause( ){
{
		HX_STACK_FRAME("nme.app.Application","pause",0x37d73503,"nme.app.Application.pause","nme/app/Application.hx",207,0xcbe016e5)
		HX_STACK_LINE(207)
		::nme::app::Application_obj::nme_pause_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,pause,(void))

Void Application_obj::runOnMainThread( Dynamic inCallback){
{
		HX_STACK_FRAME("nme.app.Application","runOnMainThread",0x34a2021a,"nme.app.Application.runOnMainThread","nme/app/Application.hx",211,0xcbe016e5)
		HX_STACK_ARG(inCallback,"inCallback")
		HX_STACK_LINE(213)
		::cpp::vm::Mutex tmp = ::nme::app::Application_obj::mainThreadJobMutex;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(213)
		tmp->acquire();
		HX_STACK_LINE(214)
		Dynamic tmp1 = inCallback;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(214)
		::nme::app::Application_obj::mainThreadJobs->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
		HX_STACK_LINE(215)
		::cpp::vm::Mutex tmp2 = ::nme::app::Application_obj::mainThreadJobMutex;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(215)
		tmp2->release();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,runOnMainThread,(void))

Void Application_obj::postUICallback( Dynamic inCallback){
{
		HX_STACK_FRAME("nme.app.Application","postUICallback",0x89c7c8ec,"nme.app.Application.postUICallback","nme/app/Application.hx",222,0xcbe016e5)
		HX_STACK_ARG(inCallback,"inCallback")
		HX_STACK_LINE(226)
		Dynamic tmp = inCallback;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(226)
		::nme::app::Application_obj::runOnMainThread(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,postUICallback,(void))

Void Application_obj::resume( ){
{
		HX_STACK_FRAME("nme.app.Application","resume",0xbd775700,"nme.app.Application.resume","nme/app/Application.hx",232,0xcbe016e5)
		HX_STACK_LINE(232)
		::nme::app::Application_obj::nme_resume_animation();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,resume,(void))

Void Application_obj::setIcon( ::String path){
{
		HX_STACK_FRAME("nme.app.Application","setIcon",0xaad3e388,"nme.app.Application.setIcon","nme/app/Application.hx",242,0xcbe016e5)
		HX_STACK_ARG(path,"path")
		HX_STACK_LINE(244)
		Dynamic tmp = ::nme::Loader_obj::load(HX_HCSTRING("nme_set_icon","\xcf","\x03","\xb7","\xb7"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(244)
		Dynamic set_icon = tmp;		HX_STACK_VAR(set_icon,"set_icon");
		HX_STACK_LINE(245)
		::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		set_icon(tmp1);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Application_obj,setIcon,(void))

Void Application_obj::setPackage( ::String inCompany,::String inFile,::String inPack,::String inVersion){
{
		HX_STACK_FRAME("nme.app.Application","setPackage",0x6c3fe2d7,"nme.app.Application.setPackage","nme/app/Application.hx",249,0xcbe016e5)
		HX_STACK_ARG(inCompany,"inCompany")
		HX_STACK_ARG(inFile,"inFile")
		HX_STACK_ARG(inPack,"inPack")
		HX_STACK_ARG(inVersion,"inVersion")
		HX_STACK_LINE(250)
		::nme::app::Application_obj::company = inCompany;
		HX_STACK_LINE(251)
		::nme::app::Application_obj::file = inFile;
		HX_STACK_LINE(252)
		::nme::app::Application_obj::packageName = inPack;
		HX_STACK_LINE(253)
		::nme::app::Application_obj::version = inVersion;
		HX_STACK_LINE(255)
		::String tmp = inCompany;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(255)
		::String tmp1 = inFile;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		::String tmp2 = inPack;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(255)
		::String tmp3 = inVersion;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(255)
		::nme::app::Application_obj::nme_set_package(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Application_obj,setPackage,(void))

::String Application_obj::get_build( ){
	HX_STACK_FRAME("nme.app.Application","get_build",0x4b502012,"nme.app.Application.get_build","nme/app/Application.hx",258,0xcbe016e5)
	HX_STACK_LINE(258)
	return HX_HCSTRING("5.5.7","\x05","\xef","\xcc","\xa2");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_build,return )

int Application_obj::get_ndllVersion( ){
	HX_STACK_FRAME("nme.app.Application","get_ndllVersion",0x0cda7166,"nme.app.Application.get_ndllVersion","nme/app/Application.hx",259,0xcbe016e5)
	HX_STACK_LINE(259)
	int tmp = ::nme::app::Application_obj::nme_get_ndll_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_ndllVersion,return )

::String Application_obj::get_nmeStateVersion( ){
	HX_STACK_FRAME("nme.app.Application","get_nmeStateVersion",0x2ab4ab51,"nme.app.Application.get_nmeStateVersion","nme/app/Application.hx",260,0xcbe016e5)
	HX_STACK_LINE(260)
	::String tmp = ::nme::app::Application_obj::nme_get_nme_state_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(260)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_nmeStateVersion,return )

int Application_obj::get_bits( ){
	HX_STACK_FRAME("nme.app.Application","get_bits",0xca58dea2,"nme.app.Application.get_bits","nme/app/Application.hx",261,0xcbe016e5)
	HX_STACK_LINE(261)
	int tmp = ::nme::app::Application_obj::nme_get_bits();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(261)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Application_obj,get_bits,return )

Dynamic Application_obj::nme_set_package;

Dynamic Application_obj::nme_get_frame_stage;

Dynamic Application_obj::nme_pause_animation;

Dynamic Application_obj::nme_resume_animation;

Dynamic Application_obj::nme_get_ndll_version;

Dynamic Application_obj::nme_get_nme_state_version;

Dynamic Application_obj::nme_stage_set_fixed_orientation;

Dynamic Application_obj::nme_get_bits;


Application_obj::Application_obj()
{
}

bool Application_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { outValue = file; return true;  }
		if (HX_FIELD_EQ(inName,"bits") ) { outValue = inCallProp != hx::paccNever ? get_bits() : bits; return true; }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { outValue = inCallProp != hx::paccNever ? get_build() : build; return true; }
		if (HX_FIELD_EQ(inName,"close") ) { outValue = close_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"pause") ) { outValue = pause_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onQuit") ) { outValue = onQuit; return true;  }
		if (HX_FIELD_EQ(inName,"resume") ) { outValue = resume_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sIsInit") ) { outValue = sIsInit; return true;  }
		if (HX_FIELD_EQ(inName,"company") ) { outValue = company; return true;  }
		if (HX_FIELD_EQ(inName,"version") ) { outValue = version; return true;  }
		if (HX_FIELD_EQ(inName,"setIcon") ) { outValue = setIcon_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_bits") ) { outValue = get_bits_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeWindow") ) { outValue = nmeWindow; return true;  }
		if (HX_FIELD_EQ(inName,"initWidth") ) { outValue = initWidth; return true;  }
		if (HX_FIELD_EQ(inName,"get_build") ) { outValue = get_build_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initHeight") ) { outValue = initHeight; return true;  }
		if (HX_FIELD_EQ(inName,"forceClose") ) { outValue = forceClose_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPackage") ) { outValue = setPackage_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packageName") ) { outValue = packageName; return true;  }
		if (HX_FIELD_EQ(inName,"ndllVersion") ) { outValue = inCallProp != hx::paccNever ? get_ndllVersion() : ndllVersion; return true; }
		if (HX_FIELD_EQ(inName,"nmeQuitting") ) { outValue = nmeQuitting; return true;  }
		if (HX_FIELD_EQ(inName,"pollClients") ) { outValue = pollClients_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getNextWake") ) { outValue = getNextWake_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createWindow") ) { outValue = createWindow_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_get_bits") ) { outValue = nme_get_bits; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initFrameRate") ) { outValue = initFrameRate; return true;  }
		if (HX_FIELD_EQ(inName,"addPollClient") ) { outValue = addPollClient_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeFrameHandle") ) { outValue = nmeFrameHandle; return true;  }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { outValue = silentRecreate; return true;  }
		if (HX_FIELD_EQ(inName,"pollClientList") ) { outValue = pollClientList; return true;  }
		if (HX_FIELD_EQ(inName,"mainThreadJobs") ) { outValue = mainThreadJobs; return true;  }
		if (HX_FIELD_EQ(inName,"pollThreadJobs") ) { outValue = pollThreadJobs_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"postUICallback") ) { outValue = postUICallback_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeStateVersion") ) { outValue = inCallProp != hx::paccNever ? get_nmeStateVersion() : nmeStateVersion; return true; }
		if (HX_FIELD_EQ(inName,"runOnMainThread") ) { outValue = runOnMainThread_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_ndllVersion") ) { outValue = get_ndllVersion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_set_package") ) { outValue = nme_set_package; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mainThreadJobMutex") ) { outValue = mainThreadJobMutex; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"setFixedOrientation") ) { outValue = setFixedOrientation_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_nmeStateVersion") ) { outValue = get_nmeStateVersion_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { outValue = nme_get_frame_stage; return true;  }
		if (HX_FIELD_EQ(inName,"nme_pause_animation") ) { outValue = nme_pause_animation; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_resume_animation") ) { outValue = nme_resume_animation; return true;  }
		if (HX_FIELD_EQ(inName,"nme_get_ndll_version") ) { outValue = nme_get_ndll_version; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_get_nme_state_version") ) { outValue = nme_get_nme_state_version; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { outValue = nme_stage_set_fixed_orientation; return true;  }
	}
	return false;
}

bool Application_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"bits") ) { bits=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"build") ) { build=ioValue.Cast< ::String >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onQuit") ) { onQuit=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sIsInit") ) { sIsInit=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"company") ) { company=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"version") ) { version=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeWindow") ) { nmeWindow=ioValue.Cast< ::nme::app::Window >(); return true; }
		if (HX_FIELD_EQ(inName,"initWidth") ) { initWidth=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initHeight") ) { initHeight=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"packageName") ) { packageName=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"ndllVersion") ) { ndllVersion=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"nmeQuitting") ) { nmeQuitting=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nme_get_bits") ) { nme_get_bits=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initFrameRate") ) { initFrameRate=ioValue.Cast< Float >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeFrameHandle") ) { nmeFrameHandle=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"silentRecreate") ) { silentRecreate=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"pollClientList") ) { pollClientList=ioValue.Cast< Array< ::nme::app::IPollClient > >(); return true; }
		if (HX_FIELD_EQ(inName,"mainThreadJobs") ) { mainThreadJobs=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeStateVersion") ) { nmeStateVersion=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_set_package") ) { nme_set_package=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mainThreadJobMutex") ) { mainThreadJobMutex=ioValue.Cast< ::cpp::vm::Mutex >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_get_frame_stage") ) { nme_get_frame_stage=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_pause_animation") ) { nme_pause_animation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_resume_animation") ) { nme_resume_animation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_get_ndll_version") ) { nme_get_ndll_version=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_get_nme_state_version") ) { nme_get_nme_state_version=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_stage_set_fixed_orientation") ) { nme_stage_set_fixed_orientation=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Application_obj::OrientationPortrait,HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0")},
	{hx::fsInt,(void *) &Application_obj::OrientationPortraitUpsideDown,HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe")},
	{hx::fsInt,(void *) &Application_obj::OrientationLandscapeRight,HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a")},
	{hx::fsInt,(void *) &Application_obj::OrientationLandscapeLeft,HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43")},
	{hx::fsInt,(void *) &Application_obj::OrientationFaceUp,HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08")},
	{hx::fsInt,(void *) &Application_obj::OrientationFaceDown,HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad")},
	{hx::fsInt,(void *) &Application_obj::OrientationPortraitAny,HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f")},
	{hx::fsInt,(void *) &Application_obj::OrientationLandscapeAny,HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c")},
	{hx::fsInt,(void *) &Application_obj::OrientationAny,HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9")},
	{hx::fsInt,(void *) &Application_obj::FULLSCREEN,HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb")},
	{hx::fsInt,(void *) &Application_obj::BORDERLESS,HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09")},
	{hx::fsInt,(void *) &Application_obj::RESIZABLE,HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4")},
	{hx::fsInt,(void *) &Application_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &Application_obj::VSYNC,HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb")},
	{hx::fsInt,(void *) &Application_obj::HW_AA,HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae")},
	{hx::fsInt,(void *) &Application_obj::HW_AA_HIRES,HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95")},
	{hx::fsInt,(void *) &Application_obj::DEPTH_BUFFER,HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89")},
	{hx::fsInt,(void *) &Application_obj::STENCIL_BUFFER,HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nmeFrameHandle,HX_HCSTRING("nmeFrameHandle","\x0f","\x6a","\x6d","\xc4")},
	{hx::fsObject /*::nme::app::Window*/ ,(void *) &Application_obj::nmeWindow,HX_HCSTRING("nmeWindow","\xd6","\x97","\x4e","\xed")},
	{hx::fsBool,(void *) &Application_obj::silentRecreate,HX_HCSTRING("silentRecreate","\xa4","\x62","\xe5","\x0f")},
	{hx::fsBool,(void *) &Application_obj::sIsInit,HX_HCSTRING("sIsInit","\xed","\xcc","\xda","\x45")},
	{hx::fsInt,(void *) &Application_obj::initHeight,HX_HCSTRING("initHeight","\x17","\x63","\x91","\x06")},
	{hx::fsInt,(void *) &Application_obj::initWidth,HX_HCSTRING("initWidth","\xd6","\xd0","\xf4","\xe5")},
	{hx::fsFloat,(void *) &Application_obj::initFrameRate,HX_HCSTRING("initFrameRate","\x7d","\xd4","\x24","\xb4")},
	{hx::fsString,(void *) &Application_obj::company,HX_HCSTRING("company","\x3d","\x15","\x69","\x83")},
	{hx::fsString,(void *) &Application_obj::version,HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{hx::fsString,(void *) &Application_obj::packageName,HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04")},
	{hx::fsString,(void *) &Application_obj::file,HX_HCSTRING("file","\x7c","\xce","\xbb","\x43")},
	{hx::fsString,(void *) &Application_obj::build,HX_HCSTRING("build","\x2e","\xdb","\xea","\xba")},
	{hx::fsInt,(void *) &Application_obj::ndllVersion,HX_HCSTRING("ndllVersion","\x82","\x69","\x0c","\xe6")},
	{hx::fsString,(void *) &Application_obj::nmeStateVersion,HX_HCSTRING("nmeStateVersion","\x6d","\xe1","\x7a","\x6f")},
	{hx::fsInt,(void *) &Application_obj::bits,HX_HCSTRING("bits","\x06","\xfb","\x16","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::onQuit,HX_HCSTRING("onQuit","\x8e","\x48","\x94","\xed")},
	{hx::fsBool,(void *) &Application_obj::nmeQuitting,HX_HCSTRING("nmeQuitting","\xa3","\xe9","\xbb","\xa5")},
	{hx::fsObject /*Array< ::nme::app::IPollClient >*/ ,(void *) &Application_obj::pollClientList,HX_HCSTRING("pollClientList","\x68","\xfb","\x29","\xac")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Application_obj::mainThreadJobs,HX_HCSTRING("mainThreadJobs","\x59","\x1f","\xb1","\xe1")},
	{hx::fsObject /*::cpp::vm::Mutex*/ ,(void *) &Application_obj::mainThreadJobMutex,HX_HCSTRING("mainThreadJobMutex","\x45","\x89","\x4a","\x25")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_set_package,HX_HCSTRING("nme_set_package","\xf0","\xe8","\xfe","\xa4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_get_frame_stage,HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_pause_animation,HX_HCSTRING("nme_pause_animation","\x02","\x57","\x8e","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_resume_animation,HX_HCSTRING("nme_resume_animation","\x0b","\x17","\x60","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_get_ndll_version,HX_HCSTRING("nme_get_ndll_version","\xb1","\x93","\x67","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_get_nme_state_version,HX_HCSTRING("nme_get_nme_state_version","\x8f","\xfd","\xcc","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_stage_set_fixed_orientation,HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Application_obj::nme_get_bits,HX_HCSTRING("nme_get_bits","\xe8","\xbd","\xbd","\x04")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationPortrait,"OrientationPortrait");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_MARK_MEMBER_NAME(Application_obj::OrientationAny,"OrientationAny");
	HX_MARK_MEMBER_NAME(Application_obj::FULLSCREEN,"FULLSCREEN");
	HX_MARK_MEMBER_NAME(Application_obj::BORDERLESS,"BORDERLESS");
	HX_MARK_MEMBER_NAME(Application_obj::RESIZABLE,"RESIZABLE");
	HX_MARK_MEMBER_NAME(Application_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Application_obj::VSYNC,"VSYNC");
	HX_MARK_MEMBER_NAME(Application_obj::HW_AA,"HW_AA");
	HX_MARK_MEMBER_NAME(Application_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_MARK_MEMBER_NAME(Application_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_MARK_MEMBER_NAME(Application_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_MARK_MEMBER_NAME(Application_obj::nmeFrameHandle,"nmeFrameHandle");
	HX_MARK_MEMBER_NAME(Application_obj::nmeWindow,"nmeWindow");
	HX_MARK_MEMBER_NAME(Application_obj::silentRecreate,"silentRecreate");
	HX_MARK_MEMBER_NAME(Application_obj::sIsInit,"sIsInit");
	HX_MARK_MEMBER_NAME(Application_obj::initHeight,"initHeight");
	HX_MARK_MEMBER_NAME(Application_obj::initWidth,"initWidth");
	HX_MARK_MEMBER_NAME(Application_obj::initFrameRate,"initFrameRate");
	HX_MARK_MEMBER_NAME(Application_obj::company,"company");
	HX_MARK_MEMBER_NAME(Application_obj::version,"version");
	HX_MARK_MEMBER_NAME(Application_obj::packageName,"packageName");
	HX_MARK_MEMBER_NAME(Application_obj::file,"file");
	HX_MARK_MEMBER_NAME(Application_obj::build,"build");
	HX_MARK_MEMBER_NAME(Application_obj::ndllVersion,"ndllVersion");
	HX_MARK_MEMBER_NAME(Application_obj::nmeStateVersion,"nmeStateVersion");
	HX_MARK_MEMBER_NAME(Application_obj::bits,"bits");
	HX_MARK_MEMBER_NAME(Application_obj::onQuit,"onQuit");
	HX_MARK_MEMBER_NAME(Application_obj::nmeQuitting,"nmeQuitting");
	HX_MARK_MEMBER_NAME(Application_obj::pollClientList,"pollClientList");
	HX_MARK_MEMBER_NAME(Application_obj::mainThreadJobs,"mainThreadJobs");
	HX_MARK_MEMBER_NAME(Application_obj::mainThreadJobMutex,"mainThreadJobMutex");
	HX_MARK_MEMBER_NAME(Application_obj::nme_set_package,"nme_set_package");
	HX_MARK_MEMBER_NAME(Application_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_MARK_MEMBER_NAME(Application_obj::nme_pause_animation,"nme_pause_animation");
	HX_MARK_MEMBER_NAME(Application_obj::nme_resume_animation,"nme_resume_animation");
	HX_MARK_MEMBER_NAME(Application_obj::nme_get_ndll_version,"nme_get_ndll_version");
	HX_MARK_MEMBER_NAME(Application_obj::nme_get_nme_state_version,"nme_get_nme_state_version");
	HX_MARK_MEMBER_NAME(Application_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_MARK_MEMBER_NAME(Application_obj::nme_get_bits,"nme_get_bits");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Application_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationPortrait,"OrientationPortrait");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationPortraitUpsideDown,"OrientationPortraitUpsideDown");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationLandscapeRight,"OrientationLandscapeRight");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationLandscapeLeft,"OrientationLandscapeLeft");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationFaceUp,"OrientationFaceUp");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationFaceDown,"OrientationFaceDown");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationPortraitAny,"OrientationPortraitAny");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationLandscapeAny,"OrientationLandscapeAny");
	HX_VISIT_MEMBER_NAME(Application_obj::OrientationAny,"OrientationAny");
	HX_VISIT_MEMBER_NAME(Application_obj::FULLSCREEN,"FULLSCREEN");
	HX_VISIT_MEMBER_NAME(Application_obj::BORDERLESS,"BORDERLESS");
	HX_VISIT_MEMBER_NAME(Application_obj::RESIZABLE,"RESIZABLE");
	HX_VISIT_MEMBER_NAME(Application_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Application_obj::VSYNC,"VSYNC");
	HX_VISIT_MEMBER_NAME(Application_obj::HW_AA,"HW_AA");
	HX_VISIT_MEMBER_NAME(Application_obj::HW_AA_HIRES,"HW_AA_HIRES");
	HX_VISIT_MEMBER_NAME(Application_obj::DEPTH_BUFFER,"DEPTH_BUFFER");
	HX_VISIT_MEMBER_NAME(Application_obj::STENCIL_BUFFER,"STENCIL_BUFFER");
	HX_VISIT_MEMBER_NAME(Application_obj::nmeFrameHandle,"nmeFrameHandle");
	HX_VISIT_MEMBER_NAME(Application_obj::nmeWindow,"nmeWindow");
	HX_VISIT_MEMBER_NAME(Application_obj::silentRecreate,"silentRecreate");
	HX_VISIT_MEMBER_NAME(Application_obj::sIsInit,"sIsInit");
	HX_VISIT_MEMBER_NAME(Application_obj::initHeight,"initHeight");
	HX_VISIT_MEMBER_NAME(Application_obj::initWidth,"initWidth");
	HX_VISIT_MEMBER_NAME(Application_obj::initFrameRate,"initFrameRate");
	HX_VISIT_MEMBER_NAME(Application_obj::company,"company");
	HX_VISIT_MEMBER_NAME(Application_obj::version,"version");
	HX_VISIT_MEMBER_NAME(Application_obj::packageName,"packageName");
	HX_VISIT_MEMBER_NAME(Application_obj::file,"file");
	HX_VISIT_MEMBER_NAME(Application_obj::build,"build");
	HX_VISIT_MEMBER_NAME(Application_obj::ndllVersion,"ndllVersion");
	HX_VISIT_MEMBER_NAME(Application_obj::nmeStateVersion,"nmeStateVersion");
	HX_VISIT_MEMBER_NAME(Application_obj::bits,"bits");
	HX_VISIT_MEMBER_NAME(Application_obj::onQuit,"onQuit");
	HX_VISIT_MEMBER_NAME(Application_obj::nmeQuitting,"nmeQuitting");
	HX_VISIT_MEMBER_NAME(Application_obj::pollClientList,"pollClientList");
	HX_VISIT_MEMBER_NAME(Application_obj::mainThreadJobs,"mainThreadJobs");
	HX_VISIT_MEMBER_NAME(Application_obj::mainThreadJobMutex,"mainThreadJobMutex");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_set_package,"nme_set_package");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_get_frame_stage,"nme_get_frame_stage");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_pause_animation,"nme_pause_animation");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_resume_animation,"nme_resume_animation");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_get_ndll_version,"nme_get_ndll_version");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_get_nme_state_version,"nme_get_nme_state_version");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_stage_set_fixed_orientation,"nme_stage_set_fixed_orientation");
	HX_VISIT_MEMBER_NAME(Application_obj::nme_get_bits,"nme_get_bits");
};

#endif

hx::Class Application_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("OrientationPortrait","\x2b","\x94","\x80","\xf0"),
	HX_HCSTRING("OrientationPortraitUpsideDown","\xff","\x1e","\x9c","\xfe"),
	HX_HCSTRING("OrientationLandscapeRight","\x71","\xbc","\x02","\x9a"),
	HX_HCSTRING("OrientationLandscapeLeft","\x12","\x41","\xe3","\x43"),
	HX_HCSTRING("OrientationFaceUp","\x28","\x3f","\x72","\x08"),
	HX_HCSTRING("OrientationFaceDown","\x6f","\x5e","\xa1","\xad"),
	HX_HCSTRING("OrientationPortraitAny","\x81","\xcb","\xb1","\x4f"),
	HX_HCSTRING("OrientationLandscapeAny","\x41","\xec","\x09","\x4c"),
	HX_HCSTRING("OrientationAny","\x1c","\x7a","\x8d","\xd9"),
	HX_HCSTRING("FULLSCREEN","\x3b","\xae","\xbd","\xeb"),
	HX_HCSTRING("BORDERLESS","\x45","\xba","\x7a","\x09"),
	HX_HCSTRING("RESIZABLE","\x4b","\xa7","\xa8","\xa4"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("VSYNC","\xb1","\x65","\x96","\xbb"),
	HX_HCSTRING("HW_AA","\x50","\xa3","\xa3","\xae"),
	HX_HCSTRING("HW_AA_HIRES","\x70","\x13","\x75","\x95"),
	HX_HCSTRING("DEPTH_BUFFER","\x1c","\x84","\x06","\x89"),
	HX_HCSTRING("STENCIL_BUFFER","\x43","\x1c","\x95","\x64"),
	HX_HCSTRING("nmeFrameHandle","\x0f","\x6a","\x6d","\xc4"),
	HX_HCSTRING("nmeWindow","\xd6","\x97","\x4e","\xed"),
	HX_HCSTRING("silentRecreate","\xa4","\x62","\xe5","\x0f"),
	HX_HCSTRING("sIsInit","\xed","\xcc","\xda","\x45"),
	HX_HCSTRING("initHeight","\x17","\x63","\x91","\x06"),
	HX_HCSTRING("initWidth","\xd6","\xd0","\xf4","\xe5"),
	HX_HCSTRING("initFrameRate","\x7d","\xd4","\x24","\xb4"),
	HX_HCSTRING("company","\x3d","\x15","\x69","\x83"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("packageName","\xf1","\x04","\xad","\x04"),
	HX_HCSTRING("file","\x7c","\xce","\xbb","\x43"),
	HX_HCSTRING("build","\x2e","\xdb","\xea","\xba"),
	HX_HCSTRING("ndllVersion","\x82","\x69","\x0c","\xe6"),
	HX_HCSTRING("nmeStateVersion","\x6d","\xe1","\x7a","\x6f"),
	HX_HCSTRING("bits","\x06","\xfb","\x16","\x41"),
	HX_HCSTRING("onQuit","\x8e","\x48","\x94","\xed"),
	HX_HCSTRING("nmeQuitting","\xa3","\xe9","\xbb","\xa5"),
	HX_HCSTRING("pollClientList","\x68","\xfb","\x29","\xac"),
	HX_HCSTRING("mainThreadJobs","\x59","\x1f","\xb1","\xe1"),
	HX_HCSTRING("mainThreadJobMutex","\x45","\x89","\x4a","\x25"),
	HX_HCSTRING("createWindow","\x0c","\xd4","\xe1","\x74"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("addPollClient","\x6b","\xbf","\xc4","\xec"),
	HX_HCSTRING("pollThreadJobs","\xdf","\x68","\xc1","\xbd"),
	HX_HCSTRING("pollClients","\x49","\xb7","\x8b","\xa9"),
	HX_HCSTRING("getNextWake","\x6d","\xc5","\xb2","\x20"),
	HX_HCSTRING("setFixedOrientation","\x7e","\x35","\x51","\xc6"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("forceClose","\xcd","\x01","\x38","\xdf"),
	HX_HCSTRING("pause","\xf6","\xd6","\x57","\xbd"),
	HX_HCSTRING("runOnMainThread","\xcd","\xb1","\xb5","\xce"),
	HX_HCSTRING("postUICallback","\x99","\xd0","\x5a","\xb0"),
	HX_HCSTRING("resume","\xad","\x69","\x84","\x08"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setPackage","\x04","\x50","\x90","\x94"),
	HX_HCSTRING("get_build","\x85","\x37","\x94","\xfe"),
	HX_HCSTRING("get_ndllVersion","\x19","\x21","\xee","\xa6"),
	HX_HCSTRING("get_nmeStateVersion","\x84","\xb0","\x85","\xfa"),
	HX_HCSTRING("get_bits","\x8f","\xb6","\xd1","\xc0"),
	HX_HCSTRING("nme_set_package","\xf0","\xe8","\xfe","\xa4"),
	HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),
	HX_HCSTRING("nme_pause_animation","\x02","\x57","\x8e","\x6f"),
	HX_HCSTRING("nme_resume_animation","\x0b","\x17","\x60","\x4c"),
	HX_HCSTRING("nme_get_ndll_version","\xb1","\x93","\x67","\x6f"),
	HX_HCSTRING("nme_get_nme_state_version","\x8f","\xfd","\xcc","\xc2"),
	HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d"),
	HX_HCSTRING("nme_get_bits","\xe8","\xbd","\xbd","\x04"),
	::String(null()) };

void Application_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app.Application","\xbb","\x86","\x3e","\x77");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Application_obj::__GetStatic;
	__mClass->mSetStaticField = &Application_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Application_obj >;
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

void Application_obj::__boot()
{
	OrientationPortrait= (int)1;
	OrientationPortraitUpsideDown= (int)2;
	OrientationLandscapeRight= (int)3;
	OrientationLandscapeLeft= (int)4;
	OrientationFaceUp= (int)5;
	OrientationFaceDown= (int)6;
	OrientationPortraitAny= (int)7;
	OrientationLandscapeAny= (int)8;
	OrientationAny= (int)9;
	FULLSCREEN= (int)1;
	BORDERLESS= (int)2;
	RESIZABLE= (int)4;
	HARDWARE= (int)8;
	VSYNC= (int)16;
	HW_AA= (int)32;
	HW_AA_HIRES= (int)96;
	DEPTH_BUFFER= (int)512;
	STENCIL_BUFFER= (int)1024;
	nmeFrameHandle= null();
	nmeWindow= null();
	silentRecreate= false;
	sIsInit= false;
	onQuit= ::nme::app::Application_obj::close_dyn();
	nmeQuitting= false;
	mainThreadJobs= cpp::ArrayBase_obj::__new();
	mainThreadJobMutex= ::cpp::vm::Mutex_obj::__new();
	nme_set_package= ::nme::Loader_obj::load(HX_HCSTRING("nme_set_package","\xf0","\xe8","\xfe","\xa4"),(int)4);
	nme_get_frame_stage= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_frame_stage","\x4a","\x47","\xc4","\x7f"),(int)1);
	nme_pause_animation= ::nme::Loader_obj::load(HX_HCSTRING("nme_pause_animation","\x02","\x57","\x8e","\x6f"),(int)0);
	nme_resume_animation= ::nme::Loader_obj::load(HX_HCSTRING("nme_resume_animation","\x0b","\x17","\x60","\x4c"),(int)0);
	nme_get_ndll_version= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_ndll_version","\xb1","\x93","\x67","\x6f"),(int)0);
	nme_get_nme_state_version= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_ndll_version","\xb1","\x93","\x67","\x6f"),(int)0);
	nme_stage_set_fixed_orientation= ::nme::Loader_obj::load(HX_HCSTRING("nme_stage_set_fixed_orientation","\xee","\xdb","\x66","\x5d"),(int)1);
	nme_get_bits= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_bits","\xe8","\xbd","\xbd","\x04"),(int)0);
}

} // end namespace nme
} // end namespace app
