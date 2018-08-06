#include "Monedas.h"


CMonedas::CMonedas()
{
}


CMonedas::~CMonedas()
{
}

CMonedas::CMonedas(int x, int y)
{
	this->x = x;
	this->y = y;
	ancho= 225;
	alto = 225;
}

void CMonedas::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){
	//bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, ancho, alto);
	this->posicion = Rectangle(x, y, ancho / 5, alto / 5);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int	 CMonedas::getX(){ return x; }
int	 CMonedas::getY(){ return y; }
Rectangle CMonedas::getPosicion(){
	return this->posicion;
}
void CMonedas::setX(int x){ this->x = x; }
void CMonedas::setY(int y){ this->y = y; }