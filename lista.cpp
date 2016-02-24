#include "lista.hpp"

Lista_t::Lista_t(void):
inicio_(NULL),
final_(NULL){}

Lista_t::~Lista_t(void)
{
	while(inicio_!=NULL)
	{
		Nodo_t* aux = inicio_;

		inicio_=inicio_-> get_next();

		delete aux;
	}

}

bool Lista_t::vacio(void)
{
	if(inicio_== NULL)
	{
		return true;
	}

	else return false;
}

void Lista_t::insertar_principio(Nodo_t* n)
{
	if(vacio())
	{
		insertar_vacio(n);
	}

	else
	{
		n->set_next(inicio_);
		inicio_->set_prev(n);
		inicio_= n;
	}
}

Nodo_t* Lista_t::extraer_principio(void)
{
	if(inicio_== final_)
	{
		Nodo_t* aux =  inicio_;
		inicio_= NULL;
		final_= NULL;

		return aux;
	}

	else
	{
		Nodo_t* aux = inicio_;
		inicio_ = inicio_->get_next();
		inicio_->set_prev(NULL);

		return aux;
	}
}


void Lista_t::insertar_final(Nodo_t* n)
{

	if( vacio()){

		insertar_vacio(n);
	}

	else
	{
		final_-> set_next(n);
		n-> set_prev(final_);
		final_ = n;

	}

}


void Lista_t::insertar_vacio(Nodo_t* n)
{
	inicio_= n;
	final_= n;
}

Nodo_t* Lista_t::extraer_final(void)
{
	if (inicio_== final_)
	{
		Nodo_t* aux = inicio_;

		inicio_= NULL;
		final_= NULL;

		return  aux;
	}

	else
	{
		Nodo_t* aux = final_;

		final_= final_ -> get_prev();
		final_ -> set_next(NULL);

		return aux;
			}
}



void Lista_t::write(ostream& os)
{
	Nodo_t* aux= inicio_;

	while(aux!=NULL)
	{
		aux-> write(os);
		aux = aux->get_next(); 
	}

}