#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoRavenclaw : public Mago
{
	public:
		MagoRavenclaw(int,int,int,int,int);
		~MagoRavenclaw();
		int getCreatividad();
	protected:
		int creatividad;
};

#endif