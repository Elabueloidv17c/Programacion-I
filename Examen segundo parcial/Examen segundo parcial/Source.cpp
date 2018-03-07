#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	ofstream escritor;
	escritor.open("oraciones.txt");
	ifstream lector;
	lector.open("oraciones_examen_practico_parcial2.txt");

	srand(time(NULL));
	vector <string> contenedor;
	vector <vector<string>> ordenadas;

	while (!lector.eof())
	{
		string palabra;
		getline(lector, palabra);
		contenedor.push_back(palabra);
	}

	for (int i = 0; i < 6; i++)
	{
		vector <string> unidad;
		ordenadas.push_back(unidad);
	}

	for (int i = 0; i < ordenadas.size(); i++)
	{
		for (int j = 1; j < contenedor.size(); j++)
		{
			if (contenedor[j] == "Adjetivo" || contenedor[j] == "Verbo" || contenedor[j] == "Advervio" || 
				contenedor[j] == "Sustantivo" || contenedor[j] == "Preposicion")
			{
				i++;
				j++;
			}
			ordenadas[i].push_back(contenedor[j]);
		}
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < ordenadas.size(); j++)
		{
			int aleatorio = rand() % (11 - 8);
			cout << ordenadas[j][aleatorio] << " ";
			escritor << ordenadas[j][aleatorio] << " ";
		}
		cout << endl << endl;
		escritor << endl << endl;
	}

	cin.get();
	return 0;
}