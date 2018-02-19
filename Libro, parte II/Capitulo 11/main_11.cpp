#include "Headers.h"

int main() {
	cout << "Qué ejercicio quieres ver? " << endl;
	cout << "1.- Drill" << endl;
	cout << "2.- Ejercicio 1" << endl;
	cout << "3.- Ejercicio 2" << endl;
	cout << "4.- Ejercicio 3" << endl;
	cout << "5.- Ejercicio 4" << endl;
	cout << "6.- Ejercicio 5" << endl;
	int opcion;
	cin >> opcion;
	if (opcion == 1)
		Drill_11();
	else if (opcion == 2)
		ejer_1_11();
	else if (opcion == 3)
		ejer_2_11();
	else if (opcion == 4)
		ejer_3_11();
	else if (opcion == 5)
		ejer_4_11();
	else if (opcion == 6)
		ejer_5_11();
	else
		cout << "No existe ese ejercicio" << endl;
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}