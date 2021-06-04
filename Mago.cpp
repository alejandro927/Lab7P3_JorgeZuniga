#include "Mago.h"

Mago::Mago() {
	srand(time(NULL));
	astucia = rand() % 100;
	inteligencia = rand() % 100;
	lealtad = rand() % 100;
	valentia = rand() % 100;
	
	
	
}

Mago::~Mago() {
}

int Mago::getAstucia(){
	return this->astucia;
}

void Mago::setAstucia(int astu){
	this->astucia = astu;
}

int Mago::getLealtad(){
	return this->lealtad;
}
void Mago::setLealtad(int leal){
	this->lealtad = leal;
}

int Mago::getInteligencia(){
	return this->inteligencia;
}
void Mago::setInteligencia(int intel){
	this->inteligencia = intel;
}

int Mago::getValentia(){
	return this->valentia;
}

void Mago::setValentia(int valen){
	this->valentia = valen;
}