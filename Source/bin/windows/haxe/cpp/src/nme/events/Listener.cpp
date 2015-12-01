#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_Listener
#include <nme/events/Listener.h>
#endif
#ifndef INCLUDED_nme_utils_WeakRef
#include <nme/utils/WeakRef.h>
#endif
namespace nme{
namespace events{

Void Listener_obj::__construct(Dynamic inListener,bool inUseCapture,int inPriority,bool inUseWeakRef)
{
HX_STACK_FRAME("nme.events.Listener","new",0x4bec2cd3,"nme.events.Listener.new","nme/events/EventDispatcher.hx",21,0x1eb8c64a)
HX_STACK_THIS(this)
HX_STACK_ARG(inListener,"inListener")
HX_STACK_ARG(inUseCapture,"inUseCapture")
HX_STACK_ARG(inPriority,"inPriority")
HX_STACK_ARG(inUseWeakRef,"inUseWeakRef")
{
	HX_STACK_LINE(22)
	::nme::utils::WeakRef tmp = ::nme::utils::WeakRef_obj::__new(inListener,inUseWeakRef);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	this->mListner = tmp;
	HX_STACK_LINE(23)
	this->mUseCapture = inUseCapture;
	HX_STACK_LINE(24)
	this->mPriority = inPriority;
	HX_STACK_LINE(25)
	int tmp1 = (::nme::events::Listener_obj::sIDs)++;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	this->mID = tmp1;
}
;
	return null();
}

//Listener_obj::~Listener_obj() { }

Dynamic Listener_obj::__CreateEmpty() { return  new Listener_obj; }
hx::ObjectPtr< Listener_obj > Listener_obj::__new(Dynamic inListener,bool inUseCapture,int inPriority,bool inUseWeakRef)
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct(inListener,inUseCapture,inPriority,inUseWeakRef);
	return _result_;}

Dynamic Listener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Listener_obj > _result_ = new Listener_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Listener_obj::dispatchEvent( ::nme::events::Event event){
{
		HX_STACK_FRAME("nme.events.Listener","dispatchEvent",0x52725133,"nme.events.Listener.dispatchEvent","nme/events/EventDispatcher.hx",29,0x1eb8c64a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(30)
		::nme::utils::WeakRef tmp = this->mListner;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Dynamic tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Dynamic ref = tmp1;		HX_STACK_VAR(ref,"ref");
		HX_STACK_LINE(31)
		bool tmp2 = (ref != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(31)
		if ((tmp2)){
			HX_STACK_LINE(32)
			::nme::events::Event tmp3 = event;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			ref(tmp3).Cast< Void >();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Listener_obj,dispatchEvent,(void))

bool Listener_obj::Is( Dynamic inListener,bool inCapture){
	HX_STACK_FRAME("nme.events.Listener","Is",0x061472f7,"nme.events.Listener.Is","nme/events/EventDispatcher.hx",36,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inListener,"inListener")
	HX_STACK_ARG(inCapture,"inCapture")
	HX_STACK_LINE(37)
	::nme::utils::WeakRef tmp = this->mListner;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Dynamic tmp1 = tmp->get();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Dynamic ref = tmp1;		HX_STACK_VAR(ref,"ref");
	HX_STACK_LINE(38)
	bool tmp2 = (ref == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(38)
	if ((tmp2)){
		HX_STACK_LINE(39)
		return false;
	}
	HX_STACK_LINE(40)
	Dynamic tmp3 = ref;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	Dynamic tmp4 = inListener;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	Dynamic tmp5 = tmp3;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	Dynamic tmp6 = tmp4;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	bool tmp7 = ::Reflect_obj::compareMethods(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	if ((tmp7)){
		HX_STACK_LINE(40)
		bool tmp9 = this->mUseCapture;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(40)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(40)
		bool tmp11 = inCapture;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		tmp8 = (tmp10 == tmp11);
	}
	else{
		HX_STACK_LINE(40)
		tmp8 = false;
	}
	HX_STACK_LINE(40)
	return tmp8;
}


HX_DEFINE_DYNAMIC_FUNC2(Listener_obj,Is,return )

int Listener_obj::sIDs;


Listener_obj::Listener_obj()
{
}

void Listener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Listener);
	HX_MARK_MEMBER_NAME(mID,"mID");
	HX_MARK_MEMBER_NAME(mListner,"mListner");
	HX_MARK_MEMBER_NAME(mPriority,"mPriority");
	HX_MARK_MEMBER_NAME(mUseCapture,"mUseCapture");
	HX_MARK_END_CLASS();
}

void Listener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mID,"mID");
	HX_VISIT_MEMBER_NAME(mListner,"mListner");
	HX_VISIT_MEMBER_NAME(mPriority,"mPriority");
	HX_VISIT_MEMBER_NAME(mUseCapture,"mUseCapture");
}

Dynamic Listener_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"Is") ) { return Is_dyn(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { return mID; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListner") ) { return mListner; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPriority") ) { return mPriority; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mUseCapture") ) { return mUseCapture; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Listener_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sIDs") ) { outValue = sIDs; return true;  }
	}
	return false;
}

Dynamic Listener_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mID") ) { mID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListner") ) { mListner=inValue.Cast< ::nme::utils::WeakRef >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mPriority") ) { mPriority=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mUseCapture") ) { mUseCapture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Listener_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sIDs") ) { sIDs=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Listener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mID","\x88","\xf5","\x52","\x00"));
	outFields->push(HX_HCSTRING("mListner","\xd0","\x01","\x68","\x32"));
	outFields->push(HX_HCSTRING("mPriority","\xf1","\xec","\xb9","\x65"));
	outFields->push(HX_HCSTRING("mUseCapture","\xcc","\xa1","\x69","\x7f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Listener_obj,mID),HX_HCSTRING("mID","\x88","\xf5","\x52","\x00")},
	{hx::fsObject /*::nme::utils::WeakRef*/ ,(int)offsetof(Listener_obj,mListner),HX_HCSTRING("mListner","\xd0","\x01","\x68","\x32")},
	{hx::fsInt,(int)offsetof(Listener_obj,mPriority),HX_HCSTRING("mPriority","\xf1","\xec","\xb9","\x65")},
	{hx::fsBool,(int)offsetof(Listener_obj,mUseCapture),HX_HCSTRING("mUseCapture","\xcc","\xa1","\x69","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Listener_obj::sIDs,HX_HCSTRING("sIDs","\xa5","\x29","\x3b","\x4c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mID","\x88","\xf5","\x52","\x00"),
	HX_HCSTRING("mListner","\xd0","\x01","\x68","\x32"),
	HX_HCSTRING("mPriority","\xf1","\xec","\xb9","\x65"),
	HX_HCSTRING("mUseCapture","\xcc","\xa1","\x69","\x7f"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("Is","\x0a","\x40","\x00","\x00"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Listener_obj::sIDs,"sIDs");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Listener_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Listener_obj::sIDs,"sIDs");
};

#endif

hx::Class Listener_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sIDs","\xa5","\x29","\x3b","\x4c"),
	::String(null()) };

void Listener_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.Listener","\x61","\xc7","\xe2","\x7c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Listener_obj::__GetStatic;
	__mClass->mSetStaticField = &Listener_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Listener_obj >;
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

void Listener_obj::__boot()
{
	sIDs= (int)1;
}

} // end namespace nme
} // end namespace events
