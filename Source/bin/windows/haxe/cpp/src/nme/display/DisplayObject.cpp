#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#ifndef INCLUDED_nme_display_BlendMode
#include <nme/display/BlendMode.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_LoaderInfo
#include <nme/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_nme_display_PixelSnapping
#include <nme/display/PixelSnapping.h>
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
#ifndef INCLUDED_nme_events_EventPhase
#include <nme/events/EventPhase.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_geom_ColorTransform
#include <nme/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_geom_Transform
#include <nme/geom/Transform.h>
#endif
#ifndef INCLUDED_nme_net_URLLoader
#include <nme/net/URLLoader.h>
#endif
namespace nme{
namespace display{

Void DisplayObject_obj::__construct(Dynamic inHandle,::String inType)
{
HX_STACK_FRAME("nme.display.DisplayObject","new",0xeeb7739f,"nme.display.DisplayObject.new","nme/display/DisplayObject.hx",55,0xd0c831b3)
HX_STACK_THIS(this)
HX_STACK_ARG(inHandle,"inHandle")
HX_STACK_ARG(inType,"inType")
{
	HX_STACK_LINE(56)
	this->nmeHandle = inHandle;
	HX_STACK_LINE(57)
	::nme::display::DisplayObjectContainer tmp = this->nmeParent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	if ((tmp1)){
		HX_STACK_LINE(58)
		::nme::display::DisplayObjectContainer tmp2 = this->nmeParent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		Dynamic tmp3 = tmp2->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		::nme::display::DisplayObject_obj::nme_doc_add_child(tmp3,tmp4);
	}
	HX_STACK_LINE(59)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	int tmp3 = ::nme::display::DisplayObject_obj::nme_display_object_get_id(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	this->nmeID = tmp3;
	HX_STACK_LINE(61)
	super::__construct(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(62)
	::String tmp4 = (inType + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(62)
	int tmp5 = this->nmeID;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(62)
	::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(62)
	this->set_name(tmp6);
}
;
	return null();
}

//DisplayObject_obj::~DisplayObject_obj() { }

Dynamic DisplayObject_obj::__CreateEmpty() { return  new DisplayObject_obj; }
hx::ObjectPtr< DisplayObject_obj > DisplayObject_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct(inHandle,inType);
	return _result_;}

Dynamic DisplayObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObject_obj > _result_ = new DisplayObject_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *DisplayObject_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::display::IBitmapDrawable_obj)) return operator ::nme::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

DisplayObject_obj::operator ::nme::display::IBitmapDrawable_obj *()
	{ return new ::nme::display::IBitmapDrawable_delegate_< DisplayObject_obj >(this); }
bool DisplayObject_obj::dispatchEvent( ::nme::events::Event event){
	HX_STACK_FRAME("nme.display.DisplayObject","dispatchEvent",0x038e8eff,"nme.display.DisplayObject.dispatchEvent","nme/display/DisplayObject.hx",66,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(67)
	::nme::events::Event tmp = event;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	bool tmp1 = this->nmeDispatchEvent(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(67)
	bool result = tmp1;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(69)
	bool tmp2 = event->nmeGetIsCancelled();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(69)
	if ((tmp2)){
		HX_STACK_LINE(70)
		return true;
	}
	HX_STACK_LINE(72)
	bool tmp3 = event->get_bubbles();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(72)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(72)
	if ((tmp3)){
		HX_STACK_LINE(72)
		::nme::display::DisplayObjectContainer tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(72)
		::nme::display::DisplayObjectContainer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(72)
		tmp4 = (tmp6 != null());
	}
	else{
		HX_STACK_LINE(72)
		tmp4 = false;
	}
	HX_STACK_LINE(72)
	if ((tmp4)){
		HX_STACK_LINE(74)
		::nme::display::DisplayObjectContainer tmp5 = this->get_parent();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(74)
		::nme::events::Event tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		tmp5->dispatchEvent(tmp6);
	}
	HX_STACK_LINE(77)
	bool tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(77)
	return tmp5;
}


bool DisplayObject_obj::get_hitEnabled( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_hitEnabled",0x96fd65d8,"nme.display.DisplayObject.get_hitEnabled","nme/display/DisplayObject.hx",81,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(81)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	bool tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_hit_enabled(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(81)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_hitEnabled,return )

bool DisplayObject_obj::set_hitEnabled( bool inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_hitEnabled",0xb71d4e4c,"nme.display.DisplayObject.set_hitEnabled","nme/display/DisplayObject.hx",83,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(84)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(84)
	::nme::display::DisplayObject_obj::nme_display_object_set_hit_enabled(tmp,tmp1);
	HX_STACK_LINE(85)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(85)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_hitEnabled,return )

::nme::geom::Rectangle DisplayObject_obj::getBounds( ::nme::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("nme.display.DisplayObject","getBounds",0xa37c2c2a,"nme.display.DisplayObject.getBounds","nme/display/DisplayObject.hx",89,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(90)
	::nme::geom::Rectangle tmp = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	::nme::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(91)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(91)
	Dynamic tmp2 = targetCoordinateSpace->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(91)
	::nme::geom::Rectangle tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(91)
	::nme::display::DisplayObject_obj::nme_display_object_get_bounds(tmp1,tmp2,tmp3,true);
	HX_STACK_LINE(92)
	::nme::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(92)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getBounds,return )

::nme::geom::Rectangle DisplayObject_obj::getRect( ::nme::display::DisplayObject targetCoordinateSpace){
	HX_STACK_FRAME("nme.display.DisplayObject","getRect",0x10d9ab99,"nme.display.DisplayObject.getRect","nme/display/DisplayObject.hx",96,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(targetCoordinateSpace,"targetCoordinateSpace")
	HX_STACK_LINE(97)
	::nme::geom::Rectangle tmp = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(97)
	::nme::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(98)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	Dynamic tmp2 = targetCoordinateSpace->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(98)
	::nme::geom::Rectangle tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(98)
	::nme::display::DisplayObject_obj::nme_display_object_get_bounds(tmp1,tmp2,tmp3,false);
	HX_STACK_LINE(99)
	::nme::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,getRect,return )

::nme::geom::Point DisplayObject_obj::globalToLocal( ::nme::geom::Point inGlobal){
	HX_STACK_FRAME("nme.display.DisplayObject","globalToLocal",0xa8d816cc,"nme.display.DisplayObject.globalToLocal","nme/display/DisplayObject.hx",103,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inGlobal,"inGlobal")
	HX_STACK_LINE(104)
	::nme::geom::Point tmp = inGlobal->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	::nme::geom::Point result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(105)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(105)
	::nme::geom::Point tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(105)
	::nme::display::DisplayObject_obj::nme_display_object_global_to_local(tmp1,tmp2);
	HX_STACK_LINE(106)
	::nme::geom::Point tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(106)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,globalToLocal,return )

bool DisplayObject_obj::hitTestObject( ::nme::display::DisplayObject object){
	HX_STACK_FRAME("nme.display.DisplayObject","hitTestObject",0x148e1ce3,"nme.display.DisplayObject.hitTestObject","nme/display/DisplayObject.hx",110,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(object,"object")
	HX_STACK_LINE(111)
	bool tmp = (object != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	if ((tmp1)){
		HX_STACK_LINE(111)
		::nme::display::DisplayObjectContainer tmp3 = object->get_parent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		::nme::display::DisplayObjectContainer tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::nme::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp2 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(111)
		tmp2 = false;
	}
	HX_STACK_LINE(111)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	if ((tmp2)){
		HX_STACK_LINE(111)
		::nme::display::DisplayObjectContainer tmp4 = this->get_parent();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		::nme::display::DisplayObjectContainer tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(111)
		tmp3 = false;
	}
	HX_STACK_LINE(111)
	if ((tmp3)){
		HX_STACK_LINE(113)
		::nme::geom::Transform tmp4 = this->get_transform();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		::nme::geom::Matrix tmp5 = tmp4->get_concatenatedMatrix();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		::nme::geom::Matrix currentMatrix = tmp5;		HX_STACK_VAR(currentMatrix,"currentMatrix");
		HX_STACK_LINE(114)
		::nme::geom::Transform tmp6 = object->get_transform();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		::nme::geom::Matrix tmp7 = tmp6->get_concatenatedMatrix();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		::nme::geom::Matrix targetMatrix = tmp7;		HX_STACK_VAR(targetMatrix,"targetMatrix");
		HX_STACK_LINE(116)
		::nme::geom::Point tmp8 = ::nme::geom::Point_obj::__new((int)1,(int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(116)
		::nme::geom::Point xPoint = tmp8;		HX_STACK_VAR(xPoint,"xPoint");
		HX_STACK_LINE(117)
		::nme::geom::Point tmp9 = ::nme::geom::Point_obj::__new((int)0,(int)1);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(117)
		::nme::geom::Point yPoint = tmp9;		HX_STACK_VAR(yPoint,"yPoint");
		HX_STACK_LINE(119)
		Float tmp10 = this->get_width();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		::nme::geom::Point tmp11 = xPoint;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		::nme::geom::Point tmp12 = currentMatrix->deltaTransformPoint(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(119)
		Float tmp13 = tmp12->get_length();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(119)
		Float tmp14 = (tmp10 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(119)
		Float currentWidth = tmp14;		HX_STACK_VAR(currentWidth,"currentWidth");
		HX_STACK_LINE(120)
		Float tmp15 = this->get_height();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(120)
		::nme::geom::Point tmp16 = yPoint;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(120)
		::nme::geom::Point tmp17 = currentMatrix->deltaTransformPoint(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(120)
		Float tmp18 = tmp17->get_length();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(120)
		Float tmp19 = (tmp15 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(120)
		Float currentHeight = tmp19;		HX_STACK_VAR(currentHeight,"currentHeight");
		HX_STACK_LINE(121)
		Float tmp20 = object->get_width();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(121)
		::nme::geom::Point tmp21 = xPoint;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(121)
		::nme::geom::Point tmp22 = targetMatrix->deltaTransformPoint(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(121)
		Float tmp23 = tmp22->get_length();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(121)
		Float tmp24 = (tmp20 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(121)
		Float targetWidth = tmp24;		HX_STACK_VAR(targetWidth,"targetWidth");
		HX_STACK_LINE(122)
		Float tmp25 = object->get_height();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(122)
		::nme::geom::Point tmp26 = yPoint;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(122)
		::nme::geom::Point tmp27 = targetMatrix->deltaTransformPoint(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(122)
		Float tmp28 = tmp27->get_length();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(122)
		Float tmp29 = (tmp25 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(122)
		Float targetHeight = tmp29;		HX_STACK_VAR(targetHeight,"targetHeight");
		HX_STACK_LINE(124)
		::nme::geom::Rectangle tmp30 = ::nme::geom::Rectangle_obj::__new(currentMatrix->tx,currentMatrix->ty,currentWidth,currentHeight);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(124)
		::nme::geom::Rectangle currentRect = tmp30;		HX_STACK_VAR(currentRect,"currentRect");
		HX_STACK_LINE(125)
		::nme::geom::Rectangle tmp31 = ::nme::geom::Rectangle_obj::__new(targetMatrix->tx,targetMatrix->ty,targetWidth,targetHeight);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(125)
		::nme::geom::Rectangle targetRect = tmp31;		HX_STACK_VAR(targetRect,"targetRect");
		HX_STACK_LINE(127)
		::nme::geom::Rectangle tmp32 = targetRect;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(127)
		bool tmp33 = currentRect->intersects(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(127)
		return tmp33;
	}
	HX_STACK_LINE(130)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,hitTestObject,return )

bool DisplayObject_obj::hitTestPoint( Float x,Float y,hx::Null< bool >  __o_shapeFlag){
bool shapeFlag = __o_shapeFlag.Default(false);
	HX_STACK_FRAME("nme.display.DisplayObject","hitTestPoint",0x4e0526ac,"nme.display.DisplayObject.hitTestPoint","nme/display/DisplayObject.hx",134,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
{
		HX_STACK_LINE(135)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		Float tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		Float tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		bool tmp3 = shapeFlag;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		bool tmp4 = ::nme::display::DisplayObject_obj::nme_display_object_hit_test_point(tmp,tmp1,tmp2,tmp3,true);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(135)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(DisplayObject_obj,hitTestPoint,return )

::nme::geom::Point DisplayObject_obj::localToGlobal( ::nme::geom::Point inLocal){
	HX_STACK_FRAME("nme.display.DisplayObject","localToGlobal",0x851509c8,"nme.display.DisplayObject.localToGlobal","nme/display/DisplayObject.hx",139,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inLocal,"inLocal")
	HX_STACK_LINE(140)
	::nme::geom::Point tmp = inLocal->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::nme::geom::Point result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(141)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(141)
	::nme::geom::Point tmp2 = result;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(141)
	::nme::display::DisplayObject_obj::nme_display_object_local_to_global(tmp1,tmp2);
	HX_STACK_LINE(142)
	::nme::geom::Point tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(142)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,localToGlobal,return )

::nme::display::InteractiveObject DisplayObject_obj::nmeAsInteractiveObject( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeAsInteractiveObject",0xf74e456a,"nme.display.DisplayObject.nmeAsInteractiveObject","nme/display/DisplayObject.hx",146,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(146)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeAsInteractiveObject,return )

Void DisplayObject_obj::nmeBroadcast( ::nme::events::Event inEvt){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeBroadcast",0xe7260fbc,"nme.display.DisplayObject.nmeBroadcast","nme/display/DisplayObject.hx",149,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvt,"inEvt")
		HX_STACK_LINE(150)
		::nme::events::Event tmp = inEvt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		this->nmeDispatchEvent(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeBroadcast,(void))

bool DisplayObject_obj::nmeDispatchEvent( ::nme::events::Event inEvt){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeDispatchEvent",0xb705ad3b,"nme.display.DisplayObject.nmeDispatchEvent","nme/display/DisplayObject.hx",153,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inEvt,"inEvt")
	HX_STACK_LINE(154)
	Dynamic tmp = inEvt->get_target();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	if ((tmp1)){
		HX_STACK_LINE(156)
		inEvt->set_target(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(159)
	inEvt->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(160)
	::nme::events::Event tmp2 = inEvt;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(160)
	bool tmp3 = this->super::dispatchEvent(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(160)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeDispatchEvent,return )

Void DisplayObject_obj::nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeDrawToSurface",0xdca59789,"nme.display.DisplayObject.nmeDrawToSurface","nme/display/DisplayObject.hx",163,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inSurface,"inSurface")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_ARG(smoothing,"smoothing")
		HX_STACK_LINE(165)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		Dynamic tmp1 = inSurface;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		::nme::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		::String tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(165)
		::nme::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(165)
		::nme::display::DisplayObject_obj::nme_display_object_draw_to_surface(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DisplayObject_obj,nmeDrawToSurface,(void))

::nme::display::DisplayObject DisplayObject_obj::nmeFindByID( int inID){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeFindByID",0x0e95c9f0,"nme.display.DisplayObject.nmeFindByID","nme/display/DisplayObject.hx",168,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inID,"inID")
	HX_STACK_LINE(169)
	int tmp = this->nmeID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(169)
	int tmp1 = inID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(169)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(169)
	if ((tmp2)){
		HX_STACK_LINE(170)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(171)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFindByID,return )

Void DisplayObject_obj::nmeFireEvent( ::nme::events::Event inEvt){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeFireEvent",0x79799d3f,"nme.display.DisplayObject.nmeFireEvent","nme/display/DisplayObject.hx",174,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvt,"inEvt")
		HX_STACK_LINE(175)
		Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
		HX_STACK_LINE(177)
		::nme::display::DisplayObjectContainer tmp = this->nmeParent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		if ((tmp1)){
			HX_STACK_LINE(178)
			::nme::display::DisplayObjectContainer tmp2 = this->nmeParent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(178)
			tmp2->nmeGetInteractiveObjectStack(stack);
		}
		HX_STACK_LINE(180)
		int l = stack->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(182)
		bool tmp2 = (l > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(182)
		if ((tmp2)){
			HX_STACK_LINE(185)
			int tmp3 = ::nme::events::EventPhase_obj::CAPTURING_PHASE;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(185)
			inEvt->nmeSetPhase(tmp3);
			HX_STACK_LINE(186)
			stack->reverse();
			HX_STACK_LINE(188)
			{
				HX_STACK_LINE(188)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(188)
				while((true)){
					HX_STACK_LINE(188)
					bool tmp4 = (_g < stack->length);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(188)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(188)
					if ((tmp5)){
						HX_STACK_LINE(188)
						break;
					}
					HX_STACK_LINE(188)
					::nme::display::InteractiveObject tmp6 = stack->__get(_g).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(188)
					::nme::display::InteractiveObject obj = tmp6;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(188)
					++(_g);
					HX_STACK_LINE(190)
					::nme::display::InteractiveObject tmp7 = obj;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(190)
					inEvt->set_currentTarget(tmp7);
					HX_STACK_LINE(191)
					::nme::events::Event tmp8 = inEvt;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(191)
					obj->nmeDispatchEvent(tmp8);
					HX_STACK_LINE(193)
					bool tmp9 = inEvt->nmeGetIsCancelled();		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(193)
					if ((tmp9)){
						HX_STACK_LINE(194)
						return null();
					}
				}
			}
		}
		HX_STACK_LINE(199)
		int tmp3 = ::nme::events::EventPhase_obj::AT_TARGET;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		inEvt->nmeSetPhase(tmp3);
		HX_STACK_LINE(200)
		inEvt->set_currentTarget(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(201)
		::nme::events::Event tmp4 = inEvt;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(201)
		this->nmeDispatchEvent(tmp4);
		HX_STACK_LINE(203)
		bool tmp5 = inEvt->nmeGetIsCancelled();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(203)
		if ((tmp5)){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(207)
		bool tmp6 = inEvt->get_bubbles();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		if ((tmp6)){
			HX_STACK_LINE(209)
			int tmp7 = ::nme::events::EventPhase_obj::BUBBLING_PHASE;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(209)
			inEvt->nmeSetPhase(tmp7);
			HX_STACK_LINE(210)
			stack->reverse();
			HX_STACK_LINE(212)
			{
				HX_STACK_LINE(212)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				while((true)){
					HX_STACK_LINE(212)
					bool tmp8 = (_g < stack->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(212)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(212)
					if ((tmp9)){
						HX_STACK_LINE(212)
						break;
					}
					HX_STACK_LINE(212)
					::nme::display::InteractiveObject tmp10 = stack->__get(_g).StaticCast< ::nme::display::InteractiveObject >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(212)
					::nme::display::InteractiveObject obj = tmp10;		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(212)
					++(_g);
					HX_STACK_LINE(214)
					::nme::display::InteractiveObject tmp11 = obj;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(214)
					inEvt->set_currentTarget(tmp11);
					HX_STACK_LINE(215)
					::nme::events::Event tmp12 = inEvt;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(215)
					obj->nmeDispatchEvent(tmp12);
					HX_STACK_LINE(217)
					bool tmp13 = inEvt->nmeGetIsCancelled();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(217)
					if ((tmp13)){
						HX_STACK_LINE(218)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeFireEvent,(void))

::nme::geom::ColorTransform DisplayObject_obj::nmeGetColorTransform( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeGetColorTransform",0x0263a67a,"nme.display.DisplayObject.nmeGetColorTransform","nme/display/DisplayObject.hx",223,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(224)
	::nme::geom::ColorTransform tmp = ::nme::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(224)
	::nme::geom::ColorTransform trans = tmp;		HX_STACK_VAR(trans,"trans");
	HX_STACK_LINE(225)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	::nme::geom::ColorTransform tmp2 = trans;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	::nme::display::DisplayObject_obj::nme_display_object_get_color_transform(tmp1,tmp2,false);
	HX_STACK_LINE(226)
	::nme::geom::ColorTransform tmp3 = trans;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(226)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetColorTransform,return )

::nme::geom::ColorTransform DisplayObject_obj::nmeGetConcatenatedColorTransform( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeGetConcatenatedColorTransform",0x0431dd69,"nme.display.DisplayObject.nmeGetConcatenatedColorTransform","nme/display/DisplayObject.hx",229,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(230)
	::nme::geom::ColorTransform tmp = ::nme::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(230)
	::nme::geom::ColorTransform trans = tmp;		HX_STACK_VAR(trans,"trans");
	HX_STACK_LINE(231)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(231)
	::nme::geom::ColorTransform tmp2 = trans;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(231)
	::nme::display::DisplayObject_obj::nme_display_object_get_color_transform(tmp1,tmp2,true);
	HX_STACK_LINE(232)
	::nme::geom::ColorTransform tmp3 = trans;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(232)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedColorTransform,return )

::nme::geom::Matrix DisplayObject_obj::nmeGetConcatenatedMatrix( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeGetConcatenatedMatrix",0x6a515c21,"nme.display.DisplayObject.nmeGetConcatenatedMatrix","nme/display/DisplayObject.hx",235,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	::nme::geom::Matrix tmp = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::nme::geom::Matrix mtx = tmp;		HX_STACK_VAR(mtx,"mtx");
	HX_STACK_LINE(237)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(237)
	::nme::geom::Matrix tmp2 = mtx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	::nme::display::DisplayObject_obj::nme_display_object_get_matrix(tmp1,tmp2,true);
	HX_STACK_LINE(238)
	::nme::geom::Matrix tmp3 = mtx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(238)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetConcatenatedMatrix,return )

Void DisplayObject_obj::nmeGetInteractiveObjectStack( Array< ::Dynamic > outStack){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeGetInteractiveObjectStack",0x67b76d38,"nme.display.DisplayObject.nmeGetInteractiveObjectStack","nme/display/DisplayObject.hx",241,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(outStack,"outStack")
		HX_STACK_LINE(242)
		::nme::display::InteractiveObject tmp = this->nmeAsInteractiveObject();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(242)
		::nme::display::InteractiveObject io = tmp;		HX_STACK_VAR(io,"io");
		HX_STACK_LINE(244)
		bool tmp1 = (io != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(244)
		if ((tmp1)){
			HX_STACK_LINE(245)
			::nme::display::InteractiveObject tmp2 = io;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(245)
			outStack->push(tmp2);
		}
		HX_STACK_LINE(247)
		::nme::display::DisplayObjectContainer tmp2 = this->nmeParent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		if ((tmp3)){
			HX_STACK_LINE(248)
			::nme::display::DisplayObjectContainer tmp4 = this->nmeParent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(248)
			tmp4->nmeGetInteractiveObjectStack(outStack);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeGetInteractiveObjectStack,(void))

::nme::geom::Matrix DisplayObject_obj::nmeGetMatrix( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeGetMatrix",0x402b2c32,"nme.display.DisplayObject.nmeGetMatrix","nme/display/DisplayObject.hx",251,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(252)
	::nme::geom::Matrix tmp = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(252)
	::nme::geom::Matrix mtx = tmp;		HX_STACK_VAR(mtx,"mtx");
	HX_STACK_LINE(253)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(253)
	::nme::geom::Matrix tmp2 = mtx;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(253)
	::nme::display::DisplayObject_obj::nme_display_object_get_matrix(tmp1,tmp2,false);
	HX_STACK_LINE(254)
	::nme::geom::Matrix tmp3 = mtx;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(254)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetMatrix,return )

Void DisplayObject_obj::nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeGetObjectsUnderPoint",0x655d37bb,"nme.display.DisplayObject.nmeGetObjectsUnderPoint","nme/display/DisplayObject.hx",257,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(258)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(258)
		Float tmp1 = point->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(258)
		Float tmp2 = point->y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(258)
		bool tmp3 = ::nme::display::DisplayObject_obj::nme_display_object_hit_test_point(tmp,tmp1,tmp2,true,false);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(258)
		if ((tmp3)){
			HX_STACK_LINE(259)
			result->push(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeGetObjectsUnderPoint,(void))

::nme::geom::Rectangle DisplayObject_obj::nmeGetPixelBounds( ){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeGetPixelBounds",0xfb714a0a,"nme.display.DisplayObject.nmeGetPixelBounds","nme/display/DisplayObject.hx",262,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(263)
	::nme::geom::Rectangle tmp = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(263)
	::nme::geom::Rectangle rect = tmp;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(264)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(264)
	::nme::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(264)
	::nme::display::DisplayObject_obj::nme_display_object_get_pixel_bounds(tmp1,tmp2);
	HX_STACK_LINE(265)
	::nme::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,nmeGetPixelBounds,return )

Void DisplayObject_obj::nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeOnAdded",0xa793ab1c,"nme.display.DisplayObject.nmeOnAdded","nme/display/DisplayObject.hx",268,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inIsOnStage,"inIsOnStage")
		HX_STACK_LINE(269)
		bool tmp = (inObj == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(269)
		if ((tmp)){
			HX_STACK_LINE(271)
			::String tmp1 = ::nme::events::Event_obj::ADDED;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(271)
			::nme::events::Event tmp2 = ::nme::events::Event_obj::__new(tmp1,true,false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(271)
			::nme::events::Event evt = tmp2;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(272)
			::nme::display::DisplayObject tmp3 = inObj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(272)
			evt->set_target(tmp3);
			HX_STACK_LINE(273)
			::nme::events::Event tmp4 = evt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(273)
			this->dispatchEvent(tmp4);
		}
		HX_STACK_LINE(276)
		bool tmp1 = inIsOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(276)
		if ((tmp1)){
			HX_STACK_LINE(278)
			::String tmp2 = ::nme::events::Event_obj::ADDED_TO_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(278)
			::nme::events::Event tmp3 = ::nme::events::Event_obj::__new(tmp2,false,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(278)
			::nme::events::Event evt = tmp3;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(279)
			::nme::display::DisplayObject tmp4 = inObj;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			evt->set_target(tmp4);
			HX_STACK_LINE(280)
			::nme::events::Event tmp5 = evt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(280)
			this->dispatchEvent(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnAdded,(void))

Void DisplayObject_obj::nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeOnRemoved",0xd2b744fc,"nme.display.DisplayObject.nmeOnRemoved","nme/display/DisplayObject.hx",284,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inWasOnStage,"inWasOnStage")
		HX_STACK_LINE(285)
		bool tmp = (inObj == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(285)
		if ((tmp)){
			HX_STACK_LINE(287)
			::String tmp1 = ::nme::events::Event_obj::REMOVED;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(287)
			::nme::events::Event tmp2 = ::nme::events::Event_obj::__new(tmp1,true,false);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(287)
			::nme::events::Event evt = tmp2;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(288)
			::nme::display::DisplayObject tmp3 = inObj;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(288)
			evt->set_target(tmp3);
			HX_STACK_LINE(289)
			::nme::events::Event tmp4 = evt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(289)
			this->dispatchEvent(tmp4);
		}
		HX_STACK_LINE(292)
		bool tmp1 = inWasOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(292)
		if ((tmp1)){
			HX_STACK_LINE(294)
			::String tmp2 = ::nme::events::Event_obj::REMOVED_FROM_STAGE;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(294)
			::nme::events::Event tmp3 = ::nme::events::Event_obj::__new(tmp2,false,false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			::nme::events::Event evt = tmp3;		HX_STACK_VAR(evt,"evt");
			HX_STACK_LINE(295)
			::nme::display::DisplayObject tmp4 = inObj;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(295)
			evt->set_target(tmp4);
			HX_STACK_LINE(296)
			::nme::events::Event tmp5 = evt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(296)
			this->dispatchEvent(tmp5);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObject_obj,nmeOnRemoved,(void))

Void DisplayObject_obj::nmeSetColorTransform( ::nme::geom::ColorTransform inTrans){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeSetColorTransform",0x25d17e86,"nme.display.DisplayObject.nmeSetColorTransform","nme/display/DisplayObject.hx",300,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTrans,"inTrans")
		HX_STACK_LINE(301)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(301)
		::nme::geom::ColorTransform tmp1 = inTrans;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(301)
		::nme::display::DisplayObject_obj::nme_display_object_set_color_transform(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetColorTransform,(void))

Void DisplayObject_obj::nmeSetMatrix( ::nme::geom::Matrix inMatrix){
{
		HX_STACK_FRAME("nme.display.DisplayObject","nmeSetMatrix",0x237c183e,"nme.display.DisplayObject.nmeSetMatrix","nme/display/DisplayObject.hx",304,0xd0c831b3)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inMatrix,"inMatrix")
		HX_STACK_LINE(305)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		::nme::geom::Matrix tmp1 = inMatrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(305)
		::nme::display::DisplayObject_obj::nme_display_object_set_matrix(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetMatrix,(void))

::nme::display::DisplayObjectContainer DisplayObject_obj::nmeSetParent( ::nme::display::DisplayObjectContainer inParent){
	HX_STACK_FRAME("nme.display.DisplayObject","nmeSetParent",0x5531e727,"nme.display.DisplayObject.nmeSetParent","nme/display/DisplayObject.hx",308,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inParent,"inParent")
	HX_STACK_LINE(309)
	::nme::display::DisplayObjectContainer tmp = inParent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	::nme::display::DisplayObjectContainer tmp1 = this->nmeParent;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(309)
	if ((tmp2)){
		HX_STACK_LINE(310)
		::nme::display::DisplayObjectContainer tmp3 = inParent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		return tmp3;
	}
	HX_STACK_LINE(312)
	::nme::display::DisplayObjectContainer tmp3 = this->nmeParent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(312)
	bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(312)
	if ((tmp4)){
		HX_STACK_LINE(313)
		::nme::display::DisplayObjectContainer tmp5 = this->nmeParent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		tmp5->nmeRemoveChildFromArray(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(315)
	Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(315)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(315)
	if ((tmp6)){
		HX_STACK_LINE(318)
		this->nmeParent = inParent;
	}
	else{
		HX_STACK_LINE(320)
		::nme::display::DisplayObjectContainer tmp7 = this->nmeParent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(320)
		bool tmp8 = (tmp7 == null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(320)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(320)
		if ((tmp8)){
			HX_STACK_LINE(320)
			tmp9 = (inParent != null());
		}
		else{
			HX_STACK_LINE(320)
			tmp9 = false;
		}
		HX_STACK_LINE(320)
		if ((tmp9)){
			HX_STACK_LINE(322)
			this->nmeParent = inParent;
			HX_STACK_LINE(323)
			::nme::display::Stage tmp10 = this->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(323)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(323)
			this->nmeOnAdded(hx::ObjectPtr<OBJ_>(this),tmp11);
		}
		else{
			HX_STACK_LINE(325)
			::nme::display::DisplayObjectContainer tmp10 = this->nmeParent;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(325)
			bool tmp11 = (tmp10 != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(325)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(325)
			if ((tmp11)){
				HX_STACK_LINE(325)
				tmp12 = (inParent == null());
			}
			else{
				HX_STACK_LINE(325)
				tmp12 = false;
			}
			HX_STACK_LINE(325)
			if ((tmp12)){
				HX_STACK_LINE(327)
				::nme::display::Stage tmp13 = this->get_stage();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(327)
				bool tmp14 = (tmp13 != null());		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(327)
				bool was_on_stage = tmp14;		HX_STACK_VAR(was_on_stage,"was_on_stage");
				HX_STACK_LINE(328)
				this->nmeParent = inParent;
				HX_STACK_LINE(329)
				bool tmp15 = was_on_stage;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(329)
				this->nmeOnRemoved(hx::ObjectPtr<OBJ_>(this),tmp15);
			}
			else{
				HX_STACK_LINE(333)
				this->nmeParent = inParent;
			}
		}
	}
	HX_STACK_LINE(336)
	::nme::display::DisplayObjectContainer tmp7 = inParent;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(336)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,nmeSetParent,return )

::String DisplayObject_obj::toString( ){
	HX_STACK_FRAME("nme.display.DisplayObject","toString",0x9f78090d,"nme.display.DisplayObject.toString","nme/display/DisplayObject.hx",340,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(341)
	::String tmp = this->get_name();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(341)
	return tmp;
}


Float DisplayObject_obj::get_alpha( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_alpha",0x26482034,"nme.display.DisplayObject.get_alpha","nme/display/DisplayObject.hx",345,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(345)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(345)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_alpha(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(345)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_alpha,return )

Float DisplayObject_obj::set_alpha( Float inAlpha){
	HX_STACK_FRAME("nme.display.DisplayObject","set_alpha",0x09990c40,"nme.display.DisplayObject.set_alpha","nme/display/DisplayObject.hx",347,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inAlpha,"inAlpha")
	HX_STACK_LINE(348)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(348)
	Float tmp1 = inAlpha;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(348)
	::nme::display::DisplayObject_obj::nme_display_object_set_alpha(tmp,tmp1);
	HX_STACK_LINE(349)
	Float tmp2 = inAlpha;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(349)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_alpha,return )

Dynamic DisplayObject_obj::get_opaqueBackground( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_opaqueBackground",0x12fee319,"nme.display.DisplayObject.get_opaqueBackground","nme/display/DisplayObject.hx",353,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(354)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(354)
	int tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_bg(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(354)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(355)
	int tmp2 = (int(i) & int((int)16777216));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(355)
	bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(355)
	if ((tmp3)){
		HX_STACK_LINE(356)
		return null();
	}
	HX_STACK_LINE(358)
	int tmp4 = (int(i) & int((int)16777215));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(358)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_opaqueBackground,return )

Dynamic DisplayObject_obj::set_opaqueBackground( Dynamic inBG){
	HX_STACK_FRAME("nme.display.DisplayObject","set_opaqueBackground",0xdfb69a8d,"nme.display.DisplayObject.set_opaqueBackground","nme/display/DisplayObject.hx",362,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBG,"inBG")
	HX_STACK_LINE(363)
	bool tmp = (inBG == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(363)
	if ((tmp)){
		HX_STACK_LINE(364)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(364)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(tmp1,(int)0);
	}
	else{
		HX_STACK_LINE(366)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(366)
		Dynamic tmp2 = inBG;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(366)
		::nme::display::DisplayObject_obj::nme_display_object_set_bg(tmp1,tmp2);
	}
	HX_STACK_LINE(368)
	Dynamic tmp1 = inBG;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_opaqueBackground,return )

::nme::display::BlendMode DisplayObject_obj::get_blendMode( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_blendMode",0x0ac5802a,"nme.display.DisplayObject.get_blendMode","nme/display/DisplayObject.hx",372,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(373)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(373)
	int tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_blend_mode(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(373)
	int i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(374)
	int tmp2 = i;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(374)
	::nme::display::BlendMode tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::BlendMode >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(374)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_blendMode,return )

::nme::display::BlendMode DisplayObject_obj::set_blendMode( ::nme::display::BlendMode inMode){
	HX_STACK_FRAME("nme.display.DisplayObject","set_blendMode",0x4fcb6236,"nme.display.DisplayObject.set_blendMode","nme/display/DisplayObject.hx",378,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMode,"inMode")
	HX_STACK_LINE(379)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(379)
	::nme::display::DisplayObject_obj::nme_display_object_set_blend_mode(tmp,inMode->__Index());
	HX_STACK_LINE(380)
	::nme::display::BlendMode tmp1 = inMode;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(380)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_blendMode,return )

bool DisplayObject_obj::get_cacheAsBitmap( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_cacheAsBitmap",0x86c6c1b9,"nme.display.DisplayObject.get_cacheAsBitmap","nme/display/DisplayObject.hx",383,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(383)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(383)
	bool tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_cache_as_bitmap(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(383)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_cacheAsBitmap,return )

bool DisplayObject_obj::set_cacheAsBitmap( bool inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_cacheAsBitmap",0xaa3499c5,"nme.display.DisplayObject.set_cacheAsBitmap","nme/display/DisplayObject.hx",385,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(386)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(386)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(386)
	::nme::display::DisplayObject_obj::nme_display_object_set_cache_as_bitmap(tmp,tmp1);
	HX_STACK_LINE(387)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(387)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_cacheAsBitmap,return )

bool DisplayObject_obj::get_pedanticBitmapCaching( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_pedanticBitmapCaching",0x111349f4,"nme.display.DisplayObject.get_pedanticBitmapCaching","nme/display/DisplayObject.hx",390,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(390)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(390)
	bool tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(390)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_pedanticBitmapCaching,return )

bool DisplayObject_obj::set_pedanticBitmapCaching( bool inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_pedanticBitmapCaching",0x7d6a0e00,"nme.display.DisplayObject.set_pedanticBitmapCaching","nme/display/DisplayObject.hx",392,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(393)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(393)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(393)
	::nme::display::DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching(tmp,tmp1);
	HX_STACK_LINE(394)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_pedanticBitmapCaching,return )

::nme::display::PixelSnapping DisplayObject_obj::get_pixelSnapping( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_pixelSnapping",0xd558ed38,"nme.display.DisplayObject.get_pixelSnapping","nme/display/DisplayObject.hx",398,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(399)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(399)
	int tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_pixel_snapping(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(399)
	int val = tmp1;		HX_STACK_VAR(val,"val");
	HX_STACK_LINE(400)
	int tmp2 = val;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(400)
	::nme::display::PixelSnapping tmp3 = ::Type_obj::createEnumIndex(hx::ClassOf< ::nme::display::PixelSnapping >(),tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_pixelSnapping,return )

::nme::display::PixelSnapping DisplayObject_obj::set_pixelSnapping( ::nme::display::PixelSnapping inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_pixelSnapping",0xf8c6c544,"nme.display.DisplayObject.set_pixelSnapping","nme/display/DisplayObject.hx",404,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(405)
	bool tmp = (inVal == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	if ((tmp)){
		HX_STACK_LINE(407)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(407)
		::nme::display::DisplayObject_obj::nme_display_object_set_pixel_snapping(tmp1,(int)0);
	}
	else{
		HX_STACK_LINE(411)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		::nme::display::DisplayObject_obj::nme_display_object_set_pixel_snapping(tmp1,inVal->__Index());
	}
	HX_STACK_LINE(414)
	::nme::display::PixelSnapping tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(414)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_pixelSnapping,return )

cpp::ArrayBase DisplayObject_obj::get_filters( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_filters",0xb7e87c11,"nme.display.DisplayObject.get_filters","nme/display/DisplayObject.hx",418,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(419)
	bool tmp = (this->nmeFilters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(419)
	if ((tmp)){
		HX_STACK_LINE(419)
		return cpp::ArrayBase_obj::__new();
	}
	HX_STACK_LINE(421)
	cpp::ArrayBase result = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(423)
	{
		HX_STACK_LINE(423)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(423)
		cpp::ArrayBase _g1 = this->nmeFilters;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(423)
		while((true)){
			HX_STACK_LINE(423)
			bool tmp1 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(423)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(423)
			if ((tmp2)){
				HX_STACK_LINE(423)
				break;
			}
			HX_STACK_LINE(423)
			Dynamic tmp3 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(423)
			Dynamic filter = tmp3;		HX_STACK_VAR(filter,"filter");
			HX_STACK_LINE(423)
			++(_g);
			HX_STACK_LINE(424)
			Dynamic tmp4 = filter->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(424)
			result->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
		}
	}
	HX_STACK_LINE(426)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_filters,return )

cpp::ArrayBase DisplayObject_obj::set_filters( cpp::ArrayBase inFilters){
	HX_STACK_FRAME("nme.display.DisplayObject","set_filters",0xc255831d,"nme.display.DisplayObject.set_filters","nme/display/DisplayObject.hx",430,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFilters,"inFilters")
	HX_STACK_LINE(431)
	bool tmp = (inFilters == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(431)
	if ((tmp)){
		HX_STACK_LINE(433)
		this->nmeFilters = null();
	}
	else{
		HX_STACK_LINE(437)
		this->nmeFilters = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(439)
			while((true)){
				HX_STACK_LINE(439)
				bool tmp1 = (_g < inFilters->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(439)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(439)
				if ((tmp2)){
					HX_STACK_LINE(439)
					break;
				}
				HX_STACK_LINE(439)
				Dynamic tmp3 = inFilters->__GetItem(_g);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(439)
				Dynamic filter = tmp3;		HX_STACK_VAR(filter,"filter");
				HX_STACK_LINE(439)
				++(_g);
				HX_STACK_LINE(440)
				Dynamic tmp4 = filter->__Field(HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"), hx::paccDynamic )();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(440)
				this->nmeFilters->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp4);
			}
		}
	}
	HX_STACK_LINE(443)
	Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	::nme::display::DisplayObject_obj::nme_display_object_set_filters(tmp1,this->nmeFilters);
	HX_STACK_LINE(445)
	return inFilters;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_filters,return )

::nme::display::Graphics DisplayObject_obj::get_graphics( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_graphics",0x316529b5,"nme.display.DisplayObject.get_graphics","nme/display/DisplayObject.hx",449,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(450)
	::nme::display::Graphics tmp = this->nmeGraphicsCache;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	if ((tmp1)){
		HX_STACK_LINE(451)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(451)
		Dynamic tmp3 = ::nme::display::DisplayObject_obj::nme_display_object_get_graphics(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(451)
		::nme::display::Graphics tmp4 = ::nme::display::Graphics_obj::__new(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(451)
		this->nmeGraphicsCache = tmp4;
	}
	HX_STACK_LINE(453)
	::nme::display::Graphics tmp2 = this->nmeGraphicsCache;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(453)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_graphics,return )

Float DisplayObject_obj::get_height( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_height",0x18e44a51,"nme.display.DisplayObject.get_height","nme/display/DisplayObject.hx",456,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(456)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(456)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(456)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_height,return )

Float DisplayObject_obj::set_height( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_height",0x1c61e8c5,"nme.display.DisplayObject.set_height","nme/display/DisplayObject.hx",458,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(459)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(459)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(459)
	::nme::display::DisplayObject_obj::nme_display_object_set_height(tmp,tmp1);
	HX_STACK_LINE(460)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(460)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_height,return )

::nme::display::DisplayObject DisplayObject_obj::set_mask( ::nme::display::DisplayObject inObject){
	HX_STACK_FRAME("nme.display.DisplayObject","set_mask",0xdd778e4a,"nme.display.DisplayObject.set_mask","nme/display/DisplayObject.hx",464,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inObject,"inObject")
	HX_STACK_LINE(465)
	this->mask = inObject;
	HX_STACK_LINE(466)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(466)
	bool tmp1 = (inObject == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(466)
	Dynamic tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(466)
	if ((tmp1)){
		HX_STACK_LINE(466)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(466)
		tmp2 = inObject->nmeHandle;
	}
	HX_STACK_LINE(466)
	::nme::display::DisplayObject_obj::nme_display_object_set_mask(tmp,tmp2);
	HX_STACK_LINE(467)
	::nme::display::DisplayObject tmp3 = inObject;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(467)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_mask,return )

Float DisplayObject_obj::get_mouseX( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_mouseX",0xe2a68cfd,"nme.display.DisplayObject.get_mouseX","nme/display/DisplayObject.hx",470,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(470)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(470)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_mouse_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseX,return )

Float DisplayObject_obj::get_mouseY( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_mouseY",0xe2a68cfe,"nme.display.DisplayObject.get_mouseY","nme/display/DisplayObject.hx",471,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(471)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(471)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_mouse_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(471)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_mouseY,return )

::String DisplayObject_obj::get_name( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_name",0x2fc36635,"nme.display.DisplayObject.get_name","nme/display/DisplayObject.hx",473,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(473)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(473)
	::String tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_name(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(473)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_name,return )

::String DisplayObject_obj::set_name( ::String inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_name",0xde20bfa9,"nme.display.DisplayObject.set_name","nme/display/DisplayObject.hx",475,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(476)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(476)
	::String tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(476)
	::nme::display::DisplayObject_obj::nme_display_object_set_name(tmp,tmp1);
	HX_STACK_LINE(477)
	::String tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(477)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_name,return )

::nme::display::DisplayObjectContainer DisplayObject_obj::get_parent( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_parent",0x04164794,"nme.display.DisplayObject.get_parent","nme/display/DisplayObject.hx",480,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(480)
	::nme::display::DisplayObjectContainer tmp = this->nmeParent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(480)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_parent,return )

Float DisplayObject_obj::get_rotation( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_rotation",0x27836e28,"nme.display.DisplayObject.get_rotation","nme/display/DisplayObject.hx",482,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(482)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_rotation(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_rotation,return )

Float DisplayObject_obj::set_rotation( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_rotation",0x3c7c919c,"nme.display.DisplayObject.set_rotation","nme/display/DisplayObject.hx",484,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(485)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(485)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(485)
	::nme::display::DisplayObject_obj::nme_display_object_set_rotation(tmp,tmp1);
	HX_STACK_LINE(486)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(486)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_rotation,return )

::nme::geom::Rectangle DisplayObject_obj::get_scale9Grid( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_scale9Grid",0x4c7d103f,"nme.display.DisplayObject.get_scale9Grid","nme/display/DisplayObject.hx",489,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(489)
	::nme::geom::Rectangle tmp = this->nmeScale9Grid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(489)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	::nme::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(489)
	if ((tmp1)){
		HX_STACK_LINE(489)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(489)
		::nme::geom::Rectangle tmp3 = this->nmeScale9Grid;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(489)
		tmp2 = tmp3->clone();
	}
	HX_STACK_LINE(489)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scale9Grid,return )

::nme::geom::Rectangle DisplayObject_obj::set_scale9Grid( ::nme::geom::Rectangle inRect){
	HX_STACK_FRAME("nme.display.DisplayObject","set_scale9Grid",0x6c9cf8b3,"nme.display.DisplayObject.set_scale9Grid","nme/display/DisplayObject.hx",491,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inRect,"inRect")
	HX_STACK_LINE(492)
	bool tmp = (inRect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(492)
	::nme::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(492)
	if ((tmp)){
		HX_STACK_LINE(492)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(492)
		tmp1 = inRect->clone();
	}
	HX_STACK_LINE(492)
	this->nmeScale9Grid = tmp1;
	HX_STACK_LINE(493)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(493)
	::nme::geom::Rectangle tmp3 = this->nmeScale9Grid;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(493)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale9_grid(tmp2,tmp3);
	HX_STACK_LINE(494)
	::nme::geom::Rectangle tmp4 = inRect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(494)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scale9Grid,return )

Float DisplayObject_obj::get_scaleX( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_scaleX",0x52be2cf8,"nme.display.DisplayObject.get_scaleX","nme/display/DisplayObject.hx",497,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(497)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(497)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_scale_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(497)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleX,return )

Float DisplayObject_obj::set_scaleX( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_scaleX",0x563bcb6c,"nme.display.DisplayObject.set_scaleX","nme/display/DisplayObject.hx",499,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(500)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(500)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(500)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale_x(tmp,tmp1);
	HX_STACK_LINE(501)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(501)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleX,return )

Float DisplayObject_obj::get_scaleY( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_scaleY",0x52be2cf9,"nme.display.DisplayObject.get_scaleY","nme/display/DisplayObject.hx",504,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(504)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(504)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_scale_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(504)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scaleY,return )

Float DisplayObject_obj::set_scaleY( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_scaleY",0x563bcb6d,"nme.display.DisplayObject.set_scaleY","nme/display/DisplayObject.hx",506,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(507)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(507)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(507)
	::nme::display::DisplayObject_obj::nme_display_object_set_scale_y(tmp,tmp1);
	HX_STACK_LINE(508)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(508)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scaleY,return )

::nme::geom::Rectangle DisplayObject_obj::get_scrollRect( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_scrollRect",0xc6c19b3b,"nme.display.DisplayObject.get_scrollRect","nme/display/DisplayObject.hx",511,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(511)
	::nme::geom::Rectangle tmp = this->nmeScrollRect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(511)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(511)
	::nme::geom::Rectangle tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(511)
	if ((tmp1)){
		HX_STACK_LINE(511)
		tmp2 = null();
	}
	else{
		HX_STACK_LINE(511)
		::nme::geom::Rectangle tmp3 = this->nmeScrollRect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(511)
		tmp2 = tmp3->clone();
	}
	HX_STACK_LINE(511)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_scrollRect,return )

::nme::geom::Rectangle DisplayObject_obj::set_scrollRect( ::nme::geom::Rectangle inRect){
	HX_STACK_FRAME("nme.display.DisplayObject","set_scrollRect",0xe6e183af,"nme.display.DisplayObject.set_scrollRect","nme/display/DisplayObject.hx",513,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inRect,"inRect")
	HX_STACK_LINE(514)
	bool tmp = (inRect == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(514)
	::nme::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(514)
	if ((tmp)){
		HX_STACK_LINE(514)
		tmp1 = null();
	}
	else{
		HX_STACK_LINE(514)
		tmp1 = inRect->clone();
	}
	HX_STACK_LINE(514)
	this->nmeScrollRect = tmp1;
	HX_STACK_LINE(515)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(515)
	::nme::geom::Rectangle tmp3 = this->nmeScrollRect;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(515)
	::nme::display::DisplayObject_obj::nme_display_object_set_scroll_rect(tmp2,tmp3);
	HX_STACK_LINE(516)
	::nme::geom::Rectangle tmp4 = inRect;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(516)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_scrollRect,return )

::nme::display::Stage DisplayObject_obj::get_stage( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_stage",0x88bce394,"nme.display.DisplayObject.get_stage","nme/display/DisplayObject.hx",520,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(521)
	::nme::display::DisplayObjectContainer tmp = this->nmeParent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(521)
	if ((tmp1)){
		HX_STACK_LINE(522)
		::nme::display::DisplayObjectContainer tmp2 = this->nmeParent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(522)
		::nme::display::Stage tmp3 = tmp2->get_stage();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(522)
		return tmp3;
	}
	HX_STACK_LINE(524)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_stage,return )

::nme::geom::Transform DisplayObject_obj::get_transform( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_transform",0x4420c942,"nme.display.DisplayObject.get_transform","nme/display/DisplayObject.hx",527,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(527)
	::nme::geom::Transform tmp = ::nme::geom::Transform_obj::__new(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(527)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_transform,return )

::nme::geom::Transform DisplayObject_obj::set_transform( ::nme::geom::Transform inTransform){
	HX_STACK_FRAME("nme.display.DisplayObject","set_transform",0x8926ab4e,"nme.display.DisplayObject.set_transform","nme/display/DisplayObject.hx",529,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTransform,"inTransform")
	HX_STACK_LINE(530)
	::nme::geom::Matrix tmp = inTransform->get_matrix();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(530)
	this->nmeSetMatrix(tmp);
	HX_STACK_LINE(531)
	::nme::geom::ColorTransform tmp1 = inTransform->get_colorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(531)
	this->nmeSetColorTransform(tmp1);
	HX_STACK_LINE(532)
	::nme::geom::Transform tmp2 = inTransform;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(532)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_transform,return )

bool DisplayObject_obj::get_visible( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_visible",0x51c652c8,"nme.display.DisplayObject.get_visible","nme/display/DisplayObject.hx",535,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(535)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(535)
	bool tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_visible(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(535)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_visible,return )

bool DisplayObject_obj::set_visible( bool inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_visible",0x5c3359d4,"nme.display.DisplayObject.set_visible","nme/display/DisplayObject.hx",537,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(538)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(538)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(538)
	::nme::display::DisplayObject_obj::nme_display_object_set_visible(tmp,tmp1);
	HX_STACK_LINE(539)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(539)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_visible,return )

Float DisplayObject_obj::get_width( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_width",0xcf142edc,"nme.display.DisplayObject.get_width","nme/display/DisplayObject.hx",542,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(542)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(542)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(542)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_width,return )

Float DisplayObject_obj::set_width( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_width",0xb2651ae8,"nme.display.DisplayObject.set_width","nme/display/DisplayObject.hx",544,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(545)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(545)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(545)
	::nme::display::DisplayObject_obj::nme_display_object_set_width(tmp,tmp1);
	HX_STACK_LINE(546)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_width,return )

Float DisplayObject_obj::get_x( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_x",0x9a62d64e,"nme.display.DisplayObject.get_x","nme/display/DisplayObject.hx",549,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(549)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(549)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_x(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_x,return )

Float DisplayObject_obj::set_x( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_x",0x8331cc5a,"nme.display.DisplayObject.set_x","nme/display/DisplayObject.hx",551,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(552)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(552)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(552)
	::nme::display::DisplayObject_obj::nme_display_object_set_x(tmp,tmp1);
	HX_STACK_LINE(553)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(553)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_x,return )

Float DisplayObject_obj::get_y( ){
	HX_STACK_FRAME("nme.display.DisplayObject","get_y",0x9a62d64f,"nme.display.DisplayObject.get_y","nme/display/DisplayObject.hx",556,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(556)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(556)
	Float tmp1 = ::nme::display::DisplayObject_obj::nme_display_object_get_y(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(556)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObject_obj,get_y,return )

Float DisplayObject_obj::set_y( Float inVal){
	HX_STACK_FRAME("nme.display.DisplayObject","set_y",0x8331cc5b,"nme.display.DisplayObject.set_y","nme/display/DisplayObject.hx",558,0xd0c831b3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(559)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(559)
	Float tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(559)
	::nme::display::DisplayObject_obj::nme_display_object_set_y(tmp,tmp1);
	HX_STACK_LINE(560)
	Float tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(560)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObject_obj,set_y,return )

Dynamic DisplayObject_obj::nme_create_display_object;

Dynamic DisplayObject_obj::nme_display_object_get_graphics;

Dynamic DisplayObject_obj::nme_display_object_draw_to_surface;

Dynamic DisplayObject_obj::nme_display_object_get_id;

Dynamic DisplayObject_obj::nme_display_object_get_x;

Dynamic DisplayObject_obj::nme_display_object_set_x;

Dynamic DisplayObject_obj::nme_display_object_get_y;

Dynamic DisplayObject_obj::nme_display_object_set_y;

Dynamic DisplayObject_obj::nme_display_object_get_scale_x;

Dynamic DisplayObject_obj::nme_display_object_set_scale_x;

Dynamic DisplayObject_obj::nme_display_object_get_scale_y;

Dynamic DisplayObject_obj::nme_display_object_set_scale_y;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_x;

Dynamic DisplayObject_obj::nme_display_object_get_mouse_y;

Dynamic DisplayObject_obj::nme_display_object_get_rotation;

Dynamic DisplayObject_obj::nme_display_object_set_rotation;

Dynamic DisplayObject_obj::nme_display_object_get_bg;

Dynamic DisplayObject_obj::nme_display_object_set_bg;

Dynamic DisplayObject_obj::nme_display_object_get_name;

Dynamic DisplayObject_obj::nme_display_object_set_name;

Dynamic DisplayObject_obj::nme_display_object_get_width;

Dynamic DisplayObject_obj::nme_display_object_set_width;

Dynamic DisplayObject_obj::nme_display_object_get_height;

Dynamic DisplayObject_obj::nme_display_object_set_height;

Dynamic DisplayObject_obj::nme_display_object_get_alpha;

Dynamic DisplayObject_obj::nme_display_object_set_alpha;

Dynamic DisplayObject_obj::nme_display_object_get_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_set_blend_mode;

Dynamic DisplayObject_obj::nme_display_object_get_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_set_cache_as_bitmap;

Dynamic DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching;

Dynamic DisplayObject_obj::nme_display_object_get_pixel_snapping;

Dynamic DisplayObject_obj::nme_display_object_set_pixel_snapping;

Dynamic DisplayObject_obj::nme_display_object_get_visible;

Dynamic DisplayObject_obj::nme_display_object_set_visible;

Dynamic DisplayObject_obj::nme_display_object_set_filters;

Dynamic DisplayObject_obj::nme_display_object_global_to_local;

Dynamic DisplayObject_obj::nme_display_object_local_to_global;

Dynamic DisplayObject_obj::nme_display_object_set_scale9_grid;

Dynamic DisplayObject_obj::nme_display_object_set_scroll_rect;

Dynamic DisplayObject_obj::nme_display_object_set_mask;

Dynamic DisplayObject_obj::nme_display_object_set_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_matrix;

Dynamic DisplayObject_obj::nme_display_object_get_color_transform;

Dynamic DisplayObject_obj::nme_display_object_set_color_transform;

Dynamic DisplayObject_obj::nme_display_object_get_pixel_bounds;

Dynamic DisplayObject_obj::nme_display_object_get_bounds;

Dynamic DisplayObject_obj::nme_display_object_hit_test_point;

Dynamic DisplayObject_obj::nme_display_object_get_hit_enabled;

Dynamic DisplayObject_obj::nme_display_object_set_hit_enabled;

Dynamic DisplayObject_obj::nme_doc_add_child;


DisplayObject_obj::DisplayObject_obj()
{
}

void DisplayObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObject);
	HX_MARK_MEMBER_NAME(graphics,"graphics");
	HX_MARK_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(stage,"stage");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeFilters,"nmeFilters");
	HX_MARK_MEMBER_NAME(nmeGraphicsCache,"nmeGraphicsCache");
	HX_MARK_MEMBER_NAME(nmeID,"nmeID");
	HX_MARK_MEMBER_NAME(nmeParent,"nmeParent");
	HX_MARK_MEMBER_NAME(nmeScale9Grid,"nmeScale9Grid");
	HX_MARK_MEMBER_NAME(nmeScrollRect,"nmeScrollRect");
	::nme::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(graphics,"graphics");
	HX_VISIT_MEMBER_NAME(loaderInfo,"loaderInfo");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(stage,"stage");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmeFilters,"nmeFilters");
	HX_VISIT_MEMBER_NAME(nmeGraphicsCache,"nmeGraphicsCache");
	HX_VISIT_MEMBER_NAME(nmeID,"nmeID");
	HX_VISIT_MEMBER_NAME(nmeParent,"nmeParent");
	HX_VISIT_MEMBER_NAME(nmeScale9Grid,"nmeScale9Grid");
	HX_VISIT_MEMBER_NAME(nmeScrollRect,"nmeScrollRect");
	::nme::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObject_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp != hx::paccNever) return get_x(); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp != hx::paccNever) return get_y(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp != hx::paccNever) return get_name(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp != hx::paccNever) return get_alpha(); }
		if (HX_FIELD_EQ(inName,"stage") ) { return inCallProp != hx::paccNever ? get_stage() : stage; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp != hx::paccNever) return get_width(); }
		if (HX_FIELD_EQ(inName,"nmeID") ) { return nmeID; }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp != hx::paccNever) return get_height(); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp != hx::paccNever ? get_mouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp != hx::paccNever ? get_mouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"parent") ) { return inCallProp != hx::paccNever ? get_parent() : parent; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp != hx::paccNever) return get_scaleX(); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp != hx::paccNever) return get_scaleY(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp != hx::paccNever) return get_filters(); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp != hx::paccNever) return get_visible(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { return inCallProp != hx::paccNever ? get_graphics() : graphics; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp != hx::paccNever) return get_rotation(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mask") ) { return set_mask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return get_name_dyn(); }
		if (HX_FIELD_EQ(inName,"set_name") ) { return set_name_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp != hx::paccNever) return get_blendMode(); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp != hx::paccNever) return get_transform(); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"nmeParent") ) { return nmeParent; }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return set_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hitEnabled") ) { if (inCallProp != hx::paccNever) return get_hitEnabled(); }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { return loaderInfo; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp != hx::paccNever) return get_scale9Grid(); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp != hx::paccNever) return get_scrollRect(); }
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { return nmeFilters; }
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return set_height_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseX") ) { return get_mouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseY") ) { return get_mouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"get_parent") ) { return get_parent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleX") ) { return get_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return set_scaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scaleY") ) { return get_scaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return set_scaleY_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		if (HX_FIELD_EQ(inName,"get_filters") ) { return get_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filters") ) { return set_filters_dyn(); }
		if (HX_FIELD_EQ(inName,"get_visible") ) { return get_visible_dyn(); }
		if (HX_FIELD_EQ(inName,"set_visible") ) { return set_visible_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hitTestPoint") ) { return hitTestPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFireEvent") ) { return nmeFireEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeGetMatrix") ) { return nmeGetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetMatrix") ) { return nmeSetMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetParent") ) { return nmeSetParent_dyn(); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return get_graphics_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rotation") ) { return get_rotation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_rotation") ) { return set_rotation_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp != hx::paccNever) return get_cacheAsBitmap(); }
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp != hx::paccNever) return get_pixelSnapping(); }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { return nmeScale9Grid; }
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { return nmeScrollRect; }
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"globalToLocal") ) { return globalToLocal_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTestObject") ) { return hitTestObject_dyn(); }
		if (HX_FIELD_EQ(inName,"localToGlobal") ) { return localToGlobal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blendMode") ) { return get_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blendMode") ) { return set_blendMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_transform") ) { return get_transform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transform") ) { return set_transform_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_hitEnabled") ) { return get_hitEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hitEnabled") ) { return set_hitEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scale9Grid") ) { return get_scale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scale9Grid") ) { return set_scale9Grid_dyn(); }
		if (HX_FIELD_EQ(inName,"get_scrollRect") ) { return get_scrollRect_dyn(); }
		if (HX_FIELD_EQ(inName,"set_scrollRect") ) { return set_scrollRect_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { if (inCallProp != hx::paccNever) return get_opaqueBackground(); }
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { return nmeGraphicsCache; }
		if (HX_FIELD_EQ(inName,"nmeDispatchEvent") ) { return nmeDispatchEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeDrawToSurface") ) { return nmeDrawToSurface_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeGetPixelBounds") ) { return nmeGetPixelBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cacheAsBitmap") ) { return get_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cacheAsBitmap") ) { return set_cacheAsBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_pixelSnapping") ) { return get_pixelSnapping_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pixelSnapping") ) { return set_pixelSnapping_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nmeGetColorTransform") ) { return nmeGetColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetColorTransform") ) { return nmeSetColorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_opaqueBackground") ) { return get_opaqueBackground_dyn(); }
		if (HX_FIELD_EQ(inName,"set_opaqueBackground") ) { return set_opaqueBackground_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { if (inCallProp != hx::paccNever) return get_pedanticBitmapCaching(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nmeAsInteractiveObject") ) { return nmeAsInteractiveObject_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedMatrix") ) { return nmeGetConcatenatedMatrix_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"get_pedanticBitmapCaching") ) { return get_pedanticBitmapCaching_dyn(); }
		if (HX_FIELD_EQ(inName,"set_pedanticBitmapCaching") ) { return set_pedanticBitmapCaching_dyn(); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nmeGetInteractiveObjectStack") ) { return nmeGetInteractiveObjectStack_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"nmeGetConcatenatedColorTransform") ) { return nmeGetConcatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { outValue = nme_doc_add_child; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { outValue = nme_display_object_get_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { outValue = nme_display_object_set_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { outValue = nme_display_object_get_y; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { outValue = nme_display_object_set_y; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { outValue = nme_create_display_object; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { outValue = nme_display_object_get_id; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { outValue = nme_display_object_get_bg; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { outValue = nme_display_object_set_bg; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { outValue = nme_display_object_get_name; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { outValue = nme_display_object_set_name; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { outValue = nme_display_object_set_mask; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { outValue = nme_display_object_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { outValue = nme_display_object_set_width; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { outValue = nme_display_object_get_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { outValue = nme_display_object_set_alpha; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { outValue = nme_display_object_get_height; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { outValue = nme_display_object_set_height; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { outValue = nme_display_object_set_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { outValue = nme_display_object_get_matrix; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bounds") ) { outValue = nme_display_object_get_bounds; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { outValue = nme_display_object_get_scale_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { outValue = nme_display_object_set_scale_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { outValue = nme_display_object_get_scale_y; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { outValue = nme_display_object_set_scale_y; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { outValue = nme_display_object_get_mouse_x; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { outValue = nme_display_object_get_mouse_y; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { outValue = nme_display_object_get_visible; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { outValue = nme_display_object_set_visible; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { outValue = nme_display_object_set_filters; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_graphics") ) { outValue = nme_display_object_get_graphics; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { outValue = nme_display_object_get_rotation; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { outValue = nme_display_object_set_rotation; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { outValue = nme_display_object_get_blend_mode; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { outValue = nme_display_object_set_blend_mode; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { outValue = nme_display_object_hit_test_point; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { outValue = nme_display_object_draw_to_surface; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { outValue = nme_display_object_global_to_local; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { outValue = nme_display_object_local_to_global; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { outValue = nme_display_object_set_scale9_grid; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { outValue = nme_display_object_set_scroll_rect; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_hit_enabled") ) { outValue = nme_display_object_get_hit_enabled; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_hit_enabled") ) { outValue = nme_display_object_set_hit_enabled; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { outValue = nme_display_object_get_pixel_bounds; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_snapping") ) { outValue = nme_display_object_get_pixel_snapping; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pixel_snapping") ) { outValue = nme_display_object_set_pixel_snapping; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { outValue = nme_display_object_get_cache_as_bitmap; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { outValue = nme_display_object_set_cache_as_bitmap; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { outValue = nme_display_object_get_color_transform; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { outValue = nme_display_object_set_color_transform; return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pedantic_bitmap_caching") ) { outValue = nme_display_object_get_pedantic_bitmap_caching; return true;  }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pedantic_bitmap_caching") ) { outValue = nme_display_object_set_pedantic_bitmap_caching; return true;  }
	}
	return false;
}

Dynamic DisplayObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp != hx::paccNever) return set_x(inValue); }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp != hx::paccNever) return set_y(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp != hx::paccNever) return set_mask(inValue);mask=inValue.Cast< ::nme::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp != hx::paccNever) return set_name(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { if (inCallProp != hx::paccNever) return set_alpha(inValue); }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::nme::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { if (inCallProp != hx::paccNever) return set_width(inValue); }
		if (HX_FIELD_EQ(inName,"nmeID") ) { nmeID=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { if (inCallProp != hx::paccNever) return set_height(inValue); }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::nme::display::DisplayObjectContainer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp != hx::paccNever) return set_scaleX(inValue); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp != hx::paccNever) return set_scaleY(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"filters") ) { if (inCallProp != hx::paccNever) return set_filters(inValue); }
		if (HX_FIELD_EQ(inName,"visible") ) { if (inCallProp != hx::paccNever) return set_visible(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { graphics=inValue.Cast< ::nme::display::Graphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotation") ) { if (inCallProp != hx::paccNever) return set_rotation(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"blendMode") ) { if (inCallProp != hx::paccNever) return set_blendMode(inValue); }
		if (HX_FIELD_EQ(inName,"transform") ) { if (inCallProp != hx::paccNever) return set_transform(inValue); }
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeParent") ) { nmeParent=inValue.Cast< ::nme::display::DisplayObjectContainer >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hitEnabled") ) { if (inCallProp != hx::paccNever) return set_hitEnabled(inValue); }
		if (HX_FIELD_EQ(inName,"loaderInfo") ) { loaderInfo=inValue.Cast< ::nme::display::LoaderInfo >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale9Grid") ) { if (inCallProp != hx::paccNever) return set_scale9Grid(inValue); }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { if (inCallProp != hx::paccNever) return set_scrollRect(inValue); }
		if (HX_FIELD_EQ(inName,"nmeFilters") ) { nmeFilters=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"cacheAsBitmap") ) { if (inCallProp != hx::paccNever) return set_cacheAsBitmap(inValue); }
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { if (inCallProp != hx::paccNever) return set_pixelSnapping(inValue); }
		if (HX_FIELD_EQ(inName,"nmeScale9Grid") ) { nmeScale9Grid=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nmeScrollRect") ) { nmeScrollRect=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"opaqueBackground") ) { if (inCallProp != hx::paccNever) return set_opaqueBackground(inValue); }
		if (HX_FIELD_EQ(inName,"nmeGraphicsCache") ) { nmeGraphicsCache=inValue.Cast< ::nme::display::Graphics >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"pedanticBitmapCaching") ) { if (inCallProp != hx::paccNever) return set_pedanticBitmapCaching(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_x") ) { nme_display_object_get_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_x") ) { nme_display_object_set_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_y") ) { nme_display_object_get_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_y") ) { nme_display_object_set_y=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_create_display_object") ) { nme_create_display_object=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_id") ) { nme_display_object_get_id=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bg") ) { nme_display_object_get_bg=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_bg") ) { nme_display_object_set_bg=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_name") ) { nme_display_object_get_name=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_name") ) { nme_display_object_set_name=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_mask") ) { nme_display_object_set_mask=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_width") ) { nme_display_object_get_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_width") ) { nme_display_object_set_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_alpha") ) { nme_display_object_get_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_alpha") ) { nme_display_object_set_alpha=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_height") ) { nme_display_object_get_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_height") ) { nme_display_object_set_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_matrix") ) { nme_display_object_set_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_matrix") ) { nme_display_object_get_matrix=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_bounds") ) { nme_display_object_get_bounds=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_x") ) { nme_display_object_get_scale_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_x") ) { nme_display_object_set_scale_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_scale_y") ) { nme_display_object_get_scale_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale_y") ) { nme_display_object_set_scale_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_x") ) { nme_display_object_get_mouse_x=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_mouse_y") ) { nme_display_object_get_mouse_y=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_visible") ) { nme_display_object_get_visible=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_visible") ) { nme_display_object_set_visible=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_filters") ) { nme_display_object_set_filters=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_graphics") ) { nme_display_object_get_graphics=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_rotation") ) { nme_display_object_get_rotation=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_rotation") ) { nme_display_object_set_rotation=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_blend_mode") ) { nme_display_object_get_blend_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_blend_mode") ) { nme_display_object_set_blend_mode=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_hit_test_point") ) { nme_display_object_hit_test_point=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"nme_display_object_draw_to_surface") ) { nme_display_object_draw_to_surface=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_global_to_local") ) { nme_display_object_global_to_local=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_local_to_global") ) { nme_display_object_local_to_global=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scale9_grid") ) { nme_display_object_set_scale9_grid=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_scroll_rect") ) { nme_display_object_set_scroll_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_hit_enabled") ) { nme_display_object_get_hit_enabled=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_hit_enabled") ) { nme_display_object_set_hit_enabled=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_bounds") ) { nme_display_object_get_pixel_bounds=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pixel_snapping") ) { nme_display_object_get_pixel_snapping=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pixel_snapping") ) { nme_display_object_set_pixel_snapping=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_cache_as_bitmap") ) { nme_display_object_get_cache_as_bitmap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_cache_as_bitmap") ) { nme_display_object_set_cache_as_bitmap=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_get_color_transform") ) { nme_display_object_get_color_transform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_color_transform") ) { nme_display_object_set_color_transform=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"nme_display_object_get_pedantic_bitmap_caching") ) { nme_display_object_get_pedantic_bitmap_caching=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_display_object_set_pedantic_bitmap_caching") ) { nme_display_object_set_pedantic_bitmap_caching=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void DisplayObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("blendMode","\x54","\xe4","\x37","\x0c"));
	outFields->push(HX_HCSTRING("cacheAsBitmap","\xe3","\x82","\x0f","\x6a"));
	outFields->push(HX_HCSTRING("pedanticBitmapCaching","\x1e","\x45","\x20","\x18"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("filters","\xbb","\xa1","\x46","\x09"));
	outFields->push(HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("hitEnabled","\x6e","\xa6","\xa2","\xd9"));
	outFields->push(HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("opaqueBackground","\x2f","\xb8","\xa7","\x1a"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("rotation","\x3e","\x3d","\x86","\x08"));
	outFields->push(HX_HCSTRING("scale9Grid","\xd5","\x50","\x22","\x8f"));
	outFields->push(HX_HCSTRING("scaleX","\x8e","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scaleY","\x8f","\xea","\x25","\x3c"));
	outFields->push(HX_HCSTRING("scrollRect","\xd1","\xdb","\x66","\x09"));
	outFields->push(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"));
	outFields->push(HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("nmeFilters","\x15","\x07","\x48","\xd8"));
	outFields->push(HX_HCSTRING("nmeGraphicsCache","\x51","\x36","\x90","\x74"));
	outFields->push(HX_HCSTRING("nmeID","\xa1","\xf4","\x6c","\x9e"));
	outFields->push(HX_HCSTRING("nmeParent","\x10","\x09","\x40","\x88"));
	outFields->push(HX_HCSTRING("nmeScale9Grid","\xbb","\x3f","\xcb","\x54"));
	outFields->push(HX_HCSTRING("nmeScrollRect","\xb7","\xca","\x0f","\xcf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,graphics),HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12")},
	{hx::fsObject /*::nme::display::LoaderInfo*/ ,(int)offsetof(DisplayObject_obj,loaderInfo),HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6")},
	{hx::fsObject /*::nme::display::DisplayObject*/ ,(int)offsetof(DisplayObject_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseX),HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc")},
	{hx::fsFloat,(int)offsetof(DisplayObject_obj,mouseY),HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc")},
	{hx::fsObject /*::nme::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::nme::display::Stage*/ ,(int)offsetof(DisplayObject_obj,stage),HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayObject_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DisplayObject_obj,nmeFilters),HX_HCSTRING("nmeFilters","\x15","\x07","\x48","\xd8")},
	{hx::fsObject /*::nme::display::Graphics*/ ,(int)offsetof(DisplayObject_obj,nmeGraphicsCache),HX_HCSTRING("nmeGraphicsCache","\x51","\x36","\x90","\x74")},
	{hx::fsInt,(int)offsetof(DisplayObject_obj,nmeID),HX_HCSTRING("nmeID","\xa1","\xf4","\x6c","\x9e")},
	{hx::fsObject /*::nme::display::DisplayObjectContainer*/ ,(int)offsetof(DisplayObject_obj,nmeParent),HX_HCSTRING("nmeParent","\x10","\x09","\x40","\x88")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,nmeScale9Grid),HX_HCSTRING("nmeScale9Grid","\xbb","\x3f","\xcb","\x54")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(DisplayObject_obj,nmeScrollRect),HX_HCSTRING("nmeScrollRect","\xb7","\xca","\x0f","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_create_display_object,HX_HCSTRING("nme_create_display_object","\x86","\xc4","\x80","\x49")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_graphics,HX_HCSTRING("nme_display_object_get_graphics","\x1e","\x78","\x61","\x09")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_draw_to_surface,HX_HCSTRING("nme_display_object_draw_to_surface","\xba","\x4e","\x16","\x36")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_id,HX_HCSTRING("nme_display_object_get_id","\xee","\xca","\x64","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_x,HX_HCSTRING("nme_display_object_get_x","\xc5","\x54","\x45","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_x,HX_HCSTRING("nme_display_object_set_x","\xd1","\x4a","\x14","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_y,HX_HCSTRING("nme_display_object_get_y","\xc6","\x54","\x45","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_y,HX_HCSTRING("nme_display_object_set_y","\xd2","\x4a","\x14","\x16")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_scale_x,HX_HCSTRING("nme_display_object_get_scale_x","\x50","\x64","\xf8","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_scale_x,HX_HCSTRING("nme_display_object_set_scale_x","\x5c","\x6b","\x65","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_scale_y,HX_HCSTRING("nme_display_object_get_scale_y","\x51","\x64","\xf8","\xe0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_scale_y,HX_HCSTRING("nme_display_object_set_scale_y","\x5d","\x6b","\x65","\xeb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_mouse_x,HX_HCSTRING("nme_display_object_get_mouse_x","\xab","\x08","\x64","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_mouse_y,HX_HCSTRING("nme_display_object_get_mouse_y","\xac","\x08","\x64","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_rotation,HX_HCSTRING("nme_display_object_get_rotation","\x91","\xbc","\x7f","\xff")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_rotation,HX_HCSTRING("nme_display_object_set_rotation","\x05","\xe0","\x78","\x14")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_bg,HX_HCSTRING("nme_display_object_get_bg","\xd8","\xc4","\x64","\x6f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_bg,HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_name,HX_HCSTRING("nme_display_object_get_name","\x1e","\x0c","\xac","\xad")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_name,HX_HCSTRING("nme_display_object_set_name","\x92","\x65","\x09","\x5c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_width,HX_HCSTRING("nme_display_object_get_width","\xd3","\xb4","\xbc","\x7c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_width,HX_HCSTRING("nme_display_object_set_width","\xdf","\xa0","\x0d","\x60")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_height,HX_HCSTRING("nme_display_object_get_height","\x7a","\xfc","\xb0","\x5e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_height,HX_HCSTRING("nme_display_object_set_height","\xee","\x9a","\x2e","\x62")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_alpha,HX_HCSTRING("nme_display_object_get_alpha","\x2b","\xa6","\xf0","\xd3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_alpha,HX_HCSTRING("nme_display_object_set_alpha","\x37","\x92","\x41","\xb7")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_blend_mode,HX_HCSTRING("nme_display_object_get_blend_mode","\x64","\x7b","\x72","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_blend_mode,HX_HCSTRING("nme_display_object_set_blend_mode","\xd8","\x63","\x92","\xe8")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_cache_as_bitmap,HX_HCSTRING("nme_display_object_get_cache_as_bitmap","\x6c","\xcc","\x57","\x9e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_cache_as_bitmap,HX_HCSTRING("nme_display_object_set_cache_as_bitmap","\x78","\xbf","\xf4","\xda")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching,HX_HCSTRING("nme_display_object_get_pedantic_bitmap_caching","\x09","\x98","\xb5","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching,HX_HCSTRING("nme_display_object_set_pedantic_bitmap_caching","\x15","\x77","\x4e","\x97")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_pixel_snapping,HX_HCSTRING("nme_display_object_get_pixel_snapping","\x68","\xa5","\x15","\x91")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_pixel_snapping,HX_HCSTRING("nme_display_object_set_pixel_snapping","\xdc","\xd7","\xc4","\x6d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_visible,HX_HCSTRING("nme_display_object_get_visible","\x7f","\x84","\x15","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_visible,HX_HCSTRING("nme_display_object_set_visible","\x8b","\x8b","\x82","\x29")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_filters,HX_HCSTRING("nme_display_object_set_filters","\xd4","\xb4","\xa4","\x8f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_global_to_local,HX_HCSTRING("nme_display_object_global_to_local","\xf9","\x24","\x9f","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_local_to_global,HX_HCSTRING("nme_display_object_local_to_global","\xc9","\x8a","\xe6","\xaa")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_scale9_grid,HX_HCSTRING("nme_display_object_set_scale9_grid","\x6f","\xe9","\xab","\x88")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_scroll_rect,HX_HCSTRING("nme_display_object_set_scroll_rect","\x6f","\x55","\xd0","\xc4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_mask,HX_HCSTRING("nme_display_object_set_mask","\x33","\x34","\x60","\x5b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_matrix,HX_HCSTRING("nme_display_object_set_matrix","\x48","\xc9","\xaa","\x1b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_matrix,HX_HCSTRING("nme_display_object_get_matrix","\xd4","\x2a","\x2d","\x18")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_color_transform,HX_HCSTRING("nme_display_object_get_color_transform","\x5d","\x35","\x0c","\x56")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_color_transform,HX_HCSTRING("nme_display_object_set_color_transform","\x69","\x28","\xa9","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_pixel_bounds,HX_HCSTRING("nme_display_object_get_pixel_bounds","\x21","\x73","\x64","\x06")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_bounds,HX_HCSTRING("nme_display_object_get_bounds","\x08","\x7b","\x82","\xc2")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_hit_test_point,HX_HCSTRING("nme_display_object_hit_test_point","\xd9","\x50","\x5c","\x48")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_get_hit_enabled,HX_HCSTRING("nme_display_object_get_hit_enabled","\xe2","\x45","\xd0","\x99")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_display_object_set_hit_enabled,HX_HCSTRING("nme_display_object_set_hit_enabled","\xee","\xc2","\x9b","\x95")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObject_obj::nme_doc_add_child,HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("graphics","\xcb","\xf8","\x67","\x12"),
	HX_HCSTRING("loaderInfo","\x21","\xb2","\xe4","\xb6"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("mouseX","\x93","\x4a","\x0e","\xcc"),
	HX_HCSTRING("mouseY","\x94","\x4a","\x0e","\xcc"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("nmeFilters","\x15","\x07","\x48","\xd8"),
	HX_HCSTRING("nmeGraphicsCache","\x51","\x36","\x90","\x74"),
	HX_HCSTRING("nmeID","\xa1","\xf4","\x6c","\x9e"),
	HX_HCSTRING("nmeParent","\x10","\x09","\x40","\x88"),
	HX_HCSTRING("nmeScale9Grid","\xbb","\x3f","\xcb","\x54"),
	HX_HCSTRING("nmeScrollRect","\xb7","\xca","\x0f","\xcf"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("get_hitEnabled","\xb7","\x2e","\x98","\x4f"),
	HX_HCSTRING("set_hitEnabled","\x2b","\x17","\xb8","\x6f"),
	HX_HCSTRING("getBounds","\xab","\x0f","\x74","\xe2"),
	HX_HCSTRING("getRect","\xda","\xfc","\x29","\x1e"),
	HX_HCSTRING("globalToLocal","\xcd","\x4e","\xae","\x6b"),
	HX_HCSTRING("hitTestObject","\xe4","\x54","\x64","\xd7"),
	HX_HCSTRING("hitTestPoint","\xcb","\xa9","\x21","\xe4"),
	HX_HCSTRING("localToGlobal","\xc9","\x41","\xeb","\x47"),
	HX_HCSTRING("nmeAsInteractiveObject","\x49","\x85","\x3b","\x34"),
	HX_HCSTRING("nmeBroadcast","\xdb","\x92","\x42","\x7d"),
	HX_HCSTRING("nmeDispatchEvent","\xda","\xab","\x8b","\xe2"),
	HX_HCSTRING("nmeDrawToSurface","\x28","\x96","\x2b","\x08"),
	HX_HCSTRING("nmeFindByID","\xb1","\x4f","\xee","\xe5"),
	HX_HCSTRING("nmeFireEvent","\x5e","\x20","\x96","\x0f"),
	HX_HCSTRING("nmeGetColorTransform","\x99","\xe0","\x76","\x28"),
	HX_HCSTRING("nmeGetConcatenatedColorTransform","\x08","\x4a","\x83","\x89"),
	HX_HCSTRING("nmeGetConcatenatedMatrix","\xc0","\x91","\xf5","\xac"),
	HX_HCSTRING("nmeGetInteractiveObjectStack","\x57","\x5e","\xd0","\x95"),
	HX_HCSTRING("nmeGetMatrix","\x51","\xaf","\x47","\xd6"),
	HX_HCSTRING("nmeGetObjectsUnderPoint","\xfc","\xda","\x07","\x78"),
	HX_HCSTRING("nmeGetPixelBounds","\x8b","\x16","\x2a","\xe5"),
	HX_HCSTRING("nmeOnAdded","\x7b","\xd8","\x82","\x81"),
	HX_HCSTRING("nmeOnRemoved","\x1b","\xc8","\xd3","\x68"),
	HX_HCSTRING("nmeSetColorTransform","\xa5","\xb8","\xe4","\x4b"),
	HX_HCSTRING("nmeSetMatrix","\x5d","\x9b","\x98","\xb9"),
	HX_HCSTRING("nmeSetParent","\x46","\x6a","\x4e","\xeb"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_alpha","\xb5","\x03","\x40","\x65"),
	HX_HCSTRING("set_alpha","\xc1","\xef","\x90","\x48"),
	HX_HCSTRING("get_opaqueBackground","\x38","\x1d","\x12","\x39"),
	HX_HCSTRING("set_opaqueBackground","\xac","\xd4","\xc9","\x05"),
	HX_HCSTRING("get_blendMode","\x2b","\xb8","\x9b","\xcd"),
	HX_HCSTRING("set_blendMode","\x37","\x9a","\xa1","\x12"),
	HX_HCSTRING("get_cacheAsBitmap","\x3a","\x8e","\x7f","\x70"),
	HX_HCSTRING("set_cacheAsBitmap","\x46","\x66","\xed","\x93"),
	HX_HCSTRING("get_pedanticBitmapCaching","\x75","\xff","\x1d","\x1e"),
	HX_HCSTRING("set_pedanticBitmapCaching","\x81","\xc3","\x74","\x8a"),
	HX_HCSTRING("get_pixelSnapping","\xb9","\xb9","\x11","\xbf"),
	HX_HCSTRING("set_pixelSnapping","\xc5","\x91","\x7f","\xe2"),
	HX_HCSTRING("get_filters","\xd2","\x01","\x41","\x8f"),
	HX_HCSTRING("set_filters","\xde","\x08","\xae","\x99"),
	HX_HCSTRING("get_graphics","\xd4","\xac","\x81","\xc7"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("set_mask","\xe9","\x55","\x6e","\x76"),
	HX_HCSTRING("get_mouseX","\x5c","\xba","\x95","\xbc"),
	HX_HCSTRING("get_mouseY","\x5d","\xba","\x95","\xbc"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	HX_HCSTRING("set_name","\x48","\x87","\x17","\x77"),
	HX_HCSTRING("get_parent","\xf3","\x74","\x05","\xde"),
	HX_HCSTRING("get_rotation","\x47","\xf1","\x9f","\xbd"),
	HX_HCSTRING("set_rotation","\xbb","\x14","\x99","\xd2"),
	HX_HCSTRING("get_scale9Grid","\x1e","\xd9","\x17","\x05"),
	HX_HCSTRING("set_scale9Grid","\x92","\xc1","\x37","\x25"),
	HX_HCSTRING("get_scaleX","\x57","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleX","\xcb","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scaleY","\x58","\x5a","\xad","\x2c"),
	HX_HCSTRING("set_scaleY","\xcc","\xf8","\x2a","\x30"),
	HX_HCSTRING("get_scrollRect","\x1a","\x64","\x5c","\x7f"),
	HX_HCSTRING("set_scrollRect","\x8e","\x4c","\x7c","\x9f"),
	HX_HCSTRING("get_stage","\x15","\xc7","\xb4","\xc7"),
	HX_HCSTRING("get_transform","\x43","\x01","\xf7","\x06"),
	HX_HCSTRING("set_transform","\x4f","\xe3","\xfc","\x4b"),
	HX_HCSTRING("get_visible","\x89","\xd8","\x1e","\x29"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_create_display_object,"nme_create_display_object");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_graphics,"nme_display_object_get_graphics");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_draw_to_surface,"nme_display_object_draw_to_surface");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_id,"nme_display_object_get_id");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_x,"nme_display_object_get_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_x,"nme_display_object_set_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_y,"nme_display_object_get_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_y,"nme_display_object_set_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_x,"nme_display_object_get_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_x,"nme_display_object_set_scale_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_y,"nme_display_object_get_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_y,"nme_display_object_set_scale_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_x,"nme_display_object_get_mouse_x");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_y,"nme_display_object_get_mouse_y");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_rotation,"nme_display_object_get_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_rotation,"nme_display_object_set_rotation");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bg,"nme_display_object_get_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_name,"nme_display_object_get_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_name,"nme_display_object_set_name");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_width,"nme_display_object_get_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_width,"nme_display_object_set_width");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_height,"nme_display_object_get_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_height,"nme_display_object_set_height");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_alpha,"nme_display_object_get_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_alpha,"nme_display_object_set_alpha");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_blend_mode,"nme_display_object_get_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_blend_mode,"nme_display_object_set_blend_mode");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_cache_as_bitmap,"nme_display_object_get_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_cache_as_bitmap,"nme_display_object_set_cache_as_bitmap");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching,"nme_display_object_get_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching,"nme_display_object_set_pedantic_bitmap_caching");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_snapping,"nme_display_object_get_pixel_snapping");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pixel_snapping,"nme_display_object_set_pixel_snapping");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_visible,"nme_display_object_get_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_visible,"nme_display_object_set_visible");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_filters,"nme_display_object_set_filters");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_global_to_local,"nme_display_object_global_to_local");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_local_to_global,"nme_display_object_local_to_global");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale9_grid,"nme_display_object_set_scale9_grid");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scroll_rect,"nme_display_object_set_scroll_rect");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_mask,"nme_display_object_set_mask");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_matrix,"nme_display_object_set_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_matrix,"nme_display_object_get_matrix");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_color_transform,"nme_display_object_get_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_color_transform,"nme_display_object_set_color_transform");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_bounds,"nme_display_object_get_pixel_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bounds,"nme_display_object_get_bounds");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_hit_test_point,"nme_display_object_hit_test_point");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_hit_enabled,"nme_display_object_get_hit_enabled");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_hit_enabled,"nme_display_object_set_hit_enabled");
	HX_MARK_MEMBER_NAME(DisplayObject_obj::nme_doc_add_child,"nme_doc_add_child");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_create_display_object,"nme_create_display_object");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_graphics,"nme_display_object_get_graphics");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_draw_to_surface,"nme_display_object_draw_to_surface");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_id,"nme_display_object_get_id");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_x,"nme_display_object_get_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_x,"nme_display_object_set_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_y,"nme_display_object_get_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_y,"nme_display_object_set_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_x,"nme_display_object_get_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_x,"nme_display_object_set_scale_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_scale_y,"nme_display_object_get_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale_y,"nme_display_object_set_scale_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_x,"nme_display_object_get_mouse_x");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_mouse_y,"nme_display_object_get_mouse_y");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_rotation,"nme_display_object_get_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_rotation,"nme_display_object_set_rotation");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bg,"nme_display_object_get_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_bg,"nme_display_object_set_bg");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_name,"nme_display_object_get_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_name,"nme_display_object_set_name");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_width,"nme_display_object_get_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_width,"nme_display_object_set_width");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_height,"nme_display_object_get_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_height,"nme_display_object_set_height");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_alpha,"nme_display_object_get_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_alpha,"nme_display_object_set_alpha");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_blend_mode,"nme_display_object_get_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_blend_mode,"nme_display_object_set_blend_mode");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_cache_as_bitmap,"nme_display_object_get_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_cache_as_bitmap,"nme_display_object_set_cache_as_bitmap");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pedantic_bitmap_caching,"nme_display_object_get_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pedantic_bitmap_caching,"nme_display_object_set_pedantic_bitmap_caching");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_snapping,"nme_display_object_get_pixel_snapping");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_pixel_snapping,"nme_display_object_set_pixel_snapping");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_visible,"nme_display_object_get_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_visible,"nme_display_object_set_visible");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_filters,"nme_display_object_set_filters");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_global_to_local,"nme_display_object_global_to_local");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_local_to_global,"nme_display_object_local_to_global");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scale9_grid,"nme_display_object_set_scale9_grid");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_scroll_rect,"nme_display_object_set_scroll_rect");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_mask,"nme_display_object_set_mask");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_matrix,"nme_display_object_set_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_matrix,"nme_display_object_get_matrix");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_color_transform,"nme_display_object_get_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_color_transform,"nme_display_object_set_color_transform");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_pixel_bounds,"nme_display_object_get_pixel_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_bounds,"nme_display_object_get_bounds");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_hit_test_point,"nme_display_object_hit_test_point");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_get_hit_enabled,"nme_display_object_get_hit_enabled");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_display_object_set_hit_enabled,"nme_display_object_set_hit_enabled");
	HX_VISIT_MEMBER_NAME(DisplayObject_obj::nme_doc_add_child,"nme_doc_add_child");
};

#endif

hx::Class DisplayObject_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_create_display_object","\x86","\xc4","\x80","\x49"),
	HX_HCSTRING("nme_display_object_get_graphics","\x1e","\x78","\x61","\x09"),
	HX_HCSTRING("nme_display_object_draw_to_surface","\xba","\x4e","\x16","\x36"),
	HX_HCSTRING("nme_display_object_get_id","\xee","\xca","\x64","\x6f"),
	HX_HCSTRING("nme_display_object_get_x","\xc5","\x54","\x45","\x2d"),
	HX_HCSTRING("nme_display_object_set_x","\xd1","\x4a","\x14","\x16"),
	HX_HCSTRING("nme_display_object_get_y","\xc6","\x54","\x45","\x2d"),
	HX_HCSTRING("nme_display_object_set_y","\xd2","\x4a","\x14","\x16"),
	HX_HCSTRING("nme_display_object_get_scale_x","\x50","\x64","\xf8","\xe0"),
	HX_HCSTRING("nme_display_object_set_scale_x","\x5c","\x6b","\x65","\xeb"),
	HX_HCSTRING("nme_display_object_get_scale_y","\x51","\x64","\xf8","\xe0"),
	HX_HCSTRING("nme_display_object_set_scale_y","\x5d","\x6b","\x65","\xeb"),
	HX_HCSTRING("nme_display_object_get_mouse_x","\xab","\x08","\x64","\x3c"),
	HX_HCSTRING("nme_display_object_get_mouse_y","\xac","\x08","\x64","\x3c"),
	HX_HCSTRING("nme_display_object_get_rotation","\x91","\xbc","\x7f","\xff"),
	HX_HCSTRING("nme_display_object_set_rotation","\x05","\xe0","\x78","\x14"),
	HX_HCSTRING("nme_display_object_get_bg","\xd8","\xc4","\x64","\x6f"),
	HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b"),
	HX_HCSTRING("nme_display_object_get_name","\x1e","\x0c","\xac","\xad"),
	HX_HCSTRING("nme_display_object_set_name","\x92","\x65","\x09","\x5c"),
	HX_HCSTRING("nme_display_object_get_width","\xd3","\xb4","\xbc","\x7c"),
	HX_HCSTRING("nme_display_object_set_width","\xdf","\xa0","\x0d","\x60"),
	HX_HCSTRING("nme_display_object_get_height","\x7a","\xfc","\xb0","\x5e"),
	HX_HCSTRING("nme_display_object_set_height","\xee","\x9a","\x2e","\x62"),
	HX_HCSTRING("nme_display_object_get_alpha","\x2b","\xa6","\xf0","\xd3"),
	HX_HCSTRING("nme_display_object_set_alpha","\x37","\x92","\x41","\xb7"),
	HX_HCSTRING("nme_display_object_get_blend_mode","\x64","\x7b","\x72","\xc8"),
	HX_HCSTRING("nme_display_object_set_blend_mode","\xd8","\x63","\x92","\xe8"),
	HX_HCSTRING("nme_display_object_get_cache_as_bitmap","\x6c","\xcc","\x57","\x9e"),
	HX_HCSTRING("nme_display_object_set_cache_as_bitmap","\x78","\xbf","\xf4","\xda"),
	HX_HCSTRING("nme_display_object_get_pedantic_bitmap_caching","\x09","\x98","\xb5","\x54"),
	HX_HCSTRING("nme_display_object_set_pedantic_bitmap_caching","\x15","\x77","\x4e","\x97"),
	HX_HCSTRING("nme_display_object_get_pixel_snapping","\x68","\xa5","\x15","\x91"),
	HX_HCSTRING("nme_display_object_set_pixel_snapping","\xdc","\xd7","\xc4","\x6d"),
	HX_HCSTRING("nme_display_object_get_visible","\x7f","\x84","\x15","\x1f"),
	HX_HCSTRING("nme_display_object_set_visible","\x8b","\x8b","\x82","\x29"),
	HX_HCSTRING("nme_display_object_set_filters","\xd4","\xb4","\xa4","\x8f"),
	HX_HCSTRING("nme_display_object_global_to_local","\xf9","\x24","\x9f","\x71"),
	HX_HCSTRING("nme_display_object_local_to_global","\xc9","\x8a","\xe6","\xaa"),
	HX_HCSTRING("nme_display_object_set_scale9_grid","\x6f","\xe9","\xab","\x88"),
	HX_HCSTRING("nme_display_object_set_scroll_rect","\x6f","\x55","\xd0","\xc4"),
	HX_HCSTRING("nme_display_object_set_mask","\x33","\x34","\x60","\x5b"),
	HX_HCSTRING("nme_display_object_set_matrix","\x48","\xc9","\xaa","\x1b"),
	HX_HCSTRING("nme_display_object_get_matrix","\xd4","\x2a","\x2d","\x18"),
	HX_HCSTRING("nme_display_object_get_color_transform","\x5d","\x35","\x0c","\x56"),
	HX_HCSTRING("nme_display_object_set_color_transform","\x69","\x28","\xa9","\x92"),
	HX_HCSTRING("nme_display_object_get_pixel_bounds","\x21","\x73","\x64","\x06"),
	HX_HCSTRING("nme_display_object_get_bounds","\x08","\x7b","\x82","\xc2"),
	HX_HCSTRING("nme_display_object_hit_test_point","\xd9","\x50","\x5c","\x48"),
	HX_HCSTRING("nme_display_object_get_hit_enabled","\xe2","\x45","\xd0","\x99"),
	HX_HCSTRING("nme_display_object_set_hit_enabled","\xee","\xc2","\x9b","\x95"),
	HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1"),
	::String(null()) };

void DisplayObject_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.DisplayObject","\x2d","\xb8","\xb7","\x04");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObject_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObject_obj >;
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

void DisplayObject_obj::__boot()
{
	nme_create_display_object= ::nme::Loader_obj::load(HX_HCSTRING("nme_create_display_object","\x86","\xc4","\x80","\x49"),(int)0);
	nme_display_object_get_graphics= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_graphics","\x1e","\x78","\x61","\x09"),(int)1);
	nme_display_object_draw_to_surface= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_draw_to_surface","\xba","\x4e","\x16","\x36"),(int)-1);
	nme_display_object_get_id= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_id","\xee","\xca","\x64","\x6f"),(int)1);
	nme_display_object_get_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_x","\xc5","\x54","\x45","\x2d"),(int)1);
	nme_display_object_set_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_x","\xd1","\x4a","\x14","\x16"),(int)2);
	nme_display_object_get_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_y","\xc6","\x54","\x45","\x2d"),(int)1);
	nme_display_object_set_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_y","\xd2","\x4a","\x14","\x16"),(int)2);
	nme_display_object_get_scale_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_scale_x","\x50","\x64","\xf8","\xe0"),(int)1);
	nme_display_object_set_scale_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_scale_x","\x5c","\x6b","\x65","\xeb"),(int)2);
	nme_display_object_get_scale_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_scale_y","\x51","\x64","\xf8","\xe0"),(int)1);
	nme_display_object_set_scale_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_scale_y","\x5d","\x6b","\x65","\xeb"),(int)2);
	nme_display_object_get_mouse_x= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_mouse_x","\xab","\x08","\x64","\x3c"),(int)1);
	nme_display_object_get_mouse_y= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_mouse_y","\xac","\x08","\x64","\x3c"),(int)1);
	nme_display_object_get_rotation= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_rotation","\x91","\xbc","\x7f","\xff"),(int)1);
	nme_display_object_set_rotation= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_rotation","\x05","\xe0","\x78","\x14"),(int)2);
	nme_display_object_get_bg= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_bg","\xd8","\xc4","\x64","\x6f"),(int)1);
	nme_display_object_set_bg= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_bg","\x4c","\x19","\xad","\x3b"),(int)2);
	nme_display_object_get_name= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_name","\x1e","\x0c","\xac","\xad"),(int)1);
	nme_display_object_set_name= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_name","\x92","\x65","\x09","\x5c"),(int)2);
	nme_display_object_get_width= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_width","\xd3","\xb4","\xbc","\x7c"),(int)1);
	nme_display_object_set_width= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_width","\xdf","\xa0","\x0d","\x60"),(int)2);
	nme_display_object_get_height= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_height","\x7a","\xfc","\xb0","\x5e"),(int)1);
	nme_display_object_set_height= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_height","\xee","\x9a","\x2e","\x62"),(int)2);
	nme_display_object_get_alpha= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_alpha","\x2b","\xa6","\xf0","\xd3"),(int)1);
	nme_display_object_set_alpha= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_alpha","\x37","\x92","\x41","\xb7"),(int)2);
	nme_display_object_get_blend_mode= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_blend_mode","\x64","\x7b","\x72","\xc8"),(int)1);
	nme_display_object_set_blend_mode= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_blend_mode","\xd8","\x63","\x92","\xe8"),(int)2);
	nme_display_object_get_cache_as_bitmap= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_cache_as_bitmap","\x6c","\xcc","\x57","\x9e"),(int)1);
	nme_display_object_set_cache_as_bitmap= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_cache_as_bitmap","\x78","\xbf","\xf4","\xda"),(int)2);
	nme_display_object_get_pedantic_bitmap_caching= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_pedantic_bitmap_caching","\x09","\x98","\xb5","\x54"),(int)1);
	nme_display_object_set_pedantic_bitmap_caching= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_pedantic_bitmap_caching","\x15","\x77","\x4e","\x97"),(int)2);
	nme_display_object_get_pixel_snapping= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_pixel_snapping","\x68","\xa5","\x15","\x91"),(int)1);
	nme_display_object_set_pixel_snapping= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_pixel_snapping","\xdc","\xd7","\xc4","\x6d"),(int)2);
	nme_display_object_get_visible= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_visible","\x7f","\x84","\x15","\x1f"),(int)1);
	nme_display_object_set_visible= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_visible","\x8b","\x8b","\x82","\x29"),(int)2);
	nme_display_object_set_filters= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_filters","\xd4","\xb4","\xa4","\x8f"),(int)2);
	nme_display_object_global_to_local= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_global_to_local","\xf9","\x24","\x9f","\x71"),(int)2);
	nme_display_object_local_to_global= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_local_to_global","\xc9","\x8a","\xe6","\xaa"),(int)2);
	nme_display_object_set_scale9_grid= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_scale9_grid","\x6f","\xe9","\xab","\x88"),(int)2);
	nme_display_object_set_scroll_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_scroll_rect","\x6f","\x55","\xd0","\xc4"),(int)2);
	nme_display_object_set_mask= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_mask","\x33","\x34","\x60","\x5b"),(int)2);
	nme_display_object_set_matrix= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_matrix","\x48","\xc9","\xaa","\x1b"),(int)2);
	nme_display_object_get_matrix= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_matrix","\xd4","\x2a","\x2d","\x18"),(int)3);
	nme_display_object_get_color_transform= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_color_transform","\x5d","\x35","\x0c","\x56"),(int)3);
	nme_display_object_set_color_transform= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_color_transform","\x69","\x28","\xa9","\x92"),(int)2);
	nme_display_object_get_pixel_bounds= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_pixel_bounds","\x21","\x73","\x64","\x06"),(int)2);
	nme_display_object_get_bounds= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_bounds","\x08","\x7b","\x82","\xc2"),(int)4);
	nme_display_object_hit_test_point= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_hit_test_point","\xd9","\x50","\x5c","\x48"),(int)5);
	nme_display_object_get_hit_enabled= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_get_hit_enabled","\xe2","\x45","\xd0","\x99"),(int)1);
	nme_display_object_set_hit_enabled= ::nme::Loader_obj::load(HX_HCSTRING("nme_display_object_set_hit_enabled","\xee","\xc2","\x9b","\x95"),(int)2);
	nme_doc_add_child= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1"),(int)2);
}

} // end namespace nme
} // end namespace display
