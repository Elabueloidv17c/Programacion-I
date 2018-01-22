// read and write a first name
#include "std_lib_facilities.h"

int main()
{
	cout << "Por favor escribe tu nombre (y luego presiona'Enter'):\n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Hola, " << first_name << "!\n";
	cout << "A quien quieres escribirle una carta?\n";
	string destinatario;
	cin >> destinatario;
	cout << "Dime el nombre de algun amigo tuyo\n";
	string friend_name;
	cin >> friend_name;
	cout << "Tu amigo es hombre o mujer?(escribe una 'h' si es hombre o una 'm' si es mujer)\n";
	char friend_sex = 0;
	cin >> friend_sex;
	cout << "cual es tu edad?\n";
	int age;
	cin >> age;
	cout << "Hola " << destinatario << ", no olvides nuestra cita mañana =) \n";
	cout << "Has visto a " << friend_name << " ultimamente? \n";
	if (friend_sex == 'm') {
		cout << "si la ves dile que me llame\n";
	}
	else if (friend_sex == 'h') {
		cout << "si ves al " << friend_name << " dile que me llame\n";
	}
	if (age <= 0 || age >= 110) {
		simple_error("Seas mamon...");
	}
	else {
		if (age < 12) {
			cout << " El proximo año vas a tener " << age + 1 << " años\n" << "felicidades!\n";
		}
		else if (age == 17) {
			cout << "El proximo año vas a poder pistear legalmente =D\n" << "felicidades!\n";
		}
		else if (age > 70) {
			cout << "A ver si alcanzas a ver el proximo año...\n";
		}
		else {
			cout << "Escuche que acabas de cumplir " << age << " años\n" << "felicidades!\n";
		}
	}

	cout << "Atentamente\n";
	cout << "________________\n";
	cout << "________________\n";
	cout << first_name << "\n";
	keep_window_open();
}
