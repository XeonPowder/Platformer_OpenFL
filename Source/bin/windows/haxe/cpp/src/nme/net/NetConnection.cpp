#include <hxcpp.h>

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
#ifndef INCLUDED_nme_net_NetConnection
#include <nme/net/NetConnection.h>
#endif
namespace nme{
namespace net{

Void NetConnection_obj::__construct()
{
HX_STACK_FRAME("nme.net.NetConnection","new",0x76a645b4,"nme.net.NetConnection.new","nme/net/NetConnection.hx",21,0xd54c24be)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct(null());
	HX_STACK_LINE(23)
	this->objectEncoding = (int)0;
	HX_STACK_LINE(24)
	this->connectedProxyType = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(25)
	this->usingTLS = false;
}
;
	return null();
}

//NetConnection_obj::~NetConnection_obj() { }

Dynamic NetConnection_obj::__CreateEmpty() { return  new NetConnection_obj; }
hx::ObjectPtr< NetConnection_obj > NetConnection_obj::__new()
{  hx::ObjectPtr< NetConnection_obj > _result_ = new NetConnection_obj();
	_result_->__construct();
	return _result_;}

Dynamic NetConnection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NetConnection_obj > _result_ = new NetConnection_obj();
	_result_->__construct();
	return _result_;}

Void NetConnection_obj::connect( ::String command,Dynamic p1,Dynamic p2,Dynamic p3,Dynamic p4,Dynamic p5){
{
		HX_STACK_FRAME("nme.net.NetConnection","connect",0x5c59eb3e,"nme.net.NetConnection.connect","nme/net/NetConnection.hx",28,0xd54c24be)
		HX_STACK_THIS(this)
		HX_STACK_ARG(command,"command")
		HX_STACK_ARG(p1,"p1")
		HX_STACK_ARG(p2,"p2")
		HX_STACK_ARG(p3,"p3")
		HX_STACK_ARG(p4,"p4")
		HX_STACK_ARG(p5,"p5")
		HX_STACK_LINE(29)
		this->uri = command;
		HX_STACK_LINE(30)
		::String tmp = this->uri;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		if ((tmp2)){
			HX_STACK_LINE(30)
			::String tmp4 = this->uri;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(30)
			::String tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(30)
			tmp3 = (tmp5 == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(30)
			tmp3 = true;
		}
		HX_STACK_LINE(30)
		if ((tmp3)){
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/net/NetConnection.hx",32,0xd54c24be)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("code","\x2d","\xb1","\xc4","\x41") , HX_HCSTRING("NetConnection.Connect.Success","\x4c","\x91","\xa7","\x41"),false);
						__result->Add(HX_HCSTRING("level","\x84","\x15","\x63","\x72") , HX_HCSTRING("status","\x32","\xe7","\xfb","\x05"),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(32)
			Dynamic tmp4 = _Function_2_1::Block();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(31)
			::nme::events::NetStatusEvent tmp5 = ::nme::events::NetStatusEvent_obj::__new(HX_HCSTRING("netStatus","\x6f","\x4f","\xec","\x46"),false,false,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(31)
			this->dispatchEvent(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(NetConnection_obj,connect,(void))

Void NetConnection_obj::close( ){
{
		HX_STACK_FRAME("nme.net.NetConnection","close",0xd03c8a0c,"nme.net.NetConnection.close","nme/net/NetConnection.hx",35,0xd54c24be)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NetConnection_obj,close,(void))

bool NetConnection_obj::get_connected( ){
	HX_STACK_FRAME("nme.net.NetConnection","get_connected",0xa52c9cf4,"nme.net.NetConnection.get_connected","nme/net/NetConnection.hx",37,0xd54c24be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(NetConnection_obj,get_connected,return )

::String NetConnection_obj::get_proxyType( ){
	HX_STACK_FRAME("nme.net.NetConnection","get_proxyType",0xaa4a9673,"nme.net.NetConnection.get_proxyType","nme/net/NetConnection.hx",38,0xd54c24be)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


HX_DEFINE_DYNAMIC_FUNC0(NetConnection_obj,get_proxyType,return )

::String NetConnection_obj::set_proxyType( ::String inType){
	HX_STACK_FRAME("nme.net.NetConnection","set_proxyType",0xef50787f,"nme.net.NetConnection.set_proxyType","nme/net/NetConnection.hx",39,0xd54c24be)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inType,"inType")
	HX_STACK_LINE(39)
	::String tmp = inType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(NetConnection_obj,set_proxyType,return )

int NetConnection_obj::defaultObjectEncoding;


NetConnection_obj::NetConnection_obj()
{
}

void NetConnection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetConnection);
	HX_MARK_MEMBER_NAME(client,"client");
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_MARK_MEMBER_NAME(uri,"uri");
	HX_MARK_MEMBER_NAME(connectedProxyType,"connectedProxyType");
	HX_MARK_MEMBER_NAME(usingTLS,"usingTLS");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetConnection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(client,"client");
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(objectEncoding,"objectEncoding");
	HX_VISIT_MEMBER_NAME(uri,"uri");
	HX_VISIT_MEMBER_NAME(connectedProxyType,"connectedProxyType");
	HX_VISIT_MEMBER_NAME(usingTLS,"usingTLS");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic NetConnection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { return uri; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { return client; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return connect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"usingTLS") ) { return usingTLS; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return inCallProp != hx::paccNever ? get_connected() : connected; }
		if (HX_FIELD_EQ(inName,"proxyType") ) { if (inCallProp != hx::paccNever) return get_proxyType(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_connected") ) { return get_connected_dyn(); }
		if (HX_FIELD_EQ(inName,"get_proxyType") ) { return get_proxyType_dyn(); }
		if (HX_FIELD_EQ(inName,"set_proxyType") ) { return set_proxyType_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { return objectEncoding; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"connectedProxyType") ) { return connectedProxyType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic NetConnection_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uri") ) { uri=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"client") ) { client=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"usingTLS") ) { usingTLS=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"proxyType") ) { if (inCallProp != hx::paccNever) return set_proxyType(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"objectEncoding") ) { objectEncoding=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"connectedProxyType") ) { connectedProxyType=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetConnection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"));
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"));
	outFields->push(HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("connectedProxyType","\x3f","\xb8","\x7c","\x50"));
	outFields->push(HX_HCSTRING("proxyType","\x48","\xdc","\x14","\xa8"));
	outFields->push(HX_HCSTRING("usingTLS","\x17","\x2d","\x14","\x68"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NetConnection_obj,client),HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a")},
	{hx::fsBool,(int)offsetof(NetConnection_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(NetConnection_obj,objectEncoding),HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a")},
	{hx::fsString,(int)offsetof(NetConnection_obj,uri),HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00")},
	{hx::fsString,(int)offsetof(NetConnection_obj,connectedProxyType),HX_HCSTRING("connectedProxyType","\x3f","\xb8","\x7c","\x50")},
	{hx::fsBool,(int)offsetof(NetConnection_obj,usingTLS),HX_HCSTRING("usingTLS","\x17","\x2d","\x14","\x68")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &NetConnection_obj::defaultObjectEncoding,HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("client","\x4b","\xca","\x4f","\x0a"),
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("objectEncoding","\xb2","\x1e","\x15","\x2a"),
	HX_HCSTRING("uri","\x6c","\x2b","\x59","\x00"),
	HX_HCSTRING("connectedProxyType","\x3f","\xb8","\x7c","\x50"),
	HX_HCSTRING("usingTLS","\x17","\x2d","\x14","\x68"),
	HX_HCSTRING("connect","\xea","\x3b","\x80","\x15"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("get_connected","\xa0","\xb6","\x5a","\x64"),
	HX_HCSTRING("get_proxyType","\x1f","\xb0","\x78","\x69"),
	HX_HCSTRING("set_proxyType","\x2b","\x92","\x7e","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NetConnection_obj::defaultObjectEncoding,"defaultObjectEncoding");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetConnection_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NetConnection_obj::defaultObjectEncoding,"defaultObjectEncoding");
};

#endif

hx::Class NetConnection_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("defaultObjectEncoding","\x53","\xfb","\xeb","\xff"),
	::String(null()) };

void NetConnection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.net.NetConnection","\xc2","\x9b","\x44","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NetConnection_obj >;
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

void NetConnection_obj::__boot()
{
	defaultObjectEncoding= (int)0;
}

} // end namespace nme
} // end namespace net
