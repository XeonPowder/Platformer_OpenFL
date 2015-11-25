#ifndef INCLUDED_pgr_dconsole_input_DCInput
#define INCLUDED_pgr_dconsole_input_DCInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS3(pgr,dconsole,input,DCInput)
namespace pgr{
namespace dconsole{
namespace input{


class HXCPP_CLASS_ATTRIBUTES  DCInput_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef DCInput_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void init( )=0;
virtual Dynamic init_dyn()=0;
		virtual Void enable( )=0;
virtual Dynamic enable_dyn()=0;
		virtual Void disable( )=0;
virtual Dynamic disable_dyn()=0;
};



template<typename IMPL>
class DCInput_delegate_ : public DCInput_obj
{
	protected:
		IMPL *mDelegate;
	public:
		DCInput_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void init( ) { return mDelegate->init();}
		Dynamic init_dyn() { return mDelegate->init_dyn();}
		Void enable( ) { return mDelegate->enable();}
		Dynamic enable_dyn() { return mDelegate->enable_dyn();}
		Void disable( ) { return mDelegate->disable();}
		Dynamic disable_dyn() { return mDelegate->disable_dyn();}
};

} // end namespace pgr
} // end namespace dconsole
} // end namespace input

#endif /* INCLUDED_pgr_dconsole_input_DCInput */ 
