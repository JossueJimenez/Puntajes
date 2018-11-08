#include "Usuario.h"
#include <fstream>
using namespace std;

Usuario::Usuario():l(new Lista()), p(0)
{
}


Usuario::~Usuario()
{
	delete l;
}

void Usuario::agregarPalabra(string i)
{
	l->agregar(i);
}

void Usuario::aumentarPuntaje(int pu)
{
	this->p = p + pu;
}

void Usuario::guardar(string j)
{
	fstream s;
	s.open(j + ".txt", ios::out);
	s << p << '\n';
	l->guardar(s);
}

void Usuario::leer(string j)
{
	ifstream s(j + ".txt");
	string n;
	if (!s.eof())
	{
		getline(s, n, '\n');
		p = stoi(n);
	}
	s.close();
	l->leer(j);
}

int Usuario::getPuntaje()
{
	return p;
}

