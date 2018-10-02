#include <iostream>
using namespace std;

int main() 
{
	double precio = 150;														
	double km;
	cout << "Indique cuantos kilometros se encuentra su destino: ";		
	cin >> km;			
	if (km>300) {
		precio = 150 + ((km-300)*0.1);
	}
	cout << "El precio de su billete es " << precio << ".";				
}
