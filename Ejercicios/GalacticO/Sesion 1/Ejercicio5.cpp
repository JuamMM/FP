#include <iostream>
using namespace std;

int main() 
{
	double precio;														//Usando double se declaran las variables
	double km;
	cout << "Indique cuantos kilometros se encuentra su destino: ";		//Se pide al usuario que introduzca los datos
	cin >> km;															
	precio = 150+km*0.1;												//Calculamos el precio según los datos
	cout << "El precio de su billete es " << precio << ".";				//Se muestra en pantalla el resultado
}
