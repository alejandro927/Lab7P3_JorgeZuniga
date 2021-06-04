#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff(int pac, int astu,int intel, int leal, int vale) : Mago(astu,intel,leal,vale) {
	this->paciencia = pac;
}

int MagoHufflepuff::getPaciencia() {
	return this->paciencia;
}

MagoHufflepuff::~MagoHufflepuff() {
}