#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCMonitor
#include <pgr/dconsole/DCMonitor.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
namespace pgr{
namespace dconsole{

Void DCMonitor_obj::__construct(::pgr::dconsole::DConsole console)
{
HX_STACK_FRAME("pgr.dconsole.DCMonitor","new",0x6ea17c85,"pgr.dconsole.DCMonitor.new","pgr/dconsole/DCMonitor.hx",14,0x56e5026b)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(18)
	this->refreshRate = (int)100;
	HX_STACK_LINE(26)
	this->console = console;
	HX_STACK_LINE(27)
	this->fields = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(28)
	this->setRefreshRate(null());
}
;
	return null();
}

//DCMonitor_obj::~DCMonitor_obj() { }

Dynamic DCMonitor_obj::__CreateEmpty() { return  new DCMonitor_obj; }
hx::ObjectPtr< DCMonitor_obj > DCMonitor_obj::__new(::pgr::dconsole::DConsole console)
{  hx::ObjectPtr< DCMonitor_obj > _result_ = new DCMonitor_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic DCMonitor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCMonitor_obj > _result_ = new DCMonitor_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DCMonitor_obj::show( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","show",0x61fbc938,"pgr.dconsole.DCMonitor.show","pgr/dconsole/DCMonitor.hx",34,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->visible = true;
		HX_STACK_LINE(36)
		this->writeOutput();
		HX_STACK_LINE(37)
		this->startTimer();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCMonitor_obj,show,(void))

Void DCMonitor_obj::hide( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","hide",0x5ab728fd,"pgr.dconsole.DCMonitor.hide","pgr/dconsole/DCMonitor.hx",42,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		this->visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCMonitor_obj,hide,(void))

Void DCMonitor_obj::addField( Dynamic object,::String fieldName,::String alias){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","addField",0x41c7e894,"pgr.dconsole.DCMonitor.addField","pgr/dconsole/DCMonitor.hx",45,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(object,"object")
		HX_STACK_ARG(fieldName,"fieldName")
		HX_STACK_ARG(alias,"alias")
		struct _Function_1_1{
			inline static Dynamic Block( ::String &fieldName,Dynamic &object,::String &alias){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCMonitor.hx",46,0x56e5026b)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15") , object,false);
					__result->Add(HX_HCSTRING("field","\xba","\x94","\x93","\x00") , fieldName,false);
					__result->Add(HX_HCSTRING("alias","\x90","\x51","\x91","\x21") , alias,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(46)
		Dynamic tmp = _Function_1_1::Block(fieldName,object,alias);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(46)
		Dynamic mfield = tmp;		HX_STACK_VAR(mfield,"mfield");
		HX_STACK_LINE(47)
		Dynamic tmp1 = mfield;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(47)
		this->fields->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(DCMonitor_obj,addField,(void))

Void DCMonitor_obj::clear( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","clear",0x268830f2,"pgr.dconsole.DCMonitor.clear","pgr/dconsole/DCMonitor.hx",51,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		this->fields = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCMonitor_obj,clear,(void))

Void DCMonitor_obj::setRefreshRate( hx::Null< int >  __o_refreshRate){
int refreshRate = __o_refreshRate.Default(100);
	HX_STACK_FRAME("pgr.dconsole.DCMonitor","setRefreshRate",0x5122c9d4,"pgr.dconsole.DCMonitor.setRefreshRate","pgr/dconsole/DCMonitor.hx",56,0x56e5026b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(refreshRate,"refreshRate")
{
		HX_STACK_LINE(56)
		this->refreshRate = refreshRate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCMonitor_obj,setRefreshRate,(void))

Void DCMonitor_obj::writeOutput( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","writeOutput",0x54383a65,"pgr.dconsole.DCMonitor.writeOutput","pgr/dconsole/DCMonitor.hx",59,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		Array< ::String > output = Array_obj< ::String >::__new();		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(62)
			cpp::ArrayBase _g1 = this->fields;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(62)
			while((true)){
				HX_STACK_LINE(62)
				bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(62)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(62)
				if ((tmp1)){
					HX_STACK_LINE(62)
					break;
				}
				HX_STACK_LINE(62)
				Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(62)
				Dynamic v = tmp2;		HX_STACK_VAR(v,"v");
				HX_STACK_LINE(62)
				++(_g);
				HX_STACK_LINE(63)
				::String tmp3 = (v->__Field(HX_HCSTRING("alias","\x90","\x51","\x91","\x21"), hx::paccDynamic ) + HX_HCSTRING(": ","\xa6","\x32","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				Dynamic tmp4 = v->__Field(HX_HCSTRING("object","\xbf","\x7e","\x3f","\x15"), hx::paccDynamic );		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				::String tmp5 = v->__Field(HX_HCSTRING("field","\xba","\x94","\x93","\x00"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(63)
				Dynamic tmp6 = ::Reflect_obj::getProperty(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(63)
				::String tmp7 = ::Std_obj::string(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(63)
				::String tmp8 = (tmp3 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(63)
				::String tmp9 = (tmp8 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(63)
				output->push(tmp9);
			}
		}
		HX_STACK_LINE(66)
		::pgr::dconsole::DConsole tmp = this->console;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		tmp->interfc->writeMonitorOutput(output);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCMonitor_obj,writeOutput,(void))

Void DCMonitor_obj::startTimer( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCMonitor","startTimer",0xfa96ea7e,"pgr.dconsole.DCMonitor.startTimer","pgr/dconsole/DCMonitor.hx",69,0x56e5026b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		::pgr::dconsole::DCMonitor _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		if ((tmp1)){
			HX_STACK_LINE(71)
			return null();
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::pgr::dconsole::DCMonitor,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","pgr/dconsole/DCMonitor.hx",74,0x56e5026b)
			{
				HX_STACK_LINE(75)
				_g->writeOutput();
				HX_STACK_LINE(76)
				_g->startTimer();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(74)
		Dynamic onTimer =  Dynamic(new _Function_1_1(_g));		HX_STACK_VAR(onTimer,"onTimer");
		HX_STACK_LINE(80)
		Dynamic tmp2 = onTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		int tmp3 = this->refreshRate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(80)
		::haxe::Timer_obj::delay(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCMonitor_obj,startTimer,(void))


DCMonitor_obj::DCMonitor_obj()
{
}

void DCMonitor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCMonitor);
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(refreshRate,"refreshRate");
	HX_MARK_MEMBER_NAME(fields,"fields");
	HX_MARK_MEMBER_NAME(refreshTimer,"refreshTimer");
	HX_MARK_MEMBER_NAME(hidden,"hidden");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_END_CLASS();
}

void DCMonitor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(refreshRate,"refreshRate");
	HX_VISIT_MEMBER_NAME(fields,"fields");
	HX_VISIT_MEMBER_NAME(refreshTimer,"refreshTimer");
	HX_VISIT_MEMBER_NAME(hidden,"hidden");
	HX_VISIT_MEMBER_NAME(console,"console");
}

Dynamic DCMonitor_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { return fields; }
		if (HX_FIELD_EQ(inName,"hidden") ) { return hidden; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addField") ) { return addField_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startTimer") ) { return startTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate; }
		if (HX_FIELD_EQ(inName,"writeOutput") ) { return writeOutput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshTimer") ) { return refreshTimer; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRefreshRate") ) { return setRefreshRate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCMonitor_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fields") ) { fields=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hidden") ) { hidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshTimer") ) { refreshTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCMonitor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"));
	outFields->push(HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"));
	outFields->push(HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23"));
	outFields->push(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DCMonitor_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsBool,(int)offsetof(DCMonitor_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsInt,(int)offsetof(DCMonitor_obj,refreshRate),HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DCMonitor_obj,fields),HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DCMonitor_obj,refreshTimer),HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23")},
	{hx::fsBool,(int)offsetof(DCMonitor_obj,hidden),HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c")},
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCMonitor_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("fields","\x79","\x8e","\x8e","\x80"),
	HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23"),
	HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("addField","\xd9","\xba","\xf0","\x79"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("setRefreshRate","\xd9","\x1d","\xfe","\xe7"),
	HX_HCSTRING("writeOutput","\x40","\x61","\x7a","\xa1"),
	HX_HCSTRING("startTimer","\x03","\x98","\x4c","\x2c"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCMonitor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCMonitor_obj::__mClass,"__mClass");
};

#endif

hx::Class DCMonitor_obj::__mClass;

void DCMonitor_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCMonitor","\x13","\xd6","\xa5","\xe8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCMonitor_obj >;
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

} // end namespace pgr
} // end namespace dconsole
