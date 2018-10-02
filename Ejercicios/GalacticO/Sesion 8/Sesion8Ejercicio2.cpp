#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int tamanio_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int anio, mes, dia;
	bool anio_bisiesto, terminador;
	
	while (!terminador) {
		cout << "Inserte una fecha para comprobar si es valida\n";
		cout << "Dia: "; cin >> dia;
		
		if (dia < 0) terminador = true;
	
		if (!terminador) {
			cout << "Mes: "; cin >> mes;
			cout << "Anio: "; cin >> anio;
		
			if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
				anio_bisiesto = true;
			}
		
			if (anio_bisiesto && mes == 2) {
				if (dia <= 29) {
					cout << "SI\n";
				} else {
					cout << "NO\n";
				}
			} else {
				if (dia <= tamanio_mes[mes-1] && dia > 0 && mes <= 12) {
					cout << "SI\n";
				} else {
					cout << "NO\n";
				}		
			}
		}
	}
}

