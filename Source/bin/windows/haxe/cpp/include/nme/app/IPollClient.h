#ifndef INCLUDED_nme_app_IPollClient
#define INCLUDED_nme_app_IPollClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,app,IPollClient)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  IPollClient_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef IPollClient_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual Void onPoll( Float timestamp)=0;
virtual Dynamic onPoll_dyn()=0;
		virtual Float getNextWake( Float defaultWake,Float timestamp)=0;
virtual Dynamic getNextWake_dyn()=0;
};



template<typename IMPL>
class IPollClient_delegate_ : public IPollClient_obj
{
	protected:
		IMPL *mDelegate;
	public:
		IPollClient_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		Void onPoll( Float timestamp) { return mDelegate->onPoll(timestamp);}
		Dynamic onPoll_dyn() { return mDelegate->onPoll_dyn();}
		Float getNextWake( Float defaultWake,Float timestamp) { return mDelegate->getNextWake(defaultWake,timestamp);}
		Dynamic getNextWake_dyn() { return mDelegate->getNextWake_dyn();}
};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_IPollClient */ 
