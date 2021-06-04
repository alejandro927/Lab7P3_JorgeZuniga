#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include<iostream>
#include "ClaseHogwarts.h"
#include <vector>
using namespace std;
class SombreroClasificador
{
	public:
		SombreroClasificador();
		~SombreroClasificador();
		ClaseHogwarts* clasificar_magos_nuevos( vector<Mago*> ,int );
		
	
};

#endif