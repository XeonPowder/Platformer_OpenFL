#ifndef INCLUDED_nme_AssetInfo
#define INCLUDED_nme_AssetInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(nme,AssetInfo)
HX_DECLARE_CLASS1(nme,AssetType)
HX_DECLARE_CLASS2(nme,utils,WeakRef)
namespace nme{


class HXCPP_CLASS_ATTRIBUTES  AssetInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetInfo_obj OBJ_;
		AssetInfo_obj();
		Void __construct(::String inPath,::nme::AssetType inType,bool inIsResource,::String inClassName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.AssetInfo")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< AssetInfo_obj > __new(::String inPath,::nme::AssetType inType,bool inIsResource,::String inClassName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetInfo_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("AssetInfo","\x5e","\x66","\x34","\x4c"); }

		::String path;
		::String className;
		::nme::AssetType type;
		::nme::utils::WeakRef cache;
		bool isResource;
		virtual Void uncache( );
		Dynamic uncache_dyn();

		virtual Dynamic getCache( );
		Dynamic getCache_dyn();

		virtual Void setCache( Dynamic inVal,bool inWeak);
		Dynamic setCache_dyn();

};

} // end namespace nme

#endif /* INCLUDED_nme_AssetInfo */ 
