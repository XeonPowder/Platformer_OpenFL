#ifndef INCLUDED_nme_display_IBitmapDrawable
#define INCLUDED_nme_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,geom,ColorTransform)
HX_DECLARE_CLASS2(nme,geom,Matrix)
HX_DECLARE_CLASS2(nme,geom,Rectangle)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  IBitmapDrawable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IBitmapDrawable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing)=0;
virtual Dynamic nmeDrawToSurface_dyn()=0;
};



template<typename IMPL>
class IBitmapDrawable_delegate_ : public IBitmapDrawable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IBitmapDrawable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void nmeDrawToSurface( Dynamic inSurface,::nme::geom::Matrix matrix,::nme::geom::ColorTransform colorTransform,::String blendMode,::nme::geom::Rectangle clipRect,bool smoothing) { return mDelegate->nmeDrawToSurface(inSurface,matrix,colorTransform,blendMode,clipRect,smoothing);}
		Dynamic nmeDrawToSurface_dyn() { return mDelegate->nmeDrawToSurface_dyn();}
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_IBitmapDrawable */ 
