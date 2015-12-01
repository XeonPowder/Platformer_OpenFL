#ifndef INCLUDED_nme_app_FrameTimer
#define INCLUDED_nme_app_FrameTimer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_app_IPollClient
#include <nme/app/IPollClient.h>
#endif
HX_DECLARE_CLASS2(nme,app,FrameTimer)
HX_DECLARE_CLASS2(nme,app,IPollClient)
HX_DECLARE_CLASS2(nme,app,Window)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  FrameTimer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FrameTimer_obj OBJ_;
		FrameTimer_obj();
		Void __construct(::nme::app::Window inWindow,Float inFps);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.app.FrameTimer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< FrameTimer_obj > __new(::nme::app::Window inWindow,Float inFps);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FrameTimer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::nme::app::IPollClient_obj *();
		::String __ToString() const { return HX_HCSTRING("FrameTimer","\x78","\xf8","\x0c","\xea"); }

		Float fps;
		Float lastRender;
		Float framePeriod;
		::nme::app::Window window;
		bool invalid;
		bool catchup;
		Float offTarget;
		virtual Float set_fps( Float inFps);
		Dynamic set_fps_dyn();

		virtual Void onPoll( Float timestamp);
		Dynamic onPoll_dyn();

		virtual Void invalidate( );
		Dynamic invalidate_dyn();

		virtual Float getNextWake( Float defaultWake,Float timestamp);
		Dynamic getNextWake_dyn();

};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_FrameTimer */ 
