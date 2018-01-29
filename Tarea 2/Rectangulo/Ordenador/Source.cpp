#include <iostream>

using namespace std;

int numeros[4];
int ordenados[4];

int main() {
	cout << "ingresa los valores que quieras comparar: " << endl;
	cin >> numeros[0];
	cin >> numeros[1];
	cin >> numeros[2];
	cin >> numeros[3];
	cin.ignore();
	cin.get();
	return 0;
}