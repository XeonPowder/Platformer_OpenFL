#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__List_ListIterator
#include <_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_events_ErrorEvent
#include <nme/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_HTTPStatusEvent
#include <nme/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IOErrorEvent
#include <nme/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_ProgressEvent
#include <nme/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
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
#ifndef INCLUDED_nme_net_URLRequestHeader
#include <nme/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_nme_net_URLVariables
#include <nme/net/URLVariables.h>
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
namespace net{

Void URLLoader_obj::__construct(::nme::net::URLRequest request)
{
HX_STACK_FRAME("nme.net.URLLoader","new",0xaa8b73bb,"nme.net.URLLoader.new","nme/net/URLLoader.hx",44,0xa395eb97)
HX_STACK_THIS(this)
HX_STACK_ARG(request,"request")
{
	HX_STACK_LINE(45)
	super::__construct(null());
	HX_STACK_LINE(47)
	this->nmeHandle = (int)0;
	HX_STACK_LINE(48)
	this->bytesLoaded = (int)0;
	HX_STACK_LINE(49)
	this->bytesTotal = (int)-1;
	HX_STACK_LINE(50)
	this->state = (int)0;
	HX_STACK_LINE(51)
	this->dataFormat = ::nme::net::URLLoaderDataFormat_obj::TEXT;
	HX_STACK_LINE(53)
	bool tmp = (request != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(53)
	if ((tmp)){
		HX_STACK_LINE(54)
		::nme::net::URLRequest tmp1 = request;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(54)
		this->load(tmp1);
	}
}
;
	return null();
}

//URLLoader_obj::~URLLoader_obj() { }

Dynamic URLLoader_obj::__CreateEmpty() { return  new URLLoader_obj; }
hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new(::nme::net::URLRequest request)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(request);
	return _result_;}

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLLoader_obj > _result_ = new URLLoader_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void URLLoader_obj::close( ){
{
		HX_STACK_FRAME("nme.net.URLLoader","close",0xaa4e87d3,"nme.net.URLLoader.close","nme/net/URLLoader.hx",58,0xa395eb97)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

Array< ::String > URLLoader_obj::getCookies( ){
	HX_STACK_FRAME("nme.net.URLLoader","getCookies",0x84910b5e,"nme.net.URLLoader.getCookies","nme/net/URLLoader.hx",62,0xa395eb97)
	HX_STACK_THIS(this)
	HX_STACK_LINE(63)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(63)
	return ::nme::net::URLLoader_obj::nme_curl_get_cookies(tmp);
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

Void URLLoader_obj::load( ::nme::net::URLRequest request){
{
		HX_STACK_FRAME("nme.net.URLLoader","load",0x8e2ee66b,"nme.net.URLLoader.load","nme/net/URLLoader.hx",77,0xa395eb97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(request,"request")
		HX_STACK_LINE(78)
		this->state = (int)1;
		HX_STACK_LINE(79)
		::String tmp = request->url.substr((int)0,(int)7);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(79)
		::String pref = tmp;		HX_STACK_VAR(pref,"pref");
		HX_STACK_LINE(81)
		bool tmp1 = (pref != HX_HCSTRING("http://","\x52","\x75","\xcd","\x5a"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(81)
		if ((tmp1)){
			HX_STACK_LINE(81)
			tmp2 = (pref != HX_HCSTRING("https:/","\x60","\xbf","\xf8","\x5a"));
		}
		else{
			HX_STACK_LINE(81)
			tmp2 = false;
		}
		HX_STACK_LINE(81)
		if ((tmp2)){
			HX_STACK_LINE(83)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(85)
				::String tmp3 = request->url;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(85)
				::nme::utils::ByteArray tmp4 = ::nme::utils::ByteArray_obj::readFile(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(85)
				::nme::utils::ByteArray bytes = tmp4;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(87)
				bool tmp5 = (bytes == null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(87)
				if ((tmp5)){
					HX_STACK_LINE(88)
					::String tmp6 = (HX_HCSTRING("Could not open file \"","\x48","\x89","\x1a","\x4a") + request->url);		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(88)
					::String tmp7 = (tmp6 + HX_HCSTRING("\"","\x22","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(88)
					HX_STACK_DO_THROW(tmp7);
				}
				HX_STACK_LINE(90)
				{
					HX_STACK_LINE(90)
					::nme::net::URLLoaderDataFormat tmp6 = this->dataFormat;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(90)
					::nme::net::URLLoaderDataFormat _g = tmp6;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(90)
					switch( (int)(_g->__Index())){
						case (int)1: {
							HX_STACK_LINE(93)
							::String tmp7 = bytes->asString();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(93)
							this->data = tmp7;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(95)
							::String tmp7 = bytes->asString();		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(95)
							::nme::net::URLVariables tmp8 = ::nme::net::URLVariables_obj::__new(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(95)
							this->data = tmp8;
						}
						;break;
						default: {
							HX_STACK_LINE(97)
							this->data = bytes;
						}
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(102)
						Dynamic tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
						HX_STACK_LINE(102)
						this->onError(tmp3);
						HX_STACK_LINE(103)
						return null();
					}
				}
			}
			HX_STACK_LINE(106)
			this->nmeDataComplete();
		}
		else{
			HX_STACK_LINE(110)
			request->nmePrepare();
			HX_STACK_LINE(111)
			::nme::net::URLRequest tmp3 = request;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(111)
			Dynamic tmp4 = ::nme::net::URLLoader_obj::nme_curl_create(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(111)
			this->nmeHandle = tmp4;
			HX_STACK_LINE(113)
			Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			if ((tmp6)){
				HX_STACK_LINE(114)
				this->onError(HX_HCSTRING("Could not open URL","\x45","\x5d","\x35","\xab"));
			}
			else{
				HX_STACK_LINE(116)
				::List tmp7 = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(116)
				tmp7->push(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

Void URLLoader_obj::nmeDataComplete( ){
{
		HX_STACK_FRAME("nme.net.URLLoader","nmeDataComplete",0x1cba0144,"nme.net.URLLoader.nmeDataComplete","nme/net/URLLoader.hx",120,0xa395eb97)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		::List tmp = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(121)
		tmp->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(123)
		Dynamic tmp1 = this->nmeOnComplete_dyn();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(123)
		if ((tmp2)){
			HX_STACK_LINE(125)
			Dynamic tmp3 = this->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(125)
			bool tmp4 = this->nmeOnComplete(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			if ((tmp4)){
				HX_STACK_LINE(126)
				::String tmp5 = ::nme::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(126)
				::nme::events::Event tmp6 = ::nme::events::Event_obj::__new(tmp5,null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(126)
				this->dispatchEvent(tmp6);
			}
			else{
				HX_STACK_LINE(128)
				this->DispatchIOErrorEvent();
			}
		}
		else{
			HX_STACK_LINE(132)
			::String tmp3 = ::nme::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			::nme::events::Event tmp4 = ::nme::events::Event_obj::__new(tmp3,null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			this->dispatchEvent(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeDataComplete,(void))

Void URLLoader_obj::onError( ::String msg){
{
		HX_STACK_FRAME("nme.net.URLLoader","onError",0x51235704,"nme.net.URLLoader.onError","nme/net/URLLoader.hx",156,0xa395eb97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(msg,"msg")
		HX_STACK_LINE(157)
		::List tmp = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		tmp->remove(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(158)
		::String tmp1 = ::nme::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(158)
		::String tmp2 = msg;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		::nme::events::IOErrorEvent tmp3 = ::nme::events::IOErrorEvent_obj::__new(tmp1,true,false,tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(158)
		this->dispatchEvent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

Void URLLoader_obj::dispatchHTTPStatus( int code){
{
		HX_STACK_FRAME("nme.net.URLLoader","dispatchHTTPStatus",0xe1fcab19,"nme.net.URLLoader.dispatchHTTPStatus","nme/net/URLLoader.hx",161,0xa395eb97)
		HX_STACK_THIS(this)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(163)
		::String tmp = ::nme::events::HTTPStatusEvent_obj::HTTP_STATUS;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(163)
		int tmp1 = code;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(163)
		::nme::events::HTTPStatusEvent tmp2 = ::nme::events::HTTPStatusEvent_obj::__new(tmp,false,false,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		::nme::events::HTTPStatusEvent evt = tmp2;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(164)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(164)
		Array< ::String > headers = ::nme::net::URLLoader_obj::nme_curl_get_headers(tmp3);		HX_STACK_VAR(headers,"headers");
		HX_STACK_LINE(166)
		{
			HX_STACK_LINE(166)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(166)
			while((true)){
				HX_STACK_LINE(166)
				bool tmp4 = (_g < headers->length);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(166)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(166)
				if ((tmp5)){
					HX_STACK_LINE(166)
					break;
				}
				HX_STACK_LINE(166)
				::String tmp6 = headers->__get(_g);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(166)
				::String h = tmp6;		HX_STACK_VAR(h,"h");
				HX_STACK_LINE(166)
				++(_g);
				HX_STACK_LINE(168)
				int tmp7 = h.indexOf(HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"),null());		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(168)
				int idx = tmp7;		HX_STACK_VAR(idx,"idx");
				HX_STACK_LINE(169)
				bool tmp8 = (idx > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(169)
				if ((tmp8)){
					HX_STACK_LINE(170)
					int tmp9 = idx;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(170)
					::String tmp10 = h.substr((int)0,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(170)
					int tmp11 = (idx + (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(170)
					int tmp12 = (h.length - idx);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(170)
					int tmp13 = (tmp12 - (int)4);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(170)
					::String tmp14 = h.substr(tmp11,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(170)
					::nme::net::URLRequestHeader tmp15 = ::nme::net::URLRequestHeader_obj::__new(tmp10,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(170)
					evt->responseHeaders->push(tmp15);
				}
			}
		}
		HX_STACK_LINE(173)
		::nme::events::HTTPStatusEvent tmp4 = evt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(173)
		this->dispatchEvent(tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

Void URLLoader_obj::update( ){
{
		HX_STACK_FRAME("nme.net.URLLoader","update",0xd31c2d8e,"nme.net.URLLoader.update","nme/net/URLLoader.hx",176,0xa395eb97)
		HX_STACK_THIS(this)
		HX_STACK_LINE(177)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(179)
			int tmp2 = this->bytesLoaded;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(179)
			int old_loaded = tmp2;		HX_STACK_VAR(old_loaded,"old_loaded");
			HX_STACK_LINE(180)
			int tmp3 = this->bytesTotal;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(180)
			int old_total = tmp3;		HX_STACK_VAR(old_total,"old_total");
			HX_STACK_LINE(181)
			Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(181)
			::nme::net::URLLoader_obj::nme_curl_update_loader(tmp4,hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(183)
			bool tmp5 = (old_total < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(183)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(183)
			if ((tmp5)){
				HX_STACK_LINE(183)
				int tmp7 = this->bytesTotal;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(183)
				int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(183)
				tmp6 = (tmp8 > (int)0);
			}
			else{
				HX_STACK_LINE(183)
				tmp6 = false;
			}
			HX_STACK_LINE(183)
			if ((tmp6)){
				HX_STACK_LINE(185)
				::String tmp7 = ::nme::events::Event_obj::OPEN;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(185)
				::nme::events::Event tmp8 = ::nme::events::Event_obj::__new(tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(185)
				this->dispatchEvent(tmp8);
			}
			HX_STACK_LINE(188)
			int tmp7 = this->bytesTotal;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(188)
			bool tmp8 = (tmp7 > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(188)
			bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(188)
			if ((tmp8)){
				HX_STACK_LINE(188)
				int tmp10 = this->bytesLoaded;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(188)
				int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(188)
				int tmp12 = old_loaded;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				tmp9 = (tmp11 != tmp12);
			}
			else{
				HX_STACK_LINE(188)
				tmp9 = false;
			}
			HX_STACK_LINE(188)
			if ((tmp9)){
				HX_STACK_LINE(190)
				int tmp10 = this->bytesLoaded;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(190)
				int tmp11 = this->bytesTotal;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(190)
				::nme::events::ProgressEvent tmp12 = ::nme::events::ProgressEvent_obj::__new(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),false,false,tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(190)
				this->dispatchEvent(tmp12);
			}
			HX_STACK_LINE(193)
			Dynamic tmp10 = this->nmeHandle;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(193)
			int tmp11 = ::nme::net::URLLoader_obj::nme_curl_get_code(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(193)
			int code = tmp11;		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(195)
			int tmp12 = this->state;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(195)
			bool tmp13 = (tmp12 == (int)3);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(195)
			if ((tmp13)){
				HX_STACK_LINE(197)
				int tmp14 = code;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(197)
				this->dispatchHTTPStatus(tmp14);
				HX_STACK_LINE(199)
				bool tmp15 = (code < (int)400);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(199)
				if ((tmp15)){
					HX_STACK_LINE(201)
					Dynamic tmp16 = this->nmeHandle;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(201)
					::nme::utils::ByteArray tmp17 = ::nme::net::URLLoader_obj::nme_curl_get_data(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(201)
					::nme::utils::ByteArray bytes = tmp17;		HX_STACK_VAR(bytes,"bytes");
					HX_STACK_LINE(203)
					{
						HX_STACK_LINE(203)
						::nme::net::URLLoaderDataFormat tmp18 = this->dataFormat;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(203)
						::nme::net::URLLoaderDataFormat _g = tmp18;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(203)
						switch( (int)(_g->__Index())){
							case (int)1: case (int)2: {
								HX_STACK_LINE(206)
								bool tmp19 = (bytes == null());		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(206)
								Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(206)
								if ((tmp19)){
									HX_STACK_LINE(206)
									tmp20 = HX_HCSTRING("","\x00","\x00","\x00","\x00");
								}
								else{
									HX_STACK_LINE(206)
									tmp20 = bytes->asString();
								}
								HX_STACK_LINE(206)
								this->data = tmp20;
							}
							;break;
							default: {
								HX_STACK_LINE(208)
								this->data = bytes;
							}
						}
					}
					HX_STACK_LINE(211)
					this->nmeDataComplete();
				}
				else{
					HX_STACK_LINE(216)
					::String tmp16 = ::nme::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(216)
					int tmp17 = code;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(216)
					::String tmp18 = ::Std_obj::string(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(216)
					::String tmp19 = (HX_HCSTRING("HTTP status code ","\x7d","\xf2","\x80","\xe8") + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(216)
					int tmp20 = code;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(216)
					::nme::events::IOErrorEvent tmp21 = ::nme::events::IOErrorEvent_obj::__new(tmp16,true,false,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(216)
					::nme::events::IOErrorEvent evt = tmp21;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(217)
					this->nmeHandle = null();
					HX_STACK_LINE(218)
					::nme::events::IOErrorEvent tmp22 = evt;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(218)
					this->dispatchEvent(tmp22);
				}
			}
			else{
				HX_STACK_LINE(221)
				int tmp14 = this->state;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(221)
				bool tmp15 = (tmp14 == (int)4);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(221)
				if ((tmp15)){
					HX_STACK_LINE(223)
					int tmp16 = code;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(223)
					this->dispatchHTTPStatus(tmp16);
					HX_STACK_LINE(225)
					::String tmp17 = ::nme::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(225)
					Dynamic tmp18 = this->nmeHandle;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(225)
					::String tmp19 = ::nme::net::URLLoader_obj::nme_curl_get_error_message(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(225)
					int tmp20 = code;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(225)
					::nme::events::IOErrorEvent tmp21 = ::nme::events::IOErrorEvent_obj::__new(tmp17,true,false,tmp19,tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(225)
					::nme::events::IOErrorEvent evt = tmp21;		HX_STACK_VAR(evt,"evt");
					HX_STACK_LINE(226)
					this->nmeHandle = null();
					HX_STACK_LINE(227)
					::nme::events::IOErrorEvent tmp22 = evt;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(227)
					this->dispatchEvent(tmp22);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

::List URLLoader_obj::activeLoaders;

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

bool URLLoader_obj::hasActive( ){
	HX_STACK_FRAME("nme.net.URLLoader","hasActive",0xf7640e5b,"nme.net.URLLoader.hasActive","nme/net/URLLoader.hx",67,0xa395eb97)
	HX_STACK_LINE(68)
	::List tmp = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(68)
	bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(68)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

Void URLLoader_obj::initialize( ::String inCACertFilePath){
{
		HX_STACK_FRAME("nme.net.URLLoader","initialize",0x7afc7f55,"nme.net.URLLoader.initialize","nme/net/URLLoader.hx",72,0xa395eb97)
		HX_STACK_ARG(inCACertFilePath,"inCACertFilePath")
		HX_STACK_LINE(73)
		::String tmp = inCACertFilePath;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(73)
		::nme::net::URLLoader_obj::nme_curl_initialize(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::nmeLoadPending( ){
	HX_STACK_FRAME("nme.net.URLLoader","nmeLoadPending",0x8fb3a5b0,"nme.net.URLLoader.nmeLoadPending","nme/net/URLLoader.hx",136,0xa395eb97)
	HX_STACK_LINE(137)
	::List tmp = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(137)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmeLoadPending,return )

Void URLLoader_obj::nmePollData( ){
{
		HX_STACK_FRAME("nme.net.URLLoader","nmePollData",0xd608cbca,"nme.net.URLLoader.nmePollData","nme/net/URLLoader.hx",140,0xa395eb97)
		HX_STACK_LINE(141)
		::List tmp = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		bool tmp1 = tmp->isEmpty();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		if ((tmp2)){
			HX_STACK_LINE(143)
			::nme::net::URLLoader_obj::nme_curl_process_loaders();
			HX_STACK_LINE(144)
			::List tmp3 = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(144)
			::List oldLoaders = tmp3;		HX_STACK_VAR(oldLoaders,"oldLoaders");
			HX_STACK_LINE(145)
			::List tmp4 = ::List_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(145)
			::nme::net::URLLoader_obj::activeLoaders = tmp4;
			HX_STACK_LINE(147)
			{
				HX_STACK_LINE(147)
				::_List::ListIterator tmp5 = ::_List::ListIterator_obj::__new(oldLoaders->h);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				::_List::ListIterator _g = tmp5;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				while((true)){
					HX_STACK_LINE(147)
					bool tmp6 = (_g->head != null());		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(147)
					bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(147)
					if ((tmp7)){
						HX_STACK_LINE(147)
						break;
					}
					HX_STACK_LINE(147)
					Dynamic tmp8;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(147)
					{
						HX_STACK_LINE(147)
						Dynamic tmp9 = _g->head->__GetItem((int)0);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(147)
						_g->val = tmp9;
						HX_STACK_LINE(147)
						Dynamic tmp10 = _g->head->__GetItem((int)1);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(147)
						_g->head = tmp10;
						HX_STACK_LINE(147)
						tmp8 = _g->val;
					}
					HX_STACK_LINE(147)
					::nme::net::URLLoader loader = ((::nme::net::URLLoader)(tmp8));		HX_STACK_VAR(loader,"loader");
					HX_STACK_LINE(149)
					loader->update();
					HX_STACK_LINE(150)
					bool tmp9 = (loader->state == (int)2);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(150)
					if ((tmp9)){
						HX_STACK_LINE(151)
						::List tmp10 = ::nme::net::URLLoader_obj::activeLoaders;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(151)
						::nme::net::URLLoader tmp11 = loader;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(151)
						tmp10->push(tmp11);
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,nmePollData,(void))

Dynamic URLLoader_obj::nme_curl_create;

Dynamic URLLoader_obj::nme_curl_process_loaders;

Dynamic URLLoader_obj::nme_curl_update_loader;

Dynamic URLLoader_obj::nme_curl_get_code;

Dynamic URLLoader_obj::nme_curl_get_error_message;

Dynamic URLLoader_obj::nme_curl_get_data;

Dynamic URLLoader_obj::nme_curl_get_cookies;

Dynamic URLLoader_obj::nme_curl_get_headers;

Dynamic URLLoader_obj::nme_curl_initialize;


URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(nmeOnComplete,"nmeOnComplete");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(nmeOnComplete,"nmeOnComplete");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return state; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return onError_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return bytesTotal; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return dataFormat; }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return getCookies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return bytesLoaded; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { return nmeOnComplete; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nmeDataComplete") ) { return nmeDataComplete_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return dispatchHTTPStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool URLLoader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { outValue = hasActive_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmePollData") ) { outValue = nmePollData_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { outValue = activeLoaders; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeLoadPending") ) { outValue = nmeLoadPending_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { outValue = nme_curl_create; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { outValue = nme_curl_get_code; return true;  }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { outValue = nme_curl_get_data; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { outValue = nme_curl_initialize; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { outValue = nme_curl_get_cookies; return true;  }
		if (HX_FIELD_EQ(inName,"nme_curl_get_headers") ) { outValue = nme_curl_get_headers; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { outValue = nme_curl_update_loader; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { outValue = nme_curl_process_loaders; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { outValue = nme_curl_get_error_message; return true;  }
	}
	return false;
}

Dynamic URLLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast< ::nme::net::URLLoaderDataFormat >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nmeOnComplete") ) { nmeOnComplete=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"activeLoaders") ) { activeLoaders=ioValue.Cast< ::List >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_curl_create") ) { nme_curl_create=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_curl_get_code") ) { nme_curl_get_code=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_data") ) { nme_curl_get_data=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_curl_initialize") ) { nme_curl_initialize=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_curl_get_cookies") ) { nme_curl_get_cookies=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_curl_get_headers") ) { nme_curl_get_headers=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_curl_update_loader") ) { nme_curl_update_loader=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_curl_process_loaders") ) { nme_curl_process_loaders=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_curl_get_error_message") ) { nme_curl_get_error_message=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::nme::net::URLLoaderDataFormat*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,nmeOnComplete),HX_HCSTRING("nmeOnComplete","\xde","\xc3","\x27","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(void *) &URLLoader_obj::activeLoaders,HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0")},
	{hx::fsInt,(void *) &URLLoader_obj::urlInvalid,HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb")},
	{hx::fsInt,(void *) &URLLoader_obj::urlInit,HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5")},
	{hx::fsInt,(void *) &URLLoader_obj::urlLoading,HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9")},
	{hx::fsInt,(void *) &URLLoader_obj::urlComplete,HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde")},
	{hx::fsInt,(void *) &URLLoader_obj::urlError,HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_create,HX_HCSTRING("nme_curl_create","\x76","\xf9","\x41","\x86")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_process_loaders,HX_HCSTRING("nme_curl_process_loaders","\x36","\x9a","\x79","\x04")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_update_loader,HX_HCSTRING("nme_curl_update_loader","\x8f","\xa7","\x31","\x4c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_get_code,HX_HCSTRING("nme_curl_get_code","\xb0","\x11","\x57","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_get_error_message,HX_HCSTRING("nme_curl_get_error_message","\x2d","\x5a","\x0d","\x7a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_get_data,HX_HCSTRING("nme_curl_get_data","\xad","\xb6","\xf5","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_get_cookies,HX_HCSTRING("nme_curl_get_cookies","\xac","\xca","\xae","\xcf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_get_headers,HX_HCSTRING("nme_curl_get_headers","\xa3","\xe5","\xc8","\x8b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLLoader_obj::nme_curl_initialize,HX_HCSTRING("nme_curl_initialize","\xca","\x88","\x81","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("nmeOnComplete","\xde","\xc3","\x27","\x23"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("getCookies","\x59","\xbd","\x4f","\xf6"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("nmeDataComplete","\x69","\x41","\xad","\x20"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("dispatchHTTPStatus","\x14","\x50","\x06","\xfe"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_create,"nme_curl_create");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_process_loaders,"nme_curl_process_loaders");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_update_loader,"nme_curl_update_loader");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_code,"nme_curl_get_code");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_error_message,"nme_curl_get_error_message");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_data,"nme_curl_get_data");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_cookies,"nme_curl_get_cookies");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_get_headers,"nme_curl_get_headers");
	HX_MARK_MEMBER_NAME(URLLoader_obj::nme_curl_initialize,"nme_curl_initialize");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::activeLoaders,"activeLoaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_create,"nme_curl_create");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_process_loaders,"nme_curl_process_loaders");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_update_loader,"nme_curl_update_loader");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_code,"nme_curl_get_code");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_error_message,"nme_curl_get_error_message");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_data,"nme_curl_get_data");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_cookies,"nme_curl_get_cookies");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_get_headers,"nme_curl_get_headers");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::nme_curl_initialize,"nme_curl_initialize");
};

#endif

hx::Class URLLoader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("activeLoaders","\xda","\x13","\xb9","\xc0"),
	HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb"),
	HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5"),
	HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9"),
	HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde"),
	HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd"),
	HX_HCSTRING("hasActive","\xc0","\xf4","\x2e","\x57"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("nmeLoadPending","\x2b","\x71","\xb2","\x2a"),
	HX_HCSTRING("nmePollData","\x6f","\xd5","\x25","\xeb"),
	HX_HCSTRING("nme_curl_create","\x76","\xf9","\x41","\x86"),
	HX_HCSTRING("nme_curl_process_loaders","\x36","\x9a","\x79","\x04"),
	HX_HCSTRING("nme_curl_update_loader","\x8f","\xa7","\x31","\x4c"),
	HX_HCSTRING("nme_curl_get_code","\xb0","\x11","\x57","\xab"),
	HX_HCSTRING("nme_curl_get_error_message","\x2d","\x5a","\x0d","\x7a"),
	HX_HCSTRING("nme_curl_get_data","\xad","\xb6","\xf5","\xab"),
	HX_HCSTRING("nme_curl_get_cookies","\xac","\xca","\xae","\xcf"),
	HX_HCSTRING("nme_curl_get_headers","\xa3","\xe5","\xc8","\x8b"),
	HX_HCSTRING("nme_curl_initialize","\xca","\x88","\x81","\xb7"),
	::String(null()) };

void URLLoader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.net.URLLoader","\x49","\x7a","\xca","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoader_obj::__GetStatic;
	__mClass->mSetStaticField = &URLLoader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
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

void URLLoader_obj::__boot()
{
	activeLoaders= ::List_obj::__new();
	urlInvalid= (int)0;
	urlInit= (int)1;
	urlLoading= (int)2;
	urlComplete= (int)3;
	urlError= (int)4;
	nme_curl_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_create","\x76","\xf9","\x41","\x86"),(int)1);
	nme_curl_process_loaders= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_process_loaders","\x36","\x9a","\x79","\x04"),(int)0);
	nme_curl_update_loader= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_update_loader","\x8f","\xa7","\x31","\x4c"),(int)2);
	nme_curl_get_code= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_get_code","\xb0","\x11","\x57","\xab"),(int)1);
	nme_curl_get_error_message= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_get_error_message","\x2d","\x5a","\x0d","\x7a"),(int)1);
	nme_curl_get_data= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_get_data","\xad","\xb6","\xf5","\xab"),(int)1);
	nme_curl_get_cookies= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_get_cookies","\xac","\xca","\xae","\xcf"),(int)1);
	nme_curl_get_headers= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_get_headers","\xa3","\xe5","\xc8","\x8b"),(int)1);
	nme_curl_initialize= ::nme::Loader_obj::load(HX_HCSTRING("nme_curl_initialize","\xca","\x88","\x81","\xb7"),(int)1);
}

} // end namespace nme
} // end namespace net
