#include <hxcpp.h>

#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
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
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_geom_Transform
#include <nme/geom/Transform.h>
#endif
namespace nme{
namespace geom{

Void Transform_obj::__construct(::nme::display::DisplayObject inParent)
{
HX_STACK_FRAME("nme.geom.Transform","new",0x4f5e3f34,"nme.geom.Transform.new","nme/geom/Transform.hx",18,0xe6d90f1c)
HX_STACK_THIS(this)
HX_STACK_ARG(inParent,"inParent")
{
	HX_STACK_LINE(18)
	this->nmeObj = inParent;
}
;
	return null();
}

//Transform_obj::~Transform_obj() { }

Dynamic Transform_obj::__CreateEmpty() { return  new Transform_obj; }
hx::ObjectPtr< Transform_obj > Transform_obj::__new(::nme::display::DisplayObject inParent)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inParent);
	return _result_;}

Dynamic Transform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Transform_obj > _result_ = new Transform_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

::nme::geom::ColorTransform Transform_obj::get_colorTransform( ){
	HX_STACK_FRAME("nme.geom.Transform","get_colorTransform",0x1a9d17fe,"nme.geom.Transform.get_colorTransform","nme/geom/Transform.hx",22,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(22)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::nme::geom::ColorTransform tmp1 = tmp->nmeGetColorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_colorTransform,return )

::nme::geom::ColorTransform Transform_obj::set_colorTransform( ::nme::geom::ColorTransform inTrans){
	HX_STACK_FRAME("nme.geom.Transform","set_colorTransform",0xf74c4a72,"nme.geom.Transform.set_colorTransform","nme/geom/Transform.hx",23,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inTrans,"inTrans")
	HX_STACK_LINE(23)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::nme::geom::ColorTransform tmp1 = inTrans;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	tmp->nmeSetColorTransform(tmp1);
	HX_STACK_LINE(23)
	::nme::geom::ColorTransform tmp2 = inTrans;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_colorTransform,return )

::nme::geom::ColorTransform Transform_obj::get_concatenatedColorTransform( ){
	HX_STACK_FRAME("nme.geom.Transform","get_concatenatedColorTransform",0xfc9184ed,"nme.geom.Transform.get_concatenatedColorTransform","nme/geom/Transform.hx",24,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(24)
	::nme::geom::ColorTransform tmp1 = tmp->nmeGetConcatenatedColorTransform();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(24)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedColorTransform,return )

::nme::geom::Matrix Transform_obj::get_concatenatedMatrix( ){
	HX_STACK_FRAME("nme.geom.Transform","get_concatenatedMatrix",0xdb7bdfa5,"nme.geom.Transform.get_concatenatedMatrix","nme/geom/Transform.hx",25,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(25)
	::nme::geom::Matrix tmp1 = tmp->nmeGetConcatenatedMatrix();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_concatenatedMatrix,return )

::nme::geom::Matrix Transform_obj::get_matrix( ){
	HX_STACK_FRAME("nme.geom.Transform","get_matrix",0xbd5579b6,"nme.geom.Transform.get_matrix","nme/geom/Transform.hx",26,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::nme::geom::Matrix tmp1 = tmp->nmeGetMatrix();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_matrix,return )

::nme::geom::Matrix Transform_obj::set_matrix( ::nme::geom::Matrix inMatrix){
	HX_STACK_FRAME("nme.geom.Transform","set_matrix",0xc0d3182a,"nme.geom.Transform.set_matrix","nme/geom/Transform.hx",27,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inMatrix,"inMatrix")
	HX_STACK_LINE(27)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::nme::geom::Matrix tmp1 = inMatrix;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	tmp->nmeSetMatrix(tmp1);
	HX_STACK_LINE(27)
	::nme::geom::Matrix tmp2 = inMatrix;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Transform_obj,set_matrix,return )

::nme::geom::Rectangle Transform_obj::get_pixelBounds( ){
	HX_STACK_FRAME("nme.geom.Transform","get_pixelBounds",0xc7eb7e06,"nme.geom.Transform.get_pixelBounds","nme/geom/Transform.hx",28,0xe6d90f1c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(28)
	::nme::display::DisplayObject tmp = this->nmeObj;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(28)
	::nme::geom::Rectangle tmp1 = tmp->nmeGetPixelBounds();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(28)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Transform_obj,get_pixelBounds,return )


Transform_obj::Transform_obj()
{
}

void Transform_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Transform);
	HX_MARK_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_MARK_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_MARK_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_MARK_MEMBER_NAME(nmeObj,"nmeObj");
	HX_MARK_END_CLASS();
}

void Transform_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(concatenatedColorTransform,"concatenatedColorTransform");
	HX_VISIT_MEMBER_NAME(concatenatedMatrix,"concatenatedMatrix");
	HX_VISIT_MEMBER_NAME(pixelBounds,"pixelBounds");
	HX_VISIT_MEMBER_NAME(nmeObj,"nmeObj");
}

Dynamic Transform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp != hx::paccNever) return get_matrix(); }
		if (HX_FIELD_EQ(inName,"nmeObj") ) { return nmeObj; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_matrix") ) { return get_matrix_dyn(); }
		if (HX_FIELD_EQ(inName,"set_matrix") ) { return set_matrix_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { return inCallProp != hx::paccNever ? get_pixelBounds() : pixelBounds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp != hx::paccNever) return get_colorTransform(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_pixelBounds") ) { return get_pixelBounds_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { return inCallProp != hx::paccNever ? get_concatenatedMatrix() : concatenatedMatrix; }
		if (HX_FIELD_EQ(inName,"get_colorTransform") ) { return get_colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"set_colorTransform") ) { return set_colorTransform_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"get_concatenatedMatrix") ) { return get_concatenatedMatrix_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { return inCallProp != hx::paccNever ? get_concatenatedColorTransform() : concatenatedColorTransform; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"get_concatenatedColorTransform") ) { return get_concatenatedColorTransform_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Transform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { if (inCallProp != hx::paccNever) return set_matrix(inValue); }
		if (HX_FIELD_EQ(inName,"nmeObj") ) { nmeObj=inValue.Cast< ::nme::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pixelBounds") ) { pixelBounds=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { if (inCallProp != hx::paccNever) return set_colorTransform(inValue); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"concatenatedMatrix") ) { concatenatedMatrix=inValue.Cast< ::nme::geom::Matrix >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"concatenatedColorTransform") ) { concatenatedColorTransform=inValue.Cast< ::nme::geom::ColorTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Transform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"));
	outFields->push(HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"));
	outFields->push(HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"));
	outFields->push(HX_HCSTRING("nmeObj","\x51","\xc0","\xed","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::geom::ColorTransform*/ ,(int)offsetof(Transform_obj,concatenatedColorTransform),HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77")},
	{hx::fsObject /*::nme::geom::Matrix*/ ,(int)offsetof(Transform_obj,concatenatedMatrix),HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(Transform_obj,pixelBounds),HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7")},
	{hx::fsObject /*::nme::display::DisplayObject*/ ,(int)offsetof(Transform_obj,nmeObj),HX_HCSTRING("nmeObj","\x51","\xc0","\xed","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("concatenatedColorTransform","\xf8","\xe8","\x5a","\x77"),
	HX_HCSTRING("concatenatedMatrix","\xb0","\xc0","\x9c","\xf8"),
	HX_HCSTRING("pixelBounds","\x9b","\x69","\xaa","\xd7"),
	HX_HCSTRING("nmeObj","\x51","\xc0","\xed","\x00"),
	HX_HCSTRING("get_colorTransform","\x52","\xb8","\xd9","\x48"),
	HX_HCSTRING("set_colorTransform","\xc6","\xea","\x88","\x25"),
	HX_HCSTRING("get_concatenatedColorTransform","\x41","\x53","\x67","\xc6"),
	HX_HCSTRING("get_concatenatedMatrix","\xf9","\x39","\x31","\x52"),
	HX_HCSTRING("get_matrix","\x0a","\xa6","\x4f","\xac"),
	HX_HCSTRING("set_matrix","\x7e","\x44","\xcd","\xaf"),
	HX_HCSTRING("get_pixelBounds","\x32","\x21","\x8c","\x98"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Transform_obj::__mClass,"__mClass");
};

#endif

hx::Class Transform_obj::__mClass;

void Transform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.geom.Transform","\x42","\xd5","\x21","\xb2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Transform_obj >;
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
} // end namespace geom
