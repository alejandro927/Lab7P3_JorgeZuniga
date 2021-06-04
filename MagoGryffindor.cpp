#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor(){
	srand(time(NULL));
	atrevimiento = rand() % 20;
	atrevimiento = atrevimiento + 80;
	
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

MagoGryffindor::~MagoGryffindor()
{
}