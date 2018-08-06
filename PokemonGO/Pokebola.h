#pragma once
using namespace System::Drawing;
class CPokebola
{
private:
	int x;
	int y;
	int dx;
	int dy;
	int altoPokebola;
	int anchoPokebola;
	Rectangle posicion;
public:
	CPokebola();
	~CPokebola();
	CPokebola(int x,int y);
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	void Mover();
	int getX();
	int getY();
	void setx(int x);
	void sety(int y);
	Rectangle getPosicion();
};

