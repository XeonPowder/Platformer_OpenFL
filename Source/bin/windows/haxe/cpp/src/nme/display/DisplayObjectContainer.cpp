#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObject
#include <nme/display/DisplayObject.h>
#endif
#ifndef INCLUDED_nme_display_DisplayObjectContainer
#include <nme/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_display_InteractiveObject
#include <nme/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_nme_errors_ArgumentError
#include <nme/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_nme_errors_Error
#include <nme/errors/Error.h>
#endif
#ifndef INCLUDED_nme_errors_RangeError
#include <nme/errors/RangeError.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_geom_Point
#include <nme/geom/Point.h>
#endif
namespace nme{
namespace display{

Void DisplayObjectContainer_obj::__construct(Dynamic inHandle,::String inType)
{
HX_STACK_FRAME("nme.display.DisplayObjectContainer","new",0x8bd68a46,"nme.display.DisplayObjectContainer.new","nme/display/DisplayObjectContainer.hx",19,0xb12222a8)
HX_STACK_THIS(this)
HX_STACK_ARG(inHandle,"inHandle")
HX_STACK_ARG(inType,"inType")
{
	HX_STACK_LINE(20)
	Dynamic tmp = inHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(20)
	::String tmp1 = inType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(20)
	super::__construct(tmp,tmp1);
	HX_STACK_LINE(21)
	this->nmeChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new(Dynamic inHandle,::String inType)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct(inHandle,inType);
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

::nme::display::DisplayObject DisplayObjectContainer_obj::addChild( ::nme::display::DisplayObject child){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","addChild",0x382a7415,"nme.display.DisplayObjectContainer.addChild","nme/display/DisplayObjectContainer.hx",25,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(26)
		if ((tmp)){
			HX_STACK_LINE(26)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(26)
		bool tmp1 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(26)
		if ((tmp1)){
			HX_STACK_LINE(26)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			int tmp3 = this->nmeChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(26)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(26)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(26)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(26)
			this->nmeChildren->push(tmp2);
			HX_STACK_LINE(26)
			bool tmp3 = (child->nmeHandle != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(26)
			if ((tmp3)){
				HX_STACK_LINE(26)
				Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(26)
				Dynamic tmp5 = child->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				::nme::display::DisplayObjectContainer_obj::nme_doc_add_child(tmp4,tmp5);
			}
		}
	}
	HX_STACK_LINE(27)
	::nme::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::nme::display::DisplayObject child,int index){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","addChildAt",0x6ebf9c68,"nme.display.DisplayObjectContainer.addChildAt","nme/display/DisplayObjectContainer.hx",31,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		if ((tmp)){
			HX_STACK_LINE(32)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(32)
		bool tmp1 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(32)
		if ((tmp1)){
			HX_STACK_LINE(32)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			int tmp3 = this->nmeChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(32)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(32)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(32)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(32)
			this->nmeChildren->push(tmp2);
			HX_STACK_LINE(32)
			bool tmp3 = (child->nmeHandle != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(32)
			if ((tmp3)){
				HX_STACK_LINE(32)
				Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(32)
				Dynamic tmp5 = child->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(32)
				::nme::display::DisplayObjectContainer_obj::nme_doc_add_child(tmp4,tmp5);
			}
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		int tmp1 = this->nmeChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(33)
		if ((tmp2)){
			HX_STACK_LINE(33)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(33)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(33)
		::nme::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(33)
		::nme::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(33)
		int tmp4 = this->nmeGetChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(33)
		int orig = tmp4;		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(33)
		bool tmp5 = (orig < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(33)
		if ((tmp5)){
			HX_STACK_LINE(33)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(33)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(33)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(33)
			bool tmp9 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(33)
			if ((tmp9)){
				HX_STACK_LINE(33)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(33)
				{
					HX_STACK_LINE(33)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(33)
					int tmp10 = this->nmeChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(33)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(33)
					while((true)){
						HX_STACK_LINE(33)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(33)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(33)
						if ((tmp12)){
							HX_STACK_LINE(33)
							break;
						}
						HX_STACK_LINE(33)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(33)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(33)
						::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(33)
						::nme::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(33)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(33)
						if ((tmp16)){
							HX_STACK_LINE(33)
							realindex = i;
							HX_STACK_LINE(33)
							break;
						}
					}
				}
				HX_STACK_LINE(33)
				bool tmp10 = (realindex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				if ((tmp10)){
					HX_STACK_LINE(33)
					int tmp11 = realindex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(33)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in nmeChildren array!","\xeb","\xc5","\x0c","\xc2"));
				}
			}
			HX_STACK_LINE(33)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(33)
		Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(33)
		Dynamic tmp7 = child->nmeHandle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(33)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(33)
		::nme::display::DisplayObjectContainer_obj::nme_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(33)
		bool tmp9 = (index < orig);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(33)
		if ((tmp9)){
			HX_STACK_LINE(33)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(33)
			while((true)){
				HX_STACK_LINE(33)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(33)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				if ((tmp11)){
					HX_STACK_LINE(33)
					break;
				}
				HX_STACK_LINE(33)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(33)
				::nme::display::DisplayObject tmp13 = this->nmeChildren->__get(tmp12).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(33)
				this->nmeChildren[i] = tmp13;
				HX_STACK_LINE(33)
				(i)--;
			}
			HX_STACK_LINE(33)
			::nme::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			this->nmeChildren[index] = tmp10;
		}
		else{
			HX_STACK_LINE(33)
			bool tmp10 = (orig < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(33)
			if ((tmp10)){
				HX_STACK_LINE(33)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(33)
				while((true)){
					HX_STACK_LINE(33)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					if ((tmp12)){
						HX_STACK_LINE(33)
						break;
					}
					HX_STACK_LINE(33)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(33)
					::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(tmp13).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(33)
					this->nmeChildren[i] = tmp14;
					HX_STACK_LINE(33)
					(i)++;
				}
				HX_STACK_LINE(33)
				::nme::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(33)
				this->nmeChildren[index] = tmp11;
			}
		}
	}
	HX_STACK_LINE(34)
	::nme::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(34)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::nme::geom::Point point){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0xc7058497,"nme.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","nme/display/DisplayObjectContainer.hx",39,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(39)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::nme::display::DisplayObject child){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","contains",0xa58efe79,"nme.display.DisplayObjectContainer.contains","nme/display/DisplayObjectContainer.hx",43,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(44)
	bool tmp = (child == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(44)
	if ((tmp)){
		HX_STACK_LINE(45)
		return false;
	}
	HX_STACK_LINE(47)
	bool tmp1 = (hx::ObjectPtr<OBJ_>(this) == child);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(47)
	if ((tmp1)){
		HX_STACK_LINE(48)
		return true;
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		while((true)){
			HX_STACK_LINE(50)
			bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(50)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(50)
			if ((tmp3)){
				HX_STACK_LINE(50)
				break;
			}
			HX_STACK_LINE(50)
			::nme::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			::nme::display::DisplayObject c = tmp4;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(50)
			++(_g);
			HX_STACK_LINE(51)
			bool tmp5 = (c == child);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(51)
			if ((tmp5)){
				HX_STACK_LINE(52)
				return true;
			}
		}
	}
	HX_STACK_LINE(54)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","getChildAt",0x5696f693,"nme.display.DisplayObjectContainer.getChildAt","nme/display/DisplayObjectContainer.hx",58,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(59)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(59)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(59)
		int tmp3 = this->nmeChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(59)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(59)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(59)
		tmp1 = false;
	}
	HX_STACK_LINE(59)
	if ((tmp1)){
		HX_STACK_LINE(60)
		::nme::display::DisplayObject tmp2 = this->nmeChildren->__get(index).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		return tmp2;
	}
	HX_STACK_LINE(63)
	::String tmp2 = (HX_HCSTRING("getChildAt : index out of bounds ","\xcf","\xfc","\xa7","\xdc") + index);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(63)
	::String tmp3 = (tmp2 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(63)
	int tmp4 = this->nmeChildren->length;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(63)
	::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(63)
	::nme::errors::RangeError tmp6 = ::nme::errors::RangeError_obj::__new(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(63)
	HX_STACK_DO_THROW(tmp6);
	HX_STACK_LINE(65)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","getChildByName",0x0b661d62,"nme.display.DisplayObjectContainer.getChildByName","nme/display/DisplayObjectContainer.hx",69,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		while((true)){
			HX_STACK_LINE(70)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(70)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(70)
			if ((tmp1)){
				HX_STACK_LINE(70)
				break;
			}
			HX_STACK_LINE(70)
			::nme::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(70)
			::nme::display::DisplayObject c = tmp2;		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(70)
			++(_g);
			HX_STACK_LINE(71)
			::String tmp3 = name;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(71)
			::String tmp4 = c->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(71)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(71)
			if ((tmp5)){
				HX_STACK_LINE(72)
				::nme::display::DisplayObject tmp6 = c;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(72)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::nme::display::DisplayObject child){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","getChildIndex",0xfe5abd72,"nme.display.DisplayObjectContainer.getChildIndex","nme/display/DisplayObjectContainer.hx",77,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(78)
	::nme::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = this->nmeGetChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::nme::geom::Point point){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","getObjectsUnderPoint",0xa07ad3f0,"nme.display.DisplayObjectContainer.getObjectsUnderPoint","nme/display/DisplayObjectContainer.hx",82,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(83)
	Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(84)
	::nme::geom::Point tmp = point;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	this->nmeGetObjectsUnderPoint(tmp,result);
	HX_STACK_LINE(85)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

Void DisplayObjectContainer_obj::nmeAddChild( ::nme::display::DisplayObject child){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeAddChild",0xe8962907,"nme.display.DisplayObjectContainer.nmeAddChild","nme/display/DisplayObjectContainer.hx",88,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(89)
		bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		if ((tmp)){
			HX_STACK_LINE(91)
			HX_STACK_DO_THROW(HX_HCSTRING("Adding to self","\xb2","\xfe","\x1c","\xcf"));
		}
		HX_STACK_LINE(94)
		bool tmp1 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(94)
		if ((tmp1)){
			HX_STACK_LINE(96)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(96)
			int tmp3 = this->nmeChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			int tmp4 = (tmp3 - (int)1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			this->setChildIndex(tmp2,tmp4);
		}
		else{
			HX_STACK_LINE(101)
			child->nmeSetParent(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(102)
			::nme::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(102)
			this->nmeChildren->push(tmp2);
			HX_STACK_LINE(103)
			bool tmp3 = (child->nmeHandle != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(103)
			if ((tmp3)){
				HX_STACK_LINE(104)
				Dynamic tmp4 = this->nmeHandle;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(104)
				Dynamic tmp5 = child->nmeHandle;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(104)
				::nme::display::DisplayObjectContainer_obj::nme_doc_add_child(tmp4,tmp5);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeAddChild,(void))

Void DisplayObjectContainer_obj::nmeBroadcast( ::nme::events::Event inEvt){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeBroadcast",0x05086c35,"nme.display.DisplayObjectContainer.nmeBroadcast","nme/display/DisplayObjectContainer.hx",108,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inEvt,"inEvt")
		HX_STACK_LINE(109)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(111)
		int tmp = this->nmeChildren->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		bool tmp1 = (tmp > (int)0);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		if ((tmp1)){
			HX_STACK_LINE(112)
			while((true)){
				HX_STACK_LINE(114)
				::nme::display::DisplayObject tmp2 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(114)
				::nme::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(115)
				::nme::events::Event tmp3 = inEvt;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(115)
				child->nmeBroadcast(tmp3);
				HX_STACK_LINE(117)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(117)
				int tmp5 = this->nmeChildren->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(117)
				bool tmp6 = (tmp4 >= tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(117)
				if ((tmp6)){
					HX_STACK_LINE(118)
					break;
				}
				HX_STACK_LINE(120)
				::nme::display::DisplayObject tmp7 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(120)
				::nme::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(120)
				bool tmp9 = (tmp7 == tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(120)
				if ((tmp9)){
					HX_STACK_LINE(122)
					(i)++;
					HX_STACK_LINE(123)
					int tmp10 = i;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(123)
					int tmp11 = this->nmeChildren->length;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(123)
					bool tmp12 = (tmp10 >= tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(123)
					if ((tmp12)){
						HX_STACK_LINE(124)
						break;
					}
				}
			}
		}
		HX_STACK_LINE(128)
		::nme::events::Event tmp2 = inEvt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		this->super::nmeBroadcast(tmp2);
	}
return null();
}


::nme::display::DisplayObject DisplayObjectContainer_obj::nmeFindByID( int inID){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeFindByID",0xbd365f97,"nme.display.DisplayObjectContainer.nmeFindByID","nme/display/DisplayObjectContainer.hx",131,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inID,"inID")
	HX_STACK_LINE(132)
	int tmp = this->nmeID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(132)
	int tmp1 = inID;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(132)
	bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(132)
	if ((tmp2)){
		HX_STACK_LINE(133)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(135)
	{
		HX_STACK_LINE(135)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(135)
		Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(135)
		while((true)){
			HX_STACK_LINE(135)
			bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(135)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(135)
			if ((tmp4)){
				HX_STACK_LINE(135)
				break;
			}
			HX_STACK_LINE(135)
			::nme::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(135)
			::nme::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(135)
			++(_g);
			HX_STACK_LINE(137)
			int tmp6 = inID;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(137)
			::nme::display::DisplayObject tmp7 = child->nmeFindByID(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(137)
			::nme::display::DisplayObject found = tmp7;		HX_STACK_VAR(found,"found");
			HX_STACK_LINE(139)
			bool tmp8 = (found != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(139)
			if ((tmp8)){
				HX_STACK_LINE(140)
				::nme::display::DisplayObject tmp9 = found;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				return tmp9;
			}
		}
	}
	HX_STACK_LINE(143)
	int tmp3 = inID;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(143)
	::nme::display::DisplayObject tmp4 = this->super::nmeFindByID(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(143)
	return tmp4;
}


int DisplayObjectContainer_obj::nmeGetChildIndex( ::nme::display::DisplayObject child){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeGetChildIndex",0xe95fdb40,"nme.display.DisplayObjectContainer.nmeGetChildIndex","nme/display/DisplayObjectContainer.hx",146,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(147)
	{
		HX_STACK_LINE(147)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(147)
		int tmp = this->nmeChildren->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		while((true)){
			HX_STACK_LINE(147)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(147)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(147)
			if ((tmp2)){
				HX_STACK_LINE(147)
				break;
			}
			HX_STACK_LINE(147)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(147)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(148)
			::nme::display::DisplayObject tmp4 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(148)
			::nme::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(148)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(148)
			if ((tmp6)){
				HX_STACK_LINE(149)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(149)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(150)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeGetChildIndex,return )

Void DisplayObjectContainer_obj::nmeGetObjectsUnderPoint( ::nme::geom::Point point,Array< ::Dynamic > result){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeGetObjectsUnderPoint",0x0d9b2be2,"nme.display.DisplayObjectContainer.nmeGetObjectsUnderPoint","nme/display/DisplayObjectContainer.hx",153,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(point,"point")
		HX_STACK_ARG(result,"result")
		HX_STACK_LINE(154)
		::nme::geom::Point tmp = point;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(154)
		this->super::nmeGetObjectsUnderPoint(tmp,result);
		HX_STACK_LINE(156)
		{
			HX_STACK_LINE(156)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(156)
			Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(156)
			while((true)){
				HX_STACK_LINE(156)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(156)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(156)
				if ((tmp2)){
					HX_STACK_LINE(156)
					break;
				}
				HX_STACK_LINE(156)
				::nme::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(156)
				::nme::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(156)
				++(_g);
				HX_STACK_LINE(157)
				::nme::geom::Point tmp4 = point;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(157)
				child->nmeGetObjectsUnderPoint(tmp4,result);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::nmeOnAdded( ::nme::display::DisplayObject inObj,bool inIsOnStage){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeOnAdded",0x220bc755,"nme.display.DisplayObjectContainer.nmeOnAdded","nme/display/DisplayObjectContainer.hx",160,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inIsOnStage,"inIsOnStage")
		HX_STACK_LINE(161)
		::nme::display::DisplayObject tmp = inObj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = inIsOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		this->super::nmeOnAdded(tmp,tmp1);
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(163)
			Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(163)
			while((true)){
				HX_STACK_LINE(163)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(163)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(163)
				if ((tmp3)){
					HX_STACK_LINE(163)
					break;
				}
				HX_STACK_LINE(163)
				::nme::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(163)
				::nme::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(163)
				++(_g);
				HX_STACK_LINE(164)
				::nme::display::DisplayObject tmp5 = inObj;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(164)
				bool tmp6 = inIsOnStage;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(164)
				child->nmeOnAdded(tmp5,tmp6);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::nmeOnRemoved( ::nme::display::DisplayObject inObj,bool inWasOnStage){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeOnRemoved",0xf099a175,"nme.display.DisplayObjectContainer.nmeOnRemoved","nme/display/DisplayObjectContainer.hx",167,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(inObj,"inObj")
		HX_STACK_ARG(inWasOnStage,"inWasOnStage")
		HX_STACK_LINE(168)
		::nme::display::DisplayObject tmp = inObj;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(168)
		bool tmp1 = inWasOnStage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(168)
		this->super::nmeOnRemoved(tmp,tmp1);
		HX_STACK_LINE(170)
		{
			HX_STACK_LINE(170)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(170)
			Array< ::Dynamic > _g1 = this->nmeChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(170)
			while((true)){
				HX_STACK_LINE(170)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(170)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(170)
				if ((tmp3)){
					HX_STACK_LINE(170)
					break;
				}
				HX_STACK_LINE(170)
				::nme::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(170)
				::nme::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(170)
				++(_g);
				HX_STACK_LINE(171)
				::nme::display::DisplayObject tmp5 = inObj;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(171)
				bool tmp6 = inWasOnStage;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(171)
				child->nmeOnRemoved(tmp5,tmp6);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::nmeRemoveChildFromArray( ::nme::display::DisplayObject child){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeRemoveChildFromArray",0x8f693543,"nme.display.DisplayObjectContainer.nmeRemoveChildFromArray","nme/display/DisplayObjectContainer.hx",174,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(175)
		::nme::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(175)
		int tmp1 = this->nmeGetChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(175)
		int i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(177)
		bool tmp2 = (i >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		if ((tmp2)){
			HX_STACK_LINE(179)
			Dynamic tmp3 = this->nmeHandle;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(179)
			int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(179)
			::nme::display::DisplayObjectContainer_obj::nme_doc_remove_child(tmp3,tmp4);
			HX_STACK_LINE(180)
			int tmp5 = i;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(180)
			this->nmeChildren->splice(tmp5,(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,nmeRemoveChildFromArray,(void))

Void DisplayObjectContainer_obj::nmeSetChildIndex( ::nme::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeSetChildIndex",0x2e65bd4c,"nme.display.DisplayObjectContainer.nmeSetChildIndex","nme/display/DisplayObjectContainer.hx",184,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(185)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		int tmp1 = this->nmeChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		if ((tmp2)){
			HX_STACK_LINE(186)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(186)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(188)
		::nme::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(189)
		::nme::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(189)
		int tmp4 = this->nmeGetChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(189)
		int orig = tmp4;		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(191)
		bool tmp5 = (orig < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(191)
		if ((tmp5)){
			HX_STACK_LINE(193)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(193)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(193)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(193)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(195)
			bool tmp9 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(195)
			if ((tmp9)){
				HX_STACK_LINE(197)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(199)
				{
					HX_STACK_LINE(199)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(199)
					int tmp10 = this->nmeChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(199)
					while((true)){
						HX_STACK_LINE(199)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(199)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(199)
						if ((tmp12)){
							HX_STACK_LINE(199)
							break;
						}
						HX_STACK_LINE(199)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(199)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(201)
						::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(201)
						::nme::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(201)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(201)
						if ((tmp16)){
							HX_STACK_LINE(203)
							realindex = i;
							HX_STACK_LINE(204)
							break;
						}
					}
				}
				HX_STACK_LINE(208)
				bool tmp10 = (realindex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(208)
				if ((tmp10)){
					HX_STACK_LINE(209)
					int tmp11 = realindex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(209)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(209)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(209)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(211)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in nmeChildren array!","\xeb","\xc5","\x0c","\xc2"));
				}
			}
			HX_STACK_LINE(214)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(214)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(217)
		Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		Dynamic tmp7 = child->nmeHandle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		::nme::display::DisplayObjectContainer_obj::nme_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(219)
		bool tmp9 = (index < orig);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(219)
		if ((tmp9)){
			HX_STACK_LINE(221)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(223)
			while((true)){
				HX_STACK_LINE(223)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(223)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(223)
				if ((tmp11)){
					HX_STACK_LINE(223)
					break;
				}
				HX_STACK_LINE(225)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(225)
				::nme::display::DisplayObject tmp13 = this->nmeChildren->__get(tmp12).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(225)
				this->nmeChildren[i] = tmp13;
				HX_STACK_LINE(226)
				(i)--;
			}
			HX_STACK_LINE(229)
			::nme::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(229)
			this->nmeChildren[index] = tmp10;
		}
		else{
			HX_STACK_LINE(231)
			bool tmp10 = (orig < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(231)
			if ((tmp10)){
				HX_STACK_LINE(233)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(234)
				while((true)){
					HX_STACK_LINE(234)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(234)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(234)
					if ((tmp12)){
						HX_STACK_LINE(234)
						break;
					}
					HX_STACK_LINE(236)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(236)
					::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(tmp13).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(236)
					this->nmeChildren[i] = tmp14;
					HX_STACK_LINE(237)
					(i)++;
				}
				HX_STACK_LINE(240)
				::nme::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(240)
				this->nmeChildren[index] = tmp11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeSetChildIndex,(void))

Void DisplayObjectContainer_obj::nmeSwapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","nmeSwapChildrenAt",0x3558fed1,"nme.display.DisplayObjectContainer.nmeSwapChildrenAt","nme/display/DisplayObjectContainer.hx",244,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(245)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(245)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(245)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(245)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(245)
		if ((tmp2)){
			HX_STACK_LINE(245)
			tmp3 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(245)
			tmp3 = true;
		}
		HX_STACK_LINE(245)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(245)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(245)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(245)
		if ((tmp5)){
			HX_STACK_LINE(245)
			int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(245)
			int tmp8 = this->nmeChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(245)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			tmp6 = (tmp7 > tmp10);
		}
		else{
			HX_STACK_LINE(245)
			tmp6 = true;
		}
		HX_STACK_LINE(245)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(245)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(245)
		if ((tmp7)){
			HX_STACK_LINE(245)
			int tmp9 = index2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(245)
			int tmp10 = this->nmeChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(245)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(245)
			tmp8 = (tmp9 > tmp11);
		}
		else{
			HX_STACK_LINE(245)
			tmp8 = true;
		}
		HX_STACK_LINE(245)
		if ((tmp8)){
			HX_STACK_LINE(246)
			::nme::errors::RangeError tmp9 = ::nme::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(246)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(248)
		bool tmp9 = (index1 != index2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(248)
		if ((tmp9)){
			HX_STACK_LINE(250)
			::nme::display::DisplayObject tmp10 = this->nmeChildren->__get(index1).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(250)
			::nme::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(251)
			::nme::display::DisplayObject tmp12 = this->nmeChildren->__get(index2).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(251)
			this->nmeChildren[index1] = tmp12;
			HX_STACK_LINE(252)
			::nme::display::DisplayObject tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(252)
			this->nmeChildren[index2] = tmp13;
			HX_STACK_LINE(253)
			Dynamic tmp14 = this->nmeHandle;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(253)
			int tmp15 = index1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(253)
			int tmp16 = index2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(253)
			::nme::display::DisplayObjectContainer_obj::nme_doc_swap_children(tmp14,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,nmeSwapChildrenAt,(void))

::nme::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::nme::display::DisplayObject child){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","removeChild",0x1b35969e,"nme.display.DisplayObjectContainer.removeChild","nme/display/DisplayObjectContainer.hx",258,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(259)
	::nme::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	int tmp1 = this->nmeGetChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	int c = tmp1;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(261)
	bool tmp2 = (c >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(261)
	if ((tmp2)){
		HX_STACK_LINE(263)
		child->nmeSetParent(null());
		HX_STACK_LINE(264)
		::nme::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(264)
		return tmp3;
	}
	HX_STACK_LINE(268)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::nme::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","removeChildAt",0x84bf3331,"nme.display.DisplayObjectContainer.removeChildAt","nme/display/DisplayObjectContainer.hx",272,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(273)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(273)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(273)
	if ((tmp)){
		HX_STACK_LINE(273)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		int tmp3 = this->nmeChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(273)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(273)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(273)
		tmp1 = false;
	}
	HX_STACK_LINE(273)
	if ((tmp1)){
		HX_STACK_LINE(275)
		::nme::display::DisplayObject tmp2 = this->nmeChildren->__get(index).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(275)
		::nme::display::DisplayObject result = tmp2;		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(276)
		result->nmeSetParent(null());
		HX_STACK_LINE(277)
		::nme::display::DisplayObject tmp3 = result;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		return tmp3;
	}
	HX_STACK_LINE(280)
	::nme::errors::ArgumentError tmp2 = ::nme::errors::ArgumentError_obj::__new(HX_HCSTRING("The supplied DisplayObject must be a child of the caller.","\xe6","\xf4","\x27","\xa5"),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(280)
	HX_STACK_DO_THROW(tmp2);
	HX_STACK_LINE(280)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","removeChildren",0xa2b2b97d,"nme.display.DisplayObjectContainer.removeChildren","nme/display/DisplayObjectContainer.hx",283,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(284)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(284)
		if ((tmp)){
			HX_STACK_LINE(286)
			int tmp1 = this->nmeChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			endIndex = tmp2;
			HX_STACK_LINE(287)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			if ((tmp3)){
				HX_STACK_LINE(288)
				return null();
			}
		}
		HX_STACK_LINE(291)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(291)
		int tmp2 = this->nmeChildren->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(291)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(291)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(291)
		if ((tmp4)){
			HX_STACK_LINE(292)
			return null();
		}
		else{
			HX_STACK_LINE(293)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(293)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(293)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(293)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(293)
			if ((tmp7)){
				HX_STACK_LINE(293)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(293)
				tmp8 = true;
			}
			HX_STACK_LINE(293)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(293)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(293)
			if ((tmp9)){
				HX_STACK_LINE(293)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(293)
				int tmp12 = this->nmeChildren->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(293)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(293)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(293)
				tmp10 = true;
			}
			HX_STACK_LINE(293)
			if ((tmp10)){
				HX_STACK_LINE(294)
				::nme::errors::RangeError tmp11 = ::nme::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(294)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(296)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(296)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(297)
		while((true)){
			HX_STACK_LINE(297)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(297)
			if ((tmp7)){
				HX_STACK_LINE(297)
				break;
			}
			HX_STACK_LINE(299)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(299)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(300)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

Void DisplayObjectContainer_obj::setChildIndex( ::nme::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","setChildIndex",0x43609f7e,"nme.display.DisplayObjectContainer.setChildIndex","nme/display/DisplayObjectContainer.hx",306,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(306)
		int tmp = index;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(306)
		int tmp1 = this->nmeChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(306)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(306)
		if ((tmp2)){
			HX_STACK_LINE(306)
			::String tmp3 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(306)
			HX_STACK_DO_THROW(tmp3);
		}
		HX_STACK_LINE(306)
		::nme::display::DisplayObject s = null();		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(306)
		::nme::display::DisplayObject tmp3 = child;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(306)
		int tmp4 = this->nmeGetChildIndex(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(306)
		int orig = tmp4;		HX_STACK_VAR(orig,"orig");
		HX_STACK_LINE(306)
		bool tmp5 = (orig < (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		if ((tmp5)){
			HX_STACK_LINE(306)
			::String tmp6 = child->toString();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			::String tmp7 = (HX_HCSTRING("setChildIndex : object ","\x93","\x4a","\x81","\xb4") + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			::String tmp8 = (tmp7 + HX_HCSTRING(" not found.","\x39","\xf7","\x8e","\x4f"));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(306)
			::String msg = tmp8;		HX_STACK_VAR(msg,"msg");
			HX_STACK_LINE(306)
			bool tmp9 = (child->nmeParent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(306)
			if ((tmp9)){
				HX_STACK_LINE(306)
				int realindex = (int)-1;		HX_STACK_VAR(realindex,"realindex");
				HX_STACK_LINE(306)
				{
					HX_STACK_LINE(306)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(306)
					int tmp10 = this->nmeChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(306)
					int _g = tmp10;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(306)
					while((true)){
						HX_STACK_LINE(306)
						bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(306)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(306)
						if ((tmp12)){
							HX_STACK_LINE(306)
							break;
						}
						HX_STACK_LINE(306)
						int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(306)
						int i = tmp13;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(306)
						::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(i).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(306)
						::nme::display::DisplayObject tmp15 = child;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(306)
						bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(306)
						if ((tmp16)){
							HX_STACK_LINE(306)
							realindex = i;
							HX_STACK_LINE(306)
							break;
						}
					}
				}
				HX_STACK_LINE(306)
				bool tmp10 = (realindex != (int)-1);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(306)
				if ((tmp10)){
					HX_STACK_LINE(306)
					int tmp11 = realindex;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(306)
					::String tmp12 = ::Std_obj::string(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(306)
					::String tmp13 = (HX_HCSTRING("Internal error: Real child index was ","\x00","\xbf","\x50","\x8a") + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(306)
					hx::AddEq(msg,tmp13);
				}
				else{
					HX_STACK_LINE(306)
					hx::AddEq(msg,HX_HCSTRING("Internal error: Child was not in nmeChildren array!","\xeb","\xc5","\x0c","\xc2"));
				}
			}
			HX_STACK_LINE(306)
			::String tmp10 = msg;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			HX_STACK_DO_THROW(tmp10);
		}
		HX_STACK_LINE(306)
		Dynamic tmp6 = this->nmeHandle;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		Dynamic tmp7 = child->nmeHandle;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		int tmp8 = index;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(306)
		::nme::display::DisplayObjectContainer_obj::nme_doc_set_child_index(tmp6,tmp7,tmp8);
		HX_STACK_LINE(306)
		bool tmp9 = (index < orig);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(306)
		if ((tmp9)){
			HX_STACK_LINE(306)
			int i = orig;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(306)
			while((true)){
				HX_STACK_LINE(306)
				bool tmp10 = (i > index);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(306)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(306)
				if ((tmp11)){
					HX_STACK_LINE(306)
					break;
				}
				HX_STACK_LINE(306)
				int tmp12 = (i - (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(306)
				::nme::display::DisplayObject tmp13 = this->nmeChildren->__get(tmp12).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(306)
				this->nmeChildren[i] = tmp13;
				HX_STACK_LINE(306)
				(i)--;
			}
			HX_STACK_LINE(306)
			::nme::display::DisplayObject tmp10 = child;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			this->nmeChildren[index] = tmp10;
		}
		else{
			HX_STACK_LINE(306)
			bool tmp10 = (orig < index);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(306)
			if ((tmp10)){
				HX_STACK_LINE(306)
				int i = orig;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(306)
				while((true)){
					HX_STACK_LINE(306)
					bool tmp11 = (i < index);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(306)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(306)
					if ((tmp12)){
						HX_STACK_LINE(306)
						break;
					}
					HX_STACK_LINE(306)
					int tmp13 = (i + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(306)
					::nme::display::DisplayObject tmp14 = this->nmeChildren->__get(tmp13).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(306)
					this->nmeChildren[i] = tmp14;
					HX_STACK_LINE(306)
					(i)++;
				}
				HX_STACK_LINE(306)
				::nme::display::DisplayObject tmp11 = child;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(306)
				this->nmeChildren[index] = tmp11;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::swapChildren( ::nme::display::DisplayObject child1,::nme::display::DisplayObject child2){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","swapChildren",0x6819244c,"nme.display.DisplayObjectContainer.swapChildren","nme/display/DisplayObjectContainer.hx",310,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(311)
		::nme::display::DisplayObject tmp = child1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(311)
		int tmp1 = this->nmeGetChildIndex(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(311)
		int idx1 = tmp1;		HX_STACK_VAR(idx1,"idx1");
		HX_STACK_LINE(312)
		::nme::display::DisplayObject tmp2 = child2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(312)
		int tmp3 = this->nmeGetChildIndex(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(312)
		int idx2 = tmp3;		HX_STACK_VAR(idx2,"idx2");
		HX_STACK_LINE(313)
		bool tmp4 = (idx1 < (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(313)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(313)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(313)
		if ((tmp5)){
			HX_STACK_LINE(313)
			tmp6 = (idx2 < (int)0);
		}
		else{
			HX_STACK_LINE(313)
			tmp6 = true;
		}
		HX_STACK_LINE(313)
		if ((tmp6)){
			HX_STACK_LINE(314)
			HX_STACK_DO_THROW(HX_HCSTRING("swapChildren:Could not find children","\x32","\xad","\x6e","\x85"));
		}
		HX_STACK_LINE(315)
		{
			HX_STACK_LINE(315)
			bool tmp7 = (idx1 < (int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(315)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(315)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(315)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(315)
			if ((tmp9)){
				HX_STACK_LINE(315)
				tmp10 = (idx2 < (int)0);
			}
			else{
				HX_STACK_LINE(315)
				tmp10 = true;
			}
			HX_STACK_LINE(315)
			bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(315)
			bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(315)
			bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(315)
			if ((tmp12)){
				HX_STACK_LINE(315)
				int tmp14 = idx1;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(315)
				int tmp15 = this->nmeChildren->length;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(315)
				int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(315)
				int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				tmp13 = (tmp14 > tmp17);
			}
			else{
				HX_STACK_LINE(315)
				tmp13 = true;
			}
			HX_STACK_LINE(315)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(315)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(315)
			if ((tmp14)){
				HX_STACK_LINE(315)
				int tmp16 = idx2;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(315)
				int tmp17 = this->nmeChildren->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				tmp15 = (tmp16 > tmp18);
			}
			else{
				HX_STACK_LINE(315)
				tmp15 = true;
			}
			HX_STACK_LINE(315)
			if ((tmp15)){
				HX_STACK_LINE(315)
				::nme::errors::RangeError tmp16 = ::nme::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(315)
				HX_STACK_DO_THROW(tmp16);
			}
			HX_STACK_LINE(315)
			bool tmp16 = (idx1 != idx2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(315)
			if ((tmp16)){
				HX_STACK_LINE(315)
				::nme::display::DisplayObject tmp17 = this->nmeChildren->__get(idx1).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(315)
				::nme::display::DisplayObject tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(315)
				::nme::display::DisplayObject tmp19 = this->nmeChildren->__get(idx2).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(315)
				this->nmeChildren[idx1] = tmp19;
				HX_STACK_LINE(315)
				::nme::display::DisplayObject tmp20 = tmp18;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(315)
				this->nmeChildren[idx2] = tmp20;
				HX_STACK_LINE(315)
				Dynamic tmp21 = this->nmeHandle;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(315)
				int tmp22 = idx1;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(315)
				int tmp23 = idx2;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(315)
				::nme::display::DisplayObjectContainer_obj::nme_doc_swap_children(tmp21,tmp22,tmp23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("nme.display.DisplayObjectContainer","swapChildrenAt",0x7be4085f,"nme.display.DisplayObjectContainer.swapChildrenAt","nme/display/DisplayObjectContainer.hx",320,0xb12222a8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(320)
		bool tmp = (index1 < (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		if ((tmp2)){
			HX_STACK_LINE(320)
			tmp3 = (index2 < (int)0);
		}
		else{
			HX_STACK_LINE(320)
			tmp3 = true;
		}
		HX_STACK_LINE(320)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(320)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(320)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(320)
		if ((tmp5)){
			HX_STACK_LINE(320)
			int tmp7 = index1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(320)
			int tmp8 = this->nmeChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(320)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			tmp6 = (tmp7 > tmp10);
		}
		else{
			HX_STACK_LINE(320)
			tmp6 = true;
		}
		HX_STACK_LINE(320)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(320)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(320)
		if ((tmp7)){
			HX_STACK_LINE(320)
			int tmp9 = index2;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			int tmp10 = this->nmeChildren->length;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(320)
			tmp8 = (tmp9 > tmp11);
		}
		else{
			HX_STACK_LINE(320)
			tmp8 = true;
		}
		HX_STACK_LINE(320)
		if ((tmp8)){
			HX_STACK_LINE(320)
			::nme::errors::RangeError tmp9 = ::nme::errors::RangeError_obj::__new(HX_HCSTRING("swapChildrenAt : index out of bounds","\xfd","\x03","\xa9","\x7f"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(320)
			HX_STACK_DO_THROW(tmp9);
		}
		HX_STACK_LINE(320)
		bool tmp9 = (index1 != index2);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(320)
		if ((tmp9)){
			HX_STACK_LINE(320)
			::nme::display::DisplayObject tmp10 = this->nmeChildren->__get(index1).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(320)
			::nme::display::DisplayObject tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(320)
			::nme::display::DisplayObject tmp12 = this->nmeChildren->__get(index2).StaticCast< ::nme::display::DisplayObject >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(320)
			this->nmeChildren[index1] = tmp12;
			HX_STACK_LINE(320)
			::nme::display::DisplayObject tmp13 = tmp11;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(320)
			this->nmeChildren[index2] = tmp13;
			HX_STACK_LINE(320)
			Dynamic tmp14 = this->nmeHandle;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(320)
			int tmp15 = index1;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(320)
			int tmp16 = index2;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(320)
			::nme::display::DisplayObjectContainer_obj::nme_doc_swap_children(tmp14,tmp15,tmp16);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

bool DisplayObjectContainer_obj::get_mouseChildren( ){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","get_mouseChildren",0xa1612441,"nme.display.DisplayObjectContainer.get_mouseChildren","nme/display/DisplayObjectContainer.hx",324,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(324)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(324)
	bool tmp1 = ::nme::display::DisplayObjectContainer_obj::nme_doc_get_mouse_children(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(324)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_mouseChildren,return )

bool DisplayObjectContainer_obj::set_mouseChildren( bool inVal){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","set_mouseChildren",0xc4cefc4d,"nme.display.DisplayObjectContainer.set_mouseChildren","nme/display/DisplayObjectContainer.hx",326,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inVal,"inVal")
	HX_STACK_LINE(327)
	Dynamic tmp = this->nmeHandle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(327)
	bool tmp1 = inVal;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(327)
	::nme::display::DisplayObjectContainer_obj::nme_doc_set_mouse_children(tmp,tmp1);
	HX_STACK_LINE(328)
	bool tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(328)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_mouseChildren,return )

int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","get_numChildren",0xa9871c22,"nme.display.DisplayObjectContainer.get_numChildren","nme/display/DisplayObjectContainer.hx",331,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(331)
	int tmp = this->nmeChildren->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(331)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )

bool DisplayObjectContainer_obj::get_tabChildren( ){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","get_tabChildren",0x988cbf31,"nme.display.DisplayObjectContainer.get_tabChildren","nme/display/DisplayObjectContainer.hx",332,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_LINE(332)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_tabChildren,return )

bool DisplayObjectContainer_obj::set_tabChildren( bool inValue){
	HX_STACK_FRAME("nme.display.DisplayObjectContainer","set_tabChildren",0x94583c3d,"nme.display.DisplayObjectContainer.set_tabChildren","nme/display/DisplayObjectContainer.hx",333,0xb12222a8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(inValue,"inValue")
	HX_STACK_LINE(333)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,set_tabChildren,return )

Dynamic DisplayObjectContainer_obj::nme_create_display_object_container;

Dynamic DisplayObjectContainer_obj::nme_doc_add_child;

Dynamic DisplayObjectContainer_obj::nme_doc_remove_child;

Dynamic DisplayObjectContainer_obj::nme_doc_set_child_index;

Dynamic DisplayObjectContainer_obj::nme_doc_get_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_set_mouse_children;

Dynamic DisplayObjectContainer_obj::nme_doc_swap_children;


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(numChildren,"numChildren");
	HX_MARK_MEMBER_NAME(nmeChildren,"nmeChildren");
	::nme::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(numChildren,"numChildren");
	HX_VISIT_MEMBER_NAME(nmeChildren,"nmeChildren");
	::nme::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnAdded") ) { return nmeOnAdded_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { return inCallProp != hx::paccNever ? get_numChildren() : numChildren; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp != hx::paccNever) return get_tabChildren(); }
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { return nmeChildren; }
		if (HX_FIELD_EQ(inName,"nmeAddChild") ) { return nmeAddChild_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeFindByID") ) { return nmeFindByID_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nmeBroadcast") ) { return nmeBroadcast_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeOnRemoved") ) { return nmeOnRemoved_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp != hx::paccNever) return get_mouseChildren(); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tabChildren") ) { return get_tabChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tabChildren") ) { return set_tabChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"nmeGetChildIndex") ) { return nmeGetChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeSetChildIndex") ) { return nmeSetChildIndex_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nmeSwapChildrenAt") ) { return nmeSwapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"get_mouseChildren") ) { return get_mouseChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouseChildren") ) { return set_mouseChildren_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nmeGetObjectsUnderPoint") ) { return nmeGetObjectsUnderPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"nmeRemoveChildFromArray") ) { return nmeRemoveChildFromArray_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { outValue = nme_doc_add_child; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { outValue = nme_doc_remove_child; return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { outValue = nme_doc_swap_children; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { outValue = nme_doc_set_child_index; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { outValue = nme_doc_get_mouse_children; return true;  }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { outValue = nme_doc_set_mouse_children; return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { outValue = nme_create_display_object_container; return true;  }
	}
	return false;
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { numChildren=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { if (inCallProp != hx::paccNever) return set_tabChildren(inValue); }
		if (HX_FIELD_EQ(inName,"nmeChildren") ) { nmeChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { if (inCallProp != hx::paccNever) return set_mouseChildren(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisplayObjectContainer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"nme_doc_add_child") ) { nme_doc_add_child=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"nme_doc_remove_child") ) { nme_doc_remove_child=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"nme_doc_swap_children") ) { nme_doc_swap_children=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"nme_doc_set_child_index") ) { nme_doc_set_child_index=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"nme_doc_get_mouse_children") ) { nme_doc_get_mouse_children=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"nme_doc_set_mouse_children") ) { nme_doc_set_mouse_children=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"nme_create_display_object_container") ) { nme_create_display_object_container=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("nmeChildren","\xa5","\x62","\xa1","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DisplayObjectContainer_obj,numChildren),HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,nmeChildren),HX_HCSTRING("nmeChildren","\xa5","\x62","\xa1","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_create_display_object_container,HX_HCSTRING("nme_create_display_object_container","\x08","\xd9","\x1f","\x03")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_add_child,HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_remove_child,HX_HCSTRING("nme_doc_remove_child","\xe1","\xc5","\x52","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_set_child_index,HX_HCSTRING("nme_doc_set_child_index","\xd2","\x47","\x56","\x94")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_get_mouse_children,HX_HCSTRING("nme_doc_get_mouse_children","\x62","\xec","\x16","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_set_mouse_children,HX_HCSTRING("nme_doc_set_mouse_children","\xd6","\x1e","\xc6","\x46")},
	{hx::fsObject /*Dynamic*/ ,(void *) &DisplayObjectContainer_obj::nme_doc_swap_children,HX_HCSTRING("nme_doc_swap_children","\xeb","\xd5","\xce","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"),
	HX_HCSTRING("nmeChildren","\xa5","\x62","\xa1","\xc2"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("nmeAddChild","\x21","\x19","\x4e","\x11"),
	HX_HCSTRING("nmeBroadcast","\xdb","\x92","\x42","\x7d"),
	HX_HCSTRING("nmeFindByID","\xb1","\x4f","\xee","\xe5"),
	HX_HCSTRING("nmeGetChildIndex","\xe6","\x4c","\x29","\xd5"),
	HX_HCSTRING("nmeGetObjectsUnderPoint","\xfc","\xda","\x07","\x78"),
	HX_HCSTRING("nmeOnAdded","\x7b","\xd8","\x82","\x81"),
	HX_HCSTRING("nmeOnRemoved","\x1b","\xc8","\xd3","\x68"),
	HX_HCSTRING("nmeRemoveChildFromArray","\x5d","\xe4","\xd5","\xf9"),
	HX_HCSTRING("nmeSetChildIndex","\xf2","\x2e","\x2f","\x1a"),
	HX_HCSTRING("nmeSwapChildrenAt","\x6b","\xfe","\xd2","\x99"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("get_mouseChildren","\xdb","\x23","\xdb","\x05"),
	HX_HCSTRING("set_mouseChildren","\xe7","\xfb","\x48","\x29"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	HX_HCSTRING("get_tabChildren","\x4b","\xc4","\x67","\x0c"),
	HX_HCSTRING("set_tabChildren","\x57","\x41","\x33","\x08"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_create_display_object_container,"nme_create_display_object_container");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_add_child,"nme_doc_add_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_remove_child,"nme_doc_remove_child");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_child_index,"nme_doc_set_child_index");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_get_mouse_children,"nme_doc_get_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_set_mouse_children,"nme_doc_set_mouse_children");
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::nme_doc_swap_children,"nme_doc_swap_children");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("nme_create_display_object_container","\x08","\xd9","\x1f","\x03"),
	HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1"),
	HX_HCSTRING("nme_doc_remove_child","\xe1","\xc5","\x52","\x0f"),
	HX_HCSTRING("nme_doc_set_child_index","\xd2","\x47","\x56","\x94"),
	HX_HCSTRING("nme_doc_get_mouse_children","\x62","\xec","\x16","\x6a"),
	HX_HCSTRING("nme_doc_set_mouse_children","\xd6","\x1e","\xc6","\x46"),
	HX_HCSTRING("nme_doc_swap_children","\xeb","\xd5","\xce","\xb4"),
	::String(null()) };

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.display.DisplayObjectContainer","\x54","\xaf","\xee","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &DisplayObjectContainer_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void DisplayObjectContainer_obj::__boot()
{
	nme_create_display_object_container= ::nme::Loader_obj::load(HX_HCSTRING("nme_create_display_object_container","\x08","\xd9","\x1f","\x03"),(int)0);
	nme_doc_add_child= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_add_child","\xfe","\xeb","\xe5","\xd1"),(int)2);
	nme_doc_remove_child= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_remove_child","\xe1","\xc5","\x52","\x0f"),(int)2);
	nme_doc_set_child_index= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_set_child_index","\xd2","\x47","\x56","\x94"),(int)3);
	nme_doc_get_mouse_children= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_get_mouse_children","\x62","\xec","\x16","\x6a"),(int)1);
	nme_doc_set_mouse_children= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_set_mouse_children","\xd6","\x1e","\xc6","\x46"),(int)2);
	nme_doc_swap_children= ::nme::Loader_obj::load(HX_HCSTRING("nme_doc_swap_children","\xeb","\xd5","\xce","\xb4"),(int)3);
}

} // end namespace nme
} // end namespace display
