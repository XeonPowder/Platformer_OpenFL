#ifndef INCLUDED_pgr_dconsole_DCMonitor
#define INCLUDED_pgr_dconsole_DCMonitor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(pgr,dconsole,DCMonitor)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCMonitor_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCMonitor_obj OBJ_;
		DCMonitor_obj();
		Void __construct(::pgr::dconsole::DConsole console);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.DCMonitor")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCMonitor_obj > __new(::pgr::dconsole::DConsole console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCMonitor_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DCMonitor","\xdb","\x24","\xb9","\x7f"); }

		int startTime;
		bool visible;
		int refreshRate;
		cpp::ArrayBase fields;
		::haxe::Timer refreshTimer;
		bool hidden;
		::pgr::dconsole::DConsole console;
		virtual Void show( );
		Dynamic show_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void addField( Dynamic object,::String fieldName,::String alias);
		Dynamic addField_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void setRefreshRate( hx::Null< int >  refreshRate);
		Dynamic setRefreshRate_dyn();

		virtual Void writeOutput( );
		Dynamic writeOutput_dyn();

		virtual Void startTimer( );
		Dynamic startTimer_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCMonitor */ 
