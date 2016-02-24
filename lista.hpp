#include "nodo.hpp"


class Lista_t
{
	private:

		Nodo_t* inicio_;
		Nodo_t* final_;


	public:

		Lista_t(void);
		~Lista_t(void);

		bool vacio(void);

		void insertar_principio(Nodo_t* n);
		Nodo_t* extraer_principio(void);

		void insertar_final(Nodo_t* n);
		Nodo_t* extraer_final(void);

		void insertar_vacio(Nodo_t* n);

		void write(ostream& os);
};