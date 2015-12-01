#include <hxcpp.h>

#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_Bitmap
#include <nme/display/Bitmap.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_PixelSnapping
#include <nme/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
namespace nme{
namespace display{

Void Bitmap_obj::__construct(::nme::display::BitmapData bitmapData,::nme::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("nme.display.Bitmap","new",0x41e1a755,"nme.display.Bitmap.new","nme/display/Bitmap.hx",16,0x37ffc079)
HX_STACK_THIS(this)
HX_STACK_ARG(bitmapData,"bitmapData")
HX_STACK_ARG(pixelSnapping,"pixelSnapping")
HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(17)
	Dynamic tmp = ::nme::display::DisplayObject_obj::nme_create_display_object();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(17)
	super::__construct(tmp,HX_HCSTRING("Bitmap","\x0f","\x84","\xa0","\x25"));
	HX_STACK_LINE(19)
	bool tmp1 = (pixelSnapping == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	::nme::display::PixelSnapping tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(19)
	if ((tmp1)){
		HX_STACK_LINE(19)
		tmp2 = ::nme::display::PixelSnapping_obj::AUTO;
	}
	else{
		HX_STACK_LINE(19)
		tmp2 = pixelSnapping;
	}
	HX_STACK_LINE(19)
	this->set_pixelSnapping(tmp2);
	HX_STACK_LINE(20)
	bool tmp3 = smoothing;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(20)
	this->set_smoothing(tmp3);
	HX_STACK_LINE(22)
	bool tmp4 = (bitmapData != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(22)
	if ((tmp4)){
		HX_STACK_LINE(24)
		::nme::display::BitmapData tmp5 = bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(24)
		this->set_bitmapData(tmp5);
	}
	else{
		HX_STACK_LINE(26)
		::nme::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(26)
		bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(26)
		if ((tmp6)){
			HX_STACK_LINE(28)
			this->nmeRebuild();
		}
	}
}
;
	return null();
}

//Bitmap_obj::~Bitmap_obj() { }

Dynamic Bitmap_obj::__CreateEmpty() { return  new Bitmap_obj; }
hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new(::nme::display::BitmapData bitmapData,::nme::display::PixelSnapping pixelSnapping,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return _result_;}

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bitmap_obj > _result_ = new Bitmap_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

Void Bitmap_obj::nmeRebuild( ){
{
		HX_STACK_FRAME("nme.display.Bitmap","nmeRebuild",0x1346b5a0,"nme.display.Bitmap.nmeRebuild","nme/display/Bitmap.hx",33,0x37ffc079)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(34)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(34)
		if ((tmp1)){
			HX_STACK_LINE(36)
			::nme::display::Graphics tmp2 = this->get_graphics();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(36)
			::nme::display::Graphics gfx = tmp2;		HX_STACK_VAR(gfx,"gfx");
			HX_STACK_LINE(37)
			gfx->clear();
			HX_STACK_LINE(39)
			::nme::display::BitmapData tmp3 = this->bitmapData;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(39)
			bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(39)
			if ((tmp4)){
				HX_STACK_LINE(41)
				::nme::display::BitmapData tmp5 = this->bitmapData;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(41)
				bool tmp6 = this->smoothing;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(41)
				gfx->beginBitmapFill(tmp5,null(),false,tmp6);
				HX_STACK_LINE(42)
				::nme::display::BitmapData tmp7 = this->bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(42)
				int tmp8 = tmp7->get_width();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(42)
				::nme::display::BitmapData tmp9 = this->bitmapData;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(42)
				int tmp10 = tmp9->get_height();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(42)
				gfx->drawRect((int)0,(int)0,tmp8,tmp10);
				HX_STACK_LINE(43)
				gfx->endFill();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Bitmap_obj,nmeRebuild,(void))

::nme::display::BitmapData Bitmap_obj::set_bitmapData( ::nme::display::BitmapData inBitmapData){
	HX_STACK_FRAME("nme.display.Bitmap","set_bitmapData",0x7b3ff9a1,"nme.display.Bitmap.set_bitmapData","nme/display/Bitmap.hx",50,0x37ffc079)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inBitmapData,"inBitmapData")
	HX_STACK_LINE(51)
	this->bitmapData = inBitmapData;
	HX_STACK_LINE(52)
	this->nmeRebuild();
	HX_STACK_LINE(54)
	::nme::display::BitmapData tmp = inBitmapData;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(54)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

bool Bitmap_obj::set_smoothing( bool inSmooth){
	HX_STACK_FRAME("nme.display.Bitmap","set_smoothing",0x729d868c,"nme.display.Bitmap.set_smoothing","nme/display/Bitmap.hx",58,0x37ffc079)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inSmooth,"inSmooth")
	HX_STACK_LINE(59)
	this->smoothing = inSmooth;
	HX_STACK_LINE(60)
	this->nmeRebuild();
	HX_STACK_LINE(62)
	bool tmp = inSmooth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(62)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_smoothing,return )


Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(mGraphics,"mGraphics");
	::nme::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(mGraphics,"mGraphics");
	::nme::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		if (HX_FIELD_EQ(inName,"mGraphics") ) { return mGraphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
		if (HX_FIELD_EQ(inName,"nmeRebuild") ) { return nmeRebuild_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_smoothing") ) { return set_smoothing_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return set_bitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bitmap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp != hx::paccNever) return set_smoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mGraphics") ) { mGraphics=inValue.Cast< ::nme::display::Graphics >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp != hx::paccNever) return set_bitmapData(inValue);bitmapData=inValue.Cast< ::nme::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	outFields->push(HX_HCSTRING("mGraphics","\x58","\x6a","\xe3","\xbc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nme::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{hx::fsObject /*::nme::display::Graphics*/ ,(int)offsetof(Bitmap_obj,mGraphics),HX_HCSTRING("mGraphics","\x58","\x6a","\xe3","\xbc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("mGraphics","\x58","\x6a","\xe3","\xbc"),
	HX_HCSTRING("nmeRebuild","\xf5","\x93","\x86","\x70"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("set_smoothing","\x57","\x8b","\x4b","\x9c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Bitmap","\xe3","\x58","\x24","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
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
