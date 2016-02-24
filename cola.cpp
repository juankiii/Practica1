#include "cola.hpp"

Cola_t::Cola_t(void):
Cola_(){}

Cola_t::~Cola_t(void)
{}

void Cola_t::push(TDATO dato)
{
	Nodo_t* nodo = new Nodo_t(dato);

	Cola_.insertar_final(nodo);
}

TDATO Cola_t::pop(void)
{
	if(vacio())
	{
		cerr<<"La cola esta vacia"<<endl;
	}

	else
	{
		Nodo_t* aux = Cola_.extraer_principio();

		return aux->get_dato();

	}
}

bool Cola_t::vacio(void)
{
	return Cola_.vacio();
}

void Cola_t::vaciar(void)
{
	while(!vacio())
	{
		Cola_.extraer_principio();
	}
}