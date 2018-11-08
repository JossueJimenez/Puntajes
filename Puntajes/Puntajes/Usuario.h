#pragma once
#include "Lista.h"
class Usuario
{
private:
	Lista* l;
	int p;
public:
	Usuario();
	~Usuario();
	void agregarPalabra(string);
	void aumentarPuntaje(int);
	void guardar(string);
	void leer(string);
	int getPuntaje();
};

