#include <iostream>

#include <random>
#include <ctime>
#include "Mago.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int menu() {
	int opcion=0;
	cout<<" 1) Separar por casa" << endl;
	cout<<" 2) Imprimir magos por casa" << endl;
	cout<<" 3) Impimir cualidades pomedio por casa" << endl;
	cout<<" 4) Salida" << endl;
	cout<<" Ingrese su opcion:";
	cin>>opcion;
	cout<<endl;
	return opcion;
}

int main(int argc, char** argv) {
	
	
	
	
	
	
	int opcion=0;
	while(opcion != 4) {
		opcion = menu();
		switch(opcion) {
			case 1: {

			}
			break;
			case 2:{
				
			}
			break;
			case 3:{
				
			}
			break;
			case 4:{
				cout<<"Gracias por usar el programa!!!\nBuen dia!!!";
			}
			break;
		}


	}

	return 0;
}