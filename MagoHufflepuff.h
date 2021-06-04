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
		virtual void toString();
		~MagoHufflepuff();
		int getPaciencia();
	protected:
		int paciencia;
};

#endif