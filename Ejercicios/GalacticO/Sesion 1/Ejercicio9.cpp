#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double numero;																							//Establecemos las variables necesarias para el c�lculo
	double decimas;
	cout << "Este programa le permite redondear un numero decimal a la decima que usted elija." << endl;	//Explicaci�n del programa
	cout << "Escriba un numero decimal: ";																	//Se le pide al usuario que introduzca datos
	cin >> numero;
	cout << "Escriba a cuantas decimas desea aproximar: ";
	cin >> decimas;
	numero = numero * pow (10, decimas);																	//El n�mero decimal se multiplica, pasando los decimales 
	numero = round(numero);																					//a la parte entera. Se redondean los decimales restantes,
	numero = numero / pow (10, decimas);																	//y se divide el n�mero.
	cout << "Tu numero aproximado es: " << numero;															//Se muestra el resultado final en pantalla
}
