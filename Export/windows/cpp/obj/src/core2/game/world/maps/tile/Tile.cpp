#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_core2_game_assets_UUID
#include <core2/game/assets/UUID.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tile_Tile
#include <core2/game/world/maps/tile/Tile.h>
#endif
#ifndef INCLUDED_core2_game_world_maps_tile_managers_TileManager
#include <core2/game/world/maps/tile/managers/TileManager.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
namespace core2{
namespace game{
namespace world{
namespace maps{
namespace tile{

Void Tile_obj::__construct(::core2::game::world::maps::tile::managers::TileManager tm,::String name,int tileid,hx::Null< bool >  __o_registerTile)
{
HX_STACK_FRAME("core2.game.world.maps.tile.Tile","new",0xeb3fa306,"core2.game.world.maps.tile.Tile.new","core2/game/world/maps/tile/Tile.hx",11,0xe69b2d49)
HX_STACK_THIS(this)
HX_STACK_ARG(tm,"tm")
HX_STACK_ARG(name,"name")
HX_STACK_ARG(tileid,"tileid")
HX_STACK_ARG(__o_registerTile,"registerTile")
bool registerTile = __o_registerTile.Default(true);
{
	HX_STACK_LINE(12)
	this->tileName = name;
	HX_STACK_LINE(13)
	this->tileID = tileid;
	HX_STACK_LINE(14)
	this->tileManager = tm;
	HX_STACK_LINE(15)
	int tmp = ::core2::game::assets::UUID_obj::randomNum(null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	this->id = tmp;
	HX_STACK_LINE(16)
	bool tmp1 = registerTile;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	if ((tmp1)){
		HX_STACK_LINE(17)
		::core2::game::world::maps::tile::managers::TileManager tmp2 = tm->getTileManager();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(17)
		::haxe::ds::ObjectMap tmp3 = tmp2->getList();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(17)
		int tmp4 = this->tileID;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(17)
		tmp3->set(hx::ObjectPtr<OBJ_>(this),tmp4);
	}
	else{
		HX_STACK_LINE(19)
		::String tmp2 = this->tileName;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(19)
		::String tmp3 = (HX_HCSTRING("Tile-ID: ","\xe0","\x47","\x7d","\xb3") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(19)
		::String tmp4 = (tmp3 + HX_HCSTRING("-","\x2d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(19)
		int tmp5 = this->tileID;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(19)
		::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(19)
		::String tmp7 = (tmp6 + HX_HCSTRING(" was not added to the TileManager.","\xdf","\x65","\x1a","\x55"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(19)
		::Sys_obj::println(tmp7);
	}
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(::core2::game::world::maps::tile::managers::TileManager tm,::String name,int tileid,hx::Null< bool >  __o_registerTile)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(tm,name,tileid,__o_registerTile);
	return _result_;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > _result_ = new Tile_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

int Tile_obj::hashCode( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.Tile","hashCode",0xf9addfb5,"core2.game.world.maps.tile.Tile.hashCode","core2/game/world/maps/tile/Tile.hx",22,0xe69b2d49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(23)
	int tmp = this->id;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,hashCode,return )

::core2::game::world::maps::tile::Tile Tile_obj::getTile( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.Tile","getTile",0x1640988a,"core2.game.world.maps.tile.Tile.getTile","core2/game/world/maps/tile/Tile.hx",26,0xe69b2d49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(26)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getTile,return )

int Tile_obj::getTileID( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.Tile","getTileID",0x99ff8ee5,"core2.game.world.maps.tile.Tile.getTileID","core2/game/world/maps/tile/Tile.hx",28,0xe69b2d49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	int tmp = this->tileID;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getTileID,return )

::String Tile_obj::getTileName( ){
	HX_STACK_FRAME("core2.game.world.maps.tile.Tile","getTileName",0xc79143f5,"core2.game.world.maps.tile.Tile.getTileName","core2/game/world/maps/tile/Tile.hx",31,0xe69b2d49)
	HX_STACK_THIS(this)
	HX_STACK_LINE(32)
	::String tmp = this->tileName;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,getTileName,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(tileName,"tileName");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(tileManager,"tileManager");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tileName,"tileName");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(tileManager,"tileManager");
	HX_VISIT_MEMBER_NAME(id,"id");
}

Dynamic Tile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileName") ) { return tileName; }
		if (HX_FIELD_EQ(inName,"hashCode") ) { return hashCode_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getTileID") ) { return getTileID_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { return tileManager; }
		if (HX_FIELD_EQ(inName,"getTileName") ) { return getTileName_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tileName") ) { tileName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tileManager") ) { tileManager=inValue.Cast< ::core2::game::world::maps::tile::managers::TileManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("tileName","\x99","\x98","\x05","\x83"));
	outFields->push(HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"));
	outFields->push(HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Tile_obj,tileName),HX_HCSTRING("tileName","\x99","\x98","\x05","\x83")},
	{hx::fsInt,(int)offsetof(Tile_obj,tileID),HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e")},
	{hx::fsObject /*::core2::game::world::maps::tile::managers::TileManager*/ ,(int)offsetof(Tile_obj,tileManager),HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3")},
	{hx::fsInt,(int)offsetof(Tile_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("tileName","\x99","\x98","\x05","\x83"),
	HX_HCSTRING("tileID","\x89","\xb2","\x28","\x1e"),
	HX_HCSTRING("tileManager","\xdf","\xd0","\x25","\xb3"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("hashCode","\x1b","\x0c","\x75","\x07"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("getTileID","\xbf","\x3b","\x7f","\x9a"),
	HX_HCSTRING("getTileName","\x4f","\x5b","\xf9","\xa8"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

hx::Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("core2.game.world.maps.tile.Tile","\x14","\x68","\x2c","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Tile_obj >;
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

} // end namespace core2
} // end namespace game
} // end namespace world
} // end namespace maps
} // end namespace tile
