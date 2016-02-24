#include "vector_t.hpp"

int main(void)
{
	Vector_t A(10); //Declaramos un objeto vector llamado A

	cout << "Introducimos los numeros del 0 al 9 en el vector" << endl;

		for(int i=0; i<10;i++)
		{
			A[i]=i;
		}

	cout << "Imprimimos los elementos del vector" << endl;

		A.imprimir();
		

		return  0;
	
}