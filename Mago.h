#ifndef MAGO_H
#define MAGO_H
#INCLUDE <IOSTREAM
#include <random>
#include <ctime>
class Mago
{
	public:
		Mago();
		~Mago();
		
		int getAstucia();
		void setAstucia(int);
		
		int getLealtad();
		void setLealtad(int);
		
		int getInteligencia();
		void setInteligencia(int);
		
		int getValentia();
		void setValentia(int);
		
		
	protected:
		int astucia;
		int inteligencia;
		int lealtad;
		int valentia;
};

#endif