#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_CapsStyle
#include <openfl/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JointStyle
#include <openfl/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl_display_LineScaleMode
#include <openfl/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormatAlign
#include <openfl/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DC
#include <pgr/dconsole/DC.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DCThemes
#include <pgr/dconsole/DCThemes.h>
#endif
#ifndef INCLUDED_pgr_dconsole_DConsole
#include <pgr/dconsole/DConsole.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCInterface
#include <pgr/dconsole/ui/DCInterface.h>
#endif
#ifndef INCLUDED_pgr_dconsole_ui_DCOpenflInterface
#include <pgr/dconsole/ui/DCOpenflInterface.h>
#endif
namespace pgr{
namespace dconsole{
namespace ui{

Void DCOpenflInterface_obj::__construct(Float heightPt,::String align)
{
HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","new",0x063bed6a,"pgr.dconsole.ui.DCOpenflInterface.new","pgr/dconsole/ui/DCOpenflInterface.hx",21,0xa80417e7)
HX_STACK_THIS(this)
HX_STACK_ARG(heightPt,"heightPt")
HX_STACK_ARG(align,"align")
{
	HX_STACK_LINE(31)
	this->margin = (int)0;
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(47)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	tmp->stage->addChild(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(49)
	bool tmp1 = (heightPt <= (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(49)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(49)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(49)
	if ((tmp2)){
		HX_STACK_LINE(49)
		tmp3 = (heightPt > (int)100);
	}
	else{
		HX_STACK_LINE(49)
		tmp3 = true;
	}
	HX_STACK_LINE(49)
	if ((tmp3)){
		HX_STACK_LINE(49)
		heightPt = (int)100;
	}
	HX_STACK_LINE(50)
	bool tmp4 = (heightPt > (int)1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(50)
	if ((tmp4)){
		HX_STACK_LINE(50)
		Float tmp5 = heightPt;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Float tmp7 = (Float(tmp6) / Float((int)100));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(50)
		heightPt = tmp7;
	}
	HX_STACK_LINE(52)
	this->heightPt = heightPt;
	HX_STACK_LINE(53)
	this->yAlign = align;
}
;
	return null();
}

//DCOpenflInterface_obj::~DCOpenflInterface_obj() { }

Dynamic DCOpenflInterface_obj::__CreateEmpty() { return  new DCOpenflInterface_obj; }
hx::ObjectPtr< DCOpenflInterface_obj > DCOpenflInterface_obj::__new(Float heightPt,::String align)
{  hx::ObjectPtr< DCOpenflInterface_obj > _result_ = new DCOpenflInterface_obj();
	_result_->__construct(heightPt,align);
	return _result_;}

Dynamic DCOpenflInterface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DCOpenflInterface_obj > _result_ = new DCOpenflInterface_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

hx::Object *DCOpenflInterface_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::pgr::dconsole::ui::DCInterface_obj)) return operator ::pgr::dconsole::ui::DCInterface_obj *();
	return super::__ToInterface(inType);
}

DCOpenflInterface_obj::operator ::pgr::dconsole::ui::DCInterface_obj *()
	{ return new ::pgr::dconsole::ui::DCInterface_delegate_< DCOpenflInterface_obj >(this); }
Void DCOpenflInterface_obj::init( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","init",0x6aec86c6,"pgr.dconsole.ui.DCOpenflInterface.init","pgr/dconsole/ui/DCOpenflInterface.hx",56,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(57)
		this->createMonitorDisplay();
		HX_STACK_LINE(58)
		this->createProfilerDisplay();
		HX_STACK_LINE(59)
		this->createConsoleDisplay();
		HX_STACK_LINE(61)
		this->setConsoleFont(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(62)
		this->setMonitorFont(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(63)
		this->setProfilerFont(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(64)
		this->setPromptFont(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(66)
		this->onResize(null());
		HX_STACK_LINE(67)
		::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(67)
		::String tmp1 = ::openfl::events::Event_obj::RESIZE;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(67)
		Dynamic tmp2 = this->onResize_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(67)
		tmp->stage->addEventListener(tmp1,tmp2,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,init,(void))

Void DCOpenflInterface_obj::onResize( ::openfl::events::Event e){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","onResize",0xd248af29,"pgr.dconsole.ui.DCOpenflInterface.onResize","pgr/dconsole/ui/DCOpenflInterface.hx",70,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(74)
		::openfl::display::Stage tmp = this->stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		this->maxWidth = tmp->stageWidth;
		HX_STACK_LINE(75)
		::openfl::display::Stage tmp1 = this->stage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		this->maxHeight = tmp1->stageHeight;
		HX_STACK_LINE(81)
		this->drawConsole();
		HX_STACK_LINE(82)
		this->drawMonitor();
		HX_STACK_LINE(83)
		this->drawProfiler();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInterface_obj,onResize,(void))

Void DCOpenflInterface_obj::createConsoleDisplay( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","createConsoleDisplay",0x6e58e37d,"pgr.dconsole.ui.DCOpenflInterface.createConsoleDisplay","pgr/dconsole/ui/DCOpenflInterface.hx",87,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(88)
		this->consoleDisplay = tmp;
		HX_STACK_LINE(89)
		::openfl::display::Sprite tmp1 = this->consoleDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(89)
		Dynamic tmp2 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(89)
		Float tmp3 = tmp2->__Field(HX_HCSTRING("CON_TXT_A","\x35","\xba","\x44","\x1b"), hx::paccDynamic );		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(89)
		tmp1->set_alpha(tmp3);
		HX_STACK_LINE(90)
		::openfl::display::Sprite tmp4 = this->consoleDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		tmp4->mouseEnabled = false;
		HX_STACK_LINE(91)
		::openfl::display::Sprite tmp5 = this->consoleDisplay;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		this->addChild(tmp5);
		HX_STACK_LINE(93)
		::openfl::display::Sprite tmp6 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(93)
		this->promptDisplay = tmp6;
		HX_STACK_LINE(94)
		::openfl::display::Sprite tmp7 = this->promptDisplay;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		this->addChild(tmp7);
		HX_STACK_LINE(96)
		::openfl::text::TextField tmp8 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(96)
		this->txtPrompt = tmp8;
		HX_STACK_LINE(97)
		::openfl::text::TextField tmp9 = this->txtPrompt;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		tmp9->set_type(::openfl::text::TextFieldType_obj::INPUT);
		HX_STACK_LINE(98)
		::openfl::text::TextField tmp10 = this->txtPrompt;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		tmp10->set_selectable(true);
		HX_STACK_LINE(99)
		::openfl::text::TextField tmp11 = this->txtPrompt;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(99)
		tmp11->set_multiline(false);
		HX_STACK_LINE(100)
		::openfl::display::Sprite tmp12 = this->promptDisplay;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(100)
		::openfl::text::TextField tmp13 = this->txtPrompt;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(100)
		tmp12->addChild(tmp13);
		HX_STACK_LINE(102)
		::openfl::text::TextField tmp14 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(102)
		this->txtConsole = tmp14;
		HX_STACK_LINE(103)
		::openfl::text::TextField tmp15 = this->txtConsole;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(103)
		tmp15->set_selectable(false);
		HX_STACK_LINE(104)
		::openfl::text::TextField tmp16 = this->txtConsole;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(104)
		tmp16->mouseEnabled = false;
		HX_STACK_LINE(105)
		::openfl::text::TextField tmp17 = this->txtConsole;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(105)
		tmp17->set_multiline(true);
		HX_STACK_LINE(106)
		::openfl::text::TextField tmp18 = this->txtConsole;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(106)
		tmp18->set_wordWrap(true);
		HX_STACK_LINE(107)
		::openfl::text::TextField tmp19 = this->txtConsole;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(107)
		Dynamic tmp20 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(107)
		Float tmp21 = tmp20->__Field(HX_HCSTRING("CON_TXT_A","\x35","\xba","\x44","\x1b"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(107)
		tmp19->set_alpha(tmp21);
		HX_STACK_LINE(108)
		::openfl::display::Sprite tmp22 = this->consoleDisplay;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(108)
		::openfl::text::TextField tmp23 = this->txtConsole;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(108)
		tmp22->addChild(tmp23);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,createConsoleDisplay,(void))

Void DCOpenflInterface_obj::drawConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","drawConsole",0x265966bd,"pgr.dconsole.ui.DCOpenflInterface.drawConsole","pgr/dconsole/ui/DCOpenflInterface.hx",118,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(120)
		::String tmp = this->yAlign;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(120)
		::String tmp1 = ::pgr::dconsole::DC_obj::ALIGN_DOWN;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(120)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(120)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(120)
		if ((tmp2)){
			HX_STACK_LINE(120)
			Float tmp4 = this->maxHeight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(120)
			Float tmp5 = this->maxHeight;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			Float tmp6 = this->heightPt;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(120)
			Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(120)
			tmp3 = (tmp4 - tmp7);
		}
		else{
			HX_STACK_LINE(120)
			tmp3 = (int)0;
		}
		HX_STACK_LINE(120)
		Float _yOffset = tmp3;		HX_STACK_VAR(_yOffset,"_yOffset");
		HX_STACK_LINE(123)
		::openfl::display::Sprite tmp4 = this->consoleDisplay;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		::openfl::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(123)
		tmp5->clear();
		HX_STACK_LINE(124)
		::openfl::display::Sprite tmp6 = this->consoleDisplay;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(124)
		::openfl::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(124)
		Dynamic tmp8 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		int tmp9 = tmp8->__Field(HX_HCSTRING("CON_C","\xa6","\x3b","\x4c","\xc8"), hx::paccDynamic );		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(124)
		tmp7->beginFill(tmp9,(int)1);
		HX_STACK_LINE(125)
		::openfl::display::Sprite tmp10 = this->consoleDisplay;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		::openfl::display::Graphics tmp11 = tmp10->get_graphics();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		Float tmp12 = this->maxWidth;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(125)
		Float tmp13 = this->maxHeight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(125)
		Float tmp14 = this->heightPt;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(125)
		Float tmp15 = (tmp13 * tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(125)
		tmp11->drawRect((int)0,(int)0,tmp12,tmp15);
		HX_STACK_LINE(126)
		::openfl::display::Sprite tmp16 = this->consoleDisplay;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(126)
		::openfl::display::Graphics tmp17 = tmp16->get_graphics();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(126)
		tmp17->endFill();
		HX_STACK_LINE(127)
		::openfl::display::Sprite tmp18 = this->consoleDisplay;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(127)
		Float tmp19 = _yOffset;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(127)
		tmp18->set_y(tmp19);
		HX_STACK_LINE(128)
		::openfl::display::Sprite tmp20 = this->consoleDisplay;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(128)
		Dynamic tmp21 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(128)
		Float tmp22 = tmp21->__Field(HX_HCSTRING("CON_A","\xa4","\x3b","\x4c","\xc8"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(128)
		tmp20->set_alpha(tmp22);
		HX_STACK_LINE(131)
		::openfl::display::Sprite tmp23 = this->promptDisplay;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(131)
		::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(131)
		tmp24->clear();
		HX_STACK_LINE(132)
		::openfl::display::Sprite tmp25 = this->promptDisplay;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(132)
		::openfl::display::Graphics tmp26 = tmp25->get_graphics();		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(132)
		Dynamic tmp27 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(132)
		int tmp28 = tmp27->__Field(HX_HCSTRING("PRM_C","\xcf","\xa7","\x7c","\x46"), hx::paccDynamic );		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(132)
		tmp26->beginFill(tmp28,null());
		HX_STACK_LINE(133)
		::openfl::display::Sprite tmp29 = this->promptDisplay;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(133)
		::openfl::display::Graphics tmp30 = tmp29->get_graphics();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(133)
		Float tmp31 = this->maxWidth;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(133)
		::openfl::text::TextField tmp32 = this->txtPrompt;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(133)
		Float tmp33 = tmp32->get_textHeight();		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(133)
		tmp30->drawRect((int)0,(int)0,tmp31,tmp33);
		HX_STACK_LINE(134)
		::openfl::display::Sprite tmp34 = this->promptDisplay;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(134)
		::openfl::display::Graphics tmp35 = tmp34->get_graphics();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(134)
		tmp35->endFill();
		HX_STACK_LINE(135)
		::openfl::display::Sprite tmp36 = this->promptDisplay;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(135)
		::openfl::display::Sprite tmp37 = this->consoleDisplay;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(135)
		Float tmp38 = tmp37->get_y();		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(135)
		Float tmp39 = this->maxHeight;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(135)
		Float tmp40 = this->heightPt;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(135)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(135)
		Float tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(135)
		::openfl::text::TextField tmp43 = this->txtPrompt;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(135)
		Float tmp44 = tmp43->get_textHeight();		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(135)
		Float tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(135)
		tmp36->set_y(tmp45);
		HX_STACK_LINE(138)
		::openfl::text::TextField tmp46 = this->txtConsole;		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(138)
		Float tmp47 = this->maxWidth;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(138)
		tmp46->set_width(tmp47);
		HX_STACK_LINE(139)
		::openfl::text::TextField tmp48 = this->txtConsole;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(139)
		tmp48->set_x((int)0);
		HX_STACK_LINE(140)
		::openfl::text::TextField tmp49 = this->txtPrompt;		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(140)
		tmp49->set_x((int)0);
		HX_STACK_LINE(141)
		::openfl::text::TextField tmp50 = this->txtConsole;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(141)
		Float tmp51 = this->maxHeight;		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(141)
		Float tmp52 = this->heightPt;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(141)
		Float tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(141)
		::openfl::text::TextField tmp54 = this->txtPrompt;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(141)
		Float tmp55 = tmp54->get_textHeight();		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(141)
		Float tmp56 = (tmp53 - tmp55);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(141)
		Float tmp57 = (tmp56 + (int)2);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(141)
		tmp50->set_height(tmp57);
		HX_STACK_LINE(143)
		::openfl::text::TextField tmp58 = this->txtPrompt;		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(143)
		tmp58->set_y((int)-2);
		HX_STACK_LINE(144)
		::openfl::text::TextField tmp59 = this->txtPrompt;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(144)
		Float tmp60 = this->maxWidth;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(144)
		tmp59->set_width(tmp60);
		HX_STACK_LINE(145)
		::openfl::text::TextField tmp61 = this->txtPrompt;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(145)
		tmp61->set_height((int)32);
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			::openfl::text::TextField tmp62 = this->txtConsole;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(149)
			::openfl::text::TextField _g = tmp62;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			Float tmp63 = _g->get_x();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(149)
			Float tmp64 = (tmp63 + (int)10);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(149)
			_g->set_x(tmp64);
		}
		HX_STACK_LINE(150)
		{
			HX_STACK_LINE(150)
			::openfl::text::TextField tmp62 = this->txtConsole;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(150)
			::openfl::text::TextField _g = tmp62;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			Float tmp63 = _g->get_width();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(150)
			Float tmp64 = (tmp63 - (int)10);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(150)
			_g->set_width(tmp64);
		}
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			::openfl::text::TextField tmp62 = this->txtPrompt;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(151)
			::openfl::text::TextField _g = tmp62;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Float tmp63 = _g->get_x();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(151)
			Float tmp64 = (tmp63 + (int)10);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(151)
			_g->set_x(tmp64);
		}
		HX_STACK_LINE(152)
		{
			HX_STACK_LINE(152)
			::openfl::text::TextField tmp62 = this->txtPrompt;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(152)
			::openfl::text::TextField _g = tmp62;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			Float tmp63 = _g->get_width();		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(152)
			Float tmp64 = (tmp63 - (int)10);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(152)
			_g->set_width(tmp64);
		}
		HX_STACK_LINE(154)
		::openfl::text::TextField tmp62 = this->txtPrompt;		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(154)
		tmp62->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,drawConsole,(void))

Void DCOpenflInterface_obj::showConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","showConsole",0xb9acbee4,"pgr.dconsole.ui.DCOpenflInterface.showConsole","pgr/dconsole/ui/DCOpenflInterface.hx",158,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		::openfl::display::Sprite tmp = this->consoleDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(159)
		tmp->set_visible(true);
		HX_STACK_LINE(160)
		::openfl::display::Sprite tmp1 = this->promptDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		tmp1->set_visible(true);
		HX_STACK_LINE(161)
		this->toFront();
		HX_STACK_LINE(162)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(162)
		::openfl::text::TextField tmp3 = this->txtPrompt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(162)
		tmp2->stage->set_focus(tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,showConsole,(void))

Void DCOpenflInterface_obj::hideConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","hideConsole",0xda7d11bf,"pgr.dconsole.ui.DCOpenflInterface.hideConsole","pgr/dconsole/ui/DCOpenflInterface.hx",165,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(166)
		::openfl::display::Sprite tmp = this->consoleDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(166)
		tmp->set_visible(false);
		HX_STACK_LINE(167)
		::openfl::display::Sprite tmp1 = this->promptDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(167)
		tmp1->set_visible(false);
		HX_STACK_LINE(168)
		::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		tmp2->stage->set_focus(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,hideConsole,(void))

Void DCOpenflInterface_obj::createMonitorDisplay( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","createMonitorDisplay",0x2246529a,"pgr.dconsole.ui.DCOpenflInterface.createMonitorDisplay","pgr/dconsole/ui/DCOpenflInterface.hx",174,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(176)
		::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(176)
		this->monitorDisplay = tmp;
		HX_STACK_LINE(177)
		::openfl::display::Sprite tmp1 = this->monitorDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(177)
		tmp1->mouseEnabled = false;
		HX_STACK_LINE(178)
		::openfl::display::Sprite tmp2 = this->monitorDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(178)
		tmp2->mouseChildren = false;
		HX_STACK_LINE(179)
		::openfl::display::Sprite tmp3 = this->monitorDisplay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		this->addChild(tmp3);
		HX_STACK_LINE(181)
		::openfl::text::TextField tmp4 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		this->txtMonitorLeft = tmp4;
		HX_STACK_LINE(182)
		::openfl::text::TextField tmp5 = this->txtMonitorLeft;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(182)
		tmp5->set_selectable(false);
		HX_STACK_LINE(183)
		::openfl::text::TextField tmp6 = this->txtMonitorLeft;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(183)
		tmp6->set_multiline(true);
		HX_STACK_LINE(184)
		::openfl::text::TextField tmp7 = this->txtMonitorLeft;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(184)
		tmp7->set_wordWrap(true);
		HX_STACK_LINE(185)
		::openfl::display::Sprite tmp8 = this->monitorDisplay;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(185)
		::openfl::text::TextField tmp9 = this->txtMonitorLeft;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(185)
		tmp8->addChild(tmp9);
		HX_STACK_LINE(187)
		::openfl::text::TextField tmp10 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(187)
		this->txtMonitorRight = tmp10;
		HX_STACK_LINE(188)
		::openfl::text::TextField tmp11 = this->txtMonitorRight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(188)
		tmp11->set_selectable(false);
		HX_STACK_LINE(189)
		::openfl::text::TextField tmp12 = this->txtMonitorRight;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(189)
		tmp12->set_multiline(true);
		HX_STACK_LINE(190)
		::openfl::text::TextField tmp13 = this->txtMonitorRight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(190)
		tmp13->set_wordWrap(true);
		HX_STACK_LINE(191)
		::openfl::display::Sprite tmp14 = this->monitorDisplay;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(191)
		::openfl::text::TextField tmp15 = this->txtMonitorRight;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(191)
		tmp14->addChild(tmp15);
		HX_STACK_LINE(192)
		::openfl::display::Sprite tmp16 = this->monitorDisplay;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(192)
		tmp16->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,createMonitorDisplay,(void))

Void DCOpenflInterface_obj::drawMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","drawMonitor",0xbf97b600,"pgr.dconsole.ui.DCOpenflInterface.drawMonitor","pgr/dconsole/ui/DCOpenflInterface.hx",195,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		::openfl::display::Sprite tmp = this->monitorDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		::openfl::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		tmp1->clear();
		HX_STACK_LINE(199)
		::openfl::display::Sprite tmp2 = this->monitorDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(199)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(199)
		Dynamic tmp4 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		int tmp5 = tmp4->__Field(HX_HCSTRING("MON_C","\xb0","\x08","\x4e","\x8a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(199)
		Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(199)
		Float tmp7 = tmp6->__Field(HX_HCSTRING("MON_A","\xae","\x08","\x4e","\x8a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(199)
		tmp3->beginFill(tmp5,tmp7);
		HX_STACK_LINE(200)
		::openfl::display::Sprite tmp8 = this->monitorDisplay;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(200)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(200)
		Float tmp10 = this->maxWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(200)
		Float tmp11 = this->maxHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(200)
		tmp9->drawRect((int)0,(int)0,tmp10,tmp11);
		HX_STACK_LINE(201)
		::openfl::display::Sprite tmp12 = this->monitorDisplay;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(201)
		::openfl::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(201)
		tmp13->endFill();
		HX_STACK_LINE(203)
		::openfl::text::TextField tmp14 = this->txtMonitorLeft;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(203)
		::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(203)
		::String s = tmp15;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(204)
		::openfl::text::TextField tmp16 = this->txtMonitorLeft;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(204)
		tmp16->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(205)
		::openfl::text::TextField tmp17 = this->txtMonitorLeft;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(205)
		Float tmp18 = tmp17->get_textHeight();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(205)
		Float h = tmp18;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(206)
		::openfl::display::Sprite tmp19 = this->monitorDisplay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(206)
		Dynamic tmp20 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(206)
		Float tmp21 = tmp20->__Field(HX_HCSTRING("MON_TXT_A","\x3f","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(206)
		tmp19->set_alpha(tmp21);
		HX_STACK_LINE(207)
		::openfl::display::Sprite tmp22 = this->monitorDisplay;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(207)
		::openfl::display::Graphics tmp23 = tmp22->get_graphics();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(207)
		Dynamic tmp24 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(207)
		int tmp25 = tmp24->__Field(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(207)
		tmp23->lineStyle((int)1,tmp25,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(208)
		::openfl::display::Sprite tmp26 = this->monitorDisplay;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(208)
		::openfl::display::Graphics tmp27 = tmp26->get_graphics();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(208)
		Float tmp28 = h;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(208)
		tmp27->moveTo((int)0,tmp28);
		HX_STACK_LINE(209)
		::openfl::display::Sprite tmp29 = this->monitorDisplay;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(209)
		::openfl::display::Graphics tmp30 = tmp29->get_graphics();		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(209)
		Float tmp31 = this->maxWidth;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(209)
		Float tmp32 = h;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(209)
		tmp30->lineTo(tmp31,tmp32);
		HX_STACK_LINE(210)
		::openfl::text::TextField tmp33 = this->txtMonitorLeft;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(210)
		::String tmp34 = s;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(210)
		tmp33->set_text(tmp34);
		HX_STACK_LINE(212)
		::openfl::text::TextField tmp35 = this->txtMonitorLeft;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(212)
		tmp35->set_x((int)0);
		HX_STACK_LINE(213)
		::openfl::text::TextField tmp36 = this->txtMonitorLeft;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(213)
		Float tmp37 = this->maxWidth;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(213)
		Float tmp38 = (Float(tmp37) / Float((int)2));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(213)
		tmp36->set_width(tmp38);
		HX_STACK_LINE(214)
		::openfl::text::TextField tmp39 = this->txtMonitorLeft;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(214)
		Float tmp40 = this->maxHeight;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(214)
		tmp39->set_height(tmp40);
		HX_STACK_LINE(216)
		::openfl::text::TextField tmp41 = this->txtMonitorRight;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(216)
		Float tmp42 = this->maxWidth;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(216)
		Float tmp43 = (Float(tmp42) / Float((int)2));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(216)
		tmp41->set_x(tmp43);
		HX_STACK_LINE(217)
		::openfl::text::TextField tmp44 = this->txtMonitorRight;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(217)
		Float tmp45 = this->maxWidth;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(217)
		Float tmp46 = (Float(tmp45) / Float((int)2));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(217)
		tmp44->set_width(tmp46);
		HX_STACK_LINE(218)
		::openfl::text::TextField tmp47 = this->txtMonitorRight;		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(218)
		Float tmp48 = this->maxHeight;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(218)
		tmp47->set_height(tmp48);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,drawMonitor,(void))

Void DCOpenflInterface_obj::writeMonitorOutput( Array< ::String > output){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","writeMonitorOutput",0xdebbcf12,"pgr.dconsole.ui.DCOpenflInterface.writeMonitorOutput","pgr/dconsole/ui/DCOpenflInterface.hx",222,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(output,"output")
		HX_STACK_LINE(223)
		::openfl::text::TextField tmp = this->txtMonitorLeft;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(223)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(224)
		::openfl::text::TextField tmp1 = this->txtMonitorRight;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(224)
		tmp1->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(226)
		{
			HX_STACK_LINE(226)
			::openfl::text::TextField tmp2 = this->txtMonitorLeft;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(226)
			::openfl::text::TextField _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(226)
			::String tmp3 = _g->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(226)
			::String tmp4 = (tmp3 + HX_HCSTRING("DC Monitor\n\n","\xd9","\xa9","\xbc","\x67"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(226)
			_g->set_text(tmp4);
		}
		HX_STACK_LINE(227)
		{
			HX_STACK_LINE(227)
			::openfl::text::TextField tmp2 = this->txtMonitorRight;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(227)
			::openfl::text::TextField _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(227)
			::String tmp3 = _g->get_text();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(227)
			::String tmp4 = (tmp3 + HX_HCSTRING("\n\n","\xc0","\x08","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(227)
			_g->set_text(tmp4);
		}
		HX_STACK_LINE(229)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(230)
		while((true)){
			HX_STACK_LINE(230)
			bool tmp2 = (output->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(230)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(230)
			if ((tmp3)){
				HX_STACK_LINE(230)
				break;
			}
			HX_STACK_LINE(232)
			int tmp4 = hx::Mod(i,(int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(232)
			bool tmp5 = (tmp4 == (int)0);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(232)
			if ((tmp5)){
				HX_STACK_LINE(233)
				::openfl::text::TextField tmp6 = this->txtMonitorLeft;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(233)
				::openfl::text::TextField _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(233)
				::String tmp7 = _g->get_text();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(233)
				::String tmp8 = output->shift();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(233)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(233)
				_g->set_text(tmp9);
			}
			else{
				HX_STACK_LINE(235)
				::openfl::text::TextField tmp6 = this->txtMonitorRight;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(235)
				::openfl::text::TextField _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(235)
				::String tmp7 = _g->get_text();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(235)
				::String tmp8 = output->shift();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(235)
				::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(235)
				_g->set_text(tmp9);
			}
			HX_STACK_LINE(237)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInterface_obj,writeMonitorOutput,(void))

Void DCOpenflInterface_obj::showMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","showMonitor",0x52eb0e27,"pgr.dconsole.ui.DCOpenflInterface.showMonitor","pgr/dconsole/ui/DCOpenflInterface.hx",242,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(243)
		::openfl::display::Sprite tmp = this->monitorDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(243)
		tmp->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,showMonitor,(void))

Void DCOpenflInterface_obj::hideMonitor( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","hideMonitor",0x73bb6102,"pgr.dconsole.ui.DCOpenflInterface.hideMonitor","pgr/dconsole/ui/DCOpenflInterface.hx",245,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(246)
		::openfl::display::Sprite tmp = this->monitorDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(246)
		tmp->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,hideMonitor,(void))

Void DCOpenflInterface_obj::createProfilerDisplay( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","createProfilerDisplay",0xe3d44207,"pgr.dconsole.ui.DCOpenflInterface.createProfilerDisplay","pgr/dconsole/ui/DCOpenflInterface.hx",252,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(254)
		::openfl::display::Sprite tmp = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(254)
		this->profilerDisplay = tmp;
		HX_STACK_LINE(255)
		::openfl::display::Sprite tmp1 = this->profilerDisplay;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(255)
		tmp1->mouseEnabled = false;
		HX_STACK_LINE(256)
		::openfl::display::Sprite tmp2 = this->profilerDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(256)
		tmp2->mouseChildren = false;
		HX_STACK_LINE(257)
		::openfl::display::Sprite tmp3 = this->profilerDisplay;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(257)
		this->addChild(tmp3);
		HX_STACK_LINE(259)
		::openfl::text::TextField tmp4 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(259)
		this->txtProfiler = tmp4;
		HX_STACK_LINE(260)
		::openfl::text::TextField tmp5 = this->txtProfiler;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(260)
		tmp5->set_selectable(false);
		HX_STACK_LINE(261)
		::openfl::text::TextField tmp6 = this->txtProfiler;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(261)
		tmp6->set_multiline(true);
		HX_STACK_LINE(262)
		::openfl::text::TextField tmp7 = this->txtProfiler;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(262)
		tmp7->set_wordWrap(true);
		HX_STACK_LINE(263)
		::openfl::display::Sprite tmp8 = this->profilerDisplay;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(263)
		::openfl::text::TextField tmp9 = this->txtProfiler;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(263)
		tmp8->addChild(tmp9);
		HX_STACK_LINE(264)
		::openfl::display::Sprite tmp10 = this->profilerDisplay;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(264)
		tmp10->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,createProfilerDisplay,(void))

Void DCOpenflInterface_obj::drawProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","drawProfiler",0xb25f3903,"pgr.dconsole.ui.DCOpenflInterface.drawProfiler","pgr/dconsole/ui/DCOpenflInterface.hx",267,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(270)
		::openfl::display::Sprite tmp = this->profilerDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(270)
		::openfl::display::Graphics tmp1 = tmp->get_graphics();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(270)
		tmp1->clear();
		HX_STACK_LINE(271)
		::openfl::display::Sprite tmp2 = this->profilerDisplay;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(271)
		::openfl::display::Graphics tmp3 = tmp2->get_graphics();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(271)
		Dynamic tmp4 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(271)
		int tmp5 = tmp4->__Field(HX_HCSTRING("MON_C","\xb0","\x08","\x4e","\x8a"), hx::paccDynamic );		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(271)
		Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(271)
		Float tmp7 = tmp6->__Field(HX_HCSTRING("MON_A","\xae","\x08","\x4e","\x8a"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(271)
		tmp3->beginFill(tmp5,tmp7);
		HX_STACK_LINE(272)
		::openfl::display::Sprite tmp8 = this->profilerDisplay;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(272)
		::openfl::display::Graphics tmp9 = tmp8->get_graphics();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(272)
		Float tmp10 = this->maxWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(272)
		Float tmp11 = this->maxHeight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(272)
		tmp9->drawRect((int)0,(int)0,tmp10,tmp11);
		HX_STACK_LINE(273)
		::openfl::display::Sprite tmp12 = this->profilerDisplay;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(273)
		::openfl::display::Graphics tmp13 = tmp12->get_graphics();		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(273)
		tmp13->endFill();
		HX_STACK_LINE(275)
		::openfl::text::TextField tmp14 = this->txtProfiler;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(275)
		::String tmp15 = tmp14->get_text();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(275)
		::String s = tmp15;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(276)
		::openfl::text::TextField tmp16 = this->txtProfiler;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(276)
		tmp16->set_text(HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));
		HX_STACK_LINE(277)
		::openfl::text::TextField tmp17 = this->txtProfiler;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(277)
		Float tmp18 = tmp17->get_textHeight();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(277)
		Float h = tmp18;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(278)
		::openfl::display::Sprite tmp19 = this->profilerDisplay;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(278)
		::openfl::display::Graphics tmp20 = tmp19->get_graphics();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(278)
		Dynamic tmp21 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(278)
		int tmp22 = tmp21->__Field(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(278)
		tmp20->lineStyle((int)1,tmp22,null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(279)
		::openfl::display::Sprite tmp23 = this->profilerDisplay;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(279)
		::openfl::display::Graphics tmp24 = tmp23->get_graphics();		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(279)
		Float tmp25 = h;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(279)
		tmp24->moveTo((int)0,tmp25);
		HX_STACK_LINE(280)
		::openfl::display::Sprite tmp26 = this->profilerDisplay;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(280)
		::openfl::display::Graphics tmp27 = tmp26->get_graphics();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(280)
		Float tmp28 = this->maxWidth;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(280)
		Float tmp29 = h;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(280)
		tmp27->lineTo(tmp28,tmp29);
		HX_STACK_LINE(281)
		::openfl::text::TextField tmp30 = this->txtProfiler;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(281)
		::String tmp31 = s;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(281)
		tmp30->set_text(tmp31);
		HX_STACK_LINE(283)
		::openfl::text::TextField tmp32 = this->txtProfiler;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(283)
		Dynamic tmp33 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(283)
		Float tmp34 = tmp33->__Field(HX_HCSTRING("MON_TXT_A","\x3f","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(283)
		tmp32->set_alpha(tmp34);
		HX_STACK_LINE(284)
		::openfl::text::TextField tmp35 = this->txtProfiler;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(284)
		Float tmp36 = this->maxWidth;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(284)
		tmp35->set_width(tmp36);
		HX_STACK_LINE(285)
		::openfl::text::TextField tmp37 = this->txtProfiler;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(285)
		Float tmp38 = this->maxHeight;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(285)
		tmp37->set_height(tmp38);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,drawProfiler,(void))

Void DCOpenflInterface_obj::writeProfilerOutput( ::String output){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","writeProfilerOutput",0x4e56fd53,"pgr.dconsole.ui.DCOpenflInterface.writeProfilerOutput","pgr/dconsole/ui/DCOpenflInterface.hx",288,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(output,"output")
		HX_STACK_LINE(289)
		::openfl::text::TextField tmp = this->txtProfiler;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(289)
		tmp->set_text(HX_HCSTRING("DC Profiler\n\n","\x4a","\x13","\x14","\xab"));
		HX_STACK_LINE(290)
		{
			HX_STACK_LINE(290)
			::openfl::text::TextField tmp1 = this->txtProfiler;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(290)
			::openfl::text::TextField _g = tmp1;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(290)
			::String tmp2 = _g->get_text();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(290)
			::String tmp3 = output;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(290)
			::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(290)
			_g->set_text(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInterface_obj,writeProfilerOutput,(void))

Void DCOpenflInterface_obj::showProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","showProfiler",0x07f902fc,"pgr.dconsole.ui.DCOpenflInterface.showProfiler","pgr/dconsole/ui/DCOpenflInterface.hx",293,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(294)
		::openfl::display::Sprite tmp = this->profilerDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		tmp->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,showProfiler,(void))

Void DCOpenflInterface_obj::hideProfiler( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","hideProfiler",0x9d712fc1,"pgr.dconsole.ui.DCOpenflInterface.hideProfiler","pgr/dconsole/ui/DCOpenflInterface.hx",297,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(298)
		::openfl::display::Sprite tmp = this->profilerDisplay;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(298)
		tmp->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,hideProfiler,(void))

Void DCOpenflInterface_obj::log( Dynamic data,int color){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","log",0x063a718e,"pgr.dconsole.ui.DCOpenflInterface.log","pgr/dconsole/ui/DCOpenflInterface.hx",304,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(306)
		::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		::openfl::text::TextField tf = tmp;		HX_STACK_VAR(tf,"tf");
		HX_STACK_LINE(307)
		Dynamic tmp1 = data;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(307)
		::String tmp2 = ::Std_obj::string(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(307)
		::String tmp3 = (tmp2 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(307)
		tf->appendText(tmp3);
		HX_STACK_LINE(308)
		int tmp4 = tf->get_maxScrollV();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(308)
		tf->set_scrollV(tmp4);
		HX_STACK_LINE(311)
		bool tmp5 = (color == (int)-1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(311)
		if ((tmp5)){
			HX_STACK_LINE(312)
			Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(312)
			color = tmp6->__Field(HX_HCSTRING("CON_TXT_C","\x37","\xba","\x44","\x1b"), hx::paccDynamic );
		}
		HX_STACK_LINE(316)
		::openfl::text::TextFormat tmp6 = ::openfl::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(316)
		::openfl::text::TextFormat format = tmp6;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(317)
		format->color = color;
		HX_STACK_LINE(318)
		Dynamic tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(318)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(318)
		int l = tmp8.length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(319)
		::openfl::text::TextFormat tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(319)
		::String tmp10 = tf->get_text();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(319)
		int tmp11 = tmp10.length;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(319)
		int tmp12 = l;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(319)
		int tmp13 = (tmp11 - tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(319)
		int tmp14 = (tmp13 - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(319)
		::String tmp15 = tf->get_text();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(319)
		int tmp16 = tmp15.length;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(319)
		int tmp17 = (tmp16 - (int)1);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(319)
		tf->setTextFormat(tmp9,tmp14,tmp17);
		HX_STACK_LINE(320)
		this->scrollToBottom();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DCOpenflInterface_obj,log,(void))

Void DCOpenflInterface_obj::moveCarretToEnd( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","moveCarretToEnd",0x282db48c,"pgr.dconsole.ui.DCOpenflInterface.moveCarretToEnd","pgr/dconsole/ui/DCOpenflInterface.hx",323,0xa80417e7)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,moveCarretToEnd,(void))

Void DCOpenflInterface_obj::scrollConsoleUp( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","scrollConsoleUp",0x1b289bcf,"pgr.dconsole.ui.DCOpenflInterface.scrollConsoleUp","pgr/dconsole/ui/DCOpenflInterface.hx",329,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(330)
		{
			HX_STACK_LINE(330)
			::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(330)
			::openfl::text::TextField _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(330)
			int tmp1 = _g->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(330)
			::openfl::text::TextField tmp2 = this->txtConsole;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(330)
			int tmp3 = tmp2->get_bottomScrollV();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(330)
			::openfl::text::TextField tmp4 = this->txtConsole;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(330)
			int tmp5 = tmp4->get_scrollV();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(330)
			int tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(330)
			int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(330)
			int tmp8 = (tmp1 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(330)
			_g->set_scrollV(tmp8);
		}
		HX_STACK_LINE(331)
		::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(331)
		int tmp1 = tmp->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(331)
		bool tmp2 = (tmp1 < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(331)
		if ((tmp2)){
			HX_STACK_LINE(332)
			::openfl::text::TextField tmp3 = this->txtConsole;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(332)
			tmp3->set_scrollV((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,scrollConsoleUp,(void))

Void DCOpenflInterface_obj::scrollConsoleDown( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","scrollConsoleDown",0xa02572d6,"pgr.dconsole.ui.DCOpenflInterface.scrollConsoleDown","pgr/dconsole/ui/DCOpenflInterface.hx",335,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(336)
		{
			HX_STACK_LINE(336)
			::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(336)
			::openfl::text::TextField _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(336)
			int tmp1 = _g->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(336)
			::openfl::text::TextField tmp2 = this->txtConsole;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(336)
			int tmp3 = tmp2->get_bottomScrollV();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(336)
			::openfl::text::TextField tmp4 = this->txtConsole;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(336)
			int tmp5 = tmp4->get_scrollV();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(336)
			int tmp6 = (tmp3 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(336)
			int tmp7 = (tmp6 + (int)1);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(336)
			int tmp8 = (tmp1 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(336)
			_g->set_scrollV(tmp8);
		}
		HX_STACK_LINE(337)
		::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(337)
		int tmp1 = tmp->get_scrollV();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(337)
		::openfl::text::TextField tmp2 = this->txtConsole;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(337)
		int tmp3 = tmp2->get_maxScrollV();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(337)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(337)
		if ((tmp4)){
			HX_STACK_LINE(338)
			::openfl::text::TextField tmp5 = this->txtConsole;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(338)
			::openfl::text::TextField tmp6 = this->txtConsole;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(338)
			int tmp7 = tmp6->get_maxScrollV();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(338)
			tmp5->set_scrollV(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,scrollConsoleDown,(void))

Void DCOpenflInterface_obj::scrollToBottom( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","scrollToBottom",0xcca5c329,"pgr.dconsole.ui.DCOpenflInterface.scrollToBottom","pgr/dconsole/ui/DCOpenflInterface.hx",341,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(342)
		::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(342)
		::openfl::text::TextField tmp1 = this->txtConsole;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(342)
		int tmp2 = tmp1->get_maxScrollV();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(342)
		tmp->set_scrollV(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,scrollToBottom,(void))

Void DCOpenflInterface_obj::toFront( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","toFront",0x4dcecf38,"pgr.dconsole.ui.DCOpenflInterface.toFront","pgr/dconsole/ui/DCOpenflInterface.hx",348,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		::openfl::display::DisplayObjectContainer tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(349)
		::openfl::display::DisplayObjectContainer tmp1 = this->parent;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		int tmp2 = tmp1->get_numChildren();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		tmp->setChildIndex(hx::ObjectPtr<OBJ_>(this),tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,toFront,(void))

Void DCOpenflInterface_obj::setConsoleFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,hx::Null< bool >  __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
bool italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","setConsoleFont",0x73d8f37a,"pgr.dconsole.ui.DCOpenflInterface.setConsoleFont","pgr/dconsole/ui/DCOpenflInterface.hx",352,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(356)
		bool tmp = (font == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		if ((tmp)){
			HX_STACK_LINE(356)
			::String tmp2 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(356)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(356)
			tmp1 = (tmp3 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));
		}
		else{
			HX_STACK_LINE(356)
			tmp1 = false;
		}
		HX_STACK_LINE(356)
		if ((tmp1)){
			HX_STACK_LINE(358)
			font = HX_HCSTRING("Consolas","\xe0","\xb9","\x09","\x7c");
		}
		HX_STACK_LINE(360)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(360)
		if ((tmp2)){
			HX_STACK_LINE(360)
			::openfl::text::TextField tmp3 = this->txtConsole;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			tmp3->set_embedFonts(true);
		}
		else{
			HX_STACK_LINE(360)
			::openfl::text::TextField tmp3 = this->txtConsole;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(360)
			tmp3->set_embedFonts(false);
		}
		HX_STACK_LINE(361)
		::openfl::text::TextField tmp3 = this->txtConsole;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(361)
		::String tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(361)
		int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(361)
		Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(361)
		int tmp7 = tmp6->__Field(HX_HCSTRING("CON_TXT_C","\x37","\xba","\x44","\x1b"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(361)
		bool tmp8 = bold;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(361)
		bool tmp9 = italic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(361)
		bool tmp10 = underline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(361)
		int tmp11 = this->margin;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(361)
		int tmp12 = this->margin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(361)
		::openfl::text::TextFormat tmp13 = ::openfl::text::TextFormat_obj::__new(tmp4,tmp5,tmp7,tmp8,tmp9,tmp10,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,tmp11,tmp12,null(),null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(361)
		tmp3->set_defaultTextFormat(tmp13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCOpenflInterface_obj,setConsoleFont,(void))

Void DCOpenflInterface_obj::setPromptFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(16);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","setPromptFont",0xa6dc495f,"pgr.dconsole.ui.DCOpenflInterface.setPromptFont","pgr/dconsole/ui/DCOpenflInterface.hx",366,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(370)
		bool tmp = (font == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(370)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(370)
		if ((tmp)){
			HX_STACK_LINE(370)
			::String tmp2 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(370)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(370)
			tmp1 = (tmp3 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));
		}
		else{
			HX_STACK_LINE(370)
			tmp1 = false;
		}
		HX_STACK_LINE(370)
		if ((tmp1)){
			HX_STACK_LINE(372)
			font = HX_HCSTRING("Consolas","\xe0","\xb9","\x09","\x7c");
		}
		HX_STACK_LINE(374)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		if ((tmp2)){
			HX_STACK_LINE(374)
			::openfl::text::TextField tmp3 = this->txtPrompt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			tmp3->set_embedFonts(true);
		}
		else{
			HX_STACK_LINE(374)
			::openfl::text::TextField tmp3 = this->txtPrompt;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(374)
			tmp3->set_embedFonts(false);
		}
		HX_STACK_LINE(375)
		::openfl::text::TextField tmp3 = this->txtPrompt;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(375)
		::String tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(375)
		int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(375)
		Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(375)
		int tmp7 = tmp6->__Field(HX_HCSTRING("PRM_TXT_C","\xe0","\xee","\x88","\x53"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(375)
		bool tmp8 = bold;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(375)
		Dynamic tmp9 = italic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(375)
		bool tmp10 = underline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(375)
		::openfl::text::TextFormat tmp11 = ::openfl::text::TextFormat_obj::__new(tmp4,tmp5,tmp7,tmp8,tmp9,tmp10,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(375)
		tmp3->set_defaultTextFormat(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCOpenflInterface_obj,setPromptFont,(void))

Void DCOpenflInterface_obj::setProfilerFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","setProfilerFont",0xb0b1e464,"pgr.dconsole.ui.DCOpenflInterface.setProfilerFont","pgr/dconsole/ui/DCOpenflInterface.hx",379,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(383)
		bool tmp = (font == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		if ((tmp)){
			HX_STACK_LINE(383)
			::String tmp2 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(383)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(383)
			tmp1 = (tmp3 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));
		}
		else{
			HX_STACK_LINE(383)
			tmp1 = false;
		}
		HX_STACK_LINE(383)
		if ((tmp1)){
			HX_STACK_LINE(385)
			font = HX_HCSTRING("Consolas","\xe0","\xb9","\x09","\x7c");
		}
		HX_STACK_LINE(388)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(388)
		if ((tmp2)){
			HX_STACK_LINE(388)
			::openfl::text::TextField tmp3 = this->txtProfiler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			tmp3->set_embedFonts(true);
		}
		else{
			HX_STACK_LINE(388)
			::openfl::text::TextField tmp3 = this->txtProfiler;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(388)
			tmp3->set_embedFonts(false);
		}
		HX_STACK_LINE(389)
		::openfl::text::TextField tmp3 = this->txtProfiler;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		::String tmp4 = font;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		int tmp5 = size;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(389)
		Dynamic tmp6 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(389)
		int tmp7 = tmp6->__Field(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(389)
		bool tmp8 = bold;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(389)
		Dynamic tmp9 = italic;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(389)
		bool tmp10 = underline;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(389)
		::openfl::text::TextFormat tmp11 = ::openfl::text::TextFormat_obj::__new(tmp4,tmp5,tmp7,tmp8,tmp9,tmp10,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,(int)10,(int)10,null(),null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(389)
		tmp3->set_defaultTextFormat(tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCOpenflInterface_obj,setProfilerFont,(void))

Void DCOpenflInterface_obj::setMonitorFont( ::String font,hx::Null< bool >  __o_embed,hx::Null< int >  __o_size,hx::Null< bool >  __o_bold,Dynamic __o_italic,hx::Null< bool >  __o_underline){
bool embed = __o_embed.Default(false);
int size = __o_size.Default(14);
bool bold = __o_bold.Default(false);
Dynamic italic = __o_italic.Default(false);
bool underline = __o_underline.Default(false);
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","setMonitorFont",0xbfc3a03d,"pgr.dconsole.ui.DCOpenflInterface.setMonitorFont","pgr/dconsole/ui/DCOpenflInterface.hx",392,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(font,"font")
	HX_STACK_ARG(embed,"embed")
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(bold,"bold")
	HX_STACK_ARG(italic,"italic")
	HX_STACK_ARG(underline,"underline")
{
		HX_STACK_LINE(396)
		bool tmp = (font == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(396)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(396)
		if ((tmp)){
			HX_STACK_LINE(396)
			::String tmp2 = ::Sys_obj::systemName();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(396)
			::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(396)
			tmp1 = (tmp3 == HX_HCSTRING("Windows","\x63","\x06","\xc6","\xb5"));
		}
		else{
			HX_STACK_LINE(396)
			tmp1 = false;
		}
		HX_STACK_LINE(396)
		if ((tmp1)){
			HX_STACK_LINE(398)
			font = HX_HCSTRING("Consolas","\xe0","\xb9","\x09","\x7c");
		}
		HX_STACK_LINE(401)
		bool tmp2 = embed;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(401)
		if ((tmp2)){
			HX_STACK_LINE(401)
			::openfl::text::TextField tmp3 = this->txtMonitorLeft;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(401)
			tmp3->set_embedFonts(true);
		}
		else{
			HX_STACK_LINE(401)
			::openfl::text::TextField tmp3 = this->txtMonitorLeft;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(401)
			tmp3->set_embedFonts(false);
		}
		HX_STACK_LINE(402)
		bool tmp3 = embed;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(402)
		if ((tmp3)){
			HX_STACK_LINE(402)
			::openfl::text::TextField tmp4 = this->txtMonitorRight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(402)
			tmp4->set_embedFonts(true);
		}
		else{
			HX_STACK_LINE(402)
			::openfl::text::TextField tmp4 = this->txtMonitorRight;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(402)
			tmp4->set_embedFonts(false);
		}
		HX_STACK_LINE(403)
		::openfl::text::TextField tmp4 = this->txtMonitorLeft;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(403)
		::String tmp5 = font;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(403)
		int tmp6 = size;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(403)
		Dynamic tmp7 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(403)
		int tmp8 = tmp7->__Field(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(403)
		bool tmp9 = bold;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(403)
		Dynamic tmp10 = italic;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(403)
		bool tmp11 = underline;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(403)
		::openfl::text::TextFormat tmp12 = ::openfl::text::TextFormat_obj::__new(tmp5,tmp6,tmp8,tmp9,tmp10,tmp11,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,(int)10,(int)10,null(),null());		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(403)
		tmp4->set_defaultTextFormat(tmp12);
		HX_STACK_LINE(404)
		::openfl::text::TextField tmp13 = this->txtMonitorRight;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(404)
		::String tmp14 = font;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(404)
		int tmp15 = size;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(404)
		Dynamic tmp16 = ::pgr::dconsole::DCThemes_obj::current;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(404)
		int tmp17 = tmp16->__Field(HX_HCSTRING("MON_TXT_C","\x41","\xd4","\xb2","\x58"), hx::paccDynamic );		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(404)
		bool tmp18 = bold;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(404)
		Dynamic tmp19 = italic;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(404)
		bool tmp20 = underline;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(404)
		::openfl::text::TextFormat tmp21 = ::openfl::text::TextFormat_obj::__new(tmp14,tmp15,tmp17,tmp18,tmp19,tmp20,HX_HCSTRING("","\x00","\x00","\x00","\x00"),HX_HCSTRING("","\x00","\x00","\x00","\x00"),::openfl::text::TextFormatAlign_obj::LEFT,(int)10,(int)10,null(),null());		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(404)
		tmp13->set_defaultTextFormat(tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(DCOpenflInterface_obj,setMonitorFont,(void))

Void DCOpenflInterface_obj::inputRemoveLastChar( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","inputRemoveLastChar",0x2aed9b64,"pgr.dconsole.ui.DCOpenflInterface.inputRemoveLastChar","pgr/dconsole/ui/DCOpenflInterface.hx",410,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(411)
		::openfl::text::TextField tmp = this->txtPrompt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(411)
		::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(411)
		int tmp2 = tmp1.length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(411)
		bool tmp3 = (tmp2 > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(411)
		if ((tmp3)){
			HX_STACK_LINE(412)
			::openfl::text::TextField tmp4 = this->txtPrompt;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(412)
			::openfl::text::TextField tmp5 = this->txtPrompt;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(412)
			::String tmp6 = tmp5->get_text();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(412)
			::openfl::text::TextField tmp7 = this->txtPrompt;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(412)
			::String tmp8 = tmp7->get_text();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(412)
			int tmp9 = tmp8.length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(412)
			int tmp10 = (tmp9 - (int)1);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(412)
			::String tmp11 = tmp6.substr((int)0,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(412)
			tmp4->set_text(tmp11);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,inputRemoveLastChar,(void))

::String DCOpenflInterface_obj::getInputTxt( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","getInputTxt",0xb0dffe46,"pgr.dconsole.ui.DCOpenflInterface.getInputTxt","pgr/dconsole/ui/DCOpenflInterface.hx",417,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(418)
	::openfl::text::TextField tmp = this->txtPrompt;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(418)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(418)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,getInputTxt,return )

Void DCOpenflInterface_obj::setInputTxt( ::String string){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","setInputTxt",0xbb4d0552,"pgr.dconsole.ui.DCOpenflInterface.setInputTxt","pgr/dconsole/ui/DCOpenflInterface.hx",422,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(string,"string")
		HX_STACK_LINE(423)
		::openfl::text::TextField tmp = this->txtPrompt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(423)
		::String tmp1 = string;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(423)
		tmp->set_text(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DCOpenflInterface_obj,setInputTxt,(void))

::String DCOpenflInterface_obj::getConsoleText( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","getConsoleText",0x5cf279e4,"pgr.dconsole.ui.DCOpenflInterface.getConsoleText","pgr/dconsole/ui/DCOpenflInterface.hx",427,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(428)
	::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(428)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(428)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,getConsoleText,return )

Dynamic DCOpenflInterface_obj::getMonitorText( ){
	HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","getMonitorText",0xa8dd26a7,"pgr.dconsole.ui.DCOpenflInterface.getMonitorText","pgr/dconsole/ui/DCOpenflInterface.hx",431,0xa80417e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(433)
	::openfl::text::TextField tmp = this->txtMonitorLeft;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	::String tmp1 = tmp->get_text();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(434)
	::openfl::text::TextField tmp2 = this->txtMonitorRight;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	::String tmp3 = tmp2->get_text();		HX_STACK_VAR(tmp3,"tmp3");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &tmp3,::String &tmp1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","pgr/dconsole/ui/DCOpenflInterface.hx",432,0xa80417e7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_HCSTRING("col1","\xf1","\xb7","\xc4","\x41") , tmp1,false);
				__result->Add(HX_HCSTRING("col2","\xf2","\xb7","\xc4","\x41") , tmp3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(432)
	Dynamic tmp4 = _Function_1_1::Block(tmp3,tmp1);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(432)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,getMonitorText,return )

Void DCOpenflInterface_obj::clearInput( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","clearInput",0x8d25fb73,"pgr.dconsole.ui.DCOpenflInterface.clearInput","pgr/dconsole/ui/DCOpenflInterface.hx",439,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(440)
		::openfl::text::TextField tmp = this->txtPrompt;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,clearInput,(void))

Void DCOpenflInterface_obj::clearConsole( ){
{
		HX_STACK_FRAME("pgr.dconsole.ui.DCOpenflInterface","clearConsole",0xe3e98f00,"pgr.dconsole.ui.DCOpenflInterface.clearConsole","pgr/dconsole/ui/DCOpenflInterface.hx",444,0xa80417e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(445)
		::openfl::text::TextField tmp = this->txtConsole;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(445)
		tmp->set_text(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DCOpenflInterface_obj,clearConsole,(void))


DCOpenflInterface_obj::DCOpenflInterface_obj()
{
}

void DCOpenflInterface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DCOpenflInterface);
	HX_MARK_MEMBER_NAME(console,"console");
	HX_MARK_MEMBER_NAME(_promptFontYOffset,"_promptFontYOffset");
	HX_MARK_MEMBER_NAME(yAlign,"yAlign");
	HX_MARK_MEMBER_NAME(heightPt,"heightPt");
	HX_MARK_MEMBER_NAME(widthPt,"widthPt");
	HX_MARK_MEMBER_NAME(maxWidth,"maxWidth");
	HX_MARK_MEMBER_NAME(maxHeight,"maxHeight");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(monitorDisplay,"monitorDisplay");
	HX_MARK_MEMBER_NAME(txtMonitorLeft,"txtMonitorLeft");
	HX_MARK_MEMBER_NAME(txtMonitorRight,"txtMonitorRight");
	HX_MARK_MEMBER_NAME(profilerDisplay,"profilerDisplay");
	HX_MARK_MEMBER_NAME(txtProfiler,"txtProfiler");
	HX_MARK_MEMBER_NAME(consoleDisplay,"consoleDisplay");
	HX_MARK_MEMBER_NAME(promptDisplay,"promptDisplay");
	HX_MARK_MEMBER_NAME(txtConsole,"txtConsole");
	HX_MARK_MEMBER_NAME(txtPrompt,"txtPrompt");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DCOpenflInterface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(console,"console");
	HX_VISIT_MEMBER_NAME(_promptFontYOffset,"_promptFontYOffset");
	HX_VISIT_MEMBER_NAME(yAlign,"yAlign");
	HX_VISIT_MEMBER_NAME(heightPt,"heightPt");
	HX_VISIT_MEMBER_NAME(widthPt,"widthPt");
	HX_VISIT_MEMBER_NAME(maxWidth,"maxWidth");
	HX_VISIT_MEMBER_NAME(maxHeight,"maxHeight");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(monitorDisplay,"monitorDisplay");
	HX_VISIT_MEMBER_NAME(txtMonitorLeft,"txtMonitorLeft");
	HX_VISIT_MEMBER_NAME(txtMonitorRight,"txtMonitorRight");
	HX_VISIT_MEMBER_NAME(profilerDisplay,"profilerDisplay");
	HX_VISIT_MEMBER_NAME(txtProfiler,"txtProfiler");
	HX_VISIT_MEMBER_NAME(consoleDisplay,"consoleDisplay");
	HX_VISIT_MEMBER_NAME(promptDisplay,"promptDisplay");
	HX_VISIT_MEMBER_NAME(txtConsole,"txtConsole");
	HX_VISIT_MEMBER_NAME(txtPrompt,"txtPrompt");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DCOpenflInterface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yAlign") ) { return yAlign; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"widthPt") ) { return widthPt; }
		if (HX_FIELD_EQ(inName,"toFront") ) { return toFront_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"heightPt") ) { return heightPt; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { return maxWidth; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { return maxHeight; }
		if (HX_FIELD_EQ(inName,"txtPrompt") ) { return txtPrompt; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"txtConsole") ) { return txtConsole; }
		if (HX_FIELD_EQ(inName,"clearInput") ) { return clearInput_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"txtProfiler") ) { return txtProfiler; }
		if (HX_FIELD_EQ(inName,"drawConsole") ) { return drawConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"showConsole") ) { return showConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"hideConsole") ) { return hideConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"drawMonitor") ) { return drawMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"showMonitor") ) { return showMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"hideMonitor") ) { return hideMonitor_dyn(); }
		if (HX_FIELD_EQ(inName,"getInputTxt") ) { return getInputTxt_dyn(); }
		if (HX_FIELD_EQ(inName,"setInputTxt") ) { return setInputTxt_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawProfiler") ) { return drawProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"showProfiler") ) { return showProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"hideProfiler") ) { return hideProfiler_dyn(); }
		if (HX_FIELD_EQ(inName,"clearConsole") ) { return clearConsole_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"promptDisplay") ) { return promptDisplay; }
		if (HX_FIELD_EQ(inName,"setPromptFont") ) { return setPromptFont_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"monitorDisplay") ) { return monitorDisplay; }
		if (HX_FIELD_EQ(inName,"txtMonitorLeft") ) { return txtMonitorLeft; }
		if (HX_FIELD_EQ(inName,"consoleDisplay") ) { return consoleDisplay; }
		if (HX_FIELD_EQ(inName,"scrollToBottom") ) { return scrollToBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"setConsoleFont") ) { return setConsoleFont_dyn(); }
		if (HX_FIELD_EQ(inName,"setMonitorFont") ) { return setMonitorFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getConsoleText") ) { return getConsoleText_dyn(); }
		if (HX_FIELD_EQ(inName,"getMonitorText") ) { return getMonitorText_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"txtMonitorRight") ) { return txtMonitorRight; }
		if (HX_FIELD_EQ(inName,"profilerDisplay") ) { return profilerDisplay; }
		if (HX_FIELD_EQ(inName,"moveCarretToEnd") ) { return moveCarretToEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"scrollConsoleUp") ) { return scrollConsoleUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setProfilerFont") ) { return setProfilerFont_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scrollConsoleDown") ) { return scrollConsoleDown_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_promptFontYOffset") ) { return _promptFontYOffset; }
		if (HX_FIELD_EQ(inName,"writeMonitorOutput") ) { return writeMonitorOutput_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"writeProfilerOutput") ) { return writeProfilerOutput_dyn(); }
		if (HX_FIELD_EQ(inName,"inputRemoveLastChar") ) { return inputRemoveLastChar_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createConsoleDisplay") ) { return createConsoleDisplay_dyn(); }
		if (HX_FIELD_EQ(inName,"createMonitorDisplay") ) { return createMonitorDisplay_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createProfilerDisplay") ) { return createProfilerDisplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DCOpenflInterface_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"yAlign") ) { yAlign=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::pgr::dconsole::DConsole >(); return inValue; }
		if (HX_FIELD_EQ(inName,"widthPt") ) { widthPt=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"heightPt") ) { heightPt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { maxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxHeight") ) { maxHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtPrompt") ) { txtPrompt=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"txtConsole") ) { txtConsole=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"txtProfiler") ) { txtProfiler=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"promptDisplay") ) { promptDisplay=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"monitorDisplay") ) { monitorDisplay=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"txtMonitorLeft") ) { txtMonitorLeft=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"consoleDisplay") ) { consoleDisplay=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"txtMonitorRight") ) { txtMonitorRight=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"profilerDisplay") ) { profilerDisplay=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_promptFontYOffset") ) { _promptFontYOffset=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DCOpenflInterface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"));
	outFields->push(HX_HCSTRING("_promptFontYOffset","\x5a","\xa4","\x8b","\xd2"));
	outFields->push(HX_HCSTRING("yAlign","\x8c","\x6f","\xed","\x15"));
	outFields->push(HX_HCSTRING("heightPt","\xcb","\x55","\x4b","\x33"));
	outFields->push(HX_HCSTRING("widthPt","\xaa","\x09","\x01","\x31"));
	outFields->push(HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"));
	outFields->push(HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"));
	outFields->push(HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"));
	outFields->push(HX_HCSTRING("monitorDisplay","\xc8","\xfe","\x3a","\xd7"));
	outFields->push(HX_HCSTRING("txtMonitorLeft","\x31","\xa3","\xac","\xff"));
	outFields->push(HX_HCSTRING("txtMonitorRight","\x72","\x35","\x6f","\x2e"));
	outFields->push(HX_HCSTRING("profilerDisplay","\x19","\x3e","\xf6","\x84"));
	outFields->push(HX_HCSTRING("txtProfiler","\xb9","\xd5","\x9c","\xe3"));
	outFields->push(HX_HCSTRING("consoleDisplay","\xab","\x8f","\x4d","\x23"));
	outFields->push(HX_HCSTRING("promptDisplay","\xfe","\x3c","\xb0","\x48"));
	outFields->push(HX_HCSTRING("txtConsole","\xc7","\x52","\xea","\xd3"));
	outFields->push(HX_HCSTRING("txtPrompt","\x34","\xa8","\xaf","\x26"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::pgr::dconsole::DConsole*/ ,(int)offsetof(DCOpenflInterface_obj,console),HX_HCSTRING("console","\x57","\xeb","\xd5","\x18")},
	{hx::fsInt,(int)offsetof(DCOpenflInterface_obj,_promptFontYOffset),HX_HCSTRING("_promptFontYOffset","\x5a","\xa4","\x8b","\xd2")},
	{hx::fsString,(int)offsetof(DCOpenflInterface_obj,yAlign),HX_HCSTRING("yAlign","\x8c","\x6f","\xed","\x15")},
	{hx::fsFloat,(int)offsetof(DCOpenflInterface_obj,heightPt),HX_HCSTRING("heightPt","\xcb","\x55","\x4b","\x33")},
	{hx::fsFloat,(int)offsetof(DCOpenflInterface_obj,widthPt),HX_HCSTRING("widthPt","\xaa","\x09","\x01","\x31")},
	{hx::fsFloat,(int)offsetof(DCOpenflInterface_obj,maxWidth),HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74")},
	{hx::fsFloat,(int)offsetof(DCOpenflInterface_obj,maxHeight),HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31")},
	{hx::fsInt,(int)offsetof(DCOpenflInterface_obj,margin),HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DCOpenflInterface_obj,monitorDisplay),HX_HCSTRING("monitorDisplay","\xc8","\xfe","\x3a","\xd7")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DCOpenflInterface_obj,txtMonitorLeft),HX_HCSTRING("txtMonitorLeft","\x31","\xa3","\xac","\xff")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DCOpenflInterface_obj,txtMonitorRight),HX_HCSTRING("txtMonitorRight","\x72","\x35","\x6f","\x2e")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DCOpenflInterface_obj,profilerDisplay),HX_HCSTRING("profilerDisplay","\x19","\x3e","\xf6","\x84")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DCOpenflInterface_obj,txtProfiler),HX_HCSTRING("txtProfiler","\xb9","\xd5","\x9c","\xe3")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DCOpenflInterface_obj,consoleDisplay),HX_HCSTRING("consoleDisplay","\xab","\x8f","\x4d","\x23")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DCOpenflInterface_obj,promptDisplay),HX_HCSTRING("promptDisplay","\xfe","\x3c","\xb0","\x48")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DCOpenflInterface_obj,txtConsole),HX_HCSTRING("txtConsole","\xc7","\x52","\xea","\xd3")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(DCOpenflInterface_obj,txtPrompt),HX_HCSTRING("txtPrompt","\x34","\xa8","\xaf","\x26")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("console","\x57","\xeb","\xd5","\x18"),
	HX_HCSTRING("_promptFontYOffset","\x5a","\xa4","\x8b","\xd2"),
	HX_HCSTRING("yAlign","\x8c","\x6f","\xed","\x15"),
	HX_HCSTRING("heightPt","\xcb","\x55","\x4b","\x33"),
	HX_HCSTRING("widthPt","\xaa","\x09","\x01","\x31"),
	HX_HCSTRING("maxWidth","\xc2","\x08","\x80","\x74"),
	HX_HCSTRING("maxHeight","\xab","\x19","\xd7","\x31"),
	HX_HCSTRING("margin","\x2e","\x70","\x6d","\xba"),
	HX_HCSTRING("monitorDisplay","\xc8","\xfe","\x3a","\xd7"),
	HX_HCSTRING("txtMonitorLeft","\x31","\xa3","\xac","\xff"),
	HX_HCSTRING("txtMonitorRight","\x72","\x35","\x6f","\x2e"),
	HX_HCSTRING("profilerDisplay","\x19","\x3e","\xf6","\x84"),
	HX_HCSTRING("txtProfiler","\xb9","\xd5","\x9c","\xe3"),
	HX_HCSTRING("consoleDisplay","\xab","\x8f","\x4d","\x23"),
	HX_HCSTRING("promptDisplay","\xfe","\x3c","\xb0","\x48"),
	HX_HCSTRING("txtConsole","\xc7","\x52","\xea","\xd3"),
	HX_HCSTRING("txtPrompt","\x34","\xa8","\xaf","\x26"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("createConsoleDisplay","\xc7","\x4b","\x4a","\x8f"),
	HX_HCSTRING("drawConsole","\xb3","\x2f","\x1e","\x62"),
	HX_HCSTRING("showConsole","\xda","\x87","\x71","\xf5"),
	HX_HCSTRING("hideConsole","\xb5","\xda","\x41","\x16"),
	HX_HCSTRING("createMonitorDisplay","\xe4","\xba","\x37","\x43"),
	HX_HCSTRING("drawMonitor","\xf6","\x7e","\x5c","\xfb"),
	HX_HCSTRING("writeMonitorOutput","\xdc","\xb0","\x19","\xc3"),
	HX_HCSTRING("showMonitor","\x1d","\xd7","\xaf","\x8e"),
	HX_HCSTRING("hideMonitor","\xf8","\x29","\x80","\xaf"),
	HX_HCSTRING("createProfilerDisplay","\x7d","\x1a","\x1e","\x96"),
	HX_HCSTRING("drawProfiler","\x4d","\x47","\xca","\xc2"),
	HX_HCSTRING("writeProfilerOutput","\x49","\xac","\x1e","\x3c"),
	HX_HCSTRING("showProfiler","\x46","\x11","\x64","\x18"),
	HX_HCSTRING("hideProfiler","\x0b","\x3e","\xdc","\xad"),
	HX_HCSTRING("log","\x84","\x54","\x52","\x00"),
	HX_HCSTRING("moveCarretToEnd","\x82","\x30","\x89","\x5e"),
	HX_HCSTRING("scrollConsoleUp","\xc5","\x17","\x84","\x51"),
	HX_HCSTRING("scrollConsoleDown","\x4c","\x58","\x50","\xc1"),
	HX_HCSTRING("scrollToBottom","\xf3","\x77","\xa8","\x18"),
	HX_HCSTRING("toFront","\x2e","\x65","\x12","\xd3"),
	HX_HCSTRING("setConsoleFont","\x44","\xa8","\xdb","\xbf"),
	HX_HCSTRING("setPromptFont","\xd5","\xbb","\x1d","\xf4"),
	HX_HCSTRING("setProfilerFont","\x5a","\x60","\x0d","\xe7"),
	HX_HCSTRING("setMonitorFont","\x07","\x55","\xc6","\x0b"),
	HX_HCSTRING("inputRemoveLastChar","\x5a","\x4a","\xb5","\x18"),
	HX_HCSTRING("getInputTxt","\x3c","\xc7","\xa4","\xec"),
	HX_HCSTRING("setInputTxt","\x48","\xce","\x11","\xf7"),
	HX_HCSTRING("getConsoleText","\xae","\x2e","\xf5","\xa8"),
	HX_HCSTRING("getMonitorText","\x71","\xdb","\xdf","\xf4"),
	HX_HCSTRING("clearInput","\x3d","\x03","\x28","\x93"),
	HX_HCSTRING("clearConsole","\x4a","\x9d","\x54","\xf4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DCOpenflInterface_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DCOpenflInterface_obj::__mClass,"__mClass");
};

#endif

hx::Class DCOpenflInterface_obj::__mClass;

void DCOpenflInterface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("pgr.dconsole.ui.DCOpenflInterface","\x78","\xb0","\x52","\xb8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DCOpenflInterface_obj >;
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
} // end namespace ui
