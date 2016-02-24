#include "lista.hpp"

class Cola_t
{
	private:

		Lista_t Cola_;

	public:

		Cola_t(void);
		~Cola_t(void);

		void push(TDATO dato);
		TDATO pop(void);
		
		void write (void);

		bool vacio(void);
		void vaciar(void);



};