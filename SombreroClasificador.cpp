#include "SombreroClasificador.h"

SombreroClasificador::SombreroClasificador() {
}

ClaseHogwarts* clasificar_magos_nuevos( vector<Mago*> lista,int valor=0) {

	/*
	// Dynamic_cast
	int cant=0;
	for(int i=0; i<lista.size(); i++) {

		Buenos* bu = dynamic_cast<Buenos*>(lista[i]);
		if(bu) {
			cant++;
			cout<<"Hay"<<cant<<"buenos"<<endl;
		}
	}
	
	// type_id
	cout<<endl;
	cout<<"type_id"<<endl;
	cout<<endl;
	for(int i=0; i<lista.size(); i++) {
		const type_info& tipo = typeid(*lista[i]);
		cout<<tipo.name()<<endl;
	}

*/




}

SombreroClasificador::~SombreroClasificador() {
}