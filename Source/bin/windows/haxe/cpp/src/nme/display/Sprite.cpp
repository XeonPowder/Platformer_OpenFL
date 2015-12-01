#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
namespace nme{
namespace display{

Void Sprite_obj::__construct()
{
HX_STACK_FRAME("nme.display.Sprite","new",0xf612366b,"nme.display.Sprite.new","nme/display/Sprite.hx",13,0xc7282623)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	Dynamic tmp = ::nme::display::DisplayObjectContainer_obj::nme_create_display_object_container();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	::String tmp1 = this->nmeGetType();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	super::__construct(tmp,tmp1);
}
;
	return null();
}

//Sprite_obj::~Sprite_obj() { }

Dynamic Sprite_obj::__CreateEmpty() { return  new Sprite_obj; }
hx::ObjectPtr< Sprite_obj > Sprite_obj::__new()
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sprite_obj > _result_ = new Sprite_obj();
	_result_->__construct();
	return _result_;}

::String Sprite_obj::nmeGetType( ){
	HX_STACK_FRAME("nme.display.Sprite","nmeGetType",0xdb32491f,"nme.display.Sprite.nmeGetType","nme/display/Sprite.hx",17,0xc7282623)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::String type = tmp1;		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(19)
	int tmp2 = type.lastIndexOf(HX_HCSTRING(".","\x2e","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	int pos = tmp2;		HX_STACK_VAR(pos,"pos");
	HX_STACK_LINE(20)
	bool tmp3 = (pos >= (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(20)
	if ((tmp3)){
		HX_STACK_LINE(20)
		int tmp5 = (pos + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(20)
		tmp4 = type.substr(tmp5,null());
	}
	else{
		HX_STACK_LINE(20)
		tmp4 = type;
	}
	HX_STACK_LINE(20)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,nmeGetType,return )

Void Sprite_obj::startDrag( hx::Null< bool >  __o_lockCenter,::nme::geom::Rectangle bounds){
bool lockCenter = __o_lockCenter.Default(false);
	HX_STACK_FRAME("nme.display.Sprite","startDrag",0x2a5ea5c1,"nme.display.Sprite.startDrag","nme/display/Sprite.hx",24,0xc7282623)
	HX_STACK_THIS(this)
	HX_STACK_ARG(lockCenter,"lockCenter")
	HX_STACK_ARG(bounds,"bounds")
{
		HX_STACK_LINE(25)
		::nme::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(25)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(25)
		if ((tmp1)){
			HX_STACK_LINE(26)
			::nme::display::Stage tmp2 = this->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			bool tmp3 = lockCenter;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			::nme::geom::Rectangle tmp4 = bounds;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			tmp2->nmeStartDrag(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

Void Sprite_obj::stopDrag( ){
{
		HX_STACK_FRAME("nme.display.Sprite","stopDrag",0xdb67432b,"nme.display.Sprite.stopDrag","nme/display/Sprite.hx",30,0xc7282623)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::nme::display::Stage tmp = this->get_stage();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(31)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(32)
			::nme::display::Stage tmp2 = this->get_stage();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			tmp2->nmeStopDrag(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))


Sprite_obj::Sprite_obj()
{
}

Dynamic Sprite_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return stopDrag_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return startDrag_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { return buttonMode; }
		if (HX_FIELD_EQ(inName,"nmeGetType") ) { return nmeGetType_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return useHandCursor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Sprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"));
	outFields->push(HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Sprite_obj,buttonMode),HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2")},
	{hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buttonMode","\x75","\x42","\x57","\xb2"),
	HX_HCSTRING("useHandCursor","\xcc","\xda","\xae","\x89"),
	HX_HCSTRING("nmeGetType","\xca","\x07","\x8d","\xee"),
	HX_HCSTRING("startDrag","\x76","\xa5","\x63","\xfb"),
	HX_HCSTRING("stopDrag","\x16","\x71","\x2a","\x95"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sprite_obj::__mClass,"__mClass");
};

#endif

hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Sprite","\xf9","\x24","\xae","\x1c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sprite_obj >;
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
