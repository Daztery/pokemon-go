#pragma once
using namespace System::Drawing;
class CJuego
{
private: 
	int x;
	int y;
	Rectangle position;
	
public:
	CJuego();
	~CJuego();
	int getx();
	int gety();
	Rectangle getposition();

};

//imagino que de aca podemos hacer  la herencia y polimorfismo xd