#pragma once
using namespace System::Drawing;
using namespace System;
class CPokeparada
{
private:
	int x;
	int y;
	int altoPokeparada;
	int anchoPokeparada;
	Rectangle posicion;
public:
	CPokeparada();
	CPokeparada(int x, int y);
	~CPokeparada();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	int getX();
	int getY();/*
	void setX(int x);
	void setY(int y);*/
	Rectangle getPosicion();
};

