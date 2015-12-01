#ifndef INCLUDED_ApplicationBoot
#define INCLUDED_ApplicationBoot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ApplicationBoot)


class HXCPP_CLASS_ATTRIBUTES  ApplicationBoot_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ApplicationBoot_obj OBJ_;
		ApplicationBoot_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="ApplicationBoot")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< ApplicationBoot_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ApplicationBoot_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		::String __ToString() const { return HX_HCSTRING("ApplicationBoot","\x82","\x4b","\xff","\x42"); }

};


#endif /* INCLUDED_ApplicationBoot */ 
