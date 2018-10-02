#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout.precision(15);
	int posicion, bit, bit_total;
	double cont_letras = 0, cont_otros = 0, porcentaje_letras, porcentaje_otros;
	char caracter_equivalente;
	bool bit_negativo= false;
	
	do {
		posicion = 8;
		bit_total = 0;
		
		cout << "Inserte 8 bits que seran traducidos a caracter ASCII.\n"
		<< "Deberan ser ceros y unos, en caso de numero negativo se detendra el programa.\n";
		
		do {
			posicion--;
			do {
				cin >> bit;
			} while (bit > 1);
			
			bit_total = bit_total + (bit * pow(2,posicion) );
			
			if (bit < 0) bit_negativo=true;
			
		} while (!bit_negativo && posicion > 0);
		
		char caracter_equivalente = bit_total;
		
		if (!bit_negativo)
		cout << "Traducido a caracter, los bits pasan a ser " << caracter_equivalente << endl;
		
		if (!bit_negativo) {
			if ((bit_total >= 65 && bit_total <= 90) || (bit_total >= 97 && bit_total <= 122)) {
				cont_letras++;
			} else {
				cont_otros++;
			}
		}
	} while (!bit_negativo);
	
	porcentaje_letras = cont_letras/(cont_letras+cont_otros) * 100.0;
	porcentaje_otros = cont_otros/(cont_letras+cont_otros) * 100.0;
	
	cout << "\nPorcentaje de letras: " << porcentaje_letras << " %\n";
	cout << "Porcentaje de otros: " << porcentaje_otros << " %\n";
}
// 1 2 3 4 5 6 7 uwu 8 9 10 11 12 13 14 15 16 17 18 19 20 21
