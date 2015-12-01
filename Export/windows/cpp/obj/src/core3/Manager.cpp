#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_core3_Const
#include <core3/Const.h>
#endif
#ifndef INCLUDED_core3_Entity
#include <core3/Entity.h>
#endif
#ifndef INCLUDED_core3_Key
#include <core3/Key.h>
#endif
#ifndef INCLUDED_core3_Manager
#include <core3/Manager.h>
#endif
#ifndef INCLUDED_core3_Map
#include <core3/Map.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
namespace core3{

Void Manager_obj::__construct(Dynamic r,int arX,int arY,int w,int h,::String pName)
{
HX_STACK_FRAME("core3.Manager","new",0xace7cc45,"core3.Manager.new","core3/Manager.hx",18,0x53b98e0c)
HX_STACK_THIS(this)
HX_STACK_ARG(r,"r")
HX_STACK_ARG(arX,"arX")
HX_STACK_ARG(arY,"arY")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(pName,"pName")
{
	HX_STACK_LINE(19)
	this->init = false;
	HX_STACK_LINE(20)
	::core3::Manager_obj::ME = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(21)
	this->root = r->__Field(HX_HCSTRING("stage","\xbe","\x6a","\x0b","\x84"), hx::paccDynamic );
	HX_STACK_LINE(22)
	::openfl::display::Stage tmp = this->root;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(22)
	::String tmp1 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(22)
	Dynamic tmp2 = this->update_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(23)
	::openfl::display::Stage tmp3 = this->root;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(23)
	::core3::Key_obj::init(tmp3);
	HX_STACK_LINE(26)
	::openfl::display::Sprite tmp4 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(26)
	::openfl::display::Sprite bg = tmp4;		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(27)
	::openfl::display::Stage tmp5 = this->root;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	::openfl::display::Sprite tmp6 = bg;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	tmp5->addChild(tmp6);
	HX_STACK_LINE(28)
	::openfl::display::Graphics tmp7 = bg->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(28)
	tmp7->beginFill((int)2960685,(int)1);
	HX_STACK_LINE(29)
	::openfl::display::Graphics tmp8 = bg->get_graphics();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	::openfl::display::Stage tmp9 = this->root;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(29)
	int tmp10 = tmp9->stageWidth;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(29)
	::openfl::display::Stage tmp11 = this->root;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(29)
	int tmp12 = tmp11->stageHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(29)
	tmp8->drawRect((int)0,(int)0,tmp10,tmp12);
	HX_STACK_LINE(33)
	::core3::Map map;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(34)
	::String tmp13 = ::String(HX_HCSTRING("assets/maps/test/test_tilesheet.png","\xb0","\x6e","\x4e","\xba"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(34)
	::openfl::display::BitmapData tmp14 = ::openfl::Assets_obj::getBitmapData(tmp13,null());		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(34)
	::openfl::display::BitmapData bmd = tmp14;		HX_STACK_VAR(bmd,"bmd");
	HX_STACK_LINE(35)
	::openfl::display::Tilesheet tmp15 = ::openfl::display::Tilesheet_obj::__new(bmd);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(35)
	::openfl::display::Tilesheet mapTS = tmp15;		HX_STACK_VAR(mapTS,"mapTS");
	HX_STACK_LINE(38)
	this->tileIDList = Array_obj< int >::__new();
	HX_STACK_LINE(39)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(40)
	Float tmp16 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(40)
	int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(40)
	Dynamic tmp18 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),40,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(40)
	::haxe::Log_obj::trace(tmp17,tmp18);
	HX_STACK_LINE(41)
	Float tmp19 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(41)
	int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(41)
	Dynamic tmp21 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),41,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(41)
	::haxe::Log_obj::trace(tmp20,tmp21);
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		Float tmp22 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(42)
		int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(42)
		int _g = tmp23;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			bool tmp24 = (_g1 < _g);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(42)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(42)
			if ((tmp25)){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int tmp26 = (_g1)++;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(42)
			int x = tmp26;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(43)
			{
				HX_STACK_LINE(43)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(43)
				Float tmp27 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(43)
				int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(43)
				int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(43)
				while((true)){
					HX_STACK_LINE(43)
					bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(43)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(43)
					if ((tmp30)){
						HX_STACK_LINE(43)
						break;
					}
					HX_STACK_LINE(43)
					int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(43)
					int y = tmp31;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(44)
					int tmp32 = (x * arX);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(44)
					int tmp33 = (y * arY);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(44)
					int tmp34 = arX;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(44)
					int tmp35 = arY;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(44)
					::openfl::geom::Rectangle tmp36 = ::openfl::geom::Rectangle_obj::__new(tmp32,tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(44)
					int tmp37 = mapTS->addTileRect(tmp36,null());		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(44)
					this->tileIDList[z] = tmp37;
					HX_STACK_LINE(45)
					(z)++;
				}
			}
		}
	}
	HX_STACK_LINE(49)
	this->level = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(50)
	this->levelCollision = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(51)
	::String collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(collision,"collision");
	HX_STACK_LINE(52)
	::Sys_obj::print(HX_HCSTRING("auto tileID generation? (y or n): ","\xce","\xf2","\xe6","\xd3"));
	HX_STACK_LINE(53)
	::haxe::io::Input tmp22 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(53)
	::String tmp23 = tmp22->readLine();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(53)
	::String _auto = tmp23;		HX_STACK_VAR(_auto,"auto");
	HX_STACK_LINE(54)
	int autoCounter = (int)0;		HX_STACK_VAR(autoCounter,"autoCounter");
	HX_STACK_LINE(55)
	{
		HX_STACK_LINE(55)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(55)
		Float tmp24 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(55)
		int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(55)
		int _g = tmp25;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(55)
		while((true)){
			HX_STACK_LINE(55)
			bool tmp26 = (_g1 < _g);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(55)
			bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(55)
			if ((tmp27)){
				HX_STACK_LINE(55)
				break;
			}
			HX_STACK_LINE(55)
			int tmp28 = (_g1)++;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(55)
			int x = tmp28;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(56)
			this->level[x] = Array_obj< int >::__new();
			HX_STACK_LINE(57)
			this->levelCollision[x] = Array_obj< bool >::__new();
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(58)
				Float tmp29 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(58)
				int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(58)
				int _g2 = tmp30;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(58)
				while((true)){
					HX_STACK_LINE(58)
					bool tmp31 = (_g3 < _g2);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(58)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(58)
					if ((tmp32)){
						HX_STACK_LINE(58)
						break;
					}
					HX_STACK_LINE(58)
					int tmp33 = (_g3)++;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(58)
					int y = tmp33;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(59)
					::String tmp34 = _auto;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(59)
					int tmp35 = ::core3::Const_obj::compareString(tmp34,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(59)
					bool tmp36 = (tmp35 == (int)0);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(59)
					if ((tmp36)){
						HX_STACK_LINE(60)
						this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
						HX_STACK_LINE(61)
						int tmp37 = this->tileIDList->__get(autoCounter);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(61)
						this->level->__get(x).StaticCast< Array< int > >()[y] = tmp37;
						HX_STACK_LINE(62)
						(autoCounter)++;
					}
					else{
						HX_STACK_LINE(63)
						::String tmp37 = _auto;		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(63)
						int tmp38 = ::core3::Const_obj::compareString(tmp37,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(63)
						bool tmp39 = (tmp38 == (int)0);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(63)
						if ((tmp39)){
							HX_STACK_LINE(64)
							collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(65)
							z = (int)-1;
							HX_STACK_LINE(66)
							while((true)){
								HX_STACK_LINE(66)
								int tmp40 = z;		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(66)
								int tmp41 = (int)-1;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(66)
								bool tmp42 = (tmp40 == tmp41);		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(66)
								bool tmp43 = !(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(66)
								bool tmp44 = tmp43;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(66)
								bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(66)
								if ((tmp44)){
									HX_STACK_LINE(66)
									int tmp46 = z;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(66)
									Float tmp47 = ::Math_obj::NaN;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(66)
									Float tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(66)
									Float tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(66)
									tmp45 = (tmp46 == tmp49);
								}
								else{
									HX_STACK_LINE(66)
									tmp45 = true;
								}
								HX_STACK_LINE(66)
								bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(66)
								if ((tmp45)){
									HX_STACK_LINE(66)
									tmp46 = (collision == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
								}
								else{
									HX_STACK_LINE(66)
									tmp46 = false;
								}
								HX_STACK_LINE(66)
								bool tmp47 = !(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(66)
								if ((tmp47)){
									HX_STACK_LINE(66)
									break;
								}
								HX_STACK_LINE(67)
								::String tmp48 = (HX_HCSTRING("tileID to assign map tile: [","\x40","\x9c","\x80","\x4f") + x);		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(67)
								::String tmp49 = (tmp48 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(67)
								int tmp50 = y;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(67)
								::String tmp51 = (tmp49 + tmp50);		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(67)
								::String tmp52 = (tmp51 + HX_HCSTRING("]? ","\x9e","\xc8","\x46","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(67)
								::Sys_obj::print(tmp52);
								HX_STACK_LINE(68)
								::haxe::io::Input tmp53 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(68)
								::String tmp54 = tmp53->readLine();		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(68)
								Dynamic tmp55 = ::Std_obj::parseInt(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(68)
								z = tmp55;
								HX_STACK_LINE(69)
								::Sys_obj::print(HX_HCSTRING("entity collision? (y or n): ","\xa5","\x96","\x25","\x3e"));
								HX_STACK_LINE(70)
								::haxe::io::Input tmp56 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(70)
								::String tmp57 = tmp56->readLine();		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(70)
								collision = tmp57;
								HX_STACK_LINE(71)
								::String tmp58 = collision;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(71)
								Dynamic tmp59 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),71,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(71)
								::haxe::Log_obj::trace(tmp58,tmp59);
								HX_STACK_LINE(72)
								::String tmp60 = collision;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(72)
								int tmp61 = ::core3::Const_obj::compareString(tmp60,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(72)
								bool tmp62 = (tmp61 == (int)0);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(72)
								if ((tmp62)){
									HX_STACK_LINE(73)
									this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = true;
									HX_STACK_LINE(74)
									bool tmp63 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(74)
									Dynamic tmp64 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),74,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(74)
									::haxe::Log_obj::trace(tmp63,tmp64);
								}
								else{
									HX_STACK_LINE(75)
									::String tmp63 = collision;		HX_STACK_VAR(tmp63,"tmp63");
									HX_STACK_LINE(75)
									int tmp64 = ::core3::Const_obj::compareString(tmp63,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp64,"tmp64");
									HX_STACK_LINE(75)
									bool tmp65 = (tmp64 == (int)0);		HX_STACK_VAR(tmp65,"tmp65");
									HX_STACK_LINE(75)
									if ((tmp65)){
										HX_STACK_LINE(76)
										this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
										HX_STACK_LINE(77)
										bool tmp66 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp66,"tmp66");
										HX_STACK_LINE(77)
										Dynamic tmp67 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),77,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp67,"tmp67");
										HX_STACK_LINE(77)
										::haxe::Log_obj::trace(tmp66,tmp67);
									}
								}
							}
							HX_STACK_LINE(80)
							int tmp40 = this->tileIDList->__get(z);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(80)
							this->level->__get(x).StaticCast< Array< int > >()[y] = tmp40;
							HX_STACK_LINE(81)
							(z)++;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(85)
	this->tilesheetData = Array_obj< Float >::__new();
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		int tmp24 = this->level->length;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(86)
		int _g = tmp24;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			bool tmp25 = (_g1 < _g);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(86)
			bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(86)
			if ((tmp26)){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			int tmp27 = (_g1)++;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(86)
			int row = tmp27;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(87)
				int tmp28 = this->level->__get(row).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(87)
				int _g2 = tmp28;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(87)
				while((true)){
					HX_STACK_LINE(87)
					bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(87)
					bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(87)
					if ((tmp30)){
						HX_STACK_LINE(87)
						break;
					}
					HX_STACK_LINE(87)
					int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(87)
					int cell = tmp31;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(88)
					int tmp32 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(88)
					int tmp33 = cell;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(88)
					int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(88)
					int tmp35 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(88)
					int tmp36 = row;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(88)
					int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(88)
					int tmp38 = this->level->__get(row).StaticCast< Array< int > >()->__get(cell);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(88)
					this->tilesheetData = this->tilesheetData->concat(Array_obj< Float >::__new().Add(tmp34).Add(tmp37).Add(tmp38));
				}
			}
		}
	}
	HX_STACK_LINE(91)
	Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),91,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(91)
	::haxe::Log_obj::trace(this->level,tmp24);
	HX_STACK_LINE(94)
	::openfl::text::TextField tmp25 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(94)
	::openfl::text::TextField tf = tmp25;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(96)
	::String tmp26 = ::core3::Const_obj::VERSION;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(96)
	::String tmp27 = (HX_HCSTRING("Platformer ","\x20","\x5e","\x72","\x1c") + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(96)
	tf->set_text(tmp27);
	HX_STACK_LINE(97)
	::openfl::display::Stage tmp28 = this->root;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(97)
	int tmp29 = tmp28->stageWidth;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(97)
	tf->set_width(tmp29);
	HX_STACK_LINE(98)
	tf->set_textColor((int)16777215);
	HX_STACK_LINE(99)
	bool tmp30 = tf->set_selectable(false);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(99)
	tf->mouseEnabled = tmp30;
	HX_STACK_LINE(103)
	::core3::Entity tmp31 = ::core3::Entity_obj::__new();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(103)
	this->hero = tmp31;
	HX_STACK_LINE(104)
	::openfl::display::Stage tmp32 = this->root;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(104)
	::core3::Entity tmp33 = this->hero;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(104)
	::openfl::display::Sprite tmp34 = tmp33->sprite;		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(104)
	tmp32->addChild(tmp34);
	HX_STACK_LINE(105)
	::core3::Map tmp35 = ::core3::Map_obj::__new(this->tilesheetData,mapTS);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(105)
	map = tmp35;
	HX_STACK_LINE(106)
	::openfl::display::Stage tmp36 = this->root;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(106)
	::core3::Map tmp37 = map;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(106)
	tmp36->addChild(tmp37);
	HX_STACK_LINE(107)
	this->init = true;
}
;
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new(Dynamic r,int arX,int arY,int w,int h,::String pName)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(r,arX,arY,w,h,pName);
	return _result_;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

Void Manager_obj::update( ::openfl::events::Event e){
{
		HX_STACK_FRAME("core3.Manager","update",0x383e4744,"core3.Manager.update","core3/Manager.hx",112,0x53b98e0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(113)
		bool tmp = this->init;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		if ((tmp)){
			HX_STACK_LINE(114)
			::core3::Map tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(114)
			tmp1->draw();
		}
		HX_STACK_LINE(116)
		Float speed = ((Float)0.04);		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(118)
		bool tmp1 = ::core3::Key_obj::isDown((int)37);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		if ((tmp1)){
			HX_STACK_LINE(119)
			::core3::Entity tmp2 = this->hero;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(119)
			hx::SubEq(tmp2->dx,speed);
		}
		HX_STACK_LINE(121)
		bool tmp2 = ::core3::Key_obj::isDown((int)39);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		if ((tmp2)){
			HX_STACK_LINE(122)
			::core3::Entity tmp3 = this->hero;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(122)
			hx::AddEq(tmp3->dx,speed);
		}
		HX_STACK_LINE(124)
		bool tmp3 = ::core3::Key_obj::isDown((int)38);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		if ((tmp3)){
			HX_STACK_LINE(125)
			::core3::Entity tmp4 = this->hero;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(125)
			hx::SubEq(tmp4->dy,speed);
		}
		HX_STACK_LINE(127)
		bool tmp4 = ::core3::Key_obj::isDown((int)40);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		if ((tmp4)){
			HX_STACK_LINE(128)
			::core3::Entity tmp5 = this->hero;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(128)
			hx::AddEq(tmp5->dy,speed);
		}
		HX_STACK_LINE(129)
		::core3::Entity tmp5 = this->hero;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(129)
		tmp5->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,update,(void))

::openfl::display::Sprite Manager_obj::getMap( ){
	HX_STACK_FRAME("core3.Manager","getMap",0x545b04e1,"core3.Manager.getMap","core3/Manager.hx",131,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	::core3::Map tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getMap,return )

::openfl::display::Tilesheet Manager_obj::getMapTS( ){
	HX_STACK_FRAME("core3.Manager","getMapTS",0x64cf08a0,"core3.Manager.getMapTS","core3/Manager.hx",134,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(135)
	::openfl::display::Tilesheet tmp = this->mapTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(135)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getMapTS,return )

::core3::Manager Manager_obj::ME;


Manager_obj::Manager_obj()
{
}

void Manager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Manager);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(mapTS,"mapTS");
	HX_MARK_MEMBER_NAME(hero,"hero");
	HX_MARK_MEMBER_NAME(init,"init");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(levelCollision,"levelCollision");
	HX_MARK_MEMBER_NAME(tileIDList,"tileIDList");
	HX_MARK_MEMBER_NAME(tilesheetData,"tilesheetData");
	HX_MARK_END_CLASS();
}

void Manager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(mapTS,"mapTS");
	HX_VISIT_MEMBER_NAME(hero,"hero");
	HX_VISIT_MEMBER_NAME(init,"init");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(levelCollision,"levelCollision");
	HX_VISIT_MEMBER_NAME(tileIDList,"tileIDList");
	HX_VISIT_MEMBER_NAME(tilesheetData,"tilesheetData");
}

Dynamic Manager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return root; }
		if (HX_FIELD_EQ(inName,"hero") ) { return hero; }
		if (HX_FIELD_EQ(inName,"init") ) { return init; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mapTS") ) { return mapTS; }
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"getMap") ) { return getMap_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getMapTS") ) { return getMapTS_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileIDList") ) { return tileIDList; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tilesheetData") ) { return tilesheetData; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"levelCollision") ) { return levelCollision; }
	}
	return super::__Field(inName,inCallProp);
}

bool Manager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ME") ) { outValue = ME; return true;  }
	}
	return false;
}

Dynamic Manager_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::core3::Map >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast< ::openfl::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hero") ) { hero=inValue.Cast< ::core3::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"init") ) { init=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mapTS") ) { mapTS=inValue.Cast< ::openfl::display::Tilesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileIDList") ) { tileIDList=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tilesheetData") ) { tilesheetData=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"levelCollision") ) { levelCollision=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Manager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ME") ) { ME=ioValue.Cast< ::core3::Manager >(); return true; }
	}
	return false;
}

void Manager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("root","\x22","\xee","\xae","\x4b"));
	outFields->push(HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("mapTS","\x1b","\x33","\x20","\x03"));
	outFields->push(HX_HCSTRING("hero","\xfa","\x37","\x0b","\x45"));
	outFields->push(HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"));
	outFields->push(HX_HCSTRING("level","\x84","\x15","\x63","\x72"));
	outFields->push(HX_HCSTRING("levelCollision","\x4e","\xa2","\x85","\x68"));
	outFields->push(HX_HCSTRING("tileIDList","\x87","\x73","\xdb","\xb9"));
	outFields->push(HX_HCSTRING("tilesheetData","\x7b","\xff","\x9e","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Stage*/ ,(int)offsetof(Manager_obj,root),HX_HCSTRING("root","\x22","\xee","\xae","\x4b")},
	{hx::fsObject /*::core3::Map*/ ,(int)offsetof(Manager_obj,map),HX_HCSTRING("map","\x9c","\x0a","\x53","\x00")},
	{hx::fsObject /*::openfl::display::Tilesheet*/ ,(int)offsetof(Manager_obj,mapTS),HX_HCSTRING("mapTS","\x1b","\x33","\x20","\x03")},
	{hx::fsObject /*::core3::Entity*/ ,(int)offsetof(Manager_obj,hero),HX_HCSTRING("hero","\xfa","\x37","\x0b","\x45")},
	{hx::fsBool,(int)offsetof(Manager_obj,init),HX_HCSTRING("init","\x10","\x3b","\xbb","\x45")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Manager_obj,level),HX_HCSTRING("level","\x84","\x15","\x63","\x72")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Manager_obj,levelCollision),HX_HCSTRING("levelCollision","\x4e","\xa2","\x85","\x68")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Manager_obj,tileIDList),HX_HCSTRING("tileIDList","\x87","\x73","\xdb","\xb9")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(Manager_obj,tilesheetData),HX_HCSTRING("tilesheetData","\x7b","\xff","\x9e","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::core3::Manager*/ ,(void *) &Manager_obj::ME,HX_HCSTRING("ME","\x58","\x43","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("root","\x22","\xee","\xae","\x4b"),
	HX_HCSTRING("map","\x9c","\x0a","\x53","\x00"),
	HX_HCSTRING("mapTS","\x1b","\x33","\x20","\x03"),
	HX_HCSTRING("hero","\xfa","\x37","\x0b","\x45"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("level","\x84","\x15","\x63","\x72"),
	HX_HCSTRING("levelCollision","\x4e","\xa2","\x85","\x68"),
	HX_HCSTRING("tileIDList","\x87","\x73","\xdb","\xb9"),
	HX_HCSTRING("tilesheetData","\x7b","\xff","\x9e","\x8e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("getMap","\xa6","\x43","\x22","\xa3"),
	HX_HCSTRING("getMapTS","\xa5","\x42","\xf7","\x62"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Manager_obj::ME,"ME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Manager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Manager_obj::ME,"ME");
};

#endif

hx::Class Manager_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("ME","\x58","\x43","\x00","\x00"),
	::String(null()) };

void Manager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Manager_obj::__GetStatic;
	__mClass->mSetStaticField = &Manager_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Manager_obj >;
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

} // end namespace core3
