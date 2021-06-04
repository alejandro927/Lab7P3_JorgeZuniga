#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <iostream>
#include <random>
#include <ctime>
#include "Mago.h"

class MagoGryffindor : public Mago
{
	public:
		MagoGryffindor();
		MagoGryffindor(int,int,int,int,int);
		~MagoGryffindor();
		int getAtrevimiento();
	protected:
		int atrevimiento;
		
};

#endif