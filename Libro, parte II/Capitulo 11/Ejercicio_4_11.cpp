#include "Headers.h"

void identificador(string numero, string& tipo){
	if (numero[0] == '0' && (numero[1] != 'x' && numero[1] != 'X')) 
		tipo = "octadecimal";
	else if (numero[0] == '0' && (numero[1] == 'x' || numero[1] == 'X')) 
		tipo = "hexadecimal";
	else 
		tipo = "decimal";
}

int ejer_4_11() {
	cout << "Ingresa valores en decimal, octadecimal (0 al inicio) o hexadecimal (0x o 0X al inicio): " << endl;
	cout << "Si quieres salir, ingresa '0xx'" << endl;
	string valor;
	while (cin >> valor) {
		if (valor == "0xx")
			break;
		string sufijo;
		identificador(valor, sufijo);
		int convertido = strtol(valor.c_str(), NULL, 0);
		cout << valor << setw(20 - valor.length()) << sufijo << setw(20) << "converts to" << setw(10)
			<< convertido << setw(10) << "decimal\n";
	}
	cin.ignore();
	cin.get();
	return 0;
}