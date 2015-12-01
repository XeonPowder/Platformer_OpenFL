#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_AssetInfo
#include <nme/AssetInfo.h>
#endif
#ifndef INCLUDED_nme_AssetType
#include <nme/AssetType.h>
#endif
#ifndef INCLUDED_nme_Assets
#include <nme/Assets.h>
#endif
#ifndef INCLUDED_nme_Cache
#include <nme/Cache.h>
#endif
#ifndef INCLUDED_nme_Loader
#include <nme/Loader.h>
#endif
#ifndef INCLUDED_nme_bare_Surface
#include <nme/bare/Surface.h>
#endif
#ifndef INCLUDED_nme_display_BitmapData
#include <nme/display/BitmapData.h>
#endif
#ifndef INCLUDED_nme_display_IBitmapDrawable
#include <nme/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_nme_events_EventDispatcher
#include <nme/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_nme_events_IEventDispatcher
#include <nme/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_nme_media_Sound
#include <nme/media/Sound.h>
#endif
#ifndef INCLUDED_nme_media_SoundLoaderContext
#include <nme/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_nme_net_URLRequest
#include <nme/net/URLRequest.h>
#endif
#ifndef INCLUDED_nme_text_Font
#include <nme/text/Font.h>
#endif
#ifndef INCLUDED_nme_text_FontStyle
#include <nme/text/FontStyle.h>
#endif
#ifndef INCLUDED_nme_text_FontType
#include <nme/text/FontType.h>
#endif
#ifndef INCLUDED_nme_utils_ByteArray
#include <nme/utils/ByteArray.h>
#endif
#ifndef INCLUDED_nme_utils_IDataInput
#include <nme/utils/IDataInput.h>
#endif
#ifndef INCLUDED_nme_utils_IDataOutput
#include <nme/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_nme_utils_IMemoryRange
#include <nme/utils/IMemoryRange.h>
#endif
namespace nme{

Void Assets_obj::__construct()
{
	return null();
}

//Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > _result_ = new Assets_obj();
	_result_->__construct();
	return _result_;}

int Assets_obj::UNCACHED;

int Assets_obj::WEAK_CACHE;

int Assets_obj::STRONG_CACHE;

::haxe::ds::StringMap Assets_obj::info;

::haxe::ds::StringMap Assets_obj::pathMapper;

::haxe::ds::StringMap Assets_obj::byteFactory;

int Assets_obj::cacheMode;

::String Assets_obj::scriptBase;

::nme::Cache Assets_obj::cache;

::String Assets_obj::getAssetPath( ::String inName){
	HX_STACK_FRAME("nme.Assets","getAssetPath",0x5b6129c2,"nme.Assets.getAssetPath","nme/Assets.hx",57,0x846abab2)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(58)
	::String tmp = inName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(59)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(59)
	::String tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(59)
	if ((tmp2)){
		HX_STACK_LINE(59)
		tmp3 = null();
	}
	else{
		HX_STACK_LINE(59)
		tmp3 = i->path;
	}
	HX_STACK_LINE(59)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getAssetPath,return )

Void Assets_obj::addEventListener( ::String type,Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
	HX_STACK_FRAME("nme.Assets","addEventListener",0x9694e2d0,"nme.Assets.addEventListener","nme/Assets.hx",63,0x846abab2)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_ARG(useCapture,"useCapture")
	HX_STACK_ARG(priority,"priority")
	HX_STACK_ARG(useWeakReference,"useWeakReference")
{
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Assets_obj,addEventListener,(void))

::nme::utils::ByteArray Assets_obj::getResource( ::String inName){
	HX_STACK_FRAME("nme.Assets","getResource",0x2378a761,"nme.Assets.getResource","nme/Assets.hx",69,0x846abab2)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(70)
	::String tmp = inName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(70)
	::haxe::io::Bytes tmp1 = ::haxe::Resource_obj::getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(70)
	::haxe::io::Bytes bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(71)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(71)
	if ((tmp2)){
		HX_STACK_LINE(73)
		::String tmp3 = (HX_HCSTRING("[nme.Assets] missing binary resource '","\x31","\x2c","\x08","\x7e") + inName);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(73)
		::String tmp4 = (tmp3 + HX_HCSTRING("'","\x27","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(73)
		Dynamic tmp5 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),73,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("getResource","\x84","\x1f","\x94","\x38"));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(73)
		::haxe::Log_obj::trace(tmp4,tmp5);
		HX_STACK_LINE(74)
		::haxe::ds::StringMap tmp6 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(74)
		Dynamic tmp7 = tmp6->keys();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(74)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp7);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(75)
				::String tmp8 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + key);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(75)
				::String tmp9 = (tmp8 + HX_HCSTRING(" -> ","\x6f","\x2f","\x49","\x15"));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(75)
				::haxe::ds::StringMap tmp10 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(75)
				::String tmp11 = key;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(75)
				::nme::AssetInfo tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(75)
				::String tmp13 = tmp12->path;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(75)
				::String tmp14 = (tmp9 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(75)
				::String tmp15 = (tmp14 + HX_HCSTRING(" ","\x20","\x00","\x00","\x00"));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(75)
				::haxe::ds::StringMap tmp16 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(75)
				::String tmp17 = key;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(75)
				::nme::AssetInfo tmp18 = tmp16->get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(75)
				bool tmp19 = tmp18->isResource;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(75)
				::String tmp20 = ::Std_obj::string(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(75)
				::String tmp21 = (tmp15 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(75)
				Dynamic tmp22 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),75,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("getResource","\x84","\x1f","\x94","\x38"));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(75)
				::haxe::Log_obj::trace(tmp21,tmp22);
			}
;
		}
		HX_STACK_LINE(76)
		Dynamic tmp8 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),76,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("getResource","\x84","\x1f","\x94","\x38"));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(76)
		::haxe::Log_obj::trace(HX_HCSTRING("---","\xcd","\x4c","\x22","\x00"),tmp8);
		HX_STACK_LINE(77)
		::String tmp9 = ::Std_obj::string(::haxe::Resource_obj::listNames());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(77)
		::String tmp10 = (HX_HCSTRING("All resources: ","\x2c","\xf0","\xa7","\x43") + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(77)
		Dynamic tmp11 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),77,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("getResource","\x84","\x1f","\x94","\x38"));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(77)
		::haxe::Log_obj::trace(tmp10,tmp11);
	}
	HX_STACK_LINE(79)
	bool tmp3 = (bytes == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(79)
	if ((tmp3)){
		HX_STACK_LINE(80)
		return null();
	}
	HX_STACK_LINE(84)
	::haxe::io::Bytes tmp4 = bytes;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(84)
	::nme::utils::ByteArray tmp5 = ::nme::utils::ByteArray_obj::fromBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(84)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResource,return )

Dynamic Assets_obj::list( ::nme::AssetType inFilter){
	HX_STACK_FRAME("nme.Assets","list",0x416ebae1,"nme.Assets.list","nme/Assets.hx",89,0x846abab2)
	HX_STACK_ARG(inFilter,"inFilter")
	HX_STACK_LINE(90)
	bool tmp = (inFilter == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(91)
		::haxe::ds::StringMap tmp1 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(91)
		return tmp2;
	}
	HX_STACK_LINE(93)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(94)
	::haxe::ds::StringMap tmp1 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(94)
	Dynamic tmp2 = tmp1->keys();		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp2);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(96)
			::haxe::ds::StringMap tmp3 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(96)
			::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(96)
			::nme::AssetInfo tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(96)
			::nme::AssetInfo asset = tmp5;		HX_STACK_VAR(asset,"asset");
			HX_STACK_LINE(97)
			bool tmp6 = (asset->type == inFilter);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			if ((tmp6)){
				HX_STACK_LINE(98)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(98)
				result->push(tmp7);
			}
		}
;
	}
	HX_STACK_LINE(100)
	Dynamic tmp3 = result->iterator();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,list,return )

Void Assets_obj::removeBitmapData( ::String inId){
{
		HX_STACK_FRAME("nme.Assets","removeBitmapData",0x929aaa20,"nme.Assets.removeBitmapData","nme/Assets.hx",104,0x846abab2)
		HX_STACK_ARG(inId,"inId")
		HX_STACK_LINE(105)
		::String tmp = inId;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(105)
		::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(105)
		::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(106)
		bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		if ((tmp2)){
			HX_STACK_LINE(107)
			i->uncache();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,removeBitmapData,(void))

Void Assets_obj::trySetCache( ::nme::AssetInfo info,Dynamic useCache,Dynamic data){
{
		HX_STACK_FRAME("nme.Assets","trySetCache",0xcdebe378,"nme.Assets.trySetCache","nme/Assets.hx",112,0x846abab2)
		HX_STACK_ARG(info,"info")
		HX_STACK_ARG(useCache,"useCache")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(113)
		bool tmp = (useCache != false);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(113)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(113)
		if ((tmp)){
			HX_STACK_LINE(113)
			bool tmp2 = (useCache == true);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(113)
			bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(113)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(113)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(113)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(113)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(113)
			if ((tmp7)){
				HX_STACK_LINE(113)
				int tmp8 = ::nme::Assets_obj::cacheMode;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(113)
				int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(113)
				int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(113)
				tmp1 = (tmp10 != (int)0);
			}
			else{
				HX_STACK_LINE(113)
				tmp1 = true;
			}
		}
		else{
			HX_STACK_LINE(113)
			tmp1 = false;
		}
		HX_STACK_LINE(113)
		if ((tmp1)){
			HX_STACK_LINE(114)
			Dynamic tmp2 = data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(114)
			int tmp3 = ::nme::Assets_obj::cacheMode;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(114)
			bool tmp4 = (tmp3 != (int)2);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(114)
			info->setCache(tmp2,tmp4);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Assets_obj,trySetCache,(void))

Void Assets_obj::noId( ::String id,::String type){
{
		HX_STACK_FRAME("nme.Assets","noId",0x42c590ff,"nme.Assets.noId","nme/Assets.hx",118,0x846abab2)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(119)
		::String tmp = (HX_HCSTRING("[nme.Assets] missing asset '","\xd4","\x55","\x85","\x21") + id);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(119)
		::String tmp1 = (tmp + HX_HCSTRING("' of type ","\x76","\x2b","\x29","\xee"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(119)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(119)
		::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(119)
		Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),119,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("noId","\x7c","\xf2","\x09","\x49"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(119)
		::haxe::Log_obj::trace(tmp3,tmp4);
		HX_STACK_LINE(120)
		::haxe::ds::StringMap tmp5 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(120)
		Dynamic tmp6 = tmp5->keys();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(120)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp6);  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(121)
				::String tmp7 = (HX_HCSTRING(" ","\x20","\x00","\x00","\x00") + key);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(121)
				::String tmp8 = (tmp7 + HX_HCSTRING(" -> ","\x6f","\x2f","\x49","\x15"));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(121)
				::haxe::ds::StringMap tmp9 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				::String tmp10 = key;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				::nme::AssetInfo tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				::String tmp12 = tmp11->path;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				::String tmp13 = (tmp8 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				Dynamic tmp14 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),121,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("noId","\x7c","\xf2","\x09","\x49"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				::haxe::Log_obj::trace(tmp13,tmp14);
			}
;
		}
		HX_STACK_LINE(122)
		Dynamic tmp7 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),122,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("noId","\x7c","\xf2","\x09","\x49"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(122)
		::haxe::Log_obj::trace(HX_HCSTRING("---","\xcd","\x4c","\x22","\x00"),tmp7);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,noId,(void))

Void Assets_obj::badType( ::String id,::String type){
{
		HX_STACK_FRAME("nme.Assets","badType",0xd33bac7c,"nme.Assets.badType","nme/Assets.hx",126,0x846abab2)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(type,"type")
		HX_STACK_LINE(127)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(127)
		::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(127)
		::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(128)
		::String tmp2 = (HX_HCSTRING("[nme.Assets] asset '","\x8e","\x8d","\xa3","\x2d") + id);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(128)
		::String tmp3 = (tmp2 + HX_HCSTRING("' is not of type ","\x07","\xa1","\x8b","\x05"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(128)
		::String tmp4 = type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(128)
		::String tmp5 = (tmp3 + tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(128)
		::String tmp6 = (tmp5 + HX_HCSTRING(" it is ","\x61","\xea","\x19","\x0e"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		::nme::AssetType tmp7 = i->type;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		::String tmp8 = ::Std_obj::string(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(128)
		::String tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(128)
		Dynamic tmp10 = hx::SourceInfo(HX_HCSTRING("Assets.hx","\xfb","\xcd","\xc6","\x67"),128,HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb"),HX_HCSTRING("badType","\x1f","\x97","\xc9","\x7f"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(128)
		::haxe::Log_obj::trace(tmp9,tmp10);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,badType,(void))

bool Assets_obj::hasBitmapData( ::String id){
	HX_STACK_FRAME("nme.Assets","hasBitmapData",0x211366d0,"nme.Assets.hasBitmapData","nme/Assets.hx",132,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(133)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(133)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(133)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(135)
	bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(135)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(135)
	if ((tmp2)){
		HX_STACK_LINE(135)
		tmp3 = (i->type == ::nme::AssetType_obj::IMAGE);
	}
	else{
		HX_STACK_LINE(135)
		tmp3 = false;
	}
	HX_STACK_LINE(135)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasBitmapData,return )

::nme::AssetInfo Assets_obj::getInfo( ::String inName){
	HX_STACK_FRAME("nme.Assets","getInfo",0x6baffd81,"nme.Assets.getInfo","nme/Assets.hx",139,0x846abab2)
	HX_STACK_ARG(inName,"inName")
	HX_STACK_LINE(140)
	::haxe::ds::StringMap tmp = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(140)
	::String tmp1 = inName;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(140)
	::nme::AssetInfo tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(140)
	::nme::AssetInfo result = tmp2;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(141)
	bool tmp3 = (result != null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(141)
	if ((tmp3)){
		HX_STACK_LINE(142)
		::nme::AssetInfo tmp4 = result;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(142)
		return tmp4;
	}
	HX_STACK_LINE(143)
	Array< ::String > parts = inName.split(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(144)
	int first = (int)0;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(145)
	while((true)){
		HX_STACK_LINE(145)
		bool tmp4 = (first < parts->length);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(145)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(145)
		if ((tmp5)){
			HX_STACK_LINE(145)
			break;
		}
		HX_STACK_LINE(147)
		::String tmp6 = parts->__get(first);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(147)
		bool tmp7 = (tmp6 == HX_HCSTRING("..","\x40","\x28","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(147)
		if ((tmp7)){
			HX_STACK_LINE(148)
			(first)++;
		}
		else{
			HX_STACK_LINE(151)
			bool changed = false;		HX_STACK_VAR(changed,"changed");
			HX_STACK_LINE(152)
			int tmp8 = (first + (int)1);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(152)
			int test = tmp8;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(153)
			while((true)){
				HX_STACK_LINE(153)
				bool tmp9 = (test < parts->length);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(153)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(153)
				if ((tmp10)){
					HX_STACK_LINE(153)
					break;
				}
				HX_STACK_LINE(155)
				::String tmp11 = parts->__get(test);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(155)
				bool tmp12 = (tmp11 == HX_HCSTRING("..","\x40","\x28","\x00","\x00"));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(155)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(155)
				if ((tmp12)){
					HX_STACK_LINE(155)
					int tmp14 = (test - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(155)
					int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(155)
					::String tmp16 = parts->__get(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(155)
					::String tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(155)
					tmp13 = (tmp17 != HX_HCSTRING("..","\x40","\x28","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(155)
					tmp13 = false;
				}
				HX_STACK_LINE(155)
				if ((tmp13)){
					HX_STACK_LINE(157)
					int tmp14 = (test - (int)1);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(157)
					parts->splice(tmp14,(int)2);
					HX_STACK_LINE(158)
					changed = true;
					HX_STACK_LINE(159)
					break;
				}
				HX_STACK_LINE(161)
				(test)++;
			}
			HX_STACK_LINE(163)
			bool tmp9 = changed;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(163)
			bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(163)
			if ((tmp10)){
				HX_STACK_LINE(164)
				break;
			}
		}
	}
	HX_STACK_LINE(167)
	::String tmp4 = parts->join(HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(167)
	::String path = tmp4;		HX_STACK_VAR(path,"path");
	HX_STACK_LINE(168)
	bool tmp5 = (path != inName);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(168)
	if ((tmp5)){
		HX_STACK_LINE(170)
		::haxe::ds::StringMap tmp6 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(170)
		::String tmp7 = path;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(170)
		::nme::AssetInfo tmp8 = tmp6->get(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(170)
		result = tmp8;
	}
	HX_STACK_LINE(172)
	::nme::AssetInfo tmp6 = result;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(172)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getInfo,return )

::nme::display::BitmapData Assets_obj::makeBitmapData( ::String inClassName){
	HX_STACK_FRAME("nme.Assets","makeBitmapData",0x986ee98a,"nme.Assets.makeBitmapData","nme/Assets.hx",176,0x846abab2)
	HX_STACK_ARG(inClassName,"inClassName")
	HX_STACK_LINE(177)
	::String tmp = inClassName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(177)
	::hx::Class tmp1 = ::Type_obj::resolveClass(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(177)
	::hx::Class cls = tmp1;		HX_STACK_VAR(cls,"cls");
	HX_STACK_LINE(178)
	bool tmp2 = (cls == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(178)
	if ((tmp2)){
		HX_STACK_LINE(179)
		::String tmp3 = (HX_HCSTRING("Invalid class : ","\xf7","\x7f","\x4d","\x03") + inClassName);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		HX_STACK_DO_THROW(tmp3);
	}
	HX_STACK_LINE(180)
	::hx::Class tmp3 = cls;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(180)
	::nme::display::BitmapData tmp4 = ::Type_obj::createInstance(tmp3,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(180)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,makeBitmapData,return )

::nme::display::BitmapData Assets_obj::getBitmapData( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getBitmapData",0x632f0b0c,"nme.Assets.getBitmapData","nme/Assets.hx",191,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(192)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(192)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(192)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(193)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(193)
	if ((tmp2)){
		HX_STACK_LINE(195)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		::nme::Assets_obj::noId(tmp3,HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"));
		HX_STACK_LINE(196)
		return null();
	}
	HX_STACK_LINE(198)
	bool tmp3 = (i->type != ::nme::AssetType_obj::IMAGE);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(198)
	if ((tmp3)){
		HX_STACK_LINE(200)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(200)
		::nme::Assets_obj::badType(tmp4,HX_HCSTRING("BitmapData","\xd9","\xb9","\x71","\x2a"));
		HX_STACK_LINE(201)
		return null();
	}
	HX_STACK_LINE(203)
	bool tmp4 = (useCache != false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(203)
	if ((tmp4)){
		HX_STACK_LINE(205)
		Dynamic tmp5 = i->getCache();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(205)
		::nme::display::BitmapData val = tmp5;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(206)
		bool tmp6 = (val != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(206)
		if ((tmp6)){
			HX_STACK_LINE(207)
			::nme::display::BitmapData tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(207)
			return tmp7;
		}
	}
	HX_STACK_LINE(215)
	::nme::display::BitmapData data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(216)
	bool tmp5 = i->isResource;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(216)
	if ((tmp5)){
		HX_STACK_LINE(217)
		::String tmp6 = i->path;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(217)
		::nme::utils::ByteArray tmp7 = ::nme::Assets_obj::getResource(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(217)
		::nme::display::BitmapData tmp8 = ::nme::display::BitmapData_obj::loadFromBytes(tmp7,null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(217)
		data = tmp8;
	}
	else{
		HX_STACK_LINE(220)
		::String filename = i->path;		HX_STACK_VAR(filename,"filename");
		HX_STACK_LINE(221)
		::haxe::ds::StringMap tmp6 = ::nme::Assets_obj::pathMapper;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(221)
		::String tmp7 = filename;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(221)
		bool tmp8 = tmp6->exists(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(221)
		if ((tmp8)){
			HX_STACK_LINE(222)
			::haxe::ds::StringMap tmp9 = ::nme::Assets_obj::pathMapper;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(222)
			::String tmp10 = filename;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(222)
			::String tmp11 = tmp9->get(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(222)
			filename = tmp11;
		}
		HX_STACK_LINE(223)
		::haxe::ds::StringMap tmp9 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(223)
		::String tmp10 = filename;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(223)
		bool tmp11 = tmp9->exists(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(223)
		if ((tmp11)){
			HX_STACK_LINE(224)
			::haxe::ds::StringMap tmp12 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(224)
			::String tmp13 = filename;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(224)
			Dynamic tmp14 = tmp12->get(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(224)
			Dynamic tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(224)
			::nme::utils::ByteArray tmp16 = tmp15().Cast< ::nme::utils::ByteArray >();		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(224)
			::nme::display::BitmapData tmp17 = ::nme::display::BitmapData_obj::loadFromBytes(tmp16,null());		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(224)
			data = tmp17;
		}
		else{
			HX_STACK_LINE(226)
			::String tmp12 = filename;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(226)
			::nme::display::BitmapData tmp13 = ::nme::display::BitmapData_obj::load(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(226)
			data = tmp13;
		}
	}
	HX_STACK_LINE(229)
	::nme::AssetInfo tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(229)
	Dynamic tmp7 = useCache;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(229)
	::nme::display::BitmapData tmp8 = data;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(229)
	::nme::Assets_obj::trySetCache(tmp6,tmp7,tmp8);
	HX_STACK_LINE(230)
	::nme::display::BitmapData tmp9 = data;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(230)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

bool Assets_obj::hasBytes( ::String id){
	HX_STACK_FRAME("nme.Assets","hasBytes",0xfa50eeb4,"nme.Assets.hasBytes","nme/Assets.hx",235,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(236)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(236)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(236)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(237)
	bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(237)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasBytes,return )

bool Assets_obj::exists( ::String id,::nme::AssetType type){
	HX_STACK_FRAME("nme.Assets","exists",0x56a2a31f,"nme.Assets.exists","nme/Assets.hx",241,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(242)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(242)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(242)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(243)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(243)
	if ((tmp2)){
		HX_STACK_LINE(244)
		return false;
	}
	HX_STACK_LINE(245)
	bool tmp3 = (type == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(245)
	if ((tmp3)){
		HX_STACK_LINE(246)
		return true;
	}
	HX_STACK_LINE(247)
	bool tmp4 = (i->type == type);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(247)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,exists,return )

::nme::utils::ByteArray Assets_obj::getBytes( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getBytes",0xcdcfb3f8,"nme.Assets.getBytes","nme/Assets.hx",258,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(259)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(259)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(259)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(260)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(260)
	if ((tmp2)){
		HX_STACK_LINE(262)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(262)
		::nme::Assets_obj::noId(tmp3,HX_HCSTRING("Bytes","\x4b","\x78","\xc5","\x50"));
		HX_STACK_LINE(263)
		return null();
	}
	HX_STACK_LINE(265)
	::nme::AssetInfo tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(265)
	Dynamic tmp4 = useCache;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(265)
	::nme::utils::ByteArray tmp5 = ::nme::Assets_obj::getBytesInfo(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(265)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBytes,return )

::nme::utils::ByteArray Assets_obj::getBytesInfo( ::nme::AssetInfo i,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getBytesInfo",0x17197486,"nme.Assets.getBytesInfo","nme/Assets.hx",269,0x846abab2)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(270)
	bool tmp = (useCache != false);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(270)
	if ((tmp)){
		HX_STACK_LINE(272)
		Dynamic tmp1 = i->getCache();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(272)
		::nme::utils::ByteArray val = tmp1;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(273)
		bool tmp2 = (val != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(273)
		if ((tmp2)){
			HX_STACK_LINE(275)
			val->position = (int)0;
			HX_STACK_LINE(276)
			::nme::utils::ByteArray tmp3 = val;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(276)
			return tmp3;
		}
	}
	HX_STACK_LINE(280)
	::nme::utils::ByteArray data = null();		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(281)
	bool tmp1 = i->isResource;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(281)
	if ((tmp1)){
		HX_STACK_LINE(283)
		::String tmp2 = i->path;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(283)
		::nme::utils::ByteArray tmp3 = ::nme::Assets_obj::getResource(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(283)
		data = tmp3;
	}
	else{
		HX_STACK_LINE(303)
		::String filename = i->path;		HX_STACK_VAR(filename,"filename");
		HX_STACK_LINE(304)
		::haxe::ds::StringMap tmp2 = ::nme::Assets_obj::pathMapper;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(304)
		::String tmp3 = filename;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(304)
		bool tmp4 = tmp2->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(304)
		if ((tmp4)){
			HX_STACK_LINE(305)
			::haxe::ds::StringMap tmp5 = ::nme::Assets_obj::pathMapper;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(305)
			::String tmp6 = filename;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(305)
			::String tmp7 = tmp5->get(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(305)
			filename = tmp7;
		}
		HX_STACK_LINE(306)
		::haxe::ds::StringMap tmp5 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(306)
		::String tmp6 = filename;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		bool tmp7 = tmp5->exists(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		if ((tmp7)){
			HX_STACK_LINE(307)
			::haxe::ds::StringMap tmp8 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			::String tmp9 = filename;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(307)
			Dynamic tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(307)
			Dynamic tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(307)
			::nme::utils::ByteArray tmp12 = tmp11().Cast< ::nme::utils::ByteArray >();		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(307)
			data = tmp12;
		}
		else{
			HX_STACK_LINE(309)
			::String tmp8 = filename;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(309)
			::nme::utils::ByteArray tmp9 = ::nme::utils::ByteArray_obj::readFile(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(309)
			data = tmp9;
		}
	}
	HX_STACK_LINE(313)
	bool tmp2 = (data != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(313)
	if ((tmp2)){
		HX_STACK_LINE(314)
		data->position = (int)0;
	}
	HX_STACK_LINE(316)
	::nme::AssetInfo tmp3 = i;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(316)
	Dynamic tmp4 = useCache;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(316)
	::nme::utils::ByteArray tmp5 = data;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(316)
	::nme::Assets_obj::trySetCache(tmp3,tmp4,tmp5);
	HX_STACK_LINE(318)
	::nme::utils::ByteArray tmp6 = data;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(318)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBytesInfo,return )

bool Assets_obj::hasFont( ::String id){
	HX_STACK_FRAME("nme.Assets","hasFont",0x667693a6,"nme.Assets.hasFont","nme/Assets.hx",322,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(323)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(323)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(323)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(325)
	bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(325)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(325)
	if ((tmp2)){
		HX_STACK_LINE(325)
		tmp3 = (i->type == ::nme::AssetType_obj::FONT);
	}
	else{
		HX_STACK_LINE(325)
		tmp3 = false;
	}
	HX_STACK_LINE(325)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasFont,return )

::nme::text::Font Assets_obj::getFont( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getFont",0x69b522e2,"nme.Assets.getFont","nme/Assets.hx",334,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(335)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(335)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(335)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(336)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	if ((tmp2)){
		HX_STACK_LINE(338)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(338)
		::nme::Assets_obj::noId(tmp3,HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"));
		HX_STACK_LINE(339)
		return null();
	}
	HX_STACK_LINE(341)
	bool tmp3 = (i->type != ::nme::AssetType_obj::FONT);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(341)
	if ((tmp3)){
		HX_STACK_LINE(343)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(343)
		::nme::Assets_obj::badType(tmp4,HX_HCSTRING("Font","\xef","\x89","\x99","\x2e"));
		HX_STACK_LINE(344)
		return null();
	}
	HX_STACK_LINE(346)
	bool tmp4 = (useCache != false);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(346)
	if ((tmp4)){
		HX_STACK_LINE(348)
		Dynamic tmp5 = i->getCache();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(348)
		::nme::text::Font val = tmp5;		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(349)
		bool tmp6 = (val != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(349)
		if ((tmp6)){
			HX_STACK_LINE(350)
			::nme::text::Font tmp7 = val;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(350)
			return tmp7;
		}
	}
	HX_STACK_LINE(357)
	::nme::text::Font tmp5 = ::nme::text::Font_obj::__new(i->path,null(),null(),null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(357)
	::nme::text::Font font = tmp5;		HX_STACK_VAR(font,"font");
	HX_STACK_LINE(361)
	::nme::AssetInfo tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(361)
	Dynamic tmp7 = useCache;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(361)
	::nme::text::Font tmp8 = font;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(361)
	::nme::Assets_obj::trySetCache(tmp6,tmp7,tmp8);
	HX_STACK_LINE(363)
	::nme::text::Font tmp9 = font;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(363)
	return tmp9;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getFont,return )

bool Assets_obj::hasSound( ::String id){
	HX_STACK_FRAME("nme.Assets","hasSound",0xbd857318,"nme.Assets.hasSound","nme/Assets.hx",367,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(368)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(368)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(368)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(370)
	bool tmp2 = (i != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(370)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(370)
	if ((tmp2)){
		HX_STACK_LINE(370)
		bool tmp4 = (i->type == ::nme::AssetType_obj::SOUND);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(370)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(370)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(370)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(370)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(370)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(370)
		if ((tmp9)){
			HX_STACK_LINE(370)
			tmp3 = (i->type == ::nme::AssetType_obj::MUSIC);
		}
		else{
			HX_STACK_LINE(370)
			tmp3 = true;
		}
	}
	else{
		HX_STACK_LINE(370)
		tmp3 = false;
	}
	HX_STACK_LINE(370)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasSound,return )

::nme::media::Sound Assets_obj::getSound( ::String id,Dynamic useCache,hx::Null< bool >  __o_forceMusic,::String inEngine){
bool forceMusic = __o_forceMusic.Default(false);
	HX_STACK_FRAME("nme.Assets","getSound",0x9104385c,"nme.Assets.getSound","nme/Assets.hx",382,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_ARG(forceMusic,"forceMusic")
	HX_STACK_ARG(inEngine,"inEngine")
{
		HX_STACK_LINE(383)
		::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(383)
		::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(383)
		::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(384)
		bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(384)
		if ((tmp2)){
			HX_STACK_LINE(386)
			::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(386)
			::nme::Assets_obj::noId(tmp3,HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"));
			HX_STACK_LINE(387)
			return null();
		}
		HX_STACK_LINE(389)
		bool tmp3 = (i->type != ::nme::AssetType_obj::SOUND);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(389)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(389)
		if ((tmp3)){
			HX_STACK_LINE(389)
			tmp4 = (i->type != ::nme::AssetType_obj::MUSIC);
		}
		else{
			HX_STACK_LINE(389)
			tmp4 = false;
		}
		HX_STACK_LINE(389)
		if ((tmp4)){
			HX_STACK_LINE(391)
			::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(391)
			::nme::Assets_obj::badType(tmp5,HX_HCSTRING("Sound","\xaf","\xfc","\xf9","\x13"));
			HX_STACK_LINE(392)
			return null();
		}
		HX_STACK_LINE(394)
		bool tmp5 = (useCache != false);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(394)
		if ((tmp5)){
			HX_STACK_LINE(396)
			Dynamic tmp6 = i->getCache();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(396)
			::nme::media::Sound val = tmp6;		HX_STACK_VAR(val,"val");
			HX_STACK_LINE(397)
			bool tmp7 = (val != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(397)
			if ((tmp7)){
				HX_STACK_LINE(398)
				::nme::media::Sound tmp8 = val;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(398)
				return tmp8;
			}
		}
		HX_STACK_LINE(401)
		::nme::media::Sound sound = null();		HX_STACK_VAR(sound,"sound");
		HX_STACK_LINE(407)
		bool tmp6 = i->isResource;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(407)
		if ((tmp6)){
			HX_STACK_LINE(409)
			::nme::media::Sound tmp7 = ::nme::media::Sound_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(409)
			sound = tmp7;
			HX_STACK_LINE(410)
			::String tmp8 = id;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(410)
			::nme::utils::ByteArray tmp9 = ::nme::Assets_obj::getBytes(tmp8,null());		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(410)
			::nme::utils::ByteArray bytes = tmp9;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(411)
			::nme::utils::ByteArray tmp10 = bytes;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(411)
			int tmp11 = bytes->length;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(411)
			bool tmp12 = (i->type == ::nme::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(411)
			bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(411)
			bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(411)
			if ((tmp13)){
				HX_STACK_LINE(411)
				tmp14 = forceMusic;
			}
			else{
				HX_STACK_LINE(411)
				tmp14 = true;
			}
			HX_STACK_LINE(411)
			::String tmp15 = inEngine;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(411)
			sound->loadCompressedDataFromByteArray(tmp10,tmp11,tmp14,tmp15);
		}
		else{
			HX_STACK_LINE(413)
			::haxe::ds::StringMap tmp7 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(413)
			::String tmp8 = i->path;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(413)
			bool tmp9 = tmp7->exists(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(413)
			if ((tmp9)){
				HX_STACK_LINE(415)
				::haxe::ds::StringMap tmp10 = ::nme::Assets_obj::byteFactory;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(415)
				::String tmp11 = i->path;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(415)
				Dynamic tmp12 = tmp10->get(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(415)
				Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(415)
				::nme::utils::ByteArray tmp14 = tmp13().Cast< ::nme::utils::ByteArray >();		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(415)
				::nme::utils::ByteArray bytes = tmp14;		HX_STACK_VAR(bytes,"bytes");
				HX_STACK_LINE(416)
				::nme::media::Sound tmp15 = ::nme::media::Sound_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(416)
				sound = tmp15;
				HX_STACK_LINE(417)
				::nme::utils::ByteArray tmp16 = bytes;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(417)
				int tmp17 = bytes->length;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(417)
				bool tmp18 = (i->type == ::nme::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(417)
				bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(417)
				bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(417)
				if ((tmp19)){
					HX_STACK_LINE(417)
					tmp20 = forceMusic;
				}
				else{
					HX_STACK_LINE(417)
					tmp20 = true;
				}
				HX_STACK_LINE(417)
				::String tmp21 = inEngine;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(417)
				sound->loadCompressedDataFromByteArray(tmp16,tmp17,tmp20,tmp21);
			}
			else{
				HX_STACK_LINE(421)
				::nme::net::URLRequest tmp10 = ::nme::net::URLRequest_obj::__new(i->path);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(421)
				bool tmp11 = (i->type == ::nme::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(421)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(421)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(421)
				if ((tmp12)){
					HX_STACK_LINE(421)
					tmp13 = forceMusic;
				}
				else{
					HX_STACK_LINE(421)
					tmp13 = true;
				}
				HX_STACK_LINE(421)
				::String tmp14 = inEngine;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(421)
				::nme::media::Sound tmp15 = ::nme::media::Sound_obj::__new(tmp10,null(),tmp13,tmp14);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(421)
				sound = tmp15;
			}
		}
		HX_STACK_LINE(426)
		::nme::AssetInfo tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(426)
		Dynamic tmp8 = useCache;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(426)
		::nme::media::Sound tmp9 = sound;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(426)
		::nme::Assets_obj::trySetCache(tmp7,tmp8,tmp9);
		HX_STACK_LINE(428)
		::nme::media::Sound tmp10 = sound;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(428)
		return tmp10;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Assets_obj,getSound,return )

::nme::media::Sound Assets_obj::getMusic( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getMusic",0x20927c32,"nme.Assets.getMusic","nme/Assets.hx",432,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(433)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(433)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(433)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(434)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(434)
	if ((tmp2)){
		HX_STACK_LINE(436)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(436)
		::nme::Assets_obj::noId(tmp3,HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"));
		HX_STACK_LINE(437)
		return null();
	}
	HX_STACK_LINE(439)
	bool tmp3 = (i->type != ::nme::AssetType_obj::MUSIC);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(439)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(439)
	if ((tmp3)){
		HX_STACK_LINE(439)
		tmp4 = (i->type != ::nme::AssetType_obj::SOUND);
	}
	else{
		HX_STACK_LINE(439)
		tmp4 = false;
	}
	HX_STACK_LINE(439)
	if ((tmp4)){
		HX_STACK_LINE(441)
		::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(441)
		::nme::Assets_obj::badType(tmp5,HX_HCSTRING("Music","\x85","\x40","\x88","\xa3"));
		HX_STACK_LINE(442)
		return null();
	}
	HX_STACK_LINE(444)
	::String tmp5 = id;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(444)
	Dynamic tmp6 = useCache;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(444)
	::nme::media::Sound tmp7 = ::nme::Assets_obj::getSound(tmp5,tmp6,true,null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(444)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getMusic,return )

bool Assets_obj::hasText( ::String id){
	HX_STACK_FRAME("nme.Assets","hasText",0x6fb00284,"nme.Assets.hasText","nme/Assets.hx",448,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(448)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(448)
	bool tmp1 = ::nme::Assets_obj::hasBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(448)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasText,return )

bool Assets_obj::hasString( ::String id){
	HX_STACK_FRAME("nme.Assets","hasString",0xf640c268,"nme.Assets.hasString","nme/Assets.hx",449,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(450)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(450)
	bool tmp1 = ::nme::Assets_obj::hasBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(450)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,hasString,return )

::String Assets_obj::getText( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getText",0x72ee91c0,"nme.Assets.getText","nme/Assets.hx",460,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(461)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(461)
	::nme::AssetInfo tmp1 = ::nme::Assets_obj::getInfo(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(461)
	::nme::AssetInfo i = tmp1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(462)
	bool tmp2 = (i == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(462)
	if ((tmp2)){
		HX_STACK_LINE(464)
		::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(464)
		::nme::Assets_obj::noId(tmp3,HX_HCSTRING("String","\xf1","\x9c","\xc4","\x45"));
		HX_STACK_LINE(465)
		return null();
	}
	HX_STACK_LINE(468)
	bool tmp3 = i->isResource;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(468)
	if ((tmp3)){
		HX_STACK_LINE(469)
		::String tmp4 = i->path;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(469)
		::String tmp5 = ::haxe::Resource_obj::getString(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(469)
		return tmp5;
	}
	HX_STACK_LINE(471)
	::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(471)
	Dynamic tmp5 = useCache;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(471)
	::nme::utils::ByteArray tmp6 = ::nme::Assets_obj::getBytes(tmp4,tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(471)
	::nme::utils::ByteArray bytes = tmp6;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(473)
	bool tmp7 = (bytes == null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(473)
	if ((tmp7)){
		HX_STACK_LINE(474)
		return null();
	}
	HX_STACK_LINE(476)
	int tmp8 = bytes->length;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(476)
	::String tmp9 = bytes->readUTFBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(476)
	::String result = tmp9;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(478)
	::String tmp10 = result;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(478)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getText,return )

::String Assets_obj::getString( ::String id,Dynamic useCache){
	HX_STACK_FRAME("nme.Assets","getString",0x31ae98a4,"nme.Assets.getString","nme/Assets.hx",481,0x846abab2)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(useCache,"useCache")
	HX_STACK_LINE(482)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(482)
	Dynamic tmp1 = useCache;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(482)
	::String tmp2 = ::nme::Assets_obj::getText(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(482)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getString,return )

Dynamic Assets_obj::initResources;

Void Assets_obj::initialize( ){
{
		HX_STACK_FRAME("nme.Assets","initialize",0xeb7d1413,"nme.Assets.initialize","nme/Assets.hx",513,0x846abab2)
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))


Assets_obj::Assets_obj()
{
}

bool Assets_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { outValue = info; return true;  }
		if (HX_FIELD_EQ(inName,"list") ) { outValue = list_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"noId") ) { outValue = noId_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { outValue = cache; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"badType") ) { outValue = badType_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getInfo") ) { outValue = getInfo_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasFont") ) { outValue = hasFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getFont") ) { outValue = getFont_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasText") ) { outValue = hasText_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getText") ) { outValue = getText_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasBytes") ) { outValue = hasBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"hasSound") ) { outValue = hasSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getSound") ) { outValue = getSound_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getMusic") ) { outValue = getMusic_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheMode") ) { outValue = cacheMode; return true;  }
		if (HX_FIELD_EQ(inName,"hasString") ) { outValue = hasString_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getString") ) { outValue = getString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathMapper") ) { outValue = pathMapper; return true;  }
		if (HX_FIELD_EQ(inName,"scriptBase") ) { outValue = scriptBase; return true;  }
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"byteFactory") ) { outValue = byteFactory; return true;  }
		if (HX_FIELD_EQ(inName,"getResource") ) { outValue = getResource_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"trySetCache") ) { outValue = trySetCache_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getAssetPath") ) { outValue = getAssetPath_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBytesInfo") ) { outValue = getBytesInfo_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { outValue = hasBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { outValue = getBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"initResources") ) { outValue = initResources; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"makeBitmapData") ) { outValue = makeBitmapData_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { outValue = addEventListener_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { outValue = removeBitmapData_dyn(); return true;  }
	}
	return false;
}

bool Assets_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=ioValue.Cast< ::nme::Cache >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"cacheMode") ) { cacheMode=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pathMapper") ) { pathMapper=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"scriptBase") ) { scriptBase=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"byteFactory") ) { byteFactory=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"initResources") ) { initResources=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Assets_obj::UNCACHED,HX_HCSTRING("UNCACHED","\xfb","\x1e","\xbf","\x0c")},
	{hx::fsInt,(void *) &Assets_obj::WEAK_CACHE,HX_HCSTRING("WEAK_CACHE","\xdb","\xe7","\xe2","\xa3")},
	{hx::fsInt,(void *) &Assets_obj::STRONG_CACHE,HX_HCSTRING("STRONG_CACHE","\xfa","\x56","\x22","\xfb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::info,HX_HCSTRING("info","\x6e","\x38","\xbb","\x45")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::pathMapper,HX_HCSTRING("pathMapper","\x46","\x77","\x57","\xcb")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Assets_obj::byteFactory,HX_HCSTRING("byteFactory","\xa2","\x96","\xcb","\xd3")},
	{hx::fsInt,(void *) &Assets_obj::cacheMode,HX_HCSTRING("cacheMode","\xc5","\xe2","\x15","\x44")},
	{hx::fsString,(void *) &Assets_obj::scriptBase,HX_HCSTRING("scriptBase","\xbc","\xc3","\xf1","\x39")},
	{hx::fsObject /*::nme::Cache*/ ,(void *) &Assets_obj::cache,HX_HCSTRING("cache","\x42","\x9a","\x14","\x41")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Assets_obj::initResources,HX_HCSTRING("initResources","\xb5","\x9a","\xb0","\xb4")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::UNCACHED,"UNCACHED");
	HX_MARK_MEMBER_NAME(Assets_obj::WEAK_CACHE,"WEAK_CACHE");
	HX_MARK_MEMBER_NAME(Assets_obj::STRONG_CACHE,"STRONG_CACHE");
	HX_MARK_MEMBER_NAME(Assets_obj::info,"info");
	HX_MARK_MEMBER_NAME(Assets_obj::pathMapper,"pathMapper");
	HX_MARK_MEMBER_NAME(Assets_obj::byteFactory,"byteFactory");
	HX_MARK_MEMBER_NAME(Assets_obj::cacheMode,"cacheMode");
	HX_MARK_MEMBER_NAME(Assets_obj::scriptBase,"scriptBase");
	HX_MARK_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_MARK_MEMBER_NAME(Assets_obj::initResources,"initResources");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::UNCACHED,"UNCACHED");
	HX_VISIT_MEMBER_NAME(Assets_obj::WEAK_CACHE,"WEAK_CACHE");
	HX_VISIT_MEMBER_NAME(Assets_obj::STRONG_CACHE,"STRONG_CACHE");
	HX_VISIT_MEMBER_NAME(Assets_obj::info,"info");
	HX_VISIT_MEMBER_NAME(Assets_obj::pathMapper,"pathMapper");
	HX_VISIT_MEMBER_NAME(Assets_obj::byteFactory,"byteFactory");
	HX_VISIT_MEMBER_NAME(Assets_obj::cacheMode,"cacheMode");
	HX_VISIT_MEMBER_NAME(Assets_obj::scriptBase,"scriptBase");
	HX_VISIT_MEMBER_NAME(Assets_obj::cache,"cache");
	HX_VISIT_MEMBER_NAME(Assets_obj::initResources,"initResources");
};

#endif

hx::Class Assets_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("UNCACHED","\xfb","\x1e","\xbf","\x0c"),
	HX_HCSTRING("WEAK_CACHE","\xdb","\xe7","\xe2","\xa3"),
	HX_HCSTRING("STRONG_CACHE","\xfa","\x56","\x22","\xfb"),
	HX_HCSTRING("info","\x6e","\x38","\xbb","\x45"),
	HX_HCSTRING("pathMapper","\x46","\x77","\x57","\xcb"),
	HX_HCSTRING("byteFactory","\xa2","\x96","\xcb","\xd3"),
	HX_HCSTRING("cacheMode","\xc5","\xe2","\x15","\x44"),
	HX_HCSTRING("scriptBase","\xbc","\xc3","\xf1","\x39"),
	HX_HCSTRING("cache","\x42","\x9a","\x14","\x41"),
	HX_HCSTRING("getAssetPath","\x3f","\xd0","\x4e","\xbe"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("getResource","\x84","\x1f","\x94","\x38"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("trySetCache","\x9b","\x5b","\x07","\xe3"),
	HX_HCSTRING("noId","\x7c","\xf2","\x09","\x49"),
	HX_HCSTRING("badType","\x1f","\x97","\xc9","\x7f"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("getInfo","\x24","\xe8","\x3d","\x18"),
	HX_HCSTRING("makeBitmapData","\x47","\xe9","\xf0","\xce"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("hasBytes","\xb1","\x52","\xf0","\x49"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getBytesInfo","\x03","\x1b","\x07","\x7a"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("getMusic","\x2f","\xe0","\x31","\x70"),
	HX_HCSTRING("hasText","\x27","\xed","\x3d","\x1c"),
	HX_HCSTRING("hasString","\xcb","\xdb","\x18","\x52"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("getString","\x07","\xb2","\x86","\x8d"),
	HX_HCSTRING("initResources","\xb5","\x9a","\xb0","\xb4"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	::String(null()) };

void Assets_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.Assets","\xcb","\x50","\x23","\xfb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Assets_obj::__GetStatic;
	__mClass->mSetStaticField = &Assets_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Assets_obj >;
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

void Assets_obj::__boot()
{
	UNCACHED= (int)0;
	WEAK_CACHE= (int)1;
	STRONG_CACHE= (int)2;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Assets.hx",45,0x846abab2)
		{
			HX_STACK_LINE(45)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(45)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(45)
			return tmp1;
		}
		return null();
	}
};
	info= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Assets.hx",46,0x846abab2)
		{
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(46)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(46)
			return tmp1;
		}
		return null();
	}
};
	pathMapper= _Function_0_2::Block();
struct _Function_0_3{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Assets.hx",47,0x846abab2)
		{
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(47)
			::haxe::ds::StringMap tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(47)
			return tmp1;
		}
		return null();
	}
};
	byteFactory= _Function_0_3::Block();
	cacheMode= (int)1;
	scriptBase= HX_HCSTRING("","\x00","\x00","\x00","\x00");
	cache= ::nme::Cache_obj::__new();
struct _Function_0_4{
	inline static Dynamic Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Assets.hx",486,0x846abab2)
		{
			HX_STACK_LINE(487)
			Dynamic tmp = ::nme::Loader_obj::load(HX_HCSTRING("nme_set_resource_factory","\x6f","\x96","\x97","\xf8"),(int)1);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(487)
			Dynamic nme_set_resource_factory = tmp;		HX_STACK_VAR(nme_set_resource_factory,"nme_set_resource_factory");
			HX_STACK_LINE(488)
			bool tmp1 = (nme_set_resource_factory != null());		HX_STACK_VAR(tmp1,"tmp1");
			struct _Function_1_1{
				inline static Dynamic Block( Dynamic &nme_set_resource_factory){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","nme/Assets.hx",489,0x846abab2)
					{
						HX_STACK_LINE(490)
						::haxe::ds::StringMap tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(490)
						{
							HX_STACK_LINE(490)
							::haxe::ds::StringMap tmp3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(490)
							::haxe::ds::StringMap tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(490)
							tmp2 = tmp4;
						}
						HX_STACK_LINE(490)
						::haxe::ds::StringMap notFound = tmp2;		HX_STACK_VAR(notFound,"notFound");

						HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::haxe::ds::StringMap,notFound)
						int __ArgCount() const { return 1; }
						::nme::utils::ByteArray run(::String s){
							HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","nme/Assets.hx",491,0x846abab2)
							HX_STACK_ARG(s,"s")
							{
								HX_STACK_LINE(492)
								::String tmp3 = s;		HX_STACK_VAR(tmp3,"tmp3");
								HX_STACK_LINE(492)
								bool tmp4 = notFound->exists(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
								HX_STACK_LINE(492)
								if ((tmp4)){
									HX_STACK_LINE(493)
									return null();
								}
								HX_STACK_LINE(494)
								::String tmp5 = s;		HX_STACK_VAR(tmp5,"tmp5");
								HX_STACK_LINE(494)
								::haxe::io::Bytes tmp6 = ::haxe::Resource_obj::getBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(494)
								::haxe::io::Bytes reso = tmp6;		HX_STACK_VAR(reso,"reso");
								HX_STACK_LINE(495)
								bool tmp7 = (reso != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(495)
								if ((tmp7)){
									HX_STACK_LINE(496)
									::haxe::io::Bytes tmp8 = reso;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(496)
									::nme::utils::ByteArray_obj::fromBytes(tmp8);
								}
								HX_STACK_LINE(498)
								::haxe::ds::StringMap tmp8 = ::nme::Assets_obj::info;		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(498)
								Dynamic tmp9 = tmp8->iterator();		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(498)
								for(::cpp::FastIterator_obj< ::nme::AssetInfo > *__it = ::cpp::CreateFastIterator< ::nme::AssetInfo >(tmp9);  __it->hasNext(); ){
									::nme::AssetInfo asset = __it->next();
									{
										HX_STACK_LINE(500)
										bool tmp10 = (asset->path == s);		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(500)
										if ((tmp10)){
											HX_STACK_LINE(501)
											::nme::AssetInfo tmp11 = asset;		HX_STACK_VAR(tmp11,"tmp11");
											HX_STACK_LINE(501)
											::nme::utils::ByteArray tmp12 = ::nme::Assets_obj::getBytesInfo(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
											HX_STACK_LINE(501)
											return tmp12;
										}
									}
;
								}
								HX_STACK_LINE(503)
								::String tmp10 = s;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(503)
								bool tmp11 = ::nme::Assets_obj::hasBytes(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(503)
								if ((tmp11)){
									HX_STACK_LINE(504)
									::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(504)
									::nme::utils::ByteArray tmp13 = ::nme::Assets_obj::getBytes(tmp12,null());		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(504)
									return tmp13;
								}
								HX_STACK_LINE(505)
								::String tmp12 = s;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(505)
								notFound->set(tmp12,true);
								HX_STACK_LINE(506)
								return null();
							}
							return null();
						}
						HX_END_LOCAL_FUNC1(return)

						HX_STACK_LINE(491)
						return nme_set_resource_factory( Dynamic(new _Function_2_1(notFound)));
					}
					return null();
				}
			};
			HX_STACK_LINE(488)
			return (  ((tmp1)) ? Dynamic(_Function_1_1::Block(nme_set_resource_factory)) : Dynamic(null()) );
		}
		return null();
	}
};
	initResources= _Function_0_4::Block();
}

} // end namespace nme
