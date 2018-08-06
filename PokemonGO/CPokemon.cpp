#include "CPokemon.h"

CPokemon::CPokemon()
{

}

CPokemon::~CPokemon()
{
}

CPokemon::CPokemon(int id, int vida, int ataque, int experiencia, int x, int y){

	this->id = id;
	this->vida = vida;
	this->ataque = ataque;
	this->experiencia = experiencia;
	this->x = x;
	this->y = y;
	anchoPok = 96;
	altoPok = 96;
}


int  CPokemon::getX()
{
	return this->x;
}
int  CPokemon::getY()
{
	return this->y;
}
int  CPokemon::getID()
{
	return this->id;
}
int  CPokemon::getVida()
{
	return this->vida;
}
int  CPokemon::getExperiencia()
{
	return this->experiencia;
}
int  CPokemon::getAtaque()
{
	return this->ataque;
}
void  CPokemon::setX(int x)
{
	this->x = x;
}
void  CPokemon::setY(int y)
{
	this->y = y;
}
void CPokemon::setVida(int vida)
{
	this->vida = vida;
}
Rectangle  CPokemon::getPosicion()
{
	return this->posicion;
}
//
//void CPokemon::setID(int value){
//	this->id = value;
//}

void CPokemon::dibujar(BufferedGraphics ^buffer)
{

	Bitmap ^bmp = gcnew Bitmap(id.ToString() + "_front.png");
    bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(0, 0, anchoPok, altoPok);
	this->posicion = Rectangle(x, y, anchoPok / 3, altoPok / 3);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}
