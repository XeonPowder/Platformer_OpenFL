#include <hxcpp.h>

#ifndef INCLUDED_nme__Vector_Vector_Impl_
#include <nme/_Vector/Vector_Impl_.h>
#endif
namespace nme{
namespace _Vector{

Void Vector_Impl__obj::__construct()
{
	return null();
}

//Vector_Impl__obj::~Vector_Impl__obj() { }

Dynamic Vector_Impl__obj::__CreateEmpty() { return  new Vector_Impl__obj; }
hx::ObjectPtr< Vector_Impl__obj > Vector_Impl__obj::__new()
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Vector_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector_Impl__obj > _result_ = new Vector_Impl__obj();
	_result_->__construct();
	return _result_;}

cpp::ArrayBase Vector_Impl__obj::_new( Dynamic length,Dynamic fixed){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","_new",0xaf5de3d8,"nme._Vector.Vector_Impl_._new","nme/Vector.hx",21,0x35cefa72)
	HX_STACK_ARG(length,"length")
	HX_STACK_ARG(fixed,"fixed")
	HX_STACK_LINE(21)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(((cpp::ArrayBase)(Dynamic( Array_obj<Dynamic>::__new() )))));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(21)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,_new,return )

cpp::ArrayBase Vector_Impl__obj::concat( cpp::ArrayBase this1,cpp::ArrayBase a){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","concat",0xe038a34b,"nme._Vector.Vector_Impl_.concat","nme/Vector.hx",27,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(29)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(this1->__Field(HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"), hx::paccDynamic )(a)));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,concat,return )

cpp::ArrayBase Vector_Impl__obj::copy( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","copy",0xb2038a2c,"nme._Vector.Vector_Impl_.copy","nme/Vector.hx",34,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(39)
	cpp::ArrayBase tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		cpp::ArrayBase a = this1->__Field(HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"), hx::paccDynamic )();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(39)
		tmp = ((cpp::ArrayBase)(a));
	}
	HX_STACK_LINE(39)
	return tmp;
	HX_STACK_LINE(39)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,copy,return )

Dynamic Vector_Impl__obj::iterator( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","iterator",0x0b071fe5,"nme._Vector.Vector_Impl_.iterator","nme/Vector.hx",45,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(50)
	Dynamic tmp = this1->__Field(HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,iterator,return )

::String Vector_Impl__obj::join( cpp::ArrayBase this1,::String sep){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","join",0xb6a40261,"nme._Vector.Vector_Impl_.join","nme/Vector.hx",56,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(sep,"sep")
	HX_STACK_LINE(58)
	::String tmp = sep;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(58)
	::String tmp1 = this1->__Field(HX_HCSTRING("join","\xea","\x33","\x65","\x46"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(58)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,join,return )

Dynamic Vector_Impl__obj::pop( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","pop",0x4ee64afa,"nme._Vector.Vector_Impl_.pop","nme/Vector.hx",63,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(65)
	Dynamic tmp = this1->__Field(HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,pop,return )

int Vector_Impl__obj::push( cpp::ArrayBase this1,Dynamic x){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","push",0xba9fe051,"nme._Vector.Vector_Impl_.push","nme/Vector.hx",70,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_LINE(72)
	Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = this1->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,push,return )

Void Vector_Impl__obj::reverse( cpp::ArrayBase this1){
{
		HX_STACK_FRAME("nme._Vector.Vector_Impl_","reverse",0x5e1a8f0b,"nme._Vector.Vector_Impl_.reverse","nme/Vector.hx",79,0x35cefa72)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_LINE(79)
		this1->__Field(HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"), hx::paccDynamic )();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,reverse,(void))

Dynamic Vector_Impl__obj::shift( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","shift",0x42d8c62b,"nme._Vector.Vector_Impl_.shift","nme/Vector.hx",84,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(86)
	Dynamic tmp = this1->__Field(HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"), hx::paccDynamic )();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,shift,return )

Void Vector_Impl__obj::unshift( cpp::ArrayBase this1,Dynamic x){
{
		HX_STACK_FRAME("nme._Vector.Vector_Impl_","unshift",0xbbd23972,"nme._Vector.Vector_Impl_.unshift","nme/Vector.hx",91,0x35cefa72)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(93)
		Dynamic tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(93)
		this1->__Field(HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,unshift,(void))

cpp::ArrayBase Vector_Impl__obj::slice( cpp::ArrayBase this1,Dynamic pos,Dynamic end){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","slice",0x457d9dfb,"nme._Vector.Vector_Impl_.slice","nme/Vector.hx",98,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(end,"end")
	HX_STACK_LINE(100)
	Dynamic tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(100)
	Dynamic tmp1 = end;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(100)
	cpp::ArrayBase tmp2 = ((cpp::ArrayBase)(this1->__Field(HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"), hx::paccDynamic )(tmp,tmp1)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,slice,return )

Void Vector_Impl__obj::sort( cpp::ArrayBase this1,Dynamic f){
{
		HX_STACK_FRAME("nme._Vector.Vector_Impl_","sort",0xbc96f5d5,"nme._Vector.Vector_Impl_.sort","nme/Vector.hx",105,0x35cefa72)
		HX_STACK_ARG(this1,"this1")
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(107)
		Dynamic tmp = f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(107)
		this1->__Field(HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,sort,(void))

cpp::ArrayBase Vector_Impl__obj::splice( cpp::ArrayBase this1,int pos,int len){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","splice",0xd8071fb3,"nme._Vector.Vector_Impl_.splice","nme/Vector.hx",112,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(114)
	int tmp = pos;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	int tmp1 = len;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	cpp::ArrayBase tmp2 = ((cpp::ArrayBase)(this1->__Field(HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"), hx::paccDynamic )(tmp,tmp1)));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(114)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,splice,return )

::String Vector_Impl__obj::toString( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","toString",0xafdba6a3,"nme._Vector.Vector_Impl_.toString","nme/Vector.hx",119,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(120)
	bool tmp = (this1 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(120)
	if ((tmp)){
		HX_STACK_LINE(121)
		return HX_HCSTRING("null","\x87","\x9e","\x0e","\x49");
	}
	HX_STACK_LINE(123)
	::String tmp1 = this1->toString();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(123)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toString,return )

int Vector_Impl__obj::indexOf( cpp::ArrayBase this1,Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","indexOf",0x23dd9eb2,"nme._Vector.Vector_Impl_.indexOf","nme/Vector.hx",128,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g1 = from;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			int _g = this1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				bool tmp = (_g1 < _g);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(133)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(133)
				if ((tmp1)){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				int tmp2 = (_g1)++;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(133)
				int i = tmp2;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(134)
				Dynamic tmp3 = this1->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(134)
				Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(134)
				bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(134)
				if ((tmp5)){
					HX_STACK_LINE(134)
					int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(134)
					return tmp6;
				}
			}
		}
		HX_STACK_LINE(136)
		return (int)-1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,indexOf,return )

int Vector_Impl__obj::lastIndexOf( cpp::ArrayBase this1,Dynamic x,Dynamic __o_from){
Dynamic from = __o_from.Default(0);
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","lastIndexOf",0xf734fb7c,"nme._Vector.Vector_Impl_.lastIndexOf","nme/Vector.hx",142,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(from,"from")
{
		HX_STACK_LINE(147)
		int tmp = (this1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ) - (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(147)
		int i = tmp;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(148)
		while((true)){
			HX_STACK_LINE(148)
			bool tmp1 = (i >= from);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(148)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(148)
			if ((tmp2)){
				HX_STACK_LINE(148)
				break;
			}
			HX_STACK_LINE(149)
			Dynamic tmp3 = this1->__GetItem(i);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(149)
			Dynamic tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(149)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(149)
			if ((tmp5)){
				HX_STACK_LINE(149)
				int tmp6 = i;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(149)
				return tmp6;
			}
			HX_STACK_LINE(150)
			(i)--;
		}
		HX_STACK_LINE(152)
		return (int)-1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Vector_Impl__obj,lastIndexOf,return )

cpp::ArrayBase Vector_Impl__obj::ofArray( cpp::ArrayBase a){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","ofArray",0xcc107eeb,"nme._Vector.Vector_Impl_.ofArray","nme/Vector.hx",158,0x35cefa72)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(163)
	cpp::ArrayBase tmp = ::nme::_Vector::Vector_Impl__obj::_new(null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(163)
	cpp::ArrayBase tmp1 = ::nme::_Vector::Vector_Impl__obj::concat(tmp,((cpp::ArrayBase)(a)));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(163)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,ofArray,return )

cpp::ArrayBase Vector_Impl__obj::convert( cpp::ArrayBase v){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","convert",0x5de853dc,"nme._Vector.Vector_Impl_.convert","nme/Vector.hx",169,0x35cefa72)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(174)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(v));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,convert,return )

cpp::ArrayBase Vector_Impl__obj::fromArray( cpp::ArrayBase a){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","fromArray",0xe1e6b9f8,"nme._Vector.Vector_Impl_.fromArray","nme/Vector.hx",180,0x35cefa72)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(185)
	cpp::ArrayBase tmp = ((cpp::ArrayBase)(a));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(185)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,fromArray,return )

cpp::ArrayBase Vector_Impl__obj::toArray( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","toArray",0x35321007,"nme._Vector.Vector_Impl_.toArray","nme/Vector.hx",194,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(194)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,toArray,return )

int Vector_Impl__obj::get_length( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","get_length",0x5c568666,"nme._Vector.Vector_Impl_.get_length","nme/Vector.hx",207,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(209)
	int tmp = this1->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(209)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_length,return )

int Vector_Impl__obj::set_length( cpp::ArrayBase this1,int value){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","set_length",0x5fd424da,"nme._Vector.Vector_Impl_.set_length","nme/Vector.hx",214,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(219)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(219)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_length,return )

bool Vector_Impl__obj::get_fixed( cpp::ArrayBase this1){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","get_fixed",0x4c19b7f4,"nme._Vector.Vector_Impl_.get_fixed","nme/Vector.hx",230,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(230)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Vector_Impl__obj,get_fixed,return )

bool Vector_Impl__obj::set_fixed( cpp::ArrayBase this1,bool value){
	HX_STACK_FRAME("nme._Vector.Vector_Impl_","set_fixed",0x2f6aa400,"nme._Vector.Vector_Impl_.set_fixed","nme/Vector.hx",236,0x35cefa72)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(241)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(241)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector_Impl__obj,set_fixed,return )


Vector_Impl__obj::Vector_Impl__obj()
{
}

bool Vector_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { outValue = pop_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"join") ) { outValue = join_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"push") ) { outValue = push_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"shift") ) { outValue = shift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"slice") ) { outValue = slice_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"concat") ) { outValue = concat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"splice") ) { outValue = splice_dyn(); return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reverse") ) { outValue = reverse_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"unshift") ) { outValue = unshift_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"indexOf") ) { outValue = indexOf_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"ofArray") ) { outValue = ofArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"convert") ) { outValue = convert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toArray") ) { outValue = toArray_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { outValue = iterator_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromArray") ) { outValue = fromArray_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"get_fixed") ) { outValue = get_fixed_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_fixed") ) { outValue = set_fixed_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_length") ) { outValue = set_length_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lastIndexOf") ) { outValue = lastIndexOf_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class Vector_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("concat","\x14","\x09","\xd0","\xc7"),
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("join","\xea","\x33","\x65","\x46"),
	HX_HCSTRING("pop","\x91","\x5d","\x55","\x00"),
	HX_HCSTRING("push","\xda","\x11","\x61","\x4a"),
	HX_HCSTRING("reverse","\x22","\x39","\xfc","\x1a"),
	HX_HCSTRING("shift","\x82","\xec","\x22","\x7c"),
	HX_HCSTRING("unshift","\x89","\xe3","\xb3","\x78"),
	HX_HCSTRING("slice","\x52","\xc4","\xc7","\x7e"),
	HX_HCSTRING("sort","\x5e","\x27","\x58","\x4c"),
	HX_HCSTRING("splice","\x7c","\x85","\x9e","\xbf"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("indexOf","\xc9","\x48","\xbf","\xe0"),
	HX_HCSTRING("lastIndexOf","\x13","\xfd","\x6a","\x95"),
	HX_HCSTRING("ofArray","\x02","\x29","\xf2","\x88"),
	HX_HCSTRING("convert","\xf3","\xfd","\xc9","\x1a"),
	HX_HCSTRING("fromArray","\xcf","\x57","\x18","\xda"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("get_fixed","\xcb","\x55","\x4b","\x44"),
	HX_HCSTRING("set_fixed","\xd7","\x41","\x9c","\x27"),
	::String(null()) };

void Vector_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme._Vector.Vector_Impl_","\x57","\x25","\xd6","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Vector_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Vector_Impl__obj >;
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
} // end namespace _Vector
