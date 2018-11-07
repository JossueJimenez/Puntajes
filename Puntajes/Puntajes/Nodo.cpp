#include "Nodo.h"



Nodo::Nodo() :sig(nullptr), inf("")
{
}

Nodo::Nodo(Nodo * s, string i) : sig(s), inf(i)
{
}


Nodo::~Nodo()
{
}

string Nodo::getInf()
{
	return inf;
}

Nodo * Nodo::getSig()
{
	return sig;
}

void Nodo::setInf(string i)
{
	this->inf = i;
}


void Nodo::setSig(Nodo * s)
{
	this->sig = s;
}

