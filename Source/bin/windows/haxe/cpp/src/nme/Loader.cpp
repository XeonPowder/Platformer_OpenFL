#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif
namespace nme{

Void Loader_obj::__construct()
{
	return null();
}

//Loader_obj::~Loader_obj() { }

Dynamic Loader_obj::__CreateEmpty() { return  new Loader_obj; }
hx::ObjectPtr< Loader_obj > Loader_obj::__new()
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

Dynamic Loader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Loader_obj > _result_ = new Loader_obj();
	_result_->__construct();
	return _result_;}

bool Loader_obj::foundNdll;

bool Loader_obj::moduleInit;

::String Loader_obj::moduleName;

::String Loader_obj::findHaxeLib( ::String inLib){
	HX_STACK_FRAME("nme.Loader","findHaxeLib",0x6d6ccef3,"nme.Loader.findHaxeLib","nme/Loader.hx",26,0xb976d522)
	HX_STACK_ARG(inLib,"inLib")
	HX_STACK_LINE(27)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(29)
		::sys::io::Process tmp = ::sys::io::Process_obj::__new(HX_HCSTRING("haxelib","\xdf","\xb6","\x80","\x08"),Array_obj< ::String >::__new().Add(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")).Add(inLib));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		::sys::io::Process proc = tmp;		HX_STACK_VAR(proc,"proc");
		HX_STACK_LINE(31)
		bool tmp1 = (proc != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(31)
		if ((tmp1)){
			HX_STACK_LINE(33)
			::haxe::io::Input stream = proc->_stdout;		HX_STACK_VAR(stream,"stream");
			HX_STACK_LINE(35)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(37)
				while((true)){
					HX_STACK_LINE(39)
					::String tmp2 = stream->readLine();		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(39)
					::String s = tmp2;		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(41)
					::String tmp3 = s.substr((int)0,(int)1);		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(41)
					bool tmp4 = (tmp3 != HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(41)
					if ((tmp4)){
						HX_STACK_LINE(43)
						stream->close();
						HX_STACK_LINE(44)
						proc->close();
						HX_STACK_LINE(45)
						::String tmp5 = (HX_HCSTRING("Found haxelib ","\x1f","\xa6","\x4d","\xc9") + s);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(45)
						::nme::Loader_obj::loaderTrace(tmp5);
						HX_STACK_LINE(46)
						::String tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(46)
						return tmp6;
					}
				}
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
					}
				}
			}
			HX_STACK_LINE(52)
			stream->close();
			HX_STACK_LINE(53)
			proc->close();
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
			}
		}
	}
	HX_STACK_LINE(58)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,findHaxeLib,return )

Dynamic Loader_obj::load( ::String func,int args){
	HX_STACK_FRAME("nme.Loader","load",0xe58ecf19,"nme.Loader.load","nme/Loader.hx",62,0xb976d522)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(67)
	bool tmp = ::nme::Loader_obj::moduleInit;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(67)
	if ((tmp)){
		HX_STACK_LINE(69)
		bool tmp1 = ::nme::Loader_obj::foundNdll;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(69)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		if ((tmp2)){
			HX_STACK_LINE(70)
			return null();
		}
		HX_STACK_LINE(71)
		::String tmp3 = ::nme::Loader_obj::moduleName;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		::String tmp4 = func;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		int tmp5 = args;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(71)
		Dynamic tmp6 = ::cpp::Lib_obj::load(tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(71)
		return tmp6;
	}
	HX_STACK_LINE(78)
	::nme::Loader_obj::moduleInit = true;
	HX_STACK_LINE(79)
	::nme::Loader_obj::moduleName = HX_HCSTRING("nme","\x46","\xd7","\x53","\x00");
	HX_STACK_LINE(82)
	::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	Dynamic tmp3 = ::nme::Loader_obj::tryLoad(HX_HCSTRING("./nme","\xa5","\x8d","\xd3","\x9b"),tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(83)
	bool tmp4 = (result == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(83)
	if ((tmp4)){
		HX_STACK_LINE(84)
		::String tmp5 = func;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(84)
		int tmp6 = args;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(84)
		Dynamic tmp7 = ::nme::Loader_obj::tryLoad(HX_HCSTRING(".\\nme","\x98","\x27","\x92","\xb9"),tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(84)
		result = tmp7;
	}
	HX_STACK_LINE(87)
	bool tmp5 = (result == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(87)
	if ((tmp5)){
		HX_STACK_LINE(88)
		::String tmp6 = func;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(88)
		int tmp7 = args;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(88)
		Dynamic tmp8 = ::nme::Loader_obj::tryLoad(HX_HCSTRING("nme","\x46","\xd7","\x53","\x00"),tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(88)
		result = tmp8;
	}
	HX_STACK_LINE(91)
	bool tmp6 = (result == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	if ((tmp6)){
		HX_STACK_LINE(93)
		Dynamic tmp7 = ::nme::Loader_obj::sysName();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(93)
		Dynamic tmp8 = tmp7->__Field(HX_HCSTRING("substr","\x31","\xef","\x0a","\x9a"), hx::paccDynamic )((int)7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(93)
		::String tmp9 = tmp8->__Field(HX_HCSTRING("toLowerCase","\x56","\x4c","\x64","\xb8"), hx::paccDynamic )();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(93)
		bool tmp10 = (tmp9 == HX_HCSTRING("windows","\x83","\xde","\x74","\xe8"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(93)
		::String tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(93)
		if ((tmp10)){
			HX_STACK_LINE(93)
			tmp11 = HX_HCSTRING("\\","\x5c","\x00","\x00","\x00");
		}
		else{
			HX_STACK_LINE(93)
			tmp11 = HX_HCSTRING("/","\x2f","\x00","\x00","\x00");
		}
		HX_STACK_LINE(93)
		::String slash = tmp11;		HX_STACK_VAR(slash,"slash");
		HX_STACK_LINE(94)
		::String tmp12 = ::nme::Loader_obj::findHaxeLib(HX_HCSTRING("nme","\x46","\xd7","\x53","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(94)
		::String haxelib = tmp12;		HX_STACK_VAR(haxelib,"haxelib");
		HX_STACK_LINE(96)
		bool tmp13 = (haxelib != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(96)
		if ((tmp13)){
			HX_STACK_LINE(98)
			::String tmp14 = (haxelib + slash);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(98)
			::String tmp15 = (tmp14 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(98)
			::String tmp16 = slash;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(98)
			::String tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(98)
			Dynamic tmp18 = ::nme::Loader_obj::sysName();		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(98)
			::String tmp19 = ::Std_obj::string(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(98)
			::String tmp20 = (tmp17 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(98)
			::String tmp21 = slash;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(98)
			::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(98)
			::String tmp23 = (tmp22 + HX_HCSTRING("nme","\x46","\xd7","\x53","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(98)
			::String tmp24 = func;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(98)
			int tmp25 = args;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(98)
			Dynamic tmp26 = ::nme::Loader_obj::tryLoad(tmp23,tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(98)
			result = tmp26;
			HX_STACK_LINE(100)
			bool tmp27 = (result == null());		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(100)
			if ((tmp27)){
				HX_STACK_LINE(101)
				::String tmp28 = (haxelib + slash);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(101)
				::String tmp29 = (tmp28 + HX_HCSTRING("ndll","\x36","\xb8","\x01","\x49"));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(101)
				::String tmp30 = slash;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(101)
				::String tmp31 = (tmp29 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(101)
				Dynamic tmp32 = ::nme::Loader_obj::sysName();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(101)
				::String tmp33 = ::Std_obj::string(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(101)
				::String tmp34 = (tmp31 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(101)
				::String tmp35 = (tmp34 + HX_HCSTRING("64","\x3e","\x2f","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(101)
				::String tmp36 = slash;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(101)
				::String tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(101)
				::String tmp38 = (tmp37 + HX_HCSTRING("nme","\x46","\xd7","\x53","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(101)
				::String tmp39 = func;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(101)
				int tmp40 = args;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(101)
				Dynamic tmp41 = ::nme::Loader_obj::tryLoad(tmp38,tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(101)
				result = tmp41;
			}
		}
	}
	HX_STACK_LINE(105)
	Dynamic tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(105)
	::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(105)
	::String tmp9 = (HX_HCSTRING("Result : ","\xe9","\x19","\x2c","\x14") + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(105)
	::nme::Loader_obj::loaderTrace(tmp9);
	HX_STACK_LINE(107)
	bool tmp10 = (result != null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(107)
	::nme::Loader_obj::foundNdll = tmp10;
	HX_STACK_LINE(113)
	Dynamic tmp11 = result;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(113)
	return tmp11;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Loader_obj,load,return )

Void Loader_obj::loaderTrace( ::String inStr){
{
		HX_STACK_FRAME("nme.Loader","loaderTrace",0x0e5a30df,"nme.Loader.loaderTrace","nme/Loader.hx",137,0xb976d522)
		HX_STACK_ARG(inStr,"inStr")
		HX_STACK_LINE(140)
		Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("get_env","\x84","\xcc","\xc1","\x26"),(int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Dynamic get_env = tmp;		HX_STACK_VAR(get_env,"get_env");
		HX_STACK_LINE(141)
		Dynamic tmp1 = get_env(HX_HCSTRING("NME_LOAD_DEBUG","\xd3","\xd3","\xe9","\xe7"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(141)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(141)
		bool debug = tmp2;		HX_STACK_VAR(debug,"debug");
		HX_STACK_LINE(146)
		bool tmp3 = debug;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		if ((tmp3)){
			HX_STACK_LINE(147)
			::String tmp4 = inStr;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(147)
			::cpp::Lib_obj::println(tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Loader_obj,loaderTrace,(void))

Dynamic Loader_obj::sysName( ){
	HX_STACK_FRAME("nme.Loader","sysName",0xdc807ae5,"nme.Loader.sysName","nme/Loader.hx",151,0xb976d522)
	HX_STACK_LINE(154)
	Dynamic tmp = ::cpp::Lib_obj::load(HX_HCSTRING("std","\xa3","\xa8","\x57","\x00"),HX_HCSTRING("sys_string","\x03","\xf9","\xde","\x46"),(int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	Dynamic sys_string = tmp;		HX_STACK_VAR(sys_string,"sys_string");
	HX_STACK_LINE(155)
	Dynamic tmp1 = sys_string();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(155)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Loader_obj,sysName,return )

Dynamic Loader_obj::tryLoad( ::String inName,::String func,int args){
	HX_STACK_FRAME("nme.Loader","tryLoad",0xacb60dee,"nme.Loader.tryLoad","nme/Loader.hx",162,0xb976d522)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(args,"args")
	HX_STACK_LINE(163)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(165)
		::String tmp = inName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(165)
		::String tmp1 = func;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(165)
		int tmp2 = args;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(165)
		Dynamic tmp3 = ::cpp::Lib_obj::load(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(165)
		Dynamic result = tmp3;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(167)
		bool tmp4 = (result != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(167)
		if ((tmp4)){
			HX_STACK_LINE(169)
			::String tmp5 = (HX_HCSTRING("Got result ","\xaf","\xe9","\x02","\x45") + inName);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			::nme::Loader_obj::loaderTrace(tmp5);
			HX_STACK_LINE(170)
			::nme::Loader_obj::moduleName = inName;
			HX_STACK_LINE(171)
			Dynamic tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			return tmp6;
		}
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(176)
				::String tmp = (HX_HCSTRING("Failed to load : ","\x1e","\xca","\x38","\x9b") + inName);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(176)
				::nme::Loader_obj::loaderTrace(tmp);
			}
		}
	}
	HX_STACK_LINE(179)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Loader_obj,tryLoad,return )


Loader_obj::Loader_obj()
{
}

bool Loader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sysName") ) { outValue = sysName_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"tryLoad") ) { outValue = tryLoad_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"foundNdll") ) { outValue = foundNdll; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"moduleInit") ) { outValue = moduleInit; return true;  }
		if (HX_FIELD_EQ(inName,"moduleName") ) { outValue = moduleName; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"findHaxeLib") ) { outValue = findHaxeLib_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loaderTrace") ) { outValue = loaderTrace_dyn(); return true;  }
	}
	return false;
}

bool Loader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"foundNdll") ) { foundNdll=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"moduleInit") ) { moduleInit=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"moduleName") ) { moduleName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Loader_obj::foundNdll,HX_HCSTRING("foundNdll","\x98","\x2f","\x8d","\x9d")},
	{hx::fsBool,(void *) &Loader_obj::moduleInit,HX_HCSTRING("moduleInit","\xdc","\x61","\xfd","\x35")},
	{hx::fsString,(void *) &Loader_obj::moduleName,HX_HCSTRING("moduleName","\x17","\x99","\x41","\x39")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Loader_obj::foundNdll,"foundNdll");
	HX_MARK_MEMBER_NAME(Loader_obj::moduleInit,"moduleInit");
	HX_MARK_MEMBER_NAME(Loader_obj::moduleName,"moduleName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Loader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Loader_obj::foundNdll,"foundNdll");
	HX_VISIT_MEMBER_NAME(Loader_obj::moduleInit,"moduleInit");
	HX_VISIT_MEMBER_NAME(Loader_obj::moduleName,"moduleName");
};

#endif

hx::Class Loader_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("foundNdll","\x98","\x2f","\x8d","\x9d"),
	HX_HCSTRING("moduleInit","\xdc","\x61","\xfd","\x35"),
	HX_HCSTRING("moduleName","\x17","\x99","\x41","\x39"),
	HX_HCSTRING("findHaxeLib","\x86","\x2f","\x53","\x08"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loaderTrace","\x72","\x91","\x40","\xa9"),
	HX_HCSTRING("sysName","\xf8","\x55","\x40","\x7a"),
	HX_HCSTRING("tryLoad","\x01","\xe9","\x75","\x4a"),
	::String(null()) };

void Loader_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Loader","\x5b","\x50","\x8f","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Loader_obj::__GetStatic;
	__mClass->mSetStaticField = &Loader_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Loader_obj >;
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

void Loader_obj::__boot()
{
	foundNdll= false;
	moduleInit= false;
	moduleName= HX_HCSTRING("","\x00","\x00","\x00","\x00");
}

} // end namespace nme
