#ifndef MAGO_H
#define MAGO_H
#include <iostream>
#include <random>
#include <ctime>
class Mago
{
	public:
		Mago();
		Mago(int,int,int,int);
		~Mago();
		
		int getAstucia();
		void setAstucia(int);
		
		int getInteligencia();
		void setInteligencia(int);
		
		int getLealtad();
		void setLealtad(int);
		
		int getValentia();
		void setValentia(int);
		
		
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif