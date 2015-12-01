#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_Memory
#include <nme/Memory.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_BlendMode
#include <nme/display/BlendMode.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_filters_BitmapFilter
#include <nme/filters/BitmapFilter.h>
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
namespace display{

Void BitmapData_obj::__construct(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode)
{
HX_STACK_FRAME("nme.display.BitmapData","new",0x6354841f,"nme.display.BitmapData.new","nme/display/BitmapData.hx",36,0xf75b41ef)
HX_STACK_THIS(this)
HX_STACK_ARG(inWidth,"inWidth")
HX_STACK_ARG(inHeight,"inHeight")
HX_STACK_ARG(__o_inTransparent,"inTransparent")
HX_STACK_ARG(inFillARGB,"inFillARGB")
HX_STACK_ARG(inGPUMode,"inGPUMode")
bool inTransparent = __o_inTransparent.Default(true);
{
	HX_STACK_LINE(37)
	int tmp = inWidth;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(37)
	int tmp1 = inHeight;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(37)
	bool tmp2 = inTransparent;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(37)
	Dynamic tmp3 = inFillARGB;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	Dynamic tmp4 = inGPUMode;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(37)
	super::__construct(tmp,tmp1,tmp2,tmp3,tmp4);
	HX_STACK_LINE(39)
	Dynamic tmp5 = this->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(39)
	bool tmp6 = (tmp5 == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(39)
	if ((tmp6)){
		HX_STACK_LINE(42)
		::hx::Class tmp7 = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		::hx::Class className = tmp7;		HX_STACK_VAR(className,"className");
		HX_STACK_LINE(43)
		::hx::Class tmp8 = className;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(43)
		bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		if ((tmp9)){
			HX_STACK_LINE(45)
			::hx::Class tmp10 = className;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			Dynamic tmp11 = ::Reflect_obj::field(tmp10,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(45)
			::String resoName = tmp11;		HX_STACK_VAR(resoName,"resoName");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::String tmp12 = resoName;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(46)
				::haxe::io::Bytes tmp13 = ::haxe::Resource_obj::getBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(46)
				::nme::utils::ByteArray tmp14 = ::nme::utils::ByteArray_obj::fromBytes(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(46)
				::nme::utils::ByteArray inBytes = tmp14;		HX_STACK_VAR(inBytes,"inBytes");
				HX_STACK_LINE(46)
				::nme::utils::ByteArray tmp15 = inBytes;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(46)
				Dynamic tmp16 = ::nme::bare::Surface_obj::nme_bitmap_data_from_bytes(tmp15,null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(46)
				this->nmeHandle = tmp16;
			}
		}
	}
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int inWidth,int inHeight,hx::Null< bool >  __o_inTransparent,Dynamic inFillARGB,Dynamic inGPUMode)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inWidth,inHeight,__o_inTransparent,inFillARGB,inGPUMode);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::display::IBitmapDrawable_obj)) return operator ::nme::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::nme::display::IBitmapDrawable_obj *()
	{ return new ::nme::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::nme::display::BitmapData sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::nme::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("nme.display.BitmapData","applyFilter",0x52b8ea85,"nme.display.BitmapData.applyFilter","nme/display/BitmapData.hx",52,0xf75b41ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(53)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		Dynamic tmp1 = sourceBitmapData->nmeHandle;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(53)
		::nme::geom::Rectangle tmp2 = sourceRect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(53)
		::nme::geom::Point tmp3 = destPoint;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(53)
		::nme::filters::BitmapFilter tmp4 = filter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(53)
		::nme::display::BitmapData_obj::nme_bitmap_data_apply_filter(tmp,tmp1,tmp2,tmp3,tmp4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::nme::bare::Surface BitmapData_obj::clone( ){
	HX_STACK_FRAME("nme.display.BitmapData","clone",0xf3c774dc,"nme.display.BitmapData.clone","nme/display/BitmapData.hx",57,0xf75b41ef)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	bool tmp = this->get_transparent();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::nme::display::BitmapData tmp1 = ::nme::display::BitmapData_obj::__new((int)0,(int)0,tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::nme::display::BitmapData bm = tmp1;		HX_STACK_VAR(bm,"bm");
	HX_STACK_LINE(59)
	Dynamic tmp2 = this->nmeHandle;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_clone(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	bm->nmeHandle = tmp3;
	HX_STACK_LINE(60)
	::nme::display::BitmapData tmp4 = bm;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(60)
	return tmp4;
}


Void BitmapData_obj::draw( ::nme::display::IBitmapDrawable source,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::nme::display::BlendMode blendMode,::nme::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("nme.display.BitmapData","draw",0x800cbf65,"nme.display.BitmapData.draw","nme/display/BitmapData.hx",69,0xf75b41ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(70)
		Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(70)
		::nme::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(70)
		::nme::geom::ColorTransform tmp2 = colorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(70)
		::nme::display::BlendMode tmp3 = blendMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(70)
		::String tmp4 = ::Std_obj::string(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(70)
		::nme::geom::Rectangle tmp5 = clipRect;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(70)
		bool tmp6 = smoothing;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(70)
		source->nmeDrawToSurface(tmp,tmp1,tmp2,tmp4,tmp5,tmp6);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

int BitmapData_obj::threshold( ::nme::display::BitmapData sourceBitmapData,::nme::geom::Rectangle sourceRect,::nme::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("nme.display.BitmapData","threshold",0x603050aa,"nme.display.BitmapData.threshold","nme/display/BitmapData.hx",110,0xf75b41ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(113)
		bool tmp = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(113)
			::nme::geom::Rectangle tmp3 = this->get_rect();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			::nme::geom::Rectangle tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			::nme::geom::Rectangle tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			::nme::geom::Rectangle tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			::nme::geom::Rectangle tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			tmp2 = sourceRect->equals(tmp7);
		}
		else{
			HX_STACK_LINE(113)
			tmp2 = false;
		}
		HX_STACK_LINE(113)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(113)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		if ((tmp3)){
			HX_STACK_LINE(113)
			tmp4 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(113)
			tmp4 = false;
		}
		HX_STACK_LINE(113)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(113)
		if ((tmp4)){
			HX_STACK_LINE(113)
			tmp5 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(113)
			tmp5 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp5)){
			HX_STACK_LINE(114)
			::String tmp6 = operation;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(114)
			int tmp7 = threshold;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(114)
			int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			int tmp9 = mask;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			int tmp10 = this->_self_threshold(tmp6,tmp7,tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(114)
			return tmp10;
		}
		HX_STACK_LINE(117)
		Float tmp6 = sourceRect->x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(117)
		int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(117)
		int sx = tmp7;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(118)
		Float tmp8 = sourceRect->y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(118)
		int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(118)
		int sy = tmp9;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(119)
		int tmp10 = sourceBitmapData->get_width();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(119)
		int tmp11 = ::Std_obj::_int(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(119)
		int sw = tmp11;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(120)
		int tmp12 = sourceBitmapData->get_height();		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(120)
		int tmp13 = ::Std_obj::_int(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(120)
		int sh = tmp13;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(122)
		Float tmp14 = destPoint->x;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(122)
		int dx = tmp15;		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(123)
		Float tmp16 = destPoint->y;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(123)
		int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(123)
		int dy = tmp17;		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(125)
		int tmp18 = this->get_width();		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		int tmp19 = sw;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(125)
		int tmp20 = (tmp18 - tmp19);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(125)
		int tmp21 = dx;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(125)
		int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(125)
		int bw = tmp22;		HX_STACK_VAR(bw,"bw");
		HX_STACK_LINE(126)
		int tmp23 = this->get_height();		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(126)
		int tmp24 = sh;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(126)
		int tmp25 = (tmp23 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(126)
		int tmp26 = dy;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(126)
		int tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(126)
		int bh = tmp27;		HX_STACK_VAR(bh,"bh");
		HX_STACK_LINE(128)
		bool tmp28 = (bw < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(128)
		int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(128)
		if ((tmp28)){
			HX_STACK_LINE(128)
			int tmp30 = sw;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(128)
			int tmp31 = this->get_width();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(128)
			int tmp32 = sw;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(128)
			int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(128)
			int tmp34 = dx;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(128)
			int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(128)
			tmp29 = (tmp30 + tmp35);
		}
		else{
			HX_STACK_LINE(128)
			tmp29 = sw;
		}
		HX_STACK_LINE(128)
		int dw = tmp29;		HX_STACK_VAR(dw,"dw");
		HX_STACK_LINE(129)
		bool tmp30 = (bw < (int)0);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(129)
		int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(129)
		if ((tmp30)){
			HX_STACK_LINE(129)
			int tmp32 = sh;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(129)
			int tmp33 = this->get_height();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(129)
			int tmp34 = sh;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(129)
			int tmp35 = (tmp33 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(129)
			int tmp36 = dy;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(129)
			int tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(129)
			tmp31 = (tmp32 + tmp37);
		}
		else{
			HX_STACK_LINE(129)
			tmp31 = sh;
		}
		HX_STACK_LINE(129)
		int dh = tmp31;		HX_STACK_VAR(dh,"dh");
		HX_STACK_LINE(131)
		int hits = (int)0;		HX_STACK_VAR(hits,"hits");
		HX_STACK_LINE(134)
		int tmp32 = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(134)
		int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(134)
		int tmp34 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(134)
		int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(134)
		int tmp36 = (int(tmp35) << int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(134)
		int tmp37 = (int(tmp33) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(134)
		int tmp38 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(134)
		int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(134)
		int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(134)
		int tmp41 = (int(tmp37) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(134)
		int tmp42 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(134)
		int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(134)
		int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(134)
		threshold = tmp44;
		HX_STACK_LINE(135)
		int tmp45 = (int(color) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(135)
		int tmp46 = (int(tmp45) << int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(135)
		int tmp47 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(135)
		int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(135)
		int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(135)
		int tmp50 = (int(tmp46) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(135)
		int tmp51 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(135)
		int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(135)
		int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(135)
		int tmp54 = (int(tmp50) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(135)
		int tmp55 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(135)
		int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(135)
		int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(135)
		color = tmp57;
		HX_STACK_LINE(140)
		int tmp58 = (sw * sh);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(140)
		int tmp59 = (tmp58 * (int)4);		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(140)
		int canvas_mem = tmp59;		HX_STACK_VAR(canvas_mem,"canvas_mem");
		HX_STACK_LINE(141)
		int source_mem = (int)0;		HX_STACK_VAR(source_mem,"source_mem");
		HX_STACK_LINE(142)
		bool tmp60 = copySource;		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(142)
		if ((tmp60)){
			HX_STACK_LINE(143)
			int tmp61 = (sw * sh);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(143)
			int tmp62 = (tmp61 * (int)4);		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(143)
			source_mem = tmp62;
		}
		HX_STACK_LINE(146)
		int tmp61 = (canvas_mem + source_mem);		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(146)
		int total_mem = tmp61;		HX_STACK_VAR(total_mem,"total_mem");
		HX_STACK_LINE(147)
		::nme::utils::ByteArray tmp62 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(147)
		::nme::utils::ByteArray mem = tmp62;		HX_STACK_VAR(mem,"mem");
		HX_STACK_LINE(148)
		int tmp63 = total_mem;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(148)
		mem->setLength(tmp63);
		HX_STACK_LINE(151)
		mem->position = (int)0;
		HX_STACK_LINE(152)
		::nme::display::BitmapData tmp64 = hx::TCast< ::nme::display::BitmapData >::cast(sourceBitmapData->clone());		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(152)
		::nme::bare::Surface bd1 = tmp64;		HX_STACK_VAR(bd1,"bd1");
		HX_STACK_LINE(153)
		::nme::geom::Rectangle tmp65 = sourceRect;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(153)
		::nme::utils::ByteArray tmp66 = bd1->getPixels(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(153)
		mem->writeBytes(tmp66,null(),null());
		HX_STACK_LINE(154)
		mem->position = canvas_mem;
		HX_STACK_LINE(155)
		bool tmp67 = copySource;		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(155)
		if ((tmp67)){
			HX_STACK_LINE(156)
			::nme::display::BitmapData tmp68 = hx::TCast< ::nme::display::BitmapData >::cast(sourceBitmapData->clone());		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(156)
			::nme::bare::Surface bd2 = tmp68;		HX_STACK_VAR(bd2,"bd2");
			HX_STACK_LINE(157)
			::nme::geom::Rectangle tmp69 = sourceRect;		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(157)
			::nme::utils::ByteArray tmp70 = bd2->getPixels(tmp69);		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(157)
			mem->writeBytes(tmp70,null(),null());
		}
		HX_STACK_LINE(160)
		mem->position = (int)0;
		HX_STACK_LINE(163)
		::nme::utils::ByteArray tmp68 = mem;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(163)
		::nme::Memory_obj::select(tmp68);
		HX_STACK_LINE(165)
		int tmp69 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(165)
		int thresh_mask = tmp69;		HX_STACK_VAR(thresh_mask,"thresh_mask");
		HX_STACK_LINE(168)
		{
			HX_STACK_LINE(168)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				bool tmp70 = (_g < dh);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(168)
				bool tmp71 = !(tmp70);		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(168)
				if ((tmp71)){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				int tmp72 = (_g)++;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(168)
				int yy = tmp72;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(169)
				{
					HX_STACK_LINE(169)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(169)
					while((true)){
						HX_STACK_LINE(169)
						bool tmp73 = (_g1 < dw);		HX_STACK_VAR(tmp73,"tmp73");
						HX_STACK_LINE(169)
						bool tmp74 = !(tmp73);		HX_STACK_VAR(tmp74,"tmp74");
						HX_STACK_LINE(169)
						if ((tmp74)){
							HX_STACK_LINE(169)
							break;
						}
						HX_STACK_LINE(169)
						int tmp75 = (_g1)++;		HX_STACK_VAR(tmp75,"tmp75");
						HX_STACK_LINE(169)
						int xx = tmp75;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(170)
						int tmp76 = (xx + sx);		HX_STACK_VAR(tmp76,"tmp76");
						HX_STACK_LINE(170)
						int tmp77 = (yy + sy);		HX_STACK_VAR(tmp77,"tmp77");
						HX_STACK_LINE(170)
						int tmp78 = sw;		HX_STACK_VAR(tmp78,"tmp78");
						HX_STACK_LINE(170)
						int tmp79 = (tmp77 * tmp78);		HX_STACK_VAR(tmp79,"tmp79");
						HX_STACK_LINE(170)
						int tmp80 = (tmp76 + tmp79);		HX_STACK_VAR(tmp80,"tmp80");
						HX_STACK_LINE(170)
						int tmp81 = (tmp80 * (int)4);		HX_STACK_VAR(tmp81,"tmp81");
						HX_STACK_LINE(170)
						int pos = tmp81;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(171)
						int tmp82 = ::__hxcpp_memory_get_i32(pos);		HX_STACK_VAR(tmp82,"tmp82");
						HX_STACK_LINE(171)
						int pixelValue = tmp82;		HX_STACK_VAR(pixelValue,"pixelValue");
						HX_STACK_LINE(172)
						int tmp83 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp83,"tmp83");
						HX_STACK_LINE(172)
						int pix_mask = tmp83;		HX_STACK_VAR(pix_mask,"pix_mask");
						HX_STACK_LINE(174)
						int tmp84 = pix_mask;		HX_STACK_VAR(tmp84,"tmp84");
						HX_STACK_LINE(174)
						int tmp85 = thresh_mask;		HX_STACK_VAR(tmp85,"tmp85");
						HX_STACK_LINE(174)
						int tmp86 = ::nme::display::BitmapData_obj::ucompare(tmp84,tmp85);		HX_STACK_VAR(tmp86,"tmp86");
						HX_STACK_LINE(174)
						int i = tmp86;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(175)
						bool test = false;		HX_STACK_VAR(test,"test");
						HX_STACK_LINE(176)
						bool tmp87 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp87,"tmp87");
						HX_STACK_LINE(176)
						if ((tmp87)){
							HX_STACK_LINE(176)
							bool tmp88 = (i == (int)0);		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(176)
							test = tmp88;
						}
						else{
							HX_STACK_LINE(177)
							bool tmp88 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(177)
							if ((tmp88)){
								HX_STACK_LINE(177)
								bool tmp89 = (i == (int)-1);		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(177)
								test = tmp89;
							}
							else{
								HX_STACK_LINE(178)
								bool tmp89 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp89,"tmp89");
								HX_STACK_LINE(178)
								if ((tmp89)){
									HX_STACK_LINE(178)
									bool tmp90 = (i == (int)1);		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(178)
									test = tmp90;
								}
								else{
									HX_STACK_LINE(179)
									bool tmp90 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(179)
									if ((tmp90)){
										HX_STACK_LINE(179)
										bool tmp91 = (i != (int)0);		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(179)
										test = tmp91;
									}
									else{
										HX_STACK_LINE(180)
										bool tmp91 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(180)
										if ((tmp91)){
											HX_STACK_LINE(180)
											bool tmp92 = (i == (int)0);		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(180)
											bool tmp93 = !(tmp92);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(180)
											bool tmp94;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(180)
											if ((tmp93)){
												HX_STACK_LINE(180)
												tmp94 = (i == (int)-1);
											}
											else{
												HX_STACK_LINE(180)
												tmp94 = true;
											}
											HX_STACK_LINE(180)
											test = tmp94;
										}
										else{
											HX_STACK_LINE(181)
											bool tmp92 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(181)
											if ((tmp92)){
												HX_STACK_LINE(181)
												bool tmp93 = (i == (int)0);		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(181)
												bool tmp94 = !(tmp93);		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(181)
												bool tmp95;		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(181)
												if ((tmp94)){
													HX_STACK_LINE(181)
													tmp95 = (i == (int)1);
												}
												else{
													HX_STACK_LINE(181)
													tmp95 = true;
												}
												HX_STACK_LINE(181)
												test = tmp95;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(182)
						bool tmp88 = test;		HX_STACK_VAR(tmp88,"tmp88");
						HX_STACK_LINE(182)
						if ((tmp88)){
							HX_STACK_LINE(183)
							::__hxcpp_memory_set_i32(pos,color);
							HX_STACK_LINE(184)
							(hits)++;
						}
						else{
							HX_STACK_LINE(185)
							bool tmp89 = copySource;		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(185)
							if ((tmp89)){
								HX_STACK_LINE(186)
								int tmp90 = ::__hxcpp_memory_get_i32((canvas_mem + pos));		HX_STACK_VAR(tmp90,"tmp90");
								HX_STACK_LINE(186)
								int source_color = tmp90;		HX_STACK_VAR(source_color,"source_color");
								HX_STACK_LINE(187)
								::__hxcpp_memory_set_i32(pos,source_color);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(191)
		mem->position = (int)0;
		HX_STACK_LINE(192)
		::nme::geom::Rectangle tmp70 = sourceRect;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(192)
		::nme::utils::ByteArray tmp71 = mem;		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(192)
		bd1->setPixels(tmp70,tmp71);
		HX_STACK_LINE(193)
		::nme::bare::Surface tmp72 = bd1;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(193)
		::nme::geom::Rectangle tmp73 = bd1->get_rect();		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(193)
		::nme::geom::Point tmp74 = destPoint;		HX_STACK_VAR(tmp74,"tmp74");
		HX_STACK_LINE(193)
		this->copyPixels(tmp72,tmp73,tmp74,null(),null(),null());
		HX_STACK_LINE(194)
		::nme::Memory_obj::select(null());
		HX_STACK_LINE(195)
		int tmp75 = hits;		HX_STACK_VAR(tmp75,"tmp75");
		HX_STACK_LINE(195)
		return tmp75;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

int BitmapData_obj::_self_threshold( ::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
	HX_STACK_FRAME("nme.display.BitmapData","_self_threshold",0x6d3450d6,"nme.display.BitmapData._self_threshold","nme/display/BitmapData.hx",270,0xf75b41ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(271)
		int hits = (int)0;		HX_STACK_VAR(hits,"hits");
		HX_STACK_LINE(274)
		int tmp = (int(threshold) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(274)
		int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(274)
		int tmp2 = (int(threshold) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(274)
		int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(274)
		int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(274)
		int tmp5 = (int(tmp1) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(274)
		int tmp6 = (int(threshold) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(274)
		int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(274)
		int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(274)
		int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(274)
		int tmp10 = (int(threshold) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(274)
		int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(274)
		int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(274)
		threshold = tmp12;
		HX_STACK_LINE(275)
		int tmp13 = (int(color) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(275)
		int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(275)
		int tmp15 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(275)
		int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(275)
		int tmp17 = (int(tmp16) << int((int)16));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(275)
		int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(275)
		int tmp19 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(275)
		int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(275)
		int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(275)
		int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(275)
		int tmp23 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(275)
		int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(275)
		int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(275)
		color = tmp25;
		HX_STACK_LINE(278)
		::nme::utils::ByteArray tmp26 = ::nme::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(278)
		::nme::utils::ByteArray mem = tmp26;		HX_STACK_VAR(mem,"mem");
		HX_STACK_LINE(280)
		int tmp27 = this->get_width();		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(280)
		int tmp28 = this->get_height();		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(280)
		int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(280)
		int tmp30 = (tmp29 * (int)4);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(280)
		mem->setLength(tmp30);
		HX_STACK_LINE(283)
		::nme::geom::Rectangle tmp31 = this->get_rect();		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(283)
		::nme::utils::ByteArray tmp32 = this->getPixels(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(283)
		::nme::utils::ByteArray mem1 = tmp32;		HX_STACK_VAR(mem1,"mem1");
		HX_STACK_LINE(284)
		mem1->position = (int)0;
		HX_STACK_LINE(287)
		::nme::utils::ByteArray tmp33 = mem1;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(287)
		::nme::Memory_obj::select(tmp33);
		HX_STACK_LINE(289)
		int tmp34 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(289)
		int thresh_mask = tmp34;		HX_STACK_VAR(thresh_mask,"thresh_mask");
		HX_STACK_LINE(291)
		{
			HX_STACK_LINE(291)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(291)
			int tmp35 = this->get_height();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(291)
			int _g = tmp35;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(291)
			while((true)){
				HX_STACK_LINE(291)
				bool tmp36 = (_g1 < _g);		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(291)
				bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(291)
				if ((tmp37)){
					HX_STACK_LINE(291)
					break;
				}
				HX_STACK_LINE(291)
				int tmp38 = (_g1)++;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(291)
				int yy = tmp38;		HX_STACK_VAR(yy,"yy");
				HX_STACK_LINE(292)
				int tmp39 = this->get_width();		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(292)
				int tmp40 = yy;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(292)
				int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(292)
				int width_yy = tmp41;		HX_STACK_VAR(width_yy,"width_yy");
				HX_STACK_LINE(293)
				{
					HX_STACK_LINE(293)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(293)
					int tmp42 = this->get_width();		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(293)
					int _g2 = tmp42;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(293)
					while((true)){
						HX_STACK_LINE(293)
						bool tmp43 = (_g3 < _g2);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(293)
						bool tmp44 = !(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(293)
						if ((tmp44)){
							HX_STACK_LINE(293)
							break;
						}
						HX_STACK_LINE(293)
						int tmp45 = (_g3)++;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(293)
						int xx = tmp45;		HX_STACK_VAR(xx,"xx");
						HX_STACK_LINE(294)
						int tmp46 = (width_yy + xx);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(294)
						int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(294)
						int pos = tmp47;		HX_STACK_VAR(pos,"pos");
						HX_STACK_LINE(295)
						int tmp48 = ::__hxcpp_memory_get_i32(pos);		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(295)
						int pixelValue = tmp48;		HX_STACK_VAR(pixelValue,"pixelValue");
						HX_STACK_LINE(296)
						int tmp49 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(296)
						int pix_mask = tmp49;		HX_STACK_VAR(pix_mask,"pix_mask");
						HX_STACK_LINE(298)
						int tmp50 = pix_mask;		HX_STACK_VAR(tmp50,"tmp50");
						HX_STACK_LINE(298)
						int tmp51 = thresh_mask;		HX_STACK_VAR(tmp51,"tmp51");
						HX_STACK_LINE(298)
						int tmp52 = ::nme::display::BitmapData_obj::ucompare(tmp50,tmp51);		HX_STACK_VAR(tmp52,"tmp52");
						HX_STACK_LINE(298)
						int i = tmp52;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(299)
						bool test = false;		HX_STACK_VAR(test,"test");
						HX_STACK_LINE(300)
						bool tmp53 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
						HX_STACK_LINE(300)
						if ((tmp53)){
							HX_STACK_LINE(300)
							bool tmp54 = (i == (int)0);		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(300)
							test = tmp54;
						}
						else{
							HX_STACK_LINE(301)
							bool tmp54 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(301)
							if ((tmp54)){
								HX_STACK_LINE(301)
								bool tmp55 = (i == (int)-1);		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(301)
								test = tmp55;
							}
							else{
								HX_STACK_LINE(302)
								bool tmp55 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(302)
								if ((tmp55)){
									HX_STACK_LINE(302)
									bool tmp56 = (i == (int)1);		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(302)
									test = tmp56;
								}
								else{
									HX_STACK_LINE(303)
									bool tmp56 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(303)
									if ((tmp56)){
										HX_STACK_LINE(303)
										bool tmp57 = (i != (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(303)
										test = tmp57;
									}
									else{
										HX_STACK_LINE(304)
										bool tmp57 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(304)
										if ((tmp57)){
											HX_STACK_LINE(304)
											bool tmp58 = (i == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(304)
											bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(304)
											bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
											HX_STACK_LINE(304)
											if ((tmp59)){
												HX_STACK_LINE(304)
												tmp60 = (i == (int)-1);
											}
											else{
												HX_STACK_LINE(304)
												tmp60 = true;
											}
											HX_STACK_LINE(304)
											test = tmp60;
										}
										else{
											HX_STACK_LINE(305)
											bool tmp58 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(305)
											if ((tmp58)){
												HX_STACK_LINE(305)
												bool tmp59 = (i == (int)0);		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(305)
												bool tmp60 = !(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(305)
												bool tmp61;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(305)
												if ((tmp60)){
													HX_STACK_LINE(305)
													tmp61 = (i == (int)1);
												}
												else{
													HX_STACK_LINE(305)
													tmp61 = true;
												}
												HX_STACK_LINE(305)
												test = tmp61;
											}
										}
									}
								}
							}
						}
						HX_STACK_LINE(306)
						bool tmp54 = test;		HX_STACK_VAR(tmp54,"tmp54");
						HX_STACK_LINE(306)
						if ((tmp54)){
							HX_STACK_LINE(307)
							::__hxcpp_memory_set_i32(pos,color);
							HX_STACK_LINE(308)
							(hits)++;
						}
					}
				}
			}
		}
		HX_STACK_LINE(312)
		mem1->position = (int)0;
		HX_STACK_LINE(313)
		::nme::geom::Rectangle tmp35 = this->get_rect();		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(313)
		::nme::utils::ByteArray tmp36 = mem1;		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(313)
		this->setPixels(tmp35,tmp36);
		HX_STACK_LINE(314)
		::nme::Memory_obj::select(null());
		HX_STACK_LINE(315)
		int tmp37 = hits;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(315)
		return tmp37;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,_self_threshold,return )

::nme::geom::Rectangle BitmapData_obj::generateFilterRect( ::nme::geom::Rectangle sourceRect,::nme::filters::BitmapFilter filter){
	HX_STACK_FRAME("nme.display.BitmapData","generateFilterRect",0xc54787b2,"nme.display.BitmapData.generateFilterRect","nme/display/BitmapData.hx",319,0xf75b41ef)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(320)
	::nme::geom::Rectangle tmp = ::nme::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(320)
	::nme::geom::Rectangle result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(321)
	::nme::geom::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(321)
	::nme::filters::BitmapFilter tmp2 = filter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(321)
	::nme::geom::Rectangle tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(321)
	::nme::display::BitmapData_obj::nme_bitmap_data_generate_filter_rect(tmp1,tmp2,tmp3);
	HX_STACK_LINE(322)
	::nme::geom::Rectangle tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(322)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("nme.display.BitmapData","lock",0x85542f4c,"nme.display.BitmapData.lock","nme/display/BitmapData.hx",366,0xf75b41ef)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::unlock( ::nme::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("nme.display.BitmapData","unlock",0xb1fd9065,"nme.display.BitmapData.unlock","nme/display/BitmapData.hx",371,0xf75b41ef)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

int BitmapData_obj::CLEAR;

int BitmapData_obj::BLACK;

int BitmapData_obj::WHITE;

int BitmapData_obj::RED;

int BitmapData_obj::GREEN;

int BitmapData_obj::BLUE;

::String BitmapData_obj::PNG;

::String BitmapData_obj::JPG;

int BitmapData_obj::TRANSPARENT;

int BitmapData_obj::HARDWARE;

int BitmapData_obj::FORMAT_8888;

int BitmapData_obj::FORMAT_4444;

int BitmapData_obj::FORMAT_565;

int BitmapData_obj::createColor( int inRGB,hx::Null< int >  __o_inAlpha){
int inAlpha = __o_inAlpha.Default(255);
	HX_STACK_FRAME("nme.display.BitmapData","createColor",0x0560b386,"nme.display.BitmapData.createColor","nme/display/BitmapData.hx",64,0xf75b41ef)
	HX_STACK_ARG(inRGB,"inRGB")
	HX_STACK_ARG(inAlpha,"inAlpha")
{
		HX_STACK_LINE(65)
		int tmp = inRGB;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		int tmp1 = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		int tmp2 = (int(tmp) | int(tmp1));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(65)
		return tmp2;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,createColor,return )

int BitmapData_obj::extractAlpha( int v){
	HX_STACK_FRAME("nme.display.BitmapData","extractAlpha",0x077c12be,"nme.display.BitmapData.extractAlpha","nme/display/BitmapData.hx",74,0xf75b41ef)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(74)
	int tmp = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(74)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractAlpha,return )

int BitmapData_obj::extractColor( int v){
	HX_STACK_FRAME("nme.display.BitmapData","extractColor",0x3041dcc3,"nme.display.BitmapData.extractColor","nme/display/BitmapData.hx",76,0xf75b41ef)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(76)
	int tmp = (int(v) & int((int)16777215));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(76)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,extractColor,return )

bool BitmapData_obj::sameValue( int a,int b){
	HX_STACK_FRAME("nme.display.BitmapData","sameValue",0x75b0e72a,"nme.display.BitmapData.sameValue","nme/display/BitmapData.hx",80,0xf75b41ef)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(81)
	bool tmp = (a == b);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(81)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,sameValue,return )

int BitmapData_obj::flip_pixel4( int pix4){
	HX_STACK_FRAME("nme.display.BitmapData","flip_pixel4",0x8fc9583f,"nme.display.BitmapData.flip_pixel4","nme/display/BitmapData.hx",90,0xf75b41ef)
	HX_STACK_ARG(pix4,"pix4")
	HX_STACK_LINE(91)
	int tmp = (int(pix4) & int((int)255));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(92)
	int tmp2 = (int(pix4) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(92)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(92)
	int tmp4 = (int(tmp3) << int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(91)
	int tmp5 = (int(tmp1) | int(tmp4));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(93)
	int tmp6 = (int(pix4) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(93)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(93)
	int tmp8 = (int(tmp7) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	int tmp9 = (int(tmp5) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(94)
	int tmp10 = (int(pix4) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(94)
	int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(91)
	int tmp12 = (int(tmp9) | int(tmp11));		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(91)
	return tmp12;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,flip_pixel4,return )

int BitmapData_obj::ucompare( int n1,int n2){
	HX_STACK_FRAME("nme.display.BitmapData","ucompare",0xa43798b1,"nme.display.BitmapData.ucompare","nme/display/BitmapData.hx",207,0xf75b41ef)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(208)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(209)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(218)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(218)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(218)
	tmp1 = tmp3;
	HX_STACK_LINE(219)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(219)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(219)
	tmp2 = tmp5;
	HX_STACK_LINE(220)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(220)
	if ((tmp6)){
		HX_STACK_LINE(222)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		if ((tmp7)){
			HX_STACK_LINE(222)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(222)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(222)
		return tmp8;
	}
	else{
		HX_STACK_LINE(226)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(226)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(226)
		tmp1 = tmp8;
		HX_STACK_LINE(227)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(227)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(227)
		tmp2 = tmp10;
		HX_STACK_LINE(229)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(229)
		if ((tmp11)){
			HX_STACK_LINE(230)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(230)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(230)
			if ((tmp12)){
				HX_STACK_LINE(230)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(230)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(230)
			return tmp13;
		}
		else{
			HX_STACK_LINE(235)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(235)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(235)
			tmp1 = tmp13;
			HX_STACK_LINE(236)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(236)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(236)
			tmp2 = tmp15;
			HX_STACK_LINE(238)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(238)
			if ((tmp16)){
				HX_STACK_LINE(239)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(239)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(239)
				if ((tmp17)){
					HX_STACK_LINE(239)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(239)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(239)
				return tmp18;
			}
			else{
				HX_STACK_LINE(243)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(243)
				tmp1 = tmp17;
				HX_STACK_LINE(244)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(244)
				tmp2 = tmp18;
				HX_STACK_LINE(246)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(246)
				if ((tmp19)){
					HX_STACK_LINE(247)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(247)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(247)
					if ((tmp20)){
						HX_STACK_LINE(247)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(247)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(247)
					return tmp21;
				}
				else{
					HX_STACK_LINE(251)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(220)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,ucompare,return )

::nme::utils::ByteArray BitmapData_obj::getRGBAPixels( ::nme::display::BitmapData bitmapData){
	HX_STACK_FRAME("nme.display.BitmapData","getRGBAPixels",0x5bb34b96,"nme.display.BitmapData.getRGBAPixels","nme/display/BitmapData.hx",326,0xf75b41ef)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(327)
	int tmp = bitmapData->get_width();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	int tmp1 = bitmapData->get_height();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	::nme::geom::Rectangle tmp2 = ::nme::geom::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(327)
	::nme::utils::ByteArray tmp3 = bitmapData->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(327)
	::nme::utils::ByteArray p = tmp3;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(328)
	int tmp4 = bitmapData->get_width();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(328)
	int tmp5 = bitmapData->get_height();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(328)
	int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(328)
	int num = tmp6;		HX_STACK_VAR(num,"num");
	HX_STACK_LINE(330)
	{
		HX_STACK_LINE(330)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		while((true)){
			HX_STACK_LINE(330)
			bool tmp7 = (_g < num);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(330)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(330)
			if ((tmp8)){
				HX_STACK_LINE(330)
				break;
			}
			HX_STACK_LINE(330)
			int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(330)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(332)
			::nme::utils::ByteArray tmp10 = p;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(332)
			int tmp11 = (i * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(332)
			int tmp12 = tmp10->__get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(332)
			int alpha = tmp12;		HX_STACK_VAR(alpha,"alpha");
			HX_STACK_LINE(333)
			::nme::utils::ByteArray tmp13 = p;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(333)
			int tmp14 = (i * (int)4);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(333)
			int tmp15 = (tmp14 + (int)1);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(333)
			int tmp16 = tmp13->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(333)
			int red = tmp16;		HX_STACK_VAR(red,"red");
			HX_STACK_LINE(334)
			::nme::utils::ByteArray tmp17 = p;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(334)
			int tmp18 = (i * (int)4);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(334)
			int tmp19 = (tmp18 + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(334)
			int tmp20 = tmp17->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(334)
			int green = tmp20;		HX_STACK_VAR(green,"green");
			HX_STACK_LINE(335)
			::nme::utils::ByteArray tmp21 = p;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(335)
			int tmp22 = (i * (int)4);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(335)
			int tmp23 = (tmp22 + (int)3);		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(335)
			int tmp24 = tmp21->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(335)
			int blue = tmp24;		HX_STACK_VAR(blue,"blue");
			HX_STACK_LINE(337)
			::nme::utils::ByteArray tmp25 = p;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(337)
			int tmp26 = (i * (int)4);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(337)
			int tmp27 = red;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(337)
			hx::__ArrayImplRef(tmp25,tmp26) = tmp27;
			HX_STACK_LINE(338)
			::nme::utils::ByteArray tmp28 = p;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(338)
			int tmp29 = (i * (int)4);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(338)
			int tmp30 = (tmp29 + (int)1);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(338)
			int tmp31 = green;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(338)
			hx::__ArrayImplRef(tmp28,tmp30) = tmp31;
			HX_STACK_LINE(339)
			::nme::utils::ByteArray tmp32 = p;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(339)
			int tmp33 = (i * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(339)
			int tmp34 = (tmp33 + (int)2);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(339)
			int tmp35 = blue;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(339)
			hx::__ArrayImplRef(tmp32,tmp34) = tmp35;
			HX_STACK_LINE(340)
			::nme::utils::ByteArray tmp36 = p;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(340)
			int tmp37 = (i * (int)4);		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(340)
			int tmp38 = (tmp37 + (int)3);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(340)
			int tmp39 = alpha;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(340)
			hx::__ArrayImplRef(tmp36,tmp38) = tmp39;
		}
	}
	HX_STACK_LINE(343)
	::nme::utils::ByteArray tmp7 = p;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(343)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getRGBAPixels,return )

::nme::display::BitmapData BitmapData_obj::load( ::String inFilename,hx::Null< int >  __o_format){
int format = __o_format.Default(0);
	HX_STACK_FRAME("nme.display.BitmapData","load",0x85542d87,"nme.display.BitmapData.load","nme/display/BitmapData.hx",347,0xf75b41ef)
	HX_STACK_ARG(inFilename,"inFilename")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(348)
		::nme::display::BitmapData tmp = ::nme::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(348)
		::nme::display::BitmapData result = tmp;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(349)
		::String tmp1 = inFilename;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(349)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(349)
		Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_load(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(349)
		result->nmeHandle = tmp3;
		HX_STACK_LINE(350)
		::nme::display::BitmapData tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(350)
		return tmp4;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,load,return )

::nme::display::BitmapData BitmapData_obj::loadFromBytes( ::nme::utils::ByteArray inBytes,::nme::utils::ByteArray inRawAlpha){
	HX_STACK_FRAME("nme.display.BitmapData","loadFromBytes",0xc2773c1a,"nme.display.BitmapData.loadFromBytes","nme/display/BitmapData.hx",354,0xf75b41ef)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_ARG(inRawAlpha,"inRawAlpha")
	HX_STACK_LINE(355)
	::nme::display::BitmapData tmp = ::nme::display::BitmapData_obj::__new((int)0,(int)0,null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(355)
	::nme::display::BitmapData result = tmp;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(356)
	{
		HX_STACK_LINE(356)
		::nme::utils::ByteArray tmp1 = inBytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		::nme::utils::ByteArray tmp2 = inRawAlpha;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		Dynamic tmp3 = ::nme::bare::Surface_obj::nme_bitmap_data_from_bytes(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		result->nmeHandle = tmp3;
	}
	HX_STACK_LINE(357)
	::nme::display::BitmapData tmp1 = result;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromBytes,return )

::nme::display::BitmapData BitmapData_obj::loadFromHaxeBytes( ::haxe::io::Bytes inBytes,::haxe::io::Bytes inRawAlpha){
	HX_STACK_FRAME("nme.display.BitmapData","loadFromHaxeBytes",0x2224b194,"nme.display.BitmapData.loadFromHaxeBytes","nme/display/BitmapData.hx",361,0xf75b41ef)
	HX_STACK_ARG(inBytes,"inBytes")
	HX_STACK_ARG(inRawAlpha,"inRawAlpha")
	HX_STACK_LINE(362)
	::haxe::io::Bytes tmp = inBytes;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(362)
	::nme::utils::ByteArray tmp1 = ::nme::utils::ByteArray_obj::fromBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(362)
	bool tmp2 = (inRawAlpha == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(362)
	::nme::utils::ByteArray tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(362)
	if ((tmp2)){
		HX_STACK_LINE(362)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(362)
		::haxe::io::Bytes tmp4 = inRawAlpha;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(362)
		tmp3 = ::nme::utils::ByteArray_obj::fromBytes(tmp4);
	}
	HX_STACK_LINE(362)
	::nme::display::BitmapData tmp4 = ::nme::display::BitmapData_obj::loadFromBytes(tmp1,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(362)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,loadFromHaxeBytes,return )

Dynamic BitmapData_obj::nme_bitmap_data_apply_filter;

Dynamic BitmapData_obj::nme_bitmap_data_generate_filter_rect;


BitmapData_obj::BitmapData_obj()
{
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_self_threshold") ) { return _self_threshold_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { outValue = RED; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { outValue = BLUE; return true;  }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLEAR") ) { outValue = CLEAR; return true;  }
		if (HX_FIELD_EQ(inName,"BLACK") ) { outValue = BLACK; return true;  }
		if (HX_FIELD_EQ(inName,"WHITE") ) { outValue = WHITE; return true;  }
		if (HX_FIELD_EQ(inName,"GREEN") ) { outValue = GREEN; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"HARDWARE") ) { outValue = HARDWARE; return true;  }
		if (HX_FIELD_EQ(inName,"ucompare") ) { outValue = ucompare_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sameValue") ) { outValue = sameValue_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"FORMAT_565") ) { outValue = FORMAT_565; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TRANSPARENT") ) { outValue = TRANSPARENT; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_8888") ) { outValue = FORMAT_8888; return true;  }
		if (HX_FIELD_EQ(inName,"FORMAT_4444") ) { outValue = FORMAT_4444; return true;  }
		if (HX_FIELD_EQ(inName,"createColor") ) { outValue = createColor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"flip_pixel4") ) { outValue = flip_pixel4_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"extractAlpha") ) { outValue = extractAlpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"extractColor") ) { outValue = extractColor_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRGBAPixels") ) { outValue = getRGBAPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"loadFromHaxeBytes") ) { outValue = loadFromHaxeBytes_dyn(); return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { outValue = nme_bitmap_data_apply_filter; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { outValue = nme_bitmap_data_generate_filter_rect; return true;  }
	}
	return false;
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"RED") ) { RED=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"BLUE") ) { BLUE=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CLEAR") ) { CLEAR=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BLACK") ) { BLACK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"WHITE") ) { WHITE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"GREEN") ) { GREEN=ioValue.Cast< int >(); return true; }
		break;
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
	case 28:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_apply_filter") ) { nme_bitmap_data_apply_filter=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"nme_bitmap_data_generate_filter_rect") ) { nme_bitmap_data_generate_filter_rect=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &BitmapData_obj::CLEAR,HX_HCSTRING("CLEAR","\x6d","\xa9","\x49","\xc6")},
	{hx::fsInt,(void *) &BitmapData_obj::BLACK,HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32")},
	{hx::fsInt,(void *) &BitmapData_obj::WHITE,HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47")},
	{hx::fsInt,(void *) &BitmapData_obj::RED,HX_HCSTRING("RED","\x31","\x75","\x3e","\x00")},
	{hx::fsInt,(void *) &BitmapData_obj::GREEN,HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17")},
	{hx::fsInt,(void *) &BitmapData_obj::BLUE,HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b")},
	{hx::fsString,(void *) &BitmapData_obj::PNG,HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00")},
	{hx::fsString,(void *) &BitmapData_obj::JPG,HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00")},
	{hx::fsInt,(void *) &BitmapData_obj::TRANSPARENT,HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8")},
	{hx::fsInt,(void *) &BitmapData_obj::HARDWARE,HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_8888,HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_4444,HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53")},
	{hx::fsInt,(void *) &BitmapData_obj::FORMAT_565,HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::nme_bitmap_data_apply_filter,HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae")},
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::nme_bitmap_data_generate_filter_rect,HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("_self_threshold","\x97","\x7a","\xd5","\xe7"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_MARK_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_MARK_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_MARK_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_apply_filter,"nme_bitmap_data_apply_filter");
	HX_MARK_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_generate_filter_rect,"nme_bitmap_data_generate_filter_rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::CLEAR,"CLEAR");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::PNG,"PNG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::JPG,"JPG");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::HARDWARE,"HARDWARE");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_8888,"FORMAT_8888");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_4444,"FORMAT_4444");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::FORMAT_565,"FORMAT_565");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_apply_filter,"nme_bitmap_data_apply_filter");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::nme_bitmap_data_generate_filter_rect,"nme_bitmap_data_generate_filter_rect");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("CLEAR","\x6d","\xa9","\x49","\xc6"),
	HX_HCSTRING("BLACK","\x9f","\x0d","\xe0","\x32"),
	HX_HCSTRING("WHITE","\x89","\x82","\xab","\x47"),
	HX_HCSTRING("RED","\x31","\x75","\x3e","\x00"),
	HX_HCSTRING("GREEN","\xa3","\x46","\xdb","\x17"),
	HX_HCSTRING("BLUE","\x9a","\x0a","\xda","\x2b"),
	HX_HCSTRING("PNG","\x89","\xf8","\x3c","\x00"),
	HX_HCSTRING("JPG","\xc1","\x6c","\x38","\x00"),
	HX_HCSTRING("TRANSPARENT","\x32","\x37","\xf6","\xf8"),
	HX_HCSTRING("HARDWARE","\xa8","\x72","\x59","\xcf"),
	HX_HCSTRING("FORMAT_8888","\x48","\x7b","\x79","\x56"),
	HX_HCSTRING("FORMAT_4444","\x48","\x94","\xd1","\x53"),
	HX_HCSTRING("FORMAT_565","\x6c","\x4e","\xc8","\x1a"),
	HX_HCSTRING("createColor","\xc7","\xa8","\xd7","\x73"),
	HX_HCSTRING("extractAlpha","\x5d","\xb6","\x1b","\x41"),
	HX_HCSTRING("extractColor","\x62","\x80","\xe1","\x69"),
	HX_HCSTRING("sameValue","\x2b","\x5a","\x24","\x4a"),
	HX_HCSTRING("flip_pixel4","\x80","\x4d","\x40","\xfe"),
	HX_HCSTRING("ucompare","\xd0","\x40","\x77","\xa7"),
	HX_HCSTRING("getRGBAPixels","\x17","\xd3","\xc2","\x8d"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadFromBytes","\x9b","\xc3","\x86","\xf4"),
	HX_HCSTRING("loadFromHaxeBytes","\x95","\x8d","\xb4","\x66"),
	HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae"),
	HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.BitmapData","\xad","\x88","\x62","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

void BitmapData_obj::__boot()
{
struct _Function_0_1{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",19,0xf75b41ef)
		{
			HX_STACK_LINE(19)
			int tmp = (int)0;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(19)
			return (int((int)0) | int(tmp));
		}
		return null();
	}
};
	CLEAR= _Function_0_1::Block();
struct _Function_0_2{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",20,0xf75b41ef)
		{
			HX_STACK_LINE(20)
			int inAlpha = (int)255;		HX_STACK_VAR(inAlpha,"inAlpha");
			HX_STACK_LINE(20)
			int tmp = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(20)
			return (int((int)0) | int(tmp));
		}
		return null();
	}
};
	BLACK= _Function_0_2::Block();
struct _Function_0_3{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",21,0xf75b41ef)
		{
			HX_STACK_LINE(21)
			int inAlpha = (int)255;		HX_STACK_VAR(inAlpha,"inAlpha");
			HX_STACK_LINE(21)
			int tmp = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(21)
			return (int((int)0) | int(tmp));
		}
		return null();
	}
};
	WHITE= _Function_0_3::Block();
struct _Function_0_4{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",22,0xf75b41ef)
		{
			HX_STACK_LINE(22)
			int inAlpha = (int)255;		HX_STACK_VAR(inAlpha,"inAlpha");
			HX_STACK_LINE(22)
			int tmp = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(22)
			return (int((int)16711680) | int(tmp));
		}
		return null();
	}
};
	RED= _Function_0_4::Block();
struct _Function_0_5{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",23,0xf75b41ef)
		{
			HX_STACK_LINE(23)
			int inAlpha = (int)255;		HX_STACK_VAR(inAlpha,"inAlpha");
			HX_STACK_LINE(23)
			int tmp = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(23)
			return (int((int)65280) | int(tmp));
		}
		return null();
	}
};
	GREEN= _Function_0_5::Block();
struct _Function_0_6{
	inline static int Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/display/BitmapData.hx",24,0xf75b41ef)
		{
			HX_STACK_LINE(24)
			int inAlpha = (int)255;		HX_STACK_VAR(inAlpha,"inAlpha");
			HX_STACK_LINE(24)
			int tmp = (int(inAlpha) << int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(24)
			return (int((int)255) | int(tmp));
		}
		return null();
	}
};
	BLUE= _Function_0_6::Block();
	PNG= HX_HCSTRING("png","\xa9","\x5c","\x55","\x00");
	JPG= HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00");
	TRANSPARENT= (int)1;
	HARDWARE= (int)2;
	FORMAT_8888= (int)0;
	FORMAT_4444= (int)1;
	FORMAT_565= (int)2;
	nme_bitmap_data_apply_filter= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_apply_filter","\xe7","\xe5","\x5a","\xae"),(int)5);
	nme_bitmap_data_generate_filter_rect= ::nme::Loader_obj::load(HX_HCSTRING("nme_bitmap_data_generate_filter_rect","\x3f","\xd5","\x6f","\x31"),(int)3);
}

} // end namespace nme
} // end namespace display
