#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif

Void Sys_obj::__construct()
{
	return null();
}

//Sys_obj::~Sys_obj() { }

Dynamic Sys_obj::__CreateEmpty() { return  new Sys_obj; }
hx::ObjectPtr< Sys_obj > Sys_obj::__new()
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Dynamic Sys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Sys_obj > _result_ = new Sys_obj();
	_result_->__construct();
	return _result_;}

Void Sys_obj::print( Dynamic v){
{
		HX_STACK_FRAME("Sys","print",0x483745ec,"Sys.print","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",25,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(25)
		::__hxcpp_print(v);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,print,(void))

Void Sys_obj::println( Dynamic v){
{
		HX_STACK_FRAME("Sys","println",0x3905f76e,"Sys.println","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",28,0x57bbb657)
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(29)
		Dynamic tmp = v;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::Sys_obj::print(tmp);
		HX_STACK_LINE(30)
		::Sys_obj::print(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,println,(void))

::haxe::io::Input Sys_obj::_stdin( ){
	HX_STACK_FRAME("Sys","stdin",0x03b9a107,"Sys.stdin","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",33,0x57bbb657)
	HX_STACK_LINE(34)
	Dynamic tmp = ::Sys_obj::file_stdin();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	::haxe::io::Input tmp1 = ::sys::io::FileInput_obj::__new(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(34)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,_stdin,return )

Array< ::String > Sys_obj::args( ){
	HX_STACK_FRAME("Sys","args",0xeaeddc7e,"Sys.args","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",50,0x57bbb657)
	HX_STACK_LINE(50)
	return ::__get_args();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,args,return )

::String Sys_obj::systemName( ){
	HX_STACK_FRAME("Sys","systemName",0xbea5b6bb,"Sys.systemName","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",80,0x57bbb657)
	HX_STACK_LINE(81)
	::String tmp = ::Sys_obj::sys_string();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Sys_obj,systemName,return )

Void Sys_obj::exit( int code){
{
		HX_STACK_FRAME("Sys","exit",0xed97463f,"Sys.exit","C:\\HaxeToolkit\\haxe\\std/cpp/_std/Sys.hx",109,0x57bbb657)
		HX_STACK_ARG(code,"code")
		HX_STACK_LINE(109)
		::__hxcpp_exit(code);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Sys_obj,exit,(void))

Dynamic Sys_obj::sys_string;

Dynamic Sys_obj::file_stdin;


Sys_obj::Sys_obj()
{
}

bool Sys_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"args") ) { outValue = args_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stdin") ) { outValue = _stdin_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"println") ) { outValue = println_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"systemName") ) { outValue = systemName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sys_string") ) { outValue = sys_string; return true;  }
		if (HX_FIELD_EQ(inName,"file_stdin") ) { outValue = file_stdin; return true;  }
	}
	return false;
}

bool Sys_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sys_string") ) { sys_string=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"file_stdin") ) { file_stdin=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::sys_string,HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sys_obj::file_stdin,HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_MARK_MEMBER_NAME(Sys_obj::file_stdin,"file_stdin");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sys_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sys_obj::sys_string,"sys_string");
	HX_VISIT_MEMBER_NAME(Sys_obj::file_stdin,"file_stdin");
};

#endif

hx::Class Sys_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("print","\x2d","\x58","\x8b","\xc8"),
	HX_HCSTRING("println","\xef","\xdb","\x33","\x84"),
	HX_HCSTRING("stdin","\x48","\xb3","\x0d","\x84"),
	HX_HCSTRING("args","\x5d","\x8d","\x74","\x40"),
	HX_HCSTRING("systemName","\xda","\xd8","\x82","\xf7"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),
	HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b"),
	::String(null()) };

void Sys_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Sys","\xed","\x64","\x3f","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sys_obj::__GetStatic;
	__mClass->mSetStaticField = &Sys_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Sys_obj >;
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

void Sys_obj::__boot()
{
	sys_string= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);
	file_stdin= ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("file_stdin","\x05","\xce","\xe4","\x2b"),(int)0);
}

