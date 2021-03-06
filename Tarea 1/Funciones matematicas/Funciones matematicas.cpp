#include "stdafx.h"
#include <iostream>

using namespace std;

float sumaYresta(float a, float b) {
	float resultado = a + b;
	cout << resultado << endl;
	return resultado;
}

float multiplicacion(float a, float b) {
	float resultado = a * b;
	cout << resultado << endl;
	return resultado;
}

float division(float a, float b) {
	float resultado = a / b;
	cout << resultado << endl;
	return resultado;
}

int modulo(int a, int b) {
	int resultado = a % b;
	cout << resultado << endl;
	return resultado;
}

double potencia(int a, int b) {
	double resultado = pow(a,b);
	cout << resultado << endl;
	return resultado;
}

int main()
{
	int operacion = 0;
	cout << "Que operacion quieres realizar?" << endl;
	cout << "1.- Suma o resta" << endl;
	cout << "2.- Multiplicacion" << endl;
	cout << "3.- Division" << endl;
	cout << "4.- Modulo" << endl;
	cout << "5.- Potencia" << endl;
	while (operacion <= 0 || operacion > 5) {
		cin >> operacion;
		if (operacion == 1) {
			float suma1 = 0;
			float suma2 = 0;
			cout << "Ingresa el primer valor: " << endl;
			cin >> suma1;
			cout << "Ingresa el segundo valor: " << endl;
			cin >> suma2;
			cout << "El resultado es: " << endl;
			sumaYresta(suma1, suma2);
			cin.ignore();
			cout << "Gracias por usar esta calculadora" << endl;
			cin.get();
		}
		else if (operacion == 2) {
			float multi1 = 0;
			float multi2 = 0;
			cout << "Ingresa el primer valor: " << endl;
			cin >> multi1;
			cout << "Ingresa el segundo valor: " << endl;
			cin >> multi2;
			cout << "El resultado es: " << endl;
			multiplicacion(multi1, multi2);
			cin.ignore();
			cout << "Gracias por usar esta calculadora" << endl;
			cin.get();
		}
		else if (operacion == 3) {
			float div1 = 0;
			float div2 = 0;
			cout << "Ingresa el dividendo: " << endl;
			cin >> div1;
			cout << "Ingresa el divisor: " << endl;
			cin >> div2;
			cout << "El resultado es: " << endl;
			division(div1, div2);
			cin.ignore();
			cout << "Gracias por usar esta calculadora" << endl;
			cin.get();
		}
		else if (operacion == 4) {
			int mod1 = 0;
			int mod2 = 0;
			cout << "Ingresa el dividendo: " << endl;
			cin >> mod1;
			cout << "Ingresa el divisor: " << endl;
			cin >> mod2;
			cout << "El resultado es: " << endl;
			modulo(mod1, mod2);
			cin.ignore();
			cout << "Gracias por usar esta calculadora" << endl;
			cin.get();
		}
		else if (operacion == 5) {
			int base = 0;
			int exponente = 0;
			cout << "Ingresa la base: " << endl;
			cin >> base;
			cout << "Ingresa el exponente: " << endl;
			cin >> exponente;
			cout << "El resultado es: " << endl;
			potencia(base, exponente);
			cin.ignore();
			cout << "Gracias por usar esta calculadora" << endl;
			cin.get();
		}
		else {
			cout << "Operacion invalida" << endl;
		}
	}
    return 0;
}