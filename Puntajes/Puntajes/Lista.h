#pragma once
#include "Nodo.h"
#include <fstream>

class Lista
{
private:
	Nodo* primero;
public:
	Lista();
	~Lista();
	void agregar(string);
	void leer(string);
	void guardar(fstream&);
	string toString();
	bool isWord(string);
	int puntaje(string);
};

