#include "Headers.h"

//Sobrecargando un output para un tipo de dato definido por el usuario
class person {
	string name;
	int age;
public:
	person() {
		name = "noname";
		age = 0;
	}
	friend ostream &operator << (ostream &output, person &p);//No entiendo esta parte
	friend istream &operator >> (istream &input, person &p);
};

//Sobrecarga de input de la clase person
istream &operator >> (istream &input, person &p) {
	input >> p.name >> p.age;
	return input;
}

//Sobrecarga de output de la clase person
ostream &operator << (ostream &output, person &p) {
	output << "Mi nombre es " << p.name << " y mi edad es " << p.age << endl;
	return output;
}

//Prueba de las funciones de sobrecarga
int sobrecarga() {
	cout << "Teclea tu nombre y tu edad separados por un espacio... " << endl;
	person luis; //Nuevo objeto de la clase person
	cin >> luis; //No se requiere ingresar los miembros de la clase específicamente, ya que se definieron en la funcion
	cout << luis; //No se requiere imprimir cada parametro del objeto, ya que la funcion se encarga de darle formato
	cin.ignore();
	cin.get();
	return 0;
}