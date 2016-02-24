#include "nodo.hpp"

Nodo_t::Nodo_t(void):
next_(NULL),
dato_(0){}

Nodo_t::Nodo_t(TDATO dato):
next_(NULL),
dato_(dato){}

Nodo_t::~Nodo_t(){}

Nodo_t* Nodo_t::get_next(void)
{
	return next_;
}

Nodo_t* Nodo_t::get_prev(void)
{
	return prev_;
}

TDATO Nodo_t::get_dato(void)
{
	return dato_;
}

void Nodo_t::set_next(Nodo_t* next)
{
	next_=next;
}

void Nodo_t::set_prev(Nodo_t* prev)
{
	prev_=prev;
}

void Nodo_t::set_dato(TDATO dato)
{
	dato_=dato;
}

void Nodo_t::write(ostream& os){

    os << dato_ << " ";
}