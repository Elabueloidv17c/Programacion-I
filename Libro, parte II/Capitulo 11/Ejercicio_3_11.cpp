#include "Headers.h"

vector <char> contenedor;

int ejer_3_11() {
	char letra;
	ifstream buscador;
	buscador.open("disemvowels.txt");
	buscador.unsetf(ios_base::skipws);
	while (!(buscador.eof())) {
		buscador >> letra;
		if(letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u')
			contenedor.push_back(letra);
	}
	ofstream novowels;
	novowels.open("disemvowels.txt");
	for (int i = 0; i < contenedor.size() - 1; i++) {
		novowels << contenedor[i];

	}
	buscador.close();
	novowels.close();
	return 0;
}