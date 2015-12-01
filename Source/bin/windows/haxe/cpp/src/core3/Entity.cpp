#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core3_Const
#include <core3/Const.h>
#endif
#ifndef INCLUDED_core3_Entity
#include <core3/Entity.h>
#endif
#ifndef INCLUDED_core3_Manager
#include <core3/Manager.h>
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
#ifndef INCLUDED_nme_display_Sprite
#include <nme/display/Sprite.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
namespace core3{

Void Entity_obj::__construct()
{
HX_STACK_FRAME("core3.Entity","new",0xb48971ef,"core3.Entity.new","core3/Entity.hx",20,0x5d39d840)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	::core3::Manager tmp = ::core3::Manager_obj::ME;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	this->man = tmp;
	HX_STACK_LINE(23)
	this->cx = (int)5;
	HX_STACK_LINE(24)
	this->cy = (int)0;
	HX_STACK_LINE(25)
	Float tmp1 = this->yr = ((Float)0.5);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(25)
	this->xr = tmp1;
	HX_STACK_LINE(26)
	Float tmp2 = this->dy = (int)0;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(26)
	this->dx = tmp2;
	HX_STACK_LINE(28)
	::nme::display::Sprite tmp3 = ::nme::display::Sprite_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	this->sprite = tmp3;
	HX_STACK_LINE(29)
	::nme::display::Sprite tmp4 = this->sprite;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	::nme::display::Graphics tmp5 = tmp4->get_graphics();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(29)
	tmp5->beginFill((int)16776960,(int)1);
	HX_STACK_LINE(30)
	::nme::display::Sprite tmp6 = this->sprite;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(30)
	::nme::display::Graphics tmp7 = tmp6->get_graphics();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(30)
	int tmp8 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(30)
	Float tmp9 = (tmp8 * ((Float)0.5));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(30)
	tmp7->drawCircle((int)0,(int)0,tmp9);
}
;
	return null();
}

//Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new()
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct();
	return _result_;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > _result_ = new Entity_obj();
	_result_->__construct();
	return _result_;}

Void Entity_obj::setCoordinates( Float x,Float y){
{
		HX_STACK_FRAME("core3.Entity","setCoordinates",0x395e694a,"core3.Entity.setCoordinates","core3/Entity.hx",33,0x5d39d840)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(34)
		this->xx = x;
		HX_STACK_LINE(35)
		this->yy = y;
		HX_STACK_LINE(36)
		Float tmp = this->xx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		int tmp1 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		Float tmp2 = (Float(tmp) / Float(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(36)
		this->cx = tmp3;
		HX_STACK_LINE(37)
		Float tmp4 = this->yy;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(37)
		int tmp5 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = (Float(tmp4) / Float(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(37)
		this->cy = tmp7;
		HX_STACK_LINE(38)
		Float tmp8 = this->xx;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		int tmp9 = this->cx;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		int tmp10 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		int tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(38)
		Float tmp12 = (tmp8 - tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(38)
		int tmp13 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(38)
		Float tmp14 = (Float(tmp12) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(38)
		this->xr = tmp14;
		HX_STACK_LINE(39)
		Float tmp15 = this->yy;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(39)
		int tmp16 = this->cy;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(39)
		int tmp17 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(39)
		int tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(39)
		Float tmp19 = (tmp15 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(39)
		int tmp20 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(39)
		Float tmp21 = (Float(tmp19) / Float(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(39)
		this->yr = tmp21;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setCoordinates,(void))

bool Entity_obj::hasCollision( int cx,int cy){
	HX_STACK_FRAME("core3.Entity","hasCollision",0x44b3c249,"core3.Entity.hasCollision","core3/Entity.hx",43,0x5d39d840)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cx,"cx")
	HX_STACK_ARG(cy,"cy")
	HX_STACK_LINE(45)
	bool tmp = (cx < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(45)
	if ((tmp2)){
		HX_STACK_LINE(45)
		int tmp4 = cx;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(45)
		::core3::Manager tmp5 = this->man;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(45)
		::core3::Manager tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::core3::Manager tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		int tmp8 = tmp7->level->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		tmp3 = (tmp4 >= tmp10);
	}
	else{
		HX_STACK_LINE(45)
		tmp3 = true;
	}
	HX_STACK_LINE(45)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(45)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(45)
	if ((tmp4)){
		HX_STACK_LINE(45)
		int tmp6 = cy;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(45)
		::core3::Manager tmp7 = this->man;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(45)
		::core3::Manager tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(45)
		int tmp9 = tmp8->level->__get(cx).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(45)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(45)
		tmp5 = (tmp6 >= tmp10);
	}
	else{
		HX_STACK_LINE(45)
		tmp5 = true;
	}
	HX_STACK_LINE(45)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(45)
	if ((tmp5)){
		HX_STACK_LINE(46)
		tmp6 = true;
	}
	else{
		HX_STACK_LINE(48)
		::core3::Manager tmp7 = this->man;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(48)
		tmp6 = tmp7->levelCollision->__get(cx).StaticCast< Array< bool > >()->__get(cy);
	}
	HX_STACK_LINE(44)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,hasCollision,return )

bool Entity_obj::onGround( ){
	HX_STACK_FRAME("core3.Entity","onGround",0x89a07117,"core3.Entity.onGround","core3/Entity.hx",51,0x5d39d840)
	HX_STACK_THIS(this)
	HX_STACK_LINE(52)
	bool tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int tmp1 = this->cx;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		int cx = tmp2;		HX_STACK_VAR(cx,"cx");
		HX_STACK_LINE(52)
		int tmp3 = this->cy;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		int tmp5 = (tmp4 + (int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(52)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		int cy = tmp6;		HX_STACK_VAR(cy,"cy");
		HX_STACK_LINE(52)
		bool tmp7 = (cx < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(52)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(52)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(52)
		bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(52)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(52)
		bool tmp14 = tmp12;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(52)
		if ((tmp14)){
			HX_STACK_LINE(52)
			int tmp15 = cx;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(52)
			::core3::Manager tmp16 = this->man;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(52)
			::core3::Manager tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(52)
			::core3::Manager tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(52)
			::core3::Manager tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(52)
			int tmp20 = tmp19->level->length;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(52)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(52)
			int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(52)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(52)
			bool tmp24 = (tmp15 >= tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(52)
			tmp13 = tmp24;
		}
		else{
			HX_STACK_LINE(52)
			tmp13 = true;
		}
		HX_STACK_LINE(52)
		bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(52)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(52)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(52)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(52)
		bool tmp19 = tmp17;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(52)
		if ((tmp19)){
			HX_STACK_LINE(52)
			int tmp20 = cy;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(52)
			::core3::Manager tmp21 = this->man;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(52)
			::core3::Manager tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(52)
			::core3::Manager tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(52)
			int tmp24 = tmp23->level->__get(cx).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(52)
			int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(52)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(52)
			bool tmp27 = (tmp20 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(52)
			tmp18 = tmp27;
		}
		else{
			HX_STACK_LINE(52)
			tmp18 = true;
		}
		HX_STACK_LINE(52)
		bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(52)
		if ((tmp20)){
			HX_STACK_LINE(52)
			tmp = true;
		}
		else{
			HX_STACK_LINE(52)
			::core3::Manager tmp21 = this->man;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(52)
			::core3::Manager tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(52)
			tmp = tmp22->levelCollision->__get(cx).StaticCast< Array< bool > >()->__get(cy);
		}
	}
	HX_STACK_LINE(52)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	if ((tmp)){
		HX_STACK_LINE(52)
		Float tmp2 = this->yr;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(52)
		Float tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(52)
		tmp1 = (tmp3 >= ((Float)0.5));
	}
	else{
		HX_STACK_LINE(52)
		tmp1 = false;
	}
	HX_STACK_LINE(52)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,onGround,return )

Void Entity_obj::update( ){
{
		HX_STACK_FRAME("core3.Entity","update",0x6bd007da,"core3.Entity.update","core3/Entity.hx",55,0x5d39d840)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		Float frictX = ((Float)0.92);		HX_STACK_VAR(frictX,"frictX");
		HX_STACK_LINE(57)
		Float frictY = ((Float)0.94);		HX_STACK_VAR(frictY,"frictY");
		HX_STACK_LINE(58)
		Float gravity = ((Float)0.04);		HX_STACK_VAR(gravity,"gravity");
		HX_STACK_LINE(61)
		Float tmp = this->dx;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		hx::AddEq(this->xr,tmp);
		HX_STACK_LINE(62)
		hx::MultEq(this->dx,frictX);
		HX_STACK_LINE(63)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int tmp2 = this->cx;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			int tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(63)
			int cx = tmp5;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(63)
			int tmp6 = this->cy;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(63)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(63)
			int cy = tmp7;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(63)
			bool tmp8 = (cx < (int)0);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(63)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(63)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(63)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(63)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(63)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(63)
			bool tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(63)
			if ((tmp15)){
				HX_STACK_LINE(63)
				int tmp16 = cx;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(63)
				::core3::Manager tmp17 = this->man;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(63)
				::core3::Manager tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(63)
				::core3::Manager tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(63)
				::core3::Manager tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(63)
				int tmp21 = tmp20->level->length;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(63)
				int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(63)
				int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(63)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(63)
				bool tmp25 = (tmp16 >= tmp24);		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(63)
				tmp14 = tmp25;
			}
			else{
				HX_STACK_LINE(63)
				tmp14 = true;
			}
			HX_STACK_LINE(63)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(63)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(63)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(63)
			bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(63)
			bool tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(63)
			if ((tmp20)){
				HX_STACK_LINE(63)
				int tmp21 = cy;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(63)
				::core3::Manager tmp22 = this->man;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(63)
				::core3::Manager tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(63)
				::core3::Manager tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(63)
				int tmp25 = tmp24->level->__get(cx).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(63)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(63)
				int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(63)
				bool tmp28 = (tmp21 >= tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(63)
				tmp19 = tmp28;
			}
			else{
				HX_STACK_LINE(63)
				tmp19 = true;
			}
			HX_STACK_LINE(63)
			bool tmp21 = tmp19;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(63)
			if ((tmp21)){
				HX_STACK_LINE(63)
				tmp1 = true;
			}
			else{
				HX_STACK_LINE(63)
				::core3::Manager tmp22 = this->man;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(63)
				::core3::Manager tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(63)
				tmp1 = tmp23->levelCollision->__get(cx).StaticCast< Array< bool > >()->__get(cy);
			}
		}
		HX_STACK_LINE(63)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			Float tmp3 = this->xr;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(63)
			Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(63)
			tmp2 = (tmp4 <= ((Float)0.3));
		}
		else{
			HX_STACK_LINE(63)
			tmp2 = false;
		}
		HX_STACK_LINE(63)
		if ((tmp2)){
			HX_STACK_LINE(64)
			this->dx = (int)0;
			HX_STACK_LINE(65)
			this->xr = ((Float)0.3);
		}
		HX_STACK_LINE(67)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp4 = this->cx;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(67)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			int tmp6 = (tmp5 + (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			int cx = tmp7;		HX_STACK_VAR(cx,"cx");
			HX_STACK_LINE(67)
			int tmp8 = this->cy;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(67)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(67)
			int cy = tmp9;		HX_STACK_VAR(cy,"cy");
			HX_STACK_LINE(67)
			bool tmp10 = (cx < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(67)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(67)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(67)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(67)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(67)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(67)
			if ((tmp17)){
				HX_STACK_LINE(67)
				int tmp18 = cx;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(67)
				::core3::Manager tmp19 = this->man;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(67)
				::core3::Manager tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(67)
				::core3::Manager tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(67)
				::core3::Manager tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(67)
				int tmp23 = tmp22->level->length;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(67)
				int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(67)
				int tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(67)
				int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(67)
				bool tmp27 = (tmp18 >= tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				tmp16 = tmp27;
			}
			else{
				HX_STACK_LINE(67)
				tmp16 = true;
			}
			HX_STACK_LINE(67)
			bool tmp18 = tmp16;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(67)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(67)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(67)
			bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(67)
			bool tmp22 = tmp20;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(67)
			if ((tmp22)){
				HX_STACK_LINE(67)
				int tmp23 = cy;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(67)
				::core3::Manager tmp24 = this->man;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(67)
				::core3::Manager tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(67)
				::core3::Manager tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(67)
				int tmp27 = tmp26->level->__get(cx).StaticCast< Array< int > >()->length;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(67)
				int tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(67)
				int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(67)
				bool tmp30 = (tmp23 >= tmp29);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(67)
				tmp21 = tmp30;
			}
			else{
				HX_STACK_LINE(67)
				tmp21 = true;
			}
			HX_STACK_LINE(67)
			bool tmp23 = tmp21;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(67)
			if ((tmp23)){
				HX_STACK_LINE(67)
				tmp3 = true;
			}
			else{
				HX_STACK_LINE(67)
				::core3::Manager tmp24 = this->man;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(67)
				::core3::Manager tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(67)
				tmp3 = tmp25->levelCollision->__get(cx).StaticCast< Array< bool > >()->__get(cy);
			}
		}
		HX_STACK_LINE(67)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(67)
		if ((tmp3)){
			HX_STACK_LINE(67)
			Float tmp5 = this->xr;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(67)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(67)
			tmp4 = (tmp6 >= ((Float)0.7));
		}
		else{
			HX_STACK_LINE(67)
			tmp4 = false;
		}
		HX_STACK_LINE(67)
		if ((tmp4)){
			HX_STACK_LINE(68)
			this->dx = (int)0;
			HX_STACK_LINE(69)
			this->xr = ((Float)0.7);
		}
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			Float tmp5 = this->xr;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			bool tmp6 = (tmp5 < (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(71)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(71)
			if ((tmp7)){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(72)
			(this->cx)--;
			HX_STACK_LINE(73)
			(this->xr)++;
		}
		HX_STACK_LINE(75)
		while((true)){
			HX_STACK_LINE(75)
			Float tmp5 = this->xr;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(75)
			bool tmp6 = (tmp5 > (int)1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(75)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(75)
			if ((tmp7)){
				HX_STACK_LINE(75)
				break;
			}
			HX_STACK_LINE(76)
			(this->cx)++;
			HX_STACK_LINE(77)
			(this->xr)--;
		}
		HX_STACK_LINE(83)
		Float tmp5 = this->dy;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(83)
		hx::AddEq(this->yr,tmp5);
		HX_STACK_LINE(84)
		hx::MultEq(this->dy,frictY);
		HX_STACK_LINE(104)
		int tmp6 = this->cx;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(104)
		Float tmp7 = this->xr;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		int tmp9 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(104)
		Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(104)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(104)
		this->xx = tmp11;
		HX_STACK_LINE(105)
		int tmp12 = this->cy;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(105)
		Float tmp13 = this->yr;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(105)
		Float tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(105)
		int tmp15 = ::core3::Const_obj::GRID;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(105)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(105)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(105)
		this->yy = tmp17;
		HX_STACK_LINE(106)
		::nme::display::Sprite tmp18 = this->sprite;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(106)
		Float tmp19 = this->xx;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(106)
		tmp18->set_x(tmp19);
		HX_STACK_LINE(107)
		::nme::display::Sprite tmp20 = this->sprite;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(107)
		Float tmp21 = this->yy;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(107)
		tmp20->set_y(tmp21);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,update,(void))


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(man,"man");
	HX_MARK_MEMBER_NAME(sprite,"sprite");
	HX_MARK_MEMBER_NAME(cx,"cx");
	HX_MARK_MEMBER_NAME(cy,"cy");
	HX_MARK_MEMBER_NAME(xr,"xr");
	HX_MARK_MEMBER_NAME(yr,"yr");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_MEMBER_NAME(xx,"xx");
	HX_MARK_MEMBER_NAME(yy,"yy");
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(man,"man");
	HX_VISIT_MEMBER_NAME(sprite,"sprite");
	HX_VISIT_MEMBER_NAME(cx,"cx");
	HX_VISIT_MEMBER_NAME(cy,"cy");
	HX_VISIT_MEMBER_NAME(xr,"xr");
	HX_VISIT_MEMBER_NAME(yr,"yr");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
	HX_VISIT_MEMBER_NAME(xx,"xx");
	HX_VISIT_MEMBER_NAME(yy,"yy");
}

Dynamic Entity_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { return cx; }
		if (HX_FIELD_EQ(inName,"cy") ) { return cy; }
		if (HX_FIELD_EQ(inName,"xr") ) { return xr; }
		if (HX_FIELD_EQ(inName,"yr") ) { return yr; }
		if (HX_FIELD_EQ(inName,"dx") ) { return dx; }
		if (HX_FIELD_EQ(inName,"dy") ) { return dy; }
		if (HX_FIELD_EQ(inName,"xx") ) { return xx; }
		if (HX_FIELD_EQ(inName,"yy") ) { return yy; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"man") ) { return man; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onGround") ) { return onGround_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"hasCollision") ) { return hasCollision_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setCoordinates") ) { return setCoordinates_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"cx") ) { cx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cy") ) { cy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xr") ) { xr=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yr") ) { yr=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xx") ) { xx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yy") ) { yy=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"man") ) { man=inValue.Cast< ::core3::Manager >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::nme::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("man","\x9a","\x0a","\x53","\x00"));
	outFields->push(HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"));
	outFields->push(HX_HCSTRING("cx","\xb5","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("cy","\xb6","\x56","\x00","\x00"));
	outFields->push(HX_HCSTRING("xr","\xfa","\x68","\x00","\x00"));
	outFields->push(HX_HCSTRING("yr","\xd9","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("dx","\x94","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("dy","\x95","\x57","\x00","\x00"));
	outFields->push(HX_HCSTRING("xx","\x00","\x69","\x00","\x00"));
	outFields->push(HX_HCSTRING("yy","\xe0","\x69","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core3::Manager*/ ,(int)offsetof(Entity_obj,man),HX_HCSTRING("man","\x9a","\x0a","\x53","\x00")},
	{hx::fsObject /*::nme::display::Sprite*/ ,(int)offsetof(Entity_obj,sprite),HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3")},
	{hx::fsInt,(int)offsetof(Entity_obj,cx),HX_HCSTRING("cx","\xb5","\x56","\x00","\x00")},
	{hx::fsInt,(int)offsetof(Entity_obj,cy),HX_HCSTRING("cy","\xb6","\x56","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,xr),HX_HCSTRING("xr","\xfa","\x68","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,yr),HX_HCSTRING("yr","\xd9","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,dx),HX_HCSTRING("dx","\x94","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,dy),HX_HCSTRING("dy","\x95","\x57","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,xx),HX_HCSTRING("xx","\x00","\x69","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Entity_obj,yy),HX_HCSTRING("yy","\xe0","\x69","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("man","\x9a","\x0a","\x53","\x00"),
	HX_HCSTRING("sprite","\x05","\xdc","\x95","\xc3"),
	HX_HCSTRING("cx","\xb5","\x56","\x00","\x00"),
	HX_HCSTRING("cy","\xb6","\x56","\x00","\x00"),
	HX_HCSTRING("xr","\xfa","\x68","\x00","\x00"),
	HX_HCSTRING("yr","\xd9","\x69","\x00","\x00"),
	HX_HCSTRING("dx","\x94","\x57","\x00","\x00"),
	HX_HCSTRING("dy","\x95","\x57","\x00","\x00"),
	HX_HCSTRING("xx","\x00","\x69","\x00","\x00"),
	HX_HCSTRING("yy","\xe0","\x69","\x00","\x00"),
	HX_HCSTRING("setCoordinates","\x79","\x2e","\x94","\x9d"),
	HX_HCSTRING("hasCollision","\xb8","\x8d","\x8c","\x68"),
	HX_HCSTRING("onGround","\x06","\x19","\xd5","\xfb"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

#endif

hx::Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core3.Entity","\x7d","\x4e","\x78","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Entity_obj >;
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
