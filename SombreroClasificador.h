#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include<iostream>
#include "ClaseHogwarts.h"

class SombreroClasificador
{
	public:
		SombreroClasificador();
		~SombreroClasificador();
		ClaseHogwarts* clasificar_magos_nuevos( vector<Mago*> ,int );
		
	
};

#endif