#ifndef INCLUDED_haxe_TimerPollClient
#define INCLUDED_haxe_TimerPollClient

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
HX_DECLARE_CLASS1(haxe,TimerPollClient)
HX_DECLARE_CLASS2(nme,app,IPollClient)
namespace haxe{


class HXCPP_CLASS_ATTRIBUTES  TimerPollClient_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimerPollClient_obj OBJ_;
		TimerPollClient_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxe.TimerPollClient")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< TimerPollClient_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimerPollClient_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::nme::app::IPollClient_obj *();
		::String __ToString() const { return HX_HCSTRING("TimerPollClient","\xef","\x89","\x5b","\x3b"); }

		virtual Void onPoll( Float timestamp);
		Dynamic onPoll_dyn();

		virtual Float getNextWake( Float defaultWake,Float timestamp);
		Dynamic getNextWake_dyn();

};

} // end namespace haxe

#endif /* INCLUDED_haxe_TimerPollClient */ 
