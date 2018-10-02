#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double hor1;																		//Creamos todas las variables necesarias para el cálculo de la hora
	double min1;
	double sec1;
	double hor2;
	double min2;
	double sec2;
	cout << "Inserte la hora inicial. HORA: ";											//Se le pide al usuario que inserte los datos
	cin >> hor1;
	cout << "MINUTOS: ";
	cin >> min1;
	cout << "SEGUNDOS: ";
	cin >> sec1;
	cout << "Inserte la hora final. HORA: ";
	cin >> hor2;
	cout << "MINUTOS: ";
	cin >> min2;
	cout << "SEGUNDOS: ";
	cin >> sec2;
	double secfinal = (hor2 - hor1) * 3600 + (min2 - min1) * 60 + (sec2 - sec1);		//El cálculo de los segundos es realizado e introducido en una variable
	cout << "Entre la hora inicial y la final han pasado " << secfinal << " segundos.";	//Se muestra en pantalla el resultado final
}
