#pragma once
using namespace System::Drawing;

enum Direcciones { Ninguna, Arriba, Abajo, Izquierda, Derecha };

#define FILAS 30
#define COLUMNAS 30

class CPersonaje
{
	int x;
	int y;
	int dx;
	int dy;
	int altoP;
	int anchoP;
	int indiceX;
	int indiceY;
	int monedas;

	Direcciones ultima;
	Rectangle posicion;

	int huevo;
	int pokebolas;
	int pociones;
	int revivir;
	int caramelos;
	int medallas;

public:
	Direcciones direccion;
	CPersonaje();
	CPersonaje(int x, int y);
	~CPersonaje();

	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	void mover();

	int getHuevo();
	int getMonedas();
	int getPokebolas();
	int getPociones();
	int getRevivir();
	int getCaramelos();
	int getMedallas();

	void setHuevo(int huevo);
	void setPokebolas(int pokebolas);
	void setPociones(int pociones);
	void setRevivir(int revivir);
	void setCaremelos(int caramelos);
	void setMonedas(int monedas);
	void setMedallas(int medallas);

	int getX();
	int getY();
	void setX(int x);
	void setY( int y);
	Rectangle getPosicion();
};

