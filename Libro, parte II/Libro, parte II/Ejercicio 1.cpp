#include "Headers.h"


int ejer_1_10() {
	int resultado = 0;
	int sumandos;
	ifstream lectura;
	lectura.open("suma.txt");
	while (!lectura.eof()) {
		lectura >> sumandos;
		resultado += sumandos;
	}
	cout << "El resultado es: "<< endl << resultado << endl;
	return 0;
}