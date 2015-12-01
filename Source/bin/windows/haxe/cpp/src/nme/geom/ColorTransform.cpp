#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_nme_geom_ColorTransform
#include <nme/geom/ColorTransform.h>
#endif
namespace nme{
namespace geom{

Void ColorTransform_obj::__construct(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset)
{
HX_STACK_FRAME("nme.geom.ColorTransform","new",0xc43d1e65,"nme.geom.ColorTransform.new","nme/geom/ColorTransform.hx",18,0x6a242c4b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_inRedMultiplier,"inRedMultiplier")
HX_STACK_ARG(__o_inGreenMultiplier,"inGreenMultiplier")
HX_STACK_ARG(__o_inBlueMultiplier,"inBlueMultiplier")
HX_STACK_ARG(__o_inAlphaMultiplier,"inAlphaMultiplier")
HX_STACK_ARG(__o_inRedOffset,"inRedOffset")
HX_STACK_ARG(__o_inGreenOffset,"inGreenOffset")
HX_STACK_ARG(__o_inBlueOffset,"inBlueOffset")
HX_STACK_ARG(__o_inAlphaOffset,"inAlphaOffset")
Float inRedMultiplier = __o_inRedMultiplier.Default(((Float)1.0));
Float inGreenMultiplier = __o_inGreenMultiplier.Default(((Float)1.0));
Float inBlueMultiplier = __o_inBlueMultiplier.Default(((Float)1.0));
Float inAlphaMultiplier = __o_inAlphaMultiplier.Default(((Float)1.0));
Float inRedOffset = __o_inRedOffset.Default(((Float)0.0));
Float inGreenOffset = __o_inGreenOffset.Default(((Float)0.0));
Float inBlueOffset = __o_inBlueOffset.Default(((Float)0.0));
Float inAlphaOffset = __o_inAlphaOffset.Default(((Float)0.0));
{
	HX_STACK_LINE(19)
	this->redMultiplier = inRedMultiplier;
	HX_STACK_LINE(20)
	this->greenMultiplier = inGreenMultiplier;
	HX_STACK_LINE(21)
	this->blueMultiplier = inBlueMultiplier;
	HX_STACK_LINE(22)
	this->alphaMultiplier = inAlphaMultiplier;
	HX_STACK_LINE(23)
	this->redOffset = inRedOffset;
	HX_STACK_LINE(24)
	this->greenOffset = inGreenOffset;
	HX_STACK_LINE(25)
	this->blueOffset = inBlueOffset;
	HX_STACK_LINE(26)
	this->alphaOffset = inAlphaOffset;
}
;
	return null();
}

//ColorTransform_obj::~ColorTransform_obj() { }

Dynamic ColorTransform_obj::__CreateEmpty() { return  new ColorTransform_obj; }
hx::ObjectPtr< ColorTransform_obj > ColorTransform_obj::__new(hx::Null< Float >  __o_inRedMultiplier,hx::Null< Float >  __o_inGreenMultiplier,hx::Null< Float >  __o_inBlueMultiplier,hx::Null< Float >  __o_inAlphaMultiplier,hx::Null< Float >  __o_inRedOffset,hx::Null< Float >  __o_inGreenOffset,hx::Null< Float >  __o_inBlueOffset,hx::Null< Float >  __o_inAlphaOffset)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(__o_inRedMultiplier,__o_inGreenMultiplier,__o_inBlueMultiplier,__o_inAlphaMultiplier,__o_inRedOffset,__o_inGreenOffset,__o_inBlueOffset,__o_inAlphaOffset);
	return _result_;}

Dynamic ColorTransform_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ColorTransform_obj > _result_ = new ColorTransform_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _result_;}

Void ColorTransform_obj::concat( ::nme::geom::ColorTransform second){
{
		HX_STACK_FRAME("nme.geom.ColorTransform","concat",0x2d798c2f,"nme.geom.ColorTransform.concat","nme/geom/ColorTransform.hx",30,0x6a242c4b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(31)
		hx::AddEq(this->redMultiplier,second->redMultiplier);
		HX_STACK_LINE(32)
		hx::AddEq(this->greenMultiplier,second->greenMultiplier);
		HX_STACK_LINE(33)
		hx::AddEq(this->blueMultiplier,second->blueMultiplier);
		HX_STACK_LINE(34)
		hx::AddEq(this->alphaMultiplier,second->alphaMultiplier);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,concat,(void))

int ColorTransform_obj::get_color( ){
	HX_STACK_FRAME("nme.geom.ColorTransform","get_color",0x00c8ed7f,"nme.geom.ColorTransform.get_color","nme/geom/ColorTransform.hx",39,0x6a242c4b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(40)
	Float tmp = this->redOffset;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(40)
	int tmp2 = (int(tmp1) << int((int)16));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(40)
	Float tmp3 = this->greenOffset;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	int tmp4 = ::Std_obj::_int(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	int tmp5 = (int(tmp4) << int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(40)
	int tmp6 = (int(tmp2) | int(tmp5));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(40)
	Float tmp7 = this->blueOffset;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(40)
	int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(40)
	int tmp9 = (int(tmp6) | int(tmp8));		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(40)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC0(ColorTransform_obj,get_color,return )

int ColorTransform_obj::set_color( int value){
	HX_STACK_FRAME("nme.geom.ColorTransform","set_color",0xe419d98b,"nme.geom.ColorTransform.set_color","nme/geom/ColorTransform.hx",44,0x6a242c4b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(45)
	int tmp = (int(value) >> int((int)16));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	this->redOffset = tmp1;
	HX_STACK_LINE(46)
	int tmp2 = (int(value) >> int((int)8));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(46)
	int tmp3 = (int(tmp2) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(46)
	this->greenOffset = tmp3;
	HX_STACK_LINE(47)
	int tmp4 = (int(value) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	this->blueOffset = tmp4;
	HX_STACK_LINE(49)
	this->redMultiplier = (int)0;
	HX_STACK_LINE(50)
	this->greenMultiplier = (int)0;
	HX_STACK_LINE(51)
	this->blueMultiplier = (int)0;
	HX_STACK_LINE(53)
	int tmp5 = this->get_color();		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(53)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(ColorTransform_obj,set_color,return )


ColorTransform_obj::ColorTransform_obj()
{
}

Dynamic ColorTransform_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp != hx::paccNever) return get_color(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { return concat_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { return redOffset; }
		if (HX_FIELD_EQ(inName,"get_color") ) { return get_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { return blueOffset; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { return alphaOffset; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { return greenOffset; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { return redMultiplier; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { return blueMultiplier; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { return alphaMultiplier; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { return greenMultiplier; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ColorTransform_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp != hx::paccNever) return set_color(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"redOffset") ) { redOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blueOffset") ) { blueOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alphaOffset") ) { alphaOffset=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenOffset") ) { greenOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"redMultiplier") ) { redMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"blueMultiplier") ) { blueMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"alphaMultiplier") ) { alphaMultiplier=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenMultiplier") ) { greenMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ColorTransform_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"));
	outFields->push(HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"));
	outFields->push(HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"));
	outFields->push(HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"));
	outFields->push(HX_HCSTRING("color","\x63","\x71","\x5c","\x4a"));
	outFields->push(HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"));
	outFields->push(HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"));
	outFields->push(HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"));
	outFields->push(HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaMultiplier),HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,alphaOffset),HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueMultiplier),HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,blueOffset),HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenMultiplier),HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,greenOffset),HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redMultiplier),HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e")},
	{hx::fsFloat,(int)offsetof(ColorTransform_obj,redOffset),HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("alphaMultiplier","\x7f","\xb4","\x82","\x9a"),
	HX_HCSTRING("alphaOffset","\x91","\x8d","\x43","\xd0"),
	HX_HCSTRING("blueMultiplier","\xbb","\x32","\x96","\xcf"),
	HX_HCSTRING("blueOffset","\xcd","\x3d","\x34","\xbb"),
	HX_HCSTRING("greenMultiplier","\x24","\x2c","\x40","\x6f"),
	HX_HCSTRING("greenOffset","\xb6","\x0e","\xd9","\xb7"),
	HX_HCSTRING("redMultiplier","\x32","\xf4","\xe9","\x4e"),
	HX_HCSTRING("redOffset","\xc4","\x37","\x9e","\x53"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("get_color","\xba","\xcd","\x05","\x8e"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ColorTransform_obj::__mClass,"__mClass");
};

#endif

hx::Class ColorTransform_obj::__mClass;

void ColorTransform_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.geom.ColorTransform","\xf3","\x07","\x93","\x27");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ColorTransform_obj >;
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
} // end namespace geom
