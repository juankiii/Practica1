# include "vector_t.hpp"


void Vector_t::build(int sz)
{
	if( base_== NULL)
	{
		base_= new TDATO[sz];
		sz_=sz;
	}
	else

		cerr <<"Error al crear el vector"<<endl;
}

void Vector_t::clean(void)
{
	if(base_!=NULL)
	{
		delete[] base_;
		base_=NULL; 
		sz_=0;
	}

	else
	{
		cerr << "Error al destruir el vector"<<endl;
	}
}

Vector_t::Vector_t(void):
base_(NULL),
sz_(0){}

Vector_t::Vector_t(int sz):
base_(NULL),
sz_(sz){

	build(sz);
}

Vector_t::Vector_t(const Vector_t& V)
{

		build(V.sz_);

		for(int i=0; i<V.sz_;i++)
		{
			base_[i]= V.base_[i];
		}
	
}

Vector_t::~Vector_t(void)
{
	clean();
}

int Vector_t::get_size(void)
{
	return sz_;
}

void Vector_t::resize(int sz)
{
	clean();

	if(sz >0)
	{
		build(sz);	
	}
	
}

void Vector_t::imprimir(void)
{
	for(int i=0; i<sz_;i++)
	{
		cout << base_[i]<<" ";
	}

	cout<<endl;
}

TDATO& Vector_t::operator[](int pos)
{

	return base_[pos];
}

TDATO Vector_t::operator[](int pos) const
{

	return base_[pos];
}

