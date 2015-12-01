#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_events_ErrorEvent
#include <nme/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_Event
#include <nme/events/Event.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_EventPhase
#include <nme/events/EventPhase.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IOErrorEvent
#include <nme/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_nme_events_Listener
#include <nme/events/Listener.h>
#endif
#ifndef INCLUDED_nme_events_TextEvent
#include <nme/events/TextEvent.h>
#endif
#ifndef INCLUDED_nme_utils_WeakRef
#include <nme/utils/WeakRef.h>
#endif
namespace nme{
namespace events{

Void EventDispatcher_obj::__construct(::nme::events::IEventDispatcher target)
{
HX_STACK_FRAME("nme.events.EventDispatcher","new",0x9707d606,"nme.events.EventDispatcher.new","nme/events/EventDispatcher.hx",58,0x1eb8c64a)
HX_STACK_THIS(this)
HX_STACK_ARG(target,"target")
{
	HX_STACK_LINE(59)
	bool tmp = (target == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(59)
	::nme::events::IEventDispatcher tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(59)
	if ((tmp)){
		HX_STACK_LINE(59)
		tmp1 = hx::ObjectPtr<OBJ_>(this);
	}
	else{
		HX_STACK_LINE(59)
		tmp1 = target;
	}
	HX_STACK_LINE(59)
	this->nmeTarget = tmp1;
	HX_STACK_LINE(60)
	this->nmeEventMap = null();
}
;
	return null();
}

//EventDispatcher_obj::~EventDispatcher_obj() { }

Dynamic EventDispatcher_obj::__CreateEmpty() { return  new EventDispatcher_obj; }
hx::ObjectPtr< EventDispatcher_obj > EventDispatcher_obj::__new(::nme::events::IEventDispatcher target)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(target);
	return _result_;}

Dynamic EventDispatcher_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventDispatcher_obj > _result_ = new EventDispatcher_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

hx::Object *EventDispatcher_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::nme::events::IEventDispatcher_obj)) return operator ::nme::events::IEventDispatcher_obj *();
	return super::__ToInterface(inType);
}

EventDispatcher_obj::operator ::nme::events::IEventDispatcher_obj *()
	{ return new ::nme::events::IEventDispatcher_delegate_< EventDispatcher_obj >(this); }
Void EventDispatcher_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("nme.events.EventDispatcher","addEventListener",0xd934f667,"nme.events.EventDispatcher.addEventListener","nme/events/EventDispatcher.hx",64,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
		HX_STACK_LINE(65)
		::haxe::ds::StringMap tmp = this->nmeEventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(65)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(65)
		if ((tmp1)){
			HX_STACK_LINE(66)
			::haxe::ds::StringMap tmp2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(66)
			this->nmeEventMap = tmp2;
		}
		HX_STACK_LINE(68)
		::haxe::ds::StringMap tmp2 = this->nmeEventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		Array< ::Dynamic > list = tmp2->get(tmp3);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(69)
		bool tmp4 = (list == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(69)
		if ((tmp4)){
			HX_STACK_LINE(71)
			list = Array_obj< ::Dynamic >::__new();
			HX_STACK_LINE(72)
			::haxe::ds::StringMap tmp5 = this->nmeEventMap;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(72)
			::String tmp6 = type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(72)
			tmp5->set(tmp6,list);
		}
		HX_STACK_LINE(75)
		::nme::events::Listener tmp5 = ::nme::events::Listener_obj::__new(listener,useCapture,priority,useWeakReference);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(75)
		list->push(tmp5);
		HX_STACK_LINE(78)
		bool tmp6 = (priority != (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(78)
		if ((tmp6)){
			HX_STACK_LINE(79)
			Dynamic tmp7 = ::nme::events::EventDispatcher_obj::sortEvents_dyn();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(79)
			list->sort(tmp7);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(EventDispatcher_obj,addEventListener,(void))

Void EventDispatcher_obj::DispatchCompleteEvent( ){
{
		HX_STACK_FRAME("nme.events.EventDispatcher","DispatchCompleteEvent",0x8509e48d,"nme.events.EventDispatcher.DispatchCompleteEvent","nme/events/EventDispatcher.hx",102,0x1eb8c64a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		::String tmp = ::nme::events::Event_obj::COMPLETE;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(103)
		::nme::events::Event tmp1 = ::nme::events::Event_obj::__new(tmp,null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		::nme::events::Event evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(104)
		::nme::events::Event tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(104)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,DispatchCompleteEvent,(void))

bool EventDispatcher_obj::dispatchEvent( ::nme::events::Event event){
	HX_STACK_FRAME("nme.events.EventDispatcher","dispatchEvent",0x2e6a9826,"nme.events.EventDispatcher.dispatchEvent","nme/events/EventDispatcher.hx",108,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(event,"event")
	HX_STACK_LINE(109)
	::haxe::ds::StringMap tmp = this->nmeEventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(109)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(109)
	if ((tmp1)){
		HX_STACK_LINE(110)
		return false;
	}
	HX_STACK_LINE(112)
	Dynamic tmp2 = event->get_target();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(112)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(112)
	if ((tmp3)){
		HX_STACK_LINE(113)
		::nme::events::IEventDispatcher tmp4 = this->nmeTarget;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(113)
		event->set_target(tmp4);
	}
	HX_STACK_LINE(115)
	Dynamic tmp4 = event->get_currentTarget();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(115)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(115)
	if ((tmp5)){
		HX_STACK_LINE(116)
		::nme::events::IEventDispatcher tmp6 = this->nmeTarget;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(116)
		event->set_currentTarget(tmp6);
	}
	HX_STACK_LINE(118)
	::haxe::ds::StringMap tmp6 = this->nmeEventMap;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(118)
	::String tmp7 = event->get_type();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(118)
	Array< ::Dynamic > list = tmp6->get(tmp7);		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(119)
	int tmp8 = event->get_eventPhase();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(119)
	int tmp9 = ::nme::events::EventPhase_obj::CAPTURING_PHASE;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(119)
	bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(119)
	bool capture = tmp10;		HX_STACK_VAR(capture,"capture");
	HX_STACK_LINE(121)
	bool tmp11 = (list != null());		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(121)
	if ((tmp11)){
		HX_STACK_LINE(123)
		int idx = (int)0;		HX_STACK_VAR(idx,"idx");
		HX_STACK_LINE(124)
		int listLength = list->length;		HX_STACK_VAR(listLength,"listLength");
		HX_STACK_LINE(125)
		while((true)){
			HX_STACK_LINE(125)
			bool tmp12 = (idx < listLength);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(125)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(125)
			if ((tmp13)){
				HX_STACK_LINE(125)
				break;
			}
			HX_STACK_LINE(127)
			::nme::events::Listener tmp14 = list->__get(idx).StaticCast< ::nme::events::Listener >();		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(127)
			::nme::events::Listener listener = tmp14;		HX_STACK_VAR(listener,"listener");
			HX_STACK_LINE(128)
			bool tmp15 = (listener != null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(128)
			bool tmp16;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(128)
			if ((tmp15)){
				HX_STACK_LINE(128)
				Dynamic tmp17 = listener->mListner->get();		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(128)
				Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(128)
				tmp16 = (tmp18 != null());
			}
			else{
				HX_STACK_LINE(128)
				tmp16 = false;
			}
			HX_STACK_LINE(128)
			bool isValid = tmp16;		HX_STACK_VAR(isValid,"isValid");
			HX_STACK_LINE(130)
			bool tmp17 = isValid;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(130)
			if ((tmp18)){
				HX_STACK_LINE(133)
				int tmp19 = idx;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(133)
				list->splice(tmp19,(int)1);
				HX_STACK_LINE(134)
				listLength = list->length;
			}
			else{
				HX_STACK_LINE(138)
				bool tmp19 = (listener->mUseCapture == capture);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(138)
				if ((tmp19)){
					HX_STACK_LINE(140)
					::nme::events::Event tmp20 = event;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(140)
					listener->dispatchEvent(tmp20);
					HX_STACK_LINE(141)
					bool tmp21 = event->nmeGetIsCancelledNow();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(141)
					if ((tmp21)){
						HX_STACK_LINE(142)
						return true;
					}
				}
				HX_STACK_LINE(145)
				(idx)++;
			}
		}
		HX_STACK_LINE(149)
		return true;
	}
	HX_STACK_LINE(152)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,dispatchEvent,return )

Void EventDispatcher_obj::DispatchIOErrorEvent( ){
{
		HX_STACK_FRAME("nme.events.EventDispatcher","DispatchIOErrorEvent",0x521dc02c,"nme.events.EventDispatcher.DispatchIOErrorEvent","nme/events/EventDispatcher.hx",156,0x1eb8c64a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		::String tmp = ::nme::events::IOErrorEvent_obj::IO_ERROR;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(157)
		::nme::events::IOErrorEvent tmp1 = ::nme::events::IOErrorEvent_obj::__new(tmp,null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(157)
		::nme::events::IOErrorEvent evt = tmp1;		HX_STACK_VAR(evt,"evt");
		HX_STACK_LINE(158)
		::nme::events::IOErrorEvent tmp2 = evt;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(158)
		this->dispatchEvent(tmp2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,DispatchIOErrorEvent,(void))

bool EventDispatcher_obj::hasEventListener( ::String type){
	HX_STACK_FRAME("nme.events.EventDispatcher","hasEventListener",0xf4bb198e,"nme.events.EventDispatcher.hasEventListener","nme/events/EventDispatcher.hx",162,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(163)
	::haxe::ds::StringMap tmp = this->nmeEventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	if ((tmp1)){
		HX_STACK_LINE(164)
		return false;
	}
	HX_STACK_LINE(166)
	::haxe::ds::StringMap tmp2 = this->nmeEventMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(166)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(166)
	Array< ::Dynamic > h = tmp2->get(tmp3);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(167)
	bool tmp4 = (h != null());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	if ((tmp4)){
		HX_STACK_LINE(169)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(169)
		while((true)){
			HX_STACK_LINE(169)
			bool tmp5 = (_g < h->length);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(169)
			if ((tmp6)){
				HX_STACK_LINE(169)
				break;
			}
			HX_STACK_LINE(169)
			::nme::events::Listener tmp7 = h->__get(_g).StaticCast< ::nme::events::Listener >();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(169)
			::nme::events::Listener item = tmp7;		HX_STACK_VAR(item,"item");
			HX_STACK_LINE(169)
			++(_g);
			HX_STACK_LINE(171)
			bool tmp8 = (item != null());		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(171)
			if ((tmp8)){
				HX_STACK_LINE(171)
				return true;
			}
		}
	}
	HX_STACK_LINE(175)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,hasEventListener,return )

Void EventDispatcher_obj::removeEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_capture){
bool capture = __o_capture.Default(false);
	HX_STACK_FRAME("nme.events.EventDispatcher","removeEventListener",0x415db970,"nme.events.EventDispatcher.removeEventListener","nme/events/EventDispatcher.hx",179,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(capture,"capture")
{
		HX_STACK_LINE(180)
		::haxe::ds::StringMap tmp = this->nmeEventMap;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(180)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(180)
		if ((tmp1)){
			HX_STACK_LINE(181)
			return null();
		}
		HX_STACK_LINE(183)
		::haxe::ds::StringMap tmp2 = this->nmeEventMap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(183)
		::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(183)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(183)
		if ((tmp5)){
			HX_STACK_LINE(183)
			return null();
		}
		HX_STACK_LINE(185)
		::haxe::ds::StringMap tmp6 = this->nmeEventMap;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::String tmp7 = type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		Array< ::Dynamic > list = tmp6->get(tmp7);		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(186)
		{
			HX_STACK_LINE(186)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(186)
			int _g = list->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(186)
			while((true)){
				HX_STACK_LINE(186)
				bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(186)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(186)
				if ((tmp9)){
					HX_STACK_LINE(186)
					break;
				}
				HX_STACK_LINE(186)
				int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(186)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(188)
				::nme::events::Listener tmp11 = list->__get(i).StaticCast< ::nme::events::Listener >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(188)
				bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(188)
				if ((tmp12)){
					HX_STACK_LINE(190)
					::nme::events::Listener tmp13 = list->__get(i).StaticCast< ::nme::events::Listener >();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(190)
					::nme::events::Listener li = tmp13;		HX_STACK_VAR(li,"li");
					HX_STACK_LINE(191)
					Dynamic tmp14 = listener;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(191)
					bool tmp15 = capture;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(191)
					bool tmp16 = li->Is(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(191)
					if ((tmp16)){
						HX_STACK_LINE(194)
						list[i] = null();
						HX_STACK_LINE(195)
						return null();
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(EventDispatcher_obj,removeEventListener,(void))

::String EventDispatcher_obj::toString( ){
	HX_STACK_FRAME("nme.events.EventDispatcher","toString",0xfd469146,"nme.events.EventDispatcher.toString","nme/events/EventDispatcher.hx",202,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(203)
	::hx::Class tmp = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(203)
	::String tmp1 = ::Type_obj::getClassName(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(203)
	::String tmp2 = (HX_HCSTRING("[object ","\x86","\xf9","\x3d","\xd7") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(203)
	::String tmp3 = (tmp2 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(203)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(EventDispatcher_obj,toString,return )

bool EventDispatcher_obj::willTrigger( ::String type){
	HX_STACK_FRAME("nme.events.EventDispatcher","willTrigger",0xc28b0fec,"nme.events.EventDispatcher.willTrigger","nme/events/EventDispatcher.hx",207,0x1eb8c64a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(208)
	::haxe::ds::StringMap tmp = this->nmeEventMap;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(208)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(208)
	if ((tmp1)){
		HX_STACK_LINE(209)
		return false;
	}
	HX_STACK_LINE(211)
	::haxe::ds::StringMap tmp2 = this->nmeEventMap;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(211)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(211)
	bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(211)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(EventDispatcher_obj,willTrigger,return )

int EventDispatcher_obj::sortEvents( ::nme::events::Listener a,::nme::events::Listener b){
	HX_STACK_FRAME("nme.events.EventDispatcher","sortEvents",0x6e0c6031,"nme.events.EventDispatcher.sortEvents","nme/events/EventDispatcher.hx",84,0x1eb8c64a)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(86)
	bool tmp = (null() == a);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	if ((tmp)){
		HX_STACK_LINE(86)
		tmp1 = (null() == b);
	}
	else{
		HX_STACK_LINE(86)
		tmp1 = false;
	}
	HX_STACK_LINE(86)
	if ((tmp1)){
		HX_STACK_LINE(86)
		return (int)0;
	}
	HX_STACK_LINE(87)
	bool tmp2 = (null() == a);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(87)
	if ((tmp2)){
		HX_STACK_LINE(87)
		return (int)-1;
	}
	HX_STACK_LINE(88)
	bool tmp3 = (null() == b);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(88)
	if ((tmp3)){
		HX_STACK_LINE(88)
		return (int)1;
	}
	HX_STACK_LINE(89)
	Dynamic tmp4 = a->mListner->get();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(89)
	Dynamic al = tmp4;		HX_STACK_VAR(al,"al");
	HX_STACK_LINE(90)
	Dynamic tmp5 = b->mListner->get();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(90)
	Dynamic bl = tmp5;		HX_STACK_VAR(bl,"bl");
	HX_STACK_LINE(91)
	bool tmp6 = (null() == al);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(91)
	bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(91)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(91)
	if ((tmp7)){
		HX_STACK_LINE(91)
		tmp8 = (null() == bl);
	}
	else{
		HX_STACK_LINE(91)
		tmp8 = true;
	}
	HX_STACK_LINE(91)
	if ((tmp8)){
		HX_STACK_LINE(91)
		return (int)0;
	}
	HX_STACK_LINE(92)
	bool tmp9 = (a->mPriority == b->mPriority);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(92)
	if ((tmp9)){
		HX_STACK_LINE(94)
		bool tmp10 = (a->mID == b->mID);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(94)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(94)
		if ((tmp10)){
			HX_STACK_LINE(94)
			tmp11 = (int)0;
		}
		else{
			HX_STACK_LINE(94)
			bool tmp12 = (a->mID > b->mID);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(94)
			if ((tmp12)){
				HX_STACK_LINE(94)
				tmp11 = (int)1;
			}
			else{
				HX_STACK_LINE(94)
				tmp11 = (int)-1;
			}
		}
		HX_STACK_LINE(94)
		return tmp11;
	}
	else{
		HX_STACK_LINE(97)
		bool tmp10 = (a->mPriority < b->mPriority);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(97)
		int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(97)
		if ((tmp10)){
			HX_STACK_LINE(97)
			tmp11 = (int)1;
		}
		else{
			HX_STACK_LINE(97)
			tmp11 = (int)-1;
		}
		HX_STACK_LINE(97)
		return tmp11;
	}
	HX_STACK_LINE(92)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EventDispatcher_obj,sortEvents,return )


EventDispatcher_obj::EventDispatcher_obj()
{
}

void EventDispatcher_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventDispatcher);
	HX_MARK_MEMBER_NAME(nmeEventMap,"nmeEventMap");
	HX_MARK_MEMBER_NAME(nmeTarget,"nmeTarget");
	HX_MARK_END_CLASS();
}

void EventDispatcher_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nmeEventMap,"nmeEventMap");
	HX_VISIT_MEMBER_NAME(nmeTarget,"nmeTarget");
}

Dynamic EventDispatcher_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nmeTarget") ) { return nmeTarget; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeEventMap") ) { return nmeEventMap; }
		if (HX_FIELD_EQ(inName,"willTrigger") ) { return willTrigger_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dispatchEvent") ) { return dispatchEvent_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		if (HX_FIELD_EQ(inName,"hasEventListener") ) { return hasEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DispatchIOErrorEvent") ) { return DispatchIOErrorEvent_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DispatchCompleteEvent") ) { return DispatchCompleteEvent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool EventDispatcher_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"sortEvents") ) { outValue = sortEvents_dyn(); return true;  }
	}
	return false;
}

Dynamic EventDispatcher_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"nmeTarget") ) { nmeTarget=inValue.Cast< ::nme::events::IEventDispatcher >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nmeEventMap") ) { nmeEventMap=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventDispatcher_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("nmeEventMap","\x08","\xd0","\x09","\x13"));
	outFields->push(HX_HCSTRING("nmeTarget","\x37","\xf7","\xae","\x21"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(EventDispatcher_obj,nmeEventMap),HX_HCSTRING("nmeEventMap","\x08","\xd0","\x09","\x13")},
	{hx::fsObject /*::nme::events::IEventDispatcher*/ ,(int)offsetof(EventDispatcher_obj,nmeTarget),HX_HCSTRING("nmeTarget","\x37","\xf7","\xae","\x21")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("nmeEventMap","\x08","\xd0","\x09","\x13"),
	HX_HCSTRING("nmeTarget","\x37","\xf7","\xae","\x21"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("DispatchCompleteEvent","\x67","\x7d","\x75","\xa9"),
	HX_HCSTRING("dispatchEvent","\x00","\xc7","\x64","\xc6"),
	HX_HCSTRING("DispatchIOErrorEvent","\x92","\x80","\xda","\xd2"),
	HX_HCSTRING("hasEventListener","\xf4","\x2e","\xea","\x0c"),
	HX_HCSTRING("removeEventListener","\xca","\x87","\x75","\x55"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("willTrigger","\x46","\xf4","\x3f","\xd8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventDispatcher_obj::__mClass,"__mClass");
};

#endif

hx::Class EventDispatcher_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("sortEvents","\x17","\xc5","\x4f","\xf3"),
	::String(null()) };

void EventDispatcher_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.events.EventDispatcher","\x14","\x1b","\x1f","\xa7");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EventDispatcher_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EventDispatcher_obj >;
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

} // end namespace nme
} // end namespace events
