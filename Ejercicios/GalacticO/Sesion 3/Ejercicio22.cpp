#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double precio;															//Se declaran las variables necesarias para los cálculos
	double descuento1, descuento2;
	double prec_descontado1, prec_descontado2;
	cout << "Indique el precio de su billete: ";							//Se le pide al usuario que introduzca datos
	cin >> precio;
	cout << "Indique el primer descuento: ";							//Se le pide al usuario que introduzca datos
	cin >> descuento1;
	cout << "Indique el segundo descuento: ";							//Se le pide al usuario que introduzca datos
	cin >> descuento2;
	prec_descontado1 = precio - (precio * descuento1 * 0.01);								//Se calculan los descuentos y se le restan al precio
	prec_descontado2 = precio - (precio * descuento2 * 0.01);
	cout << "Con el primer descuento, vale " << prec_descontado1 << "." << endl;	//Los resultados son mostrados en pantalla
	cout << "Con el segundo descuento, vale " << prec_descontado2 << ".";
}
