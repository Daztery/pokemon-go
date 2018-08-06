#include "Cuadrado.h"


CCuadrado::CCuadrado()
{
}


CCuadrado::~CCuadrado()
{
}
CCuadrado::CCuadrado(int x,int y)
{
	this->x = x;
	this->y = y;
	anchoCuadrado = 120;
	altoCuadrado = 120;
}
void CCuadrado::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){
	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoCuadrado, altoCuadrado);
	this->posicion = Rectangle(x, y, anchoCuadrado, altoCuadrado);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
void CCuadrado::dibujarPorPosicion(BufferedGraphics ^buffer, Bitmap ^bmp, int x, int y){
	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoCuadrado, altoCuadrado);
	this->posicion = Rectangle(x, y, anchoCuadrado, altoCuadrado);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int	 CCuadrado::getX(){ return x; }
int	 CCuadrado::getY(){ return y; }
Rectangle CCuadrado::getPosicion(){
	return this->posicion;
}