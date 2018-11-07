#include "Lista.h"
#include <fstream>
#include <sstream>

Lista::Lista():primero(nullptr)
{
}


Lista::~Lista()
{

}

void Lista::agregar(string i)
{
	primero = new Nodo(primero, i);
}

void Lista::leer()
{
	fstream s("palabras.txt", ios::in);
	string n;
	while (!s.eof())
	{
		getline(s, n, '\t');
		agregar(n);
	}
	s.close();
}

void Lista::guardar()
{
	Nodo* aux = primero;
	fstream s("palabras.txt", ios::out);
	string n;
	while (aux)
	{
		s << aux->getInf() + '/';
		aux = aux->getSig();
	}
	s.close();
}

string Lista::toString()
{
	stringstream s;
	Nodo* aux = primero;
	while (aux)
	{
		s << aux->getInf() + '\n';
		aux = aux->getSig();
	}
	return s.str();
}

bool Lista::isWord(string i)
{
	Nodo* aux = primero;
	while (aux)
	{
		if (aux->getInf() == i);
		{
			return true;
		}
		aux = aux->getSig();
	}
	return false;
}

int Lista::puntaje(string p)
{
	int valor = 0;
	for (size_t i = 0; i < p.length(); i++)
	{
		switch (p[i])
		{
		case 'A': {} break;
		case 'B': {}break;
		case 'C': {}break;
		case 'D': {}break;
		case 'E': {}break;
		case 'F': {}break;
		case 'G': {}break;
		case 'H': {}break; 
		case 'I': {}break;
		case 'J': {}break;
		case 'L': {}break;
		case 'K': {}break;
		case 'M': {}break;
		case 'N': {}break;
		case 'Ñ': {}break;
		case 'O': {}break;
		case 'P': {}break;
		case 'Q': {}break;
		case 'R': {}break;
		case 'S': {}break;
		case 'T': {}break;
		case 'U': {} break;
		case 'V': {}break;
		case 'W': {}break;
		case 'X': {}break;
		case 'Y': {}break;
		case 'Z': {}break;
		default: { 
			if (p[i + 1] == 'L')
			{
				valor = +2;
				i++;
			}
			else
			{

			}
		}
			
		}
	}

	return 0;
}
