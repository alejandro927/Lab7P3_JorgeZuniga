#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoSlytherin : protected Mago
{
	public:
		MagoSlytherin();
		~MagoSlytherin();
		int getLiderazgo();
	protected:
		int liderazgo;
};

#endif