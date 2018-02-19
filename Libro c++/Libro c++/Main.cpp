#include "std_lib_facilities.h"
#include "Capitulo 4.h"
#include "Capitulo 5.h"
#include "Capitulo 6.h"


int main(){
	cout << "Que capitulo quieres ver?" << endl;
	cout << "4.- Capitulo 4" << endl;
	cout << "5.- Capitulo 5" << endl;
	cout << "6.- Capitulo 6" << endl;
	int selector;
	cin >> selector;
	if (selector == 4) {
		int opcion;
		cout << "Menu: " << endl;
		cout << "1.- Primer drill" << endl;
		cout << "2.- Segundo drill" << endl;
		cout << "3.- Ejercicio 2" << endl;
		cout << "4.- Ejercicio 3" << endl;
		cout << "5.- Ejercicio 5" << endl;
		cout << "6.- Ejercicio 8" << endl;
		cout << "7.- Ejercicio 18" << endl;
		cout << "8.- Ejercicio 19" << endl;
		cin >> opcion;
		if (opcion == 1) {
			cout << "Bienvenido al Drill 1" << endl << endl;
			double primero;
			double segundo;
			drill(primero, segundo);
			cin.ignore();
			cin.get();
		}
		else if (opcion == 2) {
			cout << "Bienvenido al Drill 2" << endl << endl;
			double mayor;
			double menor;
			double numero;
			drill_2(numero, mayor, menor);
			cin.ignore();
			cin.get();
		}
		else if (opcion == 3) {
			cout << "Bienvenido al Ejercicio 2" << endl << endl;
			ejer_2();
		}
		else if (opcion == 4) {
			cout << "Bienvenido al Ejercicio 3" << endl << endl;
			ejer_3();
		}
		else if (opcion == 5) {
			cout << "Bienvenido al Ejercicio 5" << endl << endl;
			ejer_5();
		}
		else if (opcion == 6) {
			cout << "Bienvenido al Ejercicio 8" << endl << endl;
			ejer_8();
		}
		else if (opcion == 7) {
			cout << "Bienvenido al Ejercicio 18" << endl << endl;
			ejer_18();
		}
		else if (opcion == 8) {
			cout << "Bienvenido al Ejercicio 19" << endl << endl;
			ejer_19();
		}
	}
	else if (selector == 5) {
		int opcion;
		cout << "Que ejercicio quieres ejecutar?" << endl;
		cout << "1.- Drill" << endl;
		cout << "2.- Ejercicios 2 y 3" << endl;
		cout << "3.- Ejercicios 4 y 5" << endl;
		cout << "4.- Ejercicio 12" << endl;
		cin >> opcion;
		if (opcion == 1)
			Drill_5();
		if (opcion == 2)
			ejer_2y3_5();
		if (opcion == 3)
			ejer_4y5_5();
		if (opcion == 4)
			ejer_12_5();
		else
			cout << "Operacio invalida" << endl;
	}
	else if (selector == 6) {
		int opcion;
		cout << "Que ejercicio quieres ejecutar?" << endl;
		cout << "1.- Drill" << endl;
		cin >> opcion;
		if (opcion == 1)
			try {
				while (cin) {
					Token t = ts.get();
					if (t.kind == 'q') 
						break; // 'q' for quit
					if (t.kind == ';')        // ';' for "print now"
						cout << "=" << val << '\n';
					else
						ts.putback(t);
					val = expression();
				}
				keep_window_open();
			}
			catch (exception& e) {
				cerr << "error: " << e.what() << '\n';
				keep_window_open();
				return 1;
			}
			catch (...) {
				cerr << "Oops: unknown exception!\n";
				keep_window_open();
				return 2;
			}
			else
				cout << "Operacio invalida" << endl;
	}
	return 0;
}