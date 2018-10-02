#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double hor1;																		
	double min1;
	double sec1;
	double hor2;
	double min2;
	double sec2;
	cout << "Inserte la hora inicial. HORA: ";										
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
	
	double secfinal = (hor2 - hor1) * 3600 + (min2 - min1) * 60 + (sec2 - sec1);		
	
	if (secfinal<0) {
		cout << "El primero no es anterior";
	}
	else {
		cout << "El primero es anterior";
	}
}
