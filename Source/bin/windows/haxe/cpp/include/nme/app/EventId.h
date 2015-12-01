#ifndef INCLUDED_nme_app_EventId
#define INCLUDED_nme_app_EventId

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,app,EventId)
namespace nme{
namespace app{


class HXCPP_CLASS_ATTRIBUTES  EventId_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EventId_obj OBJ_;
		EventId_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="nme.app.EventId")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< EventId_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventId_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("EventId","\x75","\xea","\xeb","\xd3"); }

		static void __boot();
		static int Unknown;
		static int KeyDown;
		static int Char;
		static int KeyUp;
		static int MouseMove;
		static int MouseDown;
		static int MouseClick;
		static int MouseUp;
		static int Resize;
		static int Poll;
		static int Quit;
		static int Focus;
		static int ShouldRotate;
		static int DestroyHandler;
		static int Redraw;
		static int TouchBegin;
		static int TouchMove;
		static int TouchEnd;
		static int TouchTap;
		static int Change;
		static int Activate;
		static int Deactivate;
		static int GotInputFocus;
		static int LostInputFocus;
		static int JoyAxisMove;
		static int JoyBallMove;
		static int JoyHatMove;
		static int JoyButtonDown;
		static int JoyButtonUp;
		static int JoyDeviceAdded;
		static int JoyDeviceRemoved;
		static int SysWM;
		static int RenderContextLost;
		static int RenderContextRestored;
};

} // end namespace nme
} // end namespace app

#endif /* INCLUDED_nme_app_EventId */ 
