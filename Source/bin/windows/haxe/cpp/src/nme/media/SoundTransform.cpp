#include <hxcpp.h>

#ifndef INCLUDED_nme_media_SoundTransform
#include <nme/media/SoundTransform.h>
#endif
namespace nme{
namespace media{

Void SoundTransform_obj::__construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{
HX_STACK_FRAME("nme.media.SoundTransform","new",0x7f7341a1,"nme.media.SoundTransform.new","nme/media/SoundTransform.hx",11,0x5a2d5bed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_vol,"vol")
HX_STACK_ARG(__o_panning,"panning")
Float vol = __o_vol.Default(((Float)1.0));
Float panning = __o_panning.Default(((Float)0.0));
{
	HX_STACK_LINE(12)
	this->volume = vol;
	HX_STACK_LINE(13)
	this->pan = panning;
}
;
	return null();
}

//SoundTransform_obj::~SoundTransform_obj() { }

Dynamic SoundTransform_obj::__CreateEmpty() { return  new SoundTransform_obj; }
hx::ObjectPtr< SoundTransform_obj > SoundTransform_obj::__new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning)
{  hx::ObjectPtr< SoundTransform_obj > _result_ = new SoundTransform_obj();
	_result_->__construct(__o_vol,__o_panning);
	return _result_;}

Dynamic SoundTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundTransform_obj > _result_ = new SoundTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nme::media::SoundTransform SoundTransform_obj::clone( ){
	HX_STACK_FRAME("nme.media.SoundTransform","clone",0x633216de,"nme.media.SoundTransform.clone","nme/media/SoundTransform.hx",17,0x5a2d5bed)
	HX_STACK_THIS(this)
	HX_STACK_LINE(18)
	Float tmp = this->volume;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	Float tmp1 = this->pan;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(18)
	::nme::media::SoundTransform tmp2 = ::nme::media::SoundTransform_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(18)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(SoundTransform_obj,clone,return )


SoundTransform_obj::SoundTransform_obj()
{
}

Dynamic SoundTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return pan; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return volume; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SoundTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { pan=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"));
	outFields->push(HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,pan),HX_HCSTRING("pan","\x5d","\x51","\x55","\x00")},
	{hx::fsFloat,(int)offsetof(SoundTransform_obj,volume),HX_HCSTRING("volume","\xda","\x29","\x53","\x5f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("pan","\x5d","\x51","\x55","\x00"),
	HX_HCSTRING("volume","\xda","\x29","\x53","\x5f"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundTransform_obj::__mClass;

void SoundTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.media.SoundTransform","\x2f","\xdd","\x2f","\xff");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SoundTransform_obj >;
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
} // end namespace media
