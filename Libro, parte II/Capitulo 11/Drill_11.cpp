#include "Headers.h"

int birth_year = 1991;

int Drill_11() {
	int birth_year = 1991;
	int a, b, c, d;
	cout << showbase << "Decimal: "<< birth_year << '\t' << oct << showbase << "Octadecimal: " << birth_year << '\t' 
		<< "Hexadecimal: " << showbase << hex << birth_year << endl;
	//El broblema es que el ultimo manipulador ingresado fue hex, este se mantiene hasta que se vuelva a hacer un cambio
	cout << birth_year << endl;
	//Esto cambia el manipulador de vuelta a decimal
	cout << dec << birth_year << endl;
	//El cin se encarga de transformar los datos ingresados al formato especificado, es por esto el cout los imprime directamente de esa forma
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';
	float numero = 1234567.89f;
	//El de mayor precision es el fixed, ya que tiene 6 valores decimales despues del punto.
	cout << defaultfloat << numero << '\t' << fixed << numero << '\t' << scientific << numero << endl;
	cout << endl;
	//Tabla:
	cout << setw(10) << "Luis" << setw(10) << "Pineda" << setw(20) << "667-7-57-67-49" << setw(35) << "funkalux@gmail.com" << endl;
	cout << setw(10) << "Arturo" << setw(10) << "Ordoñez" << setw(20) << "667-1-21-25-15" << setw(35) << "arturo.k@hotmail.com" << endl;
	cout << setw(10) << "Diana" << setw(10) << "Camacho" << setw(20) << "667-1-91-82-92" << setw(35) << "dianitaccg@gmail.com" << endl;
	cout << setw(10) << "Ninfa" << setw(10) << "Chavez" << setw(20) << "667-7-62-44-95" << setw(35) << "ninfa.chavez58@hotmail.com" << endl;
	cout << setw(10) << "Horacio" << setw(10) << "Garcia" << setw(20) << "667-1-75-83-44" << setw(35) << "horacio.r.medina@gmail.com" << endl;
	cout << setw(10) << "Julian" << setw(10) << "Leyva" << setw(20) << "667-7-26-12-65" << setw(35) << "jul_ianmaster@hotmail.com" << endl;
	cin.ignore();
	cin.get();
	return 0;
}
