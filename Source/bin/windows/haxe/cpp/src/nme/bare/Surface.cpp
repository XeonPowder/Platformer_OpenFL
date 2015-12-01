#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_geom_ColorTransform
#include <nme/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_nme_geom_Matrix
#include <nme/geom/Matrix.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
#ifndef INCLUDED_nme_geom_Rectangle
#include <nme/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{
namespace bare{

Void Surface_obj::__construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode)
{
HX_STACK_FRAME("nme.bare.Surface","new",0xaa45ac6b,"nme.bare.Surface.new","nme/bare/Surface.hx",36,0x87f59dc5)
HX_STACK_THIS(this)
HX_STACK_ARG(inWidth,"inWidth")
HX_STACK_ARG(inHeight,"inHeight")
HX_STACK_ARG(__o_inTransparent,"inTransparent")
HX_STACK_ARG(inFillARGB,"inFillARGB")
HX_STACK_ARG(inGPUMode,"inGPUMode")
bool inTransparent = __o_inTransparent.Default(true);
{
	HX_STACK_LINE(37)
	int fill_col;		HX_STACK_VAR(fill_col,"fill_col");
	HX_STACK_LINE(38)
	int fill_alpha;		HX_STACK_VAR(fill_alpha,"fill_alpha");
	HX_STACK_LINE(39)
	this->nmeTransparent = inTransparent;
	HX_STACK_LINE(41)
	bool tmp = (inFillARGB == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(41)
	if ((tmp)){
		HX_STACK_LINE(43)
		fill_col = (int)16777215;
		HX_STACK_LINE(44)
		fill_alpha = (int)255;
	}
	else{
		HX_STACK_LINE(48)
		int tmp1 = (int(inFillARGB) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(48)
		fill_col = tmp1;
		HX_STACK_LINE(49)
		int tmp2 = hx::UShr(inFillARGB,(int)24);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(49)
		fill_alpha = tmp2;
	}
	HX_STACK_LINE(52)
	this->nmeHandle = null();
	HX_STACK_LINE(53)
	bool tmp1 = (inWidth >= (int)1);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(53)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(53)
	if ((tmp1)){
		HX_STACK_LINE(53)
		tmp2 = (inHeight >= (int)1);
	}
	else{
		HX_STACK_LINE(53)
		tmp2 = false;
	}
	HX_STACK_LINE(53)
	if ((tmp2)){
		HX_STACK_LINE(55)
		int tmp3 = ::nme::bare::Surface_obj::HARDWARE;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(55)
		int flags = tmp3;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(57)
		bool tmp4 = inTransparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		if ((tmp4)){
			HX_STACK_LINE(58)
			int tmp5 = ::nme::bare::Surface_obj::TRANSPARENT;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(58)
			hx::OrEq(flags,tmp5);
		}
		else{
			HX_STACK_LINE(60)
			fill_alpha = (int)255;
		}
		HX_STACK_LINE(62)
		int tmp5 = inWidth;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		int tmp6 = inHeight;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(62)
		int tmp7 = flags;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(62)
		int tmp8 = fill_col;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(62)
		int tmp9 = fill_alpha;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(62)
		Dynamic tmp10 = inGPUMode;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(62)
		Dynamic tmp11 = ::nme::bare::Surface_obj::nme_bitmap_data_create(tmp5,tmp6,tmp7,tmp8,tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(62)
		this->nmeHandle = tmp11;
	}
}
;
	return null();
}

//Surface_obj::~Surface_obj() { }

Dynamic Surface_obj::__CreateEmpty() { return  new Surface_obj; }
hx::ObjectPtr< Surface_obj > Surface_obj::__new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode)
{  hx::ObjectPtr< Surface_obj > _result_ = new Surface_obj();
	_result_->__construct(inWidth,inHeight,__o_inTransparent,inFillARGB,inGPUMode);
	return _result_;}

Dynamic Surface_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Surface_obj > _result_ = new Surface_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void Surface_obj::clear( int color){
{
		HX_STACK_FRAME("nme.bare.Surface","clear",0xb784a658,"nme.bare.Surface.clear","nme/bare/Surface.hx",67,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(68)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(68)
		int tmp1 = color;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(68)
		::nme::bare::Surface_obj::nme_bitmap_data_clear(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,clear,(void))

::nme::bare::Surface Surface_obj::clone( ){
	HX_STACK_FRAME("nme.bare.Surface","clone",0xb78c4828,"nme.bare.Surface.clone","nme/bare/Surface.hx",72,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	bool tmp = this->get_transparent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(73)
	::nme::bare::Surface tmp1 = ::nme::bare::Surface_obj::__new((int)0,(int)0,tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(73)
	::nme::bare::Surface bm = tmp1;		HX_STACK_VAR(bm,"bm");
	HX_STACK_LINE(74)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(74)
	Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_clone(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(74)
	bm->nmeHandle = tmp3;
	HX_STACK_LINE(75)
	::nme::bare::Surface tmp4 = bm;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(75)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,clone,return )

Void Surface_obj::colorTransform( ::nme::geom::Rectangle rect,::nme::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("nme.bare.Surface","colorTransform",0x2c5d315e,"nme.bare.Surface.colorTransform","nme/bare/Surface.hx",79,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(80)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		::nme::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(80)
		::nme::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(80)
		::nme::bare::Surface_obj::nme_bitmap_data_color_transform(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,colorTransform,(void))

Void Surface_obj::copyChannel( ::nme::bare::Surface sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,int inSourceChannel,int inDestChannel){
{
		HX_STACK_FRAME("nme.bare.Surface","copyChannel",0x2c73dc99,"nme.bare.Surface.copyChannel","nme/bare/Surface.hx",84,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(inSourceChannel,"inSourceChannel")
		HX_STACK_ARG(inDestChannel,"inDestChannel")
		HX_STACK_LINE(85)
		Dynamic tmp = sourceBitmapData->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(85)
		::nme::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(85)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(85)
		::nme::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(85)
		int tmp4 = inSourceChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(85)
		int tmp5 = inDestChannel;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(85)
		::nme::bare::Surface_obj::nme_bitmap_data_copy_channel(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Surface_obj,copyChannel,(void))

Void Surface_obj::copyPixels( ::nme::bare::Surface sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::nme::bare::Surface alphaBitmapData,::nme::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("nme.bare.Surface","copyPixels",0xf7dae017,"nme.bare.Surface.copyPixels","nme/bare/Surface.hx",89,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(90)
		Dynamic tmp = sourceBitmapData->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(90)
		::nme::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(90)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		::nme::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		bool tmp4 = mergeAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		::nme::bare::Surface_obj::nme_bitmap_data_copy(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Surface_obj,copyPixels,(void))

Void Surface_obj::createHardwareSurface( ){
{
		HX_STACK_FRAME("nme.bare.Surface","createHardwareSurface",0xf7526794,"nme.bare.Surface.createHardwareSurface","nme/bare/Surface.hx",94,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(95)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(95)
		::nme::bare::Surface_obj::nme_bitmap_data_create_hardware_surface(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,createHardwareSurface,(void))

Void Surface_obj::destroyHardwareSurface( ){
{
		HX_STACK_FRAME("nme.bare.Surface","destroyHardwareSurface",0x5a5c0b60,"nme.bare.Surface.destroyHardwareSurface","nme/bare/Surface.hx",99,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(100)
		::nme::bare::Surface_obj::nme_bitmap_data_destroy_hardware_surface(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,destroyHardwareSurface,(void))

Void Surface_obj::dispose( ){
{
		HX_STACK_FRAME("nme.bare.Surface","dispose",0x2ec4be2a,"nme.bare.Surface.dispose","nme/bare/Surface.hx",104,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::nme::bare::Surface_obj::nme_bitmap_data_dispose(tmp);
		HX_STACK_LINE(106)
		this->nmeHandle = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,dispose,(void))

Void Surface_obj::dumpBits( ){
{
		HX_STACK_FRAME("nme.bare.Surface","dumpBits",0x2c78ea6f,"nme.bare.Surface.dumpBits","nme/bare/Surface.hx",110,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		::nme::bare::Surface_obj::nme_bitmap_data_dump_bits(tmp);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,dumpBits,(void))

::nme::utils::ByteArray Surface_obj::encode( ::String inFormat,hx::Null< Float >  __o_inQuality){
Float inQuality = __o_inQuality.Default(((Float)0.9));
	HX_STACK_FRAME("nme.bare.Surface","encode",0xcec8eeeb,"nme.bare.Surface.encode","nme/bare/Surface.hx",115,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inFormat,"inFormat")
	HX_STACK_ARG(inQuality,"inQuality")
{
		HX_STACK_LINE(116)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(116)
		::String tmp1 = inFormat;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(116)
		Float tmp2 = inQuality;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(116)
		::nme::utils::ByteArray tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_encode(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(116)
		return tmp3;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,encode,return )

Void Surface_obj::fillRect( ::nme::geom::Rectangle rect,int inColour){
{
		HX_STACK_FRAME("nme.bare.Surface","fillRect",0x0276e15c,"nme.bare.Surface.fillRect","nme/bare/Surface.hx",121,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inColour,"inColour")
		HX_STACK_LINE(122)
		int tmp = hx::UShr(inColour,(int)24);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(122)
		int a = tmp;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(123)
		int tmp1 = (int(inColour) & int((int)16777215));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(123)
		int c = tmp1;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(124)
		Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::nme::geom::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		int tmp4 = c;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		int tmp5 = a;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(124)
		::nme::bare::Surface_obj::nme_bitmap_data_fill(tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,fillRect,(void))

Void Surface_obj::fillRectEx( ::nme::geom::Rectangle rect,int inColour,hx::Null< int >  __o_inAlpha){
int inAlpha = __o_inAlpha.Default(255);
	HX_STACK_FRAME("nme.bare.Surface","fillRectEx",0xb6f72cef,"nme.bare.Surface.fillRectEx","nme/bare/Surface.hx",128,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(inColour,"inColour")
	HX_STACK_ARG(inAlpha,"inAlpha")
{
		HX_STACK_LINE(129)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(129)
		::nme::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(129)
		int tmp2 = inColour;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(129)
		int tmp3 = inAlpha;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(129)
		::nme::bare::Surface_obj::nme_bitmap_data_fill(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,fillRectEx,(void))

Void Surface_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("nme.bare.Surface","floodFill",0xc9b579ac,"nme.bare.Surface.floodFill","nme/bare/Surface.hx",134,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(135)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(135)
		int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(135)
		int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(135)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(135)
		::nme::bare::Surface_obj::nme_bitmap_data_flood_fill(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,floodFill,(void))

::nme::geom::Rectangle Surface_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("nme.bare.Surface","getColorBoundsRect",0xa08015db,"nme.bare.Surface.getColorBoundsRect","nme/bare/Surface.hx",140,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(141)
		::nme::geom::Rectangle tmp = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(141)
		::nme::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(142)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(142)
		int tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(142)
		int tmp3 = color;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(142)
		bool tmp4 = findColor;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		::nme::geom::Rectangle tmp5 = result;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(142)
		::nme::bare::Surface_obj::nme_bitmap_data_get_color_bounds_rect(tmp1,tmp2,tmp3,tmp4,tmp5);
		HX_STACK_LINE(143)
		::nme::geom::Rectangle tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(143)
		return tmp6;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,getColorBoundsRect,return )

int Surface_obj::getPixel( int x,int y){
	HX_STACK_FRAME("nme.bare.Surface","getPixel",0xb8387225,"nme.bare.Surface.getPixel","nme/bare/Surface.hx",147,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(148)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(148)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(148)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(148)
	int tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_get_pixel(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(148)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,getPixel,return )

int Surface_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("nme.bare.Surface","getPixel32",0x8cd53204,"nme.bare.Surface.getPixel32","nme/bare/Surface.hx",152,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(153)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(153)
	int tmp1 = x;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(153)
	int tmp2 = y;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(153)
	int tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_get_pixel32(tmp,tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(153)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,getPixel32,return )

::nme::utils::ByteArray Surface_obj::getPixels( ::nme::geom::Rectangle rect){
	HX_STACK_FRAME("nme.bare.Surface","getPixels",0x792b6eae,"nme.bare.Surface.getPixels","nme/bare/Surface.hx",157,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(158)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(158)
	::nme::geom::Rectangle tmp1 = rect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(158)
	::nme::utils::ByteArray tmp2 = ::nme::bare::Surface_obj::nme_bitmap_data_get_pixels(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(158)
	::nme::utils::ByteArray result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(159)
	bool tmp3 = (result != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(159)
	if ((tmp3)){
		HX_STACK_LINE(159)
		result->position = result->length;
	}
	HX_STACK_LINE(160)
	::nme::utils::ByteArray tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(160)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,getPixels,return )

Array< int > Surface_obj::getVector( ::nme::geom::Rectangle rect){
	HX_STACK_FRAME("nme.bare.Surface","getVector",0x83df3044,"nme.bare.Surface.getVector","nme/bare/Surface.hx",164,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(165)
	Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(165)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(165)
	int pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(167)
	bool tmp2 = (pixels < (int)1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(167)
	if ((tmp2)){
		HX_STACK_LINE(167)
		return Array_obj< int >::__new();
	}
	HX_STACK_LINE(169)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(170)
	int tmp3 = (pixels - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(170)
	result[tmp3] = (int)0;
	HX_STACK_LINE(173)
	Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(173)
	::nme::geom::Rectangle tmp5 = rect;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(173)
	::nme::bare::Surface_obj::nme_bitmap_data_get_array(tmp4,tmp5,result);
	HX_STACK_LINE(180)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,getVector,return )

Void Surface_obj::nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing){
{
		HX_STACK_FRAME("nme.bare.Surface","nmeDrawToSurface",0x8cb2cf3d,"nme.bare.Surface.nmeDrawToSurface","nme/bare/Surface.hx",204,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inSurface,"inSurface")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_ARG(blendMode,"blendMode")
		HX_STACK_ARG(clipRect,"clipRect")
		HX_STACK_ARG(smoothing,"smoothing")
		HX_STACK_LINE(206)
		Dynamic tmp = inSurface;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(206)
		Dynamic tmp1 = this->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(206)
		::nme::geom::Matrix tmp2 = matrix;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(206)
		::nme::geom::ColorTransform tmp3 = colorTransform;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(206)
		::String tmp4 = blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(206)
		::nme::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(206)
		bool tmp6 = smoothing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		::nme::bare::Surface_obj::nme_render_surface_to_surface(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Surface_obj,nmeDrawToSurface,(void))

Void Surface_obj::nmeLoadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha){
{
		HX_STACK_FRAME("nme.bare.Surface","nmeLoadFromBytes",0x9534e18a,"nme.bare.Surface.nmeLoadFromBytes","nme/bare/Surface.hx",210,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inBytes,"inBytes")
		HX_STACK_ARG(inRawAlpha,"inRawAlpha")
		HX_STACK_LINE(211)
		::nme::utils::ByteArray tmp = inBytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(211)
		::nme::utils::ByteArray tmp1 = inRawAlpha;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(211)
		Dynamic tmp2 = ::nme::bare::Surface_obj::nme_bitmap_data_from_bytes(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(211)
		this->nmeHandle = tmp2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,nmeLoadFromBytes,(void))

Void Surface_obj::scroll( int inDX,int inDY){
{
		HX_STACK_FRAME("nme.bare.Surface","scroll",0x1c49d4e2,"nme.bare.Surface.scroll","nme/bare/Surface.hx",215,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inDX,"inDX")
		HX_STACK_ARG(inDY,"inDY")
		HX_STACK_LINE(216)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(216)
		int tmp1 = inDX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(216)
		int tmp2 = inDY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		::nme::bare::Surface_obj::nme_bitmap_data_scroll(tmp,tmp1,tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,scroll,(void))

Void Surface_obj::setFlags( int inFlags){
{
		HX_STACK_FRAME("nme.bare.Surface","setFlags",0xa67e305a,"nme.bare.Surface.setFlags","nme/bare/Surface.hx",220,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inFlags,"inFlags")
		HX_STACK_LINE(222)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(222)
		int tmp1 = inFlags;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(222)
		::nme::bare::Surface_obj::nme_bitmap_data_set_flags(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,setFlags,(void))

Void Surface_obj::setPixel( int inX,int inY,int inColour){
{
		HX_STACK_FRAME("nme.bare.Surface","setPixel",0x6695cb99,"nme.bare.Surface.setPixel","nme/bare/Surface.hx",226,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inColour,"inColour")
		HX_STACK_LINE(227)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(227)
		int tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(227)
		int tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		int tmp3 = inColour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		::nme::bare::Surface_obj::nme_bitmap_data_set_pixel(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,setPixel,(void))

Void Surface_obj::setPixel32( int inX,int inY,int inColour){
{
		HX_STACK_FRAME("nme.bare.Surface","setPixel32",0x9052d078,"nme.bare.Surface.setPixel32","nme/bare/Surface.hx",231,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inX,"inX")
		HX_STACK_ARG(inY,"inY")
		HX_STACK_ARG(inColour,"inColour")
		HX_STACK_LINE(232)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(232)
		int tmp1 = inX;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(232)
		int tmp2 = inY;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(232)
		int tmp3 = inColour;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(232)
		::nme::bare::Surface_obj::nme_bitmap_data_set_pixel32(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Surface_obj,setPixel32,(void))

Void Surface_obj::setPixels( ::nme::geom::Rectangle rect,::nme::utils::ByteArray pixels){
{
		HX_STACK_FRAME("nme.bare.Surface","setPixels",0x5c7c5aba,"nme.bare.Surface.setPixels","nme/bare/Surface.hx",236,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(237)
		Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(237)
		Float tmp1 = (tmp * (int)4);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(237)
		int tmp2 = ::Std_obj::_int(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(237)
		int size = tmp2;		HX_STACK_VAR(size,"size");
		HX_STACK_LINE(238)
		int tmp3 = size;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(238)
		int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(238)
		pixels->checkData(tmp4);
		HX_STACK_LINE(239)
		Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(239)
		::nme::geom::Rectangle tmp6 = rect;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(239)
		::nme::utils::ByteArray tmp7 = pixels;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(239)
		int tmp8 = pixels->position;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(239)
		::nme::bare::Surface_obj::nme_bitmap_data_set_bytes(tmp5,tmp6,tmp7,tmp8);
		HX_STACK_LINE(240)
		hx::AddEq(pixels->position,size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,setPixels,(void))

Void Surface_obj::setVector( ::nme::geom::Rectangle rect,Array< int > inPixels){
{
		HX_STACK_FRAME("nme.bare.Surface","setVector",0x67301c50,"nme.bare.Surface.setVector","nme/bare/Surface.hx",244,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inPixels,"inPixels")
		HX_STACK_LINE(245)
		Float tmp = (rect->width * rect->height);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		int count = tmp1;		HX_STACK_VAR(count,"count");
		HX_STACK_LINE(247)
		bool tmp2 = (inPixels->length < count);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(247)
		if ((tmp2)){
			HX_STACK_LINE(247)
			return null();
		}
		HX_STACK_LINE(250)
		Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(250)
		::nme::geom::Rectangle tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(250)
		::nme::bare::Surface_obj::nme_bitmap_data_set_array(tmp3,tmp4,inPixels);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,setVector,(void))

Void Surface_obj::setFormat( int format){
{
		HX_STACK_FRAME("nme.bare.Surface","setFormat",0xcd60fac4,"nme.bare.Surface.setFormat","nme/bare/Surface.hx",260,0x87f59dc5)
		HX_STACK_THIS(this)
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(261)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(261)
		int tmp1 = format;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(261)
		::nme::bare::Surface_obj::nme_bitmap_data_set_format(tmp,tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,setFormat,(void))

Void Surface_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("nme.bare.Surface","noise",0x0eebc465,"nme.bare.Surface.noise","nme/bare/Surface.hx",265,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(266)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		int tmp1 = randomSeed;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		int tmp2 = low;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(266)
		int tmp3 = high;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(266)
		int tmp4 = channelOptions;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(266)
		bool tmp5 = grayScale;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(266)
		::nme::bare::Surface_obj::nme_bitmap_data_noise(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Surface_obj,noise,(void))

::nme::geom::Rectangle Surface_obj::get_rect( ){
	HX_STACK_FRAME("nme.bare.Surface","get_rect",0x611fa4c2,"nme.bare.Surface.get_rect","nme/bare/Surface.hx",270,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(270)
	int tmp = this->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	int tmp1 = this->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(270)
	::nme::geom::Rectangle tmp2 = ::nme::geom::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(270)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,get_rect,return )

int Surface_obj::get_width( ){
	HX_STACK_FRAME("nme.bare.Surface","get_width",0x7e3708a8,"nme.bare.Surface.get_width","nme/bare/Surface.hx",271,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(271)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(271)
	int tmp1 = ::nme::bare::Surface_obj::nme_bitmap_data_width(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(271)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,get_width,return )

int Surface_obj::get_height( ){
	HX_STACK_FRAME("nme.bare.Surface","get_height",0xa8400305,"nme.bare.Surface.get_height","nme/bare/Surface.hx",272,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(272)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(272)
	int tmp1 = ::nme::bare::Surface_obj::nme_bitmap_data_height(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(272)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,get_height,return )

bool Surface_obj::get_transparent( ){
	HX_STACK_FRAME("nme.bare.Surface","get_transparent",0x9e2d2374,"nme.bare.Surface.get_transparent","nme/bare/Surface.hx",273,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(273)
	bool tmp = this->nmeTransparent;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,get_transparent,return )

bool Surface_obj::get_premultipliedAlpha( ){
	HX_STACK_FRAME("nme.bare.Surface","get_premultipliedAlpha",0x486bbe46,"nme.bare.Surface.get_premultipliedAlpha","nme/bare/Surface.hx",274,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(274)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(274)
	bool tmp1 = ::nme::bare::Surface_obj::nme_bitmap_data_get_prem_alpha(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(274)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Surface_obj,get_premultipliedAlpha,return )

bool Surface_obj::set_premultipliedAlpha( bool inVal){
	HX_STACK_FRAME("nme.bare.Surface","set_premultipliedAlpha",0x7c173aba,"nme.bare.Surface.set_premultipliedAlpha","nme/bare/Surface.hx",276,0x87f59dc5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(277)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(277)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(277)
	::nme::bare::Surface_obj::nme_bitmap_data_set_prem_alpha(tmp,tmp1);
	HX_STACK_LINE(278)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(278)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Surface_obj,set_premultipliedAlpha,return )

::String Surface_obj::PNG;

::String Surface_obj::JPG;

int Surface_obj::TRANSPARENT;

int Surface_obj::HARDWARE;

int Surface_obj::FORMAT_8888;

int Surface_obj::FORMAT_4444;

int Surface_obj::FORMAT_565;

::nme::bare::Surface Surface_obj::load( ::String inFilename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_FRAME("nme.bare.Surface","load",0x516647bb,"nme.bare.Surface.load","nme/bare/Surface.hx",184,0x87f59dc5)
	HX_STACK_ARG(inFilename,"inFilename")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(185)
		::nme::bare::Surface tmp = ::nme::bare::Surface_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		::nme::bare::Surface result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(186)
		::String tmp1 = inFilename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(186)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(186)
		Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(186)
		result->nmeHandle = tmp3;
		HX_STACK_LINE(187)
		::nme::bare::Surface tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(187)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,load,return )

::nme::bare::Surface Surface_obj::loadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha){
	HX_STACK_FRAME("nme.bare.Surface","loadFromBytes",0x83723b66,"nme.bare.Surface.loadFromBytes","nme/bare/Surface.hx",191,0x87f59dc5)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_ARG(inRawAlpha,"inRawAlpha")
	HX_STACK_LINE(192)
	::nme::bare::Surface tmp = ::nme::bare::Surface_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::nme::bare::Surface result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		::nme::utils::ByteArray tmp1 = inBytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(193)
		::nme::utils::ByteArray tmp2 = inRawAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(193)
		Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_from_bytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(193)
		result->nmeHandle = tmp3;
	}
	HX_STACK_LINE(194)
	::nme::bare::Surface tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(194)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,loadFromBytes,return )

::nme::bare::Surface Surface_obj::loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha){
	HX_STACK_FRAME("nme.bare.Surface","loadFromHaxeBytes",0xd87f46e0,"nme.bare.Surface.loadFromHaxeBytes","nme/bare/Surface.hx",198,0x87f59dc5)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_ARG(inRawAlpha,"inRawAlpha")
	HX_STACK_LINE(199)
	::haxe::io::Bytes tmp = inBytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(199)
	::nme::utils::ByteArray tmp1 = ::nme::utils::ByteArray_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(199)
	bool tmp2 = (inRawAlpha == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(199)
	::nme::utils::ByteArray tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(199)
	if ((tmp2)){
		HX_STACK_LINE(199)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(199)
		::haxe::io::Bytes tmp4 = inRawAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(199)
		tmp3 = ::nme::utils::ByteArray_obj::fromBytes(tmp4);
	}
	HX_STACK_LINE(199)
	::nme::bare::Surface tmp4 = ::nme::bare::Surface_obj::loadFromBytes(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(199)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Surface_obj,loadFromHaxeBytes,return )

Dynamic Surface_obj::nme_bitmap_data_create;

Dynamic Surface_obj::nme_bitmap_data_load;

Dynamic Surface_obj::nme_bitmap_data_from_bytes;

Dynamic Surface_obj::nme_bitmap_data_clear;

Dynamic Surface_obj::nme_bitmap_data_clone;

Dynamic Surface_obj::nme_bitmap_data_apply_filter;

Dynamic Surface_obj::nme_bitmap_data_color_transform;

Dynamic Surface_obj::nme_bitmap_data_copy;

Dynamic Surface_obj::nme_bitmap_data_copy_channel;

Dynamic Surface_obj::nme_bitmap_data_fill;

Dynamic Surface_obj::nme_bitmap_data_get_pixels;

Dynamic Surface_obj::nme_bitmap_data_get_pixel;

Dynamic Surface_obj::nme_bitmap_data_get_pixel32;

Dynamic Surface_obj::nme_bitmap_data_get_array;

Dynamic Surface_obj::nme_bitmap_data_get_color_bounds_rect;

Dynamic Surface_obj::nme_bitmap_data_scroll;

Dynamic Surface_obj::nme_bitmap_data_set_pixel;

Dynamic Surface_obj::nme_bitmap_data_set_pixel32;

Dynamic Surface_obj::nme_bitmap_data_set_pixel_rgba;

Dynamic Surface_obj::nme_bitmap_data_set_bytes;

Dynamic Surface_obj::nme_bitmap_data_set_format;

Dynamic Surface_obj::nme_bitmap_data_set_array;

Dynamic Surface_obj::nme_bitmap_data_create_hardware_surface;

Dynamic Surface_obj::nme_bitmap_data_destroy_hardware_surface;

Dynamic Surface_obj::nme_bitmap_data_generate_filter_rect;

Dynamic Surface_obj::nme_render_surface_to_surface;

Dynamic Surface_obj::nme_bitmap_data_height;

Dynamic Surface_obj::nme_bitmap_data_width;

Dynamic Surface_obj::nme_bitmap_data_get_transparent;

Dynamic Surface_obj::nme_bitmap_data_set_flags;

Dynamic Surface_obj::nme_bitmap_data_encode;

Dynamic Surface_obj::nme_bitmap_data_dump_bits;

Dynamic Surface_obj::nme_bitmap_data_dispose;

Dynamic Surface_obj::nme_bitmap_data_noise;

Dynamic Surface_obj::nme_bitmap_data_flood_fill;

Dynamic Surface_obj::nme_bitmap_data_get_prem_alpha;

Dynamic Surface_obj::nme_bitmap_data_set_prem_alpha;


Surface_obj::Surface_obj()
{
}

void Surface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Surface);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_MARK_MEMBER_NAME(nmeTransparent,"nmeTransparent");
	HX_MARK_END_CLASS();
}

void Surface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(nmeHandle,"nmeHandle");
	HX_VISIT_MEMBER_NAME(nmeTransparent,"nmeTransparent");
}

Dynamic Surface_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp != hx::paccNever ? get_rect() : rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp != hx::paccNever ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp != hx::paccNever ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dumpBits") ) { return dumpBits_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setFlags") ) { return setFlags_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { return nmeHandle; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"setFormat") ) { return setFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"fillRectEx") ) { return fillRectEx_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return inCallProp != hx::paccNever ? get_transparent() : transparent; }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeTransparent") ) { return nmeTransparent; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeDrawToSurface") ) { return nmeDrawToSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeLoadFromBytes") ) { return nmeLoadFromBytes_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { if (inCallProp != hx::paccNever) return get_premultipliedAlpha(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createHardwareSurface") ) { return createHardwareSurface_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"destroyHardwareSurface") ) { return destroyHardwareSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultipliedAlpha") ) { return get_premultipliedAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultipliedAlpha") ) { return set_premultipliedAlpha_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Surface_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { outValue = HARDWARE; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FORMAT_565") ) { outValue = FORMAT_565; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { outValue = TRANSPARENT; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_8888") ) { outValue = FORMAT_8888; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_4444") ) { outValue = FORMAT_4444; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { outValue = loadFromHaxeBytes_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_load") ) { outValue = nme_bitmap_data_load; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy") ) { outValue = nme_bitmap_data_copy; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_fill") ) { outValue = nme_bitmap_data_fill; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clear") ) { outValue = nme_bitmap_data_clear; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clone") ) { outValue = nme_bitmap_data_clone; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_width") ) { outValue = nme_bitmap_data_width; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_noise") ) { outValue = nme_bitmap_data_noise; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create") ) { outValue = nme_bitmap_data_create; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_scroll") ) { outValue = nme_bitmap_data_scroll; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_height") ) { outValue = nme_bitmap_data_height; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_encode") ) { outValue = nme_bitmap_data_encode; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dispose") ) { outValue = nme_bitmap_data_dispose; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel") ) { outValue = nme_bitmap_data_get_pixel; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_array") ) { outValue = nme_bitmap_data_get_array; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel") ) { outValue = nme_bitmap_data_set_pixel; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_bytes") ) { outValue = nme_bitmap_data_set_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_array") ) { outValue = nme_bitmap_data_set_array; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_flags") ) { outValue = nme_bitmap_data_set_flags; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dump_bits") ) { outValue = nme_bitmap_data_dump_bits; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_from_bytes") ) { outValue = nme_bitmap_data_from_bytes; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixels") ) { outValue = nme_bitmap_data_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_format") ) { outValue = nme_bitmap_data_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_flood_fill") ) { outValue = nme_bitmap_data_flood_fill; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel32") ) { outValue = nme_bitmap_data_get_pixel32; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel32") ) { outValue = nme_bitmap_data_set_pixel32; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { outValue = nme_bitmap_data_apply_filter; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy_channel") ) { outValue = nme_bitmap_data_copy_channel; return true;  }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_render_surface_to_surface") ) { outValue = nme_render_surface_to_surface; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel_rgba") ) { outValue = nme_bitmap_data_set_pixel_rgba; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_prem_alpha") ) { outValue = nme_bitmap_data_get_prem_alpha; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_prem_alpha") ) { outValue = nme_bitmap_data_set_prem_alpha; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_color_transform") ) { outValue = nme_bitmap_data_color_transform; return true;  }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_transparent") ) { outValue = nme_bitmap_data_get_transparent; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { outValue = nme_bitmap_data_generate_filter_rect; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_color_bounds_rect") ) { outValue = nme_bitmap_data_get_color_bounds_rect; return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create_hardware_surface") ) { outValue = nme_bitmap_data_create_hardware_surface; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_destroy_hardware_surface") ) { outValue = nme_bitmap_data_destroy_hardware_surface; return true;  }
	}
	return false;
}

Dynamic Surface_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::nme::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeHandle") ) { nmeHandle=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nmeTransparent") ) { nmeTransparent=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"premultipliedAlpha") ) { if (inCallProp != hx::paccNever) return set_premultipliedAlpha(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Surface_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { HARDWARE=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FORMAT_565") ) { FORMAT_565=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { TRANSPARENT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"FORMAT_8888") ) { FORMAT_8888=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"FORMAT_4444") ) { FORMAT_4444=ioValue.Cast< int >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_load") ) { nme_bitmap_data_load=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy") ) { nme_bitmap_data_copy=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_fill") ) { nme_bitmap_data_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clear") ) { nme_bitmap_data_clear=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_clone") ) { nme_bitmap_data_clone=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_width") ) { nme_bitmap_data_width=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_noise") ) { nme_bitmap_data_noise=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create") ) { nme_bitmap_data_create=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_scroll") ) { nme_bitmap_data_scroll=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_height") ) { nme_bitmap_data_height=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_encode") ) { nme_bitmap_data_encode=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dispose") ) { nme_bitmap_data_dispose=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel") ) { nme_bitmap_data_get_pixel=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_array") ) { nme_bitmap_data_get_array=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel") ) { nme_bitmap_data_set_pixel=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_bytes") ) { nme_bitmap_data_set_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_array") ) { nme_bitmap_data_set_array=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_flags") ) { nme_bitmap_data_set_flags=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_dump_bits") ) { nme_bitmap_data_dump_bits=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_from_bytes") ) { nme_bitmap_data_from_bytes=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixels") ) { nme_bitmap_data_get_pixels=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_format") ) { nme_bitmap_data_set_format=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_flood_fill") ) { nme_bitmap_data_flood_fill=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_pixel32") ) { nme_bitmap_data_get_pixel32=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel32") ) { nme_bitmap_data_set_pixel32=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { nme_bitmap_data_apply_filter=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_copy_channel") ) { nme_bitmap_data_copy_channel=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"nme_render_surface_to_surface") ) { nme_render_surface_to_surface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_pixel_rgba") ) { nme_bitmap_data_set_pixel_rgba=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_prem_alpha") ) { nme_bitmap_data_get_prem_alpha=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_set_prem_alpha") ) { nme_bitmap_data_set_prem_alpha=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_color_transform") ) { nme_bitmap_data_color_transform=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_transparent") ) { nme_bitmap_data_get_transparent=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { nme_bitmap_data_generate_filter_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_get_color_bounds_rect") ) { nme_bitmap_data_get_color_bounds_rect=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_create_hardware_surface") ) { nme_bitmap_data_create_hardware_surface=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_destroy_hardware_surface") ) { nme_bitmap_data_destroy_hardware_surface=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void Surface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a"));
	outFields->push(HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"));
	outFields->push(HX_HCSTRING("nmeTransparent","\xac","\x45","\xe2","\x50"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Surface_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::nme::geom::Rectangle*/ ,(int)offsetof(Surface_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(Surface_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(Surface_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Surface_obj,nmeHandle),HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52")},
	{hx::fsBool,(int)offsetof(Surface_obj,nmeTransparent),HX_HCSTRING("nmeTransparent","\xac","\x45","\xe2","\x50")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Surface_obj::PNG,HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00")},
	{hx::fsString,(void *) &Surface_obj::JPG,HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00")},
	{hx::fsInt,(void *) &Surface_obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{hx::fsInt,(void *) &Surface_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &Surface_obj::FORMAT_8888,HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56")},
	{hx::fsInt,(void *) &Surface_obj::FORMAT_4444,HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53")},
	{hx::fsInt,(void *) &Surface_obj::FORMAT_565,HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_create,HX_HCSTRING("nme_bitmap_data_create","\xba","\x14","\x74","\x43")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_load,HX_HCSTRING("nme_bitmap_data_load","\x64","\xbc","\xe0","\x98")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_from_bytes,HX_HCSTRING("nme_bitmap_data_from_bytes","\x54","\x45","\x10","\xca")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_clear,HX_HCSTRING("nme_bitmap_data_clear","\x8f","\x45","\x30","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_clone,HX_HCSTRING("nme_bitmap_data_clone","\x5f","\xe7","\x37","\xfb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_apply_filter,HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_color_transform,HX_HCSTRING("nme_bitmap_data_color_transform","\xd2","\x7e","\x4f","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_copy,HX_HCSTRING("nme_bitmap_data_copy","\xf3","\xdd","\xed","\x92")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_copy_channel,HX_HCSTRING("nme_bitmap_data_copy_channel","\x37","\xe3","\x43","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_fill,HX_HCSTRING("nme_bitmap_data_fill","\xc1","\xf0","\xe4","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_pixels,HX_HCSTRING("nme_bitmap_data_get_pixels","\xb4","\xc3","\x12","\x7f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_pixel,HX_HCSTRING("nme_bitmap_data_get_pixel","\xdf","\x1f","\xe9","\xcc")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_pixel32,HX_HCSTRING("nme_bitmap_data_get_pixel32","\x3e","\x42","\x58","\xb1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_array,HX_HCSTRING("nme_bitmap_data_get_array","\xf2","\xc6","\xd4","\x2f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_color_bounds_rect,HX_HCSTRING("nme_bitmap_data_get_color_bounds_rect","\x2b","\xfd","\x24","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_scroll,HX_HCSTRING("nme_bitmap_data_scroll","\xcb","\x85","\xc9","\x0e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_pixel,HX_HCSTRING("nme_bitmap_data_set_pixel","\xeb","\x0b","\x3a","\xb0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_pixel32,HX_HCSTRING("nme_bitmap_data_set_pixel32","\x4a","\x49","\xc5","\xbb")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_pixel_rgba,HX_HCSTRING("nme_bitmap_data_set_pixel_rgba","\xc8","\xcc","\x15","\x1f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_bytes,HX_HCSTRING("nme_bitmap_data_set_bytes","\xd0","\x4d","\x2e","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_format,HX_HCSTRING("nme_bitmap_data_set_format","\x32","\x02","\x75","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_array,HX_HCSTRING("nme_bitmap_data_set_array","\xfe","\xb2","\x25","\x13")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_create_hardware_surface,HX_HCSTRING("nme_bitmap_data_create_hardware_surface","\xbb","\x72","\xc0","\x82")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_destroy_hardware_surface,HX_HCSTRING("nme_bitmap_data_destroy_hardware_surface","\xb9","\x07","\x98","\x4b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_generate_filter_rect,HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_render_surface_to_surface,HX_HCSTRING("nme_render_surface_to_surface","\x4b","\x6f","\x6a","\x5d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_height,HX_HCSTRING("nme_bitmap_data_height","\xa5","\xb5","\xb0","\xc9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_width,HX_HCSTRING("nme_bitmap_data_width","\x08","\x8a","\x37","\x7d")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_transparent,HX_HCSTRING("nme_bitmap_data_get_transparent","\x6b","\x8d","\xfe","\x19")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_flags,HX_HCSTRING("nme_bitmap_data_set_flags","\xac","\x70","\x22","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_encode,HX_HCSTRING("nme_bitmap_data_encode","\xd4","\x9f","\x48","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_dump_bits,HX_HCSTRING("nme_bitmap_data_dump_bits","\x33","\x3a","\xbb","\xc1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_dispose,HX_HCSTRING("nme_bitmap_data_dispose","\x21","\xd9","\xff","\x6b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_noise,HX_HCSTRING("nme_bitmap_data_noise","\x9c","\x63","\x97","\x52")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_flood_fill,HX_HCSTRING("nme_bitmap_data_flood_fill","\xa2","\x6c","\x90","\x64")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_get_prem_alpha,HX_HCSTRING("nme_bitmap_data_get_prem_alpha","\x10","\xdd","\x98","\x67")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Surface_obj::nme_bitmap_data_set_prem_alpha,HX_HCSTRING("nme_bitmap_data_set_prem_alpha","\x84","\xc5","\xb8","\x87")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("nmeHandle","\x8e","\x87","\xbf","\x52"),
	HX_HCSTRING("nmeTransparent","\xac","\x45","\xe2","\x50"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("createHardwareSurface","\xc9","\xac","\x29","\x88"),
	HX_HCSTRING("destroyHardwareSurface","\x8b","\x54","\xe1","\x85"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("dumpBits","\x5a","\x4e","\xbb","\x96"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("fillRectEx","\x9a","\xa1","\x8a","\x01"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("nmeDrawToSurface","\x28","\x96","\x2b","\x08"),
	HX_HCSTRING("nmeLoadFromBytes","\x75","\xa8","\xad","\x10"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setFlags","\x45","\x94","\xc0","\x10"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("get_premultipliedAlpha","\x71","\x07","\xf1","\x73"),
	HX_HCSTRING("set_premultipliedAlpha","\xe5","\x83","\x9c","\xa7"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Surface_obj::PNG,"PNG");
	HX_MARK_MEMBER_NAME(Surface_obj::JPG,"JPG");
	HX_MARK_MEMBER_NAME(Surface_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(Surface_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(Surface_obj::FORMAT_8888,"FORMAT_8888");
	HX_MARK_MEMBER_NAME(Surface_obj::FORMAT_4444,"FORMAT_4444");
	HX_MARK_MEMBER_NAME(Surface_obj::FORMAT_565,"FORMAT_565");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_create,"nme_bitmap_data_create");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_load,"nme_bitmap_data_load");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_from_bytes,"nme_bitmap_data_from_bytes");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_clear,"nme_bitmap_data_clear");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_clone,"nme_bitmap_data_clone");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_apply_filter,"nme_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_color_transform,"nme_bitmap_data_color_transform");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_copy,"nme_bitmap_data_copy");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_copy_channel,"nme_bitmap_data_copy_channel");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_fill,"nme_bitmap_data_fill");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixels,"nme_bitmap_data_get_pixels");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixel,"nme_bitmap_data_get_pixel");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixel32,"nme_bitmap_data_get_pixel32");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_array,"nme_bitmap_data_get_array");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_color_bounds_rect,"nme_bitmap_data_get_color_bounds_rect");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_scroll,"nme_bitmap_data_scroll");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel,"nme_bitmap_data_set_pixel");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel32,"nme_bitmap_data_set_pixel32");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel_rgba,"nme_bitmap_data_set_pixel_rgba");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_bytes,"nme_bitmap_data_set_bytes");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_format,"nme_bitmap_data_set_format");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_array,"nme_bitmap_data_set_array");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_create_hardware_surface,"nme_bitmap_data_create_hardware_surface");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_destroy_hardware_surface,"nme_bitmap_data_destroy_hardware_surface");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_generate_filter_rect,"nme_bitmap_data_generate_filter_rect");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_render_surface_to_surface,"nme_render_surface_to_surface");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_height,"nme_bitmap_data_height");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_width,"nme_bitmap_data_width");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_transparent,"nme_bitmap_data_get_transparent");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_flags,"nme_bitmap_data_set_flags");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_encode,"nme_bitmap_data_encode");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_dump_bits,"nme_bitmap_data_dump_bits");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_dispose,"nme_bitmap_data_dispose");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_noise,"nme_bitmap_data_noise");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_flood_fill,"nme_bitmap_data_flood_fill");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_prem_alpha,"nme_bitmap_data_get_prem_alpha");
	HX_MARK_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_prem_alpha,"nme_bitmap_data_set_prem_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Surface_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Surface_obj::PNG,"PNG");
	HX_VISIT_MEMBER_NAME(Surface_obj::JPG,"JPG");
	HX_VISIT_MEMBER_NAME(Surface_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(Surface_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(Surface_obj::FORMAT_8888,"FORMAT_8888");
	HX_VISIT_MEMBER_NAME(Surface_obj::FORMAT_4444,"FORMAT_4444");
	HX_VISIT_MEMBER_NAME(Surface_obj::FORMAT_565,"FORMAT_565");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_create,"nme_bitmap_data_create");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_load,"nme_bitmap_data_load");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_from_bytes,"nme_bitmap_data_from_bytes");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_clear,"nme_bitmap_data_clear");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_clone,"nme_bitmap_data_clone");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_apply_filter,"nme_bitmap_data_apply_filter");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_color_transform,"nme_bitmap_data_color_transform");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_copy,"nme_bitmap_data_copy");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_copy_channel,"nme_bitmap_data_copy_channel");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_fill,"nme_bitmap_data_fill");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixels,"nme_bitmap_data_get_pixels");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixel,"nme_bitmap_data_get_pixel");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_pixel32,"nme_bitmap_data_get_pixel32");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_array,"nme_bitmap_data_get_array");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_color_bounds_rect,"nme_bitmap_data_get_color_bounds_rect");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_scroll,"nme_bitmap_data_scroll");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel,"nme_bitmap_data_set_pixel");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel32,"nme_bitmap_data_set_pixel32");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_pixel_rgba,"nme_bitmap_data_set_pixel_rgba");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_bytes,"nme_bitmap_data_set_bytes");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_format,"nme_bitmap_data_set_format");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_array,"nme_bitmap_data_set_array");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_create_hardware_surface,"nme_bitmap_data_create_hardware_surface");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_destroy_hardware_surface,"nme_bitmap_data_destroy_hardware_surface");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_generate_filter_rect,"nme_bitmap_data_generate_filter_rect");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_render_surface_to_surface,"nme_render_surface_to_surface");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_height,"nme_bitmap_data_height");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_width,"nme_bitmap_data_width");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_transparent,"nme_bitmap_data_get_transparent");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_flags,"nme_bitmap_data_set_flags");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_encode,"nme_bitmap_data_encode");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_dump_bits,"nme_bitmap_data_dump_bits");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_dispose,"nme_bitmap_data_dispose");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_noise,"nme_bitmap_data_noise");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_flood_fill,"nme_bitmap_data_flood_fill");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_get_prem_alpha,"nme_bitmap_data_get_prem_alpha");
	HX_VISIT_MEMBER_NAME(Surface_obj::nme_bitmap_data_set_prem_alpha,"nme_bitmap_data_set_prem_alpha");
};

#endif

hx::Class Surface_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"),
	HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00"),
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56"),
	HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53"),
	HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromHaxeBytes","\x95","\x8d","\xb4","\x66"),
	HX_HCSTRING("nme_bitmap_data_create","\xba","\x14","\x74","\x43"),
	HX_HCSTRING("nme_bitmap_data_load","\x64","\xbc","\xe0","\x98"),
	HX_HCSTRING("nme_bitmap_data_from_bytes","\x54","\x45","\x10","\xca"),
	HX_HCSTRING("nme_bitmap_data_clear","\x8f","\x45","\x30","\xfb"),
	HX_HCSTRING("nme_bitmap_data_clone","\x5f","\xe7","\x37","\xfb"),
	HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae"),
	HX_HCSTRING("nme_bitmap_data_color_transform","\xd2","\x7e","\x4f","\x30"),
	HX_HCSTRING("nme_bitmap_data_copy","\xf3","\xdd","\xed","\x92"),
	HX_HCSTRING("nme_bitmap_data_copy_channel","\x37","\xe3","\x43","\x71"),
	HX_HCSTRING("nme_bitmap_data_fill","\xc1","\xf0","\xe4","\x94"),
	HX_HCSTRING("nme_bitmap_data_get_pixels","\xb4","\xc3","\x12","\x7f"),
	HX_HCSTRING("nme_bitmap_data_get_pixel","\xdf","\x1f","\xe9","\xcc"),
	HX_HCSTRING("nme_bitmap_data_get_pixel32","\x3e","\x42","\x58","\xb1"),
	HX_HCSTRING("nme_bitmap_data_get_array","\xf2","\xc6","\xd4","\x2f"),
	HX_HCSTRING("nme_bitmap_data_get_color_bounds_rect","\x2b","\xfd","\x24","\xae"),
	HX_HCSTRING("nme_bitmap_data_scroll","\xcb","\x85","\xc9","\x0e"),
	HX_HCSTRING("nme_bitmap_data_set_pixel","\xeb","\x0b","\x3a","\xb0"),
	HX_HCSTRING("nme_bitmap_data_set_pixel32","\x4a","\x49","\xc5","\xbb"),
	HX_HCSTRING("nme_bitmap_data_set_pixel_rgba","\xc8","\xcc","\x15","\x1f"),
	HX_HCSTRING("nme_bitmap_data_set_bytes","\xd0","\x4d","\x2e","\xab"),
	HX_HCSTRING("nme_bitmap_data_set_format","\x32","\x02","\x75","\xf3"),
	HX_HCSTRING("nme_bitmap_data_set_array","\xfe","\xb2","\x25","\x13"),
	HX_HCSTRING("nme_bitmap_data_create_hardware_surface","\xbb","\x72","\xc0","\x82"),
	HX_HCSTRING("nme_bitmap_data_destroy_hardware_surface","\xb9","\x07","\x98","\x4b"),
	HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31"),
	HX_HCSTRING("nme_render_surface_to_surface","\x4b","\x6f","\x6a","\x5d"),
	HX_HCSTRING("nme_bitmap_data_height","\xa5","\xb5","\xb0","\xc9"),
	HX_HCSTRING("nme_bitmap_data_width","\x08","\x8a","\x37","\x7d"),
	HX_HCSTRING("nme_bitmap_data_get_transparent","\x6b","\x8d","\xfe","\x19"),
	HX_HCSTRING("nme_bitmap_data_set_flags","\xac","\x70","\x22","\xf0"),
	HX_HCSTRING("nme_bitmap_data_encode","\xd4","\x9f","\x48","\xc1"),
	HX_HCSTRING("nme_bitmap_data_dump_bits","\x33","\x3a","\xbb","\xc1"),
	HX_HCSTRING("nme_bitmap_data_dispose","\x21","\xd9","\xff","\x6b"),
	HX_HCSTRING("nme_bitmap_data_noise","\x9c","\x63","\x97","\x52"),
	HX_HCSTRING("nme_bitmap_data_flood_fill","\xa2","\x6c","\x90","\x64"),
	HX_HCSTRING("nme_bitmap_data_get_prem_alpha","\x10","\xdd","\x98","\x67"),
	HX_HCSTRING("nme_bitmap_data_set_prem_alpha","\x84","\xc5","\xb8","\x87"),
	::String(null()) };

void Surface_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.bare.Surface","\xf9","\x9a","\x6e","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Surface_obj::__GetStatic;
	__mClass->mSetStaticField = &Surface_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Surface_obj >;
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

void Surface_obj::__boot()
{
	PNG= HX_HCSTRING("png","\xa9","\x5c","\x55","\x00");
	JPG= HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00");
	TRANSPARENT= (int)1;
	HARDWARE= (int)2;
	FORMAT_8888= (int)0;
	FORMAT_4444= (int)1;
	FORMAT_565= (int)2;
	nme_bitmap_data_create= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_create","\xba","\x14","\x74","\x43"),(int)-1);
	nme_bitmap_data_load= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_load","\x64","\xbc","\xe0","\x98"),(int)2);
	nme_bitmap_data_from_bytes= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_from_bytes","\x54","\x45","\x10","\xca"),(int)2);
	nme_bitmap_data_clear= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_clear","\x8f","\x45","\x30","\xfb"),(int)2);
	nme_bitmap_data_clone= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_clone","\x5f","\xe7","\x37","\xfb"),(int)1);
	nme_bitmap_data_apply_filter= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae"),(int)5);
	nme_bitmap_data_color_transform= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_color_transform","\xd2","\x7e","\x4f","\x30"),(int)3);
	nme_bitmap_data_copy= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_copy","\xf3","\xdd","\xed","\x92"),(int)5);
	nme_bitmap_data_copy_channel= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_copy_channel","\x37","\xe3","\x43","\x71"),(int)-1);
	nme_bitmap_data_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_fill","\xc1","\xf0","\xe4","\x94"),(int)4);
	nme_bitmap_data_get_pixels= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_pixels","\xb4","\xc3","\x12","\x7f"),(int)2);
	nme_bitmap_data_get_pixel= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_pixel","\xdf","\x1f","\xe9","\xcc"),(int)3);
	nme_bitmap_data_get_pixel32= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_pixel32","\x3e","\x42","\x58","\xb1"),(int)3);
	nme_bitmap_data_get_array= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_array","\xf2","\xc6","\xd4","\x2f"),(int)3);
	nme_bitmap_data_get_color_bounds_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_color_bounds_rect","\x2b","\xfd","\x24","\xae"),(int)5);
	nme_bitmap_data_scroll= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_scroll","\xcb","\x85","\xc9","\x0e"),(int)3);
	nme_bitmap_data_set_pixel= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_pixel","\xeb","\x0b","\x3a","\xb0"),(int)4);
	nme_bitmap_data_set_pixel32= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_pixel32","\x4a","\x49","\xc5","\xbb"),(int)4);
	nme_bitmap_data_set_pixel_rgba= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_pixel_rgba","\xc8","\xcc","\x15","\x1f"),(int)4);
	nme_bitmap_data_set_bytes= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_bytes","\xd0","\x4d","\x2e","\xab"),(int)4);
	nme_bitmap_data_set_format= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_format","\x32","\x02","\x75","\xf3"),(int)2);
	nme_bitmap_data_set_array= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_array","\xfe","\xb2","\x25","\x13"),(int)3);
	nme_bitmap_data_create_hardware_surface= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_create_hardware_surface","\xbb","\x72","\xc0","\x82"),(int)1);
	nme_bitmap_data_destroy_hardware_surface= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_destroy_hardware_surface","\xb9","\x07","\x98","\x4b"),(int)1);
	nme_bitmap_data_generate_filter_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31"),(int)3);
	nme_render_surface_to_surface= ::nme::Loader_obj::load(HX_HCSTRING("nme_render_surface_to_surface","\x4b","\x6f","\x6a","\x5d"),(int)-1);
	nme_bitmap_data_height= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_height","\xa5","\xb5","\xb0","\xc9"),(int)1);
	nme_bitmap_data_width= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_width","\x08","\x8a","\x37","\x7d"),(int)1);
	nme_bitmap_data_get_transparent= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_transparent","\x6b","\x8d","\xfe","\x19"),(int)1);
	nme_bitmap_data_set_flags= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_flags","\xac","\x70","\x22","\xf0"),(int)2);
	nme_bitmap_data_encode= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_encode","\xd4","\x9f","\x48","\xc1"),(int)3);
	nme_bitmap_data_dump_bits= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_dump_bits","\x33","\x3a","\xbb","\xc1"),(int)1);
	nme_bitmap_data_dispose= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_dispose","\x21","\xd9","\xff","\x6b"),(int)1);
	nme_bitmap_data_noise= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_noise","\x9c","\x63","\x97","\x52"),(int)-1);
	nme_bitmap_data_flood_fill= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_flood_fill","\xa2","\x6c","\x90","\x64"),(int)4);
	nme_bitmap_data_get_prem_alpha= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_get_prem_alpha","\x10","\xdd","\x98","\x67"),(int)1);
	nme_bitmap_data_set_prem_alpha= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_set_prem_alpha","\x84","\xc5","\xb8","\x87"),(int)2);
}

} // end namespace nme
} // end namespace bare
