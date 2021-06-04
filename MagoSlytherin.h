#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include <random>
#include <ctime>
#include "Mago.h"

class MagoSlytherin : public Mago
{
	public:
		MagoSlytherin(int,int,int,int,int);
		~MagoSlytherin();
		int getLiderazgo();
	protected:
		int liderazgo;
};

#endif