#include "cola.hpp"

int main(void)
{

		Cola_t A;

	cout << "Introducimos los números del 0 al 9" << endl;

	for(int i=0;i<10;i++)
	{
		A.push(i);
	}

	cout << "Imprimos el contenido de la cola" << endl;

	for(int i=0;i<10;i++)
	{
		cout<< A.pop()<< endl;
	}

	cout << "Introducimos los números del 0 al 9" << endl;

	for(int i=0;i<10;i++)
	{
		A.push(i);
	}


	cout << "vaciamos la cola" << endl;

	A.vaciar();

	cout << "comprobamos que no halla ningún elemento en la cola" << endl;

	A.pop();
	
}