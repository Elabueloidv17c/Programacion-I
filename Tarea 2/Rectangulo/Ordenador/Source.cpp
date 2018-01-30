#include <iostream>

using namespace std;

int numeros[4];

int primero;
int segundo;
int tercero;
int cuarto;

int main() {
	cout << "ingresa los valores que quieras comparar: " << endl;
	cin >> numeros[0];
	cin >> numeros[1];
	cin >> numeros[2];
	cin >> numeros[3];
	cout << numeros[0] << " " << numeros[1] << " " << numeros[2] << " " << numeros[3] << "." << endl;
	int temp;
	if (numeros[0] < numeros[1]) {
		primero = numeros[0];
		segundo = numeros[1];
	}
	else {
		primero = numeros[1];
		segundo = numeros[0];
	}
	if (numeros[2] < segundo) {
		tercero = segundo;
		segundo = numeros[2];
		if (segundo < primero) {
			temp = segundo;
			segundo = primero;
			primero = temp;
		}
	}
	else {
		tercero = numeros[2];
	}
	if (numeros[3] < tercero) {
		cuarto = tercero;
		tercero = numeros[3];
		if (tercero < segundo) {
			temp = tercero;
			tercero = segundo;
			segundo = temp;
			if (segundo < primero) {
				temp = segundo;
				segundo = primero;
				primero = temp;
			}
		}
	}
	else {
		cuarto = numeros[3];
	}
	numeros[0] = primero;
	numeros[1] = segundo;
	numeros[2] = tercero;
	numeros[3] = cuarto;
	cout << numeros[0] << " " << numeros[1] << " " << numeros[2] << " " << numeros[3] << "." << endl;
	cin.ignore();
	cin.get();
	return 0;
}