#pragma once
using namespace System::Drawing;

class CMapa
{
	int x;
	int y;
	int dx;
	int dy;

public:
	CMapa();
	CMapa(int x, int y);
	~CMapa();
	void dibujar(BufferedGraphics ^buffer, Bitmap ^bmp);
	int getX();
	int getY();
};

