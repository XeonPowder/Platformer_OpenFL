#include <hxcpp.h>

#include "nme/Event.h"
#ifndef INCLUDED_nme_app__AppEvent_AppEvent_Impl_
#include <nme/app/_AppEvent/AppEvent_Impl_.h>
#endif
namespace nme{
namespace app{
namespace _AppEvent{

Void AppEvent_Impl__obj::__construct()
{
	return null();
}

//AppEvent_Impl__obj::~AppEvent_Impl__obj() { }

Dynamic AppEvent_Impl__obj::__CreateEmpty() { return  new AppEvent_Impl__obj; }
hx::ObjectPtr< AppEvent_Impl__obj > AppEvent_Impl__obj::__new()
{  hx::ObjectPtr< AppEvent_Impl__obj > _result_ = new AppEvent_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic AppEvent_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AppEvent_Impl__obj > _result_ = new AppEvent_Impl__obj();
	_result_->__construct();
	return _result_;}

int AppEvent_Impl__obj::get_type( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_type",0x6e6d20ad,"nme.app._AppEvent.AppEvent_Impl_.get_type","nme/app/AppEvent.hx",23,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(23)
	int tmp = this1->get_ref().type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_type,return )

int AppEvent_Impl__obj::get_x( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_x",0x8dd5eca5,"nme.app._AppEvent.AppEvent_Impl_.get_x","nme/app/AppEvent.hx",24,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(24)
	int tmp = this1->get_ref().x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_x,return )

int AppEvent_Impl__obj::get_y( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_y",0x8dd5eca6,"nme.app._AppEvent.AppEvent_Impl_.get_y","nme/app/AppEvent.hx",25,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(25)
	int tmp = this1->get_ref().y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_y,return )

int AppEvent_Impl__obj::get_value( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_value",0x47fc861e,"nme.app._AppEvent.AppEvent_Impl_.get_value","nme/app/AppEvent.hx",26,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(26)
	int tmp = this1->get_ref().value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_value,return )

int AppEvent_Impl__obj::get_code( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_code",0x6328df20,"nme.app._AppEvent.AppEvent_Impl_.get_code","nme/app/AppEvent.hx",27,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(27)
	int tmp = this1->get_ref().code;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_code,return )

int AppEvent_Impl__obj::get_id( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_id",0x8d59170e,"nme.app._AppEvent.AppEvent_Impl_.get_id","nme/app/AppEvent.hx",28,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(28)
	int tmp = this1->get_ref().id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_id,return )

int AppEvent_Impl__obj::get_flags( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_flags",0x18d031f4,"nme.app._AppEvent.AppEvent_Impl_.get_flags","nme/app/AppEvent.hx",29,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(29)
	int tmp = this1->get_ref().flags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_flags,return )

int AppEvent_Impl__obj::get_result( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_result",0x6dc63990,"nme.app._AppEvent.AppEvent_Impl_.get_result","nme/app/AppEvent.hx",30,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(30)
	int tmp = this1->get_ref().result;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_result,return )

int AppEvent_Impl__obj::set_result( ::cpp::Pointer< nme::Event > this1,int inResult){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","set_result",0x7143d804,"nme.app._AppEvent.AppEvent_Impl_.set_result","nme/app/AppEvent.hx",31,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(inResult,"inResult")
	HX_STACK_LINE(31)
	int tmp = this1->get_ref().result = inResult;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(31)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppEvent_Impl__obj,set_result,return )

Float AppEvent_Impl__obj::get_sx( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_sx",0x8d591fd8,"nme.app._AppEvent.AppEvent_Impl_.get_sx","nme/app/AppEvent.hx",32,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(32)
	Float tmp = this1->get_ref().scaleX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_sx,return )

Float AppEvent_Impl__obj::get_sy( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_sy",0x8d591fd9,"nme.app._AppEvent.AppEvent_Impl_.get_sy","nme/app/AppEvent.hx",33,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(33)
	Float tmp = this1->get_ref().scaleY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_sy,return )

Float AppEvent_Impl__obj::get_deltaX( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_deltaX",0xd025e213,"nme.app._AppEvent.AppEvent_Impl_.get_deltaX","nme/app/AppEvent.hx",34,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(34)
	Float tmp = this1->get_ref().deltaX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_deltaX,return )

Float AppEvent_Impl__obj::get_deltaY( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_deltaY",0xd025e214,"nme.app._AppEvent.AppEvent_Impl_.get_deltaY","nme/app/AppEvent.hx",35,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(35)
	Float tmp = this1->get_ref().deltaY;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_deltaY,return )

Float AppEvent_Impl__obj::get_pollTime( ::cpp::Pointer< nme::Event > this1){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","get_pollTime",0x3965a55f,"nme.app._AppEvent.AppEvent_Impl_.get_pollTime","nme/app/AppEvent.hx",36,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(36)
	Float tmp = this1->get_ref().pollTime;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(36)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AppEvent_Impl__obj,get_pollTime,return )

Float AppEvent_Impl__obj::set_pollTime( ::cpp::Pointer< nme::Event > this1,Float inWake){
	HX_STACK_FRAME("nme.app._AppEvent.AppEvent_Impl_","set_pollTime",0x4e5ec8d3,"nme.app._AppEvent.AppEvent_Impl_.set_pollTime","nme/app/AppEvent.hx",37,0x2ed53ace)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(inWake,"inWake")
	HX_STACK_LINE(37)
	Float tmp = this1->get_ref().pollTime = inWake;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AppEvent_Impl__obj,set_pollTime,return )


AppEvent_Impl__obj::AppEvent_Impl__obj()
{
}

bool AppEvent_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { outValue = get_id_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_sx") ) { outValue = get_sx_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_sy") ) { outValue = get_sy_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_type") ) { outValue = get_type_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_code") ) { outValue = get_code_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_value") ) { outValue = get_value_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_flags") ) { outValue = get_flags_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_result") ) { outValue = get_result_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_result") ) { outValue = set_result_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_deltaX") ) { outValue = get_deltaX_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_deltaY") ) { outValue = get_deltaY_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_pollTime") ) { outValue = get_pollTime_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_pollTime") ) { outValue = set_pollTime_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AppEvent_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AppEvent_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class AppEvent_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("get_type","\x43","\xae","\xc3","\xcc"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_value","\xc8","\xdb","\x61","\x75"),
	HX_HCSTRING("get_code","\xb6","\x6c","\x7f","\xc1"),
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("get_flags","\x9e","\x87","\x35","\x46"),
	HX_HCSTRING("get_result","\xa6","\xd8","\x0b","\xf9"),
	HX_HCSTRING("set_result","\x1a","\x77","\x89","\xfc"),
	HX_HCSTRING("get_sx","\xee","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_sy","\xef","\xfb","\x2f","\xa3"),
	HX_HCSTRING("get_deltaX","\x29","\x81","\x6b","\x5b"),
	HX_HCSTRING("get_deltaY","\x2a","\x81","\x6b","\x5b"),
	HX_HCSTRING("get_pollTime","\xf5","\xb5","\xa1","\x58"),
	HX_HCSTRING("set_pollTime","\x69","\xd9","\x9a","\x6d"),
	::String(null()) };

void AppEvent_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.app._AppEvent.AppEvent_Impl_","\x44","\xe3","\x8a","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AppEvent_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AppEvent_Impl__obj >;
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
} // end namespace app
} // end namespace _AppEvent
