#include <hxcpp.h>

#include "nme/Event.h"
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
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
#ifndef INCLUDED_nme_events_MouseEvent
#include <nme/events/MouseEvent.h>
#endif
#ifndef INCLUDED_nme_events_TouchEvent
#include <nme/events/TouchEvent.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
namespace nme{
namespace events{

Void TouchEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::nme::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount)
{
HX_STACK_FRAME("nme.events.TouchEvent","new",0xfc6c0cfa,"nme.events.TouchEvent.new","nme/events/TouchEvent.hx",27,0xc9dae996)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
HX_STACK_ARG(__o_in_localX,"in_localX")
HX_STACK_ARG(__o_in_localY,"in_localY")
HX_STACK_ARG(__o_in_sizeX,"in_sizeX")
HX_STACK_ARG(__o_in_sizeY,"in_sizeY")
HX_STACK_ARG(in_relatedObject,"in_relatedObject")
HX_STACK_ARG(__o_in_ctrlKey,"in_ctrlKey")
HX_STACK_ARG(__o_in_altKey,"in_altKey")
HX_STACK_ARG(__o_in_shiftKey,"in_shiftKey")
HX_STACK_ARG(__o_in_buttonDown,"in_buttonDown")
HX_STACK_ARG(__o_in_delta,"in_delta")
HX_STACK_ARG(__o_in_commandKey,"in_commandKey")
HX_STACK_ARG(__o_in_clickCount,"in_clickCount")
bool bubbles = __o_bubbles.Default(true);
bool cancelable = __o_cancelable.Default(false);
Float in_localX = __o_in_localX.Default(0);
Float in_localY = __o_in_localY.Default(0);
Float in_sizeX = __o_in_sizeX.Default(1);
Float in_sizeY = __o_in_sizeY.Default(1);
bool in_ctrlKey = __o_in_ctrlKey.Default(false);
bool in_altKey = __o_in_altKey.Default(false);
bool in_shiftKey = __o_in_shiftKey.Default(false);
bool in_buttonDown = __o_in_buttonDown.Default(false);
int in_delta = __o_in_delta.Default(0);
bool in_commandKey = __o_in_commandKey.Default(false);
int in_clickCount = __o_in_clickCount.Default(0);
{
	HX_STACK_LINE(28)
	::String tmp = type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	bool tmp1 = bubbles;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	bool tmp2 = cancelable;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(28)
	Float tmp3 = in_localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	Float tmp4 = in_localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(28)
	::nme::display::InteractiveObject tmp5 = in_relatedObject;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(28)
	bool tmp6 = in_ctrlKey;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(28)
	bool tmp7 = in_altKey;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	bool tmp8 = in_shiftKey;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(28)
	bool tmp9 = in_buttonDown;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(28)
	int tmp10 = in_delta;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	bool tmp11 = in_commandKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	int tmp12 = in_clickCount;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(28)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11,tmp12);
	HX_STACK_LINE(30)
	this->touchPointID = (int)0;
	HX_STACK_LINE(31)
	this->isPrimaryTouchPoint = true;
	HX_STACK_LINE(32)
	this->sizeX = in_sizeX;
	HX_STACK_LINE(33)
	this->sizeY = in_sizeY;
}
;
	return null();
}

//TouchEvent_obj::~TouchEvent_obj() { }

Dynamic TouchEvent_obj::__CreateEmpty() { return  new TouchEvent_obj; }
hx::ObjectPtr< TouchEvent_obj > TouchEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_in_localX,hx::Null< Float >  __o_in_localY,hx::Null< Float >  __o_in_sizeX,hx::Null< Float >  __o_in_sizeY,::nme::display::InteractiveObject in_relatedObject,hx::Null< bool >  __o_in_ctrlKey,hx::Null< bool >  __o_in_altKey,hx::Null< bool >  __o_in_shiftKey,hx::Null< bool >  __o_in_buttonDown,hx::Null< int >  __o_in_delta,hx::Null< bool >  __o_in_commandKey,hx::Null< int >  __o_in_clickCount)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(type,__o_bubbles,__o_cancelable,__o_in_localX,__o_in_localY,__o_in_sizeX,__o_in_sizeY,in_relatedObject,__o_in_ctrlKey,__o_in_altKey,__o_in_shiftKey,__o_in_buttonDown,__o_in_delta,__o_in_commandKey,__o_in_clickCount);
	return _result_;}

Dynamic TouchEvent_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TouchEvent_obj > _result_ = new TouchEvent_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10],inArgs[11],inArgs[12],inArgs[13],inArgs[14]);
	return _result_;}

::nme::events::MouseEvent TouchEvent_obj::nmeCreateSimilar( ::String inType,::nme::display::InteractiveObject related,::nme::display::InteractiveObject targ){
	HX_STACK_FRAME("nme.events.TouchEvent","nmeCreateSimilar",0xc7244e8f,"nme.events.TouchEvent.nmeCreateSimilar","nme/events/TouchEvent.hx",47,0xc9dae996)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inType,"inType")
	HX_STACK_ARG(related,"related")
	HX_STACK_ARG(targ,"targ")
	HX_STACK_LINE(48)
	::String tmp = inType;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(48)
	bool tmp1 = this->get_bubbles();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(48)
	bool tmp2 = this->get_cancelable();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(48)
	Float tmp3 = this->localX;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(48)
	Float tmp4 = this->localY;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(48)
	Float tmp5 = this->sizeX;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(48)
	Float tmp6 = this->sizeY;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(48)
	bool tmp7 = (related == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(48)
	::nme::display::InteractiveObject tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(48)
	if ((tmp7)){
		HX_STACK_LINE(48)
		tmp8 = this->relatedObject;
	}
	else{
		HX_STACK_LINE(48)
		tmp8 = related;
	}
	HX_STACK_LINE(48)
	bool tmp9 = this->ctrlKey;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(48)
	bool tmp10 = this->altKey;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(48)
	bool tmp11 = this->shiftKey;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(48)
	bool tmp12 = this->buttonDown;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(48)
	int tmp13 = this->delta;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(48)
	bool tmp14 = this->commandKey;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(48)
	int tmp15 = this->clickCount;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(48)
	::nme::events::TouchEvent tmp16 = ::nme::events::TouchEvent_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp8,tmp9,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(48)
	::nme::events::TouchEvent result = tmp16;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(50)
	int tmp17 = this->touchPointID;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(50)
	result->touchPointID = tmp17;
	HX_STACK_LINE(51)
	bool tmp18 = this->isPrimaryTouchPoint;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(51)
	result->isPrimaryTouchPoint = tmp18;
	HX_STACK_LINE(52)
	bool tmp19 = (targ != null());		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(52)
	if ((tmp19)){
		HX_STACK_LINE(53)
		::nme::display::InteractiveObject tmp20 = targ;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(53)
		result->set_target(tmp20);
	}
	HX_STACK_LINE(54)
	::nme::events::TouchEvent tmp20 = result;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(54)
	return tmp20;
}


::String TouchEvent_obj::TOUCH_BEGIN;

::String TouchEvent_obj::TOUCH_END;

::String TouchEvent_obj::TOUCH_MOVE;

::String TouchEvent_obj::TOUCH_OUT;

::String TouchEvent_obj::TOUCH_OVER;

::String TouchEvent_obj::TOUCH_ROLL_OUT;

::String TouchEvent_obj::TOUCH_ROLL_OVER;

::String TouchEvent_obj::TOUCH_TAP;

::nme::events::TouchEvent TouchEvent_obj::nmeCreate( ::String inType,::cpp::Pointer< nme::Event > inEvent,::nme::geom::Point inLocal,::nme::display::InteractiveObject inTarget,Float sizeX,Float sizeY){
	HX_STACK_FRAME("nme.events.TouchEvent","nmeCreate",0x40a816fc,"nme.events.TouchEvent.nmeCreate","nme/events/TouchEvent.hx",37,0xc9dae996)
	HX_STACK_ARG(inType,"inType")
	HX_STACK_ARG(inEvent,"inEvent")
	HX_STACK_ARG(inLocal,"inLocal")
	HX_STACK_ARG(inTarget,"inTarget")
	HX_STACK_ARG(sizeX,"sizeX")
	HX_STACK_ARG(sizeY,"sizeY")
	HX_STACK_LINE(38)
	int tmp = inEvent->get_ref().flags;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	int flags = tmp;		HX_STACK_VAR(flags,"flags");
	HX_STACK_LINE(39)
	::String tmp1 = inType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	Float tmp2 = inLocal->x;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	Float tmp3 = inLocal->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(39)
	Float tmp4 = sizeX;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(39)
	Float tmp5 = sizeY;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	int tmp6 = flags;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	int tmp7 = ::nme::events::MouseEvent_obj::efCtrlDown;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(39)
	int tmp8 = (int(tmp6) & int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(39)
	bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(39)
	int tmp10 = flags;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	int tmp11 = ::nme::events::MouseEvent_obj::efAltDown;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(39)
	int tmp12 = (int(tmp10) & int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(39)
	bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(39)
	int tmp14 = flags;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(39)
	int tmp15 = ::nme::events::MouseEvent_obj::efShiftDown;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(39)
	int tmp16 = (int(tmp14) & int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(39)
	bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(39)
	int tmp18 = flags;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(39)
	int tmp19 = ::nme::events::MouseEvent_obj::efLeftDown;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(39)
	int tmp20 = (int(tmp18) & int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(39)
	bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(39)
	::nme::events::TouchEvent tmp22 = ::nme::events::TouchEvent_obj::__new(tmp1,true,false,tmp2,tmp3,tmp4,tmp5,null(),tmp9,tmp13,tmp17,tmp21,(int)0,null(),(int)0);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(39)
	::nme::events::TouchEvent evt = tmp22;		HX_STACK_VAR(evt,"evt");
	HX_STACK_LINE(40)
	int tmp23 = inEvent->get_ref().x;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(40)
	evt->stageX = tmp23;
	HX_STACK_LINE(41)
	int tmp24 = inEvent->get_ref().y;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(41)
	evt->stageY = tmp24;
	HX_STACK_LINE(42)
	::nme::display::InteractiveObject tmp25 = inTarget;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(42)
	evt->set_target(tmp25);
	HX_STACK_LINE(43)
	::nme::events::TouchEvent tmp26 = evt;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(43)
	return tmp26;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(TouchEvent_obj,nmeCreate,return )


TouchEvent_obj::TouchEvent_obj()
{
}

Dynamic TouchEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { return sizeX; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { return sizeY; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { return touchPointID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeCreateSimilar") ) { return nmeCreateSimilar_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { return isPrimaryTouchPoint; }
	}
	return super::__Field(inName,inCallProp);
}

bool TouchEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { outValue = TOUCH_END; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { outValue = TOUCH_OUT; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { outValue = TOUCH_TAP; return true;  }
		if (HX_FIELD_EQ(inName,"nmeCreate") ) { outValue = nmeCreate_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { outValue = TOUCH_MOVE; return true;  }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { outValue = TOUCH_OVER; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { outValue = TOUCH_BEGIN; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { outValue = TOUCH_ROLL_OUT; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { outValue = TOUCH_ROLL_OVER; return true;  }
	}
	return false;
}

Dynamic TouchEvent_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"sizeX") ) { sizeX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sizeY") ) { sizeY=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"touchPointID") ) { touchPointID=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"isPrimaryTouchPoint") ) { isPrimaryTouchPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool TouchEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"TOUCH_END") ) { TOUCH_END=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_OUT") ) { TOUCH_OUT=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_TAP") ) { TOUCH_TAP=ioValue.Cast< ::String >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TOUCH_MOVE") ) { TOUCH_MOVE=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"TOUCH_OVER") ) { TOUCH_OVER=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TOUCH_BEGIN") ) { TOUCH_BEGIN=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OUT") ) { TOUCH_ROLL_OUT=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"TOUCH_ROLL_OVER") ) { TOUCH_ROLL_OVER=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void TouchEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"));
	outFields->push(HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"));
	outFields->push(HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"));
	outFields->push(HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TouchEvent_obj,isPrimaryTouchPoint),HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49")},
	{hx::fsInt,(int)offsetof(TouchEvent_obj,touchPointID),HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeX),HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c")},
	{hx::fsFloat,(int)offsetof(TouchEvent_obj,sizeY),HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_BEGIN,HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_END,HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_MOVE,HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OUT,HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_OVER,HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OUT,HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_ROLL_OVER,HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9")},
	{hx::fsString,(void *) &TouchEvent_obj::TOUCH_TAP,HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("isPrimaryTouchPoint","\x29","\x3f","\x07","\x49"),
	HX_HCSTRING("touchPointID","\x2c","\xbe","\x83","\x7b"),
	HX_HCSTRING("sizeX","\x77","\x08","\xd9","\x7c"),
	HX_HCSTRING("sizeY","\x78","\x08","\xd9","\x7c"),
	HX_HCSTRING("nmeCreateSimilar","\x69","\xe3","\x6d","\xb6"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_MARK_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_BEGIN,"TOUCH_BEGIN");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_END,"TOUCH_END");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_MOVE,"TOUCH_MOVE");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OUT,"TOUCH_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_OVER,"TOUCH_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OUT,"TOUCH_ROLL_OUT");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_ROLL_OVER,"TOUCH_ROLL_OVER");
	HX_VISIT_MEMBER_NAME(TouchEvent_obj::TOUCH_TAP,"TOUCH_TAP");
};

#endif

hx::Class TouchEvent_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TOUCH_BEGIN","\x29","\xba","\x86","\x7e"),
	HX_HCSTRING("TOUCH_END","\xdb","\xef","\x2a","\x2a"),
	HX_HCSTRING("TOUCH_MOVE","\xf1","\x76","\xb1","\xc0"),
	HX_HCSTRING("TOUCH_OUT","\x8e","\x8c","\x32","\x2a"),
	HX_HCSTRING("TOUCH_OVER","\x34","\x25","\x09","\xc2"),
	HX_HCSTRING("TOUCH_ROLL_OUT","\x4c","\x73","\x76","\xde"),
	HX_HCSTRING("TOUCH_ROLL_OVER","\xb6","\x24","\x2f","\xc9"),
	HX_HCSTRING("TOUCH_TAP","\x63","\x46","\x36","\x2a"),
	HX_HCSTRING("nmeCreate","\xe2","\x6a","\xd1","\x16"),
	::String(null()) };

void TouchEvent_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.TouchEvent","\x08","\xc8","\xf7","\xd6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TouchEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &TouchEvent_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TouchEvent_obj >;
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

void TouchEvent_obj::__boot()
{
	TOUCH_BEGIN= HX_HCSTRING("touchBegin","\xea","\xcd","\xe6","\xa9");
	TOUCH_END= HX_HCSTRING("touchEnd","\x5c","\xc5","\x09","\x00");
	TOUCH_MOVE= HX_HCSTRING("touchMove","\x70","\x72","\xcd","\x0d");
	TOUCH_OUT= HX_HCSTRING("touchOut","\x0f","\x62","\x11","\x00");
	TOUCH_OVER= HX_HCSTRING("touchOver","\xb3","\x20","\x25","\x0f");
	TOUCH_ROLL_OUT= HX_HCSTRING("touchRollOut","\x12","\x0f","\x74","\x87");
	TOUCH_ROLL_OVER= HX_HCSTRING("touchRollOver","\x50","\xd6","\x19","\xfe");
	TOUCH_TAP= HX_HCSTRING("touchTap","\xe4","\x1b","\x15","\x00");
}

} // end namespace nme
} // end namespace events
