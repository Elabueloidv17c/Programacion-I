#include "Headers.h"

int ejer_2_11() {
	string name;
	ifstream lista;
	lista.open("Nombres.txt");
	int i = 1;
	while (!(lista.eof())) {
		getline(lista, name);
		cout << i << ".- " << name << endl;
		i++;
	}
	cin.get();
	return 0;
}