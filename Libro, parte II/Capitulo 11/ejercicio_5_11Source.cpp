#include "Headers.h"

int ejer_5_11() {

	cin.ignore(); //Esto limpia el buffer del cin que seleccionó esta funcion
	
	string ingreso;
	getline(cin, ingreso);

	for (int i = 0; i < ingreso.length(); i++) {
		if (isspace(ingreso[i]) && ingreso[i] != 'x' && ingreso[i] != 'X') 
			cout << ingreso[i] << setw(20) << "Espacio" << endl;

		else if (isdigit(ingreso[i]) && ingreso[i] != 'x' && ingreso[i] != 'X') 
			cout << ingreso[i] << setw(20) << "Numero" << endl;

		else if (isalpha(ingreso[i]) && ingreso[i] != 'x' && ingreso[i] != 'X') 
			cout << ingreso[i] << setw(20) << "Letra" << endl;

		else if (ingreso[i] == 'x' || ingreso[i] == 'X')
			cout << ingreso[i] << setw(20) << "Letra y numero" << endl;

		else
			cout << ingreso[i] << setw(20) << "Operador" << endl;
	}
	return 0;
}