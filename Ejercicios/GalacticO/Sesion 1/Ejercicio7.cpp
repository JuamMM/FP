#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double capital;
	double interes;
	double total;
	cout << "Inserte capital: ";
	cin >> capital;
	cout << "Inserte interes: ";
	cin >> interes;
	capital = capital + capital * interes / 100;
	cout << "Su capital final es " << capital;
}

/* A la hora de realizar el c�lculo del capital final, podemos asignar el valor a la variable "capital" directamente, en vez
de hacerlo en la variable "total". 

Esto nos aporta una gran ventaja: nos ahorra la necesidad de usar una variable m�s para guardar el resultado, ahorrando as�
m�s espacio en la memoria.

Sin embargo, tambien presenta un inconveniente, y es que ya no se podr� usar el valor introducido originalmente, 
dado que lo hemos cambiado. Esto har�a imposible hacer m�s de un c�lculo usando esta variable. */
