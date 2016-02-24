#include "typedato.hpp"

class Nodo_t
{
	private:

		Nodo_t* next_;
		Nodo_t* prev_;
		TDATO dato_;

	public:

		Nodo_t(void);
		Nodo_t(TDATO dato);
		~Nodo_t(void);

		Nodo_t* get_next(void);
		Nodo_t* get_prev(void);

		TDATO get_dato(void);
		void set_dato(TDATO dato);

		void set_next(Nodo_t* next);
		void set_prev(Nodo_t* prev);

		void write(ostream& os);

};