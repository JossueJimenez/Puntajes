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

void Lista::leer(string l)
{
	fstream s(l + ".txt", ios::in);
	string n;
	while (!s.eof())
	{
		getline(s, n, '/');
		agregar(n);
	}
	s.close();
}

void Lista::guardar(fstream& s)
{
	Nodo* aux = primero;
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
		if (aux->getInf() == i)
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
		case 'A': {valor += 1; } break;
		case 'B': {valor += 3; }break;
		case 'C': {
			valor += 3;
			if (p[i + 1] == 'H')
			{
				valor += 2;
				i++;
			}
		} break;
		case 'D': {valor += 2; }break;
		case 'E': {valor += 2; }break;
		case 'F': {valor += 4; }break;
		case 'G': {valor += 2; }break;
		case 'H': {valor += 4; }break;
		case 'I': {valor += 1; }break;
		case 'J': {valor += 8; }break;
		case 'L': {
			valor += 6;
			if (p[i + 1] == 'L')
			{
				valor += 2;
				i++;
			}
		}break;
		case 'K': {valor += 5; }break;
		case 'M': {valor += 3; }break;
		case 'N': {valor += 2; }break;
		case 'Ñ': {valor += 8; }break;
		case 'O': {valor += 1; }break;
		case 'P': {valor += 3; }break;
		case 'Q': {valor += 5; }break;
		case 'R': {
			valor += 1;
			if (p[i + 1] == 'R')
			{
				valor += 7;
				i++;
			}
		}break;
		case 'S': {valor += 1; }break;
		case 'T': {valor += 1; }break;
		case 'U': {valor += 1; } break;
		case 'V': {valor += 4; }break;
		case 'W': {valor += 8; }break;
		case 'X': {valor += 8; }break;
		case 'Y': {valor += 4; }break;
		case 'Z': {valor += 9; }break;
		case 'a': {valor += 1; } break;
		case 'b': {valor += 3; }break;
		case 'c': {
			valor += 3;
			if (p[i + 1] == 'h')
			{
				valor += 2;
				i++;
			}
		} break;
		case 'd': {valor += 2; }break;
		case 'e': {valor += 2; }break;
		case 'f': {valor += 4; }break;
		case 'g': {valor += 2; }break;
		case 'h': {valor += 4; }break;
		case 'i': {valor += 1; }break;
		case 'j': {valor += 8; }break;
		case 'l': {
			valor += 6;
			if (p[i + 1] == 'l')
			{
				valor += 2;
				i++;
			}
		}break;
		case 'k': {valor += 5; }break;
		case 'm': {valor += 3; }break;
		case 'n': {valor += 2; }break;
		case 'ñ': {valor += 8; }break;
		case 'o': {valor += 1; }break;
		case 'p': {valor += 3; }break;
		case 'q': {}break;
		case 'r': {
			valor += 1;
			if (p[i + 1] == 'r')
			{
				valor += 7;
				i++;
			}
		}break;
		case 's': {valor += 1; }break;
		case 't': {valor += 1; }break;
		case 'u': {valor += 1; }break;
		case 'v': {valor += 4; }break;
		case 'w': {valor += 8; }break;
		case 'x': {valor += 8; }break;
		case 'y': {valor += 4; }break;
		case 'z': {valor += 9; }break;
		}
	}

	return valor;
}
