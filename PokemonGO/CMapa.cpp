#include "CMapa.h"

CMapa::CMapa()
{

}

CMapa::~CMapa()
{
}

CMapa::CMapa(int x, int y){

	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;
}

int  CMapa::getX()
{
	return this->x;
}
int  CMapa::getY()
{
	return this->y;
}


void CMapa::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){

	Rectangle porcionaUsar = Rectangle(0, 0, 512, 512);
	Rectangle aumento = Rectangle(0, 0, 512, 512);
	buffer->Graphics->DrawImage(bmp, aumento, porcionaUsar, GraphicsUnit::Pixel);
}

