#include "Mago.h"

Mago::Mago() {
	
}

Mago::Mago(int astu,int inte,int leal,int valen ) {
	this->astucia = astu;
	this->inteligencia = inte;
	this->lealtad = leal;
	this->valentia = valen;
}

void Mago::toString(){
	
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