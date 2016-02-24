#include "typedato.hpp"

class Vector_t
{
	private:

		TDATO* base_;  // Puntero que apunta a la base del vector
		int sz_;      // atributo que almacena el tamaño del vector
	
	public:

		Vector_t(void);
		Vector_t(int sz);
		Vector_t(const Vector_t& V);

		virtual ~Vector_t(void);

		TDATO& operator[](int pos);
		TDATO operator[](int pos) const;

		int get_size(void);
		void resize(int sz);
		void imprimir(void);


	private:

		void build(int sz);
		void clean(void);


};