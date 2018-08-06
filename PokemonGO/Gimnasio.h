#pragma once
using namespace System::Drawing;
class CGimnasio
{
private:
	int x;
	int y;
	int altoGimnasio;
	int anchoGimnasio;
	Rectangle posicion;//obtener el cuadrado del sprite 
public:
	CGimnasio();
	CGimnasio(int x,int y);
	~CGimnasio();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	int getX();
	int getY();
	/*void setX(int x);
	void setY(int y);*/
	Rectangle getPosicion();
	
};

