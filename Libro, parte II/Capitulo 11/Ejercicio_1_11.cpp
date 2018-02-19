#include "Headers.h"

vector <char> frase;

int ejer_1_11() {
	char letra;
	ifstream convertir;
	convertir.open("Texto.txt");
	while (!(convertir.eof())) {
		convertir >> letra;
		letra = tolower(letra);
		frase.push_back(letra);
	}
	ofstream convertido{ "Texto.txt", ios_base::app };
	convertido << endl;
	for (int i = 0; i < frase.size() - 1; i++)
		convertido << frase[i];
	convertir.close();
	return 0;
}