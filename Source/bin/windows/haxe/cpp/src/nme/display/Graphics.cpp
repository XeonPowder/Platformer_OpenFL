#include <hxcpp.h>

#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_CapsStyle
#include <nme/display/CapsStyle.h>
#endif
#ifndef INCLUDED_nme_display_GradientType
#include <nme/display/GradientType.h>
#endif
#ifndef INCLUDED_nme_display_Graphics
#include <nme/display/Graphics.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_IGraphicsData
#include <nme/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_nme_display_InterpolationMethod
#include <nme/display/InterpolationMethod.h>
#endif
#ifndef INCLUDED_nme_display_JointStyle
#include <nme/display/JointStyle.h>
#endif
#ifndef INCLUDED_nme_display_LineScaleMode
#include <nme/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_nme_display_SpreadMethod
#include <nme/display/SpreadMethod.h>
#endif
#ifndef INCLUDED_nme_display_Tilesheet
#include <nme/display/Tilesheet.h>
#endif
#ifndef INCLUDED_nme_display_TriangleCulling
#include <nme/display/TriangleCulling.h>
#endif
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
namespace nme{
namespace display{

Void Graphics_obj::__construct(Dynamic inHandle)
{
HX_STACK_FRAME("nme.display.Graphics","new",0x19cad331,"nme.display.Graphics.new","nme/display/Graphics.hx",25,0x344f6f9d)
HX_STACK_THIS(this)
HX_STACK_ARG(inHandle,"inHandle")
{
	HX_STACK_LINE(25)
	this->nmeHandle = inHandle;
}
;
	return null();
}

//Graphics_obj::~Graphics_obj() { }

Dynamic Graphics_obj::__CreateEmpty() { return  new Graphics_obj; }
hx::ObjectPtr< Graphics_obj > Graphics_obj::__new(Dynamic inHandle)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inHandle);
	return _result_;}

Dynamic Graphics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphics_obj > _result_ = new Graphics_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Graphics_obj::arcTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("nme.display.Graphics","arcTo",0xccde197e,"nme.display.Graphics.arcTo","nme/display/Graphics.hx",29,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(30)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(30)
		Float tmp1 = inCX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(30)
		Float tmp2 = inCY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(30)
		Float tmp3 = inX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(30)
		Float tmp4 = inY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(30)
		::nme::display::Graphics_obj::nme_gfx_arc_to(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,arcTo,(void))

Void Graphics_obj::beginBitmapFill( ::nme::display::BitmapData bitmap,::nme::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("nme.display.Graphics","beginBitmapFill",0xcd2041ec,"nme.display.Graphics.beginBitmapFill","nme/display/Graphics.hx",34,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(35)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(35)
		Dynamic tmp1 = bitmap->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(35)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(35)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(35)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(35)
		::nme::display::Graphics_obj::nme_gfx_begin_bitmap_fill(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,beginBitmapFill,(void))

Void Graphics_obj::beginFill( int color,hx::Null< Float >  __o_alpha){
Float alpha = __o_alpha.Default(((Float)1.0));
	HX_STACK_FRAME("nme.display.Graphics","beginFill",0xb74022dd,"nme.display.Graphics.beginFill","nme/display/Graphics.hx",39,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
{
		HX_STACK_LINE(40)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(40)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(40)
		Float tmp2 = alpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		::nme::display::Graphics_obj::nme_gfx_begin_fill(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,beginFill,(void))

Void Graphics_obj::beginGradientFill( ::nme::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::nme::geom::Matrix matrix,::nme::display::SpreadMethod spreadMethod,::nme::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(((Float)0.0));
	HX_STACK_FRAME("nme.display.Graphics","beginGradientFill",0xe2672aed,"nme.display.Graphics.beginGradientFill","nme/display/Graphics.hx",44,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(45)
		bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(45)
		if ((tmp)){
			HX_STACK_LINE(47)
			::nme::geom::Matrix tmp1 = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			matrix = tmp1;
			HX_STACK_LINE(48)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(51)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(51)
		bool tmp3 = (spreadMethod == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(51)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(51)
		if ((tmp3)){
			HX_STACK_LINE(51)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(51)
			tmp4 = spreadMethod->__Index();
		}
		HX_STACK_LINE(51)
		bool tmp5 = (interpolationMethod == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(51)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(51)
		if ((tmp5)){
			HX_STACK_LINE(51)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(51)
			tmp6 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(51)
		Float tmp7 = focalPointRatio;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(51)
		::nme::display::Graphics_obj::nme_gfx_begin_gradient_fill(tmp1,type->__Index(),colors,alphas,ratios,tmp2,tmp4,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,beginGradientFill,(void))

Void Graphics_obj::clear( ){
{
		HX_STACK_FRAME("nme.display.Graphics","clear",0xefb58a9e,"nme.display.Graphics.clear","nme/display/Graphics.hx",55,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(56)
		::nme::display::Graphics_obj::nme_gfx_clear(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,clear,(void))

Void Graphics_obj::curveTo( Float inCX,Float inCY,Float inX,Float inY){
{
		HX_STACK_FRAME("nme.display.Graphics","curveTo",0x93679f5b,"nme.display.Graphics.curveTo","nme/display/Graphics.hx",60,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inCX,"inCX")
		HX_STACK_ARG(inCY,"inCY")
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(61)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		Float tmp1 = inCX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		Float tmp2 = inCY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(61)
		Float tmp3 = inX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(61)
		Float tmp4 = inY;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		::nme::display::Graphics_obj::nme_gfx_curve_to(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,curveTo,(void))

Void Graphics_obj::drawCircle( Float inX,Float inY,Float inRadius){
{
		HX_STACK_FRAME("nme.display.Graphics","drawCircle",0xc24d5683,"nme.display.Graphics.drawCircle","nme/display/Graphics.hx",65,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inRadius,"inRadius")
		HX_STACK_LINE(66)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(66)
		Float tmp1 = (inX - inRadius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		Float tmp2 = (inY - inRadius);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		Float tmp3 = (inRadius * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(66)
		Float tmp4 = (inRadius * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		::nme::display::Graphics_obj::nme_gfx_draw_ellipse(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawCircle,(void))

Void Graphics_obj::drawEllipse( Float inX,Float inY,Float inWidth,Float inHeight){
{
		HX_STACK_FRAME("nme.display.Graphics","drawEllipse",0x572e410b,"nme.display.Graphics.drawEllipse","nme/display/Graphics.hx",70,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_LINE(71)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(71)
		Float tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(71)
		Float tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(71)
		Float tmp3 = inWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(71)
		Float tmp4 = inHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		::nme::display::Graphics_obj::nme_gfx_draw_ellipse(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawEllipse,(void))

Void Graphics_obj::drawGraphicsData( Array< ::Dynamic > graphicsData){
{
		HX_STACK_FRAME("nme.display.Graphics","drawGraphicsData",0xb2bf7948,"nme.display.Graphics.drawGraphicsData","nme/display/Graphics.hx",75,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_LINE(76)
		cpp::ArrayBase handles = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(handles,"handles");
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				bool tmp = (_g < graphicsData->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(78)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(78)
				if ((tmp1)){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				::nme::display::IGraphicsData tmp2 = graphicsData->__get(_g).StaticCast< ::nme::display::IGraphicsData >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(78)
				::nme::display::IGraphicsData datum = tmp2;		HX_STACK_VAR(datum,"datum");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(79)
				Dynamic tmp3 = datum->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(79)
				handles->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp3);
			}
		}
		HX_STACK_LINE(81)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		::nme::display::Graphics_obj::nme_gfx_draw_data(tmp,handles);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsData,(void))

Void Graphics_obj::drawGraphicsDatum( ::nme::display::IGraphicsData graphicsDatum){
{
		HX_STACK_FRAME("nme.display.Graphics","drawGraphicsDatum",0xb4cab791,"nme.display.Graphics.drawGraphicsDatum","nme/display/Graphics.hx",85,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsDatum,"graphicsDatum")
		HX_STACK_LINE(86)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		Dynamic tmp1 = graphicsDatum->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		::nme::display::Graphics_obj::nme_gfx_draw_datum(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphics_obj,drawGraphicsDatum,(void))

Void Graphics_obj::drawPoints( Array< Float > inXY,Array< int > inPointRGBA,hx::Null< int >  __o_inDefaultRGBA,hx::Null< Float >  __o_inSize){
int inDefaultRGBA = __o_inDefaultRGBA.Default(-1);
Float inSize = __o_inSize.Default(((Float)-1.0));
	HX_STACK_FRAME("nme.display.Graphics","drawPoints",0x636df696,"nme.display.Graphics.drawPoints","nme/display/Graphics.hx",90,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inXY,"inXY")
	HX_STACK_ARG(inPointRGBA,"inPointRGBA")
	HX_STACK_ARG(inDefaultRGBA,"inDefaultRGBA")
	HX_STACK_ARG(inSize,"inSize")
{
		HX_STACK_LINE(91)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		int tmp1 = inDefaultRGBA;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Float tmp2 = inSize;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		::nme::display::Graphics_obj::nme_gfx_draw_points(tmp,inXY,inPointRGBA,tmp1,false,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawPoints,(void))

Void Graphics_obj::drawRect( Float inX,Float inY,Float inWidth,Float inHeight){
{
		HX_STACK_FRAME("nme.display.Graphics","drawRect",0xde891ed7,"nme.display.Graphics.drawRect","nme/display/Graphics.hx",95,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_LINE(96)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(96)
		Float tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(96)
		Float tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(96)
		Float tmp3 = inWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		Float tmp4 = inHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(96)
		::nme::display::Graphics_obj::nme_gfx_draw_rect(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,drawRect,(void))

Void Graphics_obj::drawRoundRect( Float inX,Float inY,Float inWidth,Float inHeight,Float inRadX,Dynamic inRadY){
{
		HX_STACK_FRAME("nme.display.Graphics","drawRoundRect",0x094dd5ff,"nme.display.Graphics.drawRoundRect","nme/display/Graphics.hx",100,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inWidth,"inWidth")
		HX_STACK_ARG(inHeight,"inHeight")
		HX_STACK_ARG(inRadX,"inRadX")
		HX_STACK_ARG(inRadY,"inRadY")
		HX_STACK_LINE(101)
		bool tmp = (inRadX == (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(101)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(101)
		if ((tmp1)){
			HX_STACK_LINE(101)
			tmp2 = (inRadY == (int)0);
		}
		else{
			HX_STACK_LINE(101)
			tmp2 = true;
		}
		HX_STACK_LINE(101)
		if ((tmp2)){
			HX_STACK_LINE(102)
			Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(102)
			Float tmp4 = inX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(102)
			Float tmp5 = inY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(102)
			Float tmp6 = inWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(102)
			Float tmp7 = inHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(102)
			::nme::display::Graphics_obj::nme_gfx_draw_rect(tmp3,tmp4,tmp5,tmp6,tmp7);
		}
		else{
			HX_STACK_LINE(104)
			Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(104)
			Float tmp4 = inX;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(104)
			Float tmp5 = inY;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(104)
			Float tmp6 = inWidth;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(104)
			Float tmp7 = inHeight;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(104)
			Float tmp8 = inRadX;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(104)
			bool tmp9 = (inRadY == null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(104)
			Dynamic tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(104)
			if ((tmp9)){
				HX_STACK_LINE(104)
				tmp10 = inRadX;
			}
			else{
				HX_STACK_LINE(104)
				tmp10 = inRadY;
			}
			HX_STACK_LINE(104)
			::nme::display::Graphics_obj::nme_gfx_draw_round_rect(tmp3,tmp4,tmp5,tmp6,tmp7,tmp8,tmp10);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawRoundRect,(void))

Void Graphics_obj::drawPath( Array< int > commands,Array< Float > data,::String __o_winding){
::String winding = __o_winding.Default(HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06"));
	HX_STACK_FRAME("nme.display.Graphics","drawPath",0xdd33b758,"nme.display.Graphics.drawPath","nme/display/Graphics.hx",108,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(commands,"commands")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(winding,"winding")
{
		HX_STACK_LINE(109)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(109)
		bool tmp1 = (winding == HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(109)
		::nme::display::Graphics_obj::nme_gfx_draw_path(tmp,commands,data,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphics_obj,drawPath,(void))

Void Graphics_obj::drawTiles( ::nme::display::Tilesheet sheet,Dynamic inXYID,hx::Null< bool >  __o_inSmooth,hx::Null< int >  __o_inFlags,hx::Null< int >  __o_inCount){
bool inSmooth = __o_inSmooth.Default(false);
int inFlags = __o_inFlags.Default(0);
int inCount = __o_inCount.Default(-1);
	HX_STACK_FRAME("nme.display.Graphics","drawTiles",0x02eaa872,"nme.display.Graphics.drawTiles","nme/display/Graphics.hx",112,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sheet,"sheet")
	HX_STACK_ARG(inXYID,"inXYID")
	HX_STACK_ARG(inSmooth,"inSmooth")
	HX_STACK_ARG(inFlags,"inFlags")
	HX_STACK_ARG(inCount,"inCount")
{
		HX_STACK_LINE(113)
		::nme::display::BitmapData tmp = sheet->nmeBitmap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = inSmooth;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		this->beginBitmapFill(tmp,null(),false,tmp1);
		HX_STACK_LINE(115)
		bool tmp2 = inSmooth;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(115)
		if ((tmp2)){
			HX_STACK_LINE(116)
			hx::OrEq(inFlags,(int)4096);
		}
		HX_STACK_LINE(118)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		Dynamic tmp4 = sheet->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		Dynamic tmp5 = inXYID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		int tmp6 = inFlags;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(118)
		int tmp7 = inCount;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(118)
		::nme::display::Graphics_obj::nme_gfx_draw_tiles(tmp3,tmp4,tmp5,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Graphics_obj,drawTiles,(void))

Void Graphics_obj::drawTriangles( Array< Float > vertices,Array< int > indices,Array< Float > uvtData,::nme::display::TriangleCulling culling,Array< int > colours,hx::Null< int >  __o_blendMode){
int blendMode = __o_blendMode.Default(0);
	HX_STACK_FRAME("nme.display.Graphics","drawTriangles",0x050b5618,"nme.display.Graphics.drawTriangles","nme/display/Graphics.hx",122,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertices,"vertices")
	HX_STACK_ARG(indices,"indices")
	HX_STACK_ARG(uvtData,"uvtData")
	HX_STACK_ARG(culling,"culling")
	HX_STACK_ARG(colours,"colours")
	HX_STACK_ARG(blendMode,"blendMode")
{
		HX_STACK_LINE(123)
		bool tmp = (culling == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(123)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		if ((tmp)){
			HX_STACK_LINE(123)
			tmp1 = (int)0;
		}
		else{
			HX_STACK_LINE(123)
			tmp1 = (culling->__Index() - (int)1);
		}
		HX_STACK_LINE(123)
		int cull = tmp1;		HX_STACK_VAR(cull,"cull");
		HX_STACK_LINE(124)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		int tmp3 = cull;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		int tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		::nme::display::Graphics_obj::nme_gfx_draw_triangles(tmp2,vertices,indices,uvtData,tmp3,colours,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Graphics_obj,drawTriangles,(void))

Void Graphics_obj::endFill( ){
{
		HX_STACK_FRAME("nme.display.Graphics","endFill",0xeabfc74f,"nme.display.Graphics.endFill","nme/display/Graphics.hx",128,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::nme::display::Graphics_obj::nme_gfx_end_fill(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphics_obj,endFill,(void))

Void Graphics_obj::lineBitmapStyle( ::nme::display::BitmapData bitmap,::nme::geom::Matrix matrix,hx::Null< bool >  __o_repeat,hx::Null< bool >  __o_smooth){
bool repeat = __o_repeat.Default(true);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("nme.display.Graphics","lineBitmapStyle",0xa839b77f,"nme.display.Graphics.lineBitmapStyle","nme/display/Graphics.hx",133,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bitmap,"bitmap")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(smooth,"smooth")
{
		HX_STACK_LINE(134)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(134)
		Dynamic tmp1 = bitmap->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(134)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(134)
		bool tmp3 = repeat;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(134)
		bool tmp4 = smooth;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(134)
		::nme::display::Graphics_obj::nme_gfx_line_bitmap_fill(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Graphics_obj,lineBitmapStyle,(void))

Void Graphics_obj::lineGradientStyle( ::nme::display::GradientType type,cpp::ArrayBase colors,cpp::ArrayBase alphas,cpp::ArrayBase ratios,::nme::geom::Matrix matrix,::nme::display::SpreadMethod spreadMethod,::nme::display::InterpolationMethod interpolationMethod,hx::Null< Float >  __o_focalPointRatio){
Float focalPointRatio = __o_focalPointRatio.Default(((Float)0.0));
	HX_STACK_FRAME("nme.display.Graphics","lineGradientStyle",0x7656131e,"nme.display.Graphics.lineGradientStyle","nme/display/Graphics.hx",138,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(colors,"colors")
	HX_STACK_ARG(alphas,"alphas")
	HX_STACK_ARG(ratios,"ratios")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(spreadMethod,"spreadMethod")
	HX_STACK_ARG(interpolationMethod,"interpolationMethod")
	HX_STACK_ARG(focalPointRatio,"focalPointRatio")
{
		HX_STACK_LINE(139)
		bool tmp = (matrix == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		if ((tmp)){
			HX_STACK_LINE(141)
			::nme::geom::Matrix tmp1 = ::nme::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(141)
			matrix = tmp1;
			HX_STACK_LINE(142)
			matrix->createGradientBox((int)200,(int)200,(int)0,(int)-100,(int)-100);
		}
		HX_STACK_LINE(145)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(145)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(145)
		bool tmp3 = (spreadMethod == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(145)
		int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		if ((tmp3)){
			HX_STACK_LINE(145)
			tmp4 = (int)0;
		}
		else{
			HX_STACK_LINE(145)
			tmp4 = spreadMethod->__Index();
		}
		HX_STACK_LINE(145)
		bool tmp5 = (interpolationMethod == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(145)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(145)
			tmp6 = interpolationMethod->__Index();
		}
		HX_STACK_LINE(145)
		Float tmp7 = focalPointRatio;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(145)
		::nme::display::Graphics_obj::nme_gfx_line_gradient_fill(tmp1,type->__Index(),colors,alphas,ratios,tmp2,tmp4,tmp6,tmp7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineGradientStyle,(void))

Void Graphics_obj::lineStyle( Dynamic thickness,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_pixelHinting,::nme::display::LineScaleMode scaleMode,::nme::display::CapsStyle caps,::nme::display::JointStyle joints,hx::Null< Float >  __o_miterLimit){
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(((Float)1.0));
bool pixelHinting = __o_pixelHinting.Default(false);
Float miterLimit = __o_miterLimit.Default(3);
	HX_STACK_FRAME("nme.display.Graphics","lineStyle",0xf5c31e2e,"nme.display.Graphics.lineStyle","nme/display/Graphics.hx",149,0x344f6f9d)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thickness,"thickness")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(pixelHinting,"pixelHinting")
	HX_STACK_ARG(scaleMode,"scaleMode")
	HX_STACK_ARG(caps,"caps")
	HX_STACK_ARG(joints,"joints")
	HX_STACK_ARG(miterLimit,"miterLimit")
{
		HX_STACK_LINE(150)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(150)
		Dynamic tmp1 = thickness;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(150)
		int tmp2 = color;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		Float tmp3 = alpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(150)
		bool tmp4 = pixelHinting;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(150)
		bool tmp5 = (scaleMode == null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(150)
		int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(150)
		if ((tmp5)){
			HX_STACK_LINE(150)
			tmp6 = (int)0;
		}
		else{
			HX_STACK_LINE(150)
			tmp6 = scaleMode->__Index();
		}
		HX_STACK_LINE(150)
		bool tmp7 = (caps == null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(150)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(150)
		if ((tmp7)){
			HX_STACK_LINE(150)
			tmp8 = (int)0;
		}
		else{
			HX_STACK_LINE(150)
			tmp8 = caps->__Index();
		}
		HX_STACK_LINE(150)
		bool tmp9 = (joints == null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(150)
		if ((tmp9)){
			HX_STACK_LINE(150)
			tmp10 = (int)0;
		}
		else{
			HX_STACK_LINE(150)
			tmp10 = joints->__Index();
		}
		HX_STACK_LINE(150)
		Float tmp11 = miterLimit;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(150)
		::nme::display::Graphics_obj::nme_gfx_line_style(tmp,tmp1,tmp2,tmp3,tmp4,tmp6,tmp8,tmp10,tmp11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(Graphics_obj,lineStyle,(void))

Void Graphics_obj::lineTo( Float inX,Float inY){
{
		HX_STACK_FRAME("nme.display.Graphics","lineTo",0xb41c1c5e,"nme.display.Graphics.lineTo","nme/display/Graphics.hx",154,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(155)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		Float tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		Float tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		::nme::display::Graphics_obj::nme_gfx_line_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,lineTo,(void))

Void Graphics_obj::moveTo( Float inX,Float inY){
{
		HX_STACK_FRAME("nme.display.Graphics","moveTo",0x9428a8bb,"nme.display.Graphics.moveTo","nme/display/Graphics.hx",159,0x344f6f9d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_LINE(160)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(160)
		Float tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(160)
		Float tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(160)
		::nme::display::Graphics_obj::nme_gfx_move_to(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,moveTo,(void))

int Graphics_obj::TILE_SCALE;

int Graphics_obj::TILE_ROTATION;

int Graphics_obj::TILE_RGB;

int Graphics_obj::TILE_ALPHA;

int Graphics_obj::TILE_TRANS_2x2;

int Graphics_obj::TILE_RECT;

int Graphics_obj::TILE_ORIGIN;

int Graphics_obj::TILE_NO_ID;

int Graphics_obj::TILE_SMOOTH;

int Graphics_obj::TILE_BLEND_NORMAL;

int Graphics_obj::TILE_BLEND_ADD;

int Graphics_obj::RGBA( int inRGB,hx::Null< int >  __o_inA){
int inA = __o_inA.Default(255);
	HX_STACK_FRAME("nme.display.Graphics","RGBA",0x65150cc3,"nme.display.Graphics.RGBA","nme/display/Graphics.hx",164,0x344f6f9d)
	HX_STACK_ARG(inRGB,"inRGB")
	HX_STACK_ARG(inA,"inA")
{
		HX_STACK_LINE(168)
		int tmp = inRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		int tmp1 = (int(inA) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(168)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Graphics_obj,RGBA,return )

Dynamic Graphics_obj::nme_gfx_clear;

Dynamic Graphics_obj::nme_gfx_begin_fill;

Dynamic Graphics_obj::nme_gfx_begin_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_line_bitmap_fill;

Dynamic Graphics_obj::nme_gfx_begin_gradient_fill;

Dynamic Graphics_obj::nme_gfx_line_gradient_fill;

Dynamic Graphics_obj::nme_gfx_end_fill;

Dynamic Graphics_obj::nme_gfx_line_style;

Dynamic Graphics_obj::nme_gfx_move_to;

Dynamic Graphics_obj::nme_gfx_line_to;

Dynamic Graphics_obj::nme_gfx_curve_to;

Dynamic Graphics_obj::nme_gfx_arc_to;

Dynamic Graphics_obj::nme_gfx_draw_ellipse;

Dynamic Graphics_obj::nme_gfx_draw_data;

Dynamic Graphics_obj::nme_gfx_draw_datum;

Dynamic Graphics_obj::nme_gfx_draw_rect;

Dynamic Graphics_obj::nme_gfx_draw_path;

Dynamic Graphics_obj::nme_gfx_draw_tiles;

Dynamic Graphics_obj::nme_gfx_draw_points;

Dynamic Graphics_obj::nme_gfx_draw_round_rect;

Dynamic Graphics_obj::nme_gfx_draw_triangles;


Graphics_obj::Graphics_obj()
{
}

void Graphics_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphics);
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_END_CLASS();
}

void Graphics_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
}

Dynamic Graphics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"arcTo") ) { return arcTo_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"endFill") ) { return endFill_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawRect") ) { return drawRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPath") ) { return drawPath_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"beginFill") ) { return beginFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTiles") ) { return drawTiles_dyn(); }
		if (HX_FIELD_EQ(inName,"lineStyle") ) { return lineStyle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return drawCircle_dyn(); }
		if (HX_FIELD_EQ(inName,"drawPoints") ) { return drawPoints_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"drawEllipse") ) { return drawEllipse_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"drawRoundRect") ) { return drawRoundRect_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"beginBitmapFill") ) { return beginBitmapFill_dyn(); }
		if (HX_FIELD_EQ(inName,"lineBitmapStyle") ) { return lineBitmapStyle_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawGraphicsData") ) { return drawGraphicsData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginGradientFill") ) { return beginGradientFill_dyn(); }
		if (HX_FIELD_EQ(inName,"drawGraphicsDatum") ) { return drawGraphicsDatum_dyn(); }
		if (HX_FIELD_EQ(inName,"lineGradientStyle") ) { return lineGradientStyle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Graphics_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"RGBA") ) { outValue = RGBA_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { outValue = nme_gfx_clear; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { outValue = nme_gfx_arc_to; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { outValue = nme_gfx_move_to; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { outValue = nme_gfx_line_to; return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { outValue = nme_gfx_end_fill; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { outValue = nme_gfx_curve_to; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { outValue = nme_gfx_draw_data; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { outValue = nme_gfx_draw_rect; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { outValue = nme_gfx_draw_path; return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { outValue = nme_gfx_begin_fill; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { outValue = nme_gfx_line_style; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { outValue = nme_gfx_draw_datum; return true;  }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { outValue = nme_gfx_draw_tiles; return true;  }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { outValue = nme_gfx_draw_points; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { outValue = nme_gfx_draw_ellipse; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { outValue = nme_gfx_draw_triangles; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { outValue = nme_gfx_draw_round_rect; return true;  }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { outValue = nme_gfx_line_bitmap_fill; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { outValue = nme_gfx_begin_bitmap_fill; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { outValue = nme_gfx_line_gradient_fill; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { outValue = nme_gfx_begin_gradient_fill; return true;  }
	}
	return false;
}

Dynamic Graphics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Graphics_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"nme_gfx_clear") ) { nme_gfx_clear=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nme_gfx_arc_to") ) { nme_gfx_arc_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"nme_gfx_move_to") ) { nme_gfx_move_to=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_to") ) { nme_gfx_line_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nme_gfx_end_fill") ) { nme_gfx_end_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_curve_to") ) { nme_gfx_curve_to=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_data") ) { nme_gfx_draw_data=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_rect") ) { nme_gfx_draw_rect=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_path") ) { nme_gfx_draw_path=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_fill") ) { nme_gfx_begin_fill=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_line_style") ) { nme_gfx_line_style=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_datum") ) { nme_gfx_draw_datum=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_tiles") ) { nme_gfx_draw_tiles=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_points") ) { nme_gfx_draw_points=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_ellipse") ) { nme_gfx_draw_ellipse=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_triangles") ) { nme_gfx_draw_triangles=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_gfx_draw_round_rect") ) { nme_gfx_draw_round_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_bitmap_fill") ) { nme_gfx_line_bitmap_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_bitmap_fill") ) { nme_gfx_begin_bitmap_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_gfx_line_gradient_fill") ) { nme_gfx_line_gradient_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_gfx_begin_gradient_fill") ) { nme_gfx_begin_gradient_fill=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Graphics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Graphics_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Graphics_obj::TILE_SCALE,HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ROTATION,HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RGB,HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ALPHA,HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_TRANS_2x2,HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_RECT,HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_ORIGIN,HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_NO_ID,HX_HCSTRING("TILE_NO_ID","\x48","\xe1","\x31","\x89")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_SMOOTH,HX_HCSTRING("TILE_SMOOTH","\x5f","\x14","\xe0","\x50")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_NORMAL,HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c")},
	{hx::fsInt,(void *) &Graphics_obj::TILE_BLEND_ADD,HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_clear,HX_HCSTRING("nme_gfx_clear","\x8e","\x81","\x27","\x96")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_begin_fill,HX_HCSTRING("nme_gfx_begin_fill","\xf8","\xd7","\x3d","\x24")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_begin_bitmap_fill,HX_HCSTRING("nme_gfx_begin_bitmap_fill","\x3e","\xf7","\xc4","\xa1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_line_bitmap_fill,HX_HCSTRING("nme_gfx_line_bitmap_fill","\xa7","\xf9","\x3d","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_begin_gradient_fill,HX_HCSTRING("nme_gfx_begin_gradient_fill","\x5d","\x4a","\xe3","\x14")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_line_gradient_fill,HX_HCSTRING("nme_gfx_line_gradient_fill","\x06","\x79","\x70","\x44")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_end_fill,HX_HCSTRING("nme_gfx_end_fill","\x46","\x33","\x64","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_line_style,HX_HCSTRING("nme_gfx_line_style","\xc5","\xbf","\xed","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_move_to,HX_HCSTRING("nme_gfx_move_to","\x6a","\xeb","\x84","\xaf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_line_to,HX_HCSTRING("nme_gfx_line_to","\x67","\xa6","\x96","\x84")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_curve_to,HX_HCSTRING("nme_gfx_curve_to","\xea","\x2c","\x9b","\xd6")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_arc_to,HX_HCSTRING("nme_gfx_arc_to","\x67","\xad","\xc6","\x72")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_ellipse,HX_HCSTRING("nme_gfx_draw_ellipse","\x82","\xcc","\x88","\xe5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_data,HX_HCSTRING("nme_gfx_draw_data","\x06","\xdc","\xcc","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_datum,HX_HCSTRING("nme_gfx_draw_datum","\x13","\xbb","\x73","\x28")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_rect,HX_HCSTRING("nme_gfx_draw_rect","\x00","\xd3","\x10","\x54")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_path,HX_HCSTRING("nme_gfx_draw_path","\x81","\x6b","\xbb","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_tiles,HX_HCSTRING("nme_gfx_draw_tiles","\x29","\x98","\x20","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_points,HX_HCSTRING("nme_gfx_draw_points","\xff","\xc6","\x69","\x11")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_round_rect,HX_HCSTRING("nme_gfx_draw_round_rect","\xd1","\xe8","\xd2","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Graphics_obj::nme_gfx_draw_triangles,HX_HCSTRING("nme_gfx_draw_triangles","\x4f","\xed","\xb8","\xc7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("arcTo","\x6d","\x00","\x84","\x25"),
	HX_HCSTRING("beginBitmapFill","\x9b","\xc9","\x07","\x6a"),
	HX_HCSTRING("beginFill","\x4c","\xad","\x95","\x8c"),
	HX_HCSTRING("beginGradientFill","\x5c","\x3c","\x03","\x2e"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawEllipse","\x3a","\x85","\xce","\x54"),
	HX_HCSTRING("drawGraphicsData","\xb9","\xaa","\x6e","\x60"),
	HX_HCSTRING("drawGraphicsDatum","\x00","\xc9","\x66","\x00"),
	HX_HCSTRING("drawPoints","\x47","\x8d","\xf1","\x38"),
	HX_HCSTRING("drawRect","\x48","\xf7","\x10","\x60"),
	HX_HCSTRING("drawRoundRect","\xee","\xc3","\xaa","\xe2"),
	HX_HCSTRING("drawPath","\xc9","\x8f","\xbb","\x5e"),
	HX_HCSTRING("drawTiles","\xe1","\x32","\x40","\xd8"),
	HX_HCSTRING("drawTriangles","\x07","\x44","\x68","\xde"),
	HX_HCSTRING("endFill","\xfe","\x87","\xe0","\x25"),
	HX_HCSTRING("lineBitmapStyle","\x2e","\x3f","\x21","\x45"),
	HX_HCSTRING("lineGradientStyle","\x8d","\x24","\xf2","\xc1"),
	HX_HCSTRING("lineStyle","\x9d","\xa8","\x18","\xcb"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_NO_ID,"TILE_NO_ID");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_MARK_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_MARK_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphics_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SCALE,"TILE_SCALE");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ROTATION,"TILE_ROTATION");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RGB,"TILE_RGB");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ALPHA,"TILE_ALPHA");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_TRANS_2x2,"TILE_TRANS_2x2");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_RECT,"TILE_RECT");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_ORIGIN,"TILE_ORIGIN");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_NO_ID,"TILE_NO_ID");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_SMOOTH,"TILE_SMOOTH");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_NORMAL,"TILE_BLEND_NORMAL");
	HX_VISIT_MEMBER_NAME(Graphics_obj::TILE_BLEND_ADD,"TILE_BLEND_ADD");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_clear,"nme_gfx_clear");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_fill,"nme_gfx_begin_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_bitmap_fill,"nme_gfx_begin_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_bitmap_fill,"nme_gfx_line_bitmap_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_begin_gradient_fill,"nme_gfx_begin_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_gradient_fill,"nme_gfx_line_gradient_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_end_fill,"nme_gfx_end_fill");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_style,"nme_gfx_line_style");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_move_to,"nme_gfx_move_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_line_to,"nme_gfx_line_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_curve_to,"nme_gfx_curve_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_arc_to,"nme_gfx_arc_to");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_ellipse,"nme_gfx_draw_ellipse");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_data,"nme_gfx_draw_data");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_datum,"nme_gfx_draw_datum");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_rect,"nme_gfx_draw_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_path,"nme_gfx_draw_path");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_tiles,"nme_gfx_draw_tiles");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_points,"nme_gfx_draw_points");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_round_rect,"nme_gfx_draw_round_rect");
	HX_VISIT_MEMBER_NAME(Graphics_obj::nme_gfx_draw_triangles,"nme_gfx_draw_triangles");
};

#endif

hx::Class Graphics_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("TILE_SCALE","\x59","\x77","\x2d","\x62"),
	HX_HCSTRING("TILE_ROTATION","\xaf","\x5b","\x7b","\x62"),
	HX_HCSTRING("TILE_RGB","\x1c","\x7e","\xfb","\xfc"),
	HX_HCSTRING("TILE_ALPHA","\x2d","\x50","\xf5","\x0a"),
	HX_HCSTRING("TILE_TRANS_2x2","\xe4","\x26","\x89","\xb2"),
	HX_HCSTRING("TILE_RECT","\x15","\x57","\x11","\x5f"),
	HX_HCSTRING("TILE_ORIGIN","\x17","\x26","\x76","\x94"),
	HX_HCSTRING("TILE_NO_ID","\x48","\xe1","\x31","\x89"),
	HX_HCSTRING("TILE_SMOOTH","\x5f","\x14","\xe0","\x50"),
	HX_HCSTRING("TILE_BLEND_NORMAL","\xa6","\x02","\x62","\x2c"),
	HX_HCSTRING("TILE_BLEND_ADD","\x22","\x74","\xbf","\x89"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("nme_gfx_clear","\x8e","\x81","\x27","\x96"),
	HX_HCSTRING("nme_gfx_begin_fill","\xf8","\xd7","\x3d","\x24"),
	HX_HCSTRING("nme_gfx_begin_bitmap_fill","\x3e","\xf7","\xc4","\xa1"),
	HX_HCSTRING("nme_gfx_line_bitmap_fill","\xa7","\xf9","\x3d","\xbf"),
	HX_HCSTRING("nme_gfx_begin_gradient_fill","\x5d","\x4a","\xe3","\x14"),
	HX_HCSTRING("nme_gfx_line_gradient_fill","\x06","\x79","\x70","\x44"),
	HX_HCSTRING("nme_gfx_end_fill","\x46","\x33","\x64","\x4f"),
	HX_HCSTRING("nme_gfx_line_style","\xc5","\xbf","\xed","\x6a"),
	HX_HCSTRING("nme_gfx_move_to","\x6a","\xeb","\x84","\xaf"),
	HX_HCSTRING("nme_gfx_line_to","\x67","\xa6","\x96","\x84"),
	HX_HCSTRING("nme_gfx_curve_to","\xea","\x2c","\x9b","\xd6"),
	HX_HCSTRING("nme_gfx_arc_to","\x67","\xad","\xc6","\x72"),
	HX_HCSTRING("nme_gfx_draw_ellipse","\x82","\xcc","\x88","\xe5"),
	HX_HCSTRING("nme_gfx_draw_data","\x06","\xdc","\xcc","\x4a"),
	HX_HCSTRING("nme_gfx_draw_datum","\x13","\xbb","\x73","\x28"),
	HX_HCSTRING("nme_gfx_draw_rect","\x00","\xd3","\x10","\x54"),
	HX_HCSTRING("nme_gfx_draw_path","\x81","\x6b","\xbb","\x52"),
	HX_HCSTRING("nme_gfx_draw_tiles","\x29","\x98","\x20","\x64"),
	HX_HCSTRING("nme_gfx_draw_points","\xff","\xc6","\x69","\x11"),
	HX_HCSTRING("nme_gfx_draw_round_rect","\xd1","\xe8","\xd2","\x34"),
	HX_HCSTRING("nme_gfx_draw_triangles","\x4f","\xed","\xb8","\xc7"),
	::String(null()) };

void Graphics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.Graphics","\xbf","\x66","\xdb","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Graphics_obj::__GetStatic;
	__mClass->mSetStaticField = &Graphics_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Graphics_obj >;
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

void Graphics_obj::__boot()
{
	TILE_SCALE= (int)1;
	TILE_ROTATION= (int)2;
	TILE_RGB= (int)4;
	TILE_ALPHA= (int)8;
	TILE_TRANS_2x2= (int)16;
	TILE_RECT= (int)32;
	TILE_ORIGIN= (int)64;
	TILE_NO_ID= (int)64;
	TILE_SMOOTH= (int)4096;
	TILE_BLEND_NORMAL= (int)0;
	TILE_BLEND_ADD= (int)65536;
	nme_gfx_clear= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_clear","\x8e","\x81","\x27","\x96"),(int)1);
	nme_gfx_begin_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_begin_fill","\xf8","\xd7","\x3d","\x24"),(int)3);
	nme_gfx_begin_bitmap_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_begin_bitmap_fill","\x3e","\xf7","\xc4","\xa1"),(int)5);
	nme_gfx_line_bitmap_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_line_bitmap_fill","\xa7","\xf9","\x3d","\xbf"),(int)5);
	nme_gfx_begin_gradient_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_begin_gradient_fill","\x5d","\x4a","\xe3","\x14"),(int)-1);
	nme_gfx_line_gradient_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_line_gradient_fill","\x06","\x79","\x70","\x44"),(int)-1);
	nme_gfx_end_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_end_fill","\x46","\x33","\x64","\x4f"),(int)1);
	nme_gfx_line_style= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_line_style","\xc5","\xbf","\xed","\x6a"),(int)-1);
	nme_gfx_move_to= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_move_to","\x6a","\xeb","\x84","\xaf"),(int)3);
	nme_gfx_line_to= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_line_to","\x67","\xa6","\x96","\x84"),(int)3);
	nme_gfx_curve_to= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_curve_to","\xea","\x2c","\x9b","\xd6"),(int)5);
	nme_gfx_arc_to= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_arc_to","\x67","\xad","\xc6","\x72"),(int)5);
	nme_gfx_draw_ellipse= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_ellipse","\x82","\xcc","\x88","\xe5"),(int)5);
	nme_gfx_draw_data= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_data","\x06","\xdc","\xcc","\x4a"),(int)2);
	nme_gfx_draw_datum= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_datum","\x13","\xbb","\x73","\x28"),(int)2);
	nme_gfx_draw_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_rect","\x00","\xd3","\x10","\x54"),(int)5);
	nme_gfx_draw_path= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_path","\x81","\x6b","\xbb","\x52"),(int)4);
	nme_gfx_draw_tiles= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_tiles","\x29","\x98","\x20","\x64"),(int)5);
	nme_gfx_draw_points= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_points","\xff","\xc6","\x69","\x11"),(int)-1);
	nme_gfx_draw_round_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_round_rect","\xd1","\xe8","\xd2","\x34"),(int)-1);
	nme_gfx_draw_triangles= ::nme::Loader_obj::load(HX_HCSTRING("nme_gfx_draw_triangles","\x4f","\xed","\xb8","\xc7"),(int)-1);
}

} // end namespace nme
} // end namespace display
