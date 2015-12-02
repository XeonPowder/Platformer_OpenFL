#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
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

Void Manager_obj::__construct(int arX,int arY,int w,int h,::String pName)
{
HX_STACK_FRAME("core3.Manager","new",0xace7cc45,"core3.Manager.new","core3/Manager.hx",23,0x53b98e0c)
HX_STACK_THIS(this)
HX_STACK_ARG(arX,"arX")
HX_STACK_ARG(arY,"arY")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(pName,"pName")
{
	HX_STACK_LINE(24)
	this->init = false;
	HX_STACK_LINE(25)
	::core3::Manager_obj::ME = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(26)
	::openfl::display::MovieClip tmp = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::String tmp1 = ::openfl::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	Dynamic tmp2 = this->update_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(27)
	::core3::Key_obj::init();
	HX_STACK_LINE(30)
	::openfl::display::Sprite tmp3 = ::openfl::display::Sprite_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(30)
	::openfl::display::Sprite bg = tmp3;		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(32)
	::openfl::display::Graphics tmp4 = bg->get_graphics();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	tmp4->beginFill((int)0,(int)1);
	HX_STACK_LINE(33)
	::openfl::display::Graphics tmp5 = bg->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	int tmp6 = bg->stage->stageWidth;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	int tmp7 = bg->stage->stageHeight;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(33)
	tmp5->drawRect((int)0,(int)0,tmp6,tmp7);
	HX_STACK_LINE(37)
	::core3::Map map;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(38)
	::String tmp8 = ::String(HX_HCSTRING("assets/maps/test/test_tilesheet.png","\xb0","\x6e","\x4e","\xba"));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(38)
	::openfl::display::BitmapData tmp9 = ::openfl::Assets_obj::getBitmapData(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(38)
	::openfl::display::BitmapData bmd = tmp9;		HX_STACK_VAR(bmd,"bmd");
	HX_STACK_LINE(39)
	::openfl::display::Tilesheet tmp10 = ::openfl::display::Tilesheet_obj::__new(bmd);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(39)
	::openfl::display::Tilesheet mapTS = tmp10;		HX_STACK_VAR(mapTS,"mapTS");
	HX_STACK_LINE(42)
	this->tileIDList = Array_obj< int >::__new();
	HX_STACK_LINE(43)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(44)
	Float tmp11 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(44)
	int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(44)
	Dynamic tmp13 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),44,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(44)
	::haxe::Log_obj::trace(tmp12,tmp13);
	HX_STACK_LINE(45)
	Float tmp14 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(45)
	int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(45)
	Dynamic tmp16 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),45,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(45)
	::haxe::Log_obj::trace(tmp15,tmp16);
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		Float tmp17 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(46)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(46)
		int _g = tmp18;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		while((true)){
			HX_STACK_LINE(46)
			bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(46)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(46)
			if ((tmp20)){
				HX_STACK_LINE(46)
				break;
			}
			HX_STACK_LINE(46)
			int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(46)
			int x = tmp21;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(47)
			{
				HX_STACK_LINE(47)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(47)
				Float tmp22 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(47)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(47)
				int _g2 = tmp23;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(47)
				while((true)){
					HX_STACK_LINE(47)
					bool tmp24 = (_g3 < _g2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(47)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(47)
					if ((tmp25)){
						HX_STACK_LINE(47)
						break;
					}
					HX_STACK_LINE(47)
					int tmp26 = (_g3)++;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(47)
					int y = tmp26;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(48)
					int tmp27 = (x * arX);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(48)
					int tmp28 = (y * arY);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(48)
					int tmp29 = arX;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(48)
					int tmp30 = arY;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(48)
					::openfl::geom::Rectangle tmp31 = ::openfl::geom::Rectangle_obj::__new(tmp27,tmp28,tmp29,tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(48)
					int tmp32 = mapTS->addTileRect(tmp31,null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(48)
					this->tileIDList[z] = tmp32;
					HX_STACK_LINE(49)
					(z)++;
				}
			}
		}
	}
	HX_STACK_LINE(53)
	this->level = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(54)
	this->levelCollision = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(55)
	::String collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(collision,"collision");
	HX_STACK_LINE(58)
	::String _auto = HX_HCSTRING("y","\x79","\x00","\x00","\x00");		HX_STACK_VAR(_auto,"auto");
	HX_STACK_LINE(59)
	int autoCounter = (int)0;		HX_STACK_VAR(autoCounter,"autoCounter");
	HX_STACK_LINE(60)
	{
		HX_STACK_LINE(60)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(60)
		Float tmp17 = (Float(bmd->width) / Float(arX));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(60)
		int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(60)
		int _g = tmp18;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		while((true)){
			HX_STACK_LINE(60)
			bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(60)
			bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(60)
			if ((tmp20)){
				HX_STACK_LINE(60)
				break;
			}
			HX_STACK_LINE(60)
			int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(60)
			int x = tmp21;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(61)
			this->level[x] = Array_obj< int >::__new();
			HX_STACK_LINE(62)
			this->levelCollision[x] = Array_obj< bool >::__new();
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(63)
				Float tmp22 = (Float(bmd->height) / Float(arY));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(63)
				int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(63)
				int _g2 = tmp23;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(63)
				while((true)){
					HX_STACK_LINE(63)
					bool tmp24 = (_g3 < _g2);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(63)
					bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(63)
					if ((tmp25)){
						HX_STACK_LINE(63)
						break;
					}
					HX_STACK_LINE(63)
					int tmp26 = (_g3)++;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(63)
					int y = tmp26;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(64)
					::String tmp27 = _auto;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(64)
					int tmp28 = ::core3::Const_obj::compareString(tmp27,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(64)
					bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(64)
					if ((tmp29)){
						HX_STACK_LINE(65)
						this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
						HX_STACK_LINE(66)
						int tmp30 = this->tileIDList->__get(autoCounter);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(66)
						this->level->__get(x).StaticCast< Array< int > >()[y] = tmp30;
						HX_STACK_LINE(67)
						(autoCounter)++;
					}
					else{
						HX_STACK_LINE(68)
						::String tmp30 = _auto;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(68)
						int tmp31 = ::core3::Const_obj::compareString(tmp30,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(68)
						bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(68)
						if ((tmp32)){
							HX_STACK_LINE(69)
							collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(70)
							z = (int)-1;
							HX_STACK_LINE(71)
							while((true)){
								HX_STACK_LINE(71)
								int tmp33 = z;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(71)
								int tmp34 = (int)-1;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(71)
								bool tmp35 = (tmp33 == tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(71)
								bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(71)
								bool tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(71)
								bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(71)
								if ((tmp37)){
									HX_STACK_LINE(71)
									int tmp39 = z;		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(71)
									Float tmp40 = ::Math_obj::NaN;		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(71)
									Float tmp41 = tmp40;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(71)
									Float tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(71)
									tmp38 = (tmp39 == tmp42);
								}
								else{
									HX_STACK_LINE(71)
									tmp38 = true;
								}
								HX_STACK_LINE(71)
								bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(71)
								if ((tmp38)){
									HX_STACK_LINE(71)
									tmp39 = (collision == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
								}
								else{
									HX_STACK_LINE(71)
									tmp39 = false;
								}
								HX_STACK_LINE(71)
								bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(71)
								if ((tmp40)){
									HX_STACK_LINE(71)
									break;
								}
								HX_STACK_LINE(76)
								::String tmp41 = collision;		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(76)
								Dynamic tmp42 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),76,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(76)
								::haxe::Log_obj::trace(tmp41,tmp42);
								HX_STACK_LINE(77)
								::String tmp43 = collision;		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(77)
								int tmp44 = ::core3::Const_obj::compareString(tmp43,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(77)
								bool tmp45 = (tmp44 == (int)0);		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(77)
								if ((tmp45)){
									HX_STACK_LINE(78)
									this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = true;
									HX_STACK_LINE(79)
									bool tmp46 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(79)
									Dynamic tmp47 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),79,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(79)
									::haxe::Log_obj::trace(tmp46,tmp47);
								}
								else{
									HX_STACK_LINE(80)
									::String tmp46 = collision;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(80)
									int tmp47 = ::core3::Const_obj::compareString(tmp46,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(80)
									bool tmp48 = (tmp47 == (int)0);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(80)
									if ((tmp48)){
										HX_STACK_LINE(81)
										this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
										HX_STACK_LINE(82)
										bool tmp49 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(82)
										Dynamic tmp50 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),82,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(82)
										::haxe::Log_obj::trace(tmp49,tmp50);
									}
								}
							}
							HX_STACK_LINE(85)
							int tmp33 = this->tileIDList->__get(z);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(85)
							this->level->__get(x).StaticCast< Array< int > >()[y] = tmp33;
							HX_STACK_LINE(86)
							(z)++;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(90)
	this->tilesheetData = Array_obj< Float >::__new();
	HX_STACK_LINE(91)
	{
		HX_STACK_LINE(91)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(91)
		int tmp17 = this->level->length;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(91)
		int _g = tmp17;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(91)
		while((true)){
			HX_STACK_LINE(91)
			bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(91)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(91)
			if ((tmp19)){
				HX_STACK_LINE(91)
				break;
			}
			HX_STACK_LINE(91)
			int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(91)
			int row = tmp20;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(92)
				int tmp21 = this->level->__get(row).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(92)
				int _g2 = tmp21;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(92)
				while((true)){
					HX_STACK_LINE(92)
					bool tmp22 = (_g3 < _g2);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(92)
					bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(92)
					if ((tmp23)){
						HX_STACK_LINE(92)
						break;
					}
					HX_STACK_LINE(92)
					int tmp24 = (_g3)++;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(92)
					int cell = tmp24;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(93)
					int tmp25 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(93)
					int tmp26 = cell;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(93)
					int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(93)
					int tmp28 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(93)
					int tmp29 = row;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(93)
					int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(93)
					int tmp31 = this->level->__get(row).StaticCast< Array< int > >()->__get(cell);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(93)
					this->tilesheetData = this->tilesheetData->concat(Array_obj< Float >::__new().Add(tmp27).Add(tmp30).Add(tmp31));
				}
			}
		}
	}
	HX_STACK_LINE(96)
	Dynamic tmp17 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),96,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(96)
	::haxe::Log_obj::trace(this->level,tmp17);
	HX_STACK_LINE(99)
	::openfl::text::TextField tmp18 = ::openfl::text::TextField_obj::__new();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(99)
	::openfl::text::TextField tf = tmp18;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(101)
	::String tmp19 = ::core3::Const_obj::VERSION;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(101)
	::String tmp20 = (HX_HCSTRING("Platformer ","\x20","\x5e","\x72","\x1c") + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(101)
	tf->set_text(tmp20);
	HX_STACK_LINE(102)
	int tmp21 = tf->stage->stageWidth;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(102)
	tf->set_width(tmp21);
	HX_STACK_LINE(103)
	tf->set_textColor((int)16777215);
	HX_STACK_LINE(104)
	bool tmp22 = tf->set_selectable(false);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(104)
	tf->mouseEnabled = tmp22;
	HX_STACK_LINE(108)
	::core3::Entity tmp23 = ::core3::Entity_obj::__new();		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(108)
	this->hero = tmp23;
	HX_STACK_LINE(109)
	::openfl::display::MovieClip tmp24 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(109)
	::core3::Entity tmp25 = this->hero;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(109)
	::openfl::display::Sprite tmp26 = tmp25->sprite;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(109)
	tmp24->addChild(tmp26);
	HX_STACK_LINE(110)
	::core3::Map tmp27 = ::core3::Map_obj::__new(this->tilesheetData,mapTS);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(110)
	map = tmp27;
	HX_STACK_LINE(111)
	::openfl::display::MovieClip tmp28 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(111)
	::core3::Map tmp29 = map;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(111)
	tmp28->addChild(tmp29);
	HX_STACK_LINE(112)
	this->init = true;
}
;
	return null();
}

//Manager_obj::~Manager_obj() { }

Dynamic Manager_obj::__CreateEmpty() { return  new Manager_obj; }
hx::ObjectPtr< Manager_obj > Manager_obj::__new(int arX,int arY,int w,int h,::String pName)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(arX,arY,w,h,pName);
	return _result_;}

Dynamic Manager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Manager_obj > _result_ = new Manager_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Manager_obj::update( ::openfl::events::Event e){
{
		HX_STACK_FRAME("core3.Manager","update",0x383e4744,"core3.Manager.update","core3/Manager.hx",117,0x53b98e0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(118)
		bool tmp = this->init;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		if ((tmp)){
			HX_STACK_LINE(119)
			::core3::Map tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(119)
			tmp1->draw();
		}
		HX_STACK_LINE(121)
		Float speed = ((Float)0.04);		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(123)
		bool tmp1 = ::core3::Key_obj::isDown((int)37);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp1)){
			HX_STACK_LINE(124)
			::core3::Entity tmp2 = this->hero;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(124)
			hx::SubEq(tmp2->dx,speed);
		}
		HX_STACK_LINE(126)
		bool tmp2 = ::core3::Key_obj::isDown((int)39);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		if ((tmp2)){
			HX_STACK_LINE(127)
			::core3::Entity tmp3 = this->hero;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(127)
			hx::AddEq(tmp3->dx,speed);
		}
		HX_STACK_LINE(129)
		bool tmp3 = ::core3::Key_obj::isDown((int)38);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		if ((tmp3)){
			HX_STACK_LINE(130)
			::core3::Entity tmp4 = this->hero;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(130)
			hx::SubEq(tmp4->dy,speed);
		}
		HX_STACK_LINE(132)
		bool tmp4 = ::core3::Key_obj::isDown((int)40);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(132)
		if ((tmp4)){
			HX_STACK_LINE(133)
			::core3::Entity tmp5 = this->hero;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(133)
			hx::AddEq(tmp5->dy,speed);
		}
		HX_STACK_LINE(134)
		::core3::Entity tmp5 = this->hero;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(134)
		tmp5->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,update,(void))

::openfl::display::Sprite Manager_obj::getMap( ){
	HX_STACK_FRAME("core3.Manager","getMap",0x545b04e1,"core3.Manager.getMap","core3/Manager.hx",136,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	::core3::Map tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getMap,return )

::openfl::display::Tilesheet Manager_obj::getMapTS( ){
	HX_STACK_FRAME("core3.Manager","getMapTS",0x64cf08a0,"core3.Manager.getMapTS","core3/Manager.hx",139,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(140)
	::openfl::display::Tilesheet tmp = this->mapTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
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
