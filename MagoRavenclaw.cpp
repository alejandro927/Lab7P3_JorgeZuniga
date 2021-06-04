#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw()
{
	srand(time(NULL));
	creatividad = rand() % 20;
	creatividad = creatividad + 80;
	
}

int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

MagoRavenclaw::~MagoRavenclaw()
{
}