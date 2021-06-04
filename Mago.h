#ifndef MAGO_H
#define MAGO_H
#include <string>
#include <iostream>
#include <random>
#include <ctime>
using namespace std;
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
		
		virtual void toString();
		
			
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif