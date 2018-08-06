#pragma once
using namespace System::Drawing;
using namespace System;
class CMonedas
{
	int x;
	int y;
	int alto;
	int ancho;
	Rectangle posicion;
public:
	CMonedas();
	~CMonedas();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	int getX();
	int getY();
	void setX(int x);
	void setY(int y);
	CMonedas(int x,int y);
	Rectangle getPosicion();
};

