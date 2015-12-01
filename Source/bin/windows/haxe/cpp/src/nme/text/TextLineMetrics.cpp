#include <hxcpp.h>

#ifndef INCLUDED_nme_text_TextLineMetrics
#include <nme/text/TextLineMetrics.h>
#endif
namespace nme{
namespace text{

Void TextLineMetrics_obj::__construct(Dynamic in_x,Dynamic in_width,Dynamic in_height,Dynamic in_ascent,Dynamic in_descent,Dynamic in_leading)
{
HX_STACK_FRAME("nme.text.TextLineMetrics","new",0x118ddebb,"nme.text.TextLineMetrics.new","nme/text/TextLineMetrics.hx",15,0xca9f8575)
HX_STACK_THIS(this)
HX_STACK_ARG(in_x,"in_x")
HX_STACK_ARG(in_width,"in_width")
HX_STACK_ARG(in_height,"in_height")
HX_STACK_ARG(in_ascent,"in_ascent")
HX_STACK_ARG(in_descent,"in_descent")
HX_STACK_ARG(in_leading,"in_leading")
{
	HX_STACK_LINE(16)
	this->x = in_x;
	HX_STACK_LINE(17)
	this->width = in_width;
	HX_STACK_LINE(18)
	this->height = in_height;
	HX_STACK_LINE(19)
	this->ascent = in_ascent;
	HX_STACK_LINE(20)
	this->descent = in_descent;
	HX_STACK_LINE(21)
	this->leading = in_leading;
}
;
	return null();
}

//TextLineMetrics_obj::~TextLineMetrics_obj() { }

Dynamic TextLineMetrics_obj::__CreateEmpty() { return  new TextLineMetrics_obj; }
hx::ObjectPtr< TextLineMetrics_obj > TextLineMetrics_obj::__new(Dynamic in_x,Dynamic in_width,Dynamic in_height,Dynamic in_ascent,Dynamic in_descent,Dynamic in_leading)
{  hx::ObjectPtr< TextLineMetrics_obj > _result_ = new TextLineMetrics_obj();
	_result_->__construct(in_x,in_width,in_height,in_ascent,in_descent,in_leading);
	return _result_;}

Dynamic TextLineMetrics_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextLineMetrics_obj > _result_ = new TextLineMetrics_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}


TextLineMetrics_obj::TextLineMetrics_obj()
{
}

Dynamic TextLineMetrics_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"ascent") ) { return ascent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { return descent; }
		if (HX_FIELD_EQ(inName,"leading") ) { return leading; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextLineMetrics_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ascent") ) { ascent=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descent") ) { descent=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"leading") ) { leading=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextLineMetrics_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"));
	outFields->push(HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"));
	outFields->push(HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,ascent),HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,descent),HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19")},
	{hx::fsFloat,(int)offsetof(TextLineMetrics_obj,leading),HX_HCSTRING("leading","\xc6","\x32","\x61","\x09")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("ascent","\x5a","\xd9","\x6f","\x41"),
	HX_HCSTRING("descent","\x3a","\xae","\x3f","\x19"),
	HX_HCSTRING("leading","\xc6","\x32","\x61","\x09"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextLineMetrics_obj::__mClass,"__mClass");
};

#endif

hx::Class TextLineMetrics_obj::__mClass;

void TextLineMetrics_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.text.TextLineMetrics","\x49","\x65","\x7b","\x18");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TextLineMetrics_obj >;
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
} // end namespace text
