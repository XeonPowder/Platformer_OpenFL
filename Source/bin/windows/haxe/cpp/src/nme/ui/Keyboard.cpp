#include <hxcpp.h>

#ifndef INCLUDED_nme_ui_Keyboard
#include <nme/ui/Keyboard.h>
#endif
namespace nme{
namespace ui{

Void Keyboard_obj::__construct()
{
	return null();
}

//Keyboard_obj::~Keyboard_obj() { }

Dynamic Keyboard_obj::__CreateEmpty() { return  new Keyboard_obj; }
hx::ObjectPtr< Keyboard_obj > Keyboard_obj::__new()
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

Dynamic Keyboard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Keyboard_obj > _result_ = new Keyboard_obj();
	_result_->__construct();
	return _result_;}

int Keyboard_obj::A;

int Keyboard_obj::B;

int Keyboard_obj::C;

int Keyboard_obj::D;

int Keyboard_obj::E;

int Keyboard_obj::F;

int Keyboard_obj::G;

int Keyboard_obj::H;

int Keyboard_obj::I;

int Keyboard_obj::J;

int Keyboard_obj::K;

int Keyboard_obj::L;

int Keyboard_obj::M;

int Keyboard_obj::N;

int Keyboard_obj::O;

int Keyboard_obj::P;

int Keyboard_obj::Q;

int Keyboard_obj::R;

int Keyboard_obj::S;

int Keyboard_obj::T;

int Keyboard_obj::U;

int Keyboard_obj::V;

int Keyboard_obj::W;

int Keyboard_obj::X;

int Keyboard_obj::Y;

int Keyboard_obj::Z;

int Keyboard_obj::ALTERNATE;

int Keyboard_obj::BACKQUOTE;

int Keyboard_obj::BACKSLASH;

int Keyboard_obj::BACKSPACE;

int Keyboard_obj::CAPS_LOCK;

int Keyboard_obj::COMMA;

int Keyboard_obj::COMMAND;

int Keyboard_obj::CONTROL;

int Keyboard_obj::DELETE;

int Keyboard_obj::DOWN;

int Keyboard_obj::END;

int Keyboard_obj::ENTER;

int Keyboard_obj::EQUAL;

int Keyboard_obj::ESCAPE;

int Keyboard_obj::F1;

int Keyboard_obj::F2;

int Keyboard_obj::F3;

int Keyboard_obj::F4;

int Keyboard_obj::F5;

int Keyboard_obj::F6;

int Keyboard_obj::F7;

int Keyboard_obj::F8;

int Keyboard_obj::F9;

int Keyboard_obj::F10;

int Keyboard_obj::F11;

int Keyboard_obj::F12;

int Keyboard_obj::F13;

int Keyboard_obj::F14;

int Keyboard_obj::F15;

int Keyboard_obj::HOME;

int Keyboard_obj::INSERT;

int Keyboard_obj::LEFT;

int Keyboard_obj::LEFTBRACKET;

int Keyboard_obj::MINUS;

int Keyboard_obj::NUMBER_0;

int Keyboard_obj::NUMBER_1;

int Keyboard_obj::NUMBER_2;

int Keyboard_obj::NUMBER_3;

int Keyboard_obj::NUMBER_4;

int Keyboard_obj::NUMBER_5;

int Keyboard_obj::NUMBER_6;

int Keyboard_obj::NUMBER_7;

int Keyboard_obj::NUMBER_8;

int Keyboard_obj::NUMBER_9;

int Keyboard_obj::NUMPAD;

int Keyboard_obj::NUMPAD_0;

int Keyboard_obj::NUMPAD_1;

int Keyboard_obj::NUMPAD_2;

int Keyboard_obj::NUMPAD_3;

int Keyboard_obj::NUMPAD_4;

int Keyboard_obj::NUMPAD_5;

int Keyboard_obj::NUMPAD_6;

int Keyboard_obj::NUMPAD_7;

int Keyboard_obj::NUMPAD_8;

int Keyboard_obj::NUMPAD_9;

int Keyboard_obj::NUMPAD_ADD;

int Keyboard_obj::NUMPAD_DECIMAL;

int Keyboard_obj::NUMPAD_DIVIDE;

int Keyboard_obj::NUMPAD_ENTER;

int Keyboard_obj::NUMPAD_MULTIPLY;

int Keyboard_obj::NUMPAD_SUBTRACT;

int Keyboard_obj::PAGE_DOWN;

int Keyboard_obj::PAGE_UP;

int Keyboard_obj::PERIOD;

int Keyboard_obj::QUOTE;

int Keyboard_obj::RIGHT;

int Keyboard_obj::RIGHTBRACKET;

int Keyboard_obj::SEMICOLON;

int Keyboard_obj::SHIFT;

int Keyboard_obj::SLASH;

int Keyboard_obj::SPACE;

int Keyboard_obj::TAB;

int Keyboard_obj::UP;


Keyboard_obj::Keyboard_obj()
{
}

bool Keyboard_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { outValue = A; return true;  }
		if (HX_FIELD_EQ(inName,"B") ) { outValue = B; return true;  }
		if (HX_FIELD_EQ(inName,"C") ) { outValue = C; return true;  }
		if (HX_FIELD_EQ(inName,"D") ) { outValue = D; return true;  }
		if (HX_FIELD_EQ(inName,"E") ) { outValue = E; return true;  }
		if (HX_FIELD_EQ(inName,"F") ) { outValue = F; return true;  }
		if (HX_FIELD_EQ(inName,"G") ) { outValue = G; return true;  }
		if (HX_FIELD_EQ(inName,"H") ) { outValue = H; return true;  }
		if (HX_FIELD_EQ(inName,"I") ) { outValue = I; return true;  }
		if (HX_FIELD_EQ(inName,"J") ) { outValue = J; return true;  }
		if (HX_FIELD_EQ(inName,"K") ) { outValue = K; return true;  }
		if (HX_FIELD_EQ(inName,"L") ) { outValue = L; return true;  }
		if (HX_FIELD_EQ(inName,"M") ) { outValue = M; return true;  }
		if (HX_FIELD_EQ(inName,"N") ) { outValue = N; return true;  }
		if (HX_FIELD_EQ(inName,"O") ) { outValue = O; return true;  }
		if (HX_FIELD_EQ(inName,"P") ) { outValue = P; return true;  }
		if (HX_FIELD_EQ(inName,"Q") ) { outValue = Q; return true;  }
		if (HX_FIELD_EQ(inName,"R") ) { outValue = R; return true;  }
		if (HX_FIELD_EQ(inName,"S") ) { outValue = S; return true;  }
		if (HX_FIELD_EQ(inName,"T") ) { outValue = T; return true;  }
		if (HX_FIELD_EQ(inName,"U") ) { outValue = U; return true;  }
		if (HX_FIELD_EQ(inName,"V") ) { outValue = V; return true;  }
		if (HX_FIELD_EQ(inName,"W") ) { outValue = W; return true;  }
		if (HX_FIELD_EQ(inName,"X") ) { outValue = X; return true;  }
		if (HX_FIELD_EQ(inName,"Y") ) { outValue = Y; return true;  }
		if (HX_FIELD_EQ(inName,"Z") ) { outValue = Z; return true;  }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"F1") ) { outValue = F1; return true;  }
		if (HX_FIELD_EQ(inName,"F2") ) { outValue = F2; return true;  }
		if (HX_FIELD_EQ(inName,"F3") ) { outValue = F3; return true;  }
		if (HX_FIELD_EQ(inName,"F4") ) { outValue = F4; return true;  }
		if (HX_FIELD_EQ(inName,"F5") ) { outValue = F5; return true;  }
		if (HX_FIELD_EQ(inName,"F6") ) { outValue = F6; return true;  }
		if (HX_FIELD_EQ(inName,"F7") ) { outValue = F7; return true;  }
		if (HX_FIELD_EQ(inName,"F8") ) { outValue = F8; return true;  }
		if (HX_FIELD_EQ(inName,"F9") ) { outValue = F9; return true;  }
		if (HX_FIELD_EQ(inName,"UP") ) { outValue = UP; return true;  }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { outValue = END; return true;  }
		if (HX_FIELD_EQ(inName,"F10") ) { outValue = F10; return true;  }
		if (HX_FIELD_EQ(inName,"F11") ) { outValue = F11; return true;  }
		if (HX_FIELD_EQ(inName,"F12") ) { outValue = F12; return true;  }
		if (HX_FIELD_EQ(inName,"F13") ) { outValue = F13; return true;  }
		if (HX_FIELD_EQ(inName,"F14") ) { outValue = F14; return true;  }
		if (HX_FIELD_EQ(inName,"F15") ) { outValue = F15; return true;  }
		if (HX_FIELD_EQ(inName,"TAB") ) { outValue = TAB; return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { outValue = DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"HOME") ) { outValue = HOME; return true;  }
		if (HX_FIELD_EQ(inName,"LEFT") ) { outValue = LEFT; return true;  }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COMMA") ) { outValue = COMMA; return true;  }
		if (HX_FIELD_EQ(inName,"ENTER") ) { outValue = ENTER; return true;  }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { outValue = EQUAL; return true;  }
		if (HX_FIELD_EQ(inName,"MINUS") ) { outValue = MINUS; return true;  }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { outValue = QUOTE; return true;  }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { outValue = RIGHT; return true;  }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { outValue = SHIFT; return true;  }
		if (HX_FIELD_EQ(inName,"SLASH") ) { outValue = SLASH; return true;  }
		if (HX_FIELD_EQ(inName,"SPACE") ) { outValue = SPACE; return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { outValue = DELETE; return true;  }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { outValue = ESCAPE; return true;  }
		if (HX_FIELD_EQ(inName,"INSERT") ) { outValue = INSERT; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD") ) { outValue = NUMPAD; return true;  }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { outValue = PERIOD; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { outValue = COMMAND; return true;  }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { outValue = CONTROL; return true;  }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { outValue = PAGE_UP; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMBER_0") ) { outValue = NUMBER_0; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_1") ) { outValue = NUMBER_1; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_2") ) { outValue = NUMBER_2; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_3") ) { outValue = NUMBER_3; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_4") ) { outValue = NUMBER_4; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_5") ) { outValue = NUMBER_5; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_6") ) { outValue = NUMBER_6; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_7") ) { outValue = NUMBER_7; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_8") ) { outValue = NUMBER_8; return true;  }
		if (HX_FIELD_EQ(inName,"NUMBER_9") ) { outValue = NUMBER_9; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { outValue = NUMPAD_0; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { outValue = NUMPAD_1; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { outValue = NUMPAD_2; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { outValue = NUMPAD_3; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { outValue = NUMPAD_4; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { outValue = NUMPAD_5; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { outValue = NUMPAD_6; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { outValue = NUMPAD_7; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { outValue = NUMPAD_8; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { outValue = NUMPAD_9; return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALTERNATE") ) { outValue = ALTERNATE; return true;  }
		if (HX_FIELD_EQ(inName,"BACKQUOTE") ) { outValue = BACKQUOTE; return true;  }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { outValue = BACKSLASH; return true;  }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { outValue = BACKSPACE; return true;  }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { outValue = CAPS_LOCK; return true;  }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { outValue = PAGE_DOWN; return true;  }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { outValue = SEMICOLON; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { outValue = NUMPAD_ADD; return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LEFTBRACKET") ) { outValue = LEFTBRACKET; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { outValue = NUMPAD_ENTER; return true;  }
		if (HX_FIELD_EQ(inName,"RIGHTBRACKET") ) { outValue = RIGHTBRACKET; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { outValue = NUMPAD_DIVIDE; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { outValue = NUMPAD_DECIMAL; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { outValue = NUMPAD_MULTIPLY; return true;  }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { outValue = NUMPAD_SUBTRACT; return true;  }
	}
	return false;
}

bool Keyboard_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { A=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"B") ) { B=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"C") ) { C=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"D") ) { D=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"E") ) { E=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F") ) { F=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"G") ) { G=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"H") ) { H=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"I") ) { I=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"J") ) { J=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"K") ) { K=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"L") ) { L=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"M") ) { M=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"N") ) { N=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"O") ) { O=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"P") ) { P=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"Q") ) { Q=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"R") ) { R=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"S") ) { S=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"T") ) { T=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"U") ) { U=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"V") ) { V=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"W") ) { W=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"X") ) { X=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"Z") ) { Z=ioValue.Cast< int >(); return true; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"F1") ) { F1=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F2") ) { F2=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F3") ) { F3=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F4") ) { F4=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F5") ) { F5=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F6") ) { F6=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F7") ) { F7=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F8") ) { F8=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F9") ) { F9=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"UP") ) { UP=ioValue.Cast< int >(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"END") ) { END=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F10") ) { F10=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F11") ) { F11=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F12") ) { F12=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F13") ) { F13=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F14") ) { F14=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"F15") ) { F15=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"TAB") ) { TAB=ioValue.Cast< int >(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=ioValue.Cast< int >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"COMMA") ) { COMMA=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { ENTER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"MINUS") ) { MINUS=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"QUOTE") ) { QUOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { SHIFT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SLASH") ) { SLASH=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { SPACE=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { DELETE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { ESCAPE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { INSERT=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD") ) { NUMPAD=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PERIOD") ) { PERIOD=ioValue.Cast< int >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { COMMAND=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { CONTROL=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { PAGE_UP=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMBER_0") ) { NUMBER_0=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_1") ) { NUMBER_1=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_2") ) { NUMBER_2=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_3") ) { NUMBER_3=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_4") ) { NUMBER_4=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_5") ) { NUMBER_5=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_6") ) { NUMBER_6=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_7") ) { NUMBER_7=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_8") ) { NUMBER_8=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMBER_9") ) { NUMBER_9=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { NUMPAD_0=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { NUMPAD_1=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { NUMPAD_2=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { NUMPAD_3=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { NUMPAD_4=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { NUMPAD_5=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { NUMPAD_6=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { NUMPAD_7=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { NUMPAD_8=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { NUMPAD_9=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ALTERNATE") ) { ALTERNATE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BACKQUOTE") ) { BACKQUOTE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BACKSLASH") ) { BACKSLASH=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { BACKSPACE=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { CAPS_LOCK=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { PAGE_DOWN=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"SEMICOLON") ) { SEMICOLON=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { NUMPAD_ADD=ioValue.Cast< int >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"LEFTBRACKET") ) { LEFTBRACKET=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { NUMPAD_ENTER=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"RIGHTBRACKET") ) { RIGHTBRACKET=ioValue.Cast< int >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { NUMPAD_DIVIDE=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { NUMPAD_DECIMAL=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { NUMPAD_MULTIPLY=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { NUMPAD_SUBTRACT=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Keyboard_obj::A,HX_HCSTRING("A","\x41","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::B,HX_HCSTRING("B","\x42","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::C,HX_HCSTRING("C","\x43","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::D,HX_HCSTRING("D","\x44","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::E,HX_HCSTRING("E","\x45","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F,HX_HCSTRING("F","\x46","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::G,HX_HCSTRING("G","\x47","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::H,HX_HCSTRING("H","\x48","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::I,HX_HCSTRING("I","\x49","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::J,HX_HCSTRING("J","\x4a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::K,HX_HCSTRING("K","\x4b","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::L,HX_HCSTRING("L","\x4c","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::M,HX_HCSTRING("M","\x4d","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::N,HX_HCSTRING("N","\x4e","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::O,HX_HCSTRING("O","\x4f","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::P,HX_HCSTRING("P","\x50","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Q,HX_HCSTRING("Q","\x51","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::R,HX_HCSTRING("R","\x52","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::S,HX_HCSTRING("S","\x53","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::T,HX_HCSTRING("T","\x54","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::U,HX_HCSTRING("U","\x55","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::V,HX_HCSTRING("V","\x56","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::W,HX_HCSTRING("W","\x57","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::X,HX_HCSTRING("X","\x58","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Y,HX_HCSTRING("Y","\x59","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::Z,HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::ALTERNATE,HX_HCSTRING("ALTERNATE","\x1a","\x39","\x8c","\x30")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKQUOTE,HX_HCSTRING("BACKQUOTE","\x95","\x8b","\xce","\xa2")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKSLASH,HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")},
	{hx::fsInt,(void *) &Keyboard_obj::BACKSPACE,HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")},
	{hx::fsInt,(void *) &Keyboard_obj::CAPS_LOCK,HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce")},
	{hx::fsInt,(void *) &Keyboard_obj::COMMA,HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")},
	{hx::fsInt,(void *) &Keyboard_obj::COMMAND,HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01")},
	{hx::fsInt,(void *) &Keyboard_obj::CONTROL,HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")},
	{hx::fsInt,(void *) &Keyboard_obj::DELETE,HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")},
	{hx::fsInt,(void *) &Keyboard_obj::DOWN,HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")},
	{hx::fsInt,(void *) &Keyboard_obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::ENTER,HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")},
	{hx::fsInt,(void *) &Keyboard_obj::EQUAL,HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(void *) &Keyboard_obj::ESCAPE,HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")},
	{hx::fsInt,(void *) &Keyboard_obj::F1,HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F2,HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F3,HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F4,HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F5,HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F6,HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F7,HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F8,HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F9,HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F10,HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F11,HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F12,HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F13,HX_HCSTRING("F13","\xa8","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F14,HX_HCSTRING("F14","\xa9","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::F15,HX_HCSTRING("F15","\xaa","\x48","\x35","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::HOME,HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")},
	{hx::fsInt,(void *) &Keyboard_obj::INSERT,HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50")},
	{hx::fsInt,(void *) &Keyboard_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsInt,(void *) &Keyboard_obj::LEFTBRACKET,HX_HCSTRING("LEFTBRACKET","\xe1","\xa8","\x04","\xa4")},
	{hx::fsInt,(void *) &Keyboard_obj::MINUS,HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_0,HX_HCSTRING("NUMBER_0","\xfa","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_1,HX_HCSTRING("NUMBER_1","\xfb","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_2,HX_HCSTRING("NUMBER_2","\xfc","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_3,HX_HCSTRING("NUMBER_3","\xfd","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_4,HX_HCSTRING("NUMBER_4","\xfe","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_5,HX_HCSTRING("NUMBER_5","\xff","\x89","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_6,HX_HCSTRING("NUMBER_6","\x00","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_7,HX_HCSTRING("NUMBER_7","\x01","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_8,HX_HCSTRING("NUMBER_8","\x02","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMBER_9,HX_HCSTRING("NUMBER_9","\x03","\x8a","\xc6","\x33")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD,HX_HCSTRING("NUMPAD","\xcd","\xce","\x07","\x54")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_0,HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_1,HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_2,HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_3,HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_4,HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_5,HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_6,HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_7,HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_8,HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_9,HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_ADD,HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_DECIMAL,HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_DIVIDE,HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_ENTER,HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_MULTIPLY,HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96")},
	{hx::fsInt,(void *) &Keyboard_obj::NUMPAD_SUBTRACT,HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4")},
	{hx::fsInt,(void *) &Keyboard_obj::PAGE_DOWN,HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70")},
	{hx::fsInt,(void *) &Keyboard_obj::PAGE_UP,HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b")},
	{hx::fsInt,(void *) &Keyboard_obj::PERIOD,HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")},
	{hx::fsInt,(void *) &Keyboard_obj::QUOTE,HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")},
	{hx::fsInt,(void *) &Keyboard_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsInt,(void *) &Keyboard_obj::RIGHTBRACKET,HX_HCSTRING("RIGHTBRACKET","\xcc","\x45","\x32","\x57")},
	{hx::fsInt,(void *) &Keyboard_obj::SEMICOLON,HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")},
	{hx::fsInt,(void *) &Keyboard_obj::SHIFT,HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")},
	{hx::fsInt,(void *) &Keyboard_obj::SLASH,HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")},
	{hx::fsInt,(void *) &Keyboard_obj::SPACE,HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")},
	{hx::fsInt,(void *) &Keyboard_obj::TAB,HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")},
	{hx::fsInt,(void *) &Keyboard_obj::UP,HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_MARK_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_MARK_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_MARK_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_MARK_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_MARK_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_MARK_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_MARK_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_MARK_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_MARK_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_MARK_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_MARK_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_MARK_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_MARK_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_MARK_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_MARK_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_MARK_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_MARK_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_MARK_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_MARK_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_MARK_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Keyboard_obj::UP,"UP");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Keyboard_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ALTERNATE,"ALTERNATE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKQUOTE,"BACKQUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::EQUAL,"EQUAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::LEFTBRACKET,"LEFTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_0,"NUMBER_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_1,"NUMBER_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_2,"NUMBER_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_3,"NUMBER_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_4,"NUMBER_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_5,"NUMBER_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_6,"NUMBER_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_7,"NUMBER_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_8,"NUMBER_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMBER_9,"NUMBER_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD,"NUMPAD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::RIGHTBRACKET,"RIGHTBRACKET");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Keyboard_obj::UP,"UP");
};

#endif

hx::Class Keyboard_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("ALTERNATE","\x1a","\x39","\x8c","\x30"),
	HX_HCSTRING("BACKQUOTE","\x95","\x8b","\xce","\xa2"),
	HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("CAPS_LOCK","\x09","\x04","\xdb","\xce"),
	HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),
	HX_HCSTRING("COMMAND","\x2b","\x45","\x41","\x01"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("F13","\xa8","\x48","\x35","\x00"),
	HX_HCSTRING("F14","\xa9","\x48","\x35","\x00"),
	HX_HCSTRING("F15","\xaa","\x48","\x35","\x00"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("INSERT","\x39","\xef","\x5f","\x50"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("LEFTBRACKET","\xe1","\xa8","\x04","\xa4"),
	HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),
	HX_HCSTRING("NUMBER_0","\xfa","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_1","\xfb","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_2","\xfc","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_3","\xfd","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_4","\xfe","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_5","\xff","\x89","\xc6","\x33"),
	HX_HCSTRING("NUMBER_6","\x00","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_7","\x01","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_8","\x02","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMBER_9","\x03","\x8a","\xc6","\x33"),
	HX_HCSTRING("NUMPAD","\xcd","\xce","\x07","\x54"),
	HX_HCSTRING("NUMPAD_0","\xfe","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_1","\xff","\x2e","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_2","\x00","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_3","\x01","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_4","\x02","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_5","\x03","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_6","\x04","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_7","\x05","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_8","\x06","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_9","\x07","\x2f","\xb3","\x40"),
	HX_HCSTRING("NUMPAD_ADD","\x4f","\x8c","\x28","\x37"),
	HX_HCSTRING("NUMPAD_DECIMAL","\xbf","\xc5","\x36","\x01"),
	HX_HCSTRING("NUMPAD_DIVIDE","\xeb","\x41","\x1f","\x90"),
	HX_HCSTRING("NUMPAD_ENTER","\xc6","\x52","\xe2","\x0f"),
	HX_HCSTRING("NUMPAD_MULTIPLY","\x16","\xd9","\xd8","\x96"),
	HX_HCSTRING("NUMPAD_SUBTRACT","\x06","\x6c","\x5d","\xf4"),
	HX_HCSTRING("PAGE_DOWN","\x92","\x7b","\x93","\x70"),
	HX_HCSTRING("PAGE_UP","\x8b","\xd9","\x3e","\x0b"),
	HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),
	HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("RIGHTBRACKET","\xcc","\x45","\x32","\x57"),
	HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	::String(null()) };

void Keyboard_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("nme.ui.Keyboard","\xf9","\xe0","\xb0","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Keyboard_obj::__GetStatic;
	__mClass->mSetStaticField = &Keyboard_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Keyboard_obj >;
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

void Keyboard_obj::__boot()
{
	A= (int)65;
	B= (int)66;
	C= (int)67;
	D= (int)68;
	E= (int)69;
	F= (int)70;
	G= (int)71;
	H= (int)72;
	I= (int)73;
	J= (int)74;
	K= (int)75;
	L= (int)76;
	M= (int)77;
	N= (int)78;
	O= (int)79;
	P= (int)80;
	Q= (int)81;
	R= (int)82;
	S= (int)83;
	T= (int)84;
	U= (int)85;
	V= (int)86;
	W= (int)87;
	X= (int)88;
	Y= (int)89;
	Z= (int)90;
	ALTERNATE= (int)18;
	BACKQUOTE= (int)192;
	BACKSLASH= (int)220;
	BACKSPACE= (int)8;
	CAPS_LOCK= (int)20;
	COMMA= (int)188;
	COMMAND= (int)15;
	CONTROL= (int)17;
	DELETE= (int)46;
	DOWN= (int)40;
	END= (int)35;
	ENTER= (int)13;
	EQUAL= (int)187;
	ESCAPE= (int)27;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	HOME= (int)36;
	INSERT= (int)45;
	LEFT= (int)37;
	LEFTBRACKET= (int)219;
	MINUS= (int)189;
	NUMBER_0= (int)48;
	NUMBER_1= (int)49;
	NUMBER_2= (int)50;
	NUMBER_3= (int)51;
	NUMBER_4= (int)52;
	NUMBER_5= (int)53;
	NUMBER_6= (int)54;
	NUMBER_7= (int)55;
	NUMBER_8= (int)56;
	NUMBER_9= (int)57;
	NUMPAD= (int)21;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_ADD= (int)107;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	NUMPAD_ENTER= (int)108;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_SUBTRACT= (int)109;
	PAGE_DOWN= (int)34;
	PAGE_UP= (int)33;
	PERIOD= (int)190;
	QUOTE= (int)222;
	RIGHT= (int)39;
	RIGHTBRACKET= (int)221;
	SEMICOLON= (int)186;
	SHIFT= (int)16;
	SLASH= (int)191;
	SPACE= (int)32;
	TAB= (int)9;
	UP= (int)38;
}

} // end namespace nme
} // end namespace ui
