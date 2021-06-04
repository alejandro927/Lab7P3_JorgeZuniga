#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin(int lid, int astu ,int intel, int leal , int vale ) : Mago(astu,intel,leal,vale){
	this->liderazgo = lid;
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}


void MagoSlytherin::toString(){
	cout<<"Astucia:"<<astucia<<" Inteligencia:" << inteligencia << " Lealtad:" << lealtad << "valentia:" << valentia << " Liderazgo:" << this->liderazgo; 
}

MagoSlytherin::~MagoSlytherin() {
}