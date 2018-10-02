#include <iostream>
using namespace std;

int main() {
	double precio = 150;
	double preciof;														
	double km;
	double desc1;
	double desc2;
	double puntos;
	char nuevo_billete;
	
	cout << "Programa para calcular la tarifa aerea de uno o mas billetes.\n";
	cout << "Desea introducir un billete?\nIntroduzca [N] para continuar.\nIntroduzca [#] para salir.\n";
	do {
		cin >> nuevo_billete;
	} while (nuevo_billete != 'N' && nuevo_billete != '#');
	
	while (nuevo_billete == 'N') {
		
		do {
			cout << "Indique a cuantos kilometros se encuentra su destino: ";	
			cin >> km;
		} while (km <= 0);
	
		do {
			cout << "Indique cuantos puntos posee: ";	
			cin >> puntos;
		} while (0 > puntos || puntos > 400);
	
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
		preciof = preciof + precio - (precio*desc1) - (precio*desc2);
		
		cout << "El precio de su billete es " << preciof << ".\n";
		cout << "Desea introducir otro billete?\nIntroduzca [N] para continuar.\nIntroduzca [#] para salir.\n";
		do {
			cin >> nuevo_billete;
		} while (nuevo_billete != 'N' && nuevo_billete != '#');
		
	};
}
