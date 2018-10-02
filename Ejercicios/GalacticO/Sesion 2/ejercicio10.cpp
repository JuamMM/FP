#include <iostream>
using namespace std;

int main()
{
	int caja_izda, caja_dcha, cambio;
	cout << "Inserte el valor de la caja izquierda: ";
	cin >> caja_izda;
	cout << "Inserte el valor de la caja derecha: ";
	cin >> caja_dcha;
	cambio = caja_dcha;
	caja_dcha = caja_izda;
	caja_izda = cambio;
	cout << "\nIntercambiamos los valores de la caja...\n\n";
	cout << "La caja izquierda vale " << caja_izda << "\n";
	cout << "La caja derecha vale " << caja_dcha;
}
