#include <hxcpp.h>

#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DefaultAssetLibrary
#include <DefaultAssetLibrary.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
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
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_audio_AudioBuffer
#include <lime/audio/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_ByteArray
#include <lime/utils/ByteArray.h>
#endif
#ifndef INCLUDED_lime_utils_IDataInput
#include <lime/utils/IDataInput.h>
#endif
#ifndef INCLUDED_lime_utils_IMemoryRange
#include <lime/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

Void DefaultAssetLibrary_obj::__construct()
{
HX_STACK_FRAME("DefaultAssetLibrary","new",0xbc37e41e,"DefaultAssetLibrary.new","DefaultAssetLibrary.hx",38,0x0fc48912)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(43)
	this->type = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(42)
	this->path = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(41)
	this->className = ::haxe::ds::StringMap_obj::__new();
	HX_STACK_LINE(49)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(51)
	super::__construct();
	HX_STACK_LINE(81)
	bool useManifest = false;		HX_STACK_VAR(useManifest,"useManifest");
	HX_STACK_LINE(84)
	bool tmp = useManifest;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(84)
	if ((tmp)){
		HX_STACK_LINE(86)
		this->loadManifest();
		HX_STACK_LINE(88)
		int tmp1 = ::Sys_obj::args()->indexOf(HX_HCSTRING("-livereload","\xb2","\x45","\x9f","\x14"),null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(88)
		bool tmp2 = (tmp1 > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		if ((tmp2)){
			HX_STACK_LINE(90)
			::String tmp3 = ::sys::FileSystem_obj::fullPath(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(90)
			::String path = tmp3;		HX_STACK_VAR(path,"path");
			HX_STACK_LINE(91)
			::String tmp4 = path;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(91)
			Dynamic tmp5 = ::sys::FileSystem_obj::stat(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(91)
			Float tmp6 = tmp5->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(91)
			this->lastModified = tmp6;
			HX_STACK_LINE(93)
			::haxe::Timer tmp7 = ::haxe::Timer_obj::__new((int)2000);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(93)
			this->timer = tmp7;
			HX_STACK_LINE(94)
			::haxe::Timer tmp8 = this->timer;		HX_STACK_VAR(tmp8,"tmp8");

			HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_3_1,::DefaultAssetLibrary,_g,::String,path)
			int __ArgCount() const { return 0; }
			Void run(){
				HX_STACK_FRAME("*","_Function_3_1",0x520271b9,"*._Function_3_1","DefaultAssetLibrary.hx",94,0x0fc48912)
				{
					HX_STACK_LINE(96)
					::String tmp9 = path;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(96)
					Dynamic tmp10 = ::sys::FileSystem_obj::stat(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(96)
					Float tmp11 = tmp10->__Field(HX_HCSTRING("mtime","\xfa","\x06","\xaa","\x0f"), hx::paccDynamic )->__Field(HX_HCSTRING("getTime","\xc3","\x7b","\x7f","\x1f"), hx::paccDynamic )();		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(96)
					Float modified = tmp11;		HX_STACK_VAR(modified,"modified");
					HX_STACK_LINE(98)
					bool tmp12 = (modified > _g->lastModified);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(98)
					if ((tmp12)){
						HX_STACK_LINE(100)
						_g->lastModified = modified;
						HX_STACK_LINE(101)
						_g->loadManifest();
						HX_STACK_LINE(103)
						_g->onChange->dispatch();
					}
				}
				return null();
			}
			HX_END_LOCAL_FUNC0((void))

			HX_STACK_LINE(94)
			tmp8->run =  Dynamic(new _Function_3_1(_g,path));
		}
	}
}
;
	return null();
}

//DefaultAssetLibrary_obj::~DefaultAssetLibrary_obj() { }

Dynamic DefaultAssetLibrary_obj::__CreateEmpty() { return  new DefaultAssetLibrary_obj; }
hx::ObjectPtr< DefaultAssetLibrary_obj > DefaultAssetLibrary_obj::__new()
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

Dynamic DefaultAssetLibrary_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLibrary_obj > _result_ = new DefaultAssetLibrary_obj();
	_result_->__construct();
	return _result_;}

bool DefaultAssetLibrary_obj::exists( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","exists",0x972074de,"DefaultAssetLibrary.exists","DefaultAssetLibrary.hx",123,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(125)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(125)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(125)
	if ((tmp)){
		HX_STACK_LINE(125)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(125)
		tmp1 = null();
	}
	HX_STACK_LINE(125)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(126)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(126)
	::String tmp3 = id;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(126)
	::String tmp4 = tmp2->get(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(126)
	::String assetType = tmp4;		HX_STACK_VAR(assetType,"assetType");
	HX_STACK_LINE(128)
	bool tmp5 = (assetType != null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(128)
	if ((tmp5)){
		HX_STACK_LINE(130)
		bool tmp6 = (assetType == requestedType);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(130)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(130)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(130)
		if ((tmp7)){
			HX_STACK_LINE(130)
			bool tmp9 = (requestedType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(130)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(130)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(130)
			bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(130)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(130)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(130)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(130)
			bool tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(130)
			if ((tmp16)){
				HX_STACK_LINE(130)
				bool tmp17 = (requestedType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(130)
				tmp15 = tmp17;
			}
			else{
				HX_STACK_LINE(130)
				tmp15 = true;
			}
			HX_STACK_LINE(130)
			bool tmp17 = tmp15;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(130)
			if ((tmp17)){
				HX_STACK_LINE(130)
				bool tmp18 = (assetType == HX_HCSTRING("MUSIC","\x85","\x08","\x49","\x8e"));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(130)
				bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(130)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(130)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(130)
				bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(130)
				bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(130)
				bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(130)
				bool tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(130)
				bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(130)
				bool tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(130)
				if ((tmp27)){
					HX_STACK_LINE(130)
					tmp8 = (assetType == HX_HCSTRING("SOUND","\xaf","\xc4","\xba","\xfe"));
				}
				else{
					HX_STACK_LINE(130)
					tmp8 = true;
				}
			}
			else{
				HX_STACK_LINE(130)
				tmp8 = false;
			}
		}
		else{
			HX_STACK_LINE(130)
			tmp8 = true;
		}
		HX_STACK_LINE(130)
		if ((tmp8)){
			HX_STACK_LINE(132)
			return true;
		}
		HX_STACK_LINE(150)
		bool tmp9 = (requestedType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(150)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(150)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(150)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(150)
		if ((tmp11)){
			HX_STACK_LINE(150)
			tmp12 = (requestedType == null());
		}
		else{
			HX_STACK_LINE(150)
			tmp12 = true;
		}
		HX_STACK_LINE(150)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(150)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(150)
		if ((tmp13)){
			HX_STACK_LINE(150)
			bool tmp15 = (assetType == HX_HCSTRING("BINARY","\x01","\x68","\x8e","\x9f"));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(150)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(150)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(150)
			if ((tmp17)){
				HX_STACK_LINE(150)
				tmp14 = (requestedType == HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));
			}
			else{
				HX_STACK_LINE(150)
				tmp14 = false;
			}
		}
		else{
			HX_STACK_LINE(150)
			tmp14 = true;
		}
		HX_STACK_LINE(150)
		if ((tmp14)){
			HX_STACK_LINE(152)
			return true;
		}
	}
	HX_STACK_LINE(160)
	return false;
}


::lime::audio::AudioBuffer DefaultAssetLibrary_obj::getAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getAudioBuffer",0xeeb56a82,"DefaultAssetLibrary.getAudioBuffer","DefaultAssetLibrary.hx",165,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(180)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(180)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(180)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(180)
	if ((tmp2)){
		HX_STACK_LINE(180)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(180)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(180)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(180)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(180)
		::lime::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(180)
		tmp8 = hx::TCast< ::lime::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(180)
		::lime::audio::AudioBuffer tmp9 = ::lime::audio::AudioBuffer_obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(180)
		return tmp9;
	}
	else{
		HX_STACK_LINE(181)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(181)
		::lime::audio::AudioBuffer tmp7 = ::lime::audio::AudioBuffer_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		return tmp7;
	}
	HX_STACK_LINE(180)
	return null();
}


::lime::utils::ByteArray DefaultAssetLibrary_obj::getBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getBytes",0x86b4b377,"DefaultAssetLibrary.getBytes","DefaultAssetLibrary.hx",188,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(251)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(251)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(251)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(251)
	if ((tmp2)){
		HX_STACK_LINE(251)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(251)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(251)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(251)
		Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(251)
		::lime::utils::ByteArray tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(251)
		tmp8 = hx::TCast< ::lime::utils::ByteArray >::cast(tmp7);
		HX_STACK_LINE(251)
		return tmp8;
	}
	else{
		HX_STACK_LINE(252)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(252)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(252)
		::lime::utils::ByteArray tmp7 = ::lime::utils::ByteArray_obj::readFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(252)
		return tmp7;
	}
	HX_STACK_LINE(251)
	return null();
}


::lime::text::Font DefaultAssetLibrary_obj::getFont( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getFont",0x974ed843,"DefaultAssetLibrary.getFont","DefaultAssetLibrary.hx",259,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(275)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(275)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(275)
	if ((tmp2)){
		HX_STACK_LINE(277)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(277)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(277)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(277)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(278)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(278)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(278)
		::lime::text::Font tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(278)
		tmp8 = hx::TCast< ::lime::text::Font >::cast(tmp7);
		HX_STACK_LINE(278)
		return tmp8;
	}
	else{
		HX_STACK_LINE(282)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(282)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(282)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(282)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(282)
		::lime::text::Font tmp7 = ::lime::text::Font_obj::fromFile(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(282)
		return tmp7;
	}
	HX_STACK_LINE(275)
	return null();
}


::lime::graphics::Image DefaultAssetLibrary_obj::getImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getImage",0x8685ca67,"DefaultAssetLibrary.getImage","DefaultAssetLibrary.hx",291,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(303)
	::haxe::ds::StringMap tmp = this->className;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(303)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(303)
	bool tmp2 = tmp->exists(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(303)
	if ((tmp2)){
		HX_STACK_LINE(305)
		::haxe::ds::StringMap tmp3 = this->className;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(305)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(305)
		Dynamic tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(305)
		Dynamic fontClass = tmp5;		HX_STACK_VAR(fontClass,"fontClass");
		HX_STACK_LINE(306)
		Dynamic tmp6 = fontClass;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(306)
		Dynamic tmp7 = ::Type_obj::createInstance(tmp6,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(306)
		::lime::graphics::Image tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(306)
		tmp8 = hx::TCast< ::lime::graphics::Image >::cast(tmp7);
		HX_STACK_LINE(306)
		return tmp8;
	}
	else{
		HX_STACK_LINE(310)
		::haxe::ds::StringMap tmp3 = this->path;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		::String tmp4 = id;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::String tmp5 = tmp3->get(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		::String tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(310)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::fromFile(tmp6,null(),null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(310)
		return tmp7;
	}
	HX_STACK_LINE(303)
	return null();
}


::String DefaultAssetLibrary_obj::getPath( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getPath",0x9de06019,"DefaultAssetLibrary.getPath","DefaultAssetLibrary.hx",349,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(357)
	::haxe::ds::StringMap tmp = this->path;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(357)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(357)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(357)
	::String tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(357)
	return tmp3;
}


::String DefaultAssetLibrary_obj::getText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","getText",0xa0884721,"DefaultAssetLibrary.getText","DefaultAssetLibrary.hx",364,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(405)
	::String tmp = id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(405)
	::lime::utils::ByteArray tmp1 = this->getBytes(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(405)
	::lime::utils::ByteArray bytes = tmp1;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(407)
	bool tmp2 = (bytes == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(407)
	if ((tmp2)){
		HX_STACK_LINE(409)
		return null();
	}
	else{
		HX_STACK_LINE(413)
		int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(413)
		return tmp4;
	}
	HX_STACK_LINE(407)
	return null();
}


bool DefaultAssetLibrary_obj::isLocal( ::String id,::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","isLocal",0x968237df,"DefaultAssetLibrary.isLocal","DefaultAssetLibrary.hx",422,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(424)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(424)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(424)
	if ((tmp)){
		HX_STACK_LINE(424)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(424)
		tmp1 = null();
	}
	HX_STACK_LINE(424)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(436)
	return true;
}


Array< ::String > DefaultAssetLibrary_obj::list( ::String type){
	HX_STACK_FRAME("DefaultAssetLibrary","list",0xf3604ee0,"DefaultAssetLibrary.list","DefaultAssetLibrary.hx",441,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(443)
	bool tmp = (type != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(443)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(443)
	if ((tmp)){
		HX_STACK_LINE(443)
		tmp1 = hx::TCast< ::String >::cast(type);
	}
	else{
		HX_STACK_LINE(443)
		tmp1 = null();
	}
	HX_STACK_LINE(443)
	::String requestedType = tmp1;		HX_STACK_VAR(requestedType,"requestedType");
	HX_STACK_LINE(444)
	Array< ::String > items = Array_obj< ::String >::__new();		HX_STACK_VAR(items,"items");
	HX_STACK_LINE(446)
	::haxe::ds::StringMap tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(446)
	Dynamic tmp3 = tmp2->keys();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(446)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(tmp3);  __it->hasNext(); ){
		::String id = __it->next();
		{
			HX_STACK_LINE(448)
			bool tmp4 = (requestedType == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(448)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(448)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(448)
			if ((tmp5)){
				HX_STACK_LINE(448)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(448)
				::String tmp8 = type;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(448)
				::String tmp9 = tmp7;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(448)
				::String tmp10 = tmp8;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(448)
				tmp6 = this->exists(tmp9,tmp10);
			}
			else{
				HX_STACK_LINE(448)
				tmp6 = true;
			}
			HX_STACK_LINE(448)
			if ((tmp6)){
				HX_STACK_LINE(450)
				::String tmp7 = id;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(450)
				items->push(tmp7);
			}
		}
;
	}
	HX_STACK_LINE(456)
	return items;
}


::lime::app::Future DefaultAssetLibrary_obj::loadAudioBuffer( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadAudioBuffer",0xf38e2aae,"DefaultAssetLibrary.loadAudioBuffer","DefaultAssetLibrary.hx",461,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(461)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(463)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(463)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::audio::AudioBuffer run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",501,0x0fc48912)
		{
			HX_STACK_LINE(501)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(501)
			::lime::audio::AudioBuffer tmp2 = _g->getAudioBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(501)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(501)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(501)
	promise->completeWith(tmp1);
	HX_STACK_LINE(505)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(505)
	return tmp2;
}


::lime::app::Future DefaultAssetLibrary_obj::loadBytes( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadBytes",0x8c71caa3,"DefaultAssetLibrary.loadBytes","DefaultAssetLibrary.hx",510,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(510)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(512)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(512)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::utils::ByteArray run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",589,0x0fc48912)
		{
			HX_STACK_LINE(589)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(589)
			::lime::utils::ByteArray tmp2 = _g->getBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(589)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(589)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(589)
	promise->completeWith(tmp1);
	HX_STACK_LINE(593)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(593)
	return tmp2;
}


::lime::app::Future DefaultAssetLibrary_obj::loadImage( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadImage",0x8c42e193,"DefaultAssetLibrary.loadImage","DefaultAssetLibrary.hx",598,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(598)
	::DefaultAssetLibrary _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(600)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(600)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");

	HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::DefaultAssetLibrary,_g,::String,id)
	int __ArgCount() const { return 0; }
	::lime::graphics::Image run(){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",656,0x0fc48912)
		{
			HX_STACK_LINE(656)
			::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(656)
			::lime::graphics::Image tmp2 = _g->getImage(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(656)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC0(return)

	HX_STACK_LINE(656)
	::lime::app::Future tmp1 = ::lime::app::Future_obj::__new( Dynamic(new _Function_1_1(_g,id)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(656)
	promise->completeWith(tmp1);
	HX_STACK_LINE(660)
	::lime::app::Future tmp2 = promise->future;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(660)
	return tmp2;
}


Void DefaultAssetLibrary_obj::loadManifest( ){
{
		HX_STACK_FRAME("DefaultAssetLibrary","loadManifest",0x6f596c77,"DefaultAssetLibrary.loadManifest","DefaultAssetLibrary.hx",668,0x0fc48912)
		HX_STACK_THIS(this)
		HX_STACK_LINE(668)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(681)
			::lime::utils::ByteArray tmp = ::lime::utils::ByteArray_obj::readFile(HX_HCSTRING("manifest","\xaf","\xfb","\x29","\xd0"));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(681)
			::lime::utils::ByteArray bytes = tmp;		HX_STACK_VAR(bytes,"bytes");
			HX_STACK_LINE(684)
			bool tmp1 = (bytes != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(684)
			if ((tmp1)){
				HX_STACK_LINE(686)
				bytes->position = (int)0;
				HX_STACK_LINE(688)
				bool tmp2 = (bytes->length > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(688)
				if ((tmp2)){
					HX_STACK_LINE(690)
					int tmp3 = bytes->length;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(690)
					::String tmp4 = bytes->readUTFBytes(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(690)
					::String data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(692)
					bool tmp5 = (data != null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(692)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(692)
					if ((tmp5)){
						HX_STACK_LINE(692)
						tmp6 = (data.length > (int)0);
					}
					else{
						HX_STACK_LINE(692)
						tmp6 = false;
					}
					HX_STACK_LINE(692)
					if ((tmp6)){
						HX_STACK_LINE(694)
						::String tmp7 = data;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(694)
						Dynamic tmp8 = ::haxe::Unserializer_obj::run(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(694)
						cpp::ArrayBase manifest = tmp8;		HX_STACK_VAR(manifest,"manifest");
						HX_STACK_LINE(696)
						{
							HX_STACK_LINE(696)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(696)
							while((true)){
								HX_STACK_LINE(696)
								bool tmp9 = (_g < manifest->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(696)
								bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(696)
								if ((tmp10)){
									HX_STACK_LINE(696)
									break;
								}
								HX_STACK_LINE(696)
								Dynamic tmp11 = manifest->__GetItem(_g);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(696)
								Dynamic asset = tmp11;		HX_STACK_VAR(asset,"asset");
								HX_STACK_LINE(696)
								++(_g);
								HX_STACK_LINE(698)
								bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(698)
								{
									HX_STACK_LINE(698)
									::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(698)
									::haxe::ds::StringMap tmp13 = this->className;		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(698)
									::String tmp14 = key;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(698)
									tmp12 = tmp13->exists(tmp14);
								}
								HX_STACK_LINE(698)
								bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(698)
								if ((tmp13)){
									HX_STACK_LINE(703)
									{
										HX_STACK_LINE(703)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(703)
										::String value = asset->__Field(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"), hx::paccDynamic );		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(703)
										::haxe::ds::StringMap tmp14 = this->path;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(703)
										::String tmp15 = key;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(703)
										::String tmp16 = value;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(703)
										tmp14->set(tmp15,tmp16);
									}
									HX_STACK_LINE(705)
									{
										HX_STACK_LINE(705)
										::String key = asset->__Field(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"), hx::paccDynamic );		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(705)
										::String tmp14;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(705)
										tmp14 = hx::TCast< ::String >::cast(asset->__Field(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"), hx::paccDynamic ));
										HX_STACK_LINE(705)
										::String value = tmp14;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(705)
										::haxe::ds::StringMap tmp15 = this->type;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(705)
										::String tmp16 = key;		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(705)
										::String tmp17 = value;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(705)
										tmp15->set(tmp16,tmp17);
									}
								}
							}
						}
					}
				}
			}
			else{
				HX_STACK_LINE(717)
				Dynamic tmp2 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),717,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(717)
				::haxe::Log_obj::trace(HX_HCSTRING("Warning: Could not load asset manifest (bytes was null)","\x83","\x9c","\x5b","\x2e"),tmp2);
			}
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(723)
					Dynamic tmp = e;		HX_STACK_VAR(tmp,"tmp");
					HX_STACK_LINE(723)
					::String tmp1 = ::Std_obj::string(tmp);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(723)
					::String tmp2 = (HX_HCSTRING("Warning: Could not load asset manifest (","\x73","\x7e","\xfd","\x21") + tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(723)
					::String tmp3 = (tmp2 + HX_HCSTRING(")","\x29","\x00","\x00","\x00"));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(723)
					Dynamic tmp4 = hx::SourceInfo(HX_HCSTRING("DefaultAssetLibrary.hx","\x12","\x89","\xc4","\x0f"),723,HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a"),HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(723)
					::haxe::Log_obj::trace(tmp3,tmp4);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultAssetLibrary_obj,loadManifest,(void))

::lime::app::Future DefaultAssetLibrary_obj::loadText( ::String id){
	HX_STACK_FRAME("DefaultAssetLibrary","loadText",0x26df3975,"DefaultAssetLibrary.loadText","DefaultAssetLibrary.hx",731,0x0fc48912)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(733)
	::lime::app::Promise tmp = ::lime::app::Promise_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(733)
	::lime::app::Promise promise = tmp;		HX_STACK_VAR(promise,"promise");
	HX_STACK_LINE(769)
	::String tmp1 = id;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(769)
	::lime::app::Future tmp2 = this->loadBytes(tmp1);		HX_STACK_VAR(tmp2,"tmp2");

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 1; }
	::lime::app::Future run(::lime::utils::ByteArray bytes){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","DefaultAssetLibrary.hx",769,0x0fc48912)
		HX_STACK_ARG(bytes,"bytes")
		{

			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_2_1,::lime::utils::ByteArray,bytes)
			int __ArgCount() const { return 0; }
			::String run(){
				HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","DefaultAssetLibrary.hx",771,0x0fc48912)
				{
					HX_STACK_LINE(773)
					bool tmp3 = (bytes == null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(773)
					if ((tmp3)){
						HX_STACK_LINE(775)
						return null();
					}
					else{
						HX_STACK_LINE(779)
						int tmp4 = bytes->length;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(779)
						::String tmp5 = bytes->readUTFBytes(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(779)
						return tmp5;
					}
					HX_STACK_LINE(773)
					return null();
				}
				return null();
			}
			HX_END_LOCAL_FUNC0(return)

			HX_STACK_LINE(771)
			::lime::app::Future tmp3 = ::lime::app::Future_obj::__new( Dynamic(new _Function_2_1(bytes)));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(771)
			return tmp3;
		}
		return null();
	}
	HX_END_LOCAL_FUNC1(return)

	HX_STACK_LINE(769)
	::lime::app::Future tmp3 = tmp2->then( Dynamic(new _Function_1_1()));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(769)
	promise->completeWith(tmp3);
	HX_STACK_LINE(789)
	::lime::app::Future tmp4 = promise->future;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(789)
	return tmp4;
}



DefaultAssetLibrary_obj::DefaultAssetLibrary_obj()
{
}

void DefaultAssetLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultAssetLibrary);
	HX_MARK_MEMBER_NAME(className,"className");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(lastModified,"lastModified");
	HX_MARK_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultAssetLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(className,"className");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(lastModified,"lastModified");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	::lime::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DefaultAssetLibrary_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"list") ) { return list_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return exists_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return getPath_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return isLocal_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return getImage_dyn(); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return loadText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { return className; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return loadBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return loadImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { return lastModified; }
		if (HX_FIELD_EQ(inName,"loadManifest") ) { return loadManifest_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return getAudioBuffer_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return loadAudioBuffer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLibrary_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"className") ) { className=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"lastModified") ) { lastModified=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"));
	outFields->push(HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,className),HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(DefaultAssetLibrary_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsFloat,(int)offsetof(DefaultAssetLibrary_obj,lastModified),HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78")},
	{hx::fsObject /*::haxe::Timer*/ ,(int)offsetof(DefaultAssetLibrary_obj,timer),HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("className","\xa3","\x92","\x3d","\xdc"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("lastModified","\xbf","\xe7","\x59","\x78"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("exists","\xdc","\x1d","\xe0","\xbf"),
	HX_HCSTRING("getAudioBuffer","\x80","\x41","\xe3","\x26"),
	HX_HCSTRING("getBytes","\xf5","\x17","\x6f","\x1d"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getImage","\xe5","\x2e","\x40","\x1d"),
	HX_HCSTRING("getPath","\x5b","\x95","\xd4","\x1c"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("isLocal","\x21","\x6d","\x76","\x15"),
	HX_HCSTRING("list","\x5e","\x1c","\xb3","\x47"),
	HX_HCSTRING("loadAudioBuffer","\xf0","\x71","\x7c","\xe3"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("loadImage","\x55","\x6b","\xa0","\xd8"),
	HX_HCSTRING("loadManifest","\xf5","\xe7","\x92","\x89"),
	HX_HCSTRING("loadText","\xf3","\x9d","\x99","\xbd"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLibrary_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultAssetLibrary_obj::__mClass;

void DefaultAssetLibrary_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("DefaultAssetLibrary","\x2c","\x3d","\x78","\x3a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultAssetLibrary_obj >;
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

