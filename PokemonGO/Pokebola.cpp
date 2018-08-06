#include "Pokebola.h"
#include "MyForm.h"

CPokebola::CPokebola()
{
}


CPokebola::~CPokebola()
{
}


CPokebola::CPokebola(int x, int y)
{
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;
	anchoPokebola = 598;
	altoPokebola = 598;
}
void CPokebola::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){
	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoPokebola, altoPokebola);
	this->posicion = Rectangle(x, y, anchoPokebola /9, altoPokebola / 9);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
int	 CPokebola::getX(){ return x; }
int	 CPokebola::getY(){ return y; }
void CPokebola::setx(int x){  this->x = x; }
void CPokebola::sety(int y){  this->y = y; }
Rectangle CPokebola::getPosicion(){
	return this->posicion;
}

void CPokebola::Mover()
{
	y -= 20;
}
