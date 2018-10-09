#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double numero, truncar;  // Variables
	int entero;  // numero Truncado a devolver
	cout << "Inserte un numero decimal: ";	
	cin >> numero;
	cout << "Inserte el numero de decimales que desea truncar: ";	
	cin >> truncar;
	numero = numero * pow(10,truncar);
	entero = numero;
	numero = entero / pow(10,truncar);
	cout << "Este es su numero truncado: " << numero;
}
