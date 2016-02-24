#include "pila.hpp"

Pila_t::Pila_t(void):
pila_(){}

Pila_t::~Pila_t(void)
{}

void Pila_t::push(TDATO dato)
{
	Nodo_t* nodo = new Nodo_t(dato);

	pila_.insertar_final(nodo); 
}

TDATO Pila_t::pop(void)
{
	if(!vacio())
	{
		Nodo_t* aux = pila_.extraer_final();

		return aux->get_dato();
	}

	else
	{
		cout<<"La pila esta vacia"<<endl;
	}
}

void Pila_t::vaciar(void)
{
	while(!vacio())
	{
		pila_.extraer_final();
	}
}

bool Pila_t::vacio(void)
{
	return pila_.vacio();
}