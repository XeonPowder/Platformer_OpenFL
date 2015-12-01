#ifndef INCLUDED_nme_display_DisplayObjectContainer
#define INCLUDED_nme_display_DisplayObjectContainer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
HX_DECLARE_CLASS2(nme,display,DisplayObject)
HX_DECLARE_CLASS2(nme,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(nme,display,IBitmapDrawable)
HX_DECLARE_CLASS2(nme,display,InteractiveObject)
HX_DECLARE_CLASS2(nme,events,Event)
HX_DECLARE_CLASS2(nme,events,EventDispatcher)
HX_DECLARE_CLASS2(nme,events,IEventDispatcher)
HX_DECLARE_CLASS2(nme,geom,Point)
namespace nme{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayObjectContainer_obj : public ::nme::display::InteractiveObject_obj{
	public:
		typedef ::nme::display::InteractiveObject_obj super;
		typedef DisplayObjectContainer_obj OBJ_;
		DisplayObjectContainer_obj();
		Void __construct(Dynamic inHandle,::String inType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="nme.display.DisplayObjectContainer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< DisplayObjectContainer_obj > __new(Dynamic inHandle,::String inType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayObjectContainer_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("DisplayObjectContainer","\x80","\xf2","\x98","\xea"); }

		static void __boot();
		static Dynamic nme_create_display_object_container;
		static Dynamic &nme_create_display_object_container_dyn() { return nme_create_display_object_container;}
		static Dynamic nme_doc_add_child;
		static Dynamic &nme_doc_add_child_dyn() { return nme_doc_add_child;}
		static Dynamic nme_doc_remove_child;
		static Dynamic &nme_doc_remove_child_dyn() { return nme_doc_remove_child;}
		static Dynamic nme_doc_set_child_index;
		static Dynamic &nme_doc_set_child_index_dyn() { return nme_doc_set_child_index;}
		static Dynamic nme_doc_get_mouse_children;
		static Dynamic &nme_doc_get_mouse_children_dyn() { return nme_doc_get_mouse_children;}
		static Dynamic nme_doc_set_mouse_children;
		static Dynamic &nme_doc_set_mouse_children_dyn() { return nme_doc_set_mouse_children;}
		static Dynamic nme_doc_swap_children;
		static Dynamic &nme_doc_swap_children_dyn() { return nme_doc_swap_children;}
		int numChildren;
		Array< ::Dynamic > nmeChildren;
		virtual ::nme::display::DisplayObject addChild( ::nme::display::DisplayObject child);
		Dynamic addChild_dyn();

		virtual ::nme::display::DisplayObject addChildAt( ::nme::display::DisplayObject child,int index);
		Dynamic addChildAt_dyn();

		virtual bool areInaccessibleObjectsUnderPoint( ::nme::geom::Point point);
		Dynamic areInaccessibleObjectsUnderPoint_dyn();

		virtual bool contains( ::nme::display::DisplayObject child);
		Dynamic contains_dyn();

		virtual ::nme::display::DisplayObject getChildAt( int index);
		Dynamic getChildAt_dyn();

		virtual ::nme::display::DisplayObject getChildByName( ::String name);
		Dynamic getChildByName_dyn();

		virtual int getChildIndex( ::nme::display::DisplayObject child);
		Dynamic getChildIndex_dyn();

		virtual Array< ::Dynamic > getObjectsUnderPoint( ::nme::geom::Point point);
		Dynamic getObjectsUnderPoint_dyn();

		virtual Void nmeAddChild( ::nme::display::DisplayObject child);
		Dynamic nmeAddChild_dyn();

		virtual Void nmeBroadcast( ::nme::events::Event inEvt);

		virtual ::nme::display::DisplayObject nmeFindByID( int inID);

		virtual int nmeGetChildIndex( ::nme::display::DisplayObject child);
		Dynamic nmeGetChildIndex_dyn();

		virtual Void nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::Dynamic > result);

		virtual Void nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage);

		virtual Void nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage);

		virtual Void nmeRemoveChildFromArray( ::nme::display::DisplayObject child);
		Dynamic nmeRemoveChildFromArray_dyn();

		virtual Void nmeSetChildIndex( ::nme::display::DisplayObject child,int index);
		Dynamic nmeSetChildIndex_dyn();

		virtual Void nmeSwapChildrenAt( int index1,int index2);
		Dynamic nmeSwapChildrenAt_dyn();

		virtual ::nme::display::DisplayObject removeChild( ::nme::display::DisplayObject child);
		Dynamic removeChild_dyn();

		virtual ::nme::display::DisplayObject removeChildAt( int index);
		Dynamic removeChildAt_dyn();

		virtual Void removeChildren( hx::Null< int >  beginIndex,hx::Null< int >  endIndex);
		Dynamic removeChildren_dyn();

		virtual Void setChildIndex( ::nme::display::DisplayObject child,int index);
		Dynamic setChildIndex_dyn();

		virtual Void swapChildren( ::nme::display::DisplayObject child1,::nme::display::DisplayObject child2);
		Dynamic swapChildren_dyn();

		virtual Void swapChildrenAt( int index1,int index2);
		Dynamic swapChildrenAt_dyn();

		virtual bool get_mouseChildren( );
		Dynamic get_mouseChildren_dyn();

		virtual bool set_mouseChildren( bool inVal);
		Dynamic set_mouseChildren_dyn();

		virtual int get_numChildren( );
		Dynamic get_numChildren_dyn();

		virtual bool get_tabChildren( );
		Dynamic get_tabChildren_dyn();

		virtual bool set_tabChildren( bool inValue);
		Dynamic set_tabChildren_dyn();

};

} // end namespace nme
} // end namespace display

#endif /* INCLUDED_nme_display_DisplayObjectContainer */ 
