#include "lista.hpp"


class Pila_t
{
	private:

		Lista_t pila_;

	public:

		Pila_t(void);
		~Pila_t(void);

		void push(TDATO dato);
		TDATO pop(void);

		void vaciar(void);
		bool vacio(void);
};