#include "Pokeparada.h"


CPokeparada::CPokeparada()
{

	
}


CPokeparada::~CPokeparada()
{
}
CPokeparada::CPokeparada(int x ,int y)
{
	this->x = x;
	this->y = y;
	anchoPokeparada = 225;
	altoPokeparada = 225;

}
void CPokeparada::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){
	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoPokeparada, altoPokeparada);
	this->posicion = Rectangle(x, y ,anchoPokeparada /5, altoPokeparada / 5);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int	 CPokeparada::getX(){ return x; }
int	 CPokeparada::getY(){ return y; }
Rectangle CPokeparada::getPosicion(){
	return this->posicion;
}