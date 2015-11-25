#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_pgr_dconsole_SampleHistory
#include <pgr/dconsole/SampleHistory.h>
#endif
namespace pgr{
namespace dconsole{

Void SampleHistory_obj::__construct(Dynamic s)
{
HX_STACK_FRAME("pgr.dconsole.SampleHistory","new",0x5b70ad54,"pgr.dconsole.SampleHistory.new","pgr/dconsole/DCProfiler.hx",287,0x50648f4e)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(302)
	this->nLogs = (int)0;
	HX_STACK_LINE(299)
	this->numParents = (int)0;
	HX_STACK_LINE(298)
	this->instances = (int)0;
	HX_STACK_LINE(297)
	this->branchInstances = (int)0;
	HX_STACK_LINE(296)
	this->totalChildrenElapsed = (int)0;
	HX_STACK_LINE(295)
	this->childrenElapsed = (int)0;
	HX_STACK_LINE(294)
	this->avgElapsed = (int)0;
	HX_STACK_LINE(293)
	this->maxElapsed = (int)0;
	HX_STACK_LINE(292)
	this->minElapsed = (int)0;
	HX_STACK_LINE(291)
	this->totalElapsed = (int)0;
	HX_STACK_LINE(290)
	this->elapsed = (int)0;
	HX_STACK_LINE(289)
	this->name = HX_HCSTRING("","\x00","\x00","\x00","\x00");
	HX_STACK_LINE(307)
	this->childHistory = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(309)
	this->name = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );
	HX_STACK_LINE(310)
	this->elapsed = s->__Field(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"), hx::paccDynamic );
	HX_STACK_LINE(311)
	int tmp = this->elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(311)
	this->minElapsed = tmp;
	HX_STACK_LINE(312)
	int tmp1 = this->elapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(312)
	this->maxElapsed = tmp1;
	HX_STACK_LINE(314)
	Dynamic tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(314)
	this->update(tmp2);
}
;
	return null();
}

//SampleHistory_obj::~SampleHistory_obj() { }

Dynamic SampleHistory_obj::__CreateEmpty() { return  new SampleHistory_obj; }
hx::ObjectPtr< SampleHistory_obj > SampleHistory_obj::__new(Dynamic s)
{  hx::ObjectPtr< SampleHistory_obj > _result_ = new SampleHistory_obj();
	_result_->__construct(s);
	return _result_;}

Dynamic SampleHistory_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SampleHistory_obj > _result_ = new SampleHistory_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void SampleHistory_obj::clearBranchSamples( ){
{
		HX_STACK_FRAME("pgr.dconsole.SampleHistory","clearBranchSamples",0xafc4e646,"pgr.dconsole.SampleHistory.clearBranchSamples","pgr/dconsole/DCProfiler.hx",317,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(318)
		this->branchInstances = (int)0;
		HX_STACK_LINE(319)
		{
			HX_STACK_LINE(319)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(319)
			Array< ::Dynamic > _g1 = this->childHistory;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(319)
			while((true)){
				HX_STACK_LINE(319)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(319)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(319)
				if ((tmp1)){
					HX_STACK_LINE(319)
					break;
				}
				HX_STACK_LINE(319)
				::pgr::dconsole::SampleHistory tmp2 = _g1->__get(_g).StaticCast< ::pgr::dconsole::SampleHistory >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(319)
				::pgr::dconsole::SampleHistory child = tmp2;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(319)
				++(_g);
				HX_STACK_LINE(320)
				child->branchInstances = (int)0;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,clearBranchSamples,(void))

Void SampleHistory_obj::update( Dynamic s){
{
		HX_STACK_FRAME("pgr.dconsole.SampleHistory","update",0x11a23995,"pgr.dconsole.SampleHistory.update","pgr/dconsole/DCProfiler.hx",324,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(325)
		::String tmp = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(325)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(325)
		bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(325)
		if ((tmp2)){
			HX_STACK_LINE(326)
			HX_STACK_DO_THROW(HX_HCSTRING("updating history from different sample.","\x8d","\x29","\x33","\x64"));
		}
		HX_STACK_LINE(329)
		this->childrenElapsed = s->__Field(HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59"), hx::paccDynamic );
		HX_STACK_LINE(330)
		this->elapsed = s->__Field(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"), hx::paccDynamic );
		HX_STACK_LINE(332)
		int tmp3 = this->elapsed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(332)
		int tmp4 = this->maxElapsed;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(332)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(332)
		if ((tmp5)){
			HX_STACK_LINE(333)
			int tmp6 = this->elapsed;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(333)
			this->maxElapsed = tmp6;
		}
		HX_STACK_LINE(336)
		int tmp6 = this->elapsed;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(336)
		int tmp7 = this->minElapsed;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(336)
		bool tmp8 = (tmp6 < tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(336)
		if ((tmp8)){
			HX_STACK_LINE(337)
			int tmp9 = this->elapsed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(337)
			this->minElapsed = tmp9;
		}
		HX_STACK_LINE(339)
		this->startTime = s->__Field(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"), hx::paccDynamic );
		HX_STACK_LINE(340)
		hx::AddEq(this->instances,s->__Field(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"), hx::paccDynamic ));
		HX_STACK_LINE(341)
		hx::AddEq(this->branchInstances,s->__Field(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"), hx::paccDynamic ));
		HX_STACK_LINE(342)
		this->numParents = s->__Field(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"), hx::paccDynamic );
		HX_STACK_LINE(344)
		int tmp9 = this->elapsed;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(344)
		hx::AddEq(this->totalElapsed,tmp9);
		HX_STACK_LINE(345)
		int tmp10 = this->childrenElapsed;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(345)
		hx::AddEq(this->totalChildrenElapsed,tmp10);
		HX_STACK_LINE(347)
		(this->nLogs)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SampleHistory_obj,update,(void))

Void SampleHistory_obj::addChildEntry( Dynamic s){
{
		HX_STACK_FRAME("pgr.dconsole.SampleHistory","addChildEntry",0x479148ab,"pgr.dconsole.SampleHistory.addChildEntry","pgr/dconsole/DCProfiler.hx",352,0x50648f4e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(353)
		::String tmp = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(353)
		::String tmp1 = this->name;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(353)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		if ((tmp2)){
			HX_STACK_LINE(354)
			::String tmp3 = (HX_HCSTRING("adding ","\x9f","\x4f","\x1f","\x97") + s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(354)
			::String tmp4 = (tmp3 + HX_HCSTRING(" to ","\x25","\x3a","\x7f","\x15"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(354)
			::String tmp5 = this->name;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(354)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(354)
			::String tmp7 = (tmp6 + HX_HCSTRING(" as child sample.","\xb2","\xb2","\xab","\xd4"));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(354)
			HX_STACK_DO_THROW(tmp7);
		}
		HX_STACK_LINE(357)
		::String tmp3 = s->__Field(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(357)
		::pgr::dconsole::SampleHistory tmp4 = this->getChild(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(357)
		::pgr::dconsole::SampleHistory child = tmp4;		HX_STACK_VAR(child,"child");
		HX_STACK_LINE(359)
		bool tmp5 = (child == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(359)
		if ((tmp5)){
			HX_STACK_LINE(360)
			::pgr::dconsole::SampleHistory tmp6 = ::pgr::dconsole::SampleHistory_obj::__new(s);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(360)
			child = tmp6;
			HX_STACK_LINE(361)
			::pgr::dconsole::SampleHistory tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(361)
			this->childHistory->push(tmp7);
		}
		else{
			HX_STACK_LINE(363)
			Dynamic tmp6 = s;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			child->update(tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SampleHistory_obj,addChildEntry,(void))

::String SampleHistory_obj::getElapsed( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getElapsed",0x68ad87d2,"pgr.dconsole.SampleHistory.getElapsed","pgr/dconsole/DCProfiler.hx",369,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(370)
	int tmp = this->elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(370)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(370)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getElapsed,return )

::String SampleHistory_obj::getAverage( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getAverage",0x10c860f3,"pgr.dconsole.SampleHistory.getAverage","pgr/dconsole/DCProfiler.hx",375,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(376)
	int tmp = this->totalElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(376)
	int tmp1 = this->nLogs;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(376)
	Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(376)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(376)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getAverage,return )

::String SampleHistory_obj::getMinElapsed( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getMinElapsed",0xab3056f4,"pgr.dconsole.SampleHistory.getMinElapsed","pgr/dconsole/DCProfiler.hx",381,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(382)
	int tmp = this->minElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(382)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(382)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getMinElapsed,return )

::String SampleHistory_obj::getMaxElapsed( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getMaxElapsed",0x4f9d8422,"pgr.dconsole.SampleHistory.getMaxElapsed","pgr/dconsole/DCProfiler.hx",387,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(388)
	int tmp = this->maxElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(388)
	::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(388)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getMaxElapsed,return )

::String SampleHistory_obj::getRelElapsed( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getRelElapsed",0xae7a260d,"pgr.dconsole.SampleHistory.getRelElapsed","pgr/dconsole/DCProfiler.hx",393,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(394)
	int tmp = this->elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(394)
	int tmp1 = this->childrenElapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(394)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(394)
	::String tmp3 = ::Std_obj::string(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(394)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getRelElapsed,return )

::String SampleHistory_obj::getRelAverage( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getRelAverage",0x5694ff2e,"pgr.dconsole.SampleHistory.getRelAverage","pgr/dconsole/DCProfiler.hx",399,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(400)
	int tmp = this->totalElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(400)
	int tmp1 = this->totalChildrenElapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(400)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(400)
	int tmp3 = this->nLogs;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(400)
	Float tmp4 = (Float(tmp2) / Float(tmp3));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(400)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(400)
	::String tmp6 = ::Std_obj::string(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(400)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getRelAverage,return )

::String SampleHistory_obj::getPercentElapsed( int parentElapsed){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getPercentElapsed",0x85bff721,"pgr.dconsole.SampleHistory.getPercentElapsed","pgr/dconsole/DCProfiler.hx",405,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(parentElapsed,"parentElapsed")
	HX_STACK_LINE(406)
	int tmp = this->elapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(406)
	int tmp1 = this->childrenElapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(406)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(406)
	int tmp3 = (tmp2 * (int)100);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(406)
	int tmp4 = parentElapsed;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(406)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(406)
	Float tmp6 = (tmp5 * (int)10);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(406)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(406)
	Float tmp8 = (Float(tmp7) / Float((int)10));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(406)
	::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(406)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(SampleHistory_obj,getPercentElapsed,return )

::String SampleHistory_obj::getPercentAverage( int totalTime){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getPercentAverage",0x2ddad042,"pgr.dconsole.SampleHistory.getPercentAverage","pgr/dconsole/DCProfiler.hx",411,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(totalTime,"totalTime")
	HX_STACK_LINE(412)
	int tmp = this->totalElapsed;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(412)
	int tmp1 = this->totalChildrenElapsed;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(412)
	int tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(412)
	int tmp3 = (tmp2 * (int)100);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(412)
	int tmp4 = totalTime;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(412)
	Float tmp5 = (Float(tmp3) / Float(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(412)
	Float tmp6 = (tmp5 * (int)10);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(412)
	int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(412)
	Float tmp8 = (Float(tmp7) / Float((int)10));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(412)
	::String tmp9 = ::Std_obj::string(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(412)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(SampleHistory_obj,getPercentAverage,return )

::String SampleHistory_obj::getFormattedName( ){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getFormattedName",0x37d57b7d,"pgr.dconsole.SampleHistory.getFormattedName","pgr/dconsole/DCProfiler.hx",417,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(418)
	::String s = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(419)
	{
		HX_STACK_LINE(419)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(419)
		int tmp = this->numParents;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(419)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		while((true)){
			HX_STACK_LINE(419)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(419)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			if ((tmp2)){
				HX_STACK_LINE(419)
				break;
			}
			HX_STACK_LINE(419)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(419)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(420)
			hx::AddEq(s,HX_HCSTRING("    ","\x00","\x38","\x3f","\x15"));
		}
	}
	HX_STACK_LINE(422)
	::String tmp = this->name;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(422)
	hx::AddEq(s,tmp);
	HX_STACK_LINE(423)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(423)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(SampleHistory_obj,getFormattedName,return )

::pgr::dconsole::SampleHistory SampleHistory_obj::getChild( ::String childName){
	HX_STACK_FRAME("pgr.dconsole.SampleHistory","getChild",0x976a67b2,"pgr.dconsole.SampleHistory.getChild","pgr/dconsole/DCProfiler.hx",426,0x50648f4e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(childName,"childName")
	HX_STACK_LINE(427)
	{
		HX_STACK_LINE(427)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(427)
		Array< ::Dynamic > _g1 = this->childHistory;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(427)
		while((true)){
			HX_STACK_LINE(427)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(427)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(427)
			if ((tmp1)){
				HX_STACK_LINE(427)
				break;
			}
			HX_STACK_LINE(427)
			::pgr::dconsole::SampleHistory tmp2 = _g1->__get(_g).StaticCast< ::pgr::dconsole::SampleHistory >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(427)
			::pgr::dconsole::SampleHistory child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(427)
			++(_g);
			HX_STACK_LINE(428)
			bool tmp3 = (child->name == childName);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(428)
			if ((tmp3)){
				HX_STACK_LINE(429)
				::pgr::dconsole::SampleHistory tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(429)
				return tmp4;
			}
		}
	}
	HX_STACK_LINE(432)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SampleHistory_obj,getChild,return )


SampleHistory_obj::SampleHistory_obj()
{
}

void SampleHistory_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SampleHistory);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(totalElapsed,"totalElapsed");
	HX_MARK_MEMBER_NAME(minElapsed,"minElapsed");
	HX_MARK_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(avgElapsed,"avgElapsed");
	HX_MARK_MEMBER_NAME(childrenElapsed,"childrenElapsed");
	HX_MARK_MEMBER_NAME(totalChildrenElapsed,"totalChildrenElapsed");
	HX_MARK_MEMBER_NAME(branchInstances,"branchInstances");
	HX_MARK_MEMBER_NAME(instances,"instances");
	HX_MARK_MEMBER_NAME(numParents,"numParents");
	HX_MARK_MEMBER_NAME(startTime,"startTime");
	HX_MARK_MEMBER_NAME(nLogs,"nLogs");
	HX_MARK_MEMBER_NAME(childHistory,"childHistory");
	HX_MARK_END_CLASS();
}

void SampleHistory_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(totalElapsed,"totalElapsed");
	HX_VISIT_MEMBER_NAME(minElapsed,"minElapsed");
	HX_VISIT_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(avgElapsed,"avgElapsed");
	HX_VISIT_MEMBER_NAME(childrenElapsed,"childrenElapsed");
	HX_VISIT_MEMBER_NAME(totalChildrenElapsed,"totalChildrenElapsed");
	HX_VISIT_MEMBER_NAME(branchInstances,"branchInstances");
	HX_VISIT_MEMBER_NAME(instances,"instances");
	HX_VISIT_MEMBER_NAME(numParents,"numParents");
	HX_VISIT_MEMBER_NAME(startTime,"startTime");
	HX_VISIT_MEMBER_NAME(nLogs,"nLogs");
	HX_VISIT_MEMBER_NAME(childHistory,"childHistory");
}

Dynamic SampleHistory_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nLogs") ) { return nLogs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getChild") ) { return getChild_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { return instances; }
		if (HX_FIELD_EQ(inName,"startTime") ) { return startTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minElapsed") ) { return minElapsed; }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		if (HX_FIELD_EQ(inName,"avgElapsed") ) { return avgElapsed; }
		if (HX_FIELD_EQ(inName,"numParents") ) { return numParents; }
		if (HX_FIELD_EQ(inName,"getElapsed") ) { return getElapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"getAverage") ) { return getAverage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalElapsed") ) { return totalElapsed; }
		if (HX_FIELD_EQ(inName,"childHistory") ) { return childHistory; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addChildEntry") ) { return addChildEntry_dyn(); }
		if (HX_FIELD_EQ(inName,"getMinElapsed") ) { return getMinElapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"getMaxElapsed") ) { return getMaxElapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"getRelElapsed") ) { return getRelElapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"getRelAverage") ) { return getRelAverage_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childrenElapsed") ) { return childrenElapsed; }
		if (HX_FIELD_EQ(inName,"branchInstances") ) { return branchInstances; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFormattedName") ) { return getFormattedName_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getPercentElapsed") ) { return getPercentElapsed_dyn(); }
		if (HX_FIELD_EQ(inName,"getPercentAverage") ) { return getPercentAverage_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"clearBranchSamples") ) { return clearBranchSamples_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalChildrenElapsed") ) { return totalChildrenElapsed; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SampleHistory_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nLogs") ) { nLogs=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"instances") ) { instances=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startTime") ) { startTime=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"minElapsed") ) { minElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgElapsed") ) { avgElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numParents") ) { numParents=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"totalElapsed") ) { totalElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"childHistory") ) { childHistory=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"childrenElapsed") ) { childrenElapsed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"branchInstances") ) { branchInstances=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"totalChildrenElapsed") ) { totalChildrenElapsed=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SampleHistory_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"));
	outFields->push(HX_HCSTRING("totalElapsed","\xd8","\x2c","\xbf","\x63"));
	outFields->push(HX_HCSTRING("minElapsed","\xca","\xe4","\x77","\x80"));
	outFields->push(HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"));
	outFields->push(HX_HCSTRING("avgElapsed","\x8a","\x7c","\xdb","\xa2"));
	outFields->push(HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59"));
	outFields->push(HX_HCSTRING("totalChildrenElapsed","\x59","\x6d","\x45","\x4c"));
	outFields->push(HX_HCSTRING("branchInstances","\x3c","\x80","\xe4","\x48"));
	outFields->push(HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"));
	outFields->push(HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"));
	outFields->push(HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"));
	outFields->push(HX_HCSTRING("nLogs","\xfd","\x9a","\xa4","\x88"));
	outFields->push(HX_HCSTRING("childHistory","\x18","\x5f","\x13","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(SampleHistory_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,elapsed),HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,totalElapsed),HX_HCSTRING("totalElapsed","\xd8","\x2c","\xbf","\x63")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,minElapsed),HX_HCSTRING("minElapsed","\xca","\xe4","\x77","\x80")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,maxElapsed),HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,avgElapsed),HX_HCSTRING("avgElapsed","\x8a","\x7c","\xdb","\xa2")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,childrenElapsed),HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,totalChildrenElapsed),HX_HCSTRING("totalChildrenElapsed","\x59","\x6d","\x45","\x4c")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,branchInstances),HX_HCSTRING("branchInstances","\x3c","\x80","\xe4","\x48")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,instances),HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,numParents),HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,startTime),HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05")},
	{hx::fsInt,(int)offsetof(SampleHistory_obj,nLogs),HX_HCSTRING("nLogs","\xfd","\x9a","\xa4","\x88")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(SampleHistory_obj,childHistory),HX_HCSTRING("childHistory","\x18","\x5f","\x13","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("elapsed","\x3c","\x98","\xc0","\xba"),
	HX_HCSTRING("totalElapsed","\xd8","\x2c","\xbf","\x63"),
	HX_HCSTRING("minElapsed","\xca","\xe4","\x77","\x80"),
	HX_HCSTRING("maxElapsed","\xf8","\x11","\xe5","\x24"),
	HX_HCSTRING("avgElapsed","\x8a","\x7c","\xdb","\xa2"),
	HX_HCSTRING("childrenElapsed","\xbd","\xdc","\x76","\x59"),
	HX_HCSTRING("totalChildrenElapsed","\x59","\x6d","\x45","\x4c"),
	HX_HCSTRING("branchInstances","\x3c","\x80","\xe4","\x48"),
	HX_HCSTRING("instances","\x3e","\x83","\x1a","\x4b"),
	HX_HCSTRING("numParents","\x63","\xbe","\xe6","\x10"),
	HX_HCSTRING("startTime","\x8f","\x45","\xf0","\x05"),
	HX_HCSTRING("nLogs","\xfd","\x9a","\xa4","\x88"),
	HX_HCSTRING("childHistory","\x18","\x5f","\x13","\x2d"),
	HX_HCSTRING("clearBranchSamples","\xba","\x10","\x23","\xee"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("addChildEntry","\xb7","\x32","\x4b","\x79"),
	HX_HCSTRING("getElapsed","\x46","\x1e","\x22","\x0a"),
	HX_HCSTRING("getAverage","\x67","\xf7","\x3c","\xb2"),
	HX_HCSTRING("getMinElapsed","\x00","\x41","\xea","\xdc"),
	HX_HCSTRING("getMaxElapsed","\x2e","\x6e","\x57","\x81"),
	HX_HCSTRING("getRelElapsed","\x19","\x10","\x34","\xe0"),
	HX_HCSTRING("getRelAverage","\x3a","\xe9","\x4e","\x88"),
	HX_HCSTRING("getPercentElapsed","\x2d","\xd7","\x85","\x34"),
	HX_HCSTRING("getPercentAverage","\x4e","\xb0","\xa0","\xdc"),
	HX_HCSTRING("getFormattedName","\xf1","\x60","\x98","\xd3"),
	HX_HCSTRING("getChild","\x26","\xb9","\x90","\xa5"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SampleHistory_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SampleHistory_obj::__mClass,"__mClass");
};

#endif

hx::Class SampleHistory_obj::__mClass;

void SampleHistory_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.SampleHistory","\x62","\xb3","\x9a","\xc0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SampleHistory_obj >;
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
