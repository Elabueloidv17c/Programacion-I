#include <iostream>
#include <string>

using namespace std;

int main() {
	//Ejercicio 2
	float millas;
	float kilometros = 1.609f;
	cout << "Convierte millas a kilometros!" << endl;
	cout << endl;
	cout << "Cuantas millas quieres convertir?" << endl;
	cin >> millas;
	float resultado = millas * kilometros;
	cout << "Eso son " << resultado << " kilometros!" << endl;
	cin.ignore();
	cin.get();

	//Al poner tipos de dato invalidos el programa no compila
	//Ejercicios 4 y 5
	cout << "Ingresa dos valores con decimales" << endl;
	double val1;
	double val2;
	cin >> val1;
	cin >> val2;
	if (val1 > val2) {
		cout << "El numero mayor es: " << val1 << endl;
		cout << "El numero menor es: " << val2 << endl;
	}
	else {
		cout << "El numero mayor es: " << val2 << endl;
		cout << "El numero menor es: " << val1 << endl;
	}
	double dif = abs(val1 - val2);
	double product = val1 * val2;
	cout << "La suma de los numeros es: " << val1 + val2 << endl;
	cout << "La diferencia entre ambos valores es de: " << dif << endl;
	cout << "El producto de los valores es: " << product << endl;
	cout << "El resultado de la division de estos numeros es: " << val1 / val2 << endl;
	cin.ignore();
	cin.get();
	//Ejercicio 6
	float v1, v2, v3, menor = 0, medio = 0, mayor = 0;
	cout << "Ingresa tres valores: " << endl;
	cin >> v1;
	cin >> v2;
	cin >> v3;
	cin.ignore();
	if (v1 >= v2 && v1 >= v3) {
		mayor = v1;
	}
	else {
		if (v2 >= v3) {
			mayor = v2;
		}
		else {
			mayor = v3;
		}
	}
	if (v1 <= v2 && v1 <= v3) {
		menor = v1;
	}
	else {
		if (v2 <= v3) {
			menor = v2;
		}
		else {
			menor = v3;
		}
	}
	if (v1 == mayor || v1 == menor) {
		if (v2 == mayor || v2 == menor) {
			medio = v3;
		}
		else {
			medio = v2;
		}
	}
	else {
		medio = v1;
	}
	cout << menor << ", " << medio << ", " << mayor << endl;
	cin.get();
	//Ejercicio 7
	string str1, str2, str3;
	string str_menor, str_medio, str_mayor;
	cout << "Ingresa tres valores: " << endl;
	cin >> str1;
	cin >> str2;
	cin >> str3;
	cin.ignore();
	if (str1 >= str2 && str1 >= str3) {
		str_mayor = str1;
	}
	else {
		if (str2 >= str3) {
			str_mayor = str2;
		}
		else {
			str_mayor = str3;
		}
	}
	if (str1 <= str2 && str1 <= str3) {
		str_menor = str1;
	}
	else {
		if (str2 <= str3) {
			str_menor = str2;
		}
		else {
			str_menor = str3;
		}
	}
	if (str1 == str_mayor || str1 == str_menor) {
		if (str2 == str_mayor || str2 == str_menor) {
			str_medio = str3;
		}
		else {
			str_medio = str2;
		}
	}
	else {
		str_medio = str1;
	}
	cout << str_menor << ", " << str_medio << ", " << str_mayor << endl;
	cin.get();

	//Ejercicio 8
	int par;
	cout << "Escribe un numero, te dire si es par o no" << endl;
	cin >> par;
	if (par % 2 == 0) {
		cout << "Si es par" << endl;
	}
	else {
		cout << "No es par" << endl;
	}
	cin.ignore();
	cin.get();
	//Ejercicio 9
	string numero;
	cout << "Escribe un numero con letra, lo traducire a digito" << endl;
	cin >> numero;
	if (numero == "cero") {
		cout << 0;
	}
	else if (numero == "uno") {
		cout << 1;
	}
	else if (numero == "dos") {
		cout << 2;
	}
	else if (numero == "tres") {
		cout << 3;
	}
	else if (numero == "cuatro") {
		cout << 4;
	}
	else {
		cout << "No conozco ese numero" << endl;
	}
	cin.ignore();
	cin.get();
	//ejercicio 10
	string operacion;
	int numero1;
	int numero2;
	cout << "Escribe el signo de una operacion (+,-,*,/)" << endl;
	cin >> operacion;
	cout << "Escribe el primer numero" << endl;
	cin >> numero1;
	cout << "Escribe el segundo numero a operar: " << endl;
	cin >> numero2;
	if (operacion == "+") {
		cout << "El resultado es: " << numero1 + numero2 << endl;
	}
	else if (operacion == "-") {
		cout << "El resultado es: " << numero1 - numero2 << endl;
	}
	else if (operacion == "*") {
		cout << "El resultado es: " << numero1 * numero2 << endl;
	}
	else if (operacion == "/") {
		cout << "El resultado es: " << numero1 / numero2 << endl;
	}
	else {
		cout << "Operacion desconocida" << endl;
	}
	cin.ignore();
	cin.get();
	//Ejercicio 11
	cout << "Vamos a contar tus monedas" << endl;
	int unPeso, dosPesos, cincoPesos, diezPesos, veintePesos, cincuentaPesos;
	cout << "Cuantas tienes de un peso?" << endl;
	cin >> unPeso;
	cout << "Cuantas tienes de dos pesos?" << endl;
	cin >> dosPesos;
	cout << "Cuantas tienes de cinco pesos?" << endl;
	cin >> cincoPesos;
	cout << "Cuantas tienes de diez pesos?" << endl;
	cin >> diezPesos;
	cout << "Cuantas tienes de viente pesos?" << endl;
	cin >> veintePesos;
	cout << "Cuantas tienes de cincuenta pesos?" << endl;
	cin >> cincuentaPesos;
	if (unPeso > 1 || unPeso == 0) {
		cout << "Tienes " << unPeso << " monedas de un peso" << endl;
	}
	else{
		cout << "Tienes 1 moneda de un peso" << endl;
	}
	if (dosPesos > 1 || dosPesos == 0) {
		cout << "Tienes " << dosPesos << " monedas de dos pesos" << endl;
	}
	else{
		cout << "Tienes 1 moneda de dos pesos" << endl;
	}	
	if (cincoPesos > 1 || cincoPesos == 0) {
		cout << "Tienes " << cincoPesos << " monedas de cinco pesos" << endl;
	}
	else{
		cout << "Tienes 1 moneda de cinco pesos" << endl;
	}	
	if (diezPesos > 1 || diezPesos == 0) {
		cout << "Tienes " << diezPesos << " monedas de diez pesos" << endl;
	}
	else{
		cout << "Tienes 1 moneda de diez pesos" << endl;
	}	
	if (veintePesos > 1 || veintePesos == 0) {
		cout << "Tienes " << veintePesos << " monedas de viente pesos" << endl;
	}
	else{
		cout << "Tienes 1 moneda de veinte pesos" << endl;
	}	
	if (cincuentaPesos > 1 || cincuentaPesos == 0) {
		cout << "Tienes " << cincuentaPesos << " monedas de cincuenta pesos" << endl;
	}
	else{
		cout << "Tienes 1 moneda de cincuenta pesos" << endl;
	}
	int total = unPeso + dosPesos*2 + cincoPesos*5 + diezPesos*10 + veintePesos*20 + cincuentaPesos*50;
	cout << "En total tienes: " << total << " pesos!" << endl;
	cin.ignore();
	cin.get();

	return 0;
}