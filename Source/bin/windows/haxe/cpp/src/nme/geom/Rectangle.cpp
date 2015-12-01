#include <hxcpp.h>

#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
namespace nme{
namespace geom{

Void Rectangle_obj::__construct(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight)
{
HX_STACK_FRAME("nme.geom.Rectangle","new",0x97360377,"nme.geom.Rectangle.new","nme/geom/Rectangle.hx",20,0xe4dfc439)
HX_STACK_THIS(this)
HX_STACK_ARG(inX,"inX")
HX_STACK_ARG(inY,"inY")
HX_STACK_ARG(inWidth,"inWidth")
HX_STACK_ARG(inHeight,"inHeight")
{
	HX_STACK_LINE(21)
	bool tmp = (inX == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(21)
	if ((tmp)){
		HX_STACK_LINE(21)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(21)
		tmp1 = inX;
	}
	HX_STACK_LINE(21)
	this->x = tmp1;
	HX_STACK_LINE(22)
	bool tmp2 = (inY == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(22)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(22)
	if ((tmp2)){
		HX_STACK_LINE(22)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(22)
		tmp3 = inY;
	}
	HX_STACK_LINE(22)
	this->y = tmp3;
	HX_STACK_LINE(23)
	bool tmp4 = (inWidth == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(23)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(23)
	if ((tmp4)){
		HX_STACK_LINE(23)
		tmp5 = (int)0;
	}
	else{
		HX_STACK_LINE(23)
		tmp5 = inWidth;
	}
	HX_STACK_LINE(23)
	this->width = tmp5;
	HX_STACK_LINE(24)
	bool tmp6 = (inHeight == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(24)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(24)
	if ((tmp6)){
		HX_STACK_LINE(24)
		tmp7 = (int)0;
	}
	else{
		HX_STACK_LINE(24)
		tmp7 = inHeight;
	}
	HX_STACK_LINE(24)
	this->height = tmp7;
}
;
	return null();
}

//Rectangle_obj::~Rectangle_obj() { }

Dynamic Rectangle_obj::__CreateEmpty() { return  new Rectangle_obj; }
hx::ObjectPtr< Rectangle_obj > Rectangle_obj::__new(Dynamic inX,Dynamic inY,Dynamic inWidth,Dynamic inHeight)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inX,inY,inWidth,inHeight);
	return _result_;}

Dynamic Rectangle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Rectangle_obj > _result_ = new Rectangle_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

Void Rectangle_obj::setTo( Float inX,Float inY,Float inWidth,Float inHeight){
{
		HX_STACK_FRAME("nme.geom.Rectangle","setTo",0x3455f894,"nme.geom.Rectangle.setTo","nme/geom/Rectangle.hx",28,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_LINE(29)
		this->x = inX;
		HX_STACK_LINE(30)
		this->y = inY;
		HX_STACK_LINE(31)
		this->width = inWidth;
		HX_STACK_LINE(32)
		this->height = inHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Rectangle_obj,setTo,(void))

::nme::geom::Rectangle Rectangle_obj::clone( ){
	HX_STACK_FRAME("nme.geom.Rectangle","clone",0x02897a34,"nme.geom.Rectangle.clone","nme/geom/Rectangle.hx",36,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	Float tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	::nme::geom::Rectangle tmp4 = ::nme::geom::Rectangle_obj::__new(tmp,tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,clone,return )

bool Rectangle_obj::contains( Float inX,Float inY){
	HX_STACK_FRAME("nme.geom.Rectangle","contains",0xc7f593a8,"nme.geom.Rectangle.contains","nme/geom/Rectangle.hx",41,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inX,"inX")
	HX_STACK_ARG(inY,"inY")
	HX_STACK_LINE(42)
	Float tmp = inX;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(42)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	bool tmp2 = (tmp >= tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(42)
	if ((tmp3)){
		HX_STACK_LINE(42)
		Float tmp5 = inY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(42)
		Float tmp6 = this->y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		tmp4 = (tmp5 >= tmp8);
	}
	else{
		HX_STACK_LINE(42)
		tmp4 = false;
	}
	HX_STACK_LINE(42)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(42)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	if ((tmp5)){
		HX_STACK_LINE(42)
		Float tmp7 = inX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		Float tmp8 = this->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		tmp6 = (tmp7 < tmp10);
	}
	else{
		HX_STACK_LINE(42)
		tmp6 = false;
	}
	HX_STACK_LINE(42)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	if ((tmp6)){
		HX_STACK_LINE(42)
		Float tmp8 = inY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		Float tmp9 = this->get_bottom();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		Float tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		tmp7 = (tmp8 < tmp10);
	}
	else{
		HX_STACK_LINE(42)
		tmp7 = false;
	}
	HX_STACK_LINE(42)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,contains,return )

bool Rectangle_obj::containsPoint( ::nme::geom::Point point){
	HX_STACK_FRAME("nme.geom.Rectangle","containsPoint",0x3ba74f88,"nme.geom.Rectangle.containsPoint","nme/geom/Rectangle.hx",46,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(47)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(47)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	bool tmp2 = this->contains(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(47)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsPoint,return )

bool Rectangle_obj::containsRect( ::nme::geom::Rectangle rect){
	HX_STACK_FRAME("nme.geom.Rectangle","containsRect",0x3f8d00ec,"nme.geom.Rectangle.containsRect","nme/geom/Rectangle.hx",51,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(52)
	Float tmp = rect->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	Float tmp1 = rect->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	Float tmp2 = tmp;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	Float tmp3 = tmp1;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	bool tmp4 = this->contains(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	if ((tmp4)){
		HX_STACK_LINE(52)
		::nme::geom::Point tmp6 = rect->get_bottomRight();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(52)
		::nme::geom::Point tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(52)
		::nme::geom::Point tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(52)
		tmp5 = this->containsPoint(tmp8);
	}
	else{
		HX_STACK_LINE(52)
		tmp5 = false;
	}
	HX_STACK_LINE(52)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,containsRect,return )

bool Rectangle_obj::equals( ::nme::geom::Rectangle toCompare){
	HX_STACK_FRAME("nme.geom.Rectangle","equals",0xe7668388,"nme.geom.Rectangle.equals","nme/geom/Rectangle.hx",56,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_LINE(57)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(57)
	Float tmp1 = toCompare->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(57)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(57)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(57)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(57)
	if ((tmp3)){
		HX_STACK_LINE(57)
		Float tmp5 = this->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(57)
		Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(57)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		Float tmp8 = toCompare->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(57)
		tmp4 = false;
	}
	HX_STACK_LINE(57)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(57)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(57)
	if ((tmp5)){
		HX_STACK_LINE(57)
		Float tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(57)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		Float tmp10 = toCompare->width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(57)
		tmp6 = false;
	}
	HX_STACK_LINE(57)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(57)
	if ((tmp6)){
		HX_STACK_LINE(57)
		Float tmp8 = this->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(57)
		Float tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(57)
		Float tmp10 = toCompare->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(57)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(57)
		tmp7 = false;
	}
	HX_STACK_LINE(57)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,equals,return )

Void Rectangle_obj::extendBounds( ::nme::geom::Rectangle r){
{
		HX_STACK_FRAME("nme.geom.Rectangle","extendBounds",0xb9f6ddf8,"nme.geom.Rectangle.extendBounds","nme/geom/Rectangle.hx",61,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(r,"r")
		HX_STACK_LINE(62)
		Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		Float tmp1 = r->x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(62)
		Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(62)
		Float dx = tmp2;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(63)
		bool tmp3 = (dx > (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(63)
		if ((tmp3)){
			HX_STACK_LINE(65)
			hx::SubEq(this->x,dx);
			HX_STACK_LINE(66)
			hx::AddEq(this->width,dx);
		}
		HX_STACK_LINE(69)
		Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		Float tmp5 = r->y;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(69)
		Float tmp6 = (tmp4 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(69)
		Float dy = tmp6;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(70)
		bool tmp7 = (dy > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(70)
		if ((tmp7)){
			HX_STACK_LINE(72)
			hx::SubEq(this->y,dy);
			HX_STACK_LINE(73)
			hx::AddEq(this->height,dy);
		}
		HX_STACK_LINE(76)
		Float tmp8 = r->get_right();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		Float tmp9 = this->get_right();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(76)
		bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(76)
		if ((tmp10)){
			HX_STACK_LINE(77)
			Float tmp11 = r->get_right();		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(77)
			this->set_right(tmp11);
		}
		HX_STACK_LINE(79)
		Float tmp11 = r->get_bottom();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(79)
		Float tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(79)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(79)
		if ((tmp13)){
			HX_STACK_LINE(80)
			Float tmp14 = r->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(80)
			this->set_bottom(tmp14);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,extendBounds,(void))

Void Rectangle_obj::inflate( Float dx,Float dy){
{
		HX_STACK_FRAME("nme.geom.Rectangle","inflate",0x69caa71e,"nme.geom.Rectangle.inflate","nme/geom/Rectangle.hx",84,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(85)
		hx::SubEq(this->x,dx);
		HX_STACK_LINE(85)
		Float tmp = (dx * (int)2);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		hx::AddEq(this->width,tmp);
		HX_STACK_LINE(86)
		hx::SubEq(this->y,dy);
		HX_STACK_LINE(86)
		Float tmp1 = (dy * (int)2);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		hx::AddEq(this->height,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,inflate,(void))

Void Rectangle_obj::inflatePoint( ::nme::geom::Point point){
{
		HX_STACK_FRAME("nme.geom.Rectangle","inflatePoint",0xcba9f052,"nme.geom.Rectangle.inflatePoint","nme/geom/Rectangle.hx",90,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(91)
		Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		this->inflate(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,inflatePoint,(void))

::nme::geom::Rectangle Rectangle_obj::intersection( ::nme::geom::Rectangle toIntersect){
	HX_STACK_FRAME("nme.geom.Rectangle","intersection",0x21d1d452,"nme.geom.Rectangle.intersection","nme/geom/Rectangle.hx",95,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(96)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(96)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(96)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(96)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(96)
	if ((tmp2)){
		HX_STACK_LINE(96)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(96)
		tmp3 = this->x;
	}
	HX_STACK_LINE(96)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(97)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(97)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(97)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(97)
	if ((tmp6)){
		HX_STACK_LINE(97)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(97)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(97)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(98)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(98)
	if ((tmp8)){
		HX_STACK_LINE(99)
		::nme::geom::Rectangle tmp9 = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(99)
		return tmp9;
	}
	HX_STACK_LINE(101)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(101)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(101)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(101)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(101)
	if ((tmp11)){
		HX_STACK_LINE(101)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(101)
		tmp12 = this->y;
	}
	HX_STACK_LINE(101)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(102)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(102)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(102)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(102)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(102)
	if ((tmp15)){
		HX_STACK_LINE(102)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(102)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(102)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(103)
	bool tmp17 = (y1 <= y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(103)
	if ((tmp17)){
		HX_STACK_LINE(104)
		::nme::geom::Rectangle tmp18 = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(104)
		return tmp18;
	}
	HX_STACK_LINE(106)
	Float tmp18 = x0;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(106)
	Float tmp19 = y0;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(106)
	Float tmp20 = (x1 - x0);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(106)
	Float tmp21 = (y1 - y0);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(106)
	::nme::geom::Rectangle tmp22 = ::nme::geom::Rectangle_obj::__new(tmp18,tmp19,tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(106)
	return tmp22;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersection,return )

bool Rectangle_obj::intersects( ::nme::geom::Rectangle toIntersect){
	HX_STACK_FRAME("nme.geom.Rectangle","intersects",0xfd8e307d,"nme.geom.Rectangle.intersects","nme/geom/Rectangle.hx",110,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toIntersect,"toIntersect")
	HX_STACK_LINE(111)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(111)
	Float tmp1 = toIntersect->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(111)
	bool tmp2 = (tmp < tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(111)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(111)
	if ((tmp2)){
		HX_STACK_LINE(111)
		tmp3 = toIntersect->x;
	}
	else{
		HX_STACK_LINE(111)
		tmp3 = this->x;
	}
	HX_STACK_LINE(111)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(112)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(112)
	Float tmp5 = toIntersect->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(112)
	bool tmp6 = (tmp4 > tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(112)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(112)
	if ((tmp6)){
		HX_STACK_LINE(112)
		tmp7 = toIntersect->get_right();
	}
	else{
		HX_STACK_LINE(112)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(112)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(113)
	bool tmp8 = (x1 <= x0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(113)
	if ((tmp8)){
		HX_STACK_LINE(114)
		return false;
	}
	HX_STACK_LINE(116)
	Float tmp9 = this->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(116)
	Float tmp10 = toIntersect->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(116)
	bool tmp11 = (tmp9 < tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(116)
	Float tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(116)
	if ((tmp11)){
		HX_STACK_LINE(116)
		tmp12 = toIntersect->y;
	}
	else{
		HX_STACK_LINE(116)
		tmp12 = this->y;
	}
	HX_STACK_LINE(116)
	Float y0 = tmp12;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(117)
	Float tmp13 = this->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(117)
	Float tmp14 = toIntersect->get_bottom();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(117)
	bool tmp15 = (tmp13 > tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(117)
	Float tmp16;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(117)
	if ((tmp15)){
		HX_STACK_LINE(117)
		tmp16 = toIntersect->get_bottom();
	}
	else{
		HX_STACK_LINE(117)
		tmp16 = this->get_bottom();
	}
	HX_STACK_LINE(117)
	Float y1 = tmp16;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(118)
	bool tmp17 = (y1 > y0);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(118)
	return tmp17;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,intersects,return )

bool Rectangle_obj::isEmpty( ){
	HX_STACK_FRAME("nme.geom.Rectangle","isEmpty",0x6a0ee8da,"nme.geom.Rectangle.isEmpty","nme/geom/Rectangle.hx",122,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(123)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(123)
	bool tmp1 = (tmp == (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(123)
	if ((tmp1)){
		HX_STACK_LINE(123)
		Float tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(123)
		Float tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(123)
		tmp2 = (tmp4 == (int)0);
	}
	else{
		HX_STACK_LINE(123)
		tmp2 = false;
	}
	HX_STACK_LINE(123)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,isEmpty,return )

Void Rectangle_obj::offset( Float dx,Float dy){
{
		HX_STACK_FRAME("nme.geom.Rectangle","offset",0x87b32cdc,"nme.geom.Rectangle.offset","nme/geom/Rectangle.hx",127,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dx,"dx")
		HX_STACK_ARG(dy,"dy")
		HX_STACK_LINE(128)
		hx::AddEq(this->x,dx);
		HX_STACK_LINE(129)
		hx::AddEq(this->y,dy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Rectangle_obj,offset,(void))

Void Rectangle_obj::offsetPoint( ::nme::geom::Point point){
{
		HX_STACK_FRAME("nme.geom.Rectangle","offsetPoint",0xb38dd9d4,"nme.geom.Rectangle.offsetPoint","nme/geom/Rectangle.hx",133,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_LINE(134)
		hx::AddEq(this->x,point->x);
		HX_STACK_LINE(135)
		hx::AddEq(this->y,point->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,offsetPoint,(void))

Void Rectangle_obj::setEmpty( ){
{
		HX_STACK_FRAME("nme.geom.Rectangle","setEmpty",0x1988dd14,"nme.geom.Rectangle.setEmpty","nme/geom/Rectangle.hx",139,0xe4dfc439)
		HX_STACK_THIS(this)
		HX_STACK_LINE(140)
		Float tmp = this->height = (int)0;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(140)
		Float tmp1 = this->width = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(140)
		Float tmp2 = this->y = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(140)
		this->x = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,setEmpty,(void))

::nme::geom::Rectangle Rectangle_obj::transform( ::nme::geom::Matrix m){
	HX_STACK_FRAME("nme.geom.Rectangle","transform",0xb50b4bc3,"nme.geom.Rectangle.transform","nme/geom/Rectangle.hx",144,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(145)
	Float tmp = m->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(145)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(145)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(145)
	Float tmp3 = m->c;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(145)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(145)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(145)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(145)
	Float tx0 = tmp6;		HX_STACK_VAR(tx0,"tx0");
	HX_STACK_LINE(146)
	Float tx1 = tx0;		HX_STACK_VAR(tx1,"tx1");
	HX_STACK_LINE(147)
	Float tmp7 = m->b;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(147)
	Float tmp8 = this->x;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(147)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(147)
	Float tmp10 = m->d;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(147)
	Float tmp11 = this->y;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(147)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(147)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(147)
	Float ty0 = tmp13;		HX_STACK_VAR(ty0,"ty0");
	HX_STACK_LINE(148)
	Float ty1 = tx0;		HX_STACK_VAR(ty1,"ty1");
	HX_STACK_LINE(150)
	Float tmp14 = m->a;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(150)
	Float tmp15 = this->x;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(150)
	Float tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(150)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(150)
	Float tmp18 = (tmp14 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(150)
	Float tmp19 = m->c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(150)
	Float tmp20 = this->y;		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(150)
	Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(150)
	Float tmp22 = (tmp18 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(150)
	Float tx = tmp22;		HX_STACK_VAR(tx,"tx");
	HX_STACK_LINE(151)
	Float tmp23 = m->b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(151)
	Float tmp24 = this->x;		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(151)
	Float tmp25 = this->width;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(151)
	Float tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(151)
	Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(151)
	Float tmp28 = m->d;		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(151)
	Float tmp29 = this->y;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(151)
	Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(151)
	Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(151)
	Float ty = tmp31;		HX_STACK_VAR(ty,"ty");
	HX_STACK_LINE(152)
	bool tmp32 = (tx < tx0);		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(152)
	if ((tmp32)){
		HX_STACK_LINE(152)
		tx0 = tx;
	}
	HX_STACK_LINE(153)
	bool tmp33 = (ty < ty0);		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(153)
	if ((tmp33)){
		HX_STACK_LINE(153)
		ty0 = ty;
	}
	HX_STACK_LINE(154)
	bool tmp34 = (tx > tx1);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(154)
	if ((tmp34)){
		HX_STACK_LINE(154)
		tx1 = tx;
	}
	HX_STACK_LINE(155)
	bool tmp35 = (ty > ty1);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(155)
	if ((tmp35)){
		HX_STACK_LINE(155)
		ty1 = ty;
	}
	HX_STACK_LINE(157)
	Float tmp36 = m->a;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(157)
	Float tmp37 = this->x;		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(157)
	Float tmp38 = this->width;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(157)
	Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(157)
	Float tmp40 = (tmp36 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(157)
	Float tmp41 = m->c;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(157)
	Float tmp42 = this->y;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(157)
	Float tmp43 = this->height;		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(157)
	Float tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(157)
	Float tmp45 = (tmp41 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(157)
	Float tmp46 = (tmp40 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(157)
	tx = tmp46;
	HX_STACK_LINE(158)
	Float tmp47 = m->b;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(158)
	Float tmp48 = this->x;		HX_STACK_VAR(tmp48,"tmp48");
	HX_STACK_LINE(158)
	Float tmp49 = this->width;		HX_STACK_VAR(tmp49,"tmp49");
	HX_STACK_LINE(158)
	Float tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
	HX_STACK_LINE(158)
	Float tmp51 = (tmp47 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
	HX_STACK_LINE(158)
	Float tmp52 = m->d;		HX_STACK_VAR(tmp52,"tmp52");
	HX_STACK_LINE(158)
	Float tmp53 = this->y;		HX_STACK_VAR(tmp53,"tmp53");
	HX_STACK_LINE(158)
	Float tmp54 = this->height;		HX_STACK_VAR(tmp54,"tmp54");
	HX_STACK_LINE(158)
	Float tmp55 = (tmp53 + tmp54);		HX_STACK_VAR(tmp55,"tmp55");
	HX_STACK_LINE(158)
	Float tmp56 = (tmp52 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
	HX_STACK_LINE(158)
	Float tmp57 = (tmp51 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
	HX_STACK_LINE(158)
	ty = tmp57;
	HX_STACK_LINE(159)
	bool tmp58 = (tx < tx0);		HX_STACK_VAR(tmp58,"tmp58");
	HX_STACK_LINE(159)
	if ((tmp58)){
		HX_STACK_LINE(159)
		tx0 = tx;
	}
	HX_STACK_LINE(160)
	bool tmp59 = (ty < ty0);		HX_STACK_VAR(tmp59,"tmp59");
	HX_STACK_LINE(160)
	if ((tmp59)){
		HX_STACK_LINE(160)
		ty0 = ty;
	}
	HX_STACK_LINE(161)
	bool tmp60 = (tx > tx1);		HX_STACK_VAR(tmp60,"tmp60");
	HX_STACK_LINE(161)
	if ((tmp60)){
		HX_STACK_LINE(161)
		tx1 = tx;
	}
	HX_STACK_LINE(162)
	bool tmp61 = (ty > ty1);		HX_STACK_VAR(tmp61,"tmp61");
	HX_STACK_LINE(162)
	if ((tmp61)){
		HX_STACK_LINE(162)
		ty1 = ty;
	}
	HX_STACK_LINE(164)
	Float tmp62 = m->a;		HX_STACK_VAR(tmp62,"tmp62");
	HX_STACK_LINE(164)
	Float tmp63 = this->x;		HX_STACK_VAR(tmp63,"tmp63");
	HX_STACK_LINE(164)
	Float tmp64 = (tmp62 * tmp63);		HX_STACK_VAR(tmp64,"tmp64");
	HX_STACK_LINE(164)
	Float tmp65 = m->c;		HX_STACK_VAR(tmp65,"tmp65");
	HX_STACK_LINE(164)
	Float tmp66 = this->y;		HX_STACK_VAR(tmp66,"tmp66");
	HX_STACK_LINE(164)
	Float tmp67 = this->height;		HX_STACK_VAR(tmp67,"tmp67");
	HX_STACK_LINE(164)
	Float tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
	HX_STACK_LINE(164)
	Float tmp69 = (tmp65 * tmp68);		HX_STACK_VAR(tmp69,"tmp69");
	HX_STACK_LINE(164)
	Float tmp70 = (tmp64 + tmp69);		HX_STACK_VAR(tmp70,"tmp70");
	HX_STACK_LINE(164)
	tx = tmp70;
	HX_STACK_LINE(165)
	Float tmp71 = m->b;		HX_STACK_VAR(tmp71,"tmp71");
	HX_STACK_LINE(165)
	Float tmp72 = this->x;		HX_STACK_VAR(tmp72,"tmp72");
	HX_STACK_LINE(165)
	Float tmp73 = (tmp71 * tmp72);		HX_STACK_VAR(tmp73,"tmp73");
	HX_STACK_LINE(165)
	Float tmp74 = m->d;		HX_STACK_VAR(tmp74,"tmp74");
	HX_STACK_LINE(165)
	Float tmp75 = this->y;		HX_STACK_VAR(tmp75,"tmp75");
	HX_STACK_LINE(165)
	Float tmp76 = this->height;		HX_STACK_VAR(tmp76,"tmp76");
	HX_STACK_LINE(165)
	Float tmp77 = (tmp75 + tmp76);		HX_STACK_VAR(tmp77,"tmp77");
	HX_STACK_LINE(165)
	Float tmp78 = (tmp74 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
	HX_STACK_LINE(165)
	Float tmp79 = (tmp73 + tmp78);		HX_STACK_VAR(tmp79,"tmp79");
	HX_STACK_LINE(165)
	ty = tmp79;
	HX_STACK_LINE(166)
	bool tmp80 = (tx < tx0);		HX_STACK_VAR(tmp80,"tmp80");
	HX_STACK_LINE(166)
	if ((tmp80)){
		HX_STACK_LINE(166)
		tx0 = tx;
	}
	HX_STACK_LINE(167)
	bool tmp81 = (ty < ty0);		HX_STACK_VAR(tmp81,"tmp81");
	HX_STACK_LINE(167)
	if ((tmp81)){
		HX_STACK_LINE(167)
		ty0 = ty;
	}
	HX_STACK_LINE(168)
	bool tmp82 = (tx > tx1);		HX_STACK_VAR(tmp82,"tmp82");
	HX_STACK_LINE(168)
	if ((tmp82)){
		HX_STACK_LINE(168)
		tx1 = tx;
	}
	HX_STACK_LINE(169)
	bool tmp83 = (ty > ty1);		HX_STACK_VAR(tmp83,"tmp83");
	HX_STACK_LINE(169)
	if ((tmp83)){
		HX_STACK_LINE(169)
		ty1 = ty;
	}
	HX_STACK_LINE(171)
	Float tmp84 = (tx0 + m->tx);		HX_STACK_VAR(tmp84,"tmp84");
	HX_STACK_LINE(171)
	Float tmp85 = (ty0 + m->ty);		HX_STACK_VAR(tmp85,"tmp85");
	HX_STACK_LINE(171)
	Float tmp86 = (tx1 - tx0);		HX_STACK_VAR(tmp86,"tmp86");
	HX_STACK_LINE(171)
	Float tmp87 = (ty1 - ty0);		HX_STACK_VAR(tmp87,"tmp87");
	HX_STACK_LINE(171)
	::nme::geom::Rectangle tmp88 = ::nme::geom::Rectangle_obj::__new(tmp84,tmp85,tmp86,tmp87);		HX_STACK_VAR(tmp88,"tmp88");
	HX_STACK_LINE(171)
	return tmp88;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,transform,return )

::nme::geom::Rectangle Rectangle_obj::_union( ::nme::geom::Rectangle toUnion){
	HX_STACK_FRAME("nme.geom.Rectangle","union",0x610dcbe6,"nme.geom.Rectangle.union","nme/geom/Rectangle.hx",175,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toUnion,"toUnion")
	HX_STACK_LINE(176)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(176)
	Float tmp1 = toUnion->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(176)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(176)
	if ((tmp2)){
		HX_STACK_LINE(176)
		tmp3 = toUnion->x;
	}
	else{
		HX_STACK_LINE(176)
		tmp3 = this->x;
	}
	HX_STACK_LINE(176)
	Float x0 = tmp3;		HX_STACK_VAR(x0,"x0");
	HX_STACK_LINE(177)
	Float tmp4 = this->get_right();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(177)
	Float tmp5 = toUnion->get_right();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(177)
	bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(177)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(177)
	if ((tmp6)){
		HX_STACK_LINE(177)
		tmp7 = toUnion->get_right();
	}
	else{
		HX_STACK_LINE(177)
		tmp7 = this->get_right();
	}
	HX_STACK_LINE(177)
	Float x1 = tmp7;		HX_STACK_VAR(x1,"x1");
	HX_STACK_LINE(178)
	Float tmp8 = this->y;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(178)
	Float tmp9 = toUnion->y;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(178)
	bool tmp10 = (tmp8 > tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(178)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(178)
	if ((tmp10)){
		HX_STACK_LINE(178)
		tmp11 = toUnion->y;
	}
	else{
		HX_STACK_LINE(178)
		tmp11 = this->y;
	}
	HX_STACK_LINE(178)
	Float y0 = tmp11;		HX_STACK_VAR(y0,"y0");
	HX_STACK_LINE(179)
	Float tmp12 = this->get_bottom();		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(179)
	Float tmp13 = toUnion->get_bottom();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(179)
	bool tmp14 = (tmp12 < tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(179)
	Float tmp15;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(179)
	if ((tmp14)){
		HX_STACK_LINE(179)
		tmp15 = toUnion->get_bottom();
	}
	else{
		HX_STACK_LINE(179)
		tmp15 = this->get_bottom();
	}
	HX_STACK_LINE(179)
	Float y1 = tmp15;		HX_STACK_VAR(y1,"y1");
	HX_STACK_LINE(180)
	Float tmp16 = x0;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(180)
	Float tmp17 = y0;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(180)
	Float tmp18 = (x1 - x0);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(180)
	Float tmp19 = (y1 - y0);		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(180)
	::nme::geom::Rectangle tmp20 = ::nme::geom::Rectangle_obj::__new(tmp16,tmp17,tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(180)
	return tmp20;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,_union,return )

Float Rectangle_obj::get_bottom( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_bottom",0x6fa2c47d,"nme.geom.Rectangle.get_bottom","nme/geom/Rectangle.hx",184,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(184)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(184)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(184)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(184)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottom,return )

Float Rectangle_obj::set_bottom( Float b){
	HX_STACK_FRAME("nme.geom.Rectangle","set_bottom",0x732062f1,"nme.geom.Rectangle.set_bottom","nme/geom/Rectangle.hx",185,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(185)
	Float tmp = b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(185)
	this->height = tmp2;
	HX_STACK_LINE(185)
	Float tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(185)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottom,return )

::nme::geom::Point Rectangle_obj::get_bottomRight( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_bottomRight",0x0f04521f,"nme.geom.Rectangle.get_bottomRight","nme/geom/Rectangle.hx",186,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(186)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(186)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(186)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(186)
	Float tmp3 = this->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(186)
	Float tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(186)
	Float tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(186)
	::nme::geom::Point tmp6 = ::nme::geom::Point_obj::__new(tmp2,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(186)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_bottomRight,return )

::nme::geom::Point Rectangle_obj::set_bottomRight( ::nme::geom::Point p){
	HX_STACK_FRAME("nme.geom.Rectangle","set_bottomRight",0x0acfcf2b,"nme.geom.Rectangle.set_bottomRight","nme/geom/Rectangle.hx",187,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(187)
	Float tmp = p->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(187)
	this->width = tmp2;
	HX_STACK_LINE(187)
	Float tmp3 = p->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(187)
	Float tmp4 = this->y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(187)
	Float tmp5 = (tmp3 - tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(187)
	this->height = tmp5;
	HX_STACK_LINE(187)
	::nme::geom::Point tmp6 = p->clone();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(187)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_bottomRight,return )

Float Rectangle_obj::get_left( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_left",0x62e4fd19,"nme.geom.Rectangle.get_left","nme/geom/Rectangle.hx",188,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(188)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(188)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_left,return )

Float Rectangle_obj::set_left( Float l){
	HX_STACK_FRAME("nme.geom.Rectangle","set_left",0x1142568d,"nme.geom.Rectangle.set_left","nme/geom/Rectangle.hx",189,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(189)
	Float tmp = l;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(189)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(189)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(189)
	hx::SubEq(this->width,tmp2);
	HX_STACK_LINE(189)
	this->x = l;
	HX_STACK_LINE(189)
	Float tmp3 = l;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(189)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_left,return )

Float Rectangle_obj::get_right( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_right",0x9c85868a,"nme.geom.Rectangle.get_right","nme/geom/Rectangle.hx",190,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	Float tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	Float tmp2 = (tmp + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_right,return )

Float Rectangle_obj::set_right( Float r){
	HX_STACK_FRAME("nme.geom.Rectangle","set_right",0x7fd67296,"nme.geom.Rectangle.set_right","nme/geom/Rectangle.hx",191,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(191)
	Float tmp = r;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(191)
	Float tmp1 = this->x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(191)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(191)
	this->width = tmp2;
	HX_STACK_LINE(191)
	Float tmp3 = r;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(191)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_right,return )

::nme::geom::Point Rectangle_obj::get_size( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_size",0x678895d3,"nme.geom.Rectangle.get_size","nme/geom/Rectangle.hx",192,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(192)
	Float tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	Float tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::nme::geom::Point tmp2 = ::nme::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(192)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_size,return )

::nme::geom::Point Rectangle_obj::set_size( ::nme::geom::Point p){
	HX_STACK_FRAME("nme.geom.Rectangle","set_size",0x15e5ef47,"nme.geom.Rectangle.set_size","nme/geom/Rectangle.hx",193,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(193)
	this->width = p->x;
	HX_STACK_LINE(193)
	this->height = p->y;
	HX_STACK_LINE(193)
	::nme::geom::Point tmp = p->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(193)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_size,return )

Float Rectangle_obj::get_top( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_top",0x847c39c3,"nme.geom.Rectangle.get_top","nme/geom/Rectangle.hx",194,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(194)
	Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(194)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_top,return )

Float Rectangle_obj::set_top( Float t){
	HX_STACK_FRAME("nme.geom.Rectangle","set_top",0x777dcacf,"nme.geom.Rectangle.set_top","nme/geom/Rectangle.hx",195,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(195)
	Float tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(195)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(195)
	Float tmp2 = (tmp - tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(195)
	hx::SubEq(this->height,tmp2);
	HX_STACK_LINE(195)
	this->y = t;
	HX_STACK_LINE(195)
	Float tmp3 = t;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(195)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_top,return )

::nme::geom::Point Rectangle_obj::get_topLeft( ){
	HX_STACK_FRAME("nme.geom.Rectangle","get_topLeft",0xc3390b6a,"nme.geom.Rectangle.get_topLeft","nme/geom/Rectangle.hx",196,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	Float tmp = this->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(196)
	Float tmp1 = this->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(196)
	::nme::geom::Point tmp2 = ::nme::geom::Point_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(196)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Rectangle_obj,get_topLeft,return )

::nme::geom::Point Rectangle_obj::set_topLeft( ::nme::geom::Point p){
	HX_STACK_FRAME("nme.geom.Rectangle","set_topLeft",0xcda61276,"nme.geom.Rectangle.set_topLeft","nme/geom/Rectangle.hx",197,0xe4dfc439)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(197)
	this->x = p->x;
	HX_STACK_LINE(197)
	this->y = p->y;
	HX_STACK_LINE(197)
	::nme::geom::Point tmp = p->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(197)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(Rectangle_obj,set_topLeft,return )


Rectangle_obj::Rectangle_obj()
{
}

Dynamic Rectangle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp != hx::paccNever) return get_top(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp != hx::paccNever) return get_left(); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp != hx::paccNever) return get_size(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp != hx::paccNever) return get_right(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"union") ) { return _union_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp != hx::paccNever) return get_bottom(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp != hx::paccNever) return get_topLeft(); }
		if (HX_FIELD_EQ(inName,"inflate") ) { return inflate_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return isEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_top") ) { return get_top_dyn(); }
		if (HX_FIELD_EQ(inName,"set_top") ) { return set_top_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"setEmpty") ) { return setEmpty_dyn(); }
		if (HX_FIELD_EQ(inName,"get_left") ) { return get_left_dyn(); }
		if (HX_FIELD_EQ(inName,"set_left") ) { return set_left_dyn(); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return get_size_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return transform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_right") ) { return get_right_dyn(); }
		if (HX_FIELD_EQ(inName,"set_right") ) { return set_right_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"intersects") ) { return intersects_dyn(); }
		if (HX_FIELD_EQ(inName,"get_bottom") ) { return get_bottom_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottom") ) { return set_bottom_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp != hx::paccNever) return get_bottomRight(); }
		if (HX_FIELD_EQ(inName,"offsetPoint") ) { return offsetPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"get_topLeft") ) { return get_topLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"set_topLeft") ) { return set_topLeft_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"containsRect") ) { return containsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"extendBounds") ) { return extendBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"inflatePoint") ) { return inflatePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"intersection") ) { return intersection_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"containsPoint") ) { return containsPoint_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_bottomRight") ) { return get_bottomRight_dyn(); }
		if (HX_FIELD_EQ(inName,"set_bottomRight") ) { return set_bottomRight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Rectangle_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { if (inCallProp != hx::paccNever) return set_top(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { if (inCallProp != hx::paccNever) return set_left(inValue); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp != hx::paccNever) return set_size(inValue); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { if (inCallProp != hx::paccNever) return set_right(inValue); }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bottom") ) { if (inCallProp != hx::paccNever) return set_bottom(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { if (inCallProp != hx::paccNever) return set_topLeft(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bottomRight") ) { if (inCallProp != hx::paccNever) return set_bottomRight(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Rectangle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bottom","\xeb","\xe6","\x78","\x65"));
	outFields->push(HX_HCSTRING("bottomRight","\xf1","\xa0","\xf4","\x4e"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("left","\x07","\x08","\xb0","\x47"));
	outFields->push(HX_HCSTRING("right","\xdc","\x0b","\x64","\xe9"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	outFields->push(HX_HCSTRING("top","\x95","\x66","\x58","\x00"));
	outFields->push(HX_HCSTRING("topLeft","\x3c","\x09","\xc1","\xe8"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Rectangle_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Rectangle_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("containsPoint","\xb1","\xb9","\xeb","\x92"),
	HX_HCSTRING("containsRect","\xe3","\xce","\x1c","\xa6"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	HX_HCSTRING("extendBounds","\xef","\xab","\x86","\x20"),
	HX_HCSTRING("inflate","\x87","\x9c","\x1b","\x0c"),
	HX_HCSTRING("inflatePoint","\x49","\xbe","\x39","\x32"),
	HX_HCSTRING("intersection","\x49","\xa2","\x61","\x88"),
	HX_HCSTRING("intersects","\xb4","\xc2","\xeb","\xe3"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("offset","\x93","\x97","\x3f","\x60"),
	HX_HCSTRING("offsetPoint","\xbd","\x37","\x10","\x5f"),
	HX_HCSTRING("setEmpty","\x8b","\xa3","\x0e","\x7e"),
	HX_HCSTRING("transform","\x6c","\x2d","\x93","\x45"),
	HX_HCSTRING("union","\x0f","\x65","\xe7","\xa6"),
	HX_HCSTRING("get_bottom","\xb4","\x56","\x00","\x56"),
	HX_HCSTRING("set_bottom","\x28","\xf5","\x7d","\x59"),
	HX_HCSTRING("get_bottomRight","\x88","\x58","\xd6","\x0f"),
	HX_HCSTRING("set_bottomRight","\x94","\xd5","\xa1","\x0b"),
	HX_HCSTRING("get_left","\x90","\xc3","\x6a","\xc7"),
	HX_HCSTRING("set_left","\x04","\x1d","\xc8","\x75"),
	HX_HCSTRING("get_right","\x33","\x68","\x0d","\x2d"),
	HX_HCSTRING("set_right","\x3f","\x54","\x5e","\x10"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("set_size","\xbe","\xb5","\x6b","\x7a"),
	HX_HCSTRING("get_top","\x2c","\x2f","\xcd","\x26"),
	HX_HCSTRING("set_top","\x38","\xc0","\xce","\x19"),
	HX_HCSTRING("get_topLeft","\x53","\x69","\xbb","\x6e"),
	HX_HCSTRING("set_topLeft","\x5f","\x70","\x28","\x79"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Rectangle_obj::__mClass,"__mClass");
};

#endif

hx::Class Rectangle_obj::__mClass;

void Rectangle_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.geom.Rectangle","\x05","\x7c","\x0b","\x86");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Rectangle_obj >;
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

} // end namespace nme
} // end namespace geom
