#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff(int pac, int astu,int intel, int leal, int vale) : Mago(astu,intel,leal,vale) {
	this->paciencia = pac;
}

int MagoHufflepuff::getPaciencia() {
	return this->paciencia;
}

void MagoHufflepuff::toString(){
	cout<<"Astucia:"<<astucia<<" Inteligencia:" << inteligencia << " Lealtad:" << lealtad << "valentia:" << valentia << " Paciencia:" << this->paciencia; 
}

MagoHufflepuff::~MagoHufflepuff() {
}