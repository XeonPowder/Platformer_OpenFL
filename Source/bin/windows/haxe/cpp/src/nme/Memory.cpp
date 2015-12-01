#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Memory
#include <nme/Memory.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{

Void Memory_obj::__construct()
{
	return null();
}

//Memory_obj::~Memory_obj() { }

Dynamic Memory_obj::__CreateEmpty() { return  new Memory_obj; }
hx::ObjectPtr< Memory_obj > Memory_obj::__new()
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

Dynamic Memory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Memory_obj > _result_ = new Memory_obj();
	_result_->__construct();
	return _result_;}

::nme::utils::ByteArray Memory_obj::gcRef;

int Memory_obj::len;

Void Memory_obj::select( ::nme::utils::ByteArray inBytes){
{
		HX_STACK_FRAME("nme.Memory","select",0xdc818981,"nme.Memory.select","nme/Memory.hx",22,0x2a345af4)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_LINE(29)
		::nme::Memory_obj::gcRef = inBytes;
		HX_STACK_LINE(30)
		bool tmp = (inBytes == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		if ((tmp)){
			HX_STACK_LINE(31)
			::__hxcpp_memory_clear();
		}
		else{
			HX_STACK_LINE(33)
			::__hxcpp_memory_select(inBytes->b);
		}
		HX_STACK_LINE(36)
		bool tmp1 = (inBytes == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		if ((tmp1)){
			HX_STACK_LINE(37)
			::nme::Memory_obj::len = (int)0;
		}
		else{
			HX_STACK_LINE(39)
			::nme::Memory_obj::len = inBytes->length;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,select,(void))

int Memory_obj::getByte( int addr){
	HX_STACK_FRAME("nme.Memory","getByte",0xa5f81499,"nme.Memory.getByte","nme/Memory.hx",102,0x2a345af4)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(104)
	int tmp = ::__hxcpp_memory_get_byte(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(104)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getByte,return )

Float Memory_obj::getDouble( int addr){
	HX_STACK_FRAME("nme.Memory","getDouble",0x2ef566e2,"nme.Memory.getDouble","nme/Memory.hx",108,0x2a345af4)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(110)
	Float tmp = ::__hxcpp_memory_get_double(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(110)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getDouble,return )

Float Memory_obj::getFloat( int addr){
	HX_STACK_FRAME("nme.Memory","getFloat",0xd818aeeb,"nme.Memory.getFloat","nme/Memory.hx",114,0x2a345af4)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(116)
	Float tmp = ::__hxcpp_memory_get_float(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(116)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getFloat,return )

int Memory_obj::getI32( int addr){
	HX_STACK_FRAME("nme.Memory","getI32",0x156d80d7,"nme.Memory.getI32","nme/Memory.hx",120,0x2a345af4)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(122)
	int tmp = ::__hxcpp_memory_get_i32(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getI32,return )

int Memory_obj::getUI16( int addr){
	HX_STACK_FRAME("nme.Memory","getUI16",0xb2627baa,"nme.Memory.getUI16","nme/Memory.hx",126,0x2a345af4)
	HX_STACK_ARG(addr,"addr")
	HX_STACK_LINE(128)
	int tmp = ::__hxcpp_memory_get_ui16(addr);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(128)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Memory_obj,getUI16,return )

Void Memory_obj::setByte( int addr,int v){
{
		HX_STACK_FRAME("nme.Memory","setByte",0x98f9a5a5,"nme.Memory.setByte","nme/Memory.hx",134,0x2a345af4)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(134)
		::__hxcpp_memory_set_byte(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setByte,(void))

Void Memory_obj::setDouble( int addr,Float v){
{
		HX_STACK_FRAME("nme.Memory","setDouble",0x124652ee,"nme.Memory.setDouble","nme/Memory.hx",140,0x2a345af4)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(140)
		::__hxcpp_memory_set_double(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setDouble,(void))

Void Memory_obj::setFloat( int addr,Float v){
{
		HX_STACK_FRAME("nme.Memory","setFloat",0x8676085f,"nme.Memory.setFloat","nme/Memory.hx",146,0x2a345af4)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(146)
		::__hxcpp_memory_set_float(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setFloat,(void))

Void Memory_obj::setI16( int addr,int v){
{
		HX_STACK_FRAME("nme.Memory","setI16",0xe1b5d391,"nme.Memory.setI16","nme/Memory.hx",152,0x2a345af4)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(152)
		::__hxcpp_memory_set_i16(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI16,(void))

Void Memory_obj::setI32( int addr,int v){
{
		HX_STACK_FRAME("nme.Memory","setI32",0xe1b5d54b,"nme.Memory.setI32","nme/Memory.hx",158,0x2a345af4)
		HX_STACK_ARG(addr,"addr")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(158)
		::__hxcpp_memory_set_i32(addr,v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Memory_obj,setI32,(void))


Memory_obj::Memory_obj()
{
}

bool Memory_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { outValue = len; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { outValue = gcRef; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"select") ) { outValue = select_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getI32") ) { outValue = getI32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI16") ) { outValue = setI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setI32") ) { outValue = setI32_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByte") ) { outValue = getByte_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getUI16") ) { outValue = getUI16_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setByte") ) { outValue = setByte_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFloat") ) { outValue = getFloat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFloat") ) { outValue = setFloat_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getDouble") ) { outValue = getDouble_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setDouble") ) { outValue = setDouble_dyn(); return true;  }
	}
	return false;
}

bool Memory_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"len") ) { len=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"gcRef") ) { gcRef=ioValue.Cast< ::nme::utils::ByteArray >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::nme::utils::ByteArray*/ ,(void *) &Memory_obj::gcRef,HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f")},
	{hx::fsInt,(void *) &Memory_obj::len,HX_HCSTRING("len","\xd5","\x4b","\x52","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_MARK_MEMBER_NAME(Memory_obj::len,"len");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Memory_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Memory_obj::gcRef,"gcRef");
	HX_VISIT_MEMBER_NAME(Memory_obj::len,"len");
};

#endif

hx::Class Memory_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("gcRef","\x97","\x70","\xf4","\x8f"),
	HX_HCSTRING("len","\xd5","\x4b","\x52","\x00"),
	HX_HCSTRING("select","\xfc","\x1a","\x33","\x6a"),
	HX_HCSTRING("getByte","\xbe","\xce","\xa5","\x13"),
	HX_HCSTRING("getDouble","\x47","\xb4","\x21","\xaf"),
	HX_HCSTRING("getFloat","\x26","\xd5","\x6d","\x62"),
	HX_HCSTRING("getI32","\x52","\x12","\x1f","\xa3"),
	HX_HCSTRING("getUI16","\xcf","\x35","\x10","\x20"),
	HX_HCSTRING("setByte","\xca","\x5f","\xa7","\x06"),
	HX_HCSTRING("setDouble","\x53","\xa0","\x72","\x92"),
	HX_HCSTRING("setFloat","\x9a","\x2e","\xcb","\x10"),
	HX_HCSTRING("setI16","\x0c","\x65","\x67","\x6f"),
	HX_HCSTRING("setI32","\xc6","\x66","\x67","\x6f"),
	::String(null()) };

void Memory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Memory","\x49","\xd3","\xdf","\xb3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Memory_obj::__GetStatic;
	__mClass->mSetStaticField = &Memory_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Memory_obj >;
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
