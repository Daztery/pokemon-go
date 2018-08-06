#include "CPersonaje.h"

CPersonaje::CPersonaje()
{

}

CPersonaje::~CPersonaje()
{
}

CPersonaje::CPersonaje(int x, int y){
	this->x = x;
	this->y = y;
	dx = 0;//se inicializa siempre
	dy = 0;//se inicializa siempre
	direccion = Direcciones::Ninguna;
	ultima = Direcciones::Abajo;
	anchoP = 68;
	altoP = 72;
	indiceX = indiceY = 0;
	this->pokebolas = 0;//se inicializa siempre
	this->pociones = 0;//se inicializa siempre
	this->revivir = 0;//se inicializa siempre
	this->caramelos = 0;
	this->monedas = 0;
	this->medallas = 0;
	this->huevo = 0;
}

int  CPersonaje::getX()
{
	return this->x;
}
int  CPersonaje::getY()
{
	return this->y;
}
void  CPersonaje::setX(int x)
{
	this->x = x;
}
void  CPersonaje::setY(int y)
{
	this->y = y;
}
Rectangle  CPersonaje::getPosicion()
{
	return this->posicion;
}
void CPersonaje::dibujar(BufferedGraphics ^buffer, Bitmap ^bmp){

	bmp->MakeTransparent(bmp->GetPixel(1, 1));
	Rectangle porcionaUsar = Rectangle(indiceX*anchoP, indiceY*altoP, anchoP, altoP);
	this->posicion = Rectangle(x, y, anchoP / 1.35, altoP / 1.35);
	buffer->Graphics->DrawImage(bmp, this->posicion, porcionaUsar, GraphicsUnit::Pixel);
}


void CPersonaje::mover(){

	int d = 3;

	dx = 0;
	dy = 0;

	switch (direccion)
	{
	case Direcciones::Abajo:
		indiceY = 0;
		if (indiceX >= 0 && indiceX < 3)
			indiceX++;
		else
			indiceX = 1;

		dx = 0;
		dy = d;
		ultima = Abajo;
		break;
	case Direcciones::Arriba:
		indiceY = 3;
		if (indiceX >= 0 && indiceX < 3)
			indiceX++;
		else
			indiceX = 1;
		dx = 0;
		dy = d*-1;
		ultima = Arriba;
		break;
	case Direcciones::Derecha:
		indiceY = 2;
		if (indiceX >= 0 && indiceX < 3)
			indiceX++;
		else
			indiceX = 1;

		dx = d;
		dy = 0;
		ultima = Derecha;
		break;
	case Direcciones::Izquierda:
		indiceY = 1;
		if (indiceX >= 0 && indiceX < 3)
			indiceX++;
		else
			indiceX = 1;

		dx = d*-1;
		dy = 0;
		ultima = Izquierda;

		break;
	}
	x += dx;
	y += dy;

}

int CPersonaje::getPokebolas()
{ 
	return this->pokebolas; 
}
int CPersonaje::getPociones()
{ 
	return this->pociones; 
}
int CPersonaje::getRevivir()
{ 
	return this->revivir; 
}
int CPersonaje::getCaramelos()
{
	return this->caramelos;
}
void CPersonaje::setPokebolas(int pokebolas)
{ 
	this->pokebolas = this->pokebolas + pokebolas;
}
void CPersonaje::setPociones(int pociones)
{ this->pociones = this->pociones + pociones;
}
void CPersonaje::setRevivir(int revivir)
{
	this->revivir = this->revivir+ revivir; 
}
void CPersonaje::setCaremelos(int caramelos)
{
	this->caramelos = this->caramelos+caramelos;
}

int CPersonaje::getMonedas()
{ 
	return this->monedas; 
}
void CPersonaje::setMonedas(int monedas)
{
	this->monedas = this->monedas + monedas;
}

int CPersonaje::getMedallas(){

	return this->medallas;
}
void CPersonaje::setMedallas(int medallas){ 

	this->medallas = this->medallas + medallas; 
}

int CPersonaje::getHuevo(){ return huevo; }
void CPersonaje::setHuevo(int huevo){
	this->huevo = this->huevo + huevo;
}