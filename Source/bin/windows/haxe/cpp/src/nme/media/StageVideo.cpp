#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme__Vector_Vector_Impl_
#include <nme/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
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
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
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
#ifndef INCLUDED_nme_events_NetStatusEvent
#include <nme/events/NetStatusEvent.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_media_StageVideo
#include <nme/media/StageVideo.h>
#endif
#ifndef INCLUDED_nme_net_NetStream
#include <nme/net/NetStream.h>
#endif
namespace nme{
namespace media{

Void StageVideo_obj::__construct(::nme::display::Stage inStage)
{
HX_STACK_FRAME("nme.media.StageVideo","new",0x873b2ae1,"nme.media.StageVideo.new","nme/media/StageVideo.hx",74,0x88f583ad)
HX_STACK_THIS(this)
HX_STACK_ARG(inStage,"inStage")
{
	HX_STACK_LINE(75)
	super::__construct(null());
	HX_STACK_LINE(76)
	this->nmeStage = inStage;
	HX_STACK_LINE(77)
	this->depth = (int)0;
	HX_STACK_LINE(78)
	::nme::geom::Point tmp = ::nme::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	this->nmePan = tmp;
	HX_STACK_LINE(79)
	::nme::geom::Point tmp1 = ::nme::geom::Point_obj::__new((int)1,(int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(79)
	this->nmeZoom = tmp1;
	HX_STACK_LINE(80)
	this->videoWidth = (int)0;
	HX_STACK_LINE(81)
	this->videoHeight = (int)0;
	HX_STACK_LINE(82)
	this->duration = (int)0;
	HX_STACK_LINE(83)
	::nme::geom::Rectangle tmp2 = ::nme::geom::Rectangle_obj::__new((int)0,(int)0,(int)0,(int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(83)
	this->nmeViewport = tmp2;
}
;
	return null();
}

//StageVideo_obj::~StageVideo_obj() { }

Dynamic StageVideo_obj::__CreateEmpty() { return  new StageVideo_obj; }
hx::ObjectPtr< StageVideo_obj > StageVideo_obj::__new(::nme::display::Stage inStage)
{  hx::ObjectPtr< StageVideo_obj > _result_ = new StageVideo_obj();
	_result_->__construct(inStage);
	return _result_;}

Dynamic StageVideo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StageVideo_obj > _result_ = new StageVideo_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Array< ::String > StageVideo_obj::get_colorSpaces( ){
	HX_STACK_FRAME("nme.media.StageVideo","get_colorSpaces",0xcae48248,"nme.media.StageVideo.get_colorSpaces","nme/media/StageVideo.hx",87,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	Array< ::String > tmp = ::nme::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(88)
	Array< ::String > colorSpaces = tmp;		HX_STACK_VAR(colorSpaces,"colorSpaces");
	HX_STACK_LINE(89)
	Array< ::String > tmp1 = colorSpaces;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(89)
	::nme::_Vector::Vector_Impl__obj::push(tmp1,HX_HCSTRING("BT.709","\x64","\x41","\xc8","\xdf"));
	HX_STACK_LINE(90)
	Array< ::String > tmp2 = colorSpaces;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(90)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,get_colorSpaces,return )

Void StageVideo_obj::attachNetStream( ::nme::net::NetStream inNetStream){
{
		HX_STACK_FRAME("nme.media.StageVideo","attachNetStream",0xae5cd839,"nme.media.StageVideo.attachNetStream","nme/media/StageVideo.hx",96,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inNetStream,"inNetStream")
		HX_STACK_LINE(97)
		::nme::net::NetStream tmp = this->nmeNetStream;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(97)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		if ((tmp1)){
			HX_STACK_LINE(98)
			::nme::net::NetStream tmp2 = this->nmeNetStream;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(98)
			tmp2->nmeAttachedVideo = null();
		}
		HX_STACK_LINE(99)
		this->nmeNetStream = inNetStream;
		HX_STACK_LINE(100)
		::nme::net::NetStream tmp2 = this->nmeNetStream;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(102)
			::nme::net::NetStream tmp4 = this->nmeNetStream;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			tmp4->nmeAttachedVideo = hx::ObjectPtr<OBJ_>(this);
			HX_STACK_LINE(103)
			this->nmeCreate();
			HX_STACK_LINE(104)
			::nme::net::NetStream tmp5 = this->nmeNetStream;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			::String tmp6 = tmp5->nmeFilename;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			if ((tmp7)){
				HX_STACK_LINE(105)
				::nme::net::NetStream tmp8 = this->nmeNetStream;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(105)
				::String tmp9 = tmp8->nmeFilename;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(105)
				::nme::net::NetStream tmp10 = this->nmeNetStream;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(105)
				Float tmp11 = tmp10->nmeSeek;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(105)
				::nme::net::NetStream tmp12 = this->nmeNetStream;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(105)
				bool tmp13 = tmp12->nmePaused;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(105)
				Float tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(105)
				if ((tmp13)){
					HX_STACK_LINE(105)
					tmp14 = (int)-3;
				}
				else{
					HX_STACK_LINE(105)
					tmp14 = (int)-1;
				}
				HX_STACK_LINE(105)
				this->nmePlay(tmp9,tmp11,tmp14);
			}
		}
		else{
			HX_STACK_LINE(109)
			this->nmeDestroy();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,attachNetStream,(void))

::nme::geom::Point StageVideo_obj::get_pan( ){
	HX_STACK_FRAME("nme.media.StageVideo","get_pan",0x041748f5,"nme.media.StageVideo.get_pan","nme/media/StageVideo.hx",114,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	::nme::geom::Point tmp = this->nmePan;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	::nme::geom::Point tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,get_pan,return )

::nme::geom::Point StageVideo_obj::set_pan( ::nme::geom::Point inPan){
	HX_STACK_FRAME("nme.media.StageVideo","set_pan",0xf718da01,"nme.media.StageVideo.set_pan","nme/media/StageVideo.hx",116,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inPan,"inPan")
	HX_STACK_LINE(117)
	::nme::geom::Point tmp = inPan->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(117)
	this->nmePan = tmp;
	HX_STACK_LINE(118)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(118)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(118)
	if ((tmp2)){
		HX_STACK_LINE(119)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Float tmp4 = inPan->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		Float tmp5 = inPan->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(119)
		::nme::media::StageVideo_obj::nme_sv_pan(tmp3,tmp4,tmp5);
	}
	HX_STACK_LINE(121)
	::nme::geom::Point tmp3 = inPan;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(121)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,set_pan,return )

::nme::geom::Point StageVideo_obj::get_zoom( ){
	HX_STACK_FRAME("nme.media.StageVideo","get_zoom",0x96ef507b,"nme.media.StageVideo.get_zoom","nme/media/StageVideo.hx",124,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(124)
	::nme::geom::Point tmp = this->nmeZoom;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(124)
	::nme::geom::Point tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(124)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,get_zoom,return )

::nme::geom::Point StageVideo_obj::set_zoom( ::nme::geom::Point inZoom){
	HX_STACK_FRAME("nme.media.StageVideo","set_zoom",0x454ca9ef,"nme.media.StageVideo.set_zoom","nme/media/StageVideo.hx",126,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inZoom,"inZoom")
	HX_STACK_LINE(127)
	::nme::geom::Point tmp = inZoom->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(127)
	this->nmeZoom = tmp;
	HX_STACK_LINE(129)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(129)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(129)
	if ((tmp2)){
		HX_STACK_LINE(130)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		::nme::geom::Point tmp4 = this->nmeZoom;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		Float tmp5 = tmp4->x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(130)
		::nme::geom::Point tmp6 = this->nmeZoom;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		Float tmp7 = tmp6->y;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		::nme::media::StageVideo_obj::nme_sv_zoom(tmp3,tmp5,tmp7);
	}
	HX_STACK_LINE(132)
	::nme::geom::Point tmp3 = inZoom;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(132)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,set_zoom,return )

::nme::geom::Rectangle StageVideo_obj::get_viewPort( ){
	HX_STACK_FRAME("nme.media.StageVideo","get_viewPort",0x347bf9ee,"nme.media.StageVideo.get_viewPort","nme/media/StageVideo.hx",135,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::nme::geom::Rectangle tmp = this->nmeViewport;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	::nme::geom::Rectangle tmp1 = tmp->clone();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(135)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,get_viewPort,return )

::nme::geom::Rectangle StageVideo_obj::set_viewPort( ::nme::geom::Rectangle inVp){
	HX_STACK_FRAME("nme.media.StageVideo","set_viewPort",0x49751d62,"nme.media.StageVideo.set_viewPort","nme/media/StageVideo.hx",137,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVp,"inVp")
	HX_STACK_LINE(138)
	::nme::geom::Rectangle tmp = inVp->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	this->nmeViewport = tmp;
	HX_STACK_LINE(139)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(139)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(139)
	if ((tmp2)){
		HX_STACK_LINE(140)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		Float tmp4 = inVp->x;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		Float tmp5 = inVp->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		Float tmp6 = inVp->width;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(140)
		Float tmp7 = inVp->height;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(140)
		::nme::media::StageVideo_obj::nme_sv_viewport(tmp3,tmp4,tmp5,tmp6,tmp7);
	}
	HX_STACK_LINE(141)
	::nme::geom::Rectangle tmp3 = inVp;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,set_viewPort,return )

bool StageVideo_obj::nmeCreate( ){
	HX_STACK_FRAME("nme.media.StageVideo","nmeCreate",0xc5091c23,"nme.media.StageVideo.nmeCreate","nme/media/StageVideo.hx",148,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(149)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(149)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(149)
	if ((tmp1)){
		HX_STACK_LINE(154)
		::nme::display::Stage tmp2 = this->nmeStage;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(154)
		Dynamic tmp3 = tmp2->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		Dynamic tmp4 = ::nme::media::StageVideo_obj::nme_sv_create(tmp3,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		this->nmeHandle = tmp4;
	}
	HX_STACK_LINE(156)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(156)
	bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(156)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeCreate,return )

Void StageVideo_obj::nmeDestroy( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeDestroy",0xb60af9f3,"nme.media.StageVideo.nmeDestroy","nme/media/StageVideo.hx",160,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(161)
		::nme::net::NetStream tmp = this->nmeNetStream;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(161)
			::nme::net::NetStream tmp3 = this->nmeNetStream;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(161)
			::nme::net::NetStream tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(161)
			::nme::media::StageVideo tmp5 = tmp4->nmeAttachedVideo;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(161)
			tmp2 = (tmp5 != null());
		}
		else{
			HX_STACK_LINE(161)
			tmp2 = false;
		}
		HX_STACK_LINE(161)
		if ((tmp2)){
			HX_STACK_LINE(162)
			::nme::net::NetStream tmp3 = this->nmeNetStream;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(162)
			tmp3->nmeAttachedVideo = null();
		}
		HX_STACK_LINE(163)
		this->nmeNetStream = null();
		HX_STACK_LINE(165)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		if ((tmp4)){
			HX_STACK_LINE(166)
			Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			::nme::media::StageVideo_obj::nme_sv_destroy(tmp5);
		}
		HX_STACK_LINE(168)
		this->nmeHandle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeDestroy,(void))

Float StageVideo_obj::nmeGetTime( ){
	HX_STACK_FRAME("nme.media.StageVideo","nmeGetTime",0xb10448bc,"nme.media.StageVideo.nmeGetTime","nme/media/StageVideo.hx",172,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(173)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(173)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(173)
	if ((tmp1)){
		HX_STACK_LINE(174)
		return (int)0;
	}
	HX_STACK_LINE(175)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(175)
	Float tmp3 = ::nme::media::StageVideo_obj::nme_sv_get_time(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(175)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeGetTime,return )

Void StageVideo_obj::nmeSeek( Float inTime){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeSeek",0xaf0ed2df,"nme.media.StageVideo.nmeSeek","nme/media/StageVideo.hx",179,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTime,"inTime")
		HX_STACK_LINE(180)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(181)
			return null();
		}
		HX_STACK_LINE(182)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		Float tmp3 = inTime;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(182)
		::nme::media::StageVideo_obj::nme_sv_seek(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,nmeSeek,(void))

Void StageVideo_obj::nmePlay( ::String inUrl,hx::Null< Float >  __o_inStart,hx::Null< Float >  __o_inLength){
Float inStart = __o_inStart.Default(0);
Float inLength = __o_inLength.Default(-1);
	HX_STACK_FRAME("nme.media.StageVideo","nmePlay",0xad187b5b,"nme.media.StageVideo.nmePlay","nme/media/StageVideo.hx",186,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inUrl,"inUrl")
	HX_STACK_ARG(inStart,"inStart")
	HX_STACK_ARG(inLength,"inLength")
{
		HX_STACK_LINE(187)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(187)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(187)
		if ((tmp1)){
			HX_STACK_LINE(188)
			this->nmeCreate();
		}
		HX_STACK_LINE(189)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		if ((tmp3)){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(192)
		::String tmp4 = inUrl;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		::String tmp5 = ::nme::Assets_obj::getAssetPath(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(192)
		::String localName = tmp5;		HX_STACK_VAR(localName,"localName");
		HX_STACK_LINE(193)
		Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(193)
		bool tmp7 = (localName != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(193)
		::String tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(193)
		if ((tmp7)){
			HX_STACK_LINE(193)
			tmp8 = localName;
		}
		else{
			HX_STACK_LINE(193)
			tmp8 = inUrl;
		}
		HX_STACK_LINE(193)
		Float tmp9 = inStart;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(193)
		Float tmp10 = inLength;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(193)
		::nme::media::StageVideo_obj::nme_sv_play(tmp6,tmp8,tmp9,tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StageVideo_obj,nmePlay,(void))

Void StageVideo_obj::nmePause( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmePause",0xc11d43af,"nme.media.StageVideo.nmePause","nme/media/StageVideo.hx",197,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(199)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(199)
			::nme::media::StageVideo_obj::nme_sv_action(tmp2,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmePause,(void))

Void StageVideo_obj::nmeTogglePause( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeTogglePause",0xa5bfcc3b,"nme.media.StageVideo.nmeTogglePause","nme/media/StageVideo.hx",203,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(204)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(205)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(205)
			::nme::media::StageVideo_obj::nme_sv_action(tmp2,(int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeTogglePause,(void))

Void StageVideo_obj::nmeResume( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeResume",0x517e1ed4,"nme.media.StageVideo.nmeResume","nme/media/StageVideo.hx",209,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(210)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(210)
		if ((tmp1)){
			HX_STACK_LINE(211)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(211)
			::nme::media::StageVideo_obj::nme_sv_action(tmp2,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeResume,(void))

Void StageVideo_obj::nmeSetVolume( Float inVolume){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeSetVolume",0x55075c55,"nme.media.StageVideo.nmeSetVolume","nme/media/StageVideo.hx",216,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVolume,"inVolume")
		HX_STACK_LINE(217)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(217)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(217)
		if ((tmp1)){
			HX_STACK_LINE(218)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(218)
			Float tmp3 = inVolume;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(218)
			::nme::media::StageVideo_obj::nme_sv_set_sound_transform(tmp2,tmp3,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,nmeSetVolume,(void))

int StageVideo_obj::nmeGetBytesTotal( ){
	HX_STACK_FRAME("nme.media.StageVideo","nmeGetBytesTotal",0xbbd30148,"nme.media.StageVideo.nmeGetBytesTotal","nme/media/StageVideo.hx",222,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(223)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(223)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(223)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(223)
	if ((tmp1)){
		HX_STACK_LINE(223)
		Float tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(223)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(223)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(223)
		tmp2 = false;
	}
	HX_STACK_LINE(223)
	if ((tmp2)){
		HX_STACK_LINE(224)
		return (int)100000;
	}
	HX_STACK_LINE(225)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeGetBytesTotal,return )

int StageVideo_obj::nmeGetDecodedFrames( ){
	HX_STACK_FRAME("nme.media.StageVideo","nmeGetDecodedFrames",0x64c6412d,"nme.media.StageVideo.nmeGetDecodedFrames","nme/media/StageVideo.hx",232,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(232)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeGetDecodedFrames,return )

int StageVideo_obj::nmeGetBytesLoaded( ){
	HX_STACK_FRAME("nme.media.StageVideo","nmeGetBytesLoaded",0x5d666e01,"nme.media.StageVideo.nmeGetBytesLoaded","nme/media/StageVideo.hx",237,0x88f583ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(238)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(238)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(238)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(238)
	if ((tmp1)){
		HX_STACK_LINE(238)
		Float tmp3 = this->duration;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		tmp2 = (tmp4 > (int)0);
	}
	else{
		HX_STACK_LINE(238)
		tmp2 = false;
	}
	HX_STACK_LINE(238)
	if ((tmp2)){
		HX_STACK_LINE(240)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(240)
		int tmp4 = ::nme::media::StageVideo_obj::nme_sv_get_buffered_percent(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(240)
		int percent = tmp4;		HX_STACK_VAR(percent,"percent");
		HX_STACK_LINE(241)
		int tmp5 = ((int)1000 * percent);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(241)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(241)
		return tmp6;
	}
	HX_STACK_LINE(243)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,nmeGetBytesLoaded,return )

Void StageVideo_obj::nmeSetSoundTransform( Float inVolume,Float inRightness){
{
		HX_STACK_FRAME("nme.media.StageVideo","nmeSetSoundTransform",0x6d129418,"nme.media.StageVideo.nmeSetSoundTransform","nme/media/StageVideo.hx",249,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inVolume,"inVolume")
		HX_STACK_ARG(inRightness,"inRightness")
		HX_STACK_LINE(250)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(250)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(250)
		if ((tmp1)){
			HX_STACK_LINE(251)
			Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(251)
			Float tmp3 = inVolume;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(251)
			Float tmp4 = inRightness;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(251)
			::nme::media::StageVideo_obj::nme_sv_set_sound_transform(tmp2,tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StageVideo_obj,nmeSetSoundTransform,(void))

Void StageVideo_obj::_native_meta_data( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","_native_meta_data",0xa43a0ddc,"nme.media.StageVideo._native_meta_data","nme/media/StageVideo.hx",256,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(257)
		::nme::net::NetStream tmp = this->nmeNetStream;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(257)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(257)
		if ((tmp1)){
			HX_STACK_LINE(259)
			::nme::net::NetStream tmp2 = this->nmeNetStream;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(259)
			Dynamic client = tmp2->client;		HX_STACK_VAR(client,"client");
			HX_STACK_LINE(260)
			bool tmp3 = (client != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(260)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(260)
			if ((tmp3)){
				HX_STACK_LINE(260)
				tmp4 = (client->__Field(HX_HCSTRING("onMetaData","\xce","\xe7","\xa9","\x08"), hx::paccDynamic ) != null());
			}
			else{
				HX_STACK_LINE(260)
				tmp4 = false;
			}
			HX_STACK_LINE(260)
			if ((tmp4)){
				HX_STACK_LINE(261)
				int tmp5 = this->videoWidth;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(261)
				int tmp6 = this->videoHeight;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(261)
				Float tmp7 = this->duration;		HX_STACK_VAR(tmp7,"tmp7");
				struct _Function_3_1{
					inline static Dynamic Block( int &tmp5,int &tmp6,Float &tmp7){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",261,0x88f583ad)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_HCSTRING("width","\x06","\xb6","\x62","\xca") , tmp5,false);
							__result->Add(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02") , tmp6,false);
							__result->Add(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14") , tmp7,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(261)
				Dynamic tmp8 = _Function_3_1::Block(tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(261)
				client->__Field(HX_HCSTRING("onMetaData","\xce","\xe7","\xa9","\x08"), hx::paccDynamic )(tmp8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,_native_meta_data,(void))

Void StageVideo_obj::_native_set_data( int inWidth,int inHeight,Float inDuration){
{
		HX_STACK_FRAME("nme.media.StageVideo","_native_set_data",0x3ebed96f,"nme.media.StageVideo._native_set_data","nme/media/StageVideo.hx",266,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_ARG(inDuration,"inDuration")
		HX_STACK_LINE(267)
		this->videoWidth = inWidth;
		HX_STACK_LINE(268)
		this->videoHeight = inHeight;
		HX_STACK_LINE(269)
		this->duration = inDuration;
		HX_STACK_LINE(270)
		this->_native_meta_data();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StageVideo_obj,_native_set_data,(void))

Void StageVideo_obj::_native_play_status( int inStatus){
{
		HX_STACK_FRAME("nme.media.StageVideo","_native_play_status",0x0e29e015,"nme.media.StageVideo._native_play_status","nme/media/StageVideo.hx",274,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inStatus,"inStatus")
		HX_STACK_LINE(275)
		::nme::net::NetStream tmp = this->nmeNetStream;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(275)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(275)
		if ((tmp1)){
			HX_STACK_LINE(277)
			::nme::net::NetStream tmp2 = this->nmeNetStream;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			Dynamic client = tmp2->client;		HX_STACK_VAR(client,"client");
			HX_STACK_LINE(278)
			bool tmp3 = (client != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(278)
			if ((tmp3)){
				HX_STACK_LINE(278)
				tmp4 = (client->__Field(HX_HCSTRING("onPlayStatus","\x45","\x1a","\x03","\x85"), hx::paccDynamic ) != null());
			}
			else{
				HX_STACK_LINE(278)
				tmp4 = false;
			}
			HX_STACK_LINE(278)
			if ((tmp4)){
				HX_STACK_LINE(280)
				int tmp5 = inStatus;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(280)
				switch( (int)(tmp5)){
					case (int)0: {
						HX_STACK_LINE(283)
						client->__Field(HX_HCSTRING("onPlayStatus","\x45","\x1a","\x03","\x85"), hx::paccDynamic )(HX_HCSTRING("NetStream.Play.Complete","\xe2","\xae","\x0c","\x40"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(285)
						client->__Field(HX_HCSTRING("onPlayStatus","\x45","\x1a","\x03","\x85"), hx::paccDynamic )(HX_HCSTRING("NetStream.Play.Switch","\xdd","\xeb","\xa2","\xae"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(287)
						client->__Field(HX_HCSTRING("onPlayStatus","\x45","\x1a","\x03","\x85"), hx::paccDynamic )(HX_HCSTRING("NetStream.Play.TransitionComplete","\xd7","\xc2","\x49","\x44"));
					}
					;break;
				}
			}
			HX_STACK_LINE(291)
			Dynamic info = null();		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(292)
			int tmp5 = inStatus;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(292)
			switch( (int)(tmp5)){
				case (int)4: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",295,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.StreamNotFound","\xb8","\x57","\x58","\xd4"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(295)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(295)
					info = tmp6;
				}
				;break;
				case (int)3: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",297,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Failed","\xa6","\x67","\x28","\xd1"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(297)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(297)
					info = tmp6;
				}
				;break;
				case (int)5: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",299,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Start","\x99","\x42","\x56","\xdc"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(299)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(299)
					info = tmp6;
				}
				;break;
				case (int)6: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",301,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Stop","\xab","\x15","\x72","\xa7"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(301)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(301)
					info = tmp6;
				}
				;break;
				case (int)0: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",304,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Complete","\xe2","\xae","\x0c","\x40"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(304)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(304)
					info = tmp6;
				}
				;break;
				case (int)1: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",306,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.Switch","\xdd","\xeb","\xa2","\xae"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(306)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(306)
					info = tmp6;
				}
				;break;
				case (int)2: {
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",308,0x88f583ad)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Play.TransitionComplete","\xd7","\xc2","\x49","\x44"),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(308)
					Dynamic tmp6 = _Function_3_1::Block();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(308)
					info = tmp6;
				}
				;break;
			}
			HX_STACK_LINE(310)
			bool tmp6 = (info != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(310)
			if ((tmp6)){
				HX_STACK_LINE(312)
				::nme::events::NetStatusEvent tmp7 = ::nme::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,info);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(312)
				::nme::events::NetStatusEvent event = tmp7;		HX_STACK_VAR(event,"event");
				HX_STACK_LINE(313)
				::nme::net::NetStream tmp8 = this->nmeNetStream;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(313)
				::nme::events::NetStatusEvent tmp9 = event;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(313)
				tmp8->dispatchEvent(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StageVideo_obj,_native_play_status,(void))

Void StageVideo_obj::_native_on_seek( ){
{
		HX_STACK_FRAME("nme.media.StageVideo","_native_on_seek",0xb302c290,"nme.media.StageVideo._native_on_seek","nme/media/StageVideo.hx",319,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(320)
		::nme::net::NetStream tmp = this->nmeNetStream;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		if ((tmp1)){
			HX_STACK_LINE(322)
			Dynamic info = null();		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				int tmp2 = this->seekCode;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(323)
				int _g = tmp2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(323)
				int tmp3 = _g;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(323)
				switch( (int)(tmp3)){
					case (int)0: {
						HX_STACK_LINE(326)
						Float tmp4 = this->seekFrom;		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_4_1{
							inline static Dynamic Block( Float &tmp4){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",326,0x88f583ad)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Seek.Notify","\xae","\xdd","\x77","\x86"),false);
									__result->Add(HX_HCSTRING("seekPoint","\xb8","\xcb","\x3d","\xdd") , tmp4,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(326)
						Dynamic tmp5 = _Function_4_1::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(326)
						info = tmp5;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(328)
						Float tmp4 = this->seekFrom;		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_4_1{
							inline static Dynamic Block( Float &tmp4){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",328,0x88f583ad)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Seek.InvalidTime","\x9f","\x79","\x5f","\x12"),false);
									__result->Add(HX_HCSTRING("details","\xc2","\xdc","\x56","\xab") , tmp4,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(328)
						Dynamic tmp5 = _Function_4_1::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(328)
						info = tmp5;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(330)
						Float tmp4 = this->seekFrom;		HX_STACK_VAR(tmp4,"tmp4");
						struct _Function_4_1{
							inline static Dynamic Block( Float &tmp4){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/media/StageVideo.hx",330,0x88f583ad)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetStream.Seek.Failed","\xa2","\xc8","\xbd","\x3c"),false);
									__result->Add(HX_HCSTRING("seekPoint","\xb8","\xcb","\x3d","\xdd") , tmp4,false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(330)
						Dynamic tmp5 = _Function_4_1::Block(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(330)
						info = tmp5;
					}
					;break;
				}
			}
			HX_STACK_LINE(333)
			bool tmp2 = (info != null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(333)
			if ((tmp2)){
				HX_STACK_LINE(335)
				::nme::events::NetStatusEvent tmp3 = ::nme::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,info);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(335)
				::nme::events::NetStatusEvent event = tmp3;		HX_STACK_VAR(event,"event");
				HX_STACK_LINE(336)
				::nme::net::NetStream tmp4 = this->nmeNetStream;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(336)
				::nme::events::NetStatusEvent tmp5 = event;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(336)
				tmp4->dispatchEvent(tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StageVideo_obj,_native_on_seek,(void))

Void StageVideo_obj::_native_on_seek_data( int inCode,Float inWhen){
{
		HX_STACK_FRAME("nme.media.StageVideo","_native_on_seek_data",0xea966579,"nme.media.StageVideo._native_on_seek_data","nme/media/StageVideo.hx",342,0x88f583ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCode,"inCode")
		HX_STACK_ARG(inWhen,"inWhen")
		HX_STACK_LINE(343)
		this->seekCode = inCode;
		HX_STACK_LINE(344)
		this->seekFrom = inWhen;
		HX_STACK_LINE(345)
		this->_native_on_seek();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StageVideo_obj,_native_on_seek_data,(void))

::String StageVideo_obj::playComplete;

::String StageVideo_obj::playSwitch;

::String StageVideo_obj::playTransitionComplete;

::String StageVideo_obj::playStart;

::String StageVideo_obj::playStop;

::String StageVideo_obj::playStreamNotFound;

::String StageVideo_obj::playFailed;

::String StageVideo_obj::seekFailed;

::String StageVideo_obj::seekNotify;

::String StageVideo_obj::seekInvalidTime;

::String StageVideo_obj::failed;

int StageVideo_obj::PAUSE;

int StageVideo_obj::RESUME;

int StageVideo_obj::TOGGLE;

int StageVideo_obj::PAUSE_LEN;

int StageVideo_obj::ALL_LEN;

int StageVideo_obj::PLAY_STATUS_COMPLETE;

int StageVideo_obj::PLAY_STATUS_SWITCH;

int StageVideo_obj::PLAY_STATUS_TRANSITION;

int StageVideo_obj::PLAY_STATUS_ERROR;

int StageVideo_obj::PLAY_STATUS_NOT_STARTED;

int StageVideo_obj::PLAY_STATUS_STARTED;

int StageVideo_obj::PLAY_STATUS_STOPPED;

int StageVideo_obj::SEEK_FINISHED_OK;

int StageVideo_obj::SEEK_FINISHED_EARLY;

int StageVideo_obj::SEEK_FINISHED_ERROR;

Dynamic StageVideo_obj::nme_sv_create;

Dynamic StageVideo_obj::nme_sv_destroy;

Dynamic StageVideo_obj::nme_sv_action;

Dynamic StageVideo_obj::nme_sv_play;

Dynamic StageVideo_obj::nme_sv_seek;

Dynamic StageVideo_obj::nme_sv_get_time;

Dynamic StageVideo_obj::nme_sv_get_buffered_percent;

Dynamic StageVideo_obj::nme_sv_viewport;

Dynamic StageVideo_obj::nme_sv_pan;

Dynamic StageVideo_obj::nme_sv_zoom;

Dynamic StageVideo_obj::nme_sv_set_sound_transform;


StageVideo_obj::StageVideo_obj()
{
}

void StageVideo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StageVideo);
	HX_MARK_MEMBER_NAME(colorSpaces,"colorSpaces");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(videoHeight,"videoHeight");
	HX_MARK_MEMBER_NAME(videoWidth,"videoWidth");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(seekFrom,"seekFrom");
	HX_MARK_MEMBER_NAME(seekCode,"seekCode");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmePan,"nmePan");
	HX_MARK_MEMBER_NAME(nmeZoom,"nmeZoom");
	HX_MARK_MEMBER_NAME(nmeViewport,"nmeViewport");
	HX_MARK_MEMBER_NAME(nmeNetStream,"nmeNetStream");
	HX_MARK_MEMBER_NAME(nmeStage,"nmeStage");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StageVideo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorSpaces,"colorSpaces");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(videoHeight,"videoHeight");
	HX_VISIT_MEMBER_NAME(videoWidth,"videoWidth");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(seekFrom,"seekFrom");
	HX_VISIT_MEMBER_NAME(seekCode,"seekCode");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmePan,"nmePan");
	HX_VISIT_MEMBER_NAME(nmeZoom,"nmeZoom");
	HX_VISIT_MEMBER_NAME(nmeViewport,"nmeViewport");
	HX_VISIT_MEMBER_NAME(nmeNetStream,"nmeNetStream");
	HX_VISIT_MEMBER_NAME(nmeStage,"nmeStage");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StageVideo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp != hx::paccNever) return get_pan(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp != hx::paccNever) return get_zoom(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nmePan") ) { return nmePan; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nmeZoom") ) { return nmeZoom; }
		if (HX_FIELD_EQ(inName,"get_pan") ) { return get_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pan") ) { return set_pan_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSeek") ) { return nmeSeek_dyn(); }
		if (HX_FIELD_EQ(inName,"nmePlay") ) { return nmePlay_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return duration; }
		if (HX_FIELD_EQ(inName,"viewPort") ) { if (inCallProp != hx::paccNever) return get_viewPort(); }
		if (HX_FIELD_EQ(inName,"seekFrom") ) { return seekFrom; }
		if (HX_FIELD_EQ(inName,"seekCode") ) { return seekCode; }
		if (HX_FIELD_EQ(inName,"nmeStage") ) { return nmeStage; }
		if (HX_FIELD_EQ(inName,"get_zoom") ) { return get_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_zoom") ) { return set_zoom_dyn(); }
		if (HX_FIELD_EQ(inName,"nmePause") ) { return nmePause_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"nmeCreate") ) { return nmeCreate_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeResume") ) { return nmeResume_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { return videoWidth; }
		if (HX_FIELD_EQ(inName,"nmeDestroy") ) { return nmeDestroy_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetTime") ) { return nmeGetTime_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorSpaces") ) { return inCallProp != hx::paccNever ? get_colorSpaces() : colorSpaces; }
		if (HX_FIELD_EQ(inName,"videoHeight") ) { return videoHeight; }
		if (HX_FIELD_EQ(inName,"nmeViewport") ) { return nmeViewport; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeNetStream") ) { return nmeNetStream; }
		if (HX_FIELD_EQ(inName,"get_viewPort") ) { return get_viewPort_dyn(); }
		if (HX_FIELD_EQ(inName,"set_viewPort") ) { return set_viewPort_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetVolume") ) { return nmeSetVolume_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeTogglePause") ) { return nmeTogglePause_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_colorSpaces") ) { return get_colorSpaces_dyn(); }
		if (HX_FIELD_EQ(inName,"attachNetStream") ) { return attachNetStream_dyn(); }
		if (HX_FIELD_EQ(inName,"_native_on_seek") ) { return _native_on_seek_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeGetBytesTotal") ) { return nmeGetBytesTotal_dyn(); }
		if (HX_FIELD_EQ(inName,"_native_set_data") ) { return _native_set_data_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeGetBytesLoaded") ) { return nmeGetBytesLoaded_dyn(); }
		if (HX_FIELD_EQ(inName,"_native_meta_data") ) { return _native_meta_data_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nmeGetDecodedFrames") ) { return nmeGetDecodedFrames_dyn(); }
		if (HX_FIELD_EQ(inName,"_native_play_status") ) { return _native_play_status_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeSetSoundTransform") ) { return nmeSetSoundTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"_native_on_seek_data") ) { return _native_on_seek_data_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool StageVideo_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nme_sv_pan") ) { outValue = nme_sv_pan; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nme_sv_play") ) { outValue = nme_sv_play; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sv_seek") ) { outValue = nme_sv_seek; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sv_zoom") ) { outValue = nme_sv_zoom; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_sv_create") ) { outValue = nme_sv_create; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sv_action") ) { outValue = nme_sv_action; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_sv_destroy") ) { outValue = nme_sv_destroy; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sv_get_time") ) { outValue = nme_sv_get_time; return true;  }
		if (HX_FIELD_EQ(inName,"nme_sv_viewport") ) { outValue = nme_sv_viewport; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sv_set_sound_transform") ) { outValue = nme_sv_set_sound_transform; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sv_get_buffered_percent") ) { outValue = nme_sv_get_buffered_percent; return true;  }
	}
	return false;
}

Dynamic StageVideo_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp != hx::paccNever) return set_pan(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zoom") ) { if (inCallProp != hx::paccNever) return set_zoom(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"nmePan") ) { nmePan=inValue.Cast< ::nme::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"nmeZoom") ) { nmeZoom=inValue.Cast< ::nme::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"viewPort") ) { if (inCallProp != hx::paccNever) return set_viewPort(inValue); }
		if (HX_FIELD_EQ(inName,"seekFrom") ) { seekFrom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"seekCode") ) { seekCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeStage") ) { nmeStage=inValue.Cast< ::nme::display::Stage >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"videoWidth") ) { videoWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"colorSpaces") ) { colorSpaces=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"videoHeight") ) { videoHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeViewport") ) { nmeViewport=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeNetStream") ) { nmeNetStream=inValue.Cast< ::nme::net::NetStream >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool StageVideo_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"nme_sv_pan") ) { nme_sv_pan=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nme_sv_play") ) { nme_sv_play=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sv_seek") ) { nme_sv_seek=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sv_zoom") ) { nme_sv_zoom=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_sv_create") ) { nme_sv_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sv_action") ) { nme_sv_action=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_sv_destroy") ) { nme_sv_destroy=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_sv_get_time") ) { nme_sv_get_time=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_sv_viewport") ) { nme_sv_viewport=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_sv_set_sound_transform") ) { nme_sv_set_sound_transform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_sv_get_buffered_percent") ) { nme_sv_get_buffered_percent=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void StageVideo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorSpaces","\xb0","\x32","\x7d","\x72"));
	outFields->push(HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"));
	outFields->push(HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a"));
	outFields->push(HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("viewPort","\x86","\x78","\x7e","\x87"));
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("zoom","\x13","\xa3","\xf8","\x50"));
	outFields->push(HX_HCSTRING("seekFrom","\x02","\x73","\x28","\x46"));
	outFields->push(HX_HCSTRING("seekCode","\xc5","\x7e","\x2a","\x44"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("nmePan","\xb7","\x81","\xee","\x00"));
	outFields->push(HX_HCSTRING("nmeZoom","\x79","\xc1","\x69","\xd6"));
	outFields->push(HX_HCSTRING("nmeViewport","\xcc","\x95","\xdc","\xee"));
	outFields->push(HX_HCSTRING("nmeNetStream","\x97","\x6c","\x46","\xf0"));
	outFields->push(HX_HCSTRING("nmeStage","\x98","\xe5","\x94","\xc1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(StageVideo_obj,colorSpaces),HX_HCSTRING("colorSpaces","\xb0","\x32","\x7d","\x72")},
	{hx::fsInt,(int)offsetof(StageVideo_obj,depth),HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7")},
	{hx::fsInt,(int)offsetof(StageVideo_obj,videoHeight),HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a")},
	{hx::fsInt,(int)offsetof(StageVideo_obj,videoWidth),HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6")},
	{hx::fsFloat,(int)offsetof(StageVideo_obj,duration),HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14")},
	{hx::fsFloat,(int)offsetof(StageVideo_obj,seekFrom),HX_HCSTRING("seekFrom","\x02","\x73","\x28","\x46")},
	{hx::fsInt,(int)offsetof(StageVideo_obj,seekCode),HX_HCSTRING("seekCode","\xc5","\x7e","\x2a","\x44")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StageVideo_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsObject /*::nme::geom::Point*/ ,(int)offsetof(StageVideo_obj,nmePan),HX_HCSTRING("nmePan","\xb7","\x81","\xee","\x00")},
	{hx::fsObject /*::nme::geom::Point*/ ,(int)offsetof(StageVideo_obj,nmeZoom),HX_HCSTRING("nmeZoom","\x79","\xc1","\x69","\xd6")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(StageVideo_obj,nmeViewport),HX_HCSTRING("nmeViewport","\xcc","\x95","\xdc","\xee")},
	{hx::fsObject /*::nme::net::NetStream*/ ,(int)offsetof(StageVideo_obj,nmeNetStream),HX_HCSTRING("nmeNetStream","\x97","\x6c","\x46","\xf0")},
	{hx::fsObject /*::nme::display::Stage*/ ,(int)offsetof(StageVideo_obj,nmeStage),HX_HCSTRING("nmeStage","\x98","\xe5","\x94","\xc1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &StageVideo_obj::playComplete,HX_HCSTRING("playComplete","\xcd","\xfe","\x60","\x0b")},
	{hx::fsString,(void *) &StageVideo_obj::playSwitch,HX_HCSTRING("playSwitch","\x08","\xdb","\x3c","\x6c")},
	{hx::fsString,(void *) &StageVideo_obj::playTransitionComplete,HX_HCSTRING("playTransitionComplete","\x82","\x46","\xe3","\xef")},
	{hx::fsString,(void *) &StageVideo_obj::playStart,HX_HCSTRING("playStart","\xce","\xa1","\xef","\xa4")},
	{hx::fsString,(void *) &StageVideo_obj::playStop,HX_HCSTRING("playStop","\x16","\x54","\x6f","\x3c")},
	{hx::fsString,(void *) &StageVideo_obj::playStreamNotFound,HX_HCSTRING("playStreamNotFound","\xe3","\xe9","\x85","\x22")},
	{hx::fsString,(void *) &StageVideo_obj::playFailed,HX_HCSTRING("playFailed","\xd1","\x56","\xc2","\x8e")},
	{hx::fsString,(void *) &StageVideo_obj::seekFailed,HX_HCSTRING("seekFailed","\x55","\x29","\xa5","\xa9")},
	{hx::fsString,(void *) &StageVideo_obj::seekNotify,HX_HCSTRING("seekNotify","\x61","\x3e","\x5f","\xf3")},
	{hx::fsString,(void *) &StageVideo_obj::seekInvalidTime,HX_HCSTRING("seekInvalidTime","\x0c","\xb0","\x9d","\x54")},
	{hx::fsString,(void *) &StageVideo_obj::failed,HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7")},
	{hx::fsInt,(void *) &StageVideo_obj::PAUSE,HX_HCSTRING("PAUSE","\xd6","\x0e","\x46","\x3b")},
	{hx::fsInt,(void *) &StageVideo_obj::RESUME,HX_HCSTRING("RESUME","\xad","\x15","\x07","\xbb")},
	{hx::fsInt,(void *) &StageVideo_obj::TOGGLE,HX_HCSTRING("TOGGLE","\x94","\x6b","\xc6","\x41")},
	{hx::fsInt,(void *) &StageVideo_obj::PAUSE_LEN,HX_HCSTRING("PAUSE_LEN","\x8c","\x5e","\x2a","\x69")},
	{hx::fsInt,(void *) &StageVideo_obj::ALL_LEN,HX_HCSTRING("ALL_LEN","\x37","\xd6","\x8b","\xf3")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_COMPLETE,HX_HCSTRING("PLAY_STATUS_COMPLETE","\x1b","\x5f","\x5e","\x56")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_SWITCH,HX_HCSTRING("PLAY_STATUS_SWITCH","\xd6","\x07","\xbb","\xb9")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_TRANSITION,HX_HCSTRING("PLAY_STATUS_TRANSITION","\x77","\xac","\x63","\xc8")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_ERROR,HX_HCSTRING("PLAY_STATUS_ERROR","\x06","\x44","\x71","\x7d")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_NOT_STARTED,HX_HCSTRING("PLAY_STATUS_NOT_STARTED","\x73","\x51","\x48","\x38")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_STARTED,HX_HCSTRING("PLAY_STATUS_STARTED","\xff","\x90","\x5f","\xfa")},
	{hx::fsInt,(void *) &StageVideo_obj::PLAY_STATUS_STOPPED,HX_HCSTRING("PLAY_STATUS_STOPPED","\xcb","\x39","\xa6","\x08")},
	{hx::fsInt,(void *) &StageVideo_obj::SEEK_FINISHED_OK,HX_HCSTRING("SEEK_FINISHED_OK","\x82","\xba","\x9b","\xde")},
	{hx::fsInt,(void *) &StageVideo_obj::SEEK_FINISHED_EARLY,HX_HCSTRING("SEEK_FINISHED_EARLY","\xdd","\xce","\x82","\x73")},
	{hx::fsInt,(void *) &StageVideo_obj::SEEK_FINISHED_ERROR,HX_HCSTRING("SEEK_FINISHED_ERROR","\x02","\x72","\xbf","\x7e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_create,HX_HCSTRING("nme_sv_create","\xdf","\xa4","\xd3","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_destroy,HX_HCSTRING("nme_sv_destroy","\xb7","\x15","\x78","\x17")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_action,HX_HCSTRING("nme_sv_action","\x99","\x79","\x0a","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_play,HX_HCSTRING("nme_sv_play","\x17","\x1d","\xea","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_seek,HX_HCSTRING("nme_sv_seek","\x9b","\x74","\xe0","\x8d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_get_time,HX_HCSTRING("nme_sv_get_time","\x39","\x44","\x71","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_get_buffered_percent,HX_HCSTRING("nme_sv_get_buffered_percent","\xd1","\x5a","\x62","\x33")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_viewport,HX_HCSTRING("nme_sv_viewport","\x09","\x09","\x5f","\x3d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_pan,HX_HCSTRING("nme_sv_pan","\x9a","\xd7","\x9a","\x9b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_zoom,HX_HCSTRING("nme_sv_zoom","\x36","\x92","\x88","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &StageVideo_obj::nme_sv_set_sound_transform,HX_HCSTRING("nme_sv_set_sound_transform","\x1c","\x41","\x74","\x40")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("colorSpaces","\xb0","\x32","\x7d","\x72"),
	HX_HCSTRING("depth","\x03","\xf1","\x29","\xd7"),
	HX_HCSTRING("videoHeight","\xc2","\x9e","\xf3","\x7a"),
	HX_HCSTRING("videoWidth","\x8b","\xf3","\x30","\xa6"),
	HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"),
	HX_HCSTRING("seekFrom","\x02","\x73","\x28","\x46"),
	HX_HCSTRING("seekCode","\xc5","\x7e","\x2a","\x44"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("nmePan","\xb7","\x81","\xee","\x00"),
	HX_HCSTRING("nmeZoom","\x79","\xc1","\x69","\xd6"),
	HX_HCSTRING("nmeViewport","\xcc","\x95","\xdc","\xee"),
	HX_HCSTRING("nmeNetStream","\x97","\x6c","\x46","\xf0"),
	HX_HCSTRING("nmeStage","\x98","\xe5","\x94","\xc1"),
	HX_HCSTRING("get_colorSpaces","\x47","\xea","\x5e","\x33"),
	HX_HCSTRING("attachNetStream","\x38","\x40","\xd7","\x16"),
	HX_HCSTRING("get_pan","\xf4","\x19","\xca","\x26"),
	HX_HCSTRING("set_pan","\x00","\xab","\xcb","\x19"),
	HX_HCSTRING("get_zoom","\x9c","\x5e","\xb3","\xd0"),
	HX_HCSTRING("set_zoom","\x10","\xb8","\x10","\x7f"),
	HX_HCSTRING("get_viewPort","\x8f","\x2c","\x98","\x3c"),
	HX_HCSTRING("set_viewPort","\x03","\x50","\x91","\x51"),
	HX_HCSTRING("nmeCreate","\xe2","\x6a","\xd1","\x16"),
	HX_HCSTRING("nmeDestroy","\x54","\x92","\x87","\xf3"),
	HX_HCSTRING("nmeGetTime","\x1d","\xe1","\x80","\xee"),
	HX_HCSTRING("nmeSeek","\xde","\xa3","\xc1","\xd1"),
	HX_HCSTRING("nmePlay","\x5a","\x4c","\xcb","\xcf"),
	HX_HCSTRING("nmePause","\xd0","\x51","\xe1","\xfa"),
	HX_HCSTRING("nmeTogglePause","\x1c","\xa9","\x46","\x13"),
	HX_HCSTRING("nmeResume","\x93","\x6d","\x46","\xa3"),
	HX_HCSTRING("nmeSetVolume","\xf6","\x8e","\x23","\x5d"),
	HX_HCSTRING("nmeGetBytesTotal","\x69","\x98","\x73","\xbe"),
	HX_HCSTRING("nmeGetDecodedFrames","\xac","\x14","\x2e","\xab"),
	HX_HCSTRING("nmeGetBytesLoaded","\xc0","\x13","\x4a","\xa7"),
	HX_HCSTRING("nmeSetSoundTransform","\xb9","\xcf","\x83","\xc1"),
	HX_HCSTRING("_native_meta_data","\x9b","\xb3","\x1d","\xee"),
	HX_HCSTRING("_native_set_data","\x90","\x70","\x5f","\x41"),
	HX_HCSTRING("_native_play_status","\x94","\xb3","\x91","\x54"),
	HX_HCSTRING("_native_on_seek","\x8f","\x2a","\x7d","\x1b"),
	HX_HCSTRING("_native_on_seek_data","\x1a","\xa1","\x07","\x3f"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StageVideo_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playComplete,"playComplete");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playSwitch,"playSwitch");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playTransitionComplete,"playTransitionComplete");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playStart,"playStart");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playStop,"playStop");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playStreamNotFound,"playStreamNotFound");
	HX_MARK_MEMBER_NAME(StageVideo_obj::playFailed,"playFailed");
	HX_MARK_MEMBER_NAME(StageVideo_obj::seekFailed,"seekFailed");
	HX_MARK_MEMBER_NAME(StageVideo_obj::seekNotify,"seekNotify");
	HX_MARK_MEMBER_NAME(StageVideo_obj::seekInvalidTime,"seekInvalidTime");
	HX_MARK_MEMBER_NAME(StageVideo_obj::failed,"failed");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PAUSE,"PAUSE");
	HX_MARK_MEMBER_NAME(StageVideo_obj::RESUME,"RESUME");
	HX_MARK_MEMBER_NAME(StageVideo_obj::TOGGLE,"TOGGLE");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PAUSE_LEN,"PAUSE_LEN");
	HX_MARK_MEMBER_NAME(StageVideo_obj::ALL_LEN,"ALL_LEN");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_COMPLETE,"PLAY_STATUS_COMPLETE");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_SWITCH,"PLAY_STATUS_SWITCH");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_TRANSITION,"PLAY_STATUS_TRANSITION");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_ERROR,"PLAY_STATUS_ERROR");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_NOT_STARTED,"PLAY_STATUS_NOT_STARTED");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_STARTED,"PLAY_STATUS_STARTED");
	HX_MARK_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_STOPPED,"PLAY_STATUS_STOPPED");
	HX_MARK_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_OK,"SEEK_FINISHED_OK");
	HX_MARK_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_EARLY,"SEEK_FINISHED_EARLY");
	HX_MARK_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_ERROR,"SEEK_FINISHED_ERROR");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_create,"nme_sv_create");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_destroy,"nme_sv_destroy");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_action,"nme_sv_action");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_play,"nme_sv_play");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_seek,"nme_sv_seek");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_get_time,"nme_sv_get_time");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_get_buffered_percent,"nme_sv_get_buffered_percent");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_viewport,"nme_sv_viewport");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_pan,"nme_sv_pan");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_zoom,"nme_sv_zoom");
	HX_MARK_MEMBER_NAME(StageVideo_obj::nme_sv_set_sound_transform,"nme_sv_set_sound_transform");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StageVideo_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playComplete,"playComplete");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playSwitch,"playSwitch");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playTransitionComplete,"playTransitionComplete");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playStart,"playStart");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playStop,"playStop");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playStreamNotFound,"playStreamNotFound");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::playFailed,"playFailed");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::seekFailed,"seekFailed");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::seekNotify,"seekNotify");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::seekInvalidTime,"seekInvalidTime");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::failed,"failed");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PAUSE,"PAUSE");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::RESUME,"RESUME");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::TOGGLE,"TOGGLE");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PAUSE_LEN,"PAUSE_LEN");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::ALL_LEN,"ALL_LEN");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_COMPLETE,"PLAY_STATUS_COMPLETE");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_SWITCH,"PLAY_STATUS_SWITCH");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_TRANSITION,"PLAY_STATUS_TRANSITION");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_ERROR,"PLAY_STATUS_ERROR");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_NOT_STARTED,"PLAY_STATUS_NOT_STARTED");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_STARTED,"PLAY_STATUS_STARTED");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::PLAY_STATUS_STOPPED,"PLAY_STATUS_STOPPED");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_OK,"SEEK_FINISHED_OK");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_EARLY,"SEEK_FINISHED_EARLY");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::SEEK_FINISHED_ERROR,"SEEK_FINISHED_ERROR");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_create,"nme_sv_create");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_destroy,"nme_sv_destroy");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_action,"nme_sv_action");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_play,"nme_sv_play");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_seek,"nme_sv_seek");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_get_time,"nme_sv_get_time");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_get_buffered_percent,"nme_sv_get_buffered_percent");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_viewport,"nme_sv_viewport");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_pan,"nme_sv_pan");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_zoom,"nme_sv_zoom");
	HX_VISIT_MEMBER_NAME(StageVideo_obj::nme_sv_set_sound_transform,"nme_sv_set_sound_transform");
};

#endif

hx::Class StageVideo_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("playComplete","\xcd","\xfe","\x60","\x0b"),
	HX_HCSTRING("playSwitch","\x08","\xdb","\x3c","\x6c"),
	HX_HCSTRING("playTransitionComplete","\x82","\x46","\xe3","\xef"),
	HX_HCSTRING("playStart","\xce","\xa1","\xef","\xa4"),
	HX_HCSTRING("playStop","\x16","\x54","\x6f","\x3c"),
	HX_HCSTRING("playStreamNotFound","\xe3","\xe9","\x85","\x22"),
	HX_HCSTRING("playFailed","\xd1","\x56","\xc2","\x8e"),
	HX_HCSTRING("seekFailed","\x55","\x29","\xa5","\xa9"),
	HX_HCSTRING("seekNotify","\x61","\x3e","\x5f","\xf3"),
	HX_HCSTRING("seekInvalidTime","\x0c","\xb0","\x9d","\x54"),
	HX_HCSTRING("failed","\xbd","\xc5","\xfe","\xe7"),
	HX_HCSTRING("PAUSE","\xd6","\x0e","\x46","\x3b"),
	HX_HCSTRING("RESUME","\xad","\x15","\x07","\xbb"),
	HX_HCSTRING("TOGGLE","\x94","\x6b","\xc6","\x41"),
	HX_HCSTRING("PAUSE_LEN","\x8c","\x5e","\x2a","\x69"),
	HX_HCSTRING("ALL_LEN","\x37","\xd6","\x8b","\xf3"),
	HX_HCSTRING("PLAY_STATUS_COMPLETE","\x1b","\x5f","\x5e","\x56"),
	HX_HCSTRING("PLAY_STATUS_SWITCH","\xd6","\x07","\xbb","\xb9"),
	HX_HCSTRING("PLAY_STATUS_TRANSITION","\x77","\xac","\x63","\xc8"),
	HX_HCSTRING("PLAY_STATUS_ERROR","\x06","\x44","\x71","\x7d"),
	HX_HCSTRING("PLAY_STATUS_NOT_STARTED","\x73","\x51","\x48","\x38"),
	HX_HCSTRING("PLAY_STATUS_STARTED","\xff","\x90","\x5f","\xfa"),
	HX_HCSTRING("PLAY_STATUS_STOPPED","\xcb","\x39","\xa6","\x08"),
	HX_HCSTRING("SEEK_FINISHED_OK","\x82","\xba","\x9b","\xde"),
	HX_HCSTRING("SEEK_FINISHED_EARLY","\xdd","\xce","\x82","\x73"),
	HX_HCSTRING("SEEK_FINISHED_ERROR","\x02","\x72","\xbf","\x7e"),
	HX_HCSTRING("nme_sv_create","\xdf","\xa4","\xd3","\x34"),
	HX_HCSTRING("nme_sv_destroy","\xb7","\x15","\x78","\x17"),
	HX_HCSTRING("nme_sv_action","\x99","\x79","\x0a","\xcf"),
	HX_HCSTRING("nme_sv_play","\x17","\x1d","\xea","\x8b"),
	HX_HCSTRING("nme_sv_seek","\x9b","\x74","\xe0","\x8d"),
	HX_HCSTRING("nme_sv_get_time","\x39","\x44","\x71","\x6d"),
	HX_HCSTRING("nme_sv_get_buffered_percent","\xd1","\x5a","\x62","\x33"),
	HX_HCSTRING("nme_sv_viewport","\x09","\x09","\x5f","\x3d"),
	HX_HCSTRING("nme_sv_pan","\x9a","\xd7","\x9a","\x9b"),
	HX_HCSTRING("nme_sv_zoom","\x36","\x92","\x88","\x92"),
	HX_HCSTRING("nme_sv_set_sound_transform","\x1c","\x41","\x74","\x40"),
	::String(null()) };

void StageVideo_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.media.StageVideo","\x6f","\x26","\xfa","\xbf");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &StageVideo_obj::__GetStatic;
	__mClass->mSetStaticField = &StageVideo_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< StageVideo_obj >;
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

void StageVideo_obj::__boot()
{
	playComplete= HX_HCSTRING("NetStream.Play.Complete","\xe2","\xae","\x0c","\x40");
	playSwitch= HX_HCSTRING("NetStream.Play.Switch","\xdd","\xeb","\xa2","\xae");
	playTransitionComplete= HX_HCSTRING("NetStream.Play.TransitionComplete","\xd7","\xc2","\x49","\x44");
	playStart= HX_HCSTRING("NetStream.Play.Start","\x99","\x42","\x56","\xdc");
	playStop= HX_HCSTRING("NetStream.Play.Stop","\xab","\x15","\x72","\xa7");
	playStreamNotFound= HX_HCSTRING("NetStream.Play.StreamNotFound","\xb8","\x57","\x58","\xd4");
	playFailed= HX_HCSTRING("NetStream.Play.Failed","\xa6","\x67","\x28","\xd1");
	seekFailed= HX_HCSTRING("NetStream.Seek.Failed","\xa2","\xc8","\xbd","\x3c");
	seekNotify= HX_HCSTRING("NetStream.Seek.Notify","\xae","\xdd","\x77","\x86");
	seekInvalidTime= HX_HCSTRING("NetStream.Seek.InvalidTime","\x9f","\x79","\x5f","\x12");
	failed= HX_HCSTRING("NetStream.Failed","\x8e","\xb1","\x71","\x34");
	PAUSE= (int)0;
	RESUME= (int)1;
	TOGGLE= (int)2;
	PAUSE_LEN= (int)-3;
	ALL_LEN= (int)-1;
	PLAY_STATUS_COMPLETE= (int)0;
	PLAY_STATUS_SWITCH= (int)1;
	PLAY_STATUS_TRANSITION= (int)2;
	PLAY_STATUS_ERROR= (int)3;
	PLAY_STATUS_NOT_STARTED= (int)4;
	PLAY_STATUS_STARTED= (int)5;
	PLAY_STATUS_STOPPED= (int)6;
	SEEK_FINISHED_OK= (int)0;
	SEEK_FINISHED_EARLY= (int)1;
	SEEK_FINISHED_ERROR= (int)2;
	nme_sv_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_create","\xdf","\xa4","\xd3","\x34"),(int)2);
	nme_sv_destroy= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_destroy","\xb7","\x15","\x78","\x17"),(int)1);
	nme_sv_action= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_action","\x99","\x79","\x0a","\xcf"),(int)2);
	nme_sv_play= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_play","\x17","\x1d","\xea","\x8b"),(int)4);
	nme_sv_seek= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_seek","\x9b","\x74","\xe0","\x8d"),(int)2);
	nme_sv_get_time= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_get_time","\x39","\x44","\x71","\x6d"),(int)1);
	nme_sv_get_buffered_percent= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_get_buffered_percent","\xd1","\x5a","\x62","\x33"),(int)1);
	nme_sv_viewport= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_viewport","\x09","\x09","\x5f","\x3d"),(int)5);
	nme_sv_pan= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_pan","\x9a","\xd7","\x9a","\x9b"),(int)3);
	nme_sv_zoom= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_zoom","\x36","\x92","\x88","\x92"),(int)3);
	nme_sv_set_sound_transform= ::nme::Loader_obj::load(HX_HCSTRING("nme_sv_set_sound_transform","\x1c","\x41","\x74","\x40"),(int)3);
}

} // end namespace nme
} // end namespace media
