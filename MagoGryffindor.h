#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <iostream>
#include <random>
#include <ctime>
#include "Mago.h"

class MagoGryffindor : protected Mago
{
	public:
		MagoGryffindor();
		~MagoGryffindor();
		int getAtrevimiento();
	protected:
		int atrevimiento;
		
};

#endif