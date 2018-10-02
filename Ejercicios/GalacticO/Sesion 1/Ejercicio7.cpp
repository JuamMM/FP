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

/* A la hora de realizar el cálculo del capital final, podemos asignar el valor a la variable "capital" directamente, en vez
de hacerlo en la variable "total". 

Esto nos aporta una gran ventaja: nos ahorra la necesidad de usar una variable más para guardar el resultado, ahorrando así
más espacio en la memoria.

Sin embargo, tambien presenta un inconveniente, y es que ya no se podrá usar el valor introducido originalmente, 
dado que lo hemos cambiado. Esto haría imposible hacer más de un cálculo usando esta variable. */
