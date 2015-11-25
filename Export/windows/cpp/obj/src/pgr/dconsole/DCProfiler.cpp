#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DC
#include <pgr/dconsole/DC.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCProfiler
#include <pgr/dconsole/DCProfiler.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_SampleHistory
#include <pgr/dconsole/SampleHistory.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
namespace pgr{
namespace dconsole{

Void DCProfiler_obj::__construct(::pgr::dconsole::DConsole console)
{
HX_STACK_FRAME("pgr.dconsole.DCProfiler","new",0xc664d282,"pgr.dconsole.DCProfiler.new","pgr/dconsole/DCProfiler.hx",23,0x50648f4e)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(28)
	this->refreshRate = (int)100;
	HX_STACK_LINE(37)
	this->console = console;
	HX_STACK_LINE(38)
	this->history = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(39)
	this->samples = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(40)
	this->setRefreshRate(null());
}
;
	return null();
}

//DCProfiler_obj::~DCProfiler_obj() { }

Dynamic DCProfiler_obj::__CreateEmpty() { return  new DCProfiler_obj; }
hx::ObjectPtr< DCProfiler_obj > DCProfiler_obj::__new(::pgr::dconsole::DConsole console)
{  hx::ObjectPtr< DCProfiler_obj > _result_ = new DCProfiler_obj();
	_result_->__construct(console);
	return _result_;}

Dynamic DCProfiler_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCProfiler_obj > _result_ = new DCProfiler_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void DCProfiler_obj::clear( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","clear",0x764ac02f,"pgr.dconsole.DCProfiler.clear","pgr/dconsole/DCProfiler.hx",43,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			cpp::ArrayBase _g1 = this->samples;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(44)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				if ((tmp1)){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(44)
				Dynamic sample = tmp2;		HX_STACK_VAR(sample,"sample");
				HX_STACK_LINE(44)
				++(_g);
				HX_STACK_LINE(45)
				bool tmp3 = (sample->__Field(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(45)
				if ((tmp3)){
					HX_STACK_LINE(46)
					::pgr::dconsole::DC_obj::logWarning(HX_HCSTRING("cannot clear profiler while samples are open","\x03","\x13","\x0f","\x14"));
				}
			}
		}
		HX_STACK_LINE(50)
		this->history = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(51)
		this->samples = Dynamic( Array_obj<Dynamic>::__new() );
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,clear,(void))

Void DCProfiler_obj::show( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","show",0xd523b09b,"pgr.dconsole.DCProfiler.show","pgr/dconsole/DCProfiler.hx",58,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(59)
		this->visible = true;
		HX_STACK_LINE(60)
		this->startTimer();
		HX_STACK_LINE(61)
		this->writeOutput();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,show,(void))

Void DCProfiler_obj::hide( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","hide",0xcddf1060,"pgr.dconsole.DCProfiler.hide","pgr/dconsole/DCProfiler.hx",66,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,hide,(void))

Void DCProfiler_obj::begin( ::String sampleName){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","begin",0xde4538cb,"pgr.dconsole.DCProfiler.begin","pgr/dconsole/DCProfiler.hx",70,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampleName,"sampleName")
		HX_STACK_LINE(72)
		::String tmp = sampleName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(72)
		Dynamic tmp1 = this->getSample(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(72)
		Dynamic sample = tmp1;		HX_STACK_VAR(sample,"sample");
		HX_STACK_LINE(74)
		bool tmp2 = (sample != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(74)
		if ((tmp2)){
			HX_STACK_LINE(77)
			(sample->__FieldRef(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66")))++;
			HX_STACK_LINE(78)
			(sample->__FieldRef(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")))++;
			HX_STACK_LINE(79)
			int tmp3 = this->getTimeMS();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(79)
			sample->__FieldRef(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")) = tmp3;
			HX_STACK_LINE(80)
			sample->__FieldRef(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8")) = HX_HCSTRING("","\x00","\x00","\x00","\x00");
			HX_STACK_LINE(82)
			bool tmp4 = (sample->__Field(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66"), hx::paccDynamic ) > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			if ((tmp4)){
				HX_STACK_LINE(83)
				::String tmp5 = (sampleName + HX_HCSTRING(" already started.","\x75","\x05","\x75","\xac"));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(83)
				HX_STACK_DO_THROW(tmp5);
			}
		}
		else{
			HX_STACK_LINE(90)
			::String tmp3 = sampleName;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(91)
			int tmp4 = this->getTimeMS();		HX_STACK_VAR(tmp4,"tmp4");
			struct _Function_2_1{
				inline static Dynamic Block( int &tmp4,::String &tmp3){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/DCProfiler.hx",89,0x50648f4e)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_HCSTRING("name","\x4b","\x72","\xff","\x48") , tmp3,false);
						__result->Add(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05") , tmp4,false);
						__result->Add(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba") , (int)0,false);
						__result->Add(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b") , (int)1,false);
						__result->Add(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66") , (int)1,false);
						__result->Add(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10") , (int)0,false);
						__result->Add(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8") , HX_HCSTRING("","\x00","\x00","\x00","\x00"),false);
						__result->Add(HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59") , (int)0,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(89)
			Dynamic tmp5 = _Function_2_1::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(88)
			sample = tmp5;
			HX_STACK_LINE(99)
			Dynamic tmp6 = sample;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			this->samples->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp6);
		}
		HX_STACK_LINE(101)
		Dynamic tmp3 = sample;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(101)
		this->setSampleParent(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,begin,(void))

Void DCProfiler_obj::end( ::String sampleName){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","end",0xc65e05fd,"pgr.dconsole.DCProfiler.end","pgr/dconsole/DCProfiler.hx",104,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampleName,"sampleName")
		HX_STACK_LINE(105)
		::String tmp = sampleName;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		Dynamic tmp1 = this->getSample(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		Dynamic sample = tmp1;		HX_STACK_VAR(sample,"sample");
		HX_STACK_LINE(107)
		bool tmp2 = (sample == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(107)
		if ((tmp2)){
			HX_STACK_LINE(108)
			::String tmp3 = (sampleName + HX_HCSTRING("not found","\x75","\xf7","\x56","\x18"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(108)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(110)
		int tmp3 = this->getTimeMS();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(110)
		int endTime = tmp3;		HX_STACK_VAR(endTime,"endTime");
		HX_STACK_LINE(111)
		int tmp4 = (endTime - sample->__Field(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"), hx::paccDynamic ));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		int elapsed = tmp4;		HX_STACK_VAR(elapsed,"elapsed");
		HX_STACK_LINE(113)
		bool tmp5 = (sample->__Field(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66"), hx::paccDynamic ) < (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		if ((tmp5)){
			HX_STACK_LINE(114)
			::String tmp6 = (sampleName + HX_HCSTRING(" is not started","\x1e","\x50","\x9a","\xb6"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			HX_STACK_DO_THROW(tmp6);
		}
		HX_STACK_LINE(117)
		(sample->__FieldRef(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66")))--;
		HX_STACK_LINE(120)
		hx::AddEq(sample->__FieldRef(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")),elapsed);
		HX_STACK_LINE(123)
		bool tmp6 = (sample->__Field(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8"), hx::paccDynamic ) != HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(123)
		if ((tmp6)){
			HX_STACK_LINE(124)
			::String tmp7 = sample->__Field(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(124)
			Dynamic tmp8 = this->getSample(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(124)
			hx::AddEq(tmp8->__FieldRef(HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59")),elapsed);
		}
		HX_STACK_LINE(128)
		bool tmp7 = (sample->__Field(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"), hx::paccDynamic ) == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		if ((tmp7)){
			HX_STACK_LINE(129)
			Dynamic tmp8 = sample;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(129)
			this->createHistory(tmp8);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,end,(void))

Void DCProfiler_obj::createHistory( Dynamic sample){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","createHistory",0x8c3bce5a,"pgr.dconsole.DCProfiler.createHistory","pgr/dconsole/DCProfiler.hx",134,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sample,"sample")
		HX_STACK_LINE(135)
		::String tmp = sample->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		::pgr::dconsole::SampleHistory tmp1 = this->getHistory(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		::pgr::dconsole::SampleHistory entry = tmp1;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(138)
		bool tmp2 = (entry != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		if ((tmp2)){
			HX_STACK_LINE(139)
			entry->clearBranchSamples();
			HX_STACK_LINE(140)
			Dynamic tmp3 = sample;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(140)
			entry->update(tmp3);
		}
		else{
			HX_STACK_LINE(143)
			::pgr::dconsole::SampleHistory tmp3 = ::pgr::dconsole::SampleHistory_obj::__new(sample);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(143)
			entry = tmp3;
			HX_STACK_LINE(144)
			::pgr::dconsole::SampleHistory tmp4 = entry;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(144)
			this->history->push(tmp4);
		}
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			cpp::ArrayBase _g1 = this->samples;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				bool tmp3 = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(147)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(147)
				if ((tmp4)){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				Dynamic tmp5 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(147)
				Dynamic s = tmp5;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(147)
				++(_g);
				HX_STACK_LINE(150)
				bool tmp6 = (s->__Field(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(150)
				bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(150)
				if ((tmp6)){
					HX_STACK_LINE(150)
					tmp7 = (s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != sample->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
				}
				else{
					HX_STACK_LINE(150)
					tmp7 = false;
				}
				HX_STACK_LINE(150)
				if ((tmp7)){
					HX_STACK_LINE(151)
					Dynamic tmp8 = s;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(151)
					entry->addChildEntry(tmp8);
				}
				HX_STACK_LINE(154)
				bool tmp8 = (s->__Field(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(154)
				if ((tmp8)){
					HX_STACK_LINE(155)
					::String tmp9 = (HX_HCSTRING("cross sampling detected: ","\xa1","\x33","\x1a","\x3e") + s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(155)
					::String tmp10 = (tmp9 + HX_HCSTRING(" is still open inside ","\x9c","\x46","\x77","\x9a"));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(155)
					::String tmp11 = sample->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(155)
					::String tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(155)
					HX_STACK_DO_THROW(tmp12);
				}
				HX_STACK_LINE(159)
				s->__FieldRef(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10")) = (int)0;
				HX_STACK_LINE(160)
				s->__FieldRef(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8")) = HX_HCSTRING("","\x00","\x00","\x00","\x00");
				HX_STACK_LINE(161)
				s->__FieldRef(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")) = (int)0;
				HX_STACK_LINE(162)
				s->__FieldRef(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66")) = (int)0;
				HX_STACK_LINE(163)
				s->__FieldRef(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")) = (int)0;
				HX_STACK_LINE(164)
				s->__FieldRef(HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59")) = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,createHistory,(void))

Void DCProfiler_obj::setRefreshRate( hx::Null< int >  __o_refreshRate){
int refreshRate = __o_refreshRate.Default(100);
	HX_STACK_FRAME("pgr.dconsole.DCProfiler","setRefreshRate",0x63d4eaf7,"pgr.dconsole.DCProfiler.setRefreshRate","pgr/dconsole/DCProfiler.hx",170,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(refreshRate,"refreshRate")
{
		HX_STACK_LINE(170)
		this->refreshRate = refreshRate;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,setRefreshRate,(void))

::String DCProfiler_obj::getFormatedDisplay( ::String data,hx::Null< bool >  __o_addSeparator){
bool addSeparator = __o_addSeparator.Default(true);
	HX_STACK_FRAME("pgr.dconsole.DCProfiler","getFormatedDisplay",0x1fc1f9b4,"pgr.dconsole.DCProfiler.getFormatedDisplay","pgr/dconsole/DCProfiler.hx",174,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(addSeparator,"addSeparator")
{
		HX_STACK_LINE(175)
		::String formatted = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(formatted,"formatted");
		HX_STACK_LINE(177)
		::String tmp = data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(177)
		::String tmp1 = ::StringTools_obj::lpad(tmp,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"),(int)8);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		hx::AddEq(formatted,tmp1);
		HX_STACK_LINE(178)
		hx::AddEq(formatted,HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(179)
		bool tmp2 = addSeparator;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		if ((tmp2)){
			HX_STACK_LINE(180)
			hx::AddEq(formatted,HX_HCSTRING("|","\x7c","\x00","\x00","\x00"));
		}
		HX_STACK_LINE(183)
		::String tmp3 = formatted;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(DCProfiler_obj,getFormatedDisplay,return )

Void DCProfiler_obj::writeOutput( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","writeOutput",0x476d5562,"pgr.dconsole.DCProfiler.writeOutput","pgr/dconsole/DCProfiler.hx",187,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(189)
		::String output = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(191)
		::String tmp = this->getFormatedDisplay(HX_HCSTRING("EL","\x67","\x3c","\x00","\x00"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		hx::AddEq(output,tmp);
		HX_STACK_LINE(192)
		::String tmp1 = this->getFormatedDisplay(HX_HCSTRING("AVG","\xb2","\x9d","\x31","\x00"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(192)
		hx::AddEq(output,tmp1);
		HX_STACK_LINE(193)
		::String tmp2 = this->getFormatedDisplay(HX_HCSTRING("EL(%)","\x85","\xb8","\x00","\xed"),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		hx::AddEq(output,tmp2);
		HX_STACK_LINE(194)
		::String tmp3 = this->getFormatedDisplay(HX_HCSTRING("AVG(%)","\x1a","\xf8","\xb4","\xb0"),null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(194)
		hx::AddEq(output,tmp3);
		HX_STACK_LINE(195)
		::String tmp4 = this->getFormatedDisplay(HX_HCSTRING("#","\x23","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		hx::AddEq(output,tmp4);
		HX_STACK_LINE(196)
		::String tmp5 = this->getFormatedDisplay(HX_HCSTRING("NAME","\x4b","\x3a","\xc0","\x33"),false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(196)
		hx::AddEq(output,tmp5);
		HX_STACK_LINE(197)
		hx::AddEq(output,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(198)
		int tmp6 = (int)9;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(198)
		int tmp7 = (tmp6 * (int)7);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(198)
		::String tmp8 = ::StringTools_obj::rpad(HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),HX_HCSTRING("-","\x2d","\x00","\x00","\x00"),tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(198)
		hx::AddEq(output,tmp8);
		HX_STACK_LINE(199)
		hx::AddEq(output,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
		HX_STACK_LINE(201)
		{
			HX_STACK_LINE(201)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(201)
			Array< ::Dynamic > _g1 = this->history;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			while((true)){
				HX_STACK_LINE(201)
				bool tmp9 = (_g < _g1->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(201)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(201)
				if ((tmp10)){
					HX_STACK_LINE(201)
					break;
				}
				HX_STACK_LINE(201)
				::pgr::dconsole::SampleHistory tmp11 = _g1->__get(_g).StaticCast< ::pgr::dconsole::SampleHistory >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(201)
				::pgr::dconsole::SampleHistory entry = tmp11;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(201)
				++(_g);
				HX_STACK_LINE(203)
				::String tmp12 = entry->getRelElapsed();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(203)
				::String tmp13 = this->getFormatedDisplay(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(203)
				hx::AddEq(output,tmp13);
				HX_STACK_LINE(204)
				::String tmp14 = entry->getRelAverage();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(204)
				::String tmp15 = this->getFormatedDisplay(tmp14,null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(204)
				hx::AddEq(output,tmp15);
				HX_STACK_LINE(205)
				int tmp16 = entry->elapsed;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(205)
				::String tmp17 = entry->getPercentElapsed(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(205)
				::String tmp18 = this->getFormatedDisplay(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(205)
				hx::AddEq(output,tmp18);
				HX_STACK_LINE(206)
				int tmp19 = entry->totalElapsed;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(206)
				::String tmp20 = entry->getPercentAverage(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(206)
				::String tmp21 = this->getFormatedDisplay(tmp20,null());		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(206)
				hx::AddEq(output,tmp21);
				HX_STACK_LINE(207)
				int tmp22 = entry->branchInstances;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(207)
				::String tmp23 = ::Std_obj::string(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(207)
				::String tmp24 = this->getFormatedDisplay(tmp23,null());		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(207)
				hx::AddEq(output,tmp24);
				HX_STACK_LINE(208)
				::String tmp25 = entry->getFormattedName();		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(208)
				::String tmp26 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(208)
				hx::AddEq(output,tmp26);
				HX_STACK_LINE(209)
				hx::AddEq(output,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
				HX_STACK_LINE(211)
				{
					HX_STACK_LINE(211)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(211)
					Array< ::Dynamic > _g3 = entry->childHistory;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(211)
					while((true)){
						HX_STACK_LINE(211)
						bool tmp27 = (_g2 < _g3->length);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(211)
						bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(211)
						if ((tmp28)){
							HX_STACK_LINE(211)
							break;
						}
						HX_STACK_LINE(211)
						::pgr::dconsole::SampleHistory tmp29 = _g3->__get(_g2).StaticCast< ::pgr::dconsole::SampleHistory >();		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(211)
						::pgr::dconsole::SampleHistory child = tmp29;		HX_STACK_VAR(child,"child");
						HX_STACK_LINE(211)
						++(_g2);
						HX_STACK_LINE(212)
						::String tmp30 = child->getRelElapsed();		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(212)
						::String tmp31 = this->getFormatedDisplay(tmp30,null());		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(212)
						hx::AddEq(output,tmp31);
						HX_STACK_LINE(213)
						::String tmp32 = child->getRelAverage();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(213)
						::String tmp33 = this->getFormatedDisplay(tmp32,null());		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(213)
						hx::AddEq(output,tmp33);
						HX_STACK_LINE(214)
						int tmp34 = entry->elapsed;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(214)
						::String tmp35 = child->getPercentElapsed(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(214)
						::String tmp36 = this->getFormatedDisplay(tmp35,null());		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(214)
						hx::AddEq(output,tmp36);
						HX_STACK_LINE(215)
						int tmp37 = entry->totalElapsed;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(215)
						::String tmp38 = child->getPercentAverage(tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(215)
						::String tmp39 = this->getFormatedDisplay(tmp38,null());		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(215)
						hx::AddEq(output,tmp39);
						HX_STACK_LINE(216)
						int tmp40 = child->branchInstances;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(216)
						::String tmp41 = ::Std_obj::string(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(216)
						::String tmp42 = this->getFormatedDisplay(tmp41,null());		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(216)
						hx::AddEq(output,tmp42);
						HX_STACK_LINE(217)
						::String tmp43 = child->getFormattedName();		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(217)
						::String tmp44 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(217)
						hx::AddEq(output,tmp44);
						HX_STACK_LINE(218)
						hx::AddEq(output,HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
					}
				}
			}
		}
		HX_STACK_LINE(222)
		::pgr::dconsole::DConsole tmp9 = this->console;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		::String tmp10 = output;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		tmp9->interfc->writeProfilerOutput(tmp10);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,writeOutput,(void))

Void DCProfiler_obj::setSampleParent( Dynamic sample){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","setSampleParent",0x30bcd4d8,"pgr.dconsole.DCProfiler.setSampleParent","pgr/dconsole/DCProfiler.hx",226,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sample,"sample")
		HX_STACK_LINE(227)
		sample->__FieldRef(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10")) = (int)0;
		HX_STACK_LINE(229)
		{
			HX_STACK_LINE(229)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			cpp::ArrayBase _g1 = this->samples;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(229)
			while((true)){
				HX_STACK_LINE(229)
				bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(229)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(229)
				if ((tmp1)){
					HX_STACK_LINE(229)
					break;
				}
				HX_STACK_LINE(229)
				Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(229)
				Dynamic s = tmp2;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(229)
				++(_g);
				HX_STACK_LINE(230)
				bool tmp3 = (s->__Field(HX_HCSTRING("openInstances","\x14","\x96","\xe3","\x66"), hx::paccDynamic ) > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(230)
				bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(230)
				if ((tmp3)){
					HX_STACK_LINE(230)
					tmp4 = (s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) != sample->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));
				}
				else{
					HX_STACK_LINE(230)
					tmp4 = false;
				}
				HX_STACK_LINE(230)
				if ((tmp4)){
					HX_STACK_LINE(232)
					(sample->__FieldRef(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10")))++;
					HX_STACK_LINE(234)
					bool tmp5 = (sample->__Field(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8"), hx::paccDynamic ) == HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(234)
					if ((tmp5)){
						HX_STACK_LINE(235)
						sample->__FieldRef(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8")) = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
					}
					else{
						HX_STACK_LINE(238)
						int tmp6 = s->__Field(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(238)
						::String tmp7 = sample->__Field(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(238)
						Dynamic tmp8 = this->getSample(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(238)
						int tmp9 = tmp8->__Field(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(238)
						bool tmp10 = (tmp6 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(238)
						if ((tmp10)){
							HX_STACK_LINE(239)
							sample->__FieldRef(HX_HCSTRING("parentName","\x95","\x80","\x11","\xe8")) = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,setSampleParent,(void))

Dynamic DCProfiler_obj::getSample( ::String sampleName){
	HX_STACK_FRAME("pgr.dconsole.DCProfiler","getSample",0x73393102,"pgr.dconsole.DCProfiler.getSample","pgr/dconsole/DCProfiler.hx",246,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sampleName,"sampleName")
	HX_STACK_LINE(247)
	{
		HX_STACK_LINE(247)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(247)
		cpp::ArrayBase _g1 = this->samples;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(247)
		while((true)){
			HX_STACK_LINE(247)
			bool tmp = (_g < _g1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(247)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(247)
			if ((tmp1)){
				HX_STACK_LINE(247)
				break;
			}
			HX_STACK_LINE(247)
			Dynamic tmp2 = _g1->__GetItem(_g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(247)
			Dynamic sample = tmp2;		HX_STACK_VAR(sample,"sample");
			HX_STACK_LINE(247)
			++(_g);
			HX_STACK_LINE(248)
			bool tmp3 = (sample->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ) == sampleName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(248)
			if ((tmp3)){
				HX_STACK_LINE(249)
				Dynamic tmp4 = sample;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(249)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(252)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,getSample,return )

::pgr::dconsole::SampleHistory DCProfiler_obj::getHistory( ::String entryName){
	HX_STACK_FRAME("pgr.dconsole.DCProfiler","getHistory",0x3f4f217c,"pgr.dconsole.DCProfiler.getHistory","pgr/dconsole/DCProfiler.hx",255,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(entryName,"entryName")
	HX_STACK_LINE(256)
	{
		HX_STACK_LINE(256)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Array< ::Dynamic > _g1 = this->history;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		while((true)){
			HX_STACK_LINE(256)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(256)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(256)
			if ((tmp1)){
				HX_STACK_LINE(256)
				break;
			}
			HX_STACK_LINE(256)
			::pgr::dconsole::SampleHistory tmp2 = _g1->__get(_g).StaticCast< ::pgr::dconsole::SampleHistory >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(256)
			::pgr::dconsole::SampleHistory entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(256)
			++(_g);
			HX_STACK_LINE(257)
			bool tmp3 = (entry->name == entryName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(257)
			if ((tmp3)){
				HX_STACK_LINE(258)
				::pgr::dconsole::SampleHistory tmp4 = entry;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(258)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(261)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCProfiler_obj,getHistory,return )

Void DCProfiler_obj::startTimer( ){
{
		HX_STACK_FRAME("pgr.dconsole.DCProfiler","startTimer",0xb7f2fe21,"pgr.dconsole.DCProfiler.startTimer","pgr/dconsole/DCProfiler.hx",265,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(265)
		::pgr::dconsole::DCProfiler _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(266)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		if ((tmp1)){
			HX_STACK_LINE(267)
			return null();
		}

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,::pgr::dconsole::DCProfiler,_g)
		int __ArgCount() const { return 0; }
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","pgr/dconsole/DCProfiler.hx",270,0x50648f4e)
			{
				HX_STACK_LINE(271)
				_g->writeOutput();
				HX_STACK_LINE(272)
				_g->startTimer();
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(270)
		Dynamic onTimer =  Dynamic(new _Function_1_1(_g));		HX_STACK_VAR(onTimer,"onTimer");
		HX_STACK_LINE(276)
		Dynamic tmp2 = onTimer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(276)
		int tmp3 = this->refreshRate;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(276)
		::haxe::Timer_obj::delay(tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,startTimer,(void))

int DCProfiler_obj::getTimeMS( ){
	HX_STACK_FRAME("pgr.dconsole.DCProfiler","getTimeMS",0x74c0bd8b,"pgr.dconsole.DCProfiler.getTimeMS","pgr/dconsole/DCProfiler.hx",282,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(283)
	Float tmp = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(283)
	Float tmp1 = (tmp * (int)1000);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(283)
	int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(283)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(DCProfiler_obj,getTimeMS,return )

int DCProfiler_obj::NUM_SPACES;


DCProfiler_obj::DCProfiler_obj()
{
}

void DCProfiler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCProfiler);
	HX_MARK_MEMBER_NAME(refreshRate,"refreshRate");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(samples,"samples");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(refreshTimer,"refreshTimer");
	HX_MARK_END_CLASS();
}

void DCProfiler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(refreshRate,"refreshRate");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(samples,"samples");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(refreshTimer,"refreshTimer");
}

Dynamic DCProfiler_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"begin") ) { return begin_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"samples") ) { return samples; }
		if (HX_FIELD_EQ(inName,"history") ) { return history; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getSample") ) { return getSample_dyn(); }
		if (HX_FIELD_EQ(inName,"getTimeMS") ) { return getTimeMS_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHistory") ) { return getHistory_dyn(); }
		if (HX_FIELD_EQ(inName,"startTimer") ) { return startTimer_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { return refreshRate; }
		if (HX_FIELD_EQ(inName,"writeOutput") ) { return writeOutput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshTimer") ) { return refreshTimer; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createHistory") ) { return createHistory_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setRefreshRate") ) { return setRefreshRate_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setSampleParent") ) { return setSampleParent_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getFormatedDisplay") ) { return getFormatedDisplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCProfiler_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samples") ) { samples=inValue.Cast< cpp::ArrayBase >(); return inValue; }
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"refreshRate") ) { refreshRate=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"refreshTimer") ) { refreshTimer=inValue.Cast< ::haxe::Timer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCProfiler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"));
	outFields->push(HX_HCSTRING("history","\x54","\x35","\x47","\x64"));
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	outFields->push(HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DCProfiler_obj,refreshRate),HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40")},
	{hx::fsBool,(int)offsetof(DCProfiler_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(DCProfiler_obj,samples),HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DCProfiler_obj,history),HX_HCSTRING("history","\x54","\x35","\x47","\x64")},
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCProfiler_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DCProfiler_obj,refreshTimer),HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &DCProfiler_obj::NUM_SPACES,HX_HCSTRING("NUM_SPACES","\x26","\x15","\x53","\xae")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("refreshRate","\x5b","\xe2","\x3f","\x40"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("samples","\x09","\xc5","\xc9","\x83"),
	HX_HCSTRING("history","\x54","\x35","\x47","\x64"),
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("refreshTimer","\xea","\xbb","\xb7","\x23"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("begin","\x29","\xea","\x55","\xb0"),
	HX_HCSTRING("end","\xdb","\x03","\x4d","\x00"),
	HX_HCSTRING("createHistory","\xb8","\x0d","\x8a","\x4c"),
	HX_HCSTRING("setRefreshRate","\xd9","\x1d","\xfe","\xe7"),
	HX_HCSTRING("getFormatedDisplay","\x96","\x45","\xfb","\x95"),
	HX_HCSTRING("writeOutput","\x40","\x61","\x7a","\xa1"),
	HX_HCSTRING("setSampleParent","\xb6","\x27","\xa0","\x50"),
	HX_HCSTRING("getSample","\x60","\xe9","\xa0","\x99"),
	HX_HCSTRING("getHistory","\x5e","\xbb","\xa8","\xb3"),
	HX_HCSTRING("startTimer","\x03","\x98","\x4c","\x2c"),
	HX_HCSTRING("getTimeMS","\xe9","\x75","\x28","\x9b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCProfiler_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DCProfiler_obj::NUM_SPACES,"NUM_SPACES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCProfiler_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DCProfiler_obj::NUM_SPACES,"NUM_SPACES");
};

#endif

hx::Class DCProfiler_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("NUM_SPACES","\x26","\x15","\x53","\xae"),
	::String(null()) };

void DCProfiler_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.DCProfiler","\x90","\x29","\xad","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCProfiler_obj >;
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

void DCProfiler_obj::__boot()
{
	NUM_SPACES= (int)8;
}

} // end namespace pgr
} // end namespace dconsole
