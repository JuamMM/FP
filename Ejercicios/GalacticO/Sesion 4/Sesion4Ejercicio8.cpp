#include <iostream>
using namespace std;

int main() 
{
	double precio = 150;
	double preciof;														
	double km;
	double desc1;
	double desc2;
	double puntos;
	cout << "Indique cuantos kilometros se encuentra su destino: ";	
	cin >> km;
	cout << "Indique cuantos puntos posee: ";	
	cin >> puntos;
	
	/* Precio del billete */			
	if (km>300) {
		precio = 150 + ((km-300)*0.1);
	}
	
	/* Descuentos */
	if (km>700) { 
		desc1 = 2.0/100; 
	}
	else {
		desc1 = 0;
	}
	
	if (puntos>100) {
		if (puntos>200) {
			desc2 = 4.0/100;	
		}
		else {
			desc2 = 3.0/100;
		}
	}
	else {
		desc2 = 0;
	}
	
	/* Precio aplicando descuentos */
	preciof = precio - (precio*desc1) - (precio*desc2);
	
	cout << "El precio de su billete es " << preciof << ".";				
}
