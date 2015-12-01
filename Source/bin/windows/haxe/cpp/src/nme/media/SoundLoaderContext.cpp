#include <hxcpp.h>

#ifndef INCLUDED_nme_media_SoundLoaderContext
#include <nme/media/SoundLoaderContext.h>
#endif
namespace nme{
namespace media{

Void SoundLoaderContext_obj::__construct()
{
HX_STACK_FRAME("nme.media.SoundLoaderContext","new",0x475a77d1,"nme.media.SoundLoaderContext.new","nme/media/SoundLoaderContext.hx",7,0x4d9852bd)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SoundLoaderContext_obj::~SoundLoaderContext_obj() { }

Dynamic SoundLoaderContext_obj::__CreateEmpty() { return  new SoundLoaderContext_obj; }
hx::ObjectPtr< SoundLoaderContext_obj > SoundLoaderContext_obj::__new()
{  hx::ObjectPtr< SoundLoaderContext_obj > _result_ = new SoundLoaderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic SoundLoaderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SoundLoaderContext_obj > _result_ = new SoundLoaderContext_obj();
	_result_->__construct();
	return _result_;}


SoundLoaderContext_obj::SoundLoaderContext_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SoundLoaderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class SoundLoaderContext_obj::__mClass;

void SoundLoaderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.media.SoundLoaderContext","\x5f","\x3b","\x54","\x97");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< SoundLoaderContext_obj >;
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
