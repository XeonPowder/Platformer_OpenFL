#ifndef INCLUDED_nme_system_ApplicationDomain
#define INCLUDED_nme_system_ApplicationDomain

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(nme,_system,ApplicationDomain)
namespace nme{
namespace _system{


class HXCPP_CLASS_ATTRIBUTES  ApplicationDomain_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationDomain_obj OBJ_;
		ApplicationDomain_obj();
		Void __construct(::nme::_system::ApplicationDomain parentDomain);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.system.ApplicationDomain")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ApplicationDomain_obj > __new(::nme::_system::ApplicationDomain parentDomain);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationDomain_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("ApplicationDomain","\x94","\xec","\x60","\x45"); }

		static void __boot();
		static ::nme::_system::ApplicationDomain currentDomain;
		::nme::_system::ApplicationDomain parentDomain;
		virtual Dynamic getDefinition( ::String name);
		Dynamic getDefinition_dyn();

		virtual bool hasDefinition( ::String name);
		Dynamic hasDefinition_dyn();

};

} // end namespace nme
} // end namespace system

#endif /* INCLUDED_nme_system_ApplicationDomain */ 
