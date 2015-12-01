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
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
#ifndef INCLUDED_nme_app_IAppEventHandler
#include <nme/app/IAppEventHandler.h>
#endif
#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_display_MovieClip
#include <nme/display/MovieClip.h>
#endif
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_display_Stage
#include <nme/display/Stage.h>
#endif
#ifndef INCLUDED_nme_display_Tilesheet
#include <nme/display/Tilesheet.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_text_TextField
#include <nme/text/TextField.h>
#endif
#ifndef INCLUDED_nme_ui_Keyboard
#include <nme/ui/Keyboard.h>
#endif
namespace core3{

Void Manager_obj::__construct(int arX,int arY,int w,int h,::String pName)
{
HX_STACK_FRAME("core3.Manager","new",0xace7cc45,"core3.Manager.new","core3/Manager.hx",17,0x53b98e0c)
HX_STACK_THIS(this)
HX_STACK_ARG(arX,"arX")
HX_STACK_ARG(arY,"arY")
HX_STACK_ARG(w,"w")
HX_STACK_ARG(h,"h")
HX_STACK_ARG(pName,"pName")
{
	HX_STACK_LINE(18)
	this->init = false;
	HX_STACK_LINE(19)
	::core3::Manager_obj::ME = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(20)
	::nme::display::MovieClip tmp = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1 = ::nme::events::Event_obj::ENTER_FRAME;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	Dynamic tmp2 = this->update_dyn();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(20)
	tmp->addEventListener(tmp1,tmp2,null(),null(),null());
	HX_STACK_LINE(21)
	::core3::Key_obj::init();
	HX_STACK_LINE(24)
	::nme::display::Sprite tmp3 = ::nme::display::Sprite_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	::nme::display::Sprite bg = tmp3;		HX_STACK_VAR(bg,"bg");
	HX_STACK_LINE(25)
	::nme::display::MovieClip tmp4 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	::nme::display::Sprite tmp5 = bg;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	tmp4->addChild(tmp5);
	HX_STACK_LINE(26)
	::nme::display::Graphics tmp6 = bg->get_graphics();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	tmp6->beginFill((int)2960685,(int)1);
	HX_STACK_LINE(27)
	::nme::display::Graphics tmp7 = bg->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	::nme::display::Stage tmp8 = bg->get_stage();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	int tmp9 = tmp8->get_stageWidth();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	::nme::display::Stage tmp10 = bg->get_stage();		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(27)
	int tmp11 = tmp10->get_stageHeight();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(27)
	tmp7->drawRect((int)0,(int)0,tmp9,tmp11);
	HX_STACK_LINE(31)
	::core3::Map map;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(32)
	::String tmp12 = ::String(HX_HCSTRING("assets/maps/test/test_tilesheet.png","\xb0","\x6e","\x4e","\xba"));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(32)
	::nme::display::BitmapData tmp13 = ::nme::Assets_obj::getBitmapData(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(32)
	::nme::display::BitmapData bmd = tmp13;		HX_STACK_VAR(bmd,"bmd");
	HX_STACK_LINE(33)
	::nme::display::Tilesheet tmp14 = ::nme::display::Tilesheet_obj::__new(bmd);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(33)
	::nme::display::Tilesheet mapTS = tmp14;		HX_STACK_VAR(mapTS,"mapTS");
	HX_STACK_LINE(36)
	this->tileIDList = Array_obj< int >::__new();
	HX_STACK_LINE(37)
	int z = (int)0;		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(38)
	int tmp15 = bmd->get_width();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(38)
	int tmp16 = arX;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(38)
	Float tmp17 = (Float(tmp15) / Float(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(38)
	int tmp18 = ::Std_obj::_int(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(38)
	Dynamic tmp19 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),38,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(38)
	::haxe::Log_obj::trace(tmp18,tmp19);
	HX_STACK_LINE(39)
	int tmp20 = bmd->get_height();		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(39)
	int tmp21 = arY;		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(39)
	Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(39)
	int tmp23 = ::Std_obj::_int(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(39)
	Dynamic tmp24 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),39,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(39)
	::haxe::Log_obj::trace(tmp23,tmp24);
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		int tmp25 = bmd->get_width();		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(40)
		int tmp26 = arX;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(40)
		Float tmp27 = (Float(tmp25) / Float(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(40)
		int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(40)
		int _g = tmp28;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			bool tmp29 = (_g1 < _g);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(40)
			bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(40)
			if ((tmp30)){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			int tmp31 = (_g1)++;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(40)
			int x = tmp31;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(41)
			{
				HX_STACK_LINE(41)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(41)
				int tmp32 = bmd->get_height();		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(41)
				int tmp33 = arY;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(41)
				Float tmp34 = (Float(tmp32) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(41)
				int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(41)
				int _g2 = tmp35;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(41)
				while((true)){
					HX_STACK_LINE(41)
					bool tmp36 = (_g3 < _g2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(41)
					bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(41)
					if ((tmp37)){
						HX_STACK_LINE(41)
						break;
					}
					HX_STACK_LINE(41)
					int tmp38 = (_g3)++;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(41)
					int y = tmp38;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(42)
					int tmp39 = (x * arX);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(42)
					int tmp40 = (y * arY);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(42)
					int tmp41 = arX;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(42)
					int tmp42 = arY;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(42)
					::nme::geom::Rectangle tmp43 = ::nme::geom::Rectangle_obj::__new(tmp39,tmp40,tmp41,tmp42);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(42)
					int tmp44 = mapTS->addTileRect(tmp43,null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(42)
					this->tileIDList[z] = tmp44;
					HX_STACK_LINE(43)
					(z)++;
				}
			}
		}
	}
	HX_STACK_LINE(47)
	this->level = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(48)
	this->levelCollision = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(49)
	::String collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(collision,"collision");
	HX_STACK_LINE(50)
	::Sys_obj::print(HX_HCSTRING("auto tileID generation? (y or n): ","\xce","\xf2","\xe6","\xd3"));
	HX_STACK_LINE(51)
	::haxe::io::Input tmp25 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(51)
	::String tmp26 = tmp25->readLine();		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(51)
	::String _auto = tmp26;		HX_STACK_VAR(_auto,"auto");
	HX_STACK_LINE(52)
	int autoCounter = (int)0;		HX_STACK_VAR(autoCounter,"autoCounter");
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		int tmp27 = bmd->get_width();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(53)
		int tmp28 = arX;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(53)
		Float tmp29 = (Float(tmp27) / Float(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(53)
		int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(53)
		int _g = tmp30;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		while((true)){
			HX_STACK_LINE(53)
			bool tmp31 = (_g1 < _g);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(53)
			bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(53)
			if ((tmp32)){
				HX_STACK_LINE(53)
				break;
			}
			HX_STACK_LINE(53)
			int tmp33 = (_g1)++;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(53)
			int x = tmp33;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(54)
			this->level[x] = Array_obj< int >::__new();
			HX_STACK_LINE(55)
			this->levelCollision[x] = Array_obj< bool >::__new();
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(56)
				int tmp34 = bmd->get_height();		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(56)
				int tmp35 = arY;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(56)
				Float tmp36 = (Float(tmp34) / Float(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(56)
				int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(56)
				int _g2 = tmp37;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(56)
				while((true)){
					HX_STACK_LINE(56)
					bool tmp38 = (_g3 < _g2);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(56)
					bool tmp39 = !(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(56)
					if ((tmp39)){
						HX_STACK_LINE(56)
						break;
					}
					HX_STACK_LINE(56)
					int tmp40 = (_g3)++;		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(56)
					int y = tmp40;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(57)
					::String tmp41 = _auto;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(57)
					int tmp42 = ::core3::Const_obj::compareString(tmp41,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(57)
					bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(57)
					if ((tmp43)){
						HX_STACK_LINE(58)
						this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
						HX_STACK_LINE(59)
						int tmp44 = this->tileIDList->__get(autoCounter);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(59)
						this->level->__get(x).StaticCast< Array< int > >()[y] = tmp44;
						HX_STACK_LINE(60)
						(autoCounter)++;
					}
					else{
						HX_STACK_LINE(61)
						::String tmp44 = _auto;		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(61)
						int tmp45 = ::core3::Const_obj::compareString(tmp44,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(61)
						bool tmp46 = (tmp45 == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(61)
						if ((tmp46)){
							HX_STACK_LINE(62)
							collision = HX_HCSTRING("","\x00","\x00","\x00","\x00");
							HX_STACK_LINE(63)
							z = (int)-1;
							HX_STACK_LINE(64)
							while((true)){
								HX_STACK_LINE(64)
								int tmp47 = z;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(64)
								int tmp48 = (int)-1;		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(64)
								bool tmp49 = (tmp47 == tmp48);		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(64)
								bool tmp50 = !(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(64)
								bool tmp51 = tmp50;		HX_STACK_VAR(tmp51,"tmp51");
								HX_STACK_LINE(64)
								bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(64)
								if ((tmp51)){
									HX_STACK_LINE(64)
									int tmp53 = z;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(64)
									Float tmp54 = ::Math_obj::NaN;		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(64)
									Float tmp55 = tmp54;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(64)
									Float tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(64)
									tmp52 = (tmp53 == tmp56);
								}
								else{
									HX_STACK_LINE(64)
									tmp52 = true;
								}
								HX_STACK_LINE(64)
								bool tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(64)
								if ((tmp52)){
									HX_STACK_LINE(64)
									tmp53 = (collision == HX_HCSTRING("","\x00","\x00","\x00","\x00"));
								}
								else{
									HX_STACK_LINE(64)
									tmp53 = false;
								}
								HX_STACK_LINE(64)
								bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(64)
								if ((tmp54)){
									HX_STACK_LINE(64)
									break;
								}
								HX_STACK_LINE(65)
								::String tmp55 = (HX_HCSTRING("tileID to assign map tile: [","\x40","\x9c","\x80","\x4f") + x);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(65)
								::String tmp56 = (tmp55 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(65)
								int tmp57 = y;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(65)
								::String tmp58 = (tmp56 + tmp57);		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(65)
								::String tmp59 = (tmp58 + HX_HCSTRING("]? ","\x9e","\xc8","\x46","\x00"));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(65)
								::Sys_obj::print(tmp59);
								HX_STACK_LINE(66)
								::haxe::io::Input tmp60 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(66)
								::String tmp61 = tmp60->readLine();		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(66)
								Dynamic tmp62 = ::Std_obj::parseInt(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(66)
								z = tmp62;
								HX_STACK_LINE(67)
								::Sys_obj::print(HX_HCSTRING("entity collision? (y or n): ","\xa5","\x96","\x25","\x3e"));
								HX_STACK_LINE(68)
								::haxe::io::Input tmp63 = ::Sys_obj::_stdin();		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(68)
								::String tmp64 = tmp63->readLine();		HX_STACK_VAR(tmp64,"tmp64");
								HX_STACK_LINE(68)
								collision = tmp64;
								HX_STACK_LINE(69)
								::String tmp65 = collision;		HX_STACK_VAR(tmp65,"tmp65");
								HX_STACK_LINE(69)
								Dynamic tmp66 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),69,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp66,"tmp66");
								HX_STACK_LINE(69)
								::haxe::Log_obj::trace(tmp65,tmp66);
								HX_STACK_LINE(70)
								::String tmp67 = collision;		HX_STACK_VAR(tmp67,"tmp67");
								HX_STACK_LINE(70)
								int tmp68 = ::core3::Const_obj::compareString(tmp67,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp68,"tmp68");
								HX_STACK_LINE(70)
								bool tmp69 = (tmp68 == (int)0);		HX_STACK_VAR(tmp69,"tmp69");
								HX_STACK_LINE(70)
								if ((tmp69)){
									HX_STACK_LINE(71)
									this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = true;
									HX_STACK_LINE(72)
									bool tmp70 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(72)
									Dynamic tmp71 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),72,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(72)
									::haxe::Log_obj::trace(tmp70,tmp71);
								}
								else{
									HX_STACK_LINE(73)
									::String tmp70 = collision;		HX_STACK_VAR(tmp70,"tmp70");
									HX_STACK_LINE(73)
									int tmp71 = ::core3::Const_obj::compareString(tmp70,HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp71,"tmp71");
									HX_STACK_LINE(73)
									bool tmp72 = (tmp71 == (int)0);		HX_STACK_VAR(tmp72,"tmp72");
									HX_STACK_LINE(73)
									if ((tmp72)){
										HX_STACK_LINE(74)
										this->levelCollision->__get(x).StaticCast< Array< bool > >()[y] = false;
										HX_STACK_LINE(75)
										bool tmp73 = this->levelCollision->__get(x).StaticCast< Array< bool > >()->__get(y);		HX_STACK_VAR(tmp73,"tmp73");
										HX_STACK_LINE(75)
										Dynamic tmp74 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),75,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp74,"tmp74");
										HX_STACK_LINE(75)
										::haxe::Log_obj::trace(tmp73,tmp74);
									}
								}
							}
							HX_STACK_LINE(78)
							int tmp47 = this->tileIDList->__get(z);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(78)
							this->level->__get(x).StaticCast< Array< int > >()[y] = tmp47;
							HX_STACK_LINE(79)
							(z)++;
						}
					}
				}
			}
		}
	}
	HX_STACK_LINE(83)
	this->tilesheetData = Array_obj< Float >::__new();
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(84)
		int tmp27 = this->level->length;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(84)
		int _g = tmp27;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(84)
		while((true)){
			HX_STACK_LINE(84)
			bool tmp28 = (_g1 < _g);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(84)
			bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(84)
			if ((tmp29)){
				HX_STACK_LINE(84)
				break;
			}
			HX_STACK_LINE(84)
			int tmp30 = (_g1)++;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(84)
			int row = tmp30;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(85)
			{
				HX_STACK_LINE(85)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(85)
				int tmp31 = this->level->__get(row).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(85)
				int _g2 = tmp31;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(85)
				while((true)){
					HX_STACK_LINE(85)
					bool tmp32 = (_g3 < _g2);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(85)
					bool tmp33 = !(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(85)
					if ((tmp33)){
						HX_STACK_LINE(85)
						break;
					}
					HX_STACK_LINE(85)
					int tmp34 = (_g3)++;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(85)
					int cell = tmp34;		HX_STACK_VAR(cell,"cell");
					HX_STACK_LINE(86)
					int tmp35 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(86)
					int tmp36 = cell;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(86)
					int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(86)
					int tmp38 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(86)
					int tmp39 = row;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(86)
					int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(86)
					int tmp41 = this->level->__get(row).StaticCast< Array< int > >()->__get(cell);		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(86)
					this->tilesheetData = this->tilesheetData->concat(Array_obj< Float >::__new().Add(tmp37).Add(tmp40).Add(tmp41));
				}
			}
		}
	}
	HX_STACK_LINE(89)
	Dynamic tmp27 = hx::SourceInfo(HX_HCSTRING("Manager.hx","\x91","\x36","\xe6","\xba"),89,HX_HCSTRING("core3.Manager","\xd3","\x45","\x19","\xea"),HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(89)
	::haxe::Log_obj::trace(this->level,tmp27);
	HX_STACK_LINE(92)
	::nme::text::TextField tmp28 = ::nme::text::TextField_obj::__new();		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(92)
	::nme::text::TextField tf = tmp28;		HX_STACK_VAR(tf,"tf");
	HX_STACK_LINE(94)
	::String tmp29 = ::core3::Const_obj::VERSION;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(94)
	::String tmp30 = (HX_HCSTRING("Platformer ","\x20","\x5e","\x72","\x1c") + tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(94)
	tf->set_text(tmp30);
	HX_STACK_LINE(95)
	::nme::display::Stage tmp31 = tf->get_stage();		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(95)
	int tmp32 = tmp31->get_stageWidth();		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(95)
	tf->set_width(tmp32);
	HX_STACK_LINE(96)
	tf->set_textColor((int)16777215);
	HX_STACK_LINE(97)
	bool tmp33 = tf->set_selectable(false);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(97)
	tf->set_mouseEnabled(tmp33);
	HX_STACK_LINE(101)
	::core3::Entity tmp34 = ::core3::Entity_obj::__new();		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(101)
	this->hero = tmp34;
	HX_STACK_LINE(102)
	::nme::display::MovieClip tmp35 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(102)
	::core3::Entity tmp36 = this->hero;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(102)
	::nme::display::Sprite tmp37 = tmp36->sprite;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(102)
	tmp35->addChild(tmp37);
	HX_STACK_LINE(103)
	::core3::Map tmp38 = ::core3::Map_obj::__new(this->tilesheetData,mapTS);		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(103)
	map = tmp38;
	HX_STACK_LINE(104)
	::nme::display::MovieClip tmp39 = ::nme::Lib_obj::get_current();		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(104)
	::core3::Map tmp40 = map;		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(104)
	tmp39->addChild(tmp40);
	HX_STACK_LINE(105)
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

Void Manager_obj::update( ::nme::events::Event e){
{
		HX_STACK_FRAME("core3.Manager","update",0x383e4744,"core3.Manager.update","core3/Manager.hx",110,0x53b98e0c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(111)
		bool tmp = this->init;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		if ((tmp)){
			HX_STACK_LINE(112)
			::core3::Map tmp1 = this->map;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(112)
			tmp1->draw();
		}
		HX_STACK_LINE(114)
		Float speed = ((Float)0.04);		HX_STACK_VAR(speed,"speed");
		HX_STACK_LINE(116)
		int tmp1 = ::nme::ui::Keyboard_obj::LEFT;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		bool tmp2 = ::core3::Key_obj::isDown(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		if ((tmp2)){
			HX_STACK_LINE(117)
			::core3::Entity tmp3 = this->hero;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(117)
			hx::SubEq(tmp3->dx,speed);
		}
		HX_STACK_LINE(119)
		int tmp3 = ::nme::ui::Keyboard_obj::RIGHT;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		bool tmp4 = ::core3::Key_obj::isDown(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		if ((tmp4)){
			HX_STACK_LINE(120)
			::core3::Entity tmp5 = this->hero;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(120)
			hx::AddEq(tmp5->dx,speed);
		}
		HX_STACK_LINE(122)
		int tmp5 = ::nme::ui::Keyboard_obj::UP;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(122)
		bool tmp6 = ::core3::Key_obj::isDown(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(122)
		if ((tmp6)){
			HX_STACK_LINE(123)
			::core3::Entity tmp7 = this->hero;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(123)
			hx::SubEq(tmp7->dy,speed);
		}
		HX_STACK_LINE(125)
		int tmp7 = ::nme::ui::Keyboard_obj::DOWN;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(125)
		bool tmp8 = ::core3::Key_obj::isDown(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(125)
		if ((tmp8)){
			HX_STACK_LINE(126)
			::core3::Entity tmp9 = this->hero;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(126)
			hx::AddEq(tmp9->dy,speed);
		}
		HX_STACK_LINE(127)
		::core3::Entity tmp9 = this->hero;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(127)
		tmp9->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Manager_obj,update,(void))

::nme::display::Sprite Manager_obj::getMap( ){
	HX_STACK_FRAME("core3.Manager","getMap",0x545b04e1,"core3.Manager.getMap","core3/Manager.hx",129,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(130)
	::core3::Map tmp = this->map;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Manager_obj,getMap,return )

::nme::display::Tilesheet Manager_obj::getMapTS( ){
	HX_STACK_FRAME("core3.Manager","getMapTS",0x64cf08a0,"core3.Manager.getMapTS","core3/Manager.hx",132,0x53b98e0c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	::nme::display::Tilesheet tmp = this->mapTS;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
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
		if (HX_FIELD_EQ(inName,"mapTS") ) { mapTS=inValue.Cast< ::nme::display::Tilesheet >(); return inValue; }
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
	{hx::fsObject /*::nme::display::Tilesheet*/ ,(int)offsetof(Manager_obj,mapTS),HX_HCSTRING("mapTS","\x1b","\x33","\x20","\x03")},
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
