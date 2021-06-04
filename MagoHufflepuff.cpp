#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff()
{
	srand(time(NULL));
	paciencia = rand() % 20;
	paciencia = paciencia + 80;
	
}

int MagoHufflepuff::getPaciencia(){
	return this->paciencia;
}

MagoHufflepuff::~MagoHufflepuff()
{
}