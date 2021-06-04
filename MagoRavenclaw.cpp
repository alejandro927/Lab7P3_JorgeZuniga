#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw(int creat, int astu ,int intel, int leal , int valen): Mago(astu,intel,leal,valen)
{
	creatividad = creat;
	
}

int MagoRavenclaw::getCreatividad(){
	return this->creatividad;
}

void MagoRavenclaw::toString(){
	cout<<"Astucia:"<<astucia<<" Inteligencia:" << inteligencia << " Lealtad:" << lealtad << "valentia:" << valentia << " Creatividad:" << this->creatividad; 
}

MagoRavenclaw::~MagoRavenclaw()
{
}