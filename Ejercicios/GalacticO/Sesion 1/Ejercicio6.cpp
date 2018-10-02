#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double precio;															//Se declaran las variables necesarias para los cálculos
	double descuento1;
	double descuento2;
	cout << "Indique el precio de su billete: ";							//Se le pide al usuario que introduzca datos
	cin >> precio;
	descuento1 = precio - (precio * 4 /100);								//Se calculan los descuentos y se le restan al precio
	descuento2 = precio - (precio * 2 /100);
	cout << "Con un descuento del 4%, vale " << descuento1 << "." << endl;	//Los resultados son mostrados en pantalla
	cout << "Con un descuento del 2%, vale " << descuento2 << ".";
}
