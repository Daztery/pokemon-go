#pragma once
using namespace System::Drawing;

class CPokemon
{
	int x;
	int y;
	int altoPok;
	int anchoPok;
	Rectangle posicion;
	int id;
	int vida;
	int ataque;
	int experiencia;

public:
	CPokemon();
	CPokemon(int id,  int vida, int ataque, int experiencia, int x, int y);
	~CPokemon();
	void dibujar(BufferedGraphics ^buffer);
	int getX();
	int getY();
	int getID();
	int getVida();
	int getExperiencia();
	int getAtaque();
	void setX(int x);
	void setY(int y);
	void setVida(int vida);
	//void setID(int value);
	Rectangle getPosicion();
};

