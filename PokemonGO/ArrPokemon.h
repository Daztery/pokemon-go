#pragma once
#include "CPokemon.h"
#include <vector>
using namespace std;
class CArrPokemon
{
private:
	vector <CPokemon*> arreglo;
	/*CPokemon *pokemon;*/
public:
	CArrPokemon();
	~CArrPokemon();

	vector <CPokemon*> getArreglo();
	vector <CPokemon*>getPokemonInicial();
	
	void generar(int num);
	void dibujar(BufferedGraphics ^buffer);

	void registrar(CPokemon *pokemon);
	//void evolucionar(CPokemon *pokemon);
	void eiminar(int pos);
	void eliminarTODOS();
};

