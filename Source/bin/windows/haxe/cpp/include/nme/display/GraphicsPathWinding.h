#ifndef INCLUDED_nme_display_GraphicsPathWinding
#define INCLUDED_nme_display_GraphicsPathWinding

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,display,GraphicsPathWinding)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsPathWinding_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsPathWinding_obj OBJ_;
		GraphicsPathWinding_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.display.GraphicsPathWinding")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsPathWinding_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsPathWinding_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicsPathWinding","\xca","\xbe","\xb0","\xe5"); }

		static void __boot();
		static ::String EVEN_ODD;
		static ::String NON_ZERO;
};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_GraphicsPathWinding */ 
