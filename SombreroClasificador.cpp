#include "SombreroClasificador.h"

SombreroClasificador::SombreroClasificador() {
}

ClaseHogwarts* clasificar_magos_nuevos( vector<Mago*> lista, int year) {
	ClaseHogwarts* claseH = new ClaseHogwarts();
	
	/*
	for(int i=0; i<lista.size(); i++) {
		
        MagoSlytherin* magoS = dynamic_cast<MagoSlytherin*>(lista[i]);
        MagoHufflepuff* magoH = dynamic_cast<MagoHufflepuff*>(lista[i]);
        MagoRavenclaw* magoR = dynamic_cast<MagoRavenclaw*>(lista[i]);
		MagoGryffindor* magoG = dynamic_cast<MagoGryffindor*>(lista[i]);
		
		if(magoG) {
			claseH->magos_gryffindor.push_back(lista[i]);
		}else if(magoS){
			claseH->magos_slytherin.push_back(lista[i]);
		}else if(magoR){
			claseH->magos_ravenclaw.push_back(lista[i]);
		}else if(magoH){
			claseH->magos_hufflepuff.push_back(lista[i]);
		}
		
	}


	cout<<endl;
	cout<<"type_id"<<endl;
	cout<<endl;
	for(int i=0; i<lista.size(); i++) {
		const type_info& tipo = typeid(*lista[i]);
		cout<<tipo.name()<<endl;
	}

*/
	delete claseH;
	return claseH;
	
}




SombreroClasificador::~SombreroClasificador() {
}