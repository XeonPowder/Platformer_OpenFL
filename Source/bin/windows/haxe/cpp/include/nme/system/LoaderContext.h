#ifndef INCLUDED_nme_system_LoaderContext
#define INCLUDED_nme_system_LoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,_system,ApplicationDomain)
HX_DECLARE_CLASS2(nme,_system,LoaderContext)
HX_DECLARE_CLASS2(nme,_system,SecurityDomain)
namespace nme{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  LoaderContext_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LoaderContext_obj OBJ_;
		LoaderContext_obj();
		Void __construct(hx::Null< bool >  __o_checkPolicyFile,::nme::_system::ApplicationDomain applicationDomain,::nme::_system::SecurityDomain securityDomain);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.system.LoaderContext")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< LoaderContext_obj > __new(hx::Null< bool >  __o_checkPolicyFile,::nme::_system::ApplicationDomain applicationDomain,::nme::_system::SecurityDomain securityDomain);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoaderContext_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("LoaderContext","\xfc","\x3d","\x01","\xc1"); }

		bool allowCodeImport;
		bool allowLoadBytesCodeExecution;
		::nme::_system::ApplicationDomain applicationDomain;
		bool checkPolicyFile;
		::nme::_system::SecurityDomain securityDomain;
};

} // end namespace nme
} // end namespace system

#endif /* INCLUDED_nme_system_LoaderContext */ 
