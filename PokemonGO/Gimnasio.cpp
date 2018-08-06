#include "Gimnasio.h"


CGimnasio::CGimnasio()
{
}


CGimnasio::~CGimnasio()
{
}
CGimnasio::CGimnasio(int x , int y)
{
	this->x = x;
	this->y = y;

	anchoGimnasio = 225;
	altoGimnasio = 225;
}
void CGimnasio::dibujar(BufferedGraphics ^buffer,Bitmap ^bmp){

	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoGimnasio, altoGimnasio);
	this->posicion = Rectangle(x, y, anchoGimnasio / 8, altoGimnasio / 8);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int	 CGimnasio::getX(){ return x; }
int	 CGimnasio::getY(){ return y; }
Rectangle CGimnasio::getPosicion(){
	return this->posicion;
}
