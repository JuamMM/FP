#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double n, r;
	int entero;
	cout << "Inserte un numero decimal: ";	
	cin >> n;
	cout << "Inserte el numero de decimales que desea truncar: ";	
	cin >> r;
	n = n * pow(10,r);
	entero = n;
	n = entero / pow(10,r);
	cout << "Este es su numero truncado: " << n;
}
