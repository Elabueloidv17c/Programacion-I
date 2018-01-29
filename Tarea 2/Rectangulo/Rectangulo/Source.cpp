#include <iostream>

using namespace std;

int resultado;

int base;
int altura;
int area;
int perimetro;

void rectangulo (int &P, int &A, int a, int b) {
	P = a * 2 + b * 2;
	A = a * b;
	return;
}

void printR() {
	cout << "Calcularemos el area y el perimetro de un rectangulo, por favor ingresa los valores en metros." << endl;
	cout << "Primero, escribe el valor de la base: " << endl;
	cin >> base;
	cout << "Ahora ingresa la altura: " << endl;
	cin >> altura;
	rectangulo(perimetro, area, base, altura);
	cout << "El area del rectangulo es de: " << area << " metros cuadrados" << endl;
	cout << "El perimetro del rectangulo es de: " << perimetro << " metros" << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << "Gracias por usar el programa =)" << endl;
	cin.ignore();
	cin.get();
	return;
}


int main() {
	printR();
	return 0;
}