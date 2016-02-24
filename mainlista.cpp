#include "lista.hpp"

int main(void){

Lista_t A;

	cout << "Introducimos los números del 4 a 7 por el final." << endl;

	for(int i = 4; i<=7 ;i++){

		Nodo_t* nod = new Nodo_t(i);

		A.insertar_final(nod);

	}

	cout << "Imprimimos la lista :" << endl;

	A.write(cout);

	cout << endl;

	cout << "Introducimos los números del 3 al 0 por el principio." << endl;


	for(int i = 3; i>=0 ;i--){

		Nodo_t* nod = new Nodo_t(i);

		A.insertar_principio(nod);

	}

	cout << "Imprimimos la lista :" << endl;

	A.write(cout);

	cout << endl;

	cout << "Extraemos el primer elemento de la lista (0):" << endl;

	Nodo_t* prim = A.extraer_principio();

	cout << prim -> get_dato() << endl;

	cout << "Extraemos el último elemento de la lista (7):" << endl;

	Nodo_t* ult = A.extraer_final();

	cout << ult -> get_dato()<< endl;

	cout << "Extraemos el elemento inicial de la lista (1):" << endl;

	Nodo_t* in = A.extraer_principio();

	cout << in -> get_dato() << endl;

	return 0;

	
	
}