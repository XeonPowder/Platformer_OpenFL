#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
namespace nme{
namespace geom{

Void Matrix_obj::__construct(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty)
{
HX_STACK_FRAME("nme.geom.Matrix","new",0xff26bf1d,"nme.geom.Matrix.new","nme/geom/Matrix.hx",22,0x6fac6a93)
HX_STACK_THIS(this)
HX_STACK_ARG(in_a,"in_a")
HX_STACK_ARG(in_b,"in_b")
HX_STACK_ARG(in_c,"in_c")
HX_STACK_ARG(in_d,"in_d")
HX_STACK_ARG(in_tx,"in_tx")
HX_STACK_ARG(in_ty,"in_ty")
{
	HX_STACK_LINE(23)
	bool tmp = (in_a == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	if ((tmp)){
		HX_STACK_LINE(23)
		tmp1 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(23)
		tmp1 = in_a;
	}
	HX_STACK_LINE(23)
	this->a = tmp1;
	HX_STACK_LINE(24)
	bool tmp2 = (in_b == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(24)
	Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	if ((tmp2)){
		HX_STACK_LINE(24)
		tmp3 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(24)
		tmp3 = in_b;
	}
	HX_STACK_LINE(24)
	this->b = tmp3;
	HX_STACK_LINE(25)
	bool tmp4 = (in_c == null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(25)
	if ((tmp4)){
		HX_STACK_LINE(25)
		tmp5 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(25)
		tmp5 = in_c;
	}
	HX_STACK_LINE(25)
	this->c = tmp5;
	HX_STACK_LINE(26)
	bool tmp6 = (in_d == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(26)
	Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(26)
	if ((tmp6)){
		HX_STACK_LINE(26)
		tmp7 = ((Float)1.0);
	}
	else{
		HX_STACK_LINE(26)
		tmp7 = in_d;
	}
	HX_STACK_LINE(26)
	this->d = tmp7;
	HX_STACK_LINE(27)
	bool tmp8 = (in_tx == null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(27)
	Float tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(27)
	if ((tmp8)){
		HX_STACK_LINE(27)
		tmp9 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(27)
		tmp9 = in_tx;
	}
	HX_STACK_LINE(27)
	this->tx = tmp9;
	HX_STACK_LINE(28)
	bool tmp10 = (in_ty == null());		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(28)
	Float tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(28)
	if ((tmp10)){
		HX_STACK_LINE(28)
		tmp11 = ((Float)0.0);
	}
	else{
		HX_STACK_LINE(28)
		tmp11 = in_ty;
	}
	HX_STACK_LINE(28)
	this->ty = tmp11;
}
;
	return null();
}

//Matrix_obj::~Matrix_obj() { }

Dynamic Matrix_obj::__CreateEmpty() { return  new Matrix_obj; }
hx::ObjectPtr< Matrix_obj > Matrix_obj::__new(Dynamic in_a,Dynamic in_b,Dynamic in_c,Dynamic in_d,Dynamic in_tx,Dynamic in_ty)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(in_a,in_b,in_c,in_d,in_tx,in_ty);
	return _result_;}

Dynamic Matrix_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Matrix_obj > _result_ = new Matrix_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

::nme::geom::Matrix Matrix_obj::clone( ){
	HX_STACK_FRAME("nme.geom.Matrix","clone",0xd4dceb5a,"nme.geom.Matrix.clone","nme/geom/Matrix.hx",32,0x6fac6a93)
	HX_STACK_THIS(this)
	HX_STACK_LINE(33)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(33)
	Float tmp1 = this->b;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(33)
	Float tmp2 = this->c;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(33)
	Float tmp3 = this->d;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(33)
	Float tmp4 = this->tx;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(33)
	Float tmp5 = this->ty;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(33)
	::nme::geom::Matrix tmp6 = ::nme::geom::Matrix_obj::__new(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(33)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,clone,return )

Void Matrix_obj::concat( ::nme::geom::Matrix m){
{
		HX_STACK_FRAME("nme.geom.Matrix","concat",0x25f32e77,"nme.geom.Matrix.concat","nme/geom/Matrix.hx",49,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(m,"m")
		HX_STACK_LINE(50)
		Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		Float tmp1 = m->a;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		Float tmp4 = m->c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(50)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(50)
		Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(50)
		Float a1 = tmp6;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(51)
		Float tmp7 = this->a;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		Float tmp8 = m->b;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(51)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(51)
		Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(51)
		Float tmp11 = m->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(51)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(51)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(51)
		this->b = tmp13;
		HX_STACK_LINE(52)
		this->a = a1;
		HX_STACK_LINE(54)
		Float tmp14 = this->c;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(54)
		Float tmp15 = m->a;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(54)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(54)
		Float tmp17 = this->d;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(54)
		Float tmp18 = m->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(54)
		Float tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(54)
		Float tmp20 = (tmp16 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(54)
		Float c1 = tmp20;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(55)
		Float tmp21 = this->c;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(55)
		Float tmp22 = m->b;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(55)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(55)
		Float tmp24 = this->d;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(55)
		Float tmp25 = m->d;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(55)
		Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(55)
		Float tmp27 = (tmp23 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(55)
		this->d = tmp27;
		HX_STACK_LINE(57)
		this->c = c1;
		HX_STACK_LINE(59)
		Float tmp28 = this->tx;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(59)
		Float tmp29 = m->a;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(59)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(59)
		Float tmp31 = this->ty;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(59)
		Float tmp32 = m->c;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(59)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(59)
		Float tmp34 = (tmp30 + tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(59)
		Float tmp35 = m->tx;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(59)
		Float tmp36 = (tmp34 + tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(59)
		Float tx1 = tmp36;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(60)
		Float tmp37 = this->tx;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(60)
		Float tmp38 = m->b;		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(60)
		Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(60)
		Float tmp40 = this->ty;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(60)
		Float tmp41 = m->d;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(60)
		Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(60)
		Float tmp43 = (tmp39 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(60)
		Float tmp44 = m->ty;		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(60)
		Float tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(60)
		this->ty = tmp45;
		HX_STACK_LINE(61)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,concat,(void))

Void Matrix_obj::createBox( Float scaleX,Float scaleY,Dynamic rotation,Dynamic tx,Dynamic ty){
{
		HX_STACK_FRAME("nme.geom.Matrix","createBox",0xd9eaaeec,"nme.geom.Matrix.createBox","nme/geom/Matrix.hx",65,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scaleX,"scaleX")
		HX_STACK_ARG(scaleY,"scaleY")
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(66)
		this->a = scaleX;
		HX_STACK_LINE(67)
		this->d = scaleY;
		HX_STACK_LINE(68)
		bool tmp = (rotation == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		if ((tmp)){
			HX_STACK_LINE(68)
			tmp1 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(68)
			tmp1 = rotation;
		}
		HX_STACK_LINE(68)
		this->b = tmp1;
		HX_STACK_LINE(69)
		bool tmp2 = (tx == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(69)
		Float tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(69)
		if ((tmp2)){
			HX_STACK_LINE(69)
			tmp3 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(69)
			tmp3 = tx;
		}
		HX_STACK_LINE(69)
		this->tx = tmp3;
		HX_STACK_LINE(70)
		bool tmp4 = (ty == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		if ((tmp4)){
			HX_STACK_LINE(70)
			tmp5 = ((Float)0.0);
		}
		else{
			HX_STACK_LINE(70)
			tmp5 = ty;
		}
		HX_STACK_LINE(70)
		this->ty = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createBox,(void))

Void Matrix_obj::createGradientBox( Float in_width,Float in_height,Dynamic rotation,Dynamic in_tx,Dynamic in_ty){
{
		HX_STACK_FRAME("nme.geom.Matrix","createGradientBox",0x9c5d4bdc,"nme.geom.Matrix.createGradientBox","nme/geom/Matrix.hx",74,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(in_width,"in_width")
		HX_STACK_ARG(in_height,"in_height")
		HX_STACK_ARG(rotation,"rotation")
		HX_STACK_ARG(in_tx,"in_tx")
		HX_STACK_ARG(in_ty,"in_ty")
		HX_STACK_LINE(75)
		Float tmp = (Float(in_width) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		this->a = tmp;
		HX_STACK_LINE(76)
		Float tmp1 = (Float(in_height) / Float(((Float)1638.4)));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(76)
		this->d = tmp1;
		HX_STACK_LINE(79)
		bool tmp2 = (rotation != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(79)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(79)
		if ((tmp2)){
			HX_STACK_LINE(79)
			tmp3 = (rotation != ((Float)0.0));
		}
		else{
			HX_STACK_LINE(79)
			tmp3 = false;
		}
		HX_STACK_LINE(79)
		if ((tmp3)){
			HX_STACK_LINE(81)
			Dynamic tmp4 = rotation;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(81)
			Float tmp5 = ::Math_obj::cos(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(81)
			Float cos = tmp5;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(82)
			Dynamic tmp6 = rotation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(82)
			Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(82)
			Float sin = tmp7;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(83)
			Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(83)
			Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(83)
			Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(83)
			this->b = tmp10;
			HX_STACK_LINE(84)
			Float tmp11 = sin;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(84)
			Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(84)
			Float tmp13 = this->a;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			this->c = tmp14;
			HX_STACK_LINE(85)
			hx::MultEq(this->a,cos);
			HX_STACK_LINE(86)
			hx::MultEq(this->d,cos);
		}
		else{
			HX_STACK_LINE(90)
			Float tmp4 = this->c = (int)0;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(90)
			this->b = tmp4;
		}
		HX_STACK_LINE(93)
		bool tmp4 = (in_tx != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(93)
		Float tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(93)
		if ((tmp4)){
			HX_STACK_LINE(93)
			Dynamic tmp6 = in_tx;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(93)
			Float tmp7 = (Float(in_width) / Float((int)2));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			tmp5 = (tmp6 + tmp7);
		}
		else{
			HX_STACK_LINE(93)
			tmp5 = (Float(in_width) / Float((int)2));
		}
		HX_STACK_LINE(93)
		this->tx = tmp5;
		HX_STACK_LINE(94)
		bool tmp6 = (in_ty != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(94)
		Float tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(94)
		if ((tmp6)){
			HX_STACK_LINE(94)
			Dynamic tmp8 = in_ty;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(94)
			Float tmp9 = (Float(in_height) / Float((int)2));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(94)
			tmp7 = (tmp8 + tmp9);
		}
		else{
			HX_STACK_LINE(94)
			tmp7 = (Float(in_height) / Float((int)2));
		}
		HX_STACK_LINE(94)
		this->ty = tmp7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Matrix_obj,createGradientBox,(void))

::nme::geom::Point Matrix_obj::deltaTransformPoint( ::nme::geom::Point point){
	HX_STACK_FRAME("nme.geom.Matrix","deltaTransformPoint",0xb4084619,"nme.geom.Matrix.deltaTransformPoint","nme/geom/Matrix.hx",98,0x6fac6a93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(99)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(99)
	Float tmp3 = point->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(99)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(99)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(99)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(99)
	Float tmp7 = point->x;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	Float tmp8 = this->b;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(99)
	Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(99)
	Float tmp10 = point->y;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(99)
	Float tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(99)
	Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(99)
	Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(99)
	::nme::geom::Point tmp14 = ::nme::geom::Point_obj::__new(tmp6,tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	return tmp14;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,deltaTransformPoint,return )

Void Matrix_obj::identity( ){
{
		HX_STACK_FRAME("nme.geom.Matrix","identity",0x4270c961,"nme.geom.Matrix.identity","nme/geom/Matrix.hx",103,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->a = (int)1;
		HX_STACK_LINE(105)
		this->b = (int)0;
		HX_STACK_LINE(106)
		this->c = (int)0;
		HX_STACK_LINE(107)
		this->d = (int)1;
		HX_STACK_LINE(108)
		this->tx = (int)0;
		HX_STACK_LINE(109)
		this->ty = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,identity,(void))

::nme::geom::Matrix Matrix_obj::invert( ){
	HX_STACK_FRAME("nme.geom.Matrix","invert",0xfdfc0c79,"nme.geom.Matrix.invert","nme/geom/Matrix.hx",113,0x6fac6a93)
	HX_STACK_THIS(this)
	HX_STACK_LINE(114)
	Float tmp = this->a;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	Float tmp1 = this->d;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	Float tmp3 = this->b;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(114)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(114)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(114)
	Float tmp6 = (tmp2 - tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(114)
	Float norm = tmp6;		HX_STACK_VAR(norm,"norm");
	HX_STACK_LINE(116)
	bool tmp7 = (norm == (int)0);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(116)
	if ((tmp7)){
		HX_STACK_LINE(118)
		Float tmp8 = this->d = (int)0;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		Float tmp9 = this->c = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		Float tmp10 = this->b = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(118)
		this->a = tmp10;
		HX_STACK_LINE(119)
		Float tmp11 = this->tx;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		Float tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(119)
		this->tx = tmp12;
		HX_STACK_LINE(120)
		Float tmp13 = this->ty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(120)
		Float tmp14 = -(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(120)
		this->ty = tmp14;
	}
	else{
		HX_STACK_LINE(124)
		Float tmp8 = (Float(((Float)1.0)) / Float(norm));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(124)
		norm = tmp8;
		HX_STACK_LINE(125)
		Float tmp9 = this->d;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(125)
		Float tmp10 = norm;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(125)
		Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(125)
		Float a1 = tmp11;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(126)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(126)
		Float tmp13 = norm;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(126)
		Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(126)
		this->d = tmp14;
		HX_STACK_LINE(127)
		this->a = a1;
		HX_STACK_LINE(128)
		Float tmp15 = norm;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(128)
		Float tmp16 = -(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(128)
		hx::MultEq(this->b,tmp16);
		HX_STACK_LINE(129)
		Float tmp17 = norm;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(129)
		Float tmp18 = -(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(129)
		hx::MultEq(this->c,tmp18);
		HX_STACK_LINE(131)
		Float tmp19 = this->a;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(131)
		Float tmp20 = -(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(131)
		Float tmp21 = this->tx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(131)
		Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(131)
		Float tmp23 = this->c;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(131)
		Float tmp24 = this->ty;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(131)
		Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(131)
		Float tmp26 = (tmp22 - tmp25);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(131)
		Float tx1 = tmp26;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(132)
		Float tmp27 = this->b;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(132)
		Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(132)
		Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(132)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(132)
		Float tmp31 = this->d;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(132)
		Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(132)
		Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(132)
		Float tmp34 = (tmp30 - tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(132)
		this->ty = tmp34;
		HX_STACK_LINE(133)
		this->tx = tx1;
	}
	HX_STACK_LINE(136)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Matrix_obj,invert,return )

::nme::geom::Matrix Matrix_obj::mult( ::nme::geom::Matrix m){
	HX_STACK_FRAME("nme.geom.Matrix","mult",0x42235e93,"nme.geom.Matrix.mult","nme/geom/Matrix.hx",140,0x6fac6a93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(141)
	::nme::geom::Matrix tmp = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(141)
	::nme::geom::Matrix result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(143)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(143)
	Float tmp2 = m->a;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(143)
	Float tmp3 = (tmp1 * tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	Float tmp4 = this->b;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	Float tmp5 = m->c;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(143)
	Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(143)
	Float tmp7 = (tmp3 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(143)
	result->a = tmp7;
	HX_STACK_LINE(144)
	Float tmp8 = this->a;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(144)
	Float tmp9 = m->b;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(144)
	Float tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(144)
	Float tmp11 = this->b;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(144)
	Float tmp12 = m->d;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(144)
	Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(144)
	Float tmp14 = (tmp10 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(144)
	result->b = tmp14;
	HX_STACK_LINE(145)
	Float tmp15 = this->c;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(145)
	Float tmp16 = m->a;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(145)
	Float tmp17 = (tmp15 * tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(145)
	Float tmp18 = this->d;		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(145)
	Float tmp19 = m->c;		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(145)
	Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(145)
	Float tmp21 = (tmp17 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(145)
	result->c = tmp21;
	HX_STACK_LINE(146)
	Float tmp22 = this->c;		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(146)
	Float tmp23 = m->b;		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(146)
	Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(146)
	Float tmp25 = this->d;		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(146)
	Float tmp26 = m->d;		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(146)
	Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(146)
	Float tmp28 = (tmp24 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
	HX_STACK_LINE(146)
	result->d = tmp28;
	HX_STACK_LINE(148)
	Float tmp29 = this->tx;		HX_STACK_VAR(tmp29,"tmp29");
	HX_STACK_LINE(148)
	Float tmp30 = m->a;		HX_STACK_VAR(tmp30,"tmp30");
	HX_STACK_LINE(148)
	Float tmp31 = (tmp29 * tmp30);		HX_STACK_VAR(tmp31,"tmp31");
	HX_STACK_LINE(148)
	Float tmp32 = this->ty;		HX_STACK_VAR(tmp32,"tmp32");
	HX_STACK_LINE(148)
	Float tmp33 = m->c;		HX_STACK_VAR(tmp33,"tmp33");
	HX_STACK_LINE(148)
	Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
	HX_STACK_LINE(148)
	Float tmp35 = (tmp31 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
	HX_STACK_LINE(148)
	Float tmp36 = m->tx;		HX_STACK_VAR(tmp36,"tmp36");
	HX_STACK_LINE(148)
	Float tmp37 = (tmp35 + tmp36);		HX_STACK_VAR(tmp37,"tmp37");
	HX_STACK_LINE(148)
	result->tx = tmp37;
	HX_STACK_LINE(149)
	Float tmp38 = this->tx;		HX_STACK_VAR(tmp38,"tmp38");
	HX_STACK_LINE(149)
	Float tmp39 = m->b;		HX_STACK_VAR(tmp39,"tmp39");
	HX_STACK_LINE(149)
	Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
	HX_STACK_LINE(149)
	Float tmp41 = this->ty;		HX_STACK_VAR(tmp41,"tmp41");
	HX_STACK_LINE(149)
	Float tmp42 = m->d;		HX_STACK_VAR(tmp42,"tmp42");
	HX_STACK_LINE(149)
	Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
	HX_STACK_LINE(149)
	Float tmp44 = (tmp40 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
	HX_STACK_LINE(149)
	Float tmp45 = m->ty;		HX_STACK_VAR(tmp45,"tmp45");
	HX_STACK_LINE(149)
	Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
	HX_STACK_LINE(149)
	result->ty = tmp46;
	HX_STACK_LINE(151)
	::nme::geom::Matrix tmp47 = result;		HX_STACK_VAR(tmp47,"tmp47");
	HX_STACK_LINE(151)
	return tmp47;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,mult,return )

Void Matrix_obj::rotate( Float inTheta){
{
		HX_STACK_FRAME("nme.geom.Matrix","rotate",0x29436bbe,"nme.geom.Matrix.rotate","nme/geom/Matrix.hx",167,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTheta,"inTheta")
		HX_STACK_LINE(168)
		Float tmp = inTheta;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		Float tmp1 = ::Math_obj::cos(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		Float cos = tmp1;		HX_STACK_VAR(cos,"cos");
		HX_STACK_LINE(169)
		Float tmp2 = inTheta;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(169)
		Float tmp3 = ::Math_obj::sin(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(169)
		Float sin = tmp3;		HX_STACK_VAR(sin,"sin");
		HX_STACK_LINE(171)
		Float tmp4 = this->a;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(171)
		Float tmp5 = cos;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(171)
		Float tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(171)
		Float tmp7 = this->b;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(171)
		Float tmp8 = sin;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(171)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(171)
		Float tmp10 = (tmp6 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(171)
		Float a1 = tmp10;		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(172)
		Float tmp11 = this->a;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(172)
		Float tmp12 = sin;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(172)
		Float tmp13 = (tmp11 * tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(172)
		Float tmp14 = this->b;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(172)
		Float tmp15 = cos;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(172)
		Float tmp16 = (tmp14 * tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(172)
		Float tmp17 = (tmp13 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(172)
		this->b = tmp17;
		HX_STACK_LINE(173)
		this->a = a1;
		HX_STACK_LINE(175)
		Float tmp18 = this->c;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(175)
		Float tmp19 = cos;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(175)
		Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(175)
		Float tmp21 = this->d;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(175)
		Float tmp22 = sin;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(175)
		Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(175)
		Float tmp24 = (tmp20 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(175)
		Float c1 = tmp24;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(176)
		Float tmp25 = this->c;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(176)
		Float tmp26 = sin;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(176)
		Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(176)
		Float tmp28 = this->d;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(176)
		Float tmp29 = cos;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(176)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(176)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(176)
		this->d = tmp31;
		HX_STACK_LINE(177)
		this->c = c1;
		HX_STACK_LINE(179)
		Float tmp32 = this->tx;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(179)
		Float tmp33 = cos;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(179)
		Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(179)
		Float tmp35 = this->ty;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(179)
		Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(179)
		Float tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(179)
		Float tmp38 = (tmp34 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(179)
		Float tx1 = tmp38;		HX_STACK_VAR(tx1,"tx1");
		HX_STACK_LINE(180)
		Float tmp39 = this->tx;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(180)
		Float tmp40 = sin;		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(180)
		Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(180)
		Float tmp42 = this->ty;		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(180)
		Float tmp43 = cos;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(180)
		Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(180)
		Float tmp45 = (tmp41 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(180)
		this->ty = tmp45;
		HX_STACK_LINE(181)
		this->tx = tx1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,rotate,(void))

Void Matrix_obj::scale( Float inSX,Float inSY){
{
		HX_STACK_FRAME("nme.geom.Matrix","scale",0x0548a687,"nme.geom.Matrix.scale","nme/geom/Matrix.hx",192,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inSX,"inSX")
		HX_STACK_ARG(inSY,"inSY")
		HX_STACK_LINE(193)
		hx::MultEq(this->a,inSX);
		HX_STACK_LINE(194)
		hx::MultEq(this->b,inSY);
		HX_STACK_LINE(196)
		hx::MultEq(this->c,inSX);
		HX_STACK_LINE(197)
		hx::MultEq(this->d,inSY);
		HX_STACK_LINE(199)
		hx::MultEq(this->tx,inSX);
		HX_STACK_LINE(200)
		hx::MultEq(this->ty,inSY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,scale,(void))

Void Matrix_obj::setRotation( Float inTheta,Dynamic inScale){
{
		HX_STACK_FRAME("nme.geom.Matrix","setRotation",0x85927abd,"nme.geom.Matrix.setRotation","nme/geom/Matrix.hx",204,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inTheta,"inTheta")
		HX_STACK_ARG(inScale,"inScale")
		HX_STACK_LINE(205)
		bool tmp = (inScale == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(205)
		Float tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		if ((tmp)){
			HX_STACK_LINE(205)
			tmp1 = ((Float)1.0);
		}
		else{
			HX_STACK_LINE(205)
			tmp1 = inScale;
		}
		HX_STACK_LINE(205)
		Float scale = tmp1;		HX_STACK_VAR(scale,"scale");
		HX_STACK_LINE(206)
		Float tmp2 = inTheta;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		Float tmp3 = ::Math_obj::cos(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		Float tmp4 = scale;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		this->a = tmp5;
		HX_STACK_LINE(207)
		Float tmp6 = inTheta;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(207)
		Float tmp7 = ::Math_obj::sin(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(207)
		Float tmp8 = scale;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(207)
		Float tmp9 = (tmp7 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(207)
		this->c = tmp9;
		HX_STACK_LINE(208)
		Float tmp10 = this->c;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(208)
		Float tmp11 = -(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(208)
		this->b = tmp11;
		HX_STACK_LINE(209)
		Float tmp12 = this->a;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(209)
		this->d = tmp12;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,setRotation,(void))

Void Matrix_obj::setTo( Float a,Float b,Float c,Float d,Float tx,Float ty){
{
		HX_STACK_FRAME("nme.geom.Matrix","setTo",0x06a969ba,"nme.geom.Matrix.setTo","nme/geom/Matrix.hx",213,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(c,"c")
		HX_STACK_ARG(d,"d")
		HX_STACK_ARG(tx,"tx")
		HX_STACK_ARG(ty,"ty")
		HX_STACK_LINE(214)
		this->a = a;
		HX_STACK_LINE(215)
		this->b = b;
		HX_STACK_LINE(216)
		this->c = c;
		HX_STACK_LINE(217)
		this->d = d;
		HX_STACK_LINE(218)
		this->tx = tx;
		HX_STACK_LINE(219)
		this->ty = ty;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Matrix_obj,setTo,(void))

::nme::geom::Point Matrix_obj::transformPoint( ::nme::geom::Point inPos){
	HX_STACK_FRAME("nme.geom.Matrix","transformPoint",0x6dbd8fa7,"nme.geom.Matrix.transformPoint","nme/geom/Matrix.hx",224,0x6fac6a93)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inPos,"inPos")
	HX_STACK_LINE(225)
	Float tmp = inPos->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	Float tmp1 = this->a;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	Float tmp2 = (tmp * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(225)
	Float tmp3 = inPos->y;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(225)
	Float tmp4 = this->c;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(225)
	Float tmp5 = (tmp3 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(225)
	Float tmp6 = (tmp2 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(225)
	Float tmp7 = this->tx;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(225)
	Float tmp8 = (tmp6 + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(225)
	Float tmp9 = inPos->x;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(225)
	Float tmp10 = this->b;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(225)
	Float tmp11 = (tmp9 * tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(225)
	Float tmp12 = inPos->y;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(225)
	Float tmp13 = this->d;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(225)
	Float tmp14 = (tmp12 * tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(225)
	Float tmp15 = (tmp11 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(225)
	Float tmp16 = this->ty;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(225)
	Float tmp17 = (tmp15 + tmp16);		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(225)
	::nme::geom::Point tmp18 = ::nme::geom::Point_obj::__new(tmp8,tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(225)
	return tmp18;
}


HX_DEFINE_DYNAMIC_FUNC1(Matrix_obj,transformPoint,return )

Void Matrix_obj::translate( Float inDX,Float inDY){
{
		HX_STACK_FRAME("nme.geom.Matrix","translate",0xd991f1cb,"nme.geom.Matrix.translate","nme/geom/Matrix.hx",229,0x6fac6a93)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDX,"inDX")
		HX_STACK_ARG(inDY,"inDY")
		HX_STACK_LINE(230)
		hx::AddEq(this->tx,inDX);
		HX_STACK_LINE(231)
		hx::AddEq(this->ty,inDY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Matrix_obj,translate,(void))


Matrix_obj::Matrix_obj()
{
}

Dynamic Matrix_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"c") ) { return c; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { return tx; }
		if (HX_FIELD_EQ(inName,"ty") ) { return ty; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mult") ) { return mult_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		if (HX_FIELD_EQ(inName,"invert") ) { return invert_dyn(); }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"identity") ) { return identity_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"createBox") ) { return createBox_dyn(); }
		if (HX_FIELD_EQ(inName,"translate") ) { return translate_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setRotation") ) { return setRotation_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"transformPoint") ) { return transformPoint_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"createGradientBox") ) { return createGradientBox_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"deltaTransformPoint") ) { return deltaTransformPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

static int __id_a = __hxcpp_field_to_id("a");
static int __id_b = __hxcpp_field_to_id("b");
static int __id_c = __hxcpp_field_to_id("c");
static int __id_d = __hxcpp_field_to_id("d");
static int __id_tx = __hxcpp_field_to_id("tx");
static int __id_ty = __hxcpp_field_to_id("ty");
static int __id_clone = __hxcpp_field_to_id("clone");
static int __id_concat = __hxcpp_field_to_id("concat");
static int __id_createBox = __hxcpp_field_to_id("createBox");
static int __id_createGradientBox = __hxcpp_field_to_id("createGradientBox");
static int __id_deltaTransformPoint = __hxcpp_field_to_id("deltaTransformPoint");
static int __id_identity = __hxcpp_field_to_id("identity");
static int __id_invert = __hxcpp_field_to_id("invert");
static int __id_mult = __hxcpp_field_to_id("mult");
static int __id_rotate = __hxcpp_field_to_id("rotate");
static int __id_scale = __hxcpp_field_to_id("scale");
static int __id_setRotation = __hxcpp_field_to_id("setRotation");
static int __id_setTo = __hxcpp_field_to_id("setTo");
static int __id_transformPoint = __hxcpp_field_to_id("transformPoint");
static int __id_translate = __hxcpp_field_to_id("translate");


double Matrix_obj::__INumField(int inFieldID)
{
	if (inFieldID==__id_a) return a;
	if (inFieldID==__id_b) return b;
	if (inFieldID==__id_c) return c;
	if (inFieldID==__id_d) return d;
	if (inFieldID==__id_tx) return tx;
	if (inFieldID==__id_ty) return ty;
	return super::__INumField(inFieldID);
}

Dynamic Matrix_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"c") ) { c=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"tx") ) { tx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ty") ) { ty=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Matrix_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("a","\x61","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("c","\x63","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("tx","\x84","\x65","\x00","\x00"));
	outFields->push(HX_HCSTRING("ty","\x85","\x65","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Matrix_obj,a),HX_HCSTRING("a","\x61","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,c),HX_HCSTRING("c","\x63","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,tx),HX_HCSTRING("tx","\x84","\x65","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Matrix_obj,ty),HX_HCSTRING("ty","\x85","\x65","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("a","\x61","\x00","\x00","\x00"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("c","\x63","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("tx","\x84","\x65","\x00","\x00"),
	HX_HCSTRING("ty","\x85","\x65","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("createBox","\x6f","\x94","\xd8","\x49"),
	HX_HCSTRING("createGradientBox","\x5f","\xec","\xc0","\x25"),
	HX_HCSTRING("deltaTransformPoint","\x5c","\x4d","\xf7","\x15"),
	HX_HCSTRING("identity","\x3e","\x45","\x2f","\xb9"),
	HX_HCSTRING("invert","\x16","\xe7","\xd8","\x9f"),
	HX_HCSTRING("mult","\xf0","\x67","\x65","\x48"),
	HX_HCSTRING("rotate","\x5b","\x46","\x20","\xcb"),
	HX_HCSTRING("scale","\x8a","\xce","\xce","\x78"),
	HX_HCSTRING("setRotation","\x00","\x07","\xe7","\x38"),
	HX_HCSTRING("setTo","\xbd","\x91","\x2f","\x7a"),
	HX_HCSTRING("transformPoint","\x44","\xcf","\x11","\x3d"),
	HX_HCSTRING("translate","\x4e","\xd7","\x7f","\x49"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Matrix_obj::__mClass,"__mClass");
};

#endif

hx::Class Matrix_obj::__mClass;

void Matrix_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.geom.Matrix","\xab","\xec","\x7f","\x2e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Matrix_obj >;
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
