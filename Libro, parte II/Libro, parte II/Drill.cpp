#include "Headers.h"

class Point {
public:
	int m_x;
	int m_y;

	Point(int x, int y) {
		m_x = x;
		m_y = y;
	};

	Point(const Point& nuevaCoor) {
		m_x = nuevaCoor.m_x;
		m_y = nuevaCoor.m_y;
	}
};

int x;
int y;
Point coor(x, y);
vector<Point> original_points;
vector<Point> processed_points;

int Drill_10() {
	ofstream archivo;
	archivo.open("mydata.txt");
	for (int i = 0; i < 7; i++) {
		cout << "Introduce los valores numericos de las coordenadas separados por un espacio: " << endl;
		cin >> coor.m_x >> coor.m_y;
		Point nuevaCoor(coor);
		original_points.push_back(nuevaCoor);
	}
	cout << "Las coordenadas son las siguientes: " << endl;
	for (int i = 0; i < 7; i++) {
		cout << "X: " << original_points[i].m_x << "	Y: " << original_points[i].m_y << endl;
		archivo << original_points[i].m_x << " " << original_points[i].m_y << endl;
	}
	archivo.close();
	ifstream lectura;
	lectura.open("mydata.txt");
	cout << "La copia de las coordenadas es la siguiente: " << endl;
	int i = 0;
	while (!lectura.eof()) {
		lectura >> x >> y;
		Point copiaCoor(coor);
		copiaCoor.m_x = x;
		copiaCoor.m_y = y;
		processed_points.push_back(copiaCoor);
		cout << "X: " << processed_points[i].m_x << "	Y: " << processed_points[i].m_y << endl;
		i++;
		//El loop empuja un objeto más  de los que debería al final del vector
	}
	if (original_points.size() != processed_points.size())
		cout << "Algo anda mal..." << endl;
	return 0;
}