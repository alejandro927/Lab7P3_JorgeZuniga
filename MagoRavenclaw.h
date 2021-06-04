#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoRavenclaw : protected Mago
{
	public:
		MagoRavenclaw();
		~MagoRavenclaw();
		int getCreatividad();
	protected:
		int creatividad;
};

#endif