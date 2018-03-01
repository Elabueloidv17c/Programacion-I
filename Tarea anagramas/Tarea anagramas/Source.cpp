#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

vector <string> palabras;
vector <string> copia;

vector <string> indice;
vector <vector <string>> resultado;

int main() {
	string palabra;
	ifstream lector;
	lector.open("Anagramas.txt");
	while (!lector.eof()) {
		getline(lector, palabra);
		palabras.push_back(palabra);
	}

	for (int i = 0; i < palabras.size(); i++) {
		copia.push_back(palabras[i]);
		for (int a = 0; a < copia[i].length(); a++)
			copia[i][a] = tolower(copia[i][a]);
		sort(copia[i].begin(), copia[i].end());
	}

	int vector = 0;
	
	while (copia.size() > 0) {
		resultado.push_back(indice);
		for (int i = 0; i < copia.size(); i++)
			if (copia[0] == copia[i]) {
				resultado[vector].push_back(palabras[i]);
				if (i != 0) {
					palabras.erase(palabras.begin() + i);
					copia.erase(copia.begin() + i);
				}
			}
		palabras.erase(palabras.begin());
		copia.erase(copia.begin());
		vector++;
	}

	ofstream escritor;
	escritor.open("Anagramas ordenados.txt");


	escritor << "Los anagramas son los siguientes: " << endl;

	for (int i = 0; i < resultado.size(); i++) {
		for (int a = 0; a < resultado[i].size(); a++)
			if (resultado[i].size() > 1)
				escritor << resultado[i][a] << endl;
		escritor << endl;
	}

	escritor << "Estas palabras no tienen anagramas: " << endl;

	for (int i = 0; i < resultado.size(); i++) {
		for (int a = 0; a < resultado[i].size(); a++)
			if (resultado[i].size() == 1)
				escritor << resultado[i][a] << endl;
		escritor << endl;
	}

	lector.close();
	escritor.close();

	cout << "Se ha generado el archivo..." << endl;

	cin.ignore();
	cin.get();
	return 0;
}