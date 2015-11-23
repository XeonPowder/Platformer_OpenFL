#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
namespace core2{
namespace game{
namespace assets{

Void UUID_obj::__construct()
{
	return null();
}

//UUID_obj::~UUID_obj() { }

Dynamic UUID_obj::__CreateEmpty() { return  new UUID_obj; }
hx::ObjectPtr< UUID_obj > UUID_obj::__new()
{  hx::ObjectPtr< UUID_obj > _result_ = new UUID_obj();
	_result_->__construct();
	return _result_;}

Dynamic UUID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UUID_obj > _result_ = new UUID_obj();
	_result_->__construct();
	return _result_;}

::String UUID_obj::UID_CHARS;

::String UUID_obj::UID_NUM;

::String UUID_obj::randomChar( Dynamic __o_size){
Dynamic size = __o_size.Default(32);
	HX_STACK_FRAME("core2.game.assets.UUID","randomChar",0xccea33e2,"core2.game.assets.UUID.randomChar","core2/game/assets/UUID.hx",15,0x466cc9f8)
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(17)
		bool tmp = (size == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(17)
		if ((tmp)){
			HX_STACK_LINE(17)
			size = (int)32;
		}
		HX_STACK_LINE(19)
		::String tmp1 = ::core2::game::assets::UUID_obj::UID_CHARS;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(19)
		int nchars = tmp1.length;		HX_STACK_VAR(nchars,"nchars");
		HX_STACK_LINE(21)
		::StringBuf tmp2 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(21)
		::StringBuf uid = tmp2;		HX_STACK_VAR(uid,"uid");
		HX_STACK_LINE(23)
		{
			HX_STACK_LINE(23)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			while((true)){
				HX_STACK_LINE(23)
				bool tmp3 = (_g < size);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(23)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(23)
				if ((tmp4)){
					HX_STACK_LINE(23)
					break;
				}
				HX_STACK_LINE(23)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(23)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(24)
				{
					HX_STACK_LINE(24)
					::String tmp6 = ::core2::game::assets::UUID_obj::UID_CHARS;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(24)
					int tmp7 = nchars;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(24)
					int tmp8 = ::Std_obj::random(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(24)
					Dynamic tmp9 = tmp6.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(24)
					int c = tmp9;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(24)
					int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(24)
					::String tmp11 = ::String::fromCharCode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(24)
					uid->b->push(tmp11);
				}
			}
		}
		HX_STACK_LINE(27)
		::String tmp3 = uid->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UUID_obj,randomChar,return )

int UUID_obj::randomNum( Dynamic __o_size){
Dynamic size = __o_size.Default(32);
	HX_STACK_FRAME("core2.game.assets.UUID","randomNum",0x2a476eba,"core2.game.assets.UUID.randomNum","core2/game/assets/UUID.hx",29,0x466cc9f8)
	HX_STACK_ARG(size,"size")
{
		HX_STACK_LINE(30)
		bool tmp = (size == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		if ((tmp)){
			HX_STACK_LINE(30)
			size = (int)32;
		}
		HX_STACK_LINE(31)
		::String tmp1 = ::core2::game::assets::UUID_obj::UID_NUM;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		int nchars = tmp1.length;		HX_STACK_VAR(nchars,"nchars");
		HX_STACK_LINE(32)
		::StringBuf tmp2 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(32)
		::StringBuf uid = tmp2;		HX_STACK_VAR(uid,"uid");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(33)
			while((true)){
				HX_STACK_LINE(33)
				bool tmp3 = (_g < size);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(33)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				if ((tmp4)){
					HX_STACK_LINE(33)
					break;
				}
				HX_STACK_LINE(33)
				int tmp5 = (_g)++;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(33)
				int i = tmp5;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(34)
				{
					HX_STACK_LINE(34)
					::String tmp6 = ::core2::game::assets::UUID_obj::UID_NUM;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(34)
					int tmp7 = nchars;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(34)
					int tmp8 = ::Std_obj::random(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(34)
					Dynamic tmp9 = tmp6.charCodeAt(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(34)
					int c = tmp9;		HX_STACK_VAR(c,"c");
					HX_STACK_LINE(34)
					int tmp10 = c;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(34)
					::String tmp11 = ::String::fromCharCode(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(34)
					uid->b->push(tmp11);
				}
			}
		}
		HX_STACK_LINE(36)
		::String tmp3 = uid->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		Dynamic tmp4 = ::Std_obj::parseInt(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(UUID_obj,randomNum,return )


UUID_obj::UUID_obj()
{
}

bool UUID_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"UID_NUM") ) { outValue = UID_NUM; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"UID_CHARS") ) { outValue = UID_CHARS; return true;  }
		if (HX_FIELD_EQ(inName,"randomNum") ) { outValue = randomNum_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"randomChar") ) { outValue = randomChar_dyn(); return true;  }
	}
	return false;
}

bool UUID_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"UID_NUM") ) { UID_NUM=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"UID_CHARS") ) { UID_CHARS=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &UUID_obj::UID_CHARS,HX_HCSTRING("UID_CHARS","\x6e","\x0f","\xc7","\x24")},
	{hx::fsString,(void *) &UUID_obj::UID_NUM,HX_HCSTRING("UID_NUM","\x97","\xf6","\xf3","\x64")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UUID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UUID_obj::UID_CHARS,"UID_CHARS");
	HX_MARK_MEMBER_NAME(UUID_obj::UID_NUM,"UID_NUM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UUID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UUID_obj::UID_CHARS,"UID_CHARS");
	HX_VISIT_MEMBER_NAME(UUID_obj::UID_NUM,"UID_NUM");
};

#endif

hx::Class UUID_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UID_CHARS","\x6e","\x0f","\xc7","\x24"),
	HX_HCSTRING("UID_NUM","\x97","\xf6","\xf3","\x64"),
	HX_HCSTRING("randomChar","\x79","\x6a","\x94","\xb1"),
	HX_HCSTRING("randomNum","\x03","\x58","\x49","\xa7"),
	::String(null()) };

void UUID_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.assets.UUID","\x65","\x3c","\x79","\x8b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &UUID_obj::__GetStatic;
	__mClass->mSetStaticField = &UUID_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< UUID_obj >;
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

void UUID_obj::__boot()
{
	UID_CHARS= HX_HCSTRING("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_=+[]();:.,{}","\x21","\x45","\x89","\x2a");
	UID_NUM= HX_HCSTRING("0123456789","\x05","\x7a","\x73","\x55");
}

} // end namespace core2
} // end namespace game
} // end namespace assets
