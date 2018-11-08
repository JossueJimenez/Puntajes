#pragma once
#include <iostream>
#include "Usuario.h"

int main() {
	Lista* palabras = new Lista();
	palabras->leer("palabras");
	string palabra;
	bool op;
	Usuario* u0 = new Usuario();
	Usuario* u1 = new Usuario();
	do
	{
		cout << "Jugador 1:\n";
		cout << "Digite la palabra:\n";
		getline(cin, palabra);
		if (palabras->isWord(palabra))
		{
			u0->agregarPalabra(palabra);
			u0->aumentarPuntaje(palabras->puntaje(palabra));
			cout << "El puntaje del jugador 1 es: " << u0->getPuntaje() << '\n';
		}
		else
		{
			do
			{
				cout << "Esta palabra no existe en nuestro diccionario\nDigite otra palabra\n";
				getline(cin, palabra);
			} while (!palabras->isWord(palabra));
			u0->agregarPalabra(palabra);
			u0->aumentarPuntaje(palabras->puntaje(palabra));
			cout << "El puntaje del jugador 1 es: " << u0->getPuntaje()<<'\n';
		}
		system("pause");
		system("cls");
		cout << "Jugador 2:\n";
		cout << "Digite la palabra:\n";
		getline(cin, palabra);
		if (palabras->isWord(palabra))
		{
			u1->agregarPalabra(palabra);
			u1->aumentarPuntaje(palabras->puntaje(palabra));
			cout << "El puntaje del jugador 2 es: " << u1->getPuntaje() << '\n';
		}
		else
		{
			do
			{
				cout << "Esta palabra no existe en nuestro diccionario\nDigite otra palabra\n";
				getline(cin, palabra);
			} while (!palabras->isWord(palabra));
			u1->agregarPalabra(palabra);
			u1->aumentarPuntaje(palabras->puntaje(palabra));
			cout << "El puntaje del jugador 2 es: " << u1->getPuntaje() << '\n';
		}
		system("pause");
		system("cls");
		cout << "Quieres seguir jugando?\n 1 -> si\t0 -> no\n";
		//si ingresa 0 es no 
		//si ingresa 1 es si 
		cin >> op;
	} while (op);
	u0->guardar("jugador1");
	u1->guardar("jugador2");
	delete palabras;
	delete u0;
	delete u1;
	return 0;
}