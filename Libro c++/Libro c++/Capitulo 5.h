#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int Drill_5() {
	try {
		cout << "Success!\n";
		cout << "Success!\n";
		cout << "Success!" << "\n";
		cout << "Success!" << "\n";
		cout << endl;
		int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
		vector <int> vv; vv.resize(10); vv[5] = 7; if (vv[5] == 7) cout << "Success!\n";
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
		bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";
		cout << endl;
		string s = "ape"; string cc = "fool"; if (cc > s) cout << "Success!\n";
		string ss = "ape"; if (ss != "fool") cout << "Success!\n";
		string sss = "ape"; if (sss != "fool") cout << "Success!\n";
		string ssss = "ape"; if (ssss != "fool") cout << "Success!\n";
		cout << endl;
		vector<char> vvv; vvv.resize(5); for (int i = 0; i < vvv.size(); ++i); cout << "Success!\n";
		vector<char> vvvv; vvvv.resize(5); for (int i = 0; i < vvvv.size(); ++i); cout << "Success!\n";
		string sssss = "Success!\n"; for (int i = 0; i < 9; ++i) cout << sssss[i];
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
		cout << endl;
		int x = 64; char ccc = x; if (ccc == '@') cout << "Success!\n";
		string ssssss = "Success!\n"; for (int i = 0; i < 9; ++i) cout << ssssss[i];
		vector <int> vvvvv(5); for (int i = 0; i <= vvvvv.size(); ++i); cout << "Success!\n";
		int i = 0; int j = 9; while (i < j) { ++i; if (j == i) cout << "Success!\n"; }
		cout << endl;
		int xx = 2; double d = 5 / (xx - 1); if (d == 2 * xx + 1) cout << "Success!\n";
		string sssssss = "Success!\n"; for (int i = 0; i < 9; ++i) cout << sssssss[i];
		int ii = 0; int jj = -1; while (ii < 10) ++ii; if (jj < ii) cout << "Success!\n";
		int xxx = 4; double dd = 5 / xxx - 2; if (dd = 2 / xxx + 0.5) cout << "Success!\n";
		cout << endl;
		cout << "Success!\n";
		cin.ignore();
		cin.get();
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		cin.ignore();
		cin.get();
	}
	return 0;
}

double ejer_2y3_5_(double ce) { // converts Celsius to Kelvin
	double k = ce + 273.15;
	return k;
}

int ejer_2y3_5() {
	cout << "Introduce la temperatura a convertir: " << endl;
	double c = 0; // declare input variable
	cin >> c; // retrieve temperature to input variable
	double k = ejer_2y3_5_(c); // convert temperature
	if (k < -273.15) {
		cout << "Esa temperatura no existe, esta por debajo de cero absoluto." << endl;
		cout << k << '/n'; // print out temperature
	}
	else
		cout << k << '/n'; // print out temperature
	cin.ignore();
	cin.get();
	return 0;
}

double ejer_4y5_5_(double ce) { // converts Celsius to Kelvin
	int opcion;
	cout << "Que operacion quieres realizar?" << endl;
	cout << "1.- Celcius a Kelvin" << endl;
	cout << "2.- Kelvin a Celcius" << endl;
	cin >> opcion;
	if (opcion == 1) {
		double k = ce + 273.15;
		if (k < -273.15) {
			cout << "Esa tempratura no existe, esta por debajo de cero absoluto." << endl;
			return k;
		}
		else
			return k;
	}
	if (opcion == 2) {
		//Aqui va el codigo
		double k = ce - 273.15;
		if (k < -546.3) {
			cout << "Esa tempratura no existe, esta por debajo de cero absoluto." << endl;
			return k;
		}
		else
			return k;
	}
	else
		cout << "Operacion invalida" << endl;
	return 0;
}

int ejer_4y5_5() {
	cout << "Introduce la temperatura a convertir: " << endl;
	double c = 0; // declare input variable
	cin >> c; // retrieve temperature to input variable
	double k = ejer_4y5_5_(c); // convert temperature
	cout << k << '/n'; // print out temperature
	cin.ignore();
	cin.get();
	return 0;
}

//Ejercicio 7 está en el capitulo 4

int ejer_12_5() {
	vector <char> numeros{ '5','9','8','3' };
	vector <char> adivinanza;
	adivinanza.resize(4);
	while (numeros != adivinanza) {
		int vacas = 0;
		int toros = 0;
		bool acierto = false;
		cout << "Introduce 4 numeros" << endl;
		cin >> adivinanza[0] >> adivinanza[1] >> adivinanza[2] >> adivinanza[3];
		for (int t = 0; t < numeros.size(); ++t) {
			if (numeros[t] == adivinanza[t]) {
				toros += 1;
				acierto = true;
			}
			for (int r = 0; r < numeros.size(); ++r) {
				if (adivinanza[r] == numeros[t] && acierto == false) {
					vacas += 1;
				}
			}

		}
		cout << toros << " toros y " << vacas << " vacas..." << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
