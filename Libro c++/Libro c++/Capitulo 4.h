#pragma once
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

int ejer_2() {
	vector<double> temps;
	cout << "Ingrese valores numericos, cuando quiera terminar introduzca una letra." << endl;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	double sum = 0;
	for (double x : temps) sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';
	sort(temps.begin(), temps.end());
	cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}

int ejer_3() {
	vector <double> numeros;
	double suma = 0;
	cout << "Ingrese las distancias entre ciudades, cuando quiera terminar introduzca una letra." << endl;
	for (double temporal; cin >> temporal;) {
		numeros.push_back(temporal);
		suma += temporal;
	}
	sort(numeros.begin(), numeros.end());
	cout << endl << "La distancia mas corta es: " << numeros[0] << " KM" << endl;
	cout << "La distancia mas larga es: " << numeros[numeros.size() - 1] << " KM" << endl << endl;
	cout << "La distancia total es de: " << suma << " KM" << endl << endl;
	cout << "La distancia media entre las ciudades es de: " << suma / numeros.size() << " KM" << endl << endl;
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}

int ejer_5() {
	double operando1;
	double operando2;
	string operador;
	cout << "Ingrese dos valores numericos seguidos de un operador (+,-,/,*) separados por un espacio: " << endl;
	while (!(cin >> operando1 >> operando2)) {
		cin.clear();
		cin.ignore(255, '\n');
		cout << "Debes escribir un numero." << endl;
		cout << "Intentalo de nuevo: ";
	}
	while (cin >> operador) {
		if (operador != "+" && operador != "-" && operador != "/" && operador != "*") {
			cin.clear();
			cin.ignore(255, '\n');
			cout << "Eso no es un operador, debes introducir uno de estos caracteres: +, -, *, /" << endl;
			cout << "Intentalo de nuevo: ";
		}
		else {
			break;
		}
	}
	if (operador == "+")
		cout << "El resultado es: " << operando1 + operando2 << endl;
	else if (operador == "-")
		cout << "El resultado es: " << operando1 - operando2 << endl;
	else if (operador == "*")
		cout << "El resultado es: " << operando1 * operando2 << endl;
	else if (operador == "/")
		cout << "El resultado es: " << operando1 / operando2 << endl;
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
	return 0;
}

int ejer_8() {
	bool mil = false;
	bool millon = false;
	bool milmillones = false;
	for (int i = 0; i < 64; ++i) {
		double valor = pow(2, i);
		if (valor >= 1000 && mil == false) {
			cout << "Se necesitan " << i << " repeticiones para completar 1,000 granos" << endl;
			mil = true;
		}
		if (valor >= 1000000 && millon == false) {
			cout << "Se necesitan " << i << " repeticiones para completar 1,000,000 granos" << endl;
			millon = true;
		}
		if (valor >= 1000000000 && milmillones == false) {
			cout << "Se necesitan " << i << " repeticiones para completar 1,000,000,000 granos" << endl;
			milmillones = true;
		}
	}
	//El numero mas grande que puede almacenar un int es: 1,073,741,824, después de eso solo repite -2147483648
	//El numero mas grande que puede almacenar un double es: 524288, despues de eso imprime numeros raros como: 1.04858e+06
	cin.ignore();
	cin.get();
	return 0;
}

int ejer_18() {
	double a, b, c;
	double x1, x2;
	double real, imaginaria;
	cout << "Ingrese los valores de a, b y c (separados por un espacio) ";
	while (!(cin >> a >> b >> c)) {
		cin.clear();
		cin.ignore(255, '\n');
		cout << "Debes escribir numeros..." << endl;
		cout << "Intentalo de nuevo: ";
	}
	cout << "Las raices son";
	if ((b * b - 4 * a*c) < 0) {
		real = -b / (2 * a);
		imaginaria = sqrt(-(b * b - 4 * a*c) / (2 * a));
		cout << " complejas." << endl;
		cout << "X 1 = " << real << " + " << imaginaria << " i" << "        ";
		cout << "X 2 = " << real << " - " << imaginaria << " i" << endl;
	}
	else if ((b * b - 4 * a*c) > 0) {
		x1 = (-b + sqrt(b * b - 4 * a*c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a*c)) / (2 * a);
		cout << " reales." << endl << "X 1 = " << x1 << "        " << "X 2 = " << x2 << endl;
	}
	else if ((b * b - 4 * a*c) == 0) {
		cout << " reales." << endl;
		x1 = (-b + sqrt(b * b - 4 * a*c)) / (2 * a);
		cout << "X 1 =" << x1 << "        " << "X 2 = " << x1 << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}

int ejer_19() {
	vector <string> nombres;
	vector <int> edades;
	string nombre;
	int edad;
	while (true) {
		cout << "Ingresa los datos de una persona, primero su nombre y luego su edad (en numero): " << endl;
		cout << "Cuando termines escribe 'NoName 0'" << endl;
		cin >> nombre;
		bool repetido = false;
		for (int i = 0; i < nombres.size(); ++i) {
			if (nombre == nombres[i]) {
				repetido = true;
				cin.clear();
				cin.ignore(255, '\n');
				cout << "Ya usaste ese nombre..." << endl << endl;
			}
		}
		if (repetido == false) {
			while (!(cin >> edad)) {
				cin.clear();
				cin.ignore(255, '\n');
				cout << "No ingresaste un numero, intentalo de nuevo: " << endl;
			}
		}
		if (nombre == "NoName" && edad == 0)
			break;
		if (repetido == false) {
			nombres.push_back(nombre);
			edades.push_back(edad);
		}
	}
	cout << endl << "Escribiste estos datos: " << endl;
	for (int i = 0; i < edades.size(); ++i) {
		cout << nombres[i] << " " << edades[i] << endl;
	}
	string busquedaN;
	int busquedaE;
	cout << endl << "Busqueda por nombre: " << endl;
	if (cin >> busquedaN) {
		bool encontradosN = false;
		cout << "Los resultados son: " << endl << endl;
		for (int i = 0; i < nombres.size(); ++i) {
			if (busquedaN == nombres[i]) {
				cout << edades[i] << endl;
				encontradosN = true;
			}
		}
		if (encontradosN == false)
			cout << "Nombre no encontrado" << endl << endl;
	}
	cout << endl << "Busqueda por edad: " << endl;
	if (cin >> busquedaE) {
		bool encontradosE = false;
		cout << "Los resultados son: " << endl << endl;
		for (int i = 0; i < edades.size(); ++i) {
			if (busquedaE == edades[i]) {
				cout << nombres[i] << endl;
				encontradosE = true;
			}
		}
		if (encontradosE == false)
			cout << "Edad no encontrada" << endl << endl;
	}
	cout << "Fin del programa..." << endl;
	cin.ignore();
	cin.get();
	return 0;
}