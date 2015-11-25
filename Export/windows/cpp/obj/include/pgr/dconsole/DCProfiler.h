#ifndef INCLUDED_pgr_dconsole_DCProfiler
#define INCLUDED_pgr_dconsole_DCProfiler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(pgr,dconsole,DCProfiler)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
HX_DECLARE_CLASS2(pgr,dconsole,SampleHistory)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCProfiler_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCProfiler_obj OBJ_;
		DCProfiler_obj();
		Void __construct(::pgr::dconsole::DConsole console);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.DCProfiler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCProfiler_obj > __new(::pgr::dconsole::DConsole console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCProfiler_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DCProfiler","\xc8","\xc9","\x7e","\x0f"); }

		static void __boot();
		static int NUM_SPACES;
		int refreshRate;
		bool visible;
		cpp::ArrayBase samples;
		Array< ::Dynamic > history;
		::pgr::dconsole::DConsole console;
		::haxe::Timer refreshTimer;
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void begin( ::String sampleName);
		Dynamic begin_dyn();

		virtual Void end( ::String sampleName);
		Dynamic end_dyn();

		virtual Void createHistory( Dynamic sample);
		Dynamic createHistory_dyn();

		virtual Void setRefreshRate( hx::Null< int >  refreshRate);
		Dynamic setRefreshRate_dyn();

		virtual ::String getFormatedDisplay( ::String data,hx::Null< bool >  addSeparator);
		Dynamic getFormatedDisplay_dyn();

		virtual Void writeOutput( );
		Dynamic writeOutput_dyn();

		virtual Void setSampleParent( Dynamic sample);
		Dynamic setSampleParent_dyn();

		virtual Dynamic getSample( ::String sampleName);
		Dynamic getSample_dyn();

		virtual ::pgr::dconsole::SampleHistory getHistory( ::String entryName);
		Dynamic getHistory_dyn();

		virtual Void startTimer( );
		Dynamic startTimer_dyn();

		virtual int getTimeMS( );
		Dynamic getTimeMS_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCProfiler */ 
