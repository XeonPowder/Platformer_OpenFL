#ifndef INCLUDED_pgr_dconsole_SampleHistory
#define INCLUDED_pgr_dconsole_SampleHistory

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(pgr,dconsole,SampleHistory)
namespace pgr{
namespace dconsole{


class HXCPP_CLASS_ATTRIBUTES  SampleHistory_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SampleHistory_obj OBJ_;
		SampleHistory_obj();
		Void __construct(Dynamic s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="pgr.dconsole.SampleHistory")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< SampleHistory_obj > __new(Dynamic s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SampleHistory_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("SampleHistory","\x2a","\x06","\x91","\x46"); }

		::String name;
		int elapsed;
		int totalElapsed;
		int minElapsed;
		int maxElapsed;
		int avgElapsed;
		int childrenElapsed;
		int totalChildrenElapsed;
		int branchInstances;
		int instances;
		int numParents;
		int startTime;
		int nLogs;
		Array< ::Dynamic > childHistory;
		virtual Void clearBranchSamples( );
		Dynamic clearBranchSamples_dyn();

		virtual Void update( Dynamic s);
		Dynamic update_dyn();

		virtual Void addChildEntry( Dynamic s);
		Dynamic addChildEntry_dyn();

		virtual ::String getElapsed( );
		Dynamic getElapsed_dyn();

		virtual ::String getAverage( );
		Dynamic getAverage_dyn();

		virtual ::String getMinElapsed( );
		Dynamic getMinElapsed_dyn();

		virtual ::String getMaxElapsed( );
		Dynamic getMaxElapsed_dyn();

		virtual ::String getRelElapsed( );
		Dynamic getRelElapsed_dyn();

		virtual ::String getRelAverage( );
		Dynamic getRelAverage_dyn();

		virtual ::String getPercentElapsed( int parentElapsed);
		Dynamic getPercentElapsed_dyn();

		virtual ::String getPercentAverage( int totalTime);
		Dynamic getPercentAverage_dyn();

		virtual ::String getFormattedName( );
		Dynamic getFormattedName_dyn();

		virtual ::pgr::dconsole::SampleHistory getChild( ::String childName);
		Dynamic getChild_dyn();

};

} // end namespace pgr
} // end namespace dconsole

#endif /* INCLUDED_pgr_dconsole_SampleHistory */ 
