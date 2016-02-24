#include "pila.hpp"

int main (void)
{
	Pila_t A;

	cout << "Introducimos los números del 0 al 9" << endl;

	for(int i=0;i<10;i++)
	{
		A.push(i);
	}

	cout << "Imprimos el contenido de la pila" << endl;

	for(int i=0;i<10;i++)
	{
		cout<< A.pop()<< endl;
	}

	cout << "Introducimos los números del 0 al 9" << endl;

	for(int i=0;i<10;i++)
	{
		A.push(i);
	}


	cout << "vaciamos la pila" << endl;

	A.vaciar();

	cout << "comprobamos que no halla ningún elemento en la pila" << endl;

	A.pop();

}