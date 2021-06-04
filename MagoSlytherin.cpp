#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin(int lid, int astu ,int intel, int leal , int vale ) : Mago(astu,intel,leal,vale){
	this->liderazgo = lid;
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}

MagoSlytherin::~MagoSlytherin() {
}