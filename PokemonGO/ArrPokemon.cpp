#include "ArrPokemon.h"
using namespace System;

CArrPokemon::CArrPokemon()
{
}


CArrPokemon::~CArrPokemon()
{
}

vector <CPokemon*> CArrPokemon::getArreglo(){
	return arreglo;
}
void CArrPokemon::generar(int num)
{
	eliminarTODOS();

	Random r;

	for (int i = 0; i < num; i++)
	{
		CPokemon *Nuevo = new CPokemon(r.Next(1, 21), 100, r.Next(1, 100),r.Next(1, 100), r.Next(1, 500), r.Next(1, 500));
		arreglo.push_back(Nuevo);
	}

}

void CArrPokemon::dibujar(BufferedGraphics ^buffer)
{
	for (int i = 0; i < arreglo.size(); i++)
	{
		arreglo[i]->dibujar(buffer);
	}
}

void CArrPokemon::eiminar(int pos){
	arreglo.erase(arreglo.begin()+pos);
}

void CArrPokemon::eliminarTODOS(){
	arreglo.erase(arreglo.begin(), arreglo.begin() + arreglo.size());
}

void CArrPokemon::registrar(CPokemon *pokemon)
{
	arreglo.push_back(pokemon);
}

//void CArrPokemon::evolucionar(CPokemon *pokemon)
//{
//	arreglo.push_back(pokemon);
//}