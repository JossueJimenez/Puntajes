#pragma once
#include "Nodo.h"

class Lista
{
private:
	Nodo* primero;
public:
	Lista();
	~Lista();
	void agregar(string);
	void leer();
	void guardar();
	string toString();
	bool isWord(string);
	int puntaje(string);
};

