#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin() {
	srand(time(NULL));
	liderazgo = rand() % 20;
	liderazgo = liderazgo + 80;
}

int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}

MagoSlytherin::~MagoSlytherin() {
}