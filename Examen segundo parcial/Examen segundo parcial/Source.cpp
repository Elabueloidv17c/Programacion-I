#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <time.h>

using namespace std;

struct unidad
{
	string m_tipo;
	string m_valor;
};

int main()
{
	ifstream lector;
	ofstream escritor;
	lector.open("oraciones_examen_practico_parcial2.txt");
	escritor.open("oraciones.txt");

	srand(time(NULL));
	vector <string> contenedor;
	vector <vector<unidad>> ordenadas;
	string tipos[6] = { "Sujeto", "Adjetivo", "Verbo","Advervio", "Sustantivo","Preposicion" };

	while (!lector.eof())
	{
		string palabra;
		getline(lector, palabra);
		contenedor.push_back(palabra);
	}


	for (int i = 0; i < contenedor.size(); i++)
	{
		vector <unidad> palabra;
		if (i == 0)
		{
			ordenadas.push_back(palabra);
		}
		if (contenedor[i] == "")
		{
			ordenadas.push_back(palabra);
			contenedor.erase(contenedor.begin() + i);
		}
	}

	for (int i = 0; i < ordenadas.size(); i++)
	{
		int r = 0;
		for (int j = 1; j < contenedor.size(); j++)
		{
			unidad palabra;
			palabra.m_tipo = tipos[i];
			palabra.m_valor = contenedor[j];
			ordenadas[i].push_back(palabra);
			if (contenedor[j] == "Adjetivo" || contenedor[j] == "Verbo" || contenedor[j] == "Advervio" ||
				contenedor[j] == "Sustantivo" || contenedor[j] == "Preposicion")
			{
				i++;
				j++;
			}
	
		}
	}
	
	cout << "Esto muestra que el tipo de cada palabra es el correcto: " << endl << endl;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < ordenadas.size(); j++)
		{
			int aleatorio = rand() % (11 - 8);
			cout << ordenadas[j][aleatorio].m_tipo << " ";
			escritor << ordenadas[j][aleatorio].m_valor << " ";
		}
		cout << endl;
		escritor << endl << endl;
	}
	
	cout << endl << "Las oraciones aleatorias estan guardadas en el archivo 'oraciones.txt'..." << endl;

	cin.get();
	return 0;
}