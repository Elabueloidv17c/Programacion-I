#include "Headers.h"

struct Reading {
	int hora;
	double temperatura; 
	char tipo;
};

int ejer_2_10() {
	srand((int)time(0));//Esto es un generador de numeros aleatorios que se basa en la hora
	srand((double)time(0));
	ofstream creador;
	creador.open( "raw_temps.txt" );
	for (int i = 0; i < 50; i++) {
		int h = (rand() % 24) + 1;
		double t = (rand() % 212) + 1;
		int s = (rand() % 2) + 1;
		if (s == 1)
			creador << h << " " << t << " " << 'c' << endl;
		else
			creador << h << " " << t << " " << 'f' << endl;
	}
	cout << "Se ha generado el archivo..." << endl;
	return 0;
}

