#ifndef INCLUDED_pgr_dconsole_DCCommands
#define INCLUDED_pgr_dconsole_DCCommands

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)
HX_DECLARE_CLASS2(pgr,dconsole,DCCommands)
HX_DECLARE_CLASS2(pgr,dconsole,DCInterp)
HX_DECLARE_CLASS2(pgr,dconsole,DConsole)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  DCCommands_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DCCommands_obj OBJ_;
		DCCommands_obj();
		Void __construct(::pgr::dconsole::DConsole console);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.DCCommands")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DCCommands_obj > __new(::pgr::dconsole::DConsole console);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DCCommands_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DCCommands","\x67","\xbf","\xfd","\xe0"); }

		::haxe::ds::StringMap functionsMap;
		::haxe::ds::StringMap objectsMap;
		::haxe::ds::StringMap commandsMap;
		::haxe::ds::StringMap classMap;
		::hscript::Parser hScriptParser;
		::pgr::dconsole::DCInterp hScriptInterp;
		bool printErrorStack;
		::pgr::dconsole::DConsole _console;
		virtual Void registerClass( ::hx::Class cls,::String alias);
		Dynamic registerClass_dyn();

		virtual Void evaluate( ::String input);
		Dynamic evaluate_dyn();

		virtual Void registerCommand( Dynamic Function,::String alias,::String shortcut,::String description,::String help);
		Dynamic registerCommand_dyn();

		virtual Void registerFunction( Dynamic Function,::String alias,::String description);
		Dynamic registerFunction_dyn();

		virtual Void registerObject( Dynamic object,::String alias);
		Dynamic registerObject_dyn();

		virtual Void unregisterFunction( ::String alias);
		Dynamic unregisterFunction_dyn();

		virtual Void unregisterObject( ::String alias);
		Dynamic unregisterObject_dyn();

		virtual Void clearRegistry( );
		Dynamic clearRegistry_dyn();

		virtual Void showHelp( Array< ::String > args);
		Dynamic showHelp_dyn();

		virtual Void showCommands( Array< ::String > args);
		Dynamic showCommands_dyn();

		virtual Void listFunctions( Array< ::String > args);
		Dynamic listFunctions_dyn();

		virtual Void listObjects( Array< ::String > args);
		Dynamic listObjects_dyn();

		virtual Void listClasses( Array< ::String > args);
		Dynamic listClasses_dyn();

		virtual Dynamic getFunction( ::String alias);
		Dynamic getFunction_dyn();

		virtual Dynamic getObject( ::String alias);
		Dynamic getObject_dyn();

		virtual Dynamic getCommand( ::String alias);
		Dynamic getCommand_dyn();

		virtual ::hx::Class getClass( ::String alias);
		Dynamic getClass_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_DCCommands */ 
