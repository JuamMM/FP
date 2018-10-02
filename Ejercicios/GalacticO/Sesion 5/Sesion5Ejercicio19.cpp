#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double esperanza, desviacion, incremento;
	double min, max, x;
	double gauss;
	
	cout << "Inserte la esperanza o media: ";
	cin >> esperanza;
	
	do {
		cout << "Inserte la desviacion tipica: ";
		cin >> desviacion;
	} while (desviacion < 0);
	
	cout << "Inserte un minimo: ";
	cin >> min;
	
	do {
		cout << "Inserte un maximo: ";
		cin >> max;	
	} while (max < min);
	
	cout << "Inserte el incremento: ";
	cin >> incremento;
	
	x = min;
	while (x <= max) {
		gauss = 1.0/(desviacion*sqrt(2*3.1415)) * exp( -0.5 * pow( (x-esperanza)/desviacion , 2) );
		cout << "\n" << gauss;
		x = x + incremento;
	}
	
}
