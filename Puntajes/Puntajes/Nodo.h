#pragma once
#include <string>
using namespace std;

class Nodo
{
private:
	string inf;
	Nodo* sig;
public:
	Nodo();
	Nodo(Nodo*, string);
	~Nodo();
	string getInf();
	Nodo* getSig();
	void setInf(string);
	void setSig(Nodo*);
};

