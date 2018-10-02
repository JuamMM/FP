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

	if (hor1==hor2) {
		if (min1==min2) {
			if (sec1==sec2) {
				cout << "El primero no es anterior";	
			}
			else {
				if (sec1<sec2) {
					cout << "El primero es anterior";
				}
				else {
					cout << "El primero no es anterior";
				}
			}
		}
		else {
			if (min1<min2) {
				cout << "El primero es anterior";
			}
			else {
				cout << "El primero no es anterior";
			}
		}
	}
	else {
		if (hor1<hor2) {
			cout << "El primero es anterior";
		}
		else {
			cout << "El primero no es anterior";
		}
	}
	
	
}
