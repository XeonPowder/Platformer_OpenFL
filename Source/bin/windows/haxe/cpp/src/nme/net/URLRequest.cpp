#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
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

Void URLRequest_obj::__construct(::String inURL)
{
HX_STACK_FRAME("nme.net.URLRequest","new",0x9758ddcb,"nme.net.URLRequest.new","nme/net/URLRequest.hx",32,0xdb7c6643)
HX_STACK_THIS(this)
HX_STACK_ARG(inURL,"inURL")
{
	HX_STACK_LINE(33)
	bool tmp = (inURL != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	if ((tmp)){
		HX_STACK_LINE(34)
		this->url = inURL;
	}
	HX_STACK_LINE(36)
	this->requestHeaders = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(37)
	this->method = HX_HCSTRING("GET","\x76","\x1c","\x36","\x00");
	HX_STACK_LINE(39)
	this->verbose = false;
	HX_STACK_LINE(40)
	this->cookieString = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(41)
	this->authType = (int)0;
	HX_STACK_LINE(42)
	this->contentType = HX_HCSTRING("application/x-www-form-urlencoded","\x9e","\x61","\x91","\xfa");
	HX_STACK_LINE(43)
	this->credentials = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(44)
	this->followRedirects = true;
}
;
	return null();
}

//URLRequest_obj::~URLRequest_obj() { }

Dynamic URLRequest_obj::__CreateEmpty() { return  new URLRequest_obj; }
hx::ObjectPtr< URLRequest_obj > URLRequest_obj::__new(::String inURL)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inURL);
	return _result_;}

Dynamic URLRequest_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< URLRequest_obj > _result_ = new URLRequest_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::String URLRequest_obj::toString( ){
	HX_STACK_FRAME("nme.net.URLRequest","toString",0x7b2a3f61,"nme.net.URLRequest.toString","nme/net/URLRequest.hx",47,0xdb7c6643)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	::String tmp = this->url;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	::String tmp1 = (HX_HCSTRING("URLRequest(","\x68","\x70","\xcf","\x8a") + tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	::String tmp2 = (tmp1 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,toString,return )

Void URLRequest_obj::launchBrowser( ){
{
		HX_STACK_FRAME("nme.net.URLRequest","launchBrowser",0xc99e3ee0,"nme.net.URLRequest.launchBrowser","nme/net/URLRequest.hx",50,0xdb7c6643)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::String tmp = this->url;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		::nme::net::URLRequest_obj::nme_get_url(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,launchBrowser,(void))

Void URLRequest_obj::basicAuth( ::String inUser,::String inPasswd){
{
		HX_STACK_FRAME("nme.net.URLRequest","basicAuth",0x636594e1,"nme.net.URLRequest.basicAuth","nme/net/URLRequest.hx",56,0xdb7c6643)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inUser,"inUser")
		HX_STACK_ARG(inPasswd,"inPasswd")
		HX_STACK_LINE(57)
		this->authType = (int)1;
		HX_STACK_LINE(58)
		::String tmp = (inUser + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(58)
		::String tmp1 = inPasswd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(58)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		this->credentials = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,basicAuth,(void))

Void URLRequest_obj::digestAuth( ::String inUser,::String inPasswd){
{
		HX_STACK_FRAME("nme.net.URLRequest","digestAuth",0xf9b0c3c1,"nme.net.URLRequest.digestAuth","nme/net/URLRequest.hx",62,0xdb7c6643)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inUser,"inUser")
		HX_STACK_ARG(inPasswd,"inPasswd")
		HX_STACK_LINE(63)
		this->authType = (int)2;
		HX_STACK_LINE(64)
		::String tmp = (inUser + HX_HCSTRING(":","\x3a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(64)
		::String tmp1 = inPasswd;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(64)
		::String tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		this->credentials = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(URLRequest_obj,digestAuth,(void))

Void URLRequest_obj::nmePrepare( ){
{
		HX_STACK_FRAME("nme.net.URLRequest","nmePrepare",0x025b3cd6,"nme.net.URLRequest.nmePrepare","nme/net/URLRequest.hx",68,0xdb7c6643)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		Dynamic tmp = this->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(69)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		if ((tmp1)){
			HX_STACK_LINE(71)
			::nme::utils::ByteArray tmp2 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(71)
			this->set_nmeBytes(tmp2);
		}
		else{
			HX_STACK_LINE(73)
			Dynamic tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(73)
			bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::nme::utils::ByteArray >());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(73)
			if ((tmp3)){
				HX_STACK_LINE(75)
				Dynamic tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				this->set_nmeBytes(tmp4);
			}
			else{
				HX_STACK_LINE(77)
				Dynamic tmp4 = this->data;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(77)
				bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::nme::net::URLVariables >());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(77)
				if ((tmp5)){
					HX_STACK_LINE(79)
					Dynamic tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(79)
					::nme::net::URLVariables vars = tmp6;		HX_STACK_VAR(vars,"vars");
					HX_STACK_LINE(80)
					::String tmp7 = vars->toString();		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(80)
					::String str = tmp7;		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(81)
					::nme::utils::ByteArray tmp8 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(81)
					this->set_nmeBytes(tmp8);
					HX_STACK_LINE(82)
					::nme::utils::ByteArray tmp9 = this->get_nmeBytes();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(82)
					::String tmp10 = str;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(82)
					tmp9->writeUTFBytes(tmp10);
				}
				else{
					HX_STACK_LINE(84)
					Dynamic tmp6 = this->data;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(84)
					bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::String >());		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(84)
					if ((tmp7)){
						HX_STACK_LINE(86)
						Dynamic tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(86)
						::String str = tmp8;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(87)
						::nme::utils::ByteArray tmp9 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(87)
						this->set_nmeBytes(tmp9);
						HX_STACK_LINE(88)
						::nme::utils::ByteArray tmp10 = this->get_nmeBytes();		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(88)
						::String tmp11 = str;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(88)
						tmp10->writeUTFBytes(tmp11);
					}
					else{
						HX_STACK_LINE(90)
						Dynamic tmp8 = this->data;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(90)
						bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::Dynamic >());		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(90)
						if ((tmp9)){
							HX_STACK_LINE(92)
							::nme::net::URLVariables tmp10 = ::nme::net::URLVariables_obj::__new(null());		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(92)
							::nme::net::URLVariables vars = tmp10;		HX_STACK_VAR(vars,"vars");
							HX_STACK_LINE(94)
							{
								HX_STACK_LINE(94)
								int _g = (int)0;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(94)
								Dynamic tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(94)
								Array< ::String > _g1 = ::Reflect_obj::fields(tmp11);		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(94)
								while((true)){
									HX_STACK_LINE(94)
									bool tmp12 = (_g < _g1->length);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(94)
									bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(94)
									if ((tmp13)){
										HX_STACK_LINE(94)
										break;
									}
									HX_STACK_LINE(94)
									::String tmp14 = _g1->__get(_g);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(94)
									::String i = tmp14;		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(94)
									++(_g);
									HX_STACK_LINE(95)
									::nme::net::URLVariables tmp15 = vars;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(95)
									::String tmp16 = i;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(95)
									Dynamic tmp17 = this->data;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(95)
									::String tmp18 = i;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(95)
									Dynamic tmp19 = ::Reflect_obj::field(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(95)
									::Reflect_obj::setField(tmp15,tmp16,tmp19);
								}
							}
							HX_STACK_LINE(97)
							::String tmp11 = vars->toString();		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(97)
							::String str = tmp11;		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(98)
							::nme::utils::ByteArray tmp12 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(98)
							this->set_nmeBytes(tmp12);
							HX_STACK_LINE(99)
							::nme::utils::ByteArray tmp13 = this->get_nmeBytes();		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(99)
							::String tmp14 = str;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(99)
							tmp13->writeUTFBytes(tmp14);
						}
						else{
							HX_STACK_LINE(103)
							HX_STACK_DO_THROW(HX_HCSTRING("Unknown data type","\x3a","\x04","\x3d","\xa1"));
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,nmePrepare,(void))

::nme::utils::ByteArray URLRequest_obj::get_nmeBytes( ){
	HX_STACK_FRAME("nme.net.URLRequest","get_nmeBytes",0xb7cca483,"nme.net.URLRequest.get_nmeBytes","nme/net/URLRequest.hx",107,0xdb7c6643)
	HX_STACK_THIS(this)
	HX_STACK_LINE(107)
	::nme::utils::ByteArray tmp = this->__bytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(107)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(URLRequest_obj,get_nmeBytes,return )

::nme::utils::ByteArray URLRequest_obj::set_nmeBytes( ::nme::utils::ByteArray value){
	HX_STACK_FRAME("nme.net.URLRequest","set_nmeBytes",0xccc5c7f7,"nme.net.URLRequest.set_nmeBytes","nme/net/URLRequest.hx",108,0xdb7c6643)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(108)
	::nme::utils::ByteArray tmp = this->__bytes = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(108)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(URLRequest_obj,set_nmeBytes,return )

int URLRequest_obj::AUTH_BASIC;

int URLRequest_obj::AUTH_DIGEST;

int URLRequest_obj::AUTH_GSSNEGOTIATE;

int URLRequest_obj::AUTH_NTLM;

int URLRequest_obj::AUTH_DIGEST_IE;

int URLRequest_obj::AUTH_DIGEST_ANY;

Dynamic URLRequest_obj::nme_get_url;


URLRequest_obj::URLRequest_obj()
{
}

void URLRequest_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLRequest);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(userAgent,"userAgent");
	HX_MARK_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_MARK_MEMBER_NAME(authType,"authType");
	HX_MARK_MEMBER_NAME(cookieString,"cookieString");
	HX_MARK_MEMBER_NAME(verbose,"verbose");
	HX_MARK_MEMBER_NAME(method,"method");
	HX_MARK_MEMBER_NAME(contentType,"contentType");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(credentials,"credentials");
	HX_MARK_MEMBER_NAME(followRedirects,"followRedirects");
	HX_MARK_MEMBER_NAME(__bytes,"__bytes");
	HX_MARK_END_CLASS();
}

void URLRequest_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(userAgent,"userAgent");
	HX_VISIT_MEMBER_NAME(requestHeaders,"requestHeaders");
	HX_VISIT_MEMBER_NAME(authType,"authType");
	HX_VISIT_MEMBER_NAME(cookieString,"cookieString");
	HX_VISIT_MEMBER_NAME(verbose,"verbose");
	HX_VISIT_MEMBER_NAME(method,"method");
	HX_VISIT_MEMBER_NAME(contentType,"contentType");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(credentials,"credentials");
	HX_VISIT_MEMBER_NAME(followRedirects,"followRedirects");
	HX_VISIT_MEMBER_NAME(__bytes,"__bytes");
}

Dynamic URLRequest_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return url; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { return method; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { return verbose; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { return __bytes; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { return authType; }
		if (HX_FIELD_EQ(inName,"nmeBytes") ) { if (inCallProp != hx::paccNever) return get_nmeBytes(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { return userAgent; }
		if (HX_FIELD_EQ(inName,"basicAuth") ) { return basicAuth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"digestAuth") ) { return digestAuth_dyn(); }
		if (HX_FIELD_EQ(inName,"nmePrepare") ) { return nmePrepare_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { return contentType; }
		if (HX_FIELD_EQ(inName,"credentials") ) { return credentials; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { return cookieString; }
		if (HX_FIELD_EQ(inName,"get_nmeBytes") ) { return get_nmeBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"set_nmeBytes") ) { return set_nmeBytes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"launchBrowser") ) { return launchBrowser_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { return requestHeaders; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { return followRedirects; }
	}
	return super::__Field(inName,inCallProp);
}

bool URLRequest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"nme_get_url") ) { outValue = nme_get_url; return true;  }
	}
	return false;
}

Dynamic URLRequest_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"method") ) { method=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"verbose") ) { verbose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__bytes") ) { __bytes=inValue.Cast< ::nme::utils::ByteArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"authType") ) { authType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeBytes") ) { if (inCallProp != hx::paccNever) return set_nmeBytes(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"userAgent") ) { userAgent=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"contentType") ) { contentType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"credentials") ) { credentials=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cookieString") ) { cookieString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"requestHeaders") ) { requestHeaders=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"followRedirects") ) { followRedirects=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLRequest_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"nme_get_url") ) { nme_get_url=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void URLRequest_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"));
	outFields->push(HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"));
	outFields->push(HX_HCSTRING("authType","\x42","\xd2","\x60","\x28"));
	outFields->push(HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc"));
	outFields->push(HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"));
	outFields->push(HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"));
	outFields->push(HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b"));
	outFields->push(HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"));
	outFields->push(HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27"));
	outFields->push(HX_HCSTRING("nmeBytes","\x45","\x83","\x21","\xfb"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(URLRequest_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(URLRequest_obj,userAgent),HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(URLRequest_obj,requestHeaders),HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc")},
	{hx::fsInt,(int)offsetof(URLRequest_obj,authType),HX_HCSTRING("authType","\x42","\xd2","\x60","\x28")},
	{hx::fsString,(int)offsetof(URLRequest_obj,cookieString),HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,verbose),HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71")},
	{hx::fsString,(int)offsetof(URLRequest_obj,method),HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09")},
	{hx::fsString,(int)offsetof(URLRequest_obj,contentType),HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLRequest_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsString,(int)offsetof(URLRequest_obj,credentials),HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b")},
	{hx::fsBool,(int)offsetof(URLRequest_obj,followRedirects),HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75")},
	{hx::fsObject /*::nme::utils::ByteArray*/ ,(int)offsetof(URLRequest_obj,__bytes),HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_BASIC,HX_HCSTRING("AUTH_BASIC","\x37","\xcf","\x36","\x7b")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST,HX_HCSTRING("AUTH_DIGEST","\x7b","\x53","\xb8","\xb4")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_GSSNEGOTIATE,HX_HCSTRING("AUTH_GSSNEGOTIATE","\x0e","\x90","\xe4","\xa1")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_NTLM,HX_HCSTRING("AUTH_NTLM","\xbe","\x3f","\xa8","\xe2")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST_IE,HX_HCSTRING("AUTH_DIGEST_IE","\x60","\x21","\x93","\x3c")},
	{hx::fsInt,(void *) &URLRequest_obj::AUTH_DIGEST_ANY,HX_HCSTRING("AUTH_DIGEST_ANY","\xc8","\x08","\x24","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &URLRequest_obj::nme_get_url,HX_HCSTRING("nme_get_url","\xcd","\xda","\x0b","\xd9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("userAgent","\x7a","\xf0","\x12","\xc8"),
	HX_HCSTRING("requestHeaders","\xb7","\xb2","\x4f","\xdc"),
	HX_HCSTRING("authType","\x42","\xd2","\x60","\x28"),
	HX_HCSTRING("cookieString","\x95","\x08","\x16","\xfc"),
	HX_HCSTRING("verbose","\x82","\xd7","\xb9","\x71"),
	HX_HCSTRING("method","\xe1","\xf6","\x5a","\x09"),
	HX_HCSTRING("contentType","\x93","\x3c","\x7b","\x2a"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("credentials","\xbc","\x12","\x86","\x7b"),
	HX_HCSTRING("followRedirects","\x26","\x5a","\x40","\x75"),
	HX_HCSTRING("__bytes","\x4b","\x61","\xf6","\x27"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("launchBrowser","\xb5","\x1d","\xf0","\x31"),
	HX_HCSTRING("basicAuth","\x36","\x25","\x20","\x42"),
	HX_HCSTRING("digestAuth","\xcc","\x7d","\x34","\xfe"),
	HX_HCSTRING("nmePrepare","\xe1","\xf6","\xde","\x06"),
	HX_HCSTRING("get_nmeBytes","\x4e","\x37","\x3b","\xb0"),
	HX_HCSTRING("set_nmeBytes","\xc2","\x5a","\x34","\xc5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_MARK_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
	HX_MARK_MEMBER_NAME(URLRequest_obj::nme_get_url,"nme_get_url");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLRequest_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_BASIC,"AUTH_BASIC");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST,"AUTH_DIGEST");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_GSSNEGOTIATE,"AUTH_GSSNEGOTIATE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_NTLM,"AUTH_NTLM");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_IE,"AUTH_DIGEST_IE");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::AUTH_DIGEST_ANY,"AUTH_DIGEST_ANY");
	HX_VISIT_MEMBER_NAME(URLRequest_obj::nme_get_url,"nme_get_url");
};

#endif

hx::Class URLRequest_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("AUTH_BASIC","\x37","\xcf","\x36","\x7b"),
	HX_HCSTRING("AUTH_DIGEST","\x7b","\x53","\xb8","\xb4"),
	HX_HCSTRING("AUTH_GSSNEGOTIATE","\x0e","\x90","\xe4","\xa1"),
	HX_HCSTRING("AUTH_NTLM","\xbe","\x3f","\xa8","\xe2"),
	HX_HCSTRING("AUTH_DIGEST_IE","\x60","\x21","\x93","\x3c"),
	HX_HCSTRING("AUTH_DIGEST_ANY","\xc8","\x08","\x24","\xc4"),
	HX_HCSTRING("nme_get_url","\xcd","\xda","\x0b","\xd9"),
	::String(null()) };

void URLRequest_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.net.URLRequest","\x59","\x9c","\xf5","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLRequest_obj::__GetStatic;
	__mClass->mSetStaticField = &URLRequest_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLRequest_obj >;
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

void URLRequest_obj::__boot()
{
	AUTH_BASIC= (int)1;
	AUTH_DIGEST= (int)2;
	AUTH_GSSNEGOTIATE= (int)4;
	AUTH_NTLM= (int)8;
	AUTH_DIGEST_IE= (int)16;
	AUTH_DIGEST_ANY= (int)15;
	nme_get_url= ::nme::Loader_obj::load(HX_HCSTRING("nme_get_url","\xcd","\xda","\x0b","\xd9"),(int)1);
}

} // end namespace nme
} // end namespace net
