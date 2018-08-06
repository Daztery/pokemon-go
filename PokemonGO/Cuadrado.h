#pragma once
using namespace System::Drawing;
class CCuadrado
{
private:
	int x;
	int y;
	int altoCuadrado;
	int anchoCuadrado;
	Rectangle posicion;//uso esto para poder saber las posiciones del "x" y "y", esta funcion lo hace por mi-> encontrar el ancho y alto ,etc.
	// asi poder hacer la colisión más facil
public:
	CCuadrado();
	CCuadrado(int x, int y);
	~CCuadrado();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	void dibujarPorPosicion(BufferedGraphics ^buffer, Bitmap ^bmp, int x, int y);
	int getX();
	int getY();
	Rectangle getPosicion();
};

