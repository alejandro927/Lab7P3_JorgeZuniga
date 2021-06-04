#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoHufflepuff : protected Mago
{
	public:
		MagoHufflepuff();
		~MagoHufflepuff();
		int getPaciencia();
	protected:
		int paciencia;
};

#endif