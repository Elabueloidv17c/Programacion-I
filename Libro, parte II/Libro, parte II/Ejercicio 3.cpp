#include "Headers.h"

struct Reading {
	int hora;
	double temperatura;
	char tipo;
};

vector <Reading> temperaturas;

int ejer_3_10() {
	ifstream creador;
	creador.open("raw_temps.txt");
	int i = 0;
	while (!creador.eof()) {
		Reading datos;
		creador >> datos.hora >> datos.temperatura >> datos.tipo;
		if (datos.tipo == 'c')
			datos.temperatura = (datos.temperatura*1.8) + 32;
		temperaturas.push_back(datos);
		i++;
	}
	double media = 0;
	for (int i = 0; i < temperaturas.size() - 1; i++)
		media += temperaturas[i].temperatura;
	media = media / (temperaturas.size() - 1);
	cout << "La temperatura media es: " << media << endl;
	return 0;
}