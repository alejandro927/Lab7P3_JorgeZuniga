#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor(int atrev, int astu ,int intel, int leal , int vale ) : Mago(astu,intel,leal,vale)
{
	this->atrevimiento = atrev ;
}

int MagoGryffindor::getAtrevimiento(){
	return this->atrevimiento;
}

MagoGryffindor::~MagoGryffindor()
{
}