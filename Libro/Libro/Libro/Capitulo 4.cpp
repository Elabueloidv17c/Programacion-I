#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int drill(double &p, double &s) {

	while (true) {
		cout << "Si quieres salir introduce la tecla '|'" << endl;
		cout << "De lo contrario, introduce cualquier otra tecla" << endl;
		cout << endl;
		char fin;
		cin >> fin;
		if (fin == '|') {
			cout << "Fin del programa..." << endl;
			return 0;
		}
		cout << "Introduce dos numeros (presiona enter despues de cada uno): " << endl;
		while (!(cin >> p >> s)) {
			cin.clear();
			cin.ignore(255, '\n');
			cout << "Escribiste un valor incorrecto" << endl;
			cout << "Intentalo de nuevo: ";
			cout << endl;
		}
		cout << "Tus numeros son: " << endl;
		cout << p << " ";
		cout << "y " << s << endl;
		cout << endl;
		double diferencia = p - s;
		if (diferencia != 0 && diferencia <= 0.01 || diferencia <= -0.01) {
			cout << "Los numeros son casi iguales" << endl;
			cout << endl;
		}
		if (p < s) {
			cout << "El numero mayor es: " << s << endl;
			cout << "El numero menor es: " << p << endl;
			cout << endl;
		}
		else if (p > s) {
			cout << "El numero mayor es: " << p << endl;
			cout << "El numero menor es: " << s << endl;
			cout << endl;
		}
		else if (p == s) {
			cout << "Los numeros son iguales" << endl;
			cout << endl;
		}
	}	
	return 0;
}

int drill_2(double &n, double &my, double &mn) {
	vector <double> valores;
	bool flag = false;
	double suma = 0;
	int i = 0;
	while (true) {
		cout << "Si quieres salir introduce la tecla '|'" << endl;
		cout << "De lo contrario, introduce cualquier otra tecla" << endl;
		cout << endl;
		char fin;
		cin >> fin;
		if (fin == '|') {
			sort(valores.begin(), valores.end());
			cout << "Estos son los valores que ingresaste (en metros): " << endl;
			for (int i = 0; i < valores.size(); ++i)
				cout << valores[i] << " ";
			cout << endl << endl;
			cout << "Y su suma es igual a: " << suma << " metros" << endl << endl;
			cout << "Fin del programa..." << endl;
			return 0;
		}
		cout << "Introduce un numero, seguido de una unidad (m, cm, ft, in) separados por un espacio: " << endl;
		while (!(cin >> n)) {
			cin.clear();
			cin.ignore(255, '\n');
			cout << "Escribiste un valor incorrecto" << endl;
			cout << "Intentalo de nuevo: ";
		}
		string unidad;
		while (cin >> unidad) {
			if (unidad != "m" && unidad != "cm" && unidad != "ft" && unidad != "in") {
				cin.clear();
				cin.ignore(255, '\n');
				cout << "Escribiste un valor de unidad incorrecto" << endl;
				cout << "Intentalo de nuevo: ";
			}
			else {
				break;
			}
		}
		if (unidad == "cm")
			n = n / 100;
		else if (unidad == "in")
			n = n * 0.254;
		else if (unidad == "ft")
			n = n * .3048;
		if (flag == false) {
			mn = n;
			flag = true;
		}
		valores.push_back(n);
		if (n > my)
			my = n;
		if (n < mn)
			mn = n;
		i++;
		suma += n;
		cout << endl;
		cout << "Has sumado " << i << " medidas" << endl;
		cout << endl;
		cout << "La mayor medida hasta ahora es: " << my << " metros" << endl;
		cout << "La menor medida hasta ahora es: " << mn << " metros" << endl;
		cout << endl;
	}
	return 0;
}

int main(){
	int opcion;
	cout << "Menu: " << endl;
	cout << "1.- Primer drill" << endl;
	cout << "2.- Segundo drill" << endl;
	cin >> opcion;
	if (opcion == 1) {
		cout << "Bienvenido al Drill 1" << endl;
		double primero;
		double segundo;
		drill(primero, segundo);
		cin.ignore();
		cin.get();
	}
	else if (opcion == 2) {
		cout << "Bienvenido al Drill 2" << endl;
		double mayor;
		double menor;
		double numero;
		drill_2(numero,mayor,menor);
		cin.ignore();
		cin.get();
	}
	return 0;
}