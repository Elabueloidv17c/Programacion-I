#include "Headers.h"

int opcion;
int ejercicio;

int main() {
	cout << "Que ejercicio quieres ver?" << endl;
	cout << "1.- Drill" << endl;
	cout << "2.- Ejercicio 1" << endl;
	cout << "3.- Ejercicio 2" << endl;
	cout << "4.- Ejercicio 3 (debes ejecutar el ejercicio 2 primero para generar el archivo)" << endl;
	cout << "Nota: El ejercicio 4 es una corrección de los ejercicios 2 y 3." << endl;
	cin >> ejercicio;
	if (ejercicio == 1) {
		Drill_10();
	}
	else if (ejercicio == 2) {
		ejer_1_10();
	}
	else if (ejercicio == 3) {
		ejer_2_10();
	}
	else if (ejercicio == 4) {
		ejer_3_10();
	}
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}