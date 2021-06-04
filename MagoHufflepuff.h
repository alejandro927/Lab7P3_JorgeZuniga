#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoHufflepuff : public Mago
{
	public:
		MagoHufflepuff();
		MagoHufflepuff(int,int,int,int,int);
		~MagoHufflepuff();
		int getPaciencia();
	protected:
		int paciencia;
};

#endif