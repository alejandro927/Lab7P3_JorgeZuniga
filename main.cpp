#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <iomanip>
#include "SombreroClasificador.h"
#include "Mago.h"
#include "MagoSlytherin.h"
#include "MagoGryffindor.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
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

vector<Mago*> crearMagos() {
	srand(time(NULL));

	Mago* magos = new Mago();

	vector <Mago*> tempmago;

	double opcionCasa;
	for(int i=0 ; i<25 ; i++ ) {

		opcionCasa = rand() % 100;
		opcionCasa = opcionCasa/100;
		//cout << opcionCasa<<endl;

		if(opcionCasa >= 0.00 && opcionCasa <= 0.25) {
			//Slytherin
			//cout<<"Este mago va para Slytherin!!!"<<endl;
			int inteligencia = rand() % 100;
			int lealtad = rand() % 100;
			int valentia = rand() % 100;

			int astucia = rand() % 20;
			astucia = astucia + 80;

			int liderazgo = rand() % 20;
			liderazgo = liderazgo + 80;

			tempmago.push_back(new MagoSlytherin(liderazgo,astucia,inteligencia,lealtad,valentia));

		} else if(opcionCasa >= 0.25 && opcionCasa <= 0.50) {
			//Ravenclaw
			//cout<<"Este mago va para Ravenclaw!!!"<<endl;
			int astucia = rand() % 100;
			int lealtad = rand() % 100;
			int valentia = rand() % 100;

			int inteligencia = rand() % 20;
			inteligencia = inteligencia + 80;

			int creatividad = rand() % 20;
			creatividad = creatividad + 80;
			tempmago.push_back(new MagoRavenclaw(creatividad,astucia,inteligencia,lealtad,valentia));

		} else if(opcionCasa >= 0.50 && opcionCasa <= 0.75) {
			//Hufflepuff
			//cout<<"Este mago va para Hufflepuff!!!"<<endl;
			int astucia = rand() % 100;
			int inteligencia = rand() % 100;
			int valentia = rand() % 100;

			int lealtad = rand() % 20;
			lealtad = lealtad + 80;

			int paciencia = rand() % 20;
			paciencia = paciencia + 80;
			tempmago.push_back(new MagoHufflepuff(paciencia,astucia,inteligencia,lealtad,valentia));

		} else if(opcionCasa >= 0.75 && opcionCasa <= 1.00) {
			//Gryffindor
			//cout<<"Este mago va para Gryffindor!!!"<<endl;
			int astucia = rand() % 100;
			int inteligencia = rand() % 100;
			int lealtad = rand() % 100;

			int valentia = rand() % 20;
			valentia = valentia + 80;

			int atrevimiento = rand() % 20;
			atrevimiento = atrevimiento + 80;
			tempmago.push_back(new MagoGryffindor(atrevimiento,astucia,inteligencia,lealtad,valentia));
			
		}

	}
	return tempmago;
}

void imprimirMagosCasa(){
	ClaseHogwarts* claseHg = new ClaseHogwarts();
	cout<<"Slytherin"<<endl;
	for(int i=0 ; i< claseHg->magos_slytherin.size() ; i++){
		//cout<< claseHg->magos_slytherin;
	}
	cout<<"Ravenclaw"<<endl;
	for(int i=0 ; i< claseHg->magos_ravenclaw.size() ; i++){
	//	cout<< claseHg->magos_ravenclaw;
	}
	cout<<"Hufflepuff"<<endl;
	for(int i=0 ; i< claseHg->magos_hufflepuff.size() ; i++){
		//cout<< claseHg->magos_hufflepuff;
	}
	cout<<"Gryffindor"<<endl;
	for(int i=0 ; i< claseHg->magos_gryffindor.size() ; i++){
		//cout<< claseHg->magos_gryffindor;
	}
}


int main(int argc, char** argv) {
	vector <Mago*> listaMagos;
	Mago* mag = new Mago();
	listaMagos = crearMagos();
	SombreroClasificador* sombrero = new SombreroClasificador();
	ClaseHogwarts* claseH = new ClaseHogwarts(); 


	int opcion=0;
	while(opcion != 4) {
		opcion = menu();
		switch(opcion) {
			case 1: {
				/*
				double opcionCasa = rand() % 100;
				opcionCasa = opcionCasa/100;
				cout<<opcionCasa<<endl;
				*/
				//sombrero->clasificar_magos_nuevos(listaMagos, 10);
				

			}
			break;
			case 2: {

			}
			break;
			case 3: {

			}
			break;
			case 4: {
				cout<<"Gracias por usar el programa!!!\nBuen dia!!!";
			}
			break;
		}


	}
	delete mag;
	delete claseH;
	return 0;
}